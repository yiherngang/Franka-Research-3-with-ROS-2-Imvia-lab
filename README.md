# Franka Research 3 with ROS 2 Imvia lab

## 1.0 Introduction

Welcome to the documentation of the project titled **"ROS 2 Integration of MoveIt2 with Franka Research 3 Cobot: Enhancing Advanced Manipulation with Camera Perception"**. This project was undertaken as part of the requirements for the subject IEB3047 Student Industrial Project (SIP) in Universiti Teknologi PETRONAS (UTP), in collaboration with Universite De Bourgogne, France, and The ViBot lab.

The primary objective of this project was to integrate ROS 2, MoveIt2, and the Franka Research 3 (FR3) Cobot to enhance advanced manipulation capabilities with camera perception. The integration aimed to leverage modern robotic frameworks and technologies to achieve more efficient and precise manipulation tasks, particularly focusing on interactions involving camera-based perception.

Special thanks go to my host supervisors, Professor David Fofi, Mr. Raphael Duverne, Mr. Joaquin Jorge Rodriguez and Mr. Fabio Cyro Ribeiro Batista. Additionally, I would like to express gratitude to my home supervisor, Dr. Ashvaany Egambaram, for their guidance and support throughout this project.

### Overview

This project integrates advanced robotics technologies to enhance the capabilities of the Franka Research 3 Cobot, provided by the Imvia lab at Universite de Bourgogne. The integration leverages modern software frameworks and hardware components to achieve sophisticated manipulation and perception functionalities.

### Hardware and Software Integration

The project utilizes the following hardware and software components:

- **Franka Research 3 Cobot**: Provided by the Imvia lab, this robotic platform serves as the foundation for the project's functionalities.

- **ROS 2 and Linux Real-Time Kernel**: The robot operates on ROS 2, running on a Linux real-time kernel. This setup ensures precise and deterministic control over the robot's actions.

- **MoveIt2**: A renowned manipulator robot platform, integrated with the Franka Research 3 Cobot. MoveIt2 facilitates essential manipulation functions such as movement, pick and place operations, and servoing using a Logitech F710 joystick.

- **Camera Perception**: The project incorporates camera perception capabilities using a combination of 3D printing designs from Franka World and the Intel Depth Camera D534F. This setup enables the robot to perceive its environment in three dimensions, enhancing its interaction capabilities.

- **ViSP (Visual Servoing Platform)**: Integrated into the robot's system, ViSP is an open-source library that provides visual servoing capabilities. This allows the robot to perform tasks based on visual feedback, improving accuracy and adaptability in various applications.

## 2.0 Pre-requisite

Tested Working Versions

Below are the tested working versions for each software:

- **Franka Research 3**: Version 5.2.2
- **libfranka**: Version 0.13.2
- **ROS 2**: Humble Hawksbill
- **franka_ros2**: Version 0.1.13
- **Ubuntu**: Ubuntu 22.04.4 LTS (Jammy)
- **Linux RT Kernel**: Version 6.9.0-rt5+ PREEMPT_RT
- **Visual Servoing Platform(ViSP)**: Version 3.6.1

### 2.1 Installation

Below is the step-by-step guide for installation:

#### 2.1.1 Setting up the Real-Time Kernel

1. Check the current Linux kernel:

```sh
uname -a
```

* The libfranka library will only works with a PREEMPT_RT kernel

2. Update your system

```sh
sudo apt update
sudo apt upgrade
```

3. Install Required packages

```sh
sudo apt-get install build-essential bc curl ca-certificates gnupg2 libssl-dev lsb-release libelf-dev bison flex dwarves zstd libncurses-dev
```

You can skip the steps 4 and 5 if you want to follow my version:

4. Check for available real-time patches:

https://mirrors.edge.kernel.org/pub/linux/kernel/projects/rt/

5. Check for available linux version:

https://mirrors.edge.kernel.org/pub/linux/kernel/

6. Create a directory for the kernel:

```sh
mkdir linuxKernel
cd linuxKernel
```

7. Download the source files (Just substitute the numbers for different versions):

```sh
curl -SLO https://www.kernel.org/pub/linux/kernel/v6.x/linux-6.9.tar.xz
curl -SLO https://www.kernel.org/pub/linux/kernel/v6.x/linux-6.9.tar.sign
curl -SLO https://www.kernel.org/pub/linux/kernel/projects/rt/6.9/patch-6.9-rt5.patch.xz
curl -SLO https://www.kernel.org/pub/linux/kernel/projects/rt/6.9/patch-6.9-rt5.patch.sign
```

8. decompress all the files

```sh
xz -d *.xz
```

9. Verify file integrity

```sh
gpg2 --verify linux-*.tar.sign
gpg2 --verify patch-*.patch.sign
```

* example of a correct output

```sh
$ gpg2 --verify linux-*.tar.sign
gpg: assuming signed data in 'linux-4.14.12.tar'
gpg: Signature made Fr 05 Jan 2018 06:49:11 PST using RSA key ID 6092693E
gpg: Good signature from "Greg Kroah-Hartman <gregkh@linuxfoundation.org>" [unknown]
gpg:                 aka "Greg Kroah-Hartman <gregkh@kernel.org>" [unknown]
gpg:                 aka "Greg Kroah-Hartman (Linux kernel stable release signing key) <greg@kroah.com>" [unknown]
gpg: WARNING: This key is not certified with a trusted signature!
gpg:          There is no indication that the signature belongs to the owner.
Primary key fingerprint: 647F 2865 4894 E3BD 4571  99BE 38DB BDC8 6092 693E
```

10. Compiling the kernel

```sh
tar xf linux-*.tar
cd linux-*/
patch -p1 < ../patch-*.patch
```

11. copy the currently booted kernel configuration as the default config for the new real time kernel:

```sh
cp -v /boot/config-$(uname -r) .config
```

12. Update configuration

```sh
make olddefconfig
```

13. Customize configuration

```sh
make menuconfig
```

> General setup
>> Preemption Model (Voluntary Kernel Preemption (Desktop))
>>> (x) Fully Preemptible Kernel (Real-Time)
>>> exit

> Cryptographic API
>> Certificates for signature checking
>>> Additional X.509 keys for default system keyring
>>>> Remove the permission
>>>>> ok

> Cryptographic API
>> Certificates for signature checking
>>> X.509 cerficates to be preloaded into the system blacklist keyring
>>>> Remove the permission
>>>>> ok

> save to .config

14. Initialize a Git REpository in the kernel source directory

```sh
git init
git remote add origin <remote-url>
```

15. Kernel compilation

```sh
make -j$(nproc) deb-pkg
```

16. Install the new kernel packages

```sh
sudo dpkg -i ../linux-headers-*.deb ../linux-image-*.deb
```

17. Restart the computer

> Advanced options for Ubuntu
>> Ubuntu, with Linux 6.9.0-rt5
>>> Enter

18. On the Ubuntu terminal, check the new Linux kernel

```sh
uname -a
```

The correct output is below:

```sh
Linux CO-P-MASTERS-13 6.9.0-rt5+ #5 SMP PREEMPT_RT Thu Jun 13 14:50:20 CEST 2024 x86_64 x86_64 x86_64 GNU/Linux
```

19. Allow user to set real-time permissions for its processes

```sh
sudo addgroup realtime
sudo usermod -a -G realtime $(whoami)
```

20. Edit the limits

```bash
sudo nano /etc/security/limits.conf
```

21. Add the following lines to the end of the file

```bash
@realtime soft rtprio 99
@realtime soft priority 99
@realtime soft memlock 102400
@realtime hard rtprio 99
@realtime hard priority 99
@realtime hard memlock 102400
```

#### 2.1.2 Building libfranka from source 

1. Uninstall the existing installations of libfranka

```bash
sudo apt remove "*libfranka*"
```

2. Install the following dependencies

```bash
sudo apt install build-essential cmake git libpoco-dev libeigen3-dev
```

3. Download the source code from Github

```bash
git clone --recursive https://github.com/frankaemika/libfranka --branch 0.13.2
```

4. build the directory

```bash
cd libfranka
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF ..
cmake --build . -j$(nproc)
cpack -G DEB
sudo dpkg -i libfranka-*.deb
```
#### 2.1.3 Install ROS2 Humble Hawksbill

Add the ROS 2 apt repository to the system

1. Ensure the Ubuntu Universe repository is enabled.

```bash
sudo apt install software-properties-common
sudo add-apt-repository universe
```

2. Add the ROS 2 GPG key with apt

```bash
sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
```

3. add the repository to the sources list

```bash
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
```

Install ROS 2 packages

4. Update your apt repository caches after setting up the repositories

```bash
sudo apt update
sudo apt upgrade
```

5. Install

```bash
sudo apt install ros-humble-desktop
```
If doesn't work, change another internet and do again, I also don't understand why

5. Set up the environment

``` bash
source /opt/ros/humble/setup.bash
```
can add it to the ./bashrc file 

```bash
nano ~/.bashrc
```
#### 2.1.4 Install **Franka_ros2** from source

1. Install requirements

```bash
sudo apt install -y \
ros-humble-hardware-interface \
ros-humble-generate-parameter-library \
ros-humble-ros2-control-test-assets \
ros-humble-controller-manager \
ros-humble-control-msgs \
ros-humble-xacro \
ros-humble-angles \
ros-humble-ros2-control \
ros-humble-realtime-tools \
ros-humble-control-toolbox \
ros-humble-moveit \
ros-humble-ros2-controllers \
ros-humble-joint-state-publisher \
ros-humble-joint-state-publisher-gui \
ros-humble-ament-cmake \
ros-humble-ament-cmake-clang-format \
python3-colcon-common-extensions
```
2. Create a ROS 2 workspace

```bash
mkdir -p ~/franka_ros2_ws/src
```

3. Clone repo and build packages

```bash
source /opt/ros/humble/setup.bash
cd ~/franka_ros2_ws
git clone https://github.com/frankaemika/franka_ros2.git src/franka_ros2
colcon build --cmake-args -DCMAKE_BUILD_TYPE=Release
source install/setup.sh
```
#### 2.1.5 Install ViSP from source

1. Install pre-requisite

```bash
sudo apt-get install build-essential cmake-curses-gui git wget
```

```bash
sudo apt-get install libopencv-dev libx11-dev liblapack-dev libeigen3-dev libv4l-dev libzbar-dev libpthread-stubs0-dev libdc1394-dev nlohmann-json3-dev
```

2. Install ViSP from github

```bash
cd franka_ros2_ws/src/
git clone https://github.com/lagadic/visp.git
```

3. Build ViSP

```bash
cd franka_ros2_ws/build
mkdir visp
cd visp
cmake ../../scr/visp
make -j$(nproc)
```

4. Set VISP_DIR environment variable

```bash
export VISP_DIR=~/franka_ros2_ws/build/visp
source ~/.bashrc
```
#### 2.1.6 Install librealsense SDK for Intel D435F camera

1. Install pre-requisite

```bash
sudo apt-get install git libssl-dev libusb-1.0-0-dev pkg-config libgtk-3-dev cmake-curses-gui
sudo apt-get install libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev
```

2. Get librealsense from github

```bash
cd franka_ros2_ws
git clone https://github.com/IntelRealSense/librealsense.git
cd librealsense
```

3. build and install librealsense

```bash
mkdir build
cd build
cmake .. -DBUILD_EXAMPLES=ON -DCMAKE_BUILD_TYPE=Release
make -j4
sudo make install
```

4. Check if its working
```bash
rs-capture
```
## 3.0 How to set up the Franka Research 3

1. Switch on the control
2. Connect to Franka Desk

https://192.168.1.40/desk/

![Franka desk page](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/franka_ros2_ws/src/images/Screenshot%20from%202024-06-17%2010-54-44.png)

3. Activate FCI

![Click on Activate FCI](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/Screenshot%20from%202024-06-17%2010-42-05.png)

4. Unlock Joint

Click on the right button

![Click on the unlock joint button](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/franka_ros2_ws/src/images/Screenshot%20from%202024-06-17%2010-50-24.png)

4. Change the operation mode to execution

![execution mode](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/franka_ros2_ws/src/images/Screenshot%20from%202024-06-17%2010-57-51.png)
