from flask import Flask, request, jsonify
import threading
import time

app = Flask(__name__)

toaster_state = {
    "status": "idle",
    "gpio_on": False,
    "duration": 0
}

def toaster_timer(duration):
    toaster_state["gpio_on"] = True
    toaster_state["status"] = "toasting"
    print(">>> TOASTER: Now toasting")
    time.sleep(duration)
    toaster_state["gpio_on"] = False
    toaster_state["status"] = "idle"
    print(">>> TOASTER: Toasting done")


@app.route("/toaster/start", methods=["POST"])
def start_toasting():
    data = request.get_json()
    duration = data.get("duration", 5)

    if toaster_state["status"] == "toasting":
        return jsonify({"message": "Already toasting"}), 409

    toaster_state["duration"] = duration
    thread = threading.Thread(target=toaster_timer, args=(duration,))
    thread.start()

    return jsonify({"message": f"Toasting started for {duration} seconds"}), 200

@app.route("/toaster/status", methods=["GET"])
def get_status():
    return jsonify(toaster_state)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=8000)
