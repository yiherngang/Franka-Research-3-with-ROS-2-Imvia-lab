# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adminlab/franka_ros2_ws/src/librealsense

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adminlab/franka_ros2_ws/build/librealsense2

# Include any dependencies generated for this target.
include examples/hdr/CMakeFiles/rs-hdr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/hdr/CMakeFiles/rs-hdr.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/hdr/CMakeFiles/rs-hdr.dir/progress.make

# Include the compile flags for this target's objects.
include examples/hdr/CMakeFiles/rs-hdr.dir/flags.make

examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/flags.make
examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o: /home/adminlab/franka_ros2_ws/src/librealsense/examples/hdr/rs-hdr.cpp
examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/librealsense2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o -MF CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o.d -o CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o -c /home/adminlab/franka_ros2_ws/src/librealsense/examples/hdr/rs-hdr.cpp

examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rs-hdr.dir/rs-hdr.cpp.i"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adminlab/franka_ros2_ws/src/librealsense/examples/hdr/rs-hdr.cpp > CMakeFiles/rs-hdr.dir/rs-hdr.cpp.i

examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rs-hdr.dir/rs-hdr.cpp.s"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adminlab/franka_ros2_ws/src/librealsense/examples/hdr/rs-hdr.cpp -o CMakeFiles/rs-hdr.dir/rs-hdr.cpp.s

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/flags.make
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o: /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui.cpp
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/librealsense2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o -MF CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o.d -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o -c /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui.cpp

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.i"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui.cpp > CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.i

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.s"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui.cpp -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.s

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/flags.make
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o: /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_draw.cpp
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/librealsense2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o -MF CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o.d -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o -c /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_draw.cpp

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.i"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_draw.cpp > CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.i

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.s"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_draw.cpp -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.s

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/flags.make
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o: /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_impl_glfw.cpp
examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o: examples/hdr/CMakeFiles/rs-hdr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/librealsense2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o -MF CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o.d -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o -c /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_impl_glfw.cpp

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.i"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_impl_glfw.cpp > CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.i

examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.s"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adminlab/franka_ros2_ws/src/librealsense/third-party/imgui/imgui_impl_glfw.cpp -o CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.s

# Object files for target rs-hdr
rs__hdr_OBJECTS = \
"CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o" \
"CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o" \
"CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o" \
"CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o"

# External object files for target rs-hdr
rs__hdr_EXTERNAL_OBJECTS =

Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/rs-hdr.cpp.o
Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui.cpp.o
Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_draw.cpp.o
Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/__/__/third-party/imgui/imgui_impl_glfw.cpp.o
Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/build.make
Release/rs-hdr: Release/librealsense2.so.2.55.1
Release/rs-hdr: /usr/lib/x86_64-linux-gnu/libglfw.so.3.3
Release/rs-hdr: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Release/rs-hdr: /usr/lib/x86_64-linux-gnu/libGLX.so
Release/rs-hdr: /usr/lib/x86_64-linux-gnu/libGLU.so
Release/rs-hdr: Release/librsutils.a
Release/rs-hdr: examples/hdr/CMakeFiles/rs-hdr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adminlab/franka_ros2_ws/build/librealsense2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable ../../Release/rs-hdr"
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rs-hdr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/hdr/CMakeFiles/rs-hdr.dir/build: Release/rs-hdr
.PHONY : examples/hdr/CMakeFiles/rs-hdr.dir/build

examples/hdr/CMakeFiles/rs-hdr.dir/clean:
	cd /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr && $(CMAKE_COMMAND) -P CMakeFiles/rs-hdr.dir/cmake_clean.cmake
.PHONY : examples/hdr/CMakeFiles/rs-hdr.dir/clean

examples/hdr/CMakeFiles/rs-hdr.dir/depend:
	cd /home/adminlab/franka_ros2_ws/build/librealsense2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adminlab/franka_ros2_ws/src/librealsense /home/adminlab/franka_ros2_ws/src/librealsense/examples/hdr /home/adminlab/franka_ros2_ws/build/librealsense2 /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr /home/adminlab/franka_ros2_ws/build/librealsense2/examples/hdr/CMakeFiles/rs-hdr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/hdr/CMakeFiles/rs-hdr.dir/depend

