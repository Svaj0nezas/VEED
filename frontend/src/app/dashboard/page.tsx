"use client";

import { useState, useEffect } from "react";
import { useRouter } from "next/navigation";
import { Button } from "@/components/ui/button";
import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Input } from "@/components/ui/input";
import { useSession } from "next-auth/react";

export default function Dashboard() {
  const [devices, setDevices] = useState<
    {
      id: number;
      name: string;
      code: string;
      claimed: boolean;
      duration: number;
      status?: "idle" | "toasting";
      remaining?: number;
    }[]
  >([]);
  const [otpCode, setOtpCode] = useState("");
  const [loading, setLoading] = useState(false);
  const router = useRouter();
  const { data: session } = useSession();
  const username = session?.user?.name || "unknown";

  const logout = () => router.push("/");

  const addDeviceUI = () => {
    const id = Date.now();
    setDevices((prev) => [
      ...prev,
      { id, name: `Device ${prev.length + 1}`, code: "", claimed: false, duration: 5 },
    ]);
  };

  const claimDevice = async (id: number) => {
    if (!otpCode.trim()) return;
    setLoading(true);
    try {
      const res = await fetch(`${process.env.BACKEND_URL}/devices/claim`, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ code: otpCode, user: username }),
      });
      if (!res.ok) {
        const text = await res.text();
        alert(`Failed to claim device: ${text}`);
        return;
      }
      const data = await res.json();
      setDevices((prev) =>
        prev.map((d) =>
          d.id === id
            ? { ...d, code: data.code, claimed: true, name: `Toaster ${data.code}`, status: "idle", remaining: 0 }
            : d
        )
      );
      setOtpCode("");
    } catch (err) {
      console.error("Error claiming device", err);
      alert("Error claiming device");
    } finally {
      setLoading(false);
    }
  };

  const updateDuration = (id: number, duration: number) => {
    setDevices((prev) => prev.map((d) => (d.id === id ? { ...d, duration } : d)));
  };

  const startToasting = async (deviceCode: string, duration: number) => {
    setLoading(true);
    try {
      const res = await fetch(`${process.env.BACKEND_URL}/toaster/start`, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ code: deviceCode, sec: duration }),
      });
      if (!res.ok) {
        const text = await res.text();
        alert(`Failed to start toaster: ${text}`);
      }
      fetchStatus(); // immediate status update
    } catch (err) {
      console.error("Start toaster error", err);
      alert("Error starting toaster");
    } finally {
      setLoading(false);
    }
  };

  const stopToasting = async (deviceCode: string) => {
    setLoading(true);
    try {
      const res = await fetch(`${process.env.BACKEND_URL}/toaster/stop`, {
        method: "POST",
        headers: { "Content-Type": "application/json" },
        body: JSON.stringify({ code: deviceCode }),
      });
      if (!res.ok) {
        const text = await res.text();
        alert(`Failed to stop toaster: ${text}`);
      }
      fetchStatus();
    } catch (err) {
      console.error("Stop toaster error", err);
      alert("Error stopping toaster");
    } finally {
      setLoading(false);
    }
  };

  // ---------------- Fetch status ----------------
  const fetchStatus = async () => {
    try {
      const res = await fetch(`${process.env.BACKEND_URL}/toaster/status.json`);
      if (!res.ok) return;
      const data = await res.json();
      const { devices: backendDevices } = data;

      setDevices((prev) =>
        prev.map((d) => {
          if (!d.claimed || !d.code) return d;
          const deviceInfo = backendDevices[d.code];
          if (!deviceInfo) return { ...d, status: "idle", remaining: 0 };
          return {
            ...d,
            status: deviceInfo.status as "idle" | "toasting",
            remaining: deviceInfo.remaining ?? 0,
          };
        })
      );
    } catch (err) {
      console.error("Error fetching toaster status", err);
    }
  };

  // Poll status every 1s
  useEffect(() => {
    const hasClaimed = devices.some((d) => d.claimed);
  
    if (!hasClaimed) return; // ✅ do not poll if nothing is claimed
  
    fetchStatus(); // immediate fetch
    const interval = setInterval(fetchStatus, 1000);
    return () => clearInterval(interval);
  }, [devices]); // rerun if claim state changes

  return (
    <div className="p-8">
      <div className="mb-6 flex justify-between items-center">
        <h1 className="text-3xl font-bold">My Devices</h1>
        <div className="flex gap-2">
          <Button onClick={addDeviceUI}>+ Add Device</Button>
          <Button variant="destructive" onClick={logout}>
            Logout
          </Button>
        </div>
      </div>

      <div className="grid grid-cols-1 sm:grid-cols-2 md:grid-cols-3 gap-6">
        {devices.map((device) => (
          <Card key={device.id} className="rounded-2xl shadow-md p-4">
            <CardHeader>
              <CardTitle>{device.name}</CardTitle>
            </CardHeader>
            <CardContent>
              {!device.claimed ? (
                <>
                  <p className="mb-2 text-gray-600">Enter OTP from toaster:</p>
                  <Input
                    placeholder="Device OTP"
                    value={otpCode}
                    onChange={(e) => setOtpCode(e.target.value)}
                    className="mb-2"
                  />
                  <div className="flex gap-2">
                    <Button onClick={() => claimDevice(device.id)} disabled={loading}>
                      {loading ? "Claiming..." : "Claim Device"}
                    </Button>
                  </div>
                </>
              ) : (
                <>
                  <p className="text-green-600 font-semibold mb-2">
                    ✅ Claimed as {device.name}
                  </p>

                  <p className="mb-1 text-gray-700">
                    Status: {device.status || "idle"}{" "}
                    {device.status === "toasting" && `(remaining: ${device.remaining}s)`}
                  </p>

                  <p className="mb-2 text-gray-600">Set toast duration (sec):</p>
                  <input
                    type="range"
                    min={1}
                    max={60}
                    value={device.duration}
                    onChange={(e) => updateDuration(device.id, parseInt(e.target.value))}
                    className="w-full mb-2"
                  />
                  <span>{device.duration} sec</span>

                  <div className="flex gap-2 mt-2">
                    <Button
                      onClick={() => startToasting(device.code, device.duration)}
                      disabled={loading}
                    >
                      Start
                    </Button>
                    <Button
                      variant="destructive"
                      onClick={() => stopToasting(device.code)}
                      disabled={loading}
                    >
                      Stop
                    </Button>
                  </div>
                </>
              )}
            </CardContent>
          </Card>
        ))}
      </div>
    </div>
  );
}
