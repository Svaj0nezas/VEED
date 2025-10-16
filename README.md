# VEED
Virtual Embedded Example Device - university cybersecurity project

# Steps to run the project
1. Download renode
2. Install docker: `https://docs.docker.com/engine/install/ubuntu/`, then run `sudo docker compose up --build`
3. Follow the network setup
4. Update the path in the `.resc` file to the board `stm32f7_discovery-bb.repl` to point where it is in your Renode directory
5. Start backend and frontend with docker `docker compose up --build`
6. Launch Renode with the script `veed.resc`, command: `renode device/veed.resc`
7. To avoid warning messages I recommend using `renode device/veed.resc 2>&1 | grep -v -i "warning" > renode.log` and looking at the log live

# Editing and compiling the source code
1. Under `/devices/zephyr` the source code and config file for the binary can be found.
2. To recompile the source code, it should be placed in the zephyr project, under `/zephyrproject/zephyr/samples/net/sockets/http_client/src/main.c` and `/zephyrproject/zephyr/samples/net/sockets/http_client/prj.conf`.
3. After placing these files and optionally editing them, the command `west build -b stm32f746g_disco` will generate a new zephyr.elf binary to use in Renode.

# Network setup
```
sudo ip link add renode-br0 type bridge
sudo ip addr add 10.10.0.1/24 dev renode-br0
sudo ip link set renode-br0 up
sudo ip tuntap add dev tap0 mode tap
sudo ip link set tap0 master renode-br0
sudo ip link set tap0 up
```
