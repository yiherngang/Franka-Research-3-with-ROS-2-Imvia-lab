# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/modules/core

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/VISP/include/visp3/visp_core.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES
    "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_core.so.3.6.1"
    "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_core.so.3.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/usr/local/lib:::::::::::::::::::::::::::::::::::::::::::::::"
           NEW_RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so"
         RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_core.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so"
         OLD_RPATH "/usr/local/lib:::::::::::::::::::::::::::::::::::::::::::::::"
         NEW_RPATH "/home/adminlab/franka_ros2_ws/install/VISP/lib:/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_core.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpArray2D.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpBSpline.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpCPUFeatures.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpCameraParameters.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpCannyEdgeDetection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpCircle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpClient.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpColVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpColor.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpColorDepthConversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpColormap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpConvert.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpCylinder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpDebug.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpDisplay.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpDisplayException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpEigenConversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpEndian.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpExponentialMap.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpFeatureDisplay.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpFont.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpForceTwistMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpForwardProjection.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpFrameGrabber.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpFrameGrabberException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpGEMM.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpGaussRand.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpGaussianFilter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpHinkley.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpHistogram.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpHistogramPeak.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpHistogramValey.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpHomogeneousMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImage.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageCircle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageConvert.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageDraw.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageFilter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageMorphology.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImagePoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpImageTools.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpIoException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpIoTools.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpJsonParsing.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpKalmanFilter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpLinProg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpLine.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpLinearKalmanFilterInstantiation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpList.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMath.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMatrixException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMeterPixelConversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMoment.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentAlpha.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentArea.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentAreaNormalized.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentBasic.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentCInvariant.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentCentered.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentCommon.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentDatabase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentGravityCenter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentGravityCenterNormalized.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMomentObject.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMouseButton.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMunkres.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpMutex.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpNetwork.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpNoise.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpNullptrEmulated.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPixelMeterConversion.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPlane.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPolygon.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPolygon3D.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpPoseVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpQuadProg.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpQuaternionVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRGBa.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRGBf.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRansac.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRect.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRectOriented.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRequest.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRobust.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRotationMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRotationVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRowVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRxyzVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRzyxVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpRzyzVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpScale.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpSerial.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpServer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpSphere.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestAbstract.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestEWMA.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestHinkley.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestMeanAdjustedCUSUM.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestShewhart.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpStatisticalTestSigma.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpSubColVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpSubMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpSubRowVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpThetaUVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpThread.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpTime.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpTracker.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpTrackingException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpTranslationVector.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpTriangle.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUDPClient.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUDPServer.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUKSigmaDrawerAbstract.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUKSigmaDrawerMerwe.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUniRand.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpUnscentedKalman.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpVelocityTwistMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpXmlParser.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpXmlParserCamera.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpXmlParserHomogeneousMatrix.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/include/visp3/core/vpXmlParserRectOriented.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/core" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/build/VISP/include/visp3/core/vpConfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/build/VISP/include/visp3/visp_modules.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/visp-3.6.1/data/font" TYPE FILE PERMISSIONS OWNER_READ GROUP_READ WORLD_READ OWNER_WRITE FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/core/src/image/private/Rubik-Regular.ttf")
endif()

