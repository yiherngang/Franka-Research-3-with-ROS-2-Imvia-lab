#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_setup_core_plugins::moveit_setup_core_plugins" for configuration "Release"
set_property(TARGET moveit_setup_core_plugins::moveit_setup_core_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_setup_core_plugins::moveit_setup_core_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_setup_core_plugins.so"
  IMPORTED_SONAME_RELEASE "libmoveit_setup_core_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_setup_core_plugins::moveit_setup_core_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_setup_core_plugins::moveit_setup_core_plugins "${_IMPORT_PREFIX}/lib/libmoveit_setup_core_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
