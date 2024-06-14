# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/modules/sensor

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/VISP/include/visp3/visp_sensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES
    "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_sensor.so.3.6.1"
    "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_sensor.so.3.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/adminlab/franka_ros2_ws/build/VISP/lib:/usr/local/lib::"
           NEW_RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so"
         RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_sensor.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/build/VISP/lib:/usr/local/lib::"
         NEW_RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_sensor.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vp1394CMUGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vp1394TwoGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpComedi.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpDirectShowDevice.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpDirectShowGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpDirectShowGrabberImpl.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpDirectShowSampleGrabberI.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpFlyCaptureGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpForceTorqueAtiNetFTSensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpForceTorqueAtiSensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpForceTorqueIitSensor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpKinect.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpLaserScan.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpLaserScanner.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpMocap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpMocapQualisys.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpMocapVicon.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpOccipitalStructure.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpPylonFactory.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpPylonGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpRealSense.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpRealSense2.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpScanPoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpSickLDMRS.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpUeyeGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/sensor" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include/visp3/sensor/vpV4l2Grabber.h")
endif()

