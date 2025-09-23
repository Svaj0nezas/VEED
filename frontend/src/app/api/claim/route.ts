import { NextResponse } from "next/server";
import prisma from "@/lib/prisma";
import { getCurrentUser } from "@/lib/auth";

export async function POST(req: Request) {
  try {
    const user = await getCurrentUser(req);
    if (!user) {
      return NextResponse.json({ error: "Not authenticated" }, { status: 401 });
    }

    const { code } = await req.json();
    if (!code) {
      return NextResponse.json({ error: "Missing code" }, { status: 400 });
    }

    // Forward OTP to Flask backend
    const flaskRes = await fetch(`${process.env.BACKEND_URL}/devices/claim`, {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify({ code }),
    });

    if (!flaskRes.ok) {
      const text = await flaskRes.text();
      return NextResponse.json({ error: text }, { status: flaskRes.status });
    }

    const flaskData = await flaskRes.json();

    // Save or update in Prisma
    const device = await prisma.device.upsert({
      where: { deviceCode: flaskData.code },
      update: { ownerId: user.id },
      create: { deviceCode: flaskData.code, ownerId: user.id },
    });

    return NextResponse.json(device, { status: 200 });
  } catch {
    console.error("Error claiming device");
    return NextResponse.json({ error: "Internal server error" }, { status: 500 });
  }
}
