// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "franka_msgs/msg/detail/errors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace franka_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Errors & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_position_limits_violation
  {
    out << "joint_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_limits_violation, out);
    out << ", ";
  }

  // member: cartesian_position_limits_violation
  {
    out << "cartesian_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_limits_violation, out);
    out << ", ";
  }

  // member: self_collision_avoidance_violation
  {
    out << "self_collision_avoidance_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.self_collision_avoidance_violation, out);
    out << ", ";
  }

  // member: joint_velocity_violation
  {
    out << "joint_velocity_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity_violation, out);
    out << ", ";
  }

  // member: cartesian_velocity_violation
  {
    out << "cartesian_velocity_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_velocity_violation, out);
    out << ", ";
  }

  // member: force_control_safety_violation
  {
    out << "force_control_safety_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.force_control_safety_violation, out);
    out << ", ";
  }

  // member: joint_reflex
  {
    out << "joint_reflex: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_reflex, out);
    out << ", ";
  }

  // member: cartesian_reflex
  {
    out << "cartesian_reflex: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_reflex, out);
    out << ", ";
  }

  // member: max_goal_pose_deviation_violation
  {
    out << "max_goal_pose_deviation_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_goal_pose_deviation_violation, out);
    out << ", ";
  }

  // member: max_path_pose_deviation_violation
  {
    out << "max_path_pose_deviation_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_path_pose_deviation_violation, out);
    out << ", ";
  }

  // member: cartesian_velocity_profile_safety_violation
  {
    out << "cartesian_velocity_profile_safety_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_velocity_profile_safety_violation, out);
    out << ", ";
  }

  // member: joint_position_motion_generator_start_pose_invalid
  {
    out << "joint_position_motion_generator_start_pose_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_motion_generator_start_pose_invalid, out);
    out << ", ";
  }

  // member: joint_motion_generator_position_limits_violation
  {
    out << "joint_motion_generator_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_position_limits_violation, out);
    out << ", ";
  }

  // member: joint_motion_generator_velocity_limits_violation
  {
    out << "joint_motion_generator_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_velocity_limits_violation, out);
    out << ", ";
  }

  // member: joint_motion_generator_velocity_discontinuity
  {
    out << "joint_motion_generator_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_velocity_discontinuity, out);
    out << ", ";
  }

  // member: joint_motion_generator_acceleration_discontinuity
  {
    out << "joint_motion_generator_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_acceleration_discontinuity, out);
    out << ", ";
  }

  // member: cartesian_position_motion_generator_start_pose_invalid
  {
    out << "cartesian_position_motion_generator_start_pose_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_motion_generator_start_pose_invalid, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_elbow_limit_violation
  {
    out << "cartesian_motion_generator_elbow_limit_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_elbow_limit_violation, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_velocity_limits_violation
  {
    out << "cartesian_motion_generator_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_velocity_limits_violation, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_velocity_discontinuity
  {
    out << "cartesian_motion_generator_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_velocity_discontinuity, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_acceleration_discontinuity
  {
    out << "cartesian_motion_generator_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_acceleration_discontinuity, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    out << "cartesian_motion_generator_elbow_sign_inconsistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_elbow_sign_inconsistent, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_start_elbow_invalid
  {
    out << "cartesian_motion_generator_start_elbow_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_start_elbow_invalid, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_joint_position_limits_violation
  {
    out << "cartesian_motion_generator_joint_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_position_limits_violation, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    out << "cartesian_motion_generator_joint_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_velocity_limits_violation, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    out << "cartesian_motion_generator_joint_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_velocity_discontinuity, out);
    out << ", ";
  }

  // member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    out << "cartesian_motion_generator_joint_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_acceleration_discontinuity, out);
    out << ", ";
  }

  // member: cartesian_position_motion_generator_invalid_frame
  {
    out << "cartesian_position_motion_generator_invalid_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_motion_generator_invalid_frame, out);
    out << ", ";
  }

  // member: force_controller_desired_force_tolerance_violation
  {
    out << "force_controller_desired_force_tolerance_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.force_controller_desired_force_tolerance_violation, out);
    out << ", ";
  }

  // member: controller_torque_discontinuity
  {
    out << "controller_torque_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_torque_discontinuity, out);
    out << ", ";
  }

  // member: start_elbow_sign_inconsistent
  {
    out << "start_elbow_sign_inconsistent: ";
    rosidl_generator_traits::value_to_yaml(msg.start_elbow_sign_inconsistent, out);
    out << ", ";
  }

  // member: communication_constraints_violation
  {
    out << "communication_constraints_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_constraints_violation, out);
    out << ", ";
  }

  // member: power_limit_violation
  {
    out << "power_limit_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.power_limit_violation, out);
    out << ", ";
  }

  // member: joint_p2p_insufficient_torque_for_planning
  {
    out << "joint_p2p_insufficient_torque_for_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_p2p_insufficient_torque_for_planning, out);
    out << ", ";
  }

  // member: tau_j_range_violation
  {
    out << "tau_j_range_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_j_range_violation, out);
    out << ", ";
  }

  // member: instability_detected
  {
    out << "instability_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.instability_detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Errors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_position_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_limits_violation, out);
    out << "\n";
  }

  // member: cartesian_position_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_limits_violation, out);
    out << "\n";
  }

  // member: self_collision_avoidance_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "self_collision_avoidance_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.self_collision_avoidance_violation, out);
    out << "\n";
  }

  // member: joint_velocity_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_velocity_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_velocity_violation, out);
    out << "\n";
  }

  // member: cartesian_velocity_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_velocity_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_velocity_violation, out);
    out << "\n";
  }

  // member: force_control_safety_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_control_safety_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.force_control_safety_violation, out);
    out << "\n";
  }

  // member: joint_reflex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_reflex: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_reflex, out);
    out << "\n";
  }

  // member: cartesian_reflex
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_reflex: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_reflex, out);
    out << "\n";
  }

  // member: max_goal_pose_deviation_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_goal_pose_deviation_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_goal_pose_deviation_violation, out);
    out << "\n";
  }

  // member: max_path_pose_deviation_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_path_pose_deviation_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.max_path_pose_deviation_violation, out);
    out << "\n";
  }

  // member: cartesian_velocity_profile_safety_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_velocity_profile_safety_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_velocity_profile_safety_violation, out);
    out << "\n";
  }

  // member: joint_position_motion_generator_start_pose_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position_motion_generator_start_pose_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position_motion_generator_start_pose_invalid, out);
    out << "\n";
  }

  // member: joint_motion_generator_position_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_motion_generator_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_position_limits_violation, out);
    out << "\n";
  }

  // member: joint_motion_generator_velocity_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_motion_generator_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_velocity_limits_violation, out);
    out << "\n";
  }

  // member: joint_motion_generator_velocity_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_motion_generator_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_velocity_discontinuity, out);
    out << "\n";
  }

  // member: joint_motion_generator_acceleration_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_motion_generator_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_motion_generator_acceleration_discontinuity, out);
    out << "\n";
  }

  // member: cartesian_position_motion_generator_start_pose_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_position_motion_generator_start_pose_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_motion_generator_start_pose_invalid, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_elbow_limit_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_elbow_limit_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_elbow_limit_violation, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_velocity_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_velocity_limits_violation, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_velocity_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_velocity_discontinuity, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_acceleration_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_acceleration_discontinuity, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_elbow_sign_inconsistent: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_elbow_sign_inconsistent, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_start_elbow_invalid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_start_elbow_invalid: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_start_elbow_invalid, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_joint_position_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_joint_position_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_position_limits_violation, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_joint_velocity_limits_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_velocity_limits_violation, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_joint_velocity_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_velocity_discontinuity, out);
    out << "\n";
  }

  // member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_motion_generator_joint_acceleration_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_motion_generator_joint_acceleration_discontinuity, out);
    out << "\n";
  }

  // member: cartesian_position_motion_generator_invalid_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cartesian_position_motion_generator_invalid_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.cartesian_position_motion_generator_invalid_frame, out);
    out << "\n";
  }

  // member: force_controller_desired_force_tolerance_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_controller_desired_force_tolerance_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.force_controller_desired_force_tolerance_violation, out);
    out << "\n";
  }

  // member: controller_torque_discontinuity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "controller_torque_discontinuity: ";
    rosidl_generator_traits::value_to_yaml(msg.controller_torque_discontinuity, out);
    out << "\n";
  }

  // member: start_elbow_sign_inconsistent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_elbow_sign_inconsistent: ";
    rosidl_generator_traits::value_to_yaml(msg.start_elbow_sign_inconsistent, out);
    out << "\n";
  }

  // member: communication_constraints_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_constraints_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_constraints_violation, out);
    out << "\n";
  }

  // member: power_limit_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_limit_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.power_limit_violation, out);
    out << "\n";
  }

  // member: joint_p2p_insufficient_torque_for_planning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_p2p_insufficient_torque_for_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_p2p_insufficient_torque_for_planning, out);
    out << "\n";
  }

  // member: tau_j_range_violation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tau_j_range_violation: ";
    rosidl_generator_traits::value_to_yaml(msg.tau_j_range_violation, out);
    out << "\n";
  }

  // member: instability_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instability_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.instability_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Errors & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace franka_msgs

namespace rosidl_generator_traits
{

[[deprecated("use franka_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const franka_msgs::msg::Errors & msg,
  std::ostream & out, size_t indentation = 0)
{
  franka_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use franka_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const franka_msgs::msg::Errors & msg)
{
  return franka_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<franka_msgs::msg::Errors>()
{
  return "franka_msgs::msg::Errors";
}

template<>
inline const char * name<franka_msgs::msg::Errors>()
{
  return "franka_msgs/msg/Errors";
}

template<>
struct has_fixed_size<franka_msgs::msg::Errors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<franka_msgs::msg::Errors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<franka_msgs::msg::Errors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FRANKA_MSGS__MSG__DETAIL__ERRORS__TRAITS_HPP_
