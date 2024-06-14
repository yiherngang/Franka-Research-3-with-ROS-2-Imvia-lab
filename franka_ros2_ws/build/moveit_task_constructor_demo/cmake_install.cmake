# Install script for directory: /home/adminlab/franka_ros2_ws/src/moveit_task_constructor/demo

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_demo")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/libmoveit_task_constructor_demo_pick_place_task.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_task_constructor_demo_pick_place_task.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/cartesian")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/cartesian")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/modular")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/modular")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/alternative_path_costs")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/alternative_path_costs")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ik_clearance_cost_parameters" TYPE DIRECTORY FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ik_clearance_cost_parameters/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ik_clearance_cost")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/ik_clearance_cost")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/fallbacks_move_to")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/fallbacks_move_to")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/pick_place_demo_parameters" TYPE DIRECTORY FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/pick_place_demo_parameters/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo" TYPE EXECUTABLE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/pick_place_demo")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo"
         OLD_RPATH "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_core/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning_interface/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_move_group/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_warehouse/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_planning/lib:/home/adminlab/franka_ros2_ws/install/moveit_ros_occupancy_map_monitor/lib:/home/adminlab/franka_ros2_ws/install/moveit_core/lib:/home/adminlab/franka_ros2_ws/install/srdfdom/lib:/home/adminlab/franka_ros2_ws/install/moveit_msgs/lib:/opt/ros/humble/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/adminlab/franka_ros2_ws/install/rviz_marker_tools/lib:/home/adminlab/franka_ros2_ws/install/moveit_task_constructor_msgs/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_task_constructor_demo/pick_place_demo")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE DIRECTORY FILES
    "/home/adminlab/franka_ros2_ws/src/moveit_task_constructor/demo/launch"
    "/home/adminlab/franka_ros2_ws/src/moveit_task_constructor/demo/config"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/moveit_task_constructor_demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/moveit_task_constructor_demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo/environment" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo/environment" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_index/share/ament_index/resource_index/packages/moveit_task_constructor_demo")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo/cmake" TYPE FILE FILES
    "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_core/moveit_task_constructor_demoConfig.cmake"
    "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/ament_cmake_core/moveit_task_constructor_demoConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_task_constructor_demo" TYPE FILE FILES "/home/adminlab/franka_ros2_ws/src/moveit_task_constructor/demo/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/adminlab/franka_ros2_ws/build/moveit_task_constructor_demo/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
