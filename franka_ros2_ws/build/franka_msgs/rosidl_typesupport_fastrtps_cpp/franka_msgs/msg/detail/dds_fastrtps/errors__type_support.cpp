// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/errors__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_msgs/msg/detail/errors__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace franka_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::msg::Errors & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_position_limits_violation
  cdr << (ros_message.joint_position_limits_violation ? true : false);
  // Member: cartesian_position_limits_violation
  cdr << (ros_message.cartesian_position_limits_violation ? true : false);
  // Member: self_collision_avoidance_violation
  cdr << (ros_message.self_collision_avoidance_violation ? true : false);
  // Member: joint_velocity_violation
  cdr << (ros_message.joint_velocity_violation ? true : false);
  // Member: cartesian_velocity_violation
  cdr << (ros_message.cartesian_velocity_violation ? true : false);
  // Member: force_control_safety_violation
  cdr << (ros_message.force_control_safety_violation ? true : false);
  // Member: joint_reflex
  cdr << (ros_message.joint_reflex ? true : false);
  // Member: cartesian_reflex
  cdr << (ros_message.cartesian_reflex ? true : false);
  // Member: max_goal_pose_deviation_violation
  cdr << (ros_message.max_goal_pose_deviation_violation ? true : false);
  // Member: max_path_pose_deviation_violation
  cdr << (ros_message.max_path_pose_deviation_violation ? true : false);
  // Member: cartesian_velocity_profile_safety_violation
  cdr << (ros_message.cartesian_velocity_profile_safety_violation ? true : false);
  // Member: joint_position_motion_generator_start_pose_invalid
  cdr << (ros_message.joint_position_motion_generator_start_pose_invalid ? true : false);
  // Member: joint_motion_generator_position_limits_violation
  cdr << (ros_message.joint_motion_generator_position_limits_violation ? true : false);
  // Member: joint_motion_generator_velocity_limits_violation
  cdr << (ros_message.joint_motion_generator_velocity_limits_violation ? true : false);
  // Member: joint_motion_generator_velocity_discontinuity
  cdr << (ros_message.joint_motion_generator_velocity_discontinuity ? true : false);
  // Member: joint_motion_generator_acceleration_discontinuity
  cdr << (ros_message.joint_motion_generator_acceleration_discontinuity ? true : false);
  // Member: cartesian_position_motion_generator_start_pose_invalid
  cdr << (ros_message.cartesian_position_motion_generator_start_pose_invalid ? true : false);
  // Member: cartesian_motion_generator_elbow_limit_violation
  cdr << (ros_message.cartesian_motion_generator_elbow_limit_violation ? true : false);
  // Member: cartesian_motion_generator_velocity_limits_violation
  cdr << (ros_message.cartesian_motion_generator_velocity_limits_violation ? true : false);
  // Member: cartesian_motion_generator_velocity_discontinuity
  cdr << (ros_message.cartesian_motion_generator_velocity_discontinuity ? true : false);
  // Member: cartesian_motion_generator_acceleration_discontinuity
  cdr << (ros_message.cartesian_motion_generator_acceleration_discontinuity ? true : false);
  // Member: cartesian_motion_generator_elbow_sign_inconsistent
  cdr << (ros_message.cartesian_motion_generator_elbow_sign_inconsistent ? true : false);
  // Member: cartesian_motion_generator_start_elbow_invalid
  cdr << (ros_message.cartesian_motion_generator_start_elbow_invalid ? true : false);
  // Member: cartesian_motion_generator_joint_position_limits_violation
  cdr << (ros_message.cartesian_motion_generator_joint_position_limits_violation ? true : false);
  // Member: cartesian_motion_generator_joint_velocity_limits_violation
  cdr << (ros_message.cartesian_motion_generator_joint_velocity_limits_violation ? true : false);
  // Member: cartesian_motion_generator_joint_velocity_discontinuity
  cdr << (ros_message.cartesian_motion_generator_joint_velocity_discontinuity ? true : false);
  // Member: cartesian_motion_generator_joint_acceleration_discontinuity
  cdr << (ros_message.cartesian_motion_generator_joint_acceleration_discontinuity ? true : false);
  // Member: cartesian_position_motion_generator_invalid_frame
  cdr << (ros_message.cartesian_position_motion_generator_invalid_frame ? true : false);
  // Member: force_controller_desired_force_tolerance_violation
  cdr << (ros_message.force_controller_desired_force_tolerance_violation ? true : false);
  // Member: controller_torque_discontinuity
  cdr << (ros_message.controller_torque_discontinuity ? true : false);
  // Member: start_elbow_sign_inconsistent
  cdr << (ros_message.start_elbow_sign_inconsistent ? true : false);
  // Member: communication_constraints_violation
  cdr << (ros_message.communication_constraints_violation ? true : false);
  // Member: power_limit_violation
  cdr << (ros_message.power_limit_violation ? true : false);
  // Member: joint_p2p_insufficient_torque_for_planning
  cdr << (ros_message.joint_p2p_insufficient_torque_for_planning ? true : false);
  // Member: tau_j_range_violation
  cdr << (ros_message.tau_j_range_violation ? true : false);
  // Member: instability_detected
  cdr << (ros_message.instability_detected ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::msg::Errors & ros_message)
{
  // Member: joint_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_position_limits_violation = tmp ? true : false;
  }

  // Member: cartesian_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_position_limits_violation = tmp ? true : false;
  }

  // Member: self_collision_avoidance_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.self_collision_avoidance_violation = tmp ? true : false;
  }

  // Member: joint_velocity_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_velocity_violation = tmp ? true : false;
  }

  // Member: cartesian_velocity_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_velocity_violation = tmp ? true : false;
  }

  // Member: force_control_safety_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.force_control_safety_violation = tmp ? true : false;
  }

  // Member: joint_reflex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_reflex = tmp ? true : false;
  }

  // Member: cartesian_reflex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_reflex = tmp ? true : false;
  }

  // Member: max_goal_pose_deviation_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.max_goal_pose_deviation_violation = tmp ? true : false;
  }

  // Member: max_path_pose_deviation_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.max_path_pose_deviation_violation = tmp ? true : false;
  }

  // Member: cartesian_velocity_profile_safety_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_velocity_profile_safety_violation = tmp ? true : false;
  }

  // Member: joint_position_motion_generator_start_pose_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_position_motion_generator_start_pose_invalid = tmp ? true : false;
  }

  // Member: joint_motion_generator_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_motion_generator_position_limits_violation = tmp ? true : false;
  }

  // Member: joint_motion_generator_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_motion_generator_velocity_limits_violation = tmp ? true : false;
  }

  // Member: joint_motion_generator_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_motion_generator_velocity_discontinuity = tmp ? true : false;
  }

  // Member: joint_motion_generator_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_motion_generator_acceleration_discontinuity = tmp ? true : false;
  }

  // Member: cartesian_position_motion_generator_start_pose_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_position_motion_generator_start_pose_invalid = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_elbow_limit_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_elbow_limit_violation = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_velocity_limits_violation = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_velocity_discontinuity = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_acceleration_discontinuity = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_elbow_sign_inconsistent = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_start_elbow_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_start_elbow_invalid = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_joint_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_joint_position_limits_violation = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_joint_velocity_limits_violation = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_joint_velocity_discontinuity = tmp ? true : false;
  }

  // Member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_motion_generator_joint_acceleration_discontinuity = tmp ? true : false;
  }

  // Member: cartesian_position_motion_generator_invalid_frame
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.cartesian_position_motion_generator_invalid_frame = tmp ? true : false;
  }

  // Member: force_controller_desired_force_tolerance_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.force_controller_desired_force_tolerance_violation = tmp ? true : false;
  }

  // Member: controller_torque_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.controller_torque_discontinuity = tmp ? true : false;
  }

  // Member: start_elbow_sign_inconsistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.start_elbow_sign_inconsistent = tmp ? true : false;
  }

  // Member: communication_constraints_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.communication_constraints_violation = tmp ? true : false;
  }

  // Member: power_limit_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_limit_violation = tmp ? true : false;
  }

  // Member: joint_p2p_insufficient_torque_for_planning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.joint_p2p_insufficient_torque_for_planning = tmp ? true : false;
  }

  // Member: tau_j_range_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tau_j_range_violation = tmp ? true : false;
  }

  // Member: instability_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.instability_detected = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::msg::Errors & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_position_limits_violation
  {
    size_t item_size = sizeof(ros_message.joint_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_position_limits_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: self_collision_avoidance_violation
  {
    size_t item_size = sizeof(ros_message.self_collision_avoidance_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_velocity_violation
  {
    size_t item_size = sizeof(ros_message.joint_velocity_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_velocity_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_velocity_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_control_safety_violation
  {
    size_t item_size = sizeof(ros_message.force_control_safety_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_reflex
  {
    size_t item_size = sizeof(ros_message.joint_reflex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_reflex
  {
    size_t item_size = sizeof(ros_message.cartesian_reflex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_goal_pose_deviation_violation
  {
    size_t item_size = sizeof(ros_message.max_goal_pose_deviation_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_path_pose_deviation_violation
  {
    size_t item_size = sizeof(ros_message.max_path_pose_deviation_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_velocity_profile_safety_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_velocity_profile_safety_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_position_motion_generator_start_pose_invalid
  {
    size_t item_size = sizeof(ros_message.joint_position_motion_generator_start_pose_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_motion_generator_position_limits_violation
  {
    size_t item_size = sizeof(ros_message.joint_motion_generator_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_motion_generator_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message.joint_motion_generator_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_motion_generator_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message.joint_motion_generator_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_motion_generator_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message.joint_motion_generator_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_position_motion_generator_start_pose_invalid
  {
    size_t item_size = sizeof(ros_message.cartesian_position_motion_generator_start_pose_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_elbow_limit_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_elbow_limit_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_elbow_sign_inconsistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_start_elbow_invalid
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_start_elbow_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_joint_position_limits_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_joint_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_joint_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_joint_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message.cartesian_motion_generator_joint_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cartesian_position_motion_generator_invalid_frame
  {
    size_t item_size = sizeof(ros_message.cartesian_position_motion_generator_invalid_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: force_controller_desired_force_tolerance_violation
  {
    size_t item_size = sizeof(ros_message.force_controller_desired_force_tolerance_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: controller_torque_discontinuity
  {
    size_t item_size = sizeof(ros_message.controller_torque_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_elbow_sign_inconsistent
  {
    size_t item_size = sizeof(ros_message.start_elbow_sign_inconsistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: communication_constraints_violation
  {
    size_t item_size = sizeof(ros_message.communication_constraints_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_limit_violation
  {
    size_t item_size = sizeof(ros_message.power_limit_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_p2p_insufficient_torque_for_planning
  {
    size_t item_size = sizeof(ros_message.joint_p2p_insufficient_torque_for_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_j_range_violation
  {
    size_t item_size = sizeof(ros_message.tau_j_range_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: instability_detected
  {
    size_t item_size = sizeof(ros_message.instability_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_Errors(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: self_collision_avoidance_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_velocity_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_velocity_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: force_control_safety_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_reflex
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_reflex
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_goal_pose_deviation_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_path_pose_deviation_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_velocity_profile_safety_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_position_motion_generator_start_pose_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_motion_generator_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_motion_generator_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_motion_generator_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_motion_generator_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_position_motion_generator_start_pose_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_elbow_limit_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_start_elbow_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_joint_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cartesian_position_motion_generator_invalid_frame
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: force_controller_desired_force_tolerance_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: controller_torque_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: start_elbow_sign_inconsistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: communication_constraints_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_limit_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: joint_p2p_insufficient_torque_for_planning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tau_j_range_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: instability_detected
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs::msg::Errors;
    is_plain =
      (
      offsetof(DataType, instability_detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Errors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::Errors *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Errors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::msg::Errors *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Errors__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::Errors *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Errors__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Errors(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Errors__callbacks = {
  "franka_msgs::msg",
  "Errors",
  _Errors__cdr_serialize,
  _Errors__cdr_deserialize,
  _Errors__get_serialized_size,
  _Errors__max_serialized_size
};

static rosidl_message_type_support_t _Errors__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Errors__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::msg::Errors>()
{
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_Errors__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, msg, Errors)() {
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_Errors__handle;
}

#ifdef __cplusplus
}
#endif
