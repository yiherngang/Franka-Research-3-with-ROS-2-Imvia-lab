#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

// Define a logger for logging messages
static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");
// Define the planning group for the panda arm
static const std::string PLANNING_GROUP = "panda_arm";
static const std::string PLANNING_GROUP_GRIPPER = "hand";

int main(int argc, char **argv) {
  // Initialise ROS 2
  rclcpp::init(argc, argv);
  
  // Node options to automatically declare parameters from overrides
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  
  //Create a ROS 2 node
  auto move_group_node =
      rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);

  //Create a single-threaded executor and add the node to it
  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_group_node);
  
  // Spin the executor in a seperate thread to handle callbacks
  std::thread([&executor]() { executor.spin(); }).detach();

  // Create a MoveGroupInterface object for controling the panda arm
  moveit::planning_interface::MoveGroupInterface move_group(move_group_node,
                                                            PLANNING_GROUP);
                                                          
  // Create a MoveGroupInterface object for controlling the gripper
  moveit::planning_interface::MoveGroupInterface move_group_gripper(move_group_node,PLANNING_GROUP_GRIPPER);                                                          

  // Get the joint model group for the panda arm
  const moveit::core::JointModelGroup *joint_model_group =
      move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);
      
  // Get the joint model group for the gripper
  const moveit::core::JointModelGroup *joint_model_group_gripper =
      move_group_gripper.getCurrentState()->getJointModelGroup(
          PLANNING_GROUP_GRIPPER);

  // Log the planning frame
  RCLCPP_INFO(LOGGER, "Planning frame: %s",
              move_group.getPlanningFrame().c_str());

  // Log the end effector link
  RCLCPP_INFO(LOGGER, "End effector link: %s",
              move_group.getEndEffectorLink().c_str());

  // Log the available planning groups
  RCLCPP_INFO(LOGGER, "Available Planning Groups:");
  std::copy(move_group.getJointModelGroupNames().begin(),
            move_group.getJointModelGroupNames().end(),
            std::ostream_iterator<std::string>(std::cout, ", "));
  
  // Get the joint model group for the gripper
  moveit::core::RobotStatePtr current_state_gripper =
      move_group_gripper.getCurrentState(10);

  // Get the current state of the robot
  moveit::core::RobotStatePtr current_state = move_group.getCurrentState(10);

  // Copy the current joint positions of the panda arm
  std::vector<double> joint_group_positions;
  current_state->copyJointGroupPositions(joint_model_group,
                                         joint_group_positions);
  
  // Get the current state of the gripper
  std::vector<double> joint_group_positions_gripper;
  current_state_gripper->copyJointGroupPositions(joint_model_group_gripper,
                                                 joint_group_positions_gripper);
  
  //Home position
  joint_group_positions[0] = 0.00;  
  joint_group_positions[1] = -0.78; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.36;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 1.57;  
  joint_group_positions[6] = 0.78;
  move_group.setJointValueTarget(joint_group_positions);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan;

  bool success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 1");
  move_group.execute(my_plan);

  // Go down
  joint_group_positions[0] = 0.00;  
  joint_group_positions[1] = 0.45; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.36;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 2.80;  
  joint_group_positions[6] = 0.78;
  move_group.setJointValueTarget(joint_group_positions);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 2");
  move_group.execute(my_plan);
  
  RCLCPP_INFO(LOGGER, "Close Gripper!");

  joint_group_positions_gripper[2] = 0.037;

  move_group_gripper.setJointValueTarget(joint_group_positions_gripper);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan_gripper;
  bool success_gripper = (move_group_gripper.plan(my_plan_gripper) ==
                          moveit::core::MoveItErrorCode::SUCCESS);

  move_group_gripper.execute(my_plan_gripper);
  
  //Position 3 (Go up)
  joint_group_positions[0] = 0.00;  
  joint_group_positions[1] = 0.00; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.36;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 2.35;  
  joint_group_positions[6] = 0.78;
  move_group.setJointValueTarget(joint_group_positions);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 3");
  move_group.execute(my_plan);
  
  //Position 3 (Go up)
  joint_group_positions[0] = 0.50;  
  joint_group_positions[1] = 0.20; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.00;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 2.20;  
  joint_group_positions[6] = 1.30;
  move_group.setJointValueTarget(joint_group_positions);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 3");
  move_group.execute(my_plan);
  
  //Position 3 (Go up)
  joint_group_positions[0] = 0.50;  
  joint_group_positions[1] = 0.65; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.00;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 2.70;  
  joint_group_positions[6] = 1.30;
  move_group.setJointValueTarget(joint_group_positions);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 3");
  move_group.execute(my_plan);
  
  RCLCPP_INFO(LOGGER, "Open Gripper!");

  move_group_gripper.setNamedTarget("open");

  //move_group_gripper.setJointValueTarget(joint_group_positions_gripper);

  success_gripper = (move_group_gripper.plan(my_plan_gripper) ==
                     moveit::core::MoveItErrorCode::SUCCESS);

  move_group_gripper.execute(my_plan_gripper);
  
  //Position 3 (Go up)
  joint_group_positions[0] = 0.00;  
  joint_group_positions[1] = -0.78; 
  joint_group_positions[2] = 0.00;  
  joint_group_positions[3] = -2.36;  
  joint_group_positions[4] = 0.00;  
  joint_group_positions[5] = 1.57;  
  joint_group_positions[6] = 0.78;
  move_group.setJointValueTarget(joint_group_positions);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  // Execute
  RCLCPP_INFO(LOGGER, "Going to Position 3");
  move_group.execute(my_plan);
  
  rclcpp::shutdown();
  return 0;
}

