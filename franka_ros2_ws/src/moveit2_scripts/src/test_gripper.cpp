#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <chrono>
#include <thread>

// Define a logger for the node
static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");
// Define the planning group for the gripper
static const std::string PLANNING_GROUP_GRIPPER = "hand";

int main(int argc, char **argv) {
	// Initialise ROS 2
  rclcpp::init(argc, argv);
  
  // Node options to automatically declare parameters from overrides
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  
  // Create a ROS 2 node
  auto move_group_node =
      rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);

  //Create a single threaded executor and add the node to it
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_group_node);
  
  //Spin the executor in a seperate thread
  std::thread([&executor]() { executor.spin(); }).detach();

  // Create a MoveGroupInterface object for the gripper
  moveit::planning_interface::MoveGroupInterface move_group_gripper(
      move_group_node, PLANNING_GROUP_GRIPPER);

  // Get the joint model group for the gripper
  const moveit::core::JointModelGroup *joint_model_group_gripper =
      move_group_gripper.getCurrentState()->getJointModelGroup(
          PLANNING_GROUP_GRIPPER);

  // Get the joint model group for the gripper
  moveit::core::RobotStatePtr current_state_gripper =
      move_group_gripper.getCurrentState(10);

  // Get the current state of the gripper
  std::vector<double> joint_group_positions_gripper;
  current_state_gripper->copyJointGroupPositions(joint_model_group_gripper,
                                                 joint_group_positions_gripper);

  // Close Gripper

  RCLCPP_INFO(LOGGER, "Close Gripper!");
  

  joint_group_positions_gripper[2] = 0.038;

  move_group_gripper.setJointValueTarget(joint_group_positions_gripper);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan_gripper;
  bool success_gripper = (move_group_gripper.plan(my_plan_gripper) ==
                          moveit::core::MoveItErrorCode::SUCCESS);

  move_group_gripper.execute(my_plan_gripper);

  // Sleep for some seconds
  std::this_thread::sleep_for(std::chrono::milliseconds(3000));

  // Open Gripper

  RCLCPP_INFO(LOGGER, "Open Gripper!");

  move_group_gripper.setNamedTarget("open");

  //move_group_gripper.setJointValueTarget(joint_group_positions_gripper);

  success_gripper = (move_group_gripper.plan(my_plan_gripper) ==
                     moveit::core::MoveItErrorCode::SUCCESS);

  move_group_gripper.execute(my_plan_gripper);

  rclcpp::shutdown();
  return 0;
}

