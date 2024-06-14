#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "generate_parameter_library_example::minimal_publisher" for configuration ""
set_property(TARGET generate_parameter_library_example::minimal_publisher APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(generate_parameter_library_example::minimal_publisher PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libminimal_publisher.so"
  IMPORTED_SONAME_NOCONFIG "libminimal_publisher.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS generate_parameter_library_example::minimal_publisher )
list(APPEND _IMPORT_CHECK_FILES_FOR_generate_parameter_library_example::minimal_publisher "${_IMPORT_PREFIX}/lib/libminimal_publisher.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
