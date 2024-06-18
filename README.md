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

### 2.1 Tested Working Versions

Below are the tested working versions for each software:

- **Franka Research 3**: Version 5.2.2
- **libfranka**: Version 0.13.2
- **ROS 2**: Humble Hawksbill
- **franka_ros2**: Version 0.1.13
- **Ubuntu**: Ubuntu 22.04.4 LTS (Jammy)
- **Linux RT Kernel**: Version 6.9.0-rt5+ PREEMPT_RT
- **Visual Servoing Platform(ViSP)**: Version 3.6.1

### 2.2 Installation

Below is the step-by-step guide for installation:

#### 2.2.1 Setting up the Real-Time Kernel

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

#### 2.2.2 Building libfranka from source 

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
#### 2.2.3 Install ROS2 Humble Hawksbill

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
#### 2.2.4 Install **Franka_ros2** from source

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
#### 2.2.5 Install ViSP from source

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
#### 2.2.6 Install librealsense SDK for Intel D435F camera

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

## 4.0 How to run the example in libfranka

1. Go to the libfranka example build file

```bash
cd ~/libfranka/build/examples
```

2. View the available example

Use the command **ls** and you should see the list like below 
```bash
adminlab@CO-P-MASTERS-13:~/libfranka/build/examples$ ls
cartesian_impedance_control     generate_cartesian_pose_motion_external_control_loop      generate_joint_velocity_motion                        motion_with_control
CMakeFiles                      generate_cartesian_velocity_motion                        generate_joint_velocity_motion_external_control_loop  motion_with_control_external_control_loop
cmake_install.cmake             generate_cartesian_velocity_motion_external_control_loop  grasp_object                                          print_joint_poses
communication_test              generate_consecutive_motions                              joint_impedance_control                               vacuum_object
echo_robot_state                generate_elbow_motion                                     joint_point_to_point_motion
force_control                   generate_joint_position_motion                            libexamples_common.a
generate_cartesian_pose_motion  generate_joint_position_motion_external_control_loop      Makefile
```

3. Run an example file

```bash
./generate_cartesian_pose_motion 192.168.1.40
```
## 5.0 How to run the example controller in Franka ROS2 library

1. Go to the Franka ros2 workspace

```bash
cd ~/franka_ros2_ws/
```

2. Source the setup.bash file

```bash
source install/setup.bash
```

3. View the available example controller

```bash
adminlab@CO-P-MASTERS-13:~/franka_ros2_ws$ ls src/franka_ros2/franka_bringup/launch/
cartesian_elbow_example_controller.launch.py        elbow_example_controller.launch.py                 joint_impedance_with_ik_example_controller.launch.py  move_to_start_example_controller.launch.py
cartesian_orientation_example_controller.launch.py  franka.launch.py                                   joint_position_example_controller.launch.py
cartesian_pose_example_controller.launch.py         gravity_compensation_example_controller.launch.py  joint_velocity_example_controller.launch.py
cartesian_velocity_example_controller.launch.py     joint_impedance_example_controller.launch.py       model_example_controller.launch.py
```

4. Run an example controller
```bash
ros2 launch franka_bringup move_to_start_example_controller.launch.py robot_ip:=192.168.1.40
```

This code will move the Franka Research 3 to the start position

## 6.0 How to use MoveIt2 on Franka Research 3 ?

### 6.1 Control Franka Research 3 using MotionPlanning Group 

1. Go to the Franka ros2 workspace

```bash
cd ~/franka_ros2_ws/
```

2. Source the setup.bash file

```bash
source install/setup.bash
```

3. Run the franka_moveit_config
```bash
ros2 launch franka_moveit_config moveit.launch.py robot_ip:=192.168.1.40
```

4. Tick the MotionPlanning group on the Display pannel

- [x] MotionPlanning

5. Plan the position of the end effector and click "Plan & execute"

View the demo video below:

[![Watch the video](https://raw.githubusercontent.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/main/franka_ros2_ws/src/images/Screenshot%20from%202024-06-17%2011-36-07.png)](https://www.youtube.com/watch?v=0sax6AV4quo)

### 6.2 Control Franka Research 3 with Logitech Gamepad F710 joystick

1. Go to franka_ros2_ws/src/moveit2/moveit_ros/moveit_servo/src/teleop_demo
2. Edit the code joystick_servo_example.cpp, comment out this snippet of code and save it.

```cpp
	/*
    // Load the collision scene asynchronously
    collision_pub_thread_ = std::thread([this]() {
      rclcpp::sleep_for(std::chrono::seconds(3));
      // Create collision object, in the way of servoing
      moveit_msgs::msg::CollisionObject collision_object;
      collision_object.header.frame_id = "panda_link0";
      collision_object.id = "box";

      shape_msgs::msg::SolidPrimitive table_1;
      table_1.type = table_1.BOX;
      table_1.dimensions = { 0.4, 0.6, 0.03 };

      geometry_msgs::msg::Pose table_1_pose;
      table_1_pose.position.x = 0.6;
      table_1_pose.position.y = 0.0;
      table_1_pose.position.z = 0.4;

      shape_msgs::msg::SolidPrimitive table_2;
      table_2.type = table_2.BOX;
      table_2.dimensions = { 0.6, 0.4, 0.03 };

      geometry_msgs::msg::Pose table_2_pose;
      table_2_pose.position.x = 0.0;
      table_2_pose.position.y = 0.5;
      table_2_pose.position.z = 0.25;

      collision_object.primitives.push_back(table_1);
      collision_object.primitive_poses.push_back(table_1_pose);
      collision_object.primitives.push_back(table_2);
      collision_object.primitive_poses.push_back(table_2_pose);
      collision_object.operation = collision_object.ADD;

      moveit_msgs::msg::PlanningSceneWorld psw;
      psw.collision_objects.push_back(collision_object);

      auto ps = std::make_unique<moveit_msgs::msg::PlanningScene>();
      ps->world = psw;
      ps->is_diff = true;
      collision_pub_->publish(std::move(ps));
    });*/
```
3. Build the package

```bash
cd ~/franka_ros2_ws/
colcon build --packages-select moveit_servo
source install/setup.bash
```

4. Run the franka_moveit_config
```bash
ros2 launch franka_moveit_config moveit.launch.py robot_ip:=192.168.1.40
```

5. On another terminal, Run the moveit_servo example

```bash
ros2 launch moveit_servo servo_example.launch.py
```

Below is the labbeling of Logitech Gamepad F710:

![Labeling for Logitech Gamepad](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/franka_ros2_ws/src/images/Labelling%20of%20controller.png)

Watch my Demo:

[![Watch the video](https://img.youtube.com/vi/vvzb1XYdZws/maxresdefault.jpg)](https://www.youtube.com/watch?v=vvzb1XYdZws)

### 6.3 Franka Research 3 pick & place with custom package (C++ code)

1. Create a custom package

```bash
cd ~/franka_ros2_ws/src
ros2 pkg create --build-type ament_cmake moveit2_scripts
```

2. Copy all the file in the **moveit2_scripts** in this directory

https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/tree/main/franka_ros2_ws/src/moveit2_scripts 

4. Build the package
```bash
cd ~/franka_ros2_ws
colcon build --packages-select
source install/setup.bash
```

5. Run pick & place Example 1 (define joint angle).

```bash
ros2 launch moveit2_scripts test_trajectory3.launch.py
```

You can change the value in test_trajectory3.cpp
```cpp
  joint_group_positions[0] = 0.00;  
  joint_group_positions[1] = 0.45; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.36;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 2.80;  
  joint_group_positions[6] = 0.78;
```

6. Run pick & place Example 2 (define quaternion / Euler angle)

```bash
ros2 launch moveit2_scripts test_trajectory2.launch.py
```

You can change the value in test_trajectory2.cpp
```cpp
  tf2::Quaternion quaternion2 = quaternionFromEuler(3.142, 0, -0.70);
  target_pose1.orientation.x = quaternion2.x();
  target_pose1.orientation.y = quaternion2.y();
  target_pose1.orientation.z = quaternion2.z();
  target_pose1.orientation.w = quaternion2.w();
  target_pose1.position.x = 0.500;
  target_pose1.position.y = 0.000;
  target_pose1.position.z = 0.140;
```

Demo Video:

[![Pick and Place](https://img.youtube.com/vi/nNuHjoyj9CM/maxresdefault.jpg)](https://www.youtube.com/watch?v=nNuHjoyj9CM)

## 7.0 Visual Servoing with Franka Research 3

### 7.1 Camera Calibration

1. Connect the Realsense D435 camera to the computer

2. Print the [OpenCV_Chessboard.pdf](https://github.com/yiherngang/Franka-Research-3-with-ROS-2-Imvia-lab/blob/main/franka_ros2_ws/src/images/OpenCV_Chessboard.pdf) and put it under the camera.

3. Go to ~/franka_ros2_ws/build/visp/apps/calibration

```bash
cd ~/franka_ros2_ws/build/visp/apps/calibration
```

5. Open the franka calibration apps

```bash
./visp-acquire-franka-calib-data --ip 192.168.1.40
```

5. Move the robot to different position and remains the chessboard. Left mouse click to take 10 different data. Right click after 10 data

```bash
Sample output
Image size: 640 x 480
Found camera with name: "Camera"
Save: franka_image-1.png and franka_pose_fPe_1.yaml
Save: franka_image-2.png and franka_pose_fPe_2.yaml
Save: franka_image-3.png and franka_pose_fPe_3.yaml
Save: franka_image-4.png and franka_pose_fPe_4.yaml
Save: franka_image-5.png and franka_pose_fPe_5.yaml
Save: franka_image-6.png and franka_pose_fPe_6.yaml
Save: franka_image-7.png and franka_pose_fPe_7.yaml
Save: franka_image-8.png and franka_pose_fPe_8.yaml
```

6. Compute camera poses from corresponding images

```bash
./visp-compute-chessboard-poses --square-size 0.0262 --input franka_image-%d.png --intrinsic franka_camera.xml --output franka_pose_cPo_%d.yaml
```

7. Estimate end effector to camera transformation

```bash
./visp-compute-hand-eye-calibration --data-path . --fPe franka_pose_fPe_%d.yaml --cPo franka_pose_cPo_%d.yaml --output franka_eMc.yaml
```

```bash
sample output
more franka_eMc.yaml
rows: 6
cols: 1
data:
  - [-0.0351726]
  - [-0.0591187]
  - [0.015876]
  - [-0.00265638]
  - [0.00565946]
  - [0.0166116]

$ more franka_eMc.txt
0.9998460169  -0.01661822717  0.005637104144  -0.03517264821
0.0166031939  0.9998585032  0.002703241732  -0.05911865752
-0.005681229597  -0.002609231545  0.9999804576  0.0158759732
0  0  0  1
```

8. Visualise Camera pose

```bash
python hand_eye_calibration_show_extrinsics.py --ndata 8 --eMc_yaml franka_eMc.yaml --cPo_file_pattern franka_pose_cPo_%d.yaml --square_size 0.0262 --focal_px 605.146728515625
```
### 7.2 Visual Servoing with Franka Research 3

1. Go to servo-franka folder

```bash
cd ~/franka_ros2_ws/build/visp/example/servo-franka
```

2. Run the binary
```bash
./servoFrankaIBVS --eMc ../../apps/calibration/eMc.yaml --ip 192.168.1.40
```

Demo Video:

[![Watch the video](https://img.youtube.com/vi/gEpAMvD41xw/maxresdefault.jpg)](https://www.youtube.com/watch?v=gEpAMvD41xw)

