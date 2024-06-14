# Install script for directory: /home/adminlab/franka_ros2_ws/src/librealsense/examples

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/adminlab/franka_ros2_ws/install/librealsense2")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/hello-realsense/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/software-device/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/capture/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/callback/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/save-to-disk/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/multicam/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/pointcloud/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/align/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/align-gl/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/align-advanced/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/sensor-control/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/measure/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/C/depth/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/C/color/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/C/distance/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/post-processing/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/record-playback/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/motion/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/gl/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr/cmake_install.cmake")

endif()

