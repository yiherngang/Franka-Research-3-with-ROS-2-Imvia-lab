#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_planners_ompl::moveit_ompl_interface" for configuration "Release"
set_property(TARGET moveit_planners_ompl::moveit_ompl_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_planners_ompl::moveit_ompl_interface PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ompl_interface.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ompl_interface.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_planners_ompl::moveit_ompl_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_planners_ompl::moveit_ompl_interface "${_IMPORT_PREFIX}/lib/libmoveit_ompl_interface.so.2.5.5" )

# Import target "moveit_planners_ompl::moveit_ompl_planner_plugin" for configuration "Release"
set_property(TARGET moveit_planners_ompl::moveit_ompl_planner_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_planners_ompl::moveit_ompl_planner_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_ompl_planner_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_ompl_planner_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_planners_ompl::moveit_ompl_planner_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_planners_ompl::moveit_ompl_planner_plugin "${_IMPORT_PREFIX}/lib/libmoveit_ompl_planner_plugin.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
