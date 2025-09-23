# VEED
Virtual Embedded Example Device - university cybersecurity project

# Steps to run the project
1. Download renode
2. Follow the network setup
3. Update the path to the board `stm32f7_discovery-bb.repl` to point where it is in your Renode directory
4. Start backend and frontend with docker `docker compose up --build`
5. Launch Renode with the script `veed.resc`, command: `renode device/veed.resc`
6. To avoid warning messages I recommend using `renode device/veed.resc 2>&1 | grep -v -i "warning" > renode.log` and looking at the log live

# Network setup
```
sudo ip link add renode-br0 type bridge
sudo ip addr add 10.10.0.1/24 dev renode-br0
sudo ip link set renode-br0 up
sudo ip tuntap add dev tap0 mode tap
sudo ip link set tap0 master renode-br0
sudo ip link set tap0 up
```