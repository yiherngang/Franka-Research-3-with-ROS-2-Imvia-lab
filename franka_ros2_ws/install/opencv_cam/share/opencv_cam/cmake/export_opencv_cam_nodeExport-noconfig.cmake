#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "opencv_cam::opencv_cam_node" for configuration ""
set_property(TARGET opencv_cam::opencv_cam_node APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(opencv_cam::opencv_cam_node PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libopencv_cam_node.so"
  IMPORTED_SONAME_NOCONFIG "libopencv_cam_node.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS opencv_cam::opencv_cam_node )
list(APPEND _IMPORT_CHECK_FILES_FOR_opencv_cam::opencv_cam_node "${_IMPORT_PREFIX}/lib/libopencv_cam_node.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
