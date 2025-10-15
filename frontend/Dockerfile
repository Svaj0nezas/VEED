FROM node:20 AS deps
WORKDIR /app

RUN apt-get update && apt-get install -y openssl
# Install dependencies
COPY package*.json ./
RUN npm ci
# Build the app
COPY prisma ./prisma
RUN npx prisma generate
COPY . .
RUN npm run build

# Production runtime
FROM node:20-slim AS runner
WORKDIR /app

ENV NODE_ENV=production

# Copy built app and node_modules
COPY --from=deps /app/node_modules ./node_modules
COPY --from=deps /app/.next ./.next
COPY --from=deps /app/public ./public
COPY --from=deps /app/package*.json ./
COPY --from=deps /app/prisma ./prisma

EXPOSE 3000

CMD ["npm", "run", "start"]