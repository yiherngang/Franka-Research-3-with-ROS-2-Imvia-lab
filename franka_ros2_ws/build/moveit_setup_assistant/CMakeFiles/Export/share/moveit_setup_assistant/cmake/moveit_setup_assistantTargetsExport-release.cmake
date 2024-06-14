#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_setup_assistant::moveit_setup_assistant" for configuration "Release"
set_property(TARGET moveit_setup_assistant::moveit_setup_assistant APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_setup_assistant::moveit_setup_assistant PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_setup_assistant::moveit_setup_assistant )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_setup_assistant::moveit_setup_assistant "${_IMPORT_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant" )

# Import target "moveit_setup_assistant::moveit_setup_assistant_updater" for configuration "Release"
set_property(TARGET moveit_setup_assistant::moveit_setup_assistant_updater APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_setup_assistant::moveit_setup_assistant_updater PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/moveit_setup_assistant/collisions_updater"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_setup_assistant::moveit_setup_assistant_updater )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_setup_assistant::moveit_setup_assistant_updater "${_IMPORT_PREFIX}/lib/moveit_setup_assistant/collisions_updater" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
