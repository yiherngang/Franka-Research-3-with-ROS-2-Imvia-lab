IF(NOT EXISTS "/home/adminlab/franka_ros2_ws/build/librealsense2/install_manifest.txt")
  MESSAGE(WARNING "Cannot find install manifest: \"/home/adminlab/franka_ros2_ws/build/librealsense2/install_manifest.txt\"")
  MESSAGE(STATUS "Uninstall targets will be skipped")
ELSE(NOT EXISTS "/home/adminlab/franka_ros2_ws/build/librealsense2/install_manifest.txt")
  FILE(READ "/home/adminlab/franka_ros2_ws/build/librealsense2/install_manifest.txt" files)
  STRING(REGEX REPLACE "\n" ";" files "${files}")
  FOREACH(file ${files})
    MESSAGE(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
    IF(EXISTS "$ENV{DESTDIR}${file}")
      EXEC_PROGRAM(
        "/usr/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
        OUTPUT_VARIABLE rm_out
        RETURN_VALUE rm_retval
        )
      IF(NOT "${rm_retval}" STREQUAL 0)
        MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
      ENDIF(NOT "${rm_retval}" STREQUAL 0)
    ELSEIF(NOT "${CMAKE_VERSION}" STRLESS "2.8.1")
      IF(IS_SYMLINK "$ENV{DESTDIR}${file}")
        EXEC_PROGRAM(
          "/usr/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
          OUTPUT_VARIABLE rm_out
          RETURN_VALUE rm_retval
          )
        IF(NOT "${rm_retval}" STREQUAL 0)
          MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
        ENDIF(NOT "${rm_retval}" STREQUAL 0)
      ENDIF(IS_SYMLINK "$ENV{DESTDIR}${file}")
    ELSE(EXISTS "$ENV{DESTDIR}${file}")
      MESSAGE(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
    ENDIF(EXISTS "$ENV{DESTDIR}${file}")
  ENDFOREACH(file)
  execute_process(COMMAND ldconfig)
ENDIF(NOT EXISTS "/home/adminlab/franka_ros2_ws/build/librealsense2/install_manifest.txt")
