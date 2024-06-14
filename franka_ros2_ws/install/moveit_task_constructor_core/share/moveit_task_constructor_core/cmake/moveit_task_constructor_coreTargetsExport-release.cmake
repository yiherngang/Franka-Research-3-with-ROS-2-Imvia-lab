#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "moveit_task_constructor_core::moveit_task_constructor_core_stages" for configuration "Release"
set_property(TARGET moveit_task_constructor_core::moveit_task_constructor_core_stages APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_task_constructor_core::moveit_task_constructor_core_stages PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core_stages.so"
  IMPORTED_SONAME_RELEASE "libmoveit_task_constructor_core_stages.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_task_constructor_core::moveit_task_constructor_core_stages )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_task_constructor_core::moveit_task_constructor_core_stages "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core_stages.so" )

# Import target "moveit_task_constructor_core::moveit_task_constructor_core_stage_plugins" for configuration "Release"
set_property(TARGET moveit_task_constructor_core::moveit_task_constructor_core_stage_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_task_constructor_core::moveit_task_constructor_core_stage_plugins PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so"
  IMPORTED_SONAME_RELEASE "libmoveit_task_constructor_core_stage_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_task_constructor_core::moveit_task_constructor_core_stage_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_task_constructor_core::moveit_task_constructor_core_stage_plugins "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core_stage_plugins.so" )

# Import target "moveit_task_constructor_core::moveit_task_constructor_core" for configuration "Release"
set_property(TARGET moveit_task_constructor_core::moveit_task_constructor_core APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(moveit_task_constructor_core::moveit_task_constructor_core PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core.so"
  IMPORTED_SONAME_RELEASE "libmoveit_task_constructor_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS moveit_task_constructor_core::moveit_task_constructor_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_moveit_task_constructor_core::moveit_task_constructor_core "${_IMPORT_PREFIX}/lib/libmoveit_task_constructor_core.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
