/*
 * Toaster controller with LVGL GUI + networking + reconnect button
 *
 * Features:
 *  - Polls /toaster/status on configured server periodically
 *  - GUI slider (throttled updates), Start/Stop buttons
 *  - Local countdown in GUI that runs when Start pressed
 *  - Network <-> GUI messaging (k_msgq)
 *  - Reconnect button: tries up to 3 immediate attempts when pressed
 *
 * Build/run notes:
 *  - Ensure CONFIG_NET_CONFIG_PEER_IPV4_ADDR and other net settings exist in prj.conf
 *  - Ensure LVGL and display are enabled in prj.conf if you want a GUI board+Renode with display
 */

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(toaster_device, LOG_LEVEL_DBG);

#include <zephyr/kernel.h>
#include <zephyr/net/net_ip.h>
#include <zephyr/net/socket.h>
#include <zephyr/net/http/client.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/display.h>
#include <zephyr/sys/printk.h>
#include <zephyr/random/random.h>

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

#include <lvgl.h>


/* ---------- Config ---------- */
#define HTTP_PORT        8000
#define SERVER_ADDR4     CONFIG_NET_CONFIG_PEER_IPV4_ADDR
#define POLL_INTERVAL_MS 3000
#define REQ_TIMEOUT_MS   3000


/* ---------- Buffers ---------- */
#define MAX_RECV_BUF_LEN 512
static uint8_t recv_buf_ipv4[MAX_RECV_BUF_LEN];

/* ---------- GPIO (simulated heater LED) ---------- */
#define GPIO_NODE DT_ALIAS(led0)
static const struct gpio_dt_spec gpio = GPIO_DT_SPEC_GET(GPIO_NODE, gpios);

/* ---------- DEVICE ENROLLMENT ---------- */
static atomic_t registering = ATOMIC_INIT(false);
static int64_t last_register_attempt_ms = 0;
static bool registered = false;

#define DEVICE_CODE_LEN 8
static char device_code[DEVICE_CODE_LEN + 1];
static lv_obj_t *code_label;                  


/* ---------- UI <-> NET message types ---------- */
typedef enum {
	UI_CMD_START,
	UI_CMD_STOP,
	UI_CMD_RETRY_CONNECT, /* payload: attempts (ignored) */
} ui_cmd_kind_t;

typedef struct {
	ui_cmd_kind_t kind;
	int seconds; /* valid for START */
} ui_cmd_msg_t;

/* Status pushed from network -> GUI */
typedef enum { CONN_UNKNOWN = -1, CONN_DOWN = 0, CONN_UP = 1 } conn_state_t;

typedef struct {
	conn_state_t conn;
	bool toasting;
	int remaining_s; /* -1 if unknown */
	char raw_status[160];
} ui_status_msg_t;

/* ---------- Queues ---------- */
K_MSGQ_DEFINE(ui_cmd_q, sizeof(ui_cmd_msg_t), 8, 4);    /* GUI -> network */
K_MSGQ_DEFINE(ui_status_q, sizeof(ui_status_msg_t), 8, 4); /* network -> GUI */

/* ---------- LVGL objects ---------- */
static lv_obj_t *status_label;
static lv_obj_t *time_label;
static lv_obj_t *slider;
static lv_obj_t *conn_label;

/* ---------- Local GUI state (countdown) ---------- */
static int toast_remaining_s = 0;
static bool local_toasting = false;

/* ---------- Thread sizing (tune if you hit stack issues) ---------- */
#define NET_THREAD_STACK     8192
#define NET_THREAD_PRIORITY  6

#define LVGL_THREAD_STACK     12288
#define LVGL_THREAD_PRIORITY  5
#define LVGL_TICK_MS          5

/* ---------- GPIO helpers ---------- */
static void toaster_gpio_on(void)
{
	if (gpio_is_ready_dt(&gpio)) {
		gpio_pin_set_dt(&gpio, 1);
		printk("GPIO: Heater ON\n");
		LOG_INF("GPIO: Heater ON");
	} else {
		printk("GPIO not ready!\n");
		LOG_WRN("GPIO not ready!");
	}
}

static void toaster_gpio_off(void)
{
	if (gpio_is_ready_dt(&gpio)) {
		gpio_pin_set_dt(&gpio, 0);
		printk("GPIO: Heater OFF\n");
		LOG_INF("GPIO: Heater OFF");
	}
}
/* ---------- Device ID gen ---------- */
static void gen_device_code(char *buf, size_t len) {
    static const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    static bool seeded = false;
    if (!seeded) {
        srand(time(NULL));  // only once
        seeded = true;
    }
    for (size_t i = 0; i < len - 1; i++) {
        int r = rand() % (sizeof(charset) - 1);
        buf[i] = charset[r];
    }
    buf[len - 1] = '\0';
}


/* ---------- Network helpers ---------- */
static int connect_socket(const char *server, int port, int *sock, struct sockaddr *addr)
{
	LOG_INF("Trying to connect to %s:%d", SERVER_ADDR4, HTTP_PORT);
	memset(addr, 0, sizeof(struct sockaddr_in));
	struct sockaddr_in *addr4 = (struct sockaddr_in *)addr;
	addr4->sin_family = AF_INET;
	addr4->sin_port = htons(port);
	if (inet_pton(AF_INET, server, &addr4->sin_addr) != 1) {
		LOG_ERR("inet_pton failed for %s", server);
		return -EINVAL;
	}

	*sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (*sock < 0) {
		LOG_ERR("Socket creation failed (%d)", errno);
		return -errno;
	}
	if (connect(*sock, addr, sizeof(struct sockaddr_in)) < 0) {
		int e = errno;
		LOG_ERR("Connect failed (%d)", e);
		close(*sock);
		*sock = -1;
		return -errno;
	}
	return 0;
}

static int http_simple_req(enum http_method method, const char *url_path)
{
    int sock;
    struct sockaddr addr;
    int ret;

    LOG_INF("HTTP request path: %s", url_path);

    ret = connect_socket(SERVER_ADDR4, HTTP_PORT, &sock, &addr);
    if (ret) {
        LOG_ERR("Socket connection failed: %d", ret);
        return ret;
    }

    struct http_request req = {
        .method       = method,
        .url          = url_path,
        .host         = SERVER_ADDR4,
        .protocol     = "HTTP/1.1",
        .recv_buf     = recv_buf_ipv4,
        .recv_buf_len = sizeof(recv_buf_ipv4),
    };

    ret = http_client_req(sock, &req, REQ_TIMEOUT_MS, NULL);
    close(sock);

    return ret;
}
static int send_register_http(void)
{
    LOG_INF("send_register function was called (POST)");

    int sock;
    struct sockaddr addr;
    int ret = connect_socket(SERVER_ADDR4, HTTP_PORT, &sock, &addr);
    if (ret) {
        LOG_ERR("Socket connection failed: %d", ret);
        return ret;
    }

    char json_body[64];
    snprintf(json_body, sizeof(json_body), "{\"code\":\"%s\"}", device_code);

    /* build HTTP request manually */
    char req_buf[256];
    int req_len = snprintf(req_buf, sizeof(req_buf),
        "POST /toaster/register HTTP/1.1\r\n"
        "Host: %s:%d\r\n"
        "Content-Type: application/json\r\n"
        "Content-Length: %zu\r\n"
        "\r\n"
        "%s",
        SERVER_ADDR4, HTTP_PORT, strlen(json_body), json_body);

    ret = send(sock, req_buf, req_len, 0);
    if (ret < 0) {
        LOG_ERR("send() failed: %d", errno);
        close(sock);
        return -errno;
    }

    /* optional: read response */
    int n = recv(sock, recv_buf_ipv4, sizeof(recv_buf_ipv4) - 1, 0);
    if (n > 0) {
        recv_buf_ipv4[n] = '\0';
        LOG_INF("Server response: %s", recv_buf_ipv4);
    }

    close(sock);
    LOG_INF("POST /toaster/register sent successfully: %s", json_body);
    return 0;
}




static int send_register(void)
{
    int64_t now = k_uptime_get();
    if ((now - last_register_attempt_ms) < 5000) { // 5 s backoff
        return -EBUSY;
    }
    last_register_attempt_ms = now;

    if (!atomic_cas(&registering, false, true)) {
        LOG_INF("Registration already in progress, skipping");
        return -EBUSY;
    }

    int ret = send_register_http();

    if (ret == 0) {
        registered = true;
        LOG_INF("Device registration successful");
    } else {
        LOG_WRN("Device registration failed (ret %d)", ret);
    }

    atomic_set(&registering, false);
    return ret;
}


static void send_start_http(int seconds)
{
    char path[64];
    snprintf(path, sizeof(path), "/toaster/start?sec=%d", seconds);
    (void)http_simple_req(HTTP_GET, path);
    LOG_INF("Network: sent START %d s", seconds);
}

static void send_stop_http(void)
{
    (void)http_simple_req(HTTP_GET, "/toaster/stop");
    LOG_INF("Network: sent STOP");
}

/* ---------- HTTP status response handler ---------- */
static int status_response_cb(struct http_response *rsp, enum http_final_call final_data, void *user_data)
{
    ARG_UNUSED(user_data);
    if (final_data != HTTP_DATA_FINAL) return 0;

    size_t n = rsp->data_len;
    if (n >= rsp->recv_buf_len) {
        n = rsp->recv_buf_len - 1;
    }
    char *buf = (char *)rsp->recv_buf;
    buf[n] = '\0';

    LOG_DBG("Network: raw status: %s", buf);

    bool toasting = (strstr(buf, "toasting") != NULL);
    int remaining = -1;
    const char *p = strstr(buf, "remaining=");
    if (p) {
        remaining = atoi(p + 10);
    }

    if (gpio_is_ready_dt(&gpio)) {
        gpio_pin_set_dt(&gpio, toasting ? 1 : 0);
    }

    ui_status_msg_t s = {
        .conn = CONN_UP,
        .toasting = toasting,
        .remaining_s = remaining,
    };
    strncpy(s.raw_status, buf, sizeof(s.raw_status) - 1);
    (void)k_msgq_put(&ui_status_q, &s, K_NO_WAIT);

    /* Attempt registration only after first successful status response */
    if (!registered) {
        int r = send_register();
        if (r == 0) {
            LOG_INF("status_response_cb: registration successful");
        } else {
            LOG_WRN("status_response_cb: registration attempt failed, will retry later");
        }
    }

    return 0;
}

/* ---------- Network thread ---------- */
/* ---------- Network thread ---------- */
static void network_thread(void *a, void *b, void *c)
{
    ARG_UNUSED(a); ARG_UNUSED(b); ARG_UNUSED(c);

    bool connected = false;
    int reconnect_backoff_ms = 500;

    while (1) {
        ui_cmd_msg_t cmd;
        while (k_msgq_get(&ui_cmd_q, &cmd, K_NO_WAIT) == 0) {
            switch (cmd.kind) {
                case UI_CMD_START:
                    if (connected) {
                        send_start_http(cmd.seconds);
                    } else {
                        LOG_WRN("Ignoring START, not connected");
                    }
                    break;

                case UI_CMD_STOP:
                    if (connected) {
                        send_stop_http();
                    } else {
                        LOG_WRN("Ignoring STOP, not connected");
                    }
                    break;

                case UI_CMD_RETRY_CONNECT:
                    LOG_INF("Network: reconnect requested by user");
                    connected = false;
                    break;
            }
        }

        /* Poll /toaster/status only if connected */
        if (connected) {
            int sock;
            struct sockaddr addr;
            int r = connect_socket(SERVER_ADDR4, HTTP_PORT, &sock, &addr);
            if (r == 0) {
                struct http_request req = {
                    .method       = HTTP_GET,
                    .url          = "/toaster/status",
                    .host         = SERVER_ADDR4,
                    .protocol     = "HTTP/1.1",
                    .response     = status_response_cb,
                    .recv_buf     = recv_buf_ipv4,
                    .recv_buf_len = sizeof(recv_buf_ipv4),
                };
                http_client_req(sock, &req, REQ_TIMEOUT_MS, NULL);
                close(sock);
            } else {
                LOG_WRN("Connection lost during polling");
                connected = false;
            }
        }

        /* Attempt reconnection if not connected */
        if (!connected) {
            int sock;
            struct sockaddr addr;
            bool ok = false;
            for (int i = 0; i < 3; i++) {
                if (connect_socket(SERVER_ADDR4, HTTP_PORT, &sock, &addr) == 0) {
                    close(sock);
                    ok = true;
                    break;
                }
                k_sleep(K_MSEC(reconnect_backoff_ms));
            }
            connected = ok;

            ui_status_msg_t s = {
                .conn = connected ? CONN_UP : CONN_DOWN,
                .toasting = false,
                .remaining_s = -1
            };
            k_msgq_put(&ui_status_q, &s, K_NO_WAIT);

            if (!connected) {
                LOG_WRN("Reconnect failed, will retry on next loop or user request");
            }
        }

        k_sleep(K_MSEC(POLL_INTERVAL_MS));
    }
}

/* ---------- GUI callbacks ---------- */
static void slider_event_cb(lv_event_t *e)
{
	ARG_UNUSED(e);

	static int64_t last_ms = 0;
	int64_t now = k_uptime_get();
	if ((now - last_ms) < 500) return;
	last_ms = now;

	int v = (int)lv_slider_get_value(slider);
	char buf[32];
	snprintf(buf, sizeof(buf), "%ds", v);
	lv_label_set_text(time_label, buf);
}

static void start_btn_event_cb(lv_event_t *e)
{
	ARG_UNUSED(e);

	ui_cmd_msg_t cmd = { .kind = UI_CMD_START, .seconds = (int)lv_slider_get_value(slider) };
	(void)k_msgq_put(&ui_cmd_q, &cmd, K_NO_WAIT);
	printk("GUI: Start pressed -> %d s (queued to network)\n", cmd.seconds);

	toast_remaining_s = cmd.seconds;
	local_toasting = (toast_remaining_s > 0);
	if (local_toasting) {
		char line[96];
		snprintf(line, sizeof(line), "Status: Toasting (%ds left)", toast_remaining_s);
		lv_label_set_text(status_label, line);
	}

	toaster_gpio_on();
}

static void stop_btn_event_cb(lv_event_t *e)
{
	ARG_UNUSED(e);

	ui_cmd_msg_t cmd = { .kind = UI_CMD_STOP, .seconds = 0 };
	(void)k_msgq_put(&ui_cmd_q, &cmd, K_NO_WAIT);
	printk("GUI: Stop pressed (queued to network)\n");

	toast_remaining_s = 0;
	local_toasting = false;
	lv_label_set_text(status_label, "Status: Idle");

	toaster_gpio_off();
}

static void reconnect_btn_event_cb(lv_event_t *e)
{
	ARG_UNUSED(e);

	ui_cmd_msg_t cmd = { .kind = UI_CMD_RETRY_CONNECT, .seconds = 0 };
	(void)k_msgq_put(&ui_cmd_q, &cmd, K_NO_WAIT);
	printk("GUI: Reconnect pressed (will try up to 3 times)\n");
}

/* ---------- Build UI ---------- */
static void build_ui(void)
{
    lv_obj_t *scr = lv_scr_act();

    /* Title */
    lv_obj_t *title = lv_label_create(scr);
    lv_label_set_text(title, "Smart Toaster");
    lv_obj_align(title, LV_ALIGN_TOP_MID, 0, 8);

    /* Device code label */
    code_label = lv_label_create(scr);
    char buf[64];
    snprintf(buf, sizeof(buf), "Device code: %s", device_code);
    lv_label_set_text(code_label, buf);
    lv_obj_align(code_label, LV_ALIGN_TOP_LEFT, 8, 30);

    /* Slider for time */
    slider = lv_slider_create(scr);
    lv_slider_set_range(slider, 0, 180);
    lv_slider_set_value(slider, 60, LV_ANIM_OFF);
    lv_obj_set_width(slider, 220);
    lv_obj_align(slider, LV_ALIGN_CENTER, 0, -10);
    lv_obj_add_event_cb(slider, slider_event_cb, LV_EVENT_VALUE_CHANGED, NULL);

    /* Time label */
    time_label = lv_label_create(scr);
    lv_label_set_text(time_label, "60s");
    lv_obj_align_to(time_label, slider, LV_ALIGN_OUT_RIGHT_MID, 12, 0);

    /* Start button */
    lv_obj_t *start_btn = lv_btn_create(scr);
    lv_obj_align(start_btn, LV_ALIGN_CENTER, -60, 50);
    lv_obj_add_event_cb(start_btn, start_btn_event_cb, LV_EVENT_CLICKED, NULL);
    lv_obj_t *start_lbl = lv_label_create(start_btn);
    lv_label_set_text(start_lbl, "Start");

    /* Stop button */
    lv_obj_t *stop_btn = lv_btn_create(scr);
    lv_obj_align(stop_btn, LV_ALIGN_CENTER, 60, 50);
    lv_obj_add_event_cb(stop_btn, stop_btn_event_cb, LV_EVENT_CLICKED, NULL);
    lv_obj_t *stop_lbl = lv_label_create(stop_btn);
    lv_label_set_text(stop_lbl, "Stop");

    /* Reconnect button */
    lv_obj_t *reconnect_btn = lv_btn_create(scr);
    lv_obj_align(reconnect_btn, LV_ALIGN_TOP_RIGHT, -10, 8);
    lv_obj_add_event_cb(reconnect_btn, reconnect_btn_event_cb, LV_EVENT_CLICKED, NULL);
    lv_obj_t *rc_lbl = lv_label_create(reconnect_btn);
    lv_label_set_text(rc_lbl, "Reconnect");

    /* Status label */
    status_label = lv_label_create(scr);
    lv_label_set_text(status_label, "Status: Idle");
    lv_obj_align(status_label, LV_ALIGN_BOTTOM_MID, 0, -8);

    /* Connection label */
    conn_label = lv_label_create(scr);
    lv_label_set_text(conn_label, "Conn: Unknown");
    lv_obj_align(conn_label, LV_ALIGN_BOTTOM_LEFT, 8, -8);
}

/* ---------- LVGL thread ---------- */
static void lvgl_thread(void *a, void *b, void *c)
{
	ARG_UNUSED(a); ARG_UNUSED(b); ARG_UNUSED(c);

	const struct device *display_dev = DEVICE_DT_GET(DT_CHOSEN(zephyr_display));
	if (device_is_ready(display_dev)) {
		display_blanking_off(display_dev);
	}

	lv_init();
	build_ui();

	int64_t last_countdown_ms = k_uptime_get();

	while (1) {
		lv_tick_inc(LVGL_TICK_MS);
		lv_timer_handler();

		ui_status_msg_t s;
		while (k_msgq_get(&ui_status_q, &s, K_NO_WAIT) == 0) {
			if (s.conn == CONN_UP) {
				lv_label_set_text(conn_label, "Conn: Up");
			} else if (s.conn == CONN_DOWN) {
				lv_label_set_text(conn_label, "Conn: Down");
			} else {
				lv_label_set_text(conn_label, "Conn: Unknown");
			}

			if (s.toasting) {
				local_toasting = true;
				if (s.remaining_s >= 0) {
					toast_remaining_s = s.remaining_s;
					char line[96];
					snprintf(line, sizeof(line), "Status: Toasting (%ds left)", toast_remaining_s);
					lv_label_set_text(status_label, line);
				} else {
					lv_label_set_text(status_label, "Status: Toasting");
				}
				toaster_gpio_on();
			} else {
				if (!local_toasting && s.remaining_s <= 0) {
					lv_label_set_text(status_label, "Status: Idle");
					toaster_gpio_off();
				}
			}
		}

		int64_t now = k_uptime_get();
		if ((now - last_countdown_ms) >= 1000) {
			last_countdown_ms = now;
			if (local_toasting && toast_remaining_s > 0) {
				toast_remaining_s--;
				if (toast_remaining_s > 0) {
					char line[96];
					snprintf(line, sizeof(line), "Status: Toasting (%ds left)", toast_remaining_s);
					lv_label_set_text(status_label, line);
				} else {
					local_toasting = false;
					lv_label_set_text(status_label, "Status: Idle");
					toaster_gpio_off(); // Turn off GPIO when countdown finishes
				}
			}
		}

		k_sleep(K_MSEC(LVGL_TICK_MS));
	}
}

/* ---------- Thread definitions ---------- */
K_THREAD_DEFINE(net_tid, NET_THREAD_STACK, network_thread, NULL, NULL, NULL,
		NET_THREAD_PRIORITY, 0, 0);

K_THREAD_DEFINE(gui_tid, LVGL_THREAD_STACK, lvgl_thread, NULL, NULL, NULL,
		LVGL_THREAD_PRIORITY, 0, 0);

/* ---------- Main ---------- */
int main(void)
{
    if (gpio_is_ready_dt(&gpio)) {
        gpio_pin_configure_dt(&gpio, GPIO_OUTPUT_INACTIVE);
    }

    /* Generate code before UI starts (so LVGL can display it) */
    gen_device_code(device_code, sizeof(device_code));

    /* Do NOT call send_register_http() here.
     * Registration will happen automatically once the first connection succeeds
     * and we get an HTTP response (see status_response_cb).
     */

    /* Trigger initial reconnect, handled by network_thread */
    ui_cmd_msg_t cmd = { .kind = UI_CMD_RETRY_CONNECT, .seconds = 0 };
    (void)k_msgq_put(&ui_cmd_q, &cmd, K_NO_WAIT);
    printk("Main: Initial reconnect attempt queued\n");

    LOG_INF("Toaster device initialized: server=%s:%d, code=%s",
        SERVER_ADDR4, HTTP_PORT, device_code);

    k_sleep(K_FOREVER);
    return 0;
}
