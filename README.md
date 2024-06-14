
# Franka Research 3 with ROS 2 Imvia lab

## 1. Introduction

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

## 2. Pre-requisite

### Tested Working Versions

Below are the tested working versions for each software:

- **Franka Research 3**: Version 5.2.2
- **libfranka**: Version 0.13.2
- **ROS 2**: Humble Hawksbill
- **franka_ros2**: Version 0.1.13
- **Ubuntu**: Ubuntu 22.04.4 LTS (Jammy)
- **Linux RT Kernel**: Version 6.9.0-rt5+ PREEMPT_RT

### Installation

Below is the step-by-step guide for installation:

#### Setting up the Real-Time Kernel

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

#### Building libfranka from source 

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
cmake --build .
```
