#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_ros_occupancy_map_monitor::moveit_ros_occupancy_map_monitor" for configuration "Release"
set_property(TARGET moveit_ros_occupancy_map_monitor::moveit_ros_occupancy_map_monitor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_ros_occupancy_map_monitor::moveit_ros_occupancy_map_monitor PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ros_occupancy_map_monitor.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ros_occupancy_map_monitor.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_ros_occupancy_map_monitor::moveit_ros_occupancy_map_monitor )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_ros_occupancy_map_monitor::moveit_ros_occupancy_map_monitor "${_IMPORT_PREFIX}/lib/libmoveit_ros_occupancy_map_monitor.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
