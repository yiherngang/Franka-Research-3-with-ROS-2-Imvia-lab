# This is a basic version file for the Config-mode of find_package().
# It is used by write_basic_package_version_file() as input file for configure_file()
# to create a version-file which can be installed along a config.cmake file.
#
# The created file sets PACKAGE_VERSION_EXACT if the current version string and
# the requested version string are exactly the same and it sets
# PACKAGE_VERSION_COMPATIBLE if the current version is >= requested version.
# The variable VISP_VERSION must be set before calling configure_file().

set(PACKAGE_VERSION 3.6.1)

# There is a bug in CMake (at least in 2.7.0) whereby calling "find_package(FOO)" within
# "find_package(FOO)" results in the version being checked in the
# second version no matter if it was set. To get around this, check
# "PACKAGE_FIND_VERSION" and if empty set return variables to TRUE to
# make CMake happy. Not the best solution, but it does the trick.
if(NOT PACKAGE_FIND_VERSION)
  set(PACKAGE_VERSION_COMPATIBLE TRUE)
  set(PACKAGE_VERSION_EXACT TRUE)
  return()
endif()

if("${PACKAGE_VERSION}" VERSION_LESS "${PACKAGE_FIND_VERSION}" )
  set(PACKAGE_VERSION_COMPATIBLE FALSE)
else()
  set(PACKAGE_VERSION_COMPATIBLE TRUE)
  if( "${PACKAGE_FIND_VERSION}" STREQUAL "${PACKAGE_VERSION}")
    set(PACKAGE_VERSION_EXACT TRUE)
  endif()
endif()

