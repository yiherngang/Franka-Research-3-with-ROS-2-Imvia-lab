#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosparam_shortcuts::rosparam_shortcuts" for configuration ""
set_property(TARGET rosparam_shortcuts::rosparam_shortcuts APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rosparam_shortcuts::rosparam_shortcuts PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librosparam_shortcuts.so"
  IMPORTED_SONAME_NOCONFIG "librosparam_shortcuts.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosparam_shortcuts::rosparam_shortcuts )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosparam_shortcuts::rosparam_shortcuts "${_IMPORT_PREFIX}/lib/librosparam_shortcuts.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
