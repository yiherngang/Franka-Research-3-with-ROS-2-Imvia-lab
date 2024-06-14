# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_srdfdom_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED srdfdom_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(srdfdom_FOUND FALSE)
  elseif(NOT srdfdom_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(srdfdom_FOUND FALSE)
  endif()
  return()
endif()
set(_srdfdom_CONFIG_INCLUDED TRUE)

# output package information
if(NOT srdfdom_FIND_QUIETLY)
  message(STATUS "Found srdfdom: 2.0.4 (${srdfdom_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'srdfdom' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${srdfdom_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(srdfdom_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${srdfdom_DIR}/${_extra}")
endforeach()
