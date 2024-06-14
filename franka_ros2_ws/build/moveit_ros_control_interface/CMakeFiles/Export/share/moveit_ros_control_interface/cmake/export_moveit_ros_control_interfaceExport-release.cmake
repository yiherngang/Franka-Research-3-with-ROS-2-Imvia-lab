#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_ros_control_interface::moveit_ros_control_interface_plugin" for configuration "Release"
set_property(TARGET moveit_ros_control_interface::moveit_ros_control_interface_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_control_interface::moveit_ros_control_interface_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_control_interface_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_control_interface::moveit_ros_control_interface_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_control_interface::moveit_ros_control_interface_plugin "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_plugin.so.2.5.5" )

# Import target "moveit_ros_control_interface::moveit_ros_control_interface_trajectory_plugin" for configuration "Release"
set_property(TARGET moveit_ros_control_interface::moveit_ros_control_interface_trajectory_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_control_interface::moveit_ros_control_interface_trajectory_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_trajectory_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_control_interface_trajectory_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_control_interface::moveit_ros_control_interface_trajectory_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_control_interface::moveit_ros_control_interface_trajectory_plugin "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_trajectory_plugin.so.2.5.5" )

# Import target "moveit_ros_control_interface::moveit_ros_control_interface_gripper_plugin" for configuration "Release"
set_property(TARGET moveit_ros_control_interface::moveit_ros_control_interface_gripper_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_control_interface::moveit_ros_control_interface_gripper_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_gripper_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_control_interface_gripper_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_control_interface::moveit_ros_control_interface_gripper_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_control_interface::moveit_ros_control_interface_gripper_plugin "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_gripper_plugin.so.2.5.5" )

# Import target "moveit_ros_control_interface::moveit_ros_control_interface_empty_plugin" for configuration "Release"
set_property(TARGET moveit_ros_control_interface::moveit_ros_control_interface_empty_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_control_interface::moveit_ros_control_interface_empty_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_empty_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_control_interface_empty_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_control_interface::moveit_ros_control_interface_empty_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_control_interface::moveit_ros_control_interface_empty_plugin "${_IMPORT_PREFIX}/lib/libmoveit_ros_control_interface_empty_plugin.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
