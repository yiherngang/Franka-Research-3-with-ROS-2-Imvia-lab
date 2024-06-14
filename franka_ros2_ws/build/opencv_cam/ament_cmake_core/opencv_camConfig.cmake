# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_opencv_cam_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED opencv_cam_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(opencv_cam_FOUND FALSE)
  elseif(NOT opencv_cam_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(opencv_cam_FOUND FALSE)
  endif()
  return()
endif()
set(_opencv_cam_CONFIG_INCLUDED TRUE)

# output package information
if(NOT opencv_cam_FIND_QUIETLY)
  message(STATUS "Found opencv_cam: 0.2.0 (${opencv_cam_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'opencv_cam' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${opencv_cam_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(opencv_cam_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${opencv_cam_DIR}/${_extra}")
endforeach()
