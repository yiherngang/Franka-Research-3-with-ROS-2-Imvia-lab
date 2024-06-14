#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter" for configuration "Release"
set_property(TARGET moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_chomp_optimizer_adapter.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_chomp_optimizer_adapter.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_chomp_optimizer_adapter::moveit_chomp_optimizer_adapter "${_IMPORT_PREFIX}/lib/libmoveit_chomp_optimizer_adapter.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
