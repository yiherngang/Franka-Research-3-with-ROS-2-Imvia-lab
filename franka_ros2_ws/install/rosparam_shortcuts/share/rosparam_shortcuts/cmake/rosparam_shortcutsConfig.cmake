# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosparam_shortcuts_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED rosparam_shortcuts_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(rosparam_shortcuts_FOUND FALSE)
  elseif(NOT rosparam_shortcuts_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(rosparam_shortcuts_FOUND FALSE)
  endif()
  return()
endif()
set(_rosparam_shortcuts_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosparam_shortcuts_FIND_QUIETLY)
  message(STATUS "Found rosparam_shortcuts: 0.5.0 (${rosparam_shortcuts_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosparam_shortcuts' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${rosparam_shortcuts_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosparam_shortcuts_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${rosparam_shortcuts_DIR}/${_extra}")
endforeach()
