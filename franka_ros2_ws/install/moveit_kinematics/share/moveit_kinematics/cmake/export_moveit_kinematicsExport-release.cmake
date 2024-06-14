#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_kinematics::moveit_cached_ik_kinematics_base" for configuration "Release"
set_property(TARGET moveit_kinematics::moveit_cached_ik_kinematics_base APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_kinematics::moveit_cached_ik_kinematics_base PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_cached_ik_kinematics_base.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_kinematics::moveit_cached_ik_kinematics_base )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_kinematics::moveit_cached_ik_kinematics_base "${_IMPORT_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so.2.5.5" )

# Import target "moveit_kinematics::moveit_cached_ik_kinematics_plugin" for configuration "Release"
set_property(TARGET moveit_kinematics::moveit_cached_ik_kinematics_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_kinematics::moveit_cached_ik_kinematics_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_cached_ik_kinematics_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_kinematics::moveit_cached_ik_kinematics_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_kinematics::moveit_cached_ik_kinematics_plugin "${_IMPORT_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so.2.5.5" )

# Import target "moveit_kinematics::moveit_kdl_kinematics_plugin" for configuration "Release"
set_property(TARGET moveit_kinematics::moveit_kdl_kinematics_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_kinematics::moveit_kdl_kinematics_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_kdl_kinematics_plugin.so"
  IMPORTED_SONAME_RELEASE "libmoveit_kdl_kinematics_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_kinematics::moveit_kdl_kinematics_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_kinematics::moveit_kdl_kinematics_plugin "${_IMPORT_PREFIX}/lib/libmoveit_kdl_kinematics_plugin.so" )

# Import target "moveit_kinematics::moveit_lma_kinematics_plugin" for configuration "Release"
set_property(TARGET moveit_kinematics::moveit_lma_kinematics_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_kinematics::moveit_lma_kinematics_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_lma_kinematics_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_lma_kinematics_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_kinematics::moveit_lma_kinematics_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_kinematics::moveit_lma_kinematics_plugin "${_IMPORT_PREFIX}/lib/libmoveit_lma_kinematics_plugin.so.2.5.5" )

# Import target "moveit_kinematics::moveit_srv_kinematics_plugin" for configuration "Release"
set_property(TARGET moveit_kinematics::moveit_srv_kinematics_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_kinematics::moveit_srv_kinematics_plugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_srv_kinematics_plugin.so.2.5.5"
  IMPORTED_SONAME_RELEASE "libmoveit_srv_kinematics_plugin.so.2.5.5"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_kinematics::moveit_srv_kinematics_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_kinematics::moveit_srv_kinematics_plugin "${_IMPORT_PREFIX}/lib/libmoveit_srv_kinematics_plugin.so.2.5.5" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
