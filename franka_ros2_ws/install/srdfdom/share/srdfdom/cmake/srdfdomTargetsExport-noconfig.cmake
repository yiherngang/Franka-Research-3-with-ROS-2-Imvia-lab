#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "srdfdom::srdfdom" for configuration ""
set_property(TARGET srdfdom::srdfdom APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(srdfdom::srdfdom PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsrdfdom.so.2.0.4"
  IMPORTED_SONAME_NOCONFIG "libsrdfdom.so.2.0.4"
  )

list(APPEND _IMPORT_CHECK_TARGETS srdfdom::srdfdom )
list(APPEND _IMPORT_CHECK_FILES_FOR_srdfdom::srdfdom "${_IMPORT_PREFIX}/lib/libsrdfdom.so.2.0.4" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
