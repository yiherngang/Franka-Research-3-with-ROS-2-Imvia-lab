# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/example

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
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
  include("/home/adminlab/franka_ros2_ws/build/visp/example/calibration/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/coin-simulator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/device/display/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/device/framegrabber/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/device/kinect/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/device/laserscanner/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/device/light/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/direct-visual-servoing/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/homography/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/kalman/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/manual/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/math/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/moments/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/moments/points/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/moments/polygon/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/ogre-simulator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/parse-argv/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/pose-estimation/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/reflex-takktile/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/robot-simulator/afma6/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/robot-simulator/camera/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/robot-simulator/viper850/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-afma4/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-afma6/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-biclops/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-bebop2/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-flir-ptu/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-franka/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-kinova/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-pioneer/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-pixhawk/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-pololu-ptu/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-ptu46/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-universal-robots/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-viper650/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/servo-viper850/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/tools/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/tracking/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/video/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/example/wireframe-simulator/cmake_install.cmake")

endif()

