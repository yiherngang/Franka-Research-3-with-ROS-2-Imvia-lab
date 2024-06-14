# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/tutorial

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
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/bridge/opencv/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/computer-vision/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/grabber/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/gui/pcl-visualizer/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/barcode/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/dnn/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/face/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/matching/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/object/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/detection/tag/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/autothreshold/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/brightness/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/connected-components/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/contour/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/contrast-sharpening/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/count-coins/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/flood-fill/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/imgproc/hough-transform/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/kalman/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/mean-drift/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/misc/npz/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/munkres/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/robot/flir-ptu/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/robot/pioneer/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/robot/mbot/raspberry/visp/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/segmentation/color/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/simulator/image/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/trace/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/blob/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/keypoint/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/generic/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/generic-apriltag/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/generic-rgbd/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/generic-rgbd-blender/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/generic-stereo/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/old/edges/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/old/generic/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/old/hybrid/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/model-based/old/keypoint/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/template-tracker/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/moving-edges/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/tracking/dnn/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/VISP/tutorial/visual-servo/ibvs/cmake_install.cmake")

endif()

