# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/modules

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
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/ar/.ar/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/core/.core/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/detection/.detection/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/gui/.gui/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/imgproc/.imgproc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/io/.io/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/java/.java/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/python/.python/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/robot/.robot/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/sensor/.sensor/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/blob/.blob/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/dnn/.dnn/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/klt/.klt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/mbt/.mbt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/me/.me/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/tt/.tt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/tt_mi/.tt_mi/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/vision/.vision/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/visual_features/.visual_features/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/vs/.vs/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/core/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/dnn_tracker/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/gui/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/imgproc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/io/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/java_bindings_generator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/klt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/me/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/sensor/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/ar/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/blob/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/robot/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/visual_features/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/vs/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/vision/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/detection/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/mbt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/tt/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/visp/modules/tt_mi/cmake_install.cmake")

endif()

