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
CMAKE_SOURCE_DIR = /home/adminlab/franka_ros2_ws/src/moveit2/moveit_setup_assistant/moveit_setup_app_plugins

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins

# Include any dependencies generated for this target.
include gtest/CMakeFiles/gtest_main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include gtest/CMakeFiles/gtest_main.dir/compiler_depend.make

# Include the progress variables for this target.
include gtest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include gtest/CMakeFiles/gtest_main.dir/flags.make

gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: gtest/gtest_main_autogen/mocs_compilation.cpp
gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o: gtest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o -MF CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o -c /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest/gtest_main_autogen/mocs_compilation.cpp

gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest/gtest_main_autogen/mocs_compilation.cpp > CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.i

gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest/gtest_main_autogen/mocs_compilation.cpp -o CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.s

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: gtest/CMakeFiles/gtest_main.dir/flags.make
gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: /opt/ros/humble/src/gtest_vendor/src/gtest_main.cc
gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: gtest/CMakeFiles/gtest_main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -MF CMakeFiles/gtest_main.dir/src/gtest_main.cc.o.d -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /opt/ros/humble/src/gtest_vendor/src/gtest_main.cc

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /opt/ros/humble/src/gtest_vendor/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /opt/ros/humble/src/gtest_vendor/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/gtest_main_autogen/mocs_compilation.cpp.o
gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/build.make
gtest/libgtest_main.a: gtest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libgtest_main.a"
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gtest/CMakeFiles/gtest_main.dir/build: gtest/libgtest_main.a
.PHONY : gtest/CMakeFiles/gtest_main.dir/build

gtest/CMakeFiles/gtest_main.dir/clean:
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : gtest/CMakeFiles/gtest_main.dir/clean

gtest/CMakeFiles/gtest_main.dir/depend:
	cd /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adminlab/franka_ros2_ws/src/moveit2/moveit_setup_assistant/moveit_setup_app_plugins /opt/ros/humble/src/gtest_vendor /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest /home/adminlab/franka_ros2_ws/build/moveit_setup_app_plugins/gtest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gtest/CMakeFiles/gtest_main.dir/depend

