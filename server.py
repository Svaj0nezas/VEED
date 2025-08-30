from flask import Flask, jsonify

app = Flask(__name__)

@app.route("/device-config", methods=["GET"])
def config():
    return jsonify({
        "temperature": 21.5,
        "fan_on": True
    })

app.run(host="192.168.1.1", port=8000)
