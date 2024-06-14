# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_moveit_visual_tools_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED moveit_visual_tools_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(moveit_visual_tools_FOUND FALSE)
  elseif(NOT moveit_visual_tools_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(moveit_visual_tools_FOUND FALSE)
  endif()
  return()
endif()
set(_moveit_visual_tools_CONFIG_INCLUDED TRUE)

# output package information
if(NOT moveit_visual_tools_FIND_QUIETLY)
  message(STATUS "Found moveit_visual_tools: 4.1.0 (${moveit_visual_tools_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'moveit_visual_tools' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${moveit_visual_tools_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(moveit_visual_tools_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${moveit_visual_tools_DIR}/${_extra}")
endforeach()
