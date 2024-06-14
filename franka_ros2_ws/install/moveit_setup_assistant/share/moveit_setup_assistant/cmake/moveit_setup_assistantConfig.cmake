# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_moveit_setup_assistant_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED moveit_setup_assistant_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(moveit_setup_assistant_FOUND FALSE)
  elseif(NOT moveit_setup_assistant_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(moveit_setup_assistant_FOUND FALSE)
  endif()
  return()
endif()
set(_moveit_setup_assistant_CONFIG_INCLUDED TRUE)

# output package information
if(NOT moveit_setup_assistant_FIND_QUIETLY)
  message(STATUS "Found moveit_setup_assistant: 2.5.5 (${moveit_setup_assistant_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'moveit_setup_assistant' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${moveit_setup_assistant_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(moveit_setup_assistant_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${moveit_setup_assistant_DIR}/${_extra}")
endforeach()
