from flask import Flask, request, jsonify, Response
import threading
import time
import logging
from flask_cors import CORS

app = Flask(__name__)
CORS(app, origins=["http://localhost:3000"])

# ---------------- Logging ----------------
logging.basicConfig(
    level=logging.INFO,  # Use INFO to reduce clutter
    format="%(asctime)s [%(levelname)s] %(message)s",
)
logger = logging.getLogger(__name__)

# ---------------- State ----------------
state_lock = threading.Lock()

# device_code -> device info
devices = {}
# Each device info:
# {
#   "claimed": bool,
#   "user": str,
#   "last_seen": float,
#   "toaster_state": {
#       "status": "idle" | "toasting",
#       "gpio_on": bool,
#       "duration": int,
#       "start_time": float | None,
#       "end_time": float | None
#   }
# }

# ---------------- Helpers ----------------
def _now():
    return time.time()

def _remaining_locked(state):
    if state["status"] != "toasting" or state["end_time"] is None:
        return 0
    rem = int(round(state["end_time"] - _now()))
    return rem if rem > 0 else 0

def _update_finished_if_needed_locked(state):
    if state["status"] == "toasting" and _remaining_locked(state) == 0:
        state["status"] = "idle"
        state["gpio_on"] = False
        state["start_time"] = None
        state["end_time"] = None

def _start_toast(state, duration):
    duration = max(0, int(duration))
    if state["status"] == "toasting":
        return False, "Already toasting"
    now = _now()
    state["status"] = "toasting" if duration > 0 else "idle"
    state["gpio_on"] = duration > 0
    state["duration"] = duration
    state["start_time"] = now if duration > 0 else None
    state["end_time"] = (now + duration) if duration > 0 else None
    return True, f"Toasting started for {duration} seconds" if duration > 0 else "No duration, staying idle"

def _stop_toast(state):
    state["status"] = "idle"
    state["gpio_on"] = False
    state["duration"] = 0
    state["start_time"] = None
    state["end_time"] = None

# ---------------- Background janitor ----------------
def _janitor():
    while True:
        with state_lock:
            for device in devices.values():
                _update_finished_if_needed_locked(device["toaster_state"])
        time.sleep(0.2)

threading.Thread(target=_janitor, daemon=True).start()

# ---------------- Device/User Association ----------------
@app.route("/toaster/register", methods=["GET", "POST"])
def register_device():
    code = ""
    if request.method == "GET":
        code = request.args.get("code", "").strip()
    elif request.method == "POST":
        try:
            data = request.get_json(silent=True) or {}
            code = (data.get("code") or "").strip()
        except Exception:
            code = ""
    
    if not code:
        logger.error("Register called without code")
        return Response("missing code", status=400, content_type="text/plain")

    with state_lock:
        if code not in devices:
            devices[code] = {
                "claimed": False,
                "user": None,
                "last_seen": _now(),
                "toaster_state": {
                    "status": "idle",
                    "gpio_on": False,
                    "duration": 0,
                    "start_time": None,
                    "end_time": None
                }
            }
            logger.info(f"New device registered: {code}")
        else:
            devices[code]["last_seen"] = _now()
            logger.info(f"Device already known: {code}")

    return jsonify({"status": "ok", "code": code, "claimed": devices[code]["claimed"]}), 200

@app.route("/devices/claim", methods=["POST"])
def claim_device():
    data = request.get_json(silent=True) or {}
    code = (data.get("code") or "").strip()
    current_user = (data.get("user") or "").strip()

    if not code:
        return Response("missing code", status=400)
    if not current_user:
        return Response("missing user", status=400)

    with state_lock:
        if code not in devices:
            return Response("device not found", status=404)
        if devices[code]["claimed"]:
            return Response("device already claimed", status=400)

        devices[code]["claimed"] = True
        devices[code]["user"] = current_user

    return jsonify({"status": "claimed", "code": code, "user": current_user}), 200

@app.route("/devices", methods=["GET"])
def list_devices():
    with state_lock:
        return jsonify(devices), 200

# ---------------- Toaster Control ----------------
@app.route("/toaster/start", methods=["POST"])
def start_toasting():
    data = request.get_json(silent=True) or {}
    code = (data.get("code") or "").strip()
    duration = int(data.get("sec", 5))

    if not code:
        return Response("missing code", status=400)

    with state_lock:
        if code not in devices:
            return Response("device not found", status=404)
        device = devices[code]
        _update_finished_if_needed_locked(device["toaster_state"])
        ok, msg = _start_toast(device["toaster_state"], duration)

    if ok:
        return jsonify({"message": msg}), 200
    else:
        return jsonify({"message": msg}), 409

@app.route("/toaster/stop", methods=["POST"])
def stop_toasting():
    data = request.get_json(silent=True) or {}
    code = (data.get("code") or "").strip()

    if not code:
        return Response("missing code", status=400)

    with state_lock:
        if code not in devices:
            return Response("device not found", status=404)
        device = devices[code]
        _stop_toast(device["toaster_state"])

    return jsonify({"message": "Toasting stopped"}), 200

@app.route("/toaster/status.json", methods=["GET"])
def get_status_json():
    with state_lock:
        payload_devices = {}
        for code, dev in devices.items():
            ts = dev["toaster_state"]
            _update_finished_if_needed_locked(ts)
            payload_devices[code] = {
                "claimed": dev["claimed"],
                "user": dev["user"],
                "last_seen": dev["last_seen"],
                "status": ts["status"],
                "gpio_on": ts["gpio_on"],
                "remaining": _remaining_locked(ts),
                "duration": ts["duration"]
            }

    return jsonify({"devices": payload_devices}), 200

@app.route("/toaster/status", methods=["GET"])
def get_status():
    """
    Returns a plain-text status for all devices.
    Format per device: <code>:status=<status>;remaining=<seconds>;gpio=<0|1>
    """
    lines = []
    with state_lock:
        for code, dev in devices.items():
            ts = dev["toaster_state"]
            _update_finished_if_needed_locked(ts)
            remaining = _remaining_locked(ts)
            gpio = 1 if ts["gpio_on"] else 0
            line = f"{code}:status={ts['status']};remaining={remaining};gpio={gpio}"
            lines.append(line)
    
    body = "\n".join(lines)
    logger.info(f"Status requested:\n{body}")
    return Response(body, status=200, content_type="text/plain")


@app.before_request
def log_request_info():
    logger.info(f"Incoming request: {request.method} {request.url}")

@app.route("/")
def root():
    logger.info("Root endpoint requested")
    return Response("toaster backend alive", content_type="text/plain")

if __name__ == "__main__":
    logger.info("Starting Toaster backend on port 8000")
    app.run(host="0.0.0.0", port=8000, threaded=True)
