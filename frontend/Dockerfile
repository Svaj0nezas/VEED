FROM node:20 AS deps
WORKDIR /app

# Install dependencies
COPY package*.json ./
RUN npm ci
# Build the app
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

EXPOSE 3000

CMD ["npm", "run", "start"]