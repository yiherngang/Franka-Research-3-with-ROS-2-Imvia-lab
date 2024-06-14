#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_setup_framework::moveit_setup_framework" for configuration "Release"
set_property(TARGET moveit_setup_framework::moveit_setup_framework APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_setup_framework::moveit_setup_framework PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_setup_framework.so"
  IMPORTED_SONAME_RELEASE "libmoveit_setup_framework.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_setup_framework::moveit_setup_framework )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_setup_framework::moveit_setup_framework "${_IMPORT_PREFIX}/lib/libmoveit_setup_framework.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
