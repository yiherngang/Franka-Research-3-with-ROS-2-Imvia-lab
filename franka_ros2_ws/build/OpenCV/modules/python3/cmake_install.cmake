# Install script for directory: /home/adminlab/franka_ros2_ws/src/opencv/modules/python/python3

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/adminlab/franka_ros2_ws/install/OpenCV")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/python/package/cv2/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/python/package/cv2/load_config_py2.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/python/package/cv2/load_config_py3.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/install/python_loader//cv2/config.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/misc" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/python/package/extra_modules/misc/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/misc" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/python/package/extra_modules/misc/version.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/mat_wrapper" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/core/misc/python/package/mat_wrapper/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/utils" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/core/misc/python/package/utils/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/gapi" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/misc/python/package/gapi/__init__.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages" TYPE DIRECTORY FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/modules/python_bindings_generator/cv2")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so"
         RPATH "/home/adminlab/franka_ros2_ws/install/OpenCV/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10" TYPE MODULE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/lib/python3/cv2.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/build/OpenCV/lib::"
         NEW_RPATH "/home/adminlab/franka_ros2_ws/install/OpenCV/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2/python-3.10/cv2.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xpythonx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3.10/dist-packages/cv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/install/python_loader//cv2/config-3.10.py")
endif()

