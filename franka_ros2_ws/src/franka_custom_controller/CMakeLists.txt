cmake_minimum_required(VERSION 3.5)
project(franka_custom_controller)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(controller_interface REQUIRED)
find_package(franka_hardware REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(hardware_interface REQUIRED)  # Add this line

add_library(${PROJECT_NAME} SHARED
  src/custom_position_controller.cpp
)

target_include_directories(${PROJECT_NAME}
  PRIVATE include
  ${hardware_interface_INCLUDE_DIRS}  # Add this line
)

ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  controller_interface
  franka_hardware
  Eigen3
  hardware_interface  # Add this line
)

pluginlib_export_plugin_description_file(controller_interface custom_position_controller.xml)

target_link_libraries(${PROJECT_NAME}  # Add this block
  ${hardware_interface_LIBRARIES}
)

install(TARGETS ${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
)

install(DIRECTORY include/
  DESTINATION include
)

ament_package()

