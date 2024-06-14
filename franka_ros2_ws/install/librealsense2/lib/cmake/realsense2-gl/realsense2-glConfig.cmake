
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was realsense2-glConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set(realsense2-gl_VERSION_MAJOR "2")
set(realsense2-gl_VERSION_MINOR "55")
set(realsense2-gl_VERSION_PATCH "1")

set(realsense2-gl_VERSION ${realsense2-gl_VERSION_MAJOR}.${realsense2-gl_VERSION_MINOR}.${realsense2-gl_VERSION_PATCH})

set_and_check(realsense2-gl_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")

include("${CMAKE_CURRENT_LIST_DIR}/realsense2-glTargets.cmake")
set(realsense2-gl_LIBRARY realsense2-gl::realsense2-gl)
