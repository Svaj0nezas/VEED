// lib/auth.ts
import { prisma } from "./prisma";

// Example: get the current logged-in user from a cookie
export async function getCurrentUser(req: Request) {
  try {
    // Here, we assume you set a "userId" cookie at login
    const cookie = req.headers.get("cookie") || "";
    const match = cookie.match(/userId=([^;]+)/);
    const userId = match ? match[1] : null;

    if (!userId) return null;

    const user = await prisma.user.findUnique({ where: { id: userId } });
    return user;
  } catch (err) {
    console.error("getCurrentUser error:", err);
    return null;
  }
}
