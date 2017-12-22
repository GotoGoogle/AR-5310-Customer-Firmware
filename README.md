# AR-5310-Customer-Firmware
This firmware is modified to build well the firmware under Ubuntu 12.04 LTS i386.

Requires bison and flex.

# Building
1. Install Ubuntu Linux 12.04 LTS i386 Desktop into a virtual machine. Download the ISO from: http://releases.ubuntu.com/12.04/ubuntu-12.04.5-desktop-i386.iso. Give 4 processors at 70% if you can.
2. Install openssh-server to be able to paste into the terminal: sudo apt-get install openssh-server
3. Connect with PuTTY if in Windows, or with ssh command if in macOS or Linux.
4. Install git and clone the MIPS Big Endian 32bit from my GitHub repository: sudo apt-get install git && git clone https://github.com/D1W0U/uclibc-crosstools-gcc-4.4.2-1.git
5. Install the toolchain: cd uclibc-crosstools-gcc-4.4.2-1; sudo mv opt/toolchains /opt; cd ..
6. Remove the project: rm -rf uclibc-crosstools-gcc-4.4.2-1/
7. Clone the AR-5310 firmware from this repo: git clone https://github.com/D1W0U/AR-5310-Customer-Firmware.git
8. Install those dependencies: sudo apt-get install bison flex
10. Compile the firmware: cd AR-5310-Customer-Firmware; make SHELL=/bin/bash PROFILE=AR-5310_CTL
