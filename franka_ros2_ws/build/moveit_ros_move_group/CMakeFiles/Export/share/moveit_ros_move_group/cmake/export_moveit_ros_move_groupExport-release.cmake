#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_ros_move_group::moveit_move_group_default_capabilities" for configuration "Release"
set_property(TARGET moveit_ros_move_group::moveit_move_group_default_capabilities APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_move_group::moveit_move_group_default_capabilities PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_move_group_default_capabilities.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_move_group_default_capabilities.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_move_group::moveit_move_group_default_capabilities )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_move_group::moveit_move_group_default_capabilities "${_IMPORT_PREFIX}/lib/libmoveit_move_group_default_capabilities.so.2.5.5" )

# Import target "moveit_ros_move_group::moveit_move_group_capabilities_base" for configuration "Release"
set_property(TARGET moveit_ros_move_group::moveit_move_group_capabilities_base APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_move_group::moveit_move_group_capabilities_base PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_move_group_capabilities_base.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_move_group_capabilities_base.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_move_group::moveit_move_group_capabilities_base )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_move_group::moveit_move_group_capabilities_base "${_IMPORT_PREFIX}/lib/libmoveit_move_group_capabilities_base.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
