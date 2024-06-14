# Install script for directory: /home/adminlab/franka_ros2_ws/src/opencv

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippicv-readme.htm" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/icv/readme.htm")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippicv-EULA.txt" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/EULA.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippicv-third-party-programs.txt" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/third-party-programs.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippiw-support.txt" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/icv/../iw/../support.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippiw-third-party-programs.txt" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/icv/../iw/../third-party-programs.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ippiw-EULA.txt" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippicv/ippicv_lnx/icv/../iw/../EULA.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "flatbuffers-LICENSE.txt" FILES "/home/adminlab/franka_ros2_ws/src/opencv/3rdparty/flatbuffers/LICENSE.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "opencl-headers-LICENSE.txt" FILES "/home/adminlab/franka_ros2_ws/src/opencv/3rdparty/include/opencl/LICENSE.txt")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlicensesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/licenses/opencv4" TYPE FILE RENAME "ade-LICENSE" FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ade/ade-0.1.2d/LICENSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv4/opencv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/cvconfig.h")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/opencv4/opencv2" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/opencv2/opencv_modules.hpp")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake"
         "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4/OpenCVModules.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/Export/lib/cmake/opencv4/OpenCVModules-release.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/opencv4" TYPE FILE FILES
    "/home/adminlab/franka_ros2_ws/build/OpenCV/unix-install/OpenCVConfig-version.cmake"
    "/home/adminlab/franka_ros2_ws/build/OpenCV/unix-install/OpenCVConfig.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xscriptsx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE FILES "/home/adminlab/franka_ros2_ws/build/OpenCV/CMakeFiles/install/setup_vars_opencv4.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xdevx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/opencv4" TYPE FILE FILES
    "/home/adminlab/franka_ros2_ws/src/opencv/platforms/scripts/valgrind.supp"
    "/home/adminlab/franka_ros2_ws/src/opencv/platforms/scripts/valgrind_3rdparty.supp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ippiw/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/protobuf/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/3rdparty/ittnotify/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/include/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/calib3d/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/core/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/dnn/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/features2d/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/flann/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/gapi/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/highgui/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/imgcodecs/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/imgproc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/java/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/js/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/ml/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/objc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/objdetect/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/photo/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/python/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/stitching/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/ts/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/video/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/videoio/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/.firstpass/world/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/core/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/flann/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/imgproc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/ml/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/photo/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/python_tests/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/dnn/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/features2d/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/imgcodecs/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/videoio/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/calib3d/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/highgui/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/objdetect/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/stitching/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/ts/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/video/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/gapi/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/java_bindings_generator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/js_bindings_generator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/objc_bindings_generator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/python_bindings_generator/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/java/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/modules/python3/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/doc/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/data/cmake_install.cmake")
  include("/home/adminlab/franka_ros2_ws/build/OpenCV/apps/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/adminlab/franka_ros2_ws/build/OpenCV/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
