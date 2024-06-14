#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "realsense2::rsutils" for configuration "Release"
set_property(TARGET realsense2::rsutils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realsense2::rsutils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librsutils.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::rsutils )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::rsutils "${_IMPORT_PREFIX}/lib/librsutils.a" )

# Import target "realsense2::realsense-file" for configuration "Release"
set_property(TARGET realsense2::realsense-file APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realsense2::realsense-file PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C;CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librealsense-file.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::realsense-file )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::realsense-file "${_IMPORT_PREFIX}/lib/librealsense-file.a" )

# Import target "realsense2::realsense2" for configuration "Release"
set_property(TARGET realsense2::realsense2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realsense2::realsense2 PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librealsense2.so.2.55.1"
  IMPORTED_SONAME_RELEASE "librealsense2.so.2.55"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::realsense2 )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::realsense2 "${_IMPORT_PREFIX}/lib/librealsense2.so.2.55.1" )

# Import target "realsense2::fw" for configuration "Release"
set_property(TARGET realsense2::fw APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(realsense2::fw PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "C"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libfw.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS realsense2::fw )
list(APPEND _IMPORT_CHECK_FILES_FOR_realsense2::fw "${_IMPORT_PREFIX}/lib/libfw.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
