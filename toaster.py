from flask import Flask, request, jsonify, Response
import threading
import time

app = Flask(__name__)

# ---------------- State ----------------
state_lock = threading.Lock()
toaster_state = {
    "status": "idle",      # "idle" | "toasting"
    "gpio_on": False,      # bool
    "duration": 0,         # seconds for the current/last run
    "start_time": None,    # epoch seconds
    "end_time": None       # epoch seconds
}

# device_code -> dict with claim status
devices = {}

def _now():
    return time.time()

def _remaining_locked():
    """Compute remaining seconds (>=0) if toasting, else 0. Call with state_lock held."""
    if toaster_state["status"] != "toasting" or toaster_state["end_time"] is None:
        return 0
    rem = int(round(toaster_state["end_time"] - _now()))
    return rem if rem > 0 else 0

def _update_finished_if_needed_locked():
    """Flip to idle if time passed. Call with state_lock held."""
    if toaster_state["status"] == "toasting" and _remaining_locked() == 0:
        toaster_state["status"] = "idle"
        toaster_state["gpio_on"] = False
        toaster_state["start_time"] = None
        toaster_state["end_time"] = None

# ---------------- Helpers ----------------
def _start_toast(duration):
    duration = max(0, int(duration))
    with state_lock:
        if toaster_state["status"] == "toasting":
            return False, "Already toasting"
        now = _now()
        toaster_state["status"] = "toasting" if duration > 0 else "idle"
        toaster_state["gpio_on"] = duration > 0
        toaster_state["duration"] = duration
        toaster_state["start_time"] = now if duration > 0 else None
        toaster_state["end_time"] = (now + duration) if duration > 0 else None
    return True, f"Toasting started for {duration} seconds" if duration > 0 else "No duration, staying idle"

def _stop_toast():
    with state_lock:
        toaster_state["status"] = "idle"
        toaster_state["gpio_on"] = False
        toaster_state["duration"] = 0
        toaster_state["start_time"] = None
        toaster_state["end_time"] = None

# Background janitor to auto-idle when time elapses
def _janitor():
    while True:
        with state_lock:
            _update_finished_if_needed_locked()
        time.sleep(0.2)

threading.Thread(target=_janitor, daemon=True).start()

# ---------------- Device/User Association ----------------

@app.route("/toaster/register", methods=["GET"])
def register_device():
    """Device calls this at boot with ?code=XXXX"""
    code = request.args.get("code", "").strip()
    if not code:
        return Response("missing code", status=400, content_type="text/plain")

    if code not in devices:
        devices[code] = {"claimed": False, "user": None, "last_seen": time.time()}
        print(f"New device registered: {code}")
    else:
        devices[code]["last_seen"] = time.time()
        print(f"Device already known: {code}")

    return jsonify({"status": "ok", "code": code, "claimed": devices[code]["claimed"]}), 200

@app.route("/devices/claim", methods=["POST"])
def claim_device():
    """Frontend calls this with { 'code': 'XXXX' }"""
    data = request.get_json(silent=True) or {}
    code = (data.get("code") or "").strip()
    if not code:
        return Response("missing code", status=400, content_type="text/plain")

    if code not in devices:
        return Response("device not found", status=404, content_type="text/plain")

    if devices[code]["claimed"]:
        return Response("device already claimed", status=400, content_type="text/plain")

    # TODO: replace with real user authentication
    current_user = "user123"

    devices[code]["claimed"] = True
    devices[code]["user"] = current_user
    return jsonify({"status": "claimed", "code": code, "user": current_user}), 200

@app.route("/devices", methods=["GET"])
def list_devices():
    """Debugging endpoint"""
    return jsonify(devices), 200

# ---------------- Toaster Control ----------------

@app.route("/toaster/start", methods=["GET", "POST"])
def start_toasting():
    # Support Zephyr GET /toaster/start?sec=N
    sec = request.args.get("sec", type=int)
    # Back-compat: POST JSON { "duration": N } or { "sec": N }
    if request.method == "POST" and sec is None:
        try:
            data = request.get_json(silent=True) or {}
        except Exception:
            data = {}
        sec = data.get("duration", data.get("sec", 5))
    if sec is None:
        sec = 5

    ok, msg = _start_toast(sec)
    if ok:
        return jsonify({"message": msg}), 200
    else:
        return jsonify({"message": msg}), 409

@app.route("/toaster/stop", methods=["GET"])
def stop_toasting():
    _stop_toast()
    return jsonify({"message": "Toasting stopped"}), 200

@app.route("/toaster/status", methods=["GET"])
def get_status():
    with state_lock:
        _update_finished_if_needed_locked()
        toasting = toaster_state["status"] == "toasting"
        remaining = _remaining_locked() if toasting else 0

        if toasting:
            body = f"status=toasting;remaining={remaining};gpio=1"
        else:
            body = f"status=idle;remaining=0;gpio=0"

    return Response(body, status=200, content_type="text/plain")

@app.route("/toaster/status.json", methods=["GET"])
def get_status_json():
    with state_lock:
        _update_finished_if_needed_locked()
        toasting = toaster_state["status"] == "toasting"
        remaining = _remaining_locked() if toasting else 0
        payload = {
            "status": "toasting" if toasting else "idle",
            "gpio_on": toasting,
            "remaining": remaining,
            "duration": toaster_state["duration"],
            "devices": devices,
        }
    return jsonify(payload), 200

@app.route("/")
def root():
    return Response("toaster backend alive", content_type="text/plain")

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=8000, threaded=True)
