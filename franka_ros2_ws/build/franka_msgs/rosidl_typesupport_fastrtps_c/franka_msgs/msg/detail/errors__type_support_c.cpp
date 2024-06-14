// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/errors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/msg/detail/errors__struct.h"
#include "franka_msgs/msg/detail/errors__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Errors__ros_msg_type = franka_msgs__msg__Errors;

static bool _Errors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Errors__ros_msg_type * ros_message = static_cast<const _Errors__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_position_limits_violation
  {
    cdr << (ros_message->joint_position_limits_violation ? true : false);
  }

  // Field name: cartesian_position_limits_violation
  {
    cdr << (ros_message->cartesian_position_limits_violation ? true : false);
  }

  // Field name: self_collision_avoidance_violation
  {
    cdr << (ros_message->self_collision_avoidance_violation ? true : false);
  }

  // Field name: joint_velocity_violation
  {
    cdr << (ros_message->joint_velocity_violation ? true : false);
  }

  // Field name: cartesian_velocity_violation
  {
    cdr << (ros_message->cartesian_velocity_violation ? true : false);
  }

  // Field name: force_control_safety_violation
  {
    cdr << (ros_message->force_control_safety_violation ? true : false);
  }

  // Field name: joint_reflex
  {
    cdr << (ros_message->joint_reflex ? true : false);
  }

  // Field name: cartesian_reflex
  {
    cdr << (ros_message->cartesian_reflex ? true : false);
  }

  // Field name: max_goal_pose_deviation_violation
  {
    cdr << (ros_message->max_goal_pose_deviation_violation ? true : false);
  }

  // Field name: max_path_pose_deviation_violation
  {
    cdr << (ros_message->max_path_pose_deviation_violation ? true : false);
  }

  // Field name: cartesian_velocity_profile_safety_violation
  {
    cdr << (ros_message->cartesian_velocity_profile_safety_violation ? true : false);
  }

  // Field name: joint_position_motion_generator_start_pose_invalid
  {
    cdr << (ros_message->joint_position_motion_generator_start_pose_invalid ? true : false);
  }

  // Field name: joint_motion_generator_position_limits_violation
  {
    cdr << (ros_message->joint_motion_generator_position_limits_violation ? true : false);
  }

  // Field name: joint_motion_generator_velocity_limits_violation
  {
    cdr << (ros_message->joint_motion_generator_velocity_limits_violation ? true : false);
  }

  // Field name: joint_motion_generator_velocity_discontinuity
  {
    cdr << (ros_message->joint_motion_generator_velocity_discontinuity ? true : false);
  }

  // Field name: joint_motion_generator_acceleration_discontinuity
  {
    cdr << (ros_message->joint_motion_generator_acceleration_discontinuity ? true : false);
  }

  // Field name: cartesian_position_motion_generator_start_pose_invalid
  {
    cdr << (ros_message->cartesian_position_motion_generator_start_pose_invalid ? true : false);
  }

  // Field name: cartesian_motion_generator_elbow_limit_violation
  {
    cdr << (ros_message->cartesian_motion_generator_elbow_limit_violation ? true : false);
  }

  // Field name: cartesian_motion_generator_velocity_limits_violation
  {
    cdr << (ros_message->cartesian_motion_generator_velocity_limits_violation ? true : false);
  }

  // Field name: cartesian_motion_generator_velocity_discontinuity
  {
    cdr << (ros_message->cartesian_motion_generator_velocity_discontinuity ? true : false);
  }

  // Field name: cartesian_motion_generator_acceleration_discontinuity
  {
    cdr << (ros_message->cartesian_motion_generator_acceleration_discontinuity ? true : false);
  }

  // Field name: cartesian_motion_generator_elbow_sign_inconsistent
  {
    cdr << (ros_message->cartesian_motion_generator_elbow_sign_inconsistent ? true : false);
  }

  // Field name: cartesian_motion_generator_start_elbow_invalid
  {
    cdr << (ros_message->cartesian_motion_generator_start_elbow_invalid ? true : false);
  }

  // Field name: cartesian_motion_generator_joint_position_limits_violation
  {
    cdr << (ros_message->cartesian_motion_generator_joint_position_limits_violation ? true : false);
  }

  // Field name: cartesian_motion_generator_joint_velocity_limits_violation
  {
    cdr << (ros_message->cartesian_motion_generator_joint_velocity_limits_violation ? true : false);
  }

  // Field name: cartesian_motion_generator_joint_velocity_discontinuity
  {
    cdr << (ros_message->cartesian_motion_generator_joint_velocity_discontinuity ? true : false);
  }

  // Field name: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    cdr << (ros_message->cartesian_motion_generator_joint_acceleration_discontinuity ? true : false);
  }

  // Field name: cartesian_position_motion_generator_invalid_frame
  {
    cdr << (ros_message->cartesian_position_motion_generator_invalid_frame ? true : false);
  }

  // Field name: force_controller_desired_force_tolerance_violation
  {
    cdr << (ros_message->force_controller_desired_force_tolerance_violation ? true : false);
  }

  // Field name: controller_torque_discontinuity
  {
    cdr << (ros_message->controller_torque_discontinuity ? true : false);
  }

  // Field name: start_elbow_sign_inconsistent
  {
    cdr << (ros_message->start_elbow_sign_inconsistent ? true : false);
  }

  // Field name: communication_constraints_violation
  {
    cdr << (ros_message->communication_constraints_violation ? true : false);
  }

  // Field name: power_limit_violation
  {
    cdr << (ros_message->power_limit_violation ? true : false);
  }

  // Field name: joint_p2p_insufficient_torque_for_planning
  {
    cdr << (ros_message->joint_p2p_insufficient_torque_for_planning ? true : false);
  }

  // Field name: tau_j_range_violation
  {
    cdr << (ros_message->tau_j_range_violation ? true : false);
  }

  // Field name: instability_detected
  {
    cdr << (ros_message->instability_detected ? true : false);
  }

  return true;
}

static bool _Errors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Errors__ros_msg_type * ros_message = static_cast<_Errors__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_position_limits_violation = tmp ? true : false;
  }

  // Field name: cartesian_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_position_limits_violation = tmp ? true : false;
  }

  // Field name: self_collision_avoidance_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->self_collision_avoidance_violation = tmp ? true : false;
  }

  // Field name: joint_velocity_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_velocity_violation = tmp ? true : false;
  }

  // Field name: cartesian_velocity_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_velocity_violation = tmp ? true : false;
  }

  // Field name: force_control_safety_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force_control_safety_violation = tmp ? true : false;
  }

  // Field name: joint_reflex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_reflex = tmp ? true : false;
  }

  // Field name: cartesian_reflex
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_reflex = tmp ? true : false;
  }

  // Field name: max_goal_pose_deviation_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->max_goal_pose_deviation_violation = tmp ? true : false;
  }

  // Field name: max_path_pose_deviation_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->max_path_pose_deviation_violation = tmp ? true : false;
  }

  // Field name: cartesian_velocity_profile_safety_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_velocity_profile_safety_violation = tmp ? true : false;
  }

  // Field name: joint_position_motion_generator_start_pose_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_position_motion_generator_start_pose_invalid = tmp ? true : false;
  }

  // Field name: joint_motion_generator_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_motion_generator_position_limits_violation = tmp ? true : false;
  }

  // Field name: joint_motion_generator_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_motion_generator_velocity_limits_violation = tmp ? true : false;
  }

  // Field name: joint_motion_generator_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_motion_generator_velocity_discontinuity = tmp ? true : false;
  }

  // Field name: joint_motion_generator_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_motion_generator_acceleration_discontinuity = tmp ? true : false;
  }

  // Field name: cartesian_position_motion_generator_start_pose_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_position_motion_generator_start_pose_invalid = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_elbow_limit_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_elbow_limit_violation = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_velocity_limits_violation = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_velocity_discontinuity = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_acceleration_discontinuity = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_elbow_sign_inconsistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_elbow_sign_inconsistent = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_start_elbow_invalid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_start_elbow_invalid = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_joint_position_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_joint_position_limits_violation = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_joint_velocity_limits_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_joint_velocity_limits_violation = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_joint_velocity_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_joint_velocity_discontinuity = tmp ? true : false;
  }

  // Field name: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_motion_generator_joint_acceleration_discontinuity = tmp ? true : false;
  }

  // Field name: cartesian_position_motion_generator_invalid_frame
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cartesian_position_motion_generator_invalid_frame = tmp ? true : false;
  }

  // Field name: force_controller_desired_force_tolerance_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force_controller_desired_force_tolerance_violation = tmp ? true : false;
  }

  // Field name: controller_torque_discontinuity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->controller_torque_discontinuity = tmp ? true : false;
  }

  // Field name: start_elbow_sign_inconsistent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->start_elbow_sign_inconsistent = tmp ? true : false;
  }

  // Field name: communication_constraints_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->communication_constraints_violation = tmp ? true : false;
  }

  // Field name: power_limit_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_limit_violation = tmp ? true : false;
  }

  // Field name: joint_p2p_insufficient_torque_for_planning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->joint_p2p_insufficient_torque_for_planning = tmp ? true : false;
  }

  // Field name: tau_j_range_violation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tau_j_range_violation = tmp ? true : false;
  }

  // Field name: instability_detected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->instability_detected = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__msg__Errors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Errors__ros_msg_type * ros_message = static_cast<const _Errors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_position_limits_violation
  {
    size_t item_size = sizeof(ros_message->joint_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_position_limits_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name self_collision_avoidance_violation
  {
    size_t item_size = sizeof(ros_message->self_collision_avoidance_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_velocity_violation
  {
    size_t item_size = sizeof(ros_message->joint_velocity_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_velocity_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_velocity_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_control_safety_violation
  {
    size_t item_size = sizeof(ros_message->force_control_safety_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_reflex
  {
    size_t item_size = sizeof(ros_message->joint_reflex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_reflex
  {
    size_t item_size = sizeof(ros_message->cartesian_reflex);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_goal_pose_deviation_violation
  {
    size_t item_size = sizeof(ros_message->max_goal_pose_deviation_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_path_pose_deviation_violation
  {
    size_t item_size = sizeof(ros_message->max_path_pose_deviation_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_velocity_profile_safety_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_velocity_profile_safety_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_position_motion_generator_start_pose_invalid
  {
    size_t item_size = sizeof(ros_message->joint_position_motion_generator_start_pose_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_motion_generator_position_limits_violation
  {
    size_t item_size = sizeof(ros_message->joint_motion_generator_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_motion_generator_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message->joint_motion_generator_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_motion_generator_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message->joint_motion_generator_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_motion_generator_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message->joint_motion_generator_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_position_motion_generator_start_pose_invalid
  {
    size_t item_size = sizeof(ros_message->cartesian_position_motion_generator_start_pose_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_elbow_limit_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_elbow_limit_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_elbow_sign_inconsistent
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_elbow_sign_inconsistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_start_elbow_invalid
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_start_elbow_invalid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_joint_position_limits_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_joint_position_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_joint_velocity_limits_violation
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_joint_velocity_limits_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_joint_velocity_discontinuity
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_joint_velocity_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_motion_generator_joint_acceleration_discontinuity
  {
    size_t item_size = sizeof(ros_message->cartesian_motion_generator_joint_acceleration_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cartesian_position_motion_generator_invalid_frame
  {
    size_t item_size = sizeof(ros_message->cartesian_position_motion_generator_invalid_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_controller_desired_force_tolerance_violation
  {
    size_t item_size = sizeof(ros_message->force_controller_desired_force_tolerance_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name controller_torque_discontinuity
  {
    size_t item_size = sizeof(ros_message->controller_torque_discontinuity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_elbow_sign_inconsistent
  {
    size_t item_size = sizeof(ros_message->start_elbow_sign_inconsistent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name communication_constraints_violation
  {
    size_t item_size = sizeof(ros_message->communication_constraints_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_limit_violation
  {
    size_t item_size = sizeof(ros_message->power_limit_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_p2p_insufficient_torque_for_planning
  {
    size_t item_size = sizeof(ros_message->joint_p2p_insufficient_torque_for_planning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tau_j_range_violation
  {
    size_t item_size = sizeof(ros_message->tau_j_range_violation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name instability_detected
  {
    size_t item_size = sizeof(ros_message->instability_detected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Errors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__msg__Errors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__msg__Errors(
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

  // member: joint_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: self_collision_avoidance_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_velocity_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_velocity_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: force_control_safety_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_reflex
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_reflex
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_goal_pose_deviation_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_path_pose_deviation_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_velocity_profile_safety_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_position_motion_generator_start_pose_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_motion_generator_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_motion_generator_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_motion_generator_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_motion_generator_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_position_motion_generator_start_pose_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_elbow_limit_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_elbow_sign_inconsistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_start_elbow_invalid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_joint_position_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_joint_velocity_limits_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_joint_velocity_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_motion_generator_joint_acceleration_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cartesian_position_motion_generator_invalid_frame
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: force_controller_desired_force_tolerance_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: controller_torque_discontinuity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: start_elbow_sign_inconsistent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: communication_constraints_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_limit_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: joint_p2p_insufficient_torque_for_planning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tau_j_range_violation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: instability_detected
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
    using DataType = franka_msgs__msg__Errors;
    is_plain =
      (
      offsetof(DataType, instability_detected) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Errors__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_msgs__msg__Errors(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Errors = {
  "franka_msgs::msg",
  "Errors",
  _Errors__cdr_serialize,
  _Errors__cdr_deserialize,
  _Errors__get_serialized_size,
  _Errors__max_serialized_size
};

static rosidl_message_type_support_t _Errors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Errors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, Errors)() {
  return &_Errors__type_support;
}

#if defined(__cplusplus)
}
#endif
