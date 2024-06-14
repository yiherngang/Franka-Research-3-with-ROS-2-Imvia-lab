# Install script for directory: /home/adminlab/franka_ros2_ws/src/visp/modules/visual_features

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/visp/include/visp3/visp_visual_features.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/usr/local/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES
    "/home/adminlab/franka_ros2_ws/build/visp/lib/libvisp_visual_features.so.3.6.1"
    "/home/adminlab/franka_ros2_ws/build/visp/lib/libvisp_visual_features.so.3.6"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so.3.6.1"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so.3.6"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/adminlab/franka_ros2_ws/build/visp/lib:/usr/local/lib:"
           NEW_RPATH "/usr/local/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibsx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so"
         RPATH "/usr/local/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY OPTIONAL FILES "/home/adminlab/franka_ros2_ws/build/visp/lib/libvisp_visual_features.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/build/visp/lib:/usr/local/lib:"
         NEW_RPATH "/usr/local/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libvisp_visual_features.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpBasicFeature.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureBuilder.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureDepth.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureEllipse.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureException.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureLine.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureLuminance.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMoment.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentAlpha.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentArea.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentAreaNormalized.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentBasic.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentCInvariant.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentCentered.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentCommon.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentDatabase.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentGravityCenter.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureMomentGravityCenterNormalized.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeaturePoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeaturePoint3D.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeaturePointPolar.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureSegment.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureThetaU.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureTranslation.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpFeatureVanishingPoint.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/visp3/visual_features" TYPE FILE OPTIONAL FILES "/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include/visp3/visual_features/vpGenericFeature.h")
endif()

