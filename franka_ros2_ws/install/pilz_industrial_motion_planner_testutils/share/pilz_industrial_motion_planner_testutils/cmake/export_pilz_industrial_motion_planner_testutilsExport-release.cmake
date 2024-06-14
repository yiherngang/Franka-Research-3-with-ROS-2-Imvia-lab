#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "pilz_industrial_motion_planner_testutils::pilz_industrial_motion_planner_testutils" for configuration "Release"
set_property(TARGET pilz_industrial_motion_planner_testutils::pilz_industrial_motion_planner_testutils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(pilz_industrial_motion_planner_testutils::pilz_industrial_motion_planner_testutils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libpilz_industrial_motion_planner_testutils.so"
  IMPORTED_SONAME_RELEASE "libpilz_industrial_motion_planner_testutils.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS pilz_industrial_motion_planner_testutils::pilz_industrial_motion_planner_testutils )
list(APPEND _IMPORT_CHECK_FILES_FOR_pilz_industrial_motion_planner_testutils::pilz_industrial_motion_planner_testutils "${_IMPORT_PREFIX}/lib/libpilz_industrial_motion_planner_testutils.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
