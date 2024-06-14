// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ERRORS__BUILDER_HPP_
#define FRANKA_MSGS__MSG__DETAIL__ERRORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/msg/detail/errors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace msg
{

namespace builder
{

class Init_Errors_instability_detected
{
public:
  explicit Init_Errors_instability_detected(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  ::franka_msgs::msg::Errors instability_detected(::franka_msgs::msg::Errors::_instability_detected_type arg)
  {
    msg_.instability_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_tau_j_range_violation
{
public:
  explicit Init_Errors_tau_j_range_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_instability_detected tau_j_range_violation(::franka_msgs::msg::Errors::_tau_j_range_violation_type arg)
  {
    msg_.tau_j_range_violation = std::move(arg);
    return Init_Errors_instability_detected(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_p2p_insufficient_torque_for_planning
{
public:
  explicit Init_Errors_joint_p2p_insufficient_torque_for_planning(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_tau_j_range_violation joint_p2p_insufficient_torque_for_planning(::franka_msgs::msg::Errors::_joint_p2p_insufficient_torque_for_planning_type arg)
  {
    msg_.joint_p2p_insufficient_torque_for_planning = std::move(arg);
    return Init_Errors_tau_j_range_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_power_limit_violation
{
public:
  explicit Init_Errors_power_limit_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_p2p_insufficient_torque_for_planning power_limit_violation(::franka_msgs::msg::Errors::_power_limit_violation_type arg)
  {
    msg_.power_limit_violation = std::move(arg);
    return Init_Errors_joint_p2p_insufficient_torque_for_planning(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_communication_constraints_violation
{
public:
  explicit Init_Errors_communication_constraints_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_power_limit_violation communication_constraints_violation(::franka_msgs::msg::Errors::_communication_constraints_violation_type arg)
  {
    msg_.communication_constraints_violation = std::move(arg);
    return Init_Errors_power_limit_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_start_elbow_sign_inconsistent
{
public:
  explicit Init_Errors_start_elbow_sign_inconsistent(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_communication_constraints_violation start_elbow_sign_inconsistent(::franka_msgs::msg::Errors::_start_elbow_sign_inconsistent_type arg)
  {
    msg_.start_elbow_sign_inconsistent = std::move(arg);
    return Init_Errors_communication_constraints_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_controller_torque_discontinuity
{
public:
  explicit Init_Errors_controller_torque_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_start_elbow_sign_inconsistent controller_torque_discontinuity(::franka_msgs::msg::Errors::_controller_torque_discontinuity_type arg)
  {
    msg_.controller_torque_discontinuity = std::move(arg);
    return Init_Errors_start_elbow_sign_inconsistent(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_force_controller_desired_force_tolerance_violation
{
public:
  explicit Init_Errors_force_controller_desired_force_tolerance_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_controller_torque_discontinuity force_controller_desired_force_tolerance_violation(::franka_msgs::msg::Errors::_force_controller_desired_force_tolerance_violation_type arg)
  {
    msg_.force_controller_desired_force_tolerance_violation = std::move(arg);
    return Init_Errors_controller_torque_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_position_motion_generator_invalid_frame
{
public:
  explicit Init_Errors_cartesian_position_motion_generator_invalid_frame(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_force_controller_desired_force_tolerance_violation cartesian_position_motion_generator_invalid_frame(::franka_msgs::msg::Errors::_cartesian_position_motion_generator_invalid_frame_type arg)
  {
    msg_.cartesian_position_motion_generator_invalid_frame = std::move(arg);
    return Init_Errors_force_controller_desired_force_tolerance_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_joint_acceleration_discontinuity
{
public:
  explicit Init_Errors_cartesian_motion_generator_joint_acceleration_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_position_motion_generator_invalid_frame cartesian_motion_generator_joint_acceleration_discontinuity(::franka_msgs::msg::Errors::_cartesian_motion_generator_joint_acceleration_discontinuity_type arg)
  {
    msg_.cartesian_motion_generator_joint_acceleration_discontinuity = std::move(arg);
    return Init_Errors_cartesian_position_motion_generator_invalid_frame(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_joint_velocity_discontinuity
{
public:
  explicit Init_Errors_cartesian_motion_generator_joint_velocity_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_joint_acceleration_discontinuity cartesian_motion_generator_joint_velocity_discontinuity(::franka_msgs::msg::Errors::_cartesian_motion_generator_joint_velocity_discontinuity_type arg)
  {
    msg_.cartesian_motion_generator_joint_velocity_discontinuity = std::move(arg);
    return Init_Errors_cartesian_motion_generator_joint_acceleration_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_joint_velocity_limits_violation
{
public:
  explicit Init_Errors_cartesian_motion_generator_joint_velocity_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_joint_velocity_discontinuity cartesian_motion_generator_joint_velocity_limits_violation(::franka_msgs::msg::Errors::_cartesian_motion_generator_joint_velocity_limits_violation_type arg)
  {
    msg_.cartesian_motion_generator_joint_velocity_limits_violation = std::move(arg);
    return Init_Errors_cartesian_motion_generator_joint_velocity_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_joint_position_limits_violation
{
public:
  explicit Init_Errors_cartesian_motion_generator_joint_position_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_joint_velocity_limits_violation cartesian_motion_generator_joint_position_limits_violation(::franka_msgs::msg::Errors::_cartesian_motion_generator_joint_position_limits_violation_type arg)
  {
    msg_.cartesian_motion_generator_joint_position_limits_violation = std::move(arg);
    return Init_Errors_cartesian_motion_generator_joint_velocity_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_start_elbow_invalid
{
public:
  explicit Init_Errors_cartesian_motion_generator_start_elbow_invalid(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_joint_position_limits_violation cartesian_motion_generator_start_elbow_invalid(::franka_msgs::msg::Errors::_cartesian_motion_generator_start_elbow_invalid_type arg)
  {
    msg_.cartesian_motion_generator_start_elbow_invalid = std::move(arg);
    return Init_Errors_cartesian_motion_generator_joint_position_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_elbow_sign_inconsistent
{
public:
  explicit Init_Errors_cartesian_motion_generator_elbow_sign_inconsistent(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_start_elbow_invalid cartesian_motion_generator_elbow_sign_inconsistent(::franka_msgs::msg::Errors::_cartesian_motion_generator_elbow_sign_inconsistent_type arg)
  {
    msg_.cartesian_motion_generator_elbow_sign_inconsistent = std::move(arg);
    return Init_Errors_cartesian_motion_generator_start_elbow_invalid(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_acceleration_discontinuity
{
public:
  explicit Init_Errors_cartesian_motion_generator_acceleration_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_elbow_sign_inconsistent cartesian_motion_generator_acceleration_discontinuity(::franka_msgs::msg::Errors::_cartesian_motion_generator_acceleration_discontinuity_type arg)
  {
    msg_.cartesian_motion_generator_acceleration_discontinuity = std::move(arg);
    return Init_Errors_cartesian_motion_generator_elbow_sign_inconsistent(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_velocity_discontinuity
{
public:
  explicit Init_Errors_cartesian_motion_generator_velocity_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_acceleration_discontinuity cartesian_motion_generator_velocity_discontinuity(::franka_msgs::msg::Errors::_cartesian_motion_generator_velocity_discontinuity_type arg)
  {
    msg_.cartesian_motion_generator_velocity_discontinuity = std::move(arg);
    return Init_Errors_cartesian_motion_generator_acceleration_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_velocity_limits_violation
{
public:
  explicit Init_Errors_cartesian_motion_generator_velocity_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_velocity_discontinuity cartesian_motion_generator_velocity_limits_violation(::franka_msgs::msg::Errors::_cartesian_motion_generator_velocity_limits_violation_type arg)
  {
    msg_.cartesian_motion_generator_velocity_limits_violation = std::move(arg);
    return Init_Errors_cartesian_motion_generator_velocity_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_motion_generator_elbow_limit_violation
{
public:
  explicit Init_Errors_cartesian_motion_generator_elbow_limit_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_velocity_limits_violation cartesian_motion_generator_elbow_limit_violation(::franka_msgs::msg::Errors::_cartesian_motion_generator_elbow_limit_violation_type arg)
  {
    msg_.cartesian_motion_generator_elbow_limit_violation = std::move(arg);
    return Init_Errors_cartesian_motion_generator_velocity_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_position_motion_generator_start_pose_invalid
{
public:
  explicit Init_Errors_cartesian_position_motion_generator_start_pose_invalid(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_motion_generator_elbow_limit_violation cartesian_position_motion_generator_start_pose_invalid(::franka_msgs::msg::Errors::_cartesian_position_motion_generator_start_pose_invalid_type arg)
  {
    msg_.cartesian_position_motion_generator_start_pose_invalid = std::move(arg);
    return Init_Errors_cartesian_motion_generator_elbow_limit_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_motion_generator_acceleration_discontinuity
{
public:
  explicit Init_Errors_joint_motion_generator_acceleration_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_position_motion_generator_start_pose_invalid joint_motion_generator_acceleration_discontinuity(::franka_msgs::msg::Errors::_joint_motion_generator_acceleration_discontinuity_type arg)
  {
    msg_.joint_motion_generator_acceleration_discontinuity = std::move(arg);
    return Init_Errors_cartesian_position_motion_generator_start_pose_invalid(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_motion_generator_velocity_discontinuity
{
public:
  explicit Init_Errors_joint_motion_generator_velocity_discontinuity(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_motion_generator_acceleration_discontinuity joint_motion_generator_velocity_discontinuity(::franka_msgs::msg::Errors::_joint_motion_generator_velocity_discontinuity_type arg)
  {
    msg_.joint_motion_generator_velocity_discontinuity = std::move(arg);
    return Init_Errors_joint_motion_generator_acceleration_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_motion_generator_velocity_limits_violation
{
public:
  explicit Init_Errors_joint_motion_generator_velocity_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_motion_generator_velocity_discontinuity joint_motion_generator_velocity_limits_violation(::franka_msgs::msg::Errors::_joint_motion_generator_velocity_limits_violation_type arg)
  {
    msg_.joint_motion_generator_velocity_limits_violation = std::move(arg);
    return Init_Errors_joint_motion_generator_velocity_discontinuity(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_motion_generator_position_limits_violation
{
public:
  explicit Init_Errors_joint_motion_generator_position_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_motion_generator_velocity_limits_violation joint_motion_generator_position_limits_violation(::franka_msgs::msg::Errors::_joint_motion_generator_position_limits_violation_type arg)
  {
    msg_.joint_motion_generator_position_limits_violation = std::move(arg);
    return Init_Errors_joint_motion_generator_velocity_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_position_motion_generator_start_pose_invalid
{
public:
  explicit Init_Errors_joint_position_motion_generator_start_pose_invalid(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_motion_generator_position_limits_violation joint_position_motion_generator_start_pose_invalid(::franka_msgs::msg::Errors::_joint_position_motion_generator_start_pose_invalid_type arg)
  {
    msg_.joint_position_motion_generator_start_pose_invalid = std::move(arg);
    return Init_Errors_joint_motion_generator_position_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_velocity_profile_safety_violation
{
public:
  explicit Init_Errors_cartesian_velocity_profile_safety_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_position_motion_generator_start_pose_invalid cartesian_velocity_profile_safety_violation(::franka_msgs::msg::Errors::_cartesian_velocity_profile_safety_violation_type arg)
  {
    msg_.cartesian_velocity_profile_safety_violation = std::move(arg);
    return Init_Errors_joint_position_motion_generator_start_pose_invalid(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_max_path_pose_deviation_violation
{
public:
  explicit Init_Errors_max_path_pose_deviation_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_velocity_profile_safety_violation max_path_pose_deviation_violation(::franka_msgs::msg::Errors::_max_path_pose_deviation_violation_type arg)
  {
    msg_.max_path_pose_deviation_violation = std::move(arg);
    return Init_Errors_cartesian_velocity_profile_safety_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_max_goal_pose_deviation_violation
{
public:
  explicit Init_Errors_max_goal_pose_deviation_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_max_path_pose_deviation_violation max_goal_pose_deviation_violation(::franka_msgs::msg::Errors::_max_goal_pose_deviation_violation_type arg)
  {
    msg_.max_goal_pose_deviation_violation = std::move(arg);
    return Init_Errors_max_path_pose_deviation_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_reflex
{
public:
  explicit Init_Errors_cartesian_reflex(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_max_goal_pose_deviation_violation cartesian_reflex(::franka_msgs::msg::Errors::_cartesian_reflex_type arg)
  {
    msg_.cartesian_reflex = std::move(arg);
    return Init_Errors_max_goal_pose_deviation_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_reflex
{
public:
  explicit Init_Errors_joint_reflex(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_reflex joint_reflex(::franka_msgs::msg::Errors::_joint_reflex_type arg)
  {
    msg_.joint_reflex = std::move(arg);
    return Init_Errors_cartesian_reflex(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_force_control_safety_violation
{
public:
  explicit Init_Errors_force_control_safety_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_reflex force_control_safety_violation(::franka_msgs::msg::Errors::_force_control_safety_violation_type arg)
  {
    msg_.force_control_safety_violation = std::move(arg);
    return Init_Errors_joint_reflex(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_velocity_violation
{
public:
  explicit Init_Errors_cartesian_velocity_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_force_control_safety_violation cartesian_velocity_violation(::franka_msgs::msg::Errors::_cartesian_velocity_violation_type arg)
  {
    msg_.cartesian_velocity_violation = std::move(arg);
    return Init_Errors_force_control_safety_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_velocity_violation
{
public:
  explicit Init_Errors_joint_velocity_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_cartesian_velocity_violation joint_velocity_violation(::franka_msgs::msg::Errors::_joint_velocity_violation_type arg)
  {
    msg_.joint_velocity_violation = std::move(arg);
    return Init_Errors_cartesian_velocity_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_self_collision_avoidance_violation
{
public:
  explicit Init_Errors_self_collision_avoidance_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_joint_velocity_violation self_collision_avoidance_violation(::franka_msgs::msg::Errors::_self_collision_avoidance_violation_type arg)
  {
    msg_.self_collision_avoidance_violation = std::move(arg);
    return Init_Errors_joint_velocity_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_cartesian_position_limits_violation
{
public:
  explicit Init_Errors_cartesian_position_limits_violation(::franka_msgs::msg::Errors & msg)
  : msg_(msg)
  {}
  Init_Errors_self_collision_avoidance_violation cartesian_position_limits_violation(::franka_msgs::msg::Errors::_cartesian_position_limits_violation_type arg)
  {
    msg_.cartesian_position_limits_violation = std::move(arg);
    return Init_Errors_self_collision_avoidance_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

class Init_Errors_joint_position_limits_violation
{
public:
  Init_Errors_joint_position_limits_violation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Errors_cartesian_position_limits_violation joint_position_limits_violation(::franka_msgs::msg::Errors::_joint_position_limits_violation_type arg)
  {
    msg_.joint_position_limits_violation = std::move(arg);
    return Init_Errors_cartesian_position_limits_violation(msg_);
  }

private:
  ::franka_msgs::msg::Errors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::msg::Errors>()
{
  return franka_msgs::msg::builder::Init_Errors_joint_position_limits_violation();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__MSG__DETAIL__ERRORS__BUILDER_HPP_
