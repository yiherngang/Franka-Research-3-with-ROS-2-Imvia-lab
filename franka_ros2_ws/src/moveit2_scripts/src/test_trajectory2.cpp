#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>

#include <moveit_msgs/msg/display_robot_state.hpp>
#include <moveit_msgs/msg/display_trajectory.hpp>

#include <tf2/LinearMath/Quaternion.h>

// Function to convert Euler angles to Quaternion
tf2::Quaternion quaternionFromEuler(double roll, double pitch, double yaw) {
  tf2::Quaternion q;
  q.setRPY(roll, pitch, yaw);
  return q;
}

static const rclcpp::Logger LOGGER = rclcpp::get_logger("move_group_demo");

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  rclcpp::NodeOptions node_options;
  node_options.automatically_declare_parameters_from_overrides(true);
  auto move_group_node =
      rclcpp::Node::make_shared("move_group_interface_tutorial", node_options);

  rclcpp::executors::SingleThreadedExecutor executor;
  executor.add_node(move_group_node);
  std::thread([&executor]() { executor.spin(); }).detach();

  static const std::string PLANNING_GROUP = "panda_arm";

  moveit::planning_interface::MoveGroupInterface move_group(move_group_node,
                                                            PLANNING_GROUP);

  const moveit::core::JointModelGroup *joint_model_group =
      move_group.getCurrentState()->getJointModelGroup(PLANNING_GROUP);

  RCLCPP_INFO(LOGGER, "Planning frame: %s",
              move_group.getPlanningFrame().c_str());

  RCLCPP_INFO(LOGGER, "End effector link: %s",
              move_group.getEndEffectorLink().c_str());

  RCLCPP_INFO(LOGGER, "Available Planning Groups:");
  std::copy(move_group.getJointModelGroupNames().begin(),
            move_group.getJointModelGroupNames().end(),
            std::ostream_iterator<std::string>(std::cout, ", "));

  geometry_msgs::msg::Pose target_pose1;
  tf2::Quaternion quaternion2 = quaternionFromEuler(3.142, 0, -0.70);
  target_pose1.orientation.x = quaternion2.x();
  target_pose1.orientation.y = quaternion2.y();
  target_pose1.orientation.z = quaternion2.z();
  target_pose1.orientation.w = quaternion2.w();
  target_pose1.position.x = 0.500;
  target_pose1.position.y = 0.000;
  target_pose1.position.z = 0.140;
  move_group.setPoseTarget(target_pose1);

  moveit::planning_interface::MoveGroupInterface::Plan my_plan;

  bool success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  move_group.execute(my_plan);
  
  tf2::Quaternion quaternion = quaternionFromEuler(3.142, 0, -0.70);
  target_pose1.orientation.x = quaternion.x();
  target_pose1.orientation.y = quaternion.y();
  target_pose1.orientation.z = quaternion.z();
  target_pose1.orientation.w = quaternion.w();
  target_pose1.position.x = 0.500;
  target_pose1.position.y = 0.000;
  target_pose1.position.z = 0.540;
  move_group.setPoseTarget(target_pose1);

  success =
      (move_group.plan(my_plan) == moveit::core::MoveItErrorCode::SUCCESS);

  move_group.execute(my_plan);
  

  
  rclcpp::shutdown();
  return 0;
}

