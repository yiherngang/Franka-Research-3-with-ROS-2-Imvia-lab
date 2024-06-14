# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/example

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/adminlab/franka_ros2_ws/install/VISP")
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
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/calibration/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/coin-simulator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/device/display/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/device/framegrabber/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/device/kinect/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/device/laserscanner/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/device/light/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/direct-visual-servoing/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/homography/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/kalman/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/manual/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/math/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/moments/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/moments/points/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/moments/polygon/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/ogre-simulator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/parse-argv/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/pose-estimation/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/reflex-takktile/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/robot-simulator/afma6/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/robot-simulator/camera/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/robot-simulator/viper850/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-afma4/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-afma6/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-biclops/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-bebop2/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-flir-ptu/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-franka/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-kinova/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-pioneer/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-pixhawk/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-pololu-ptu/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-ptu46/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-universal-robots/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-viper650/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/servo-viper850/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/tools/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/tracking/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/video/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/example/wireframe-simulator/cmake_install.cmake")

endif()

