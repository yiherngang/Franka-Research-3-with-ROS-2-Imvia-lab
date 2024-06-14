// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_H_
#define FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Errors in the package franka_msgs.
typedef struct franka_msgs__msg__Errors
{
  bool joint_position_limits_violation;
  bool cartesian_position_limits_violation;
  bool self_collision_avoidance_violation;
  bool joint_velocity_violation;
  bool cartesian_velocity_violation;
  bool force_control_safety_violation;
  bool joint_reflex;
  bool cartesian_reflex;
  bool max_goal_pose_deviation_violation;
  bool max_path_pose_deviation_violation;
  bool cartesian_velocity_profile_safety_violation;
  bool joint_position_motion_generator_start_pose_invalid;
  bool joint_motion_generator_position_limits_violation;
  bool joint_motion_generator_velocity_limits_violation;
  bool joint_motion_generator_velocity_discontinuity;
  bool joint_motion_generator_acceleration_discontinuity;
  bool cartesian_position_motion_generator_start_pose_invalid;
  bool cartesian_motion_generator_elbow_limit_violation;
  bool cartesian_motion_generator_velocity_limits_violation;
  bool cartesian_motion_generator_velocity_discontinuity;
  bool cartesian_motion_generator_acceleration_discontinuity;
  bool cartesian_motion_generator_elbow_sign_inconsistent;
  bool cartesian_motion_generator_start_elbow_invalid;
  bool cartesian_motion_generator_joint_position_limits_violation;
  bool cartesian_motion_generator_joint_velocity_limits_violation;
  bool cartesian_motion_generator_joint_velocity_discontinuity;
  bool cartesian_motion_generator_joint_acceleration_discontinuity;
  bool cartesian_position_motion_generator_invalid_frame;
  bool force_controller_desired_force_tolerance_violation;
  bool controller_torque_discontinuity;
  bool start_elbow_sign_inconsistent;
  bool communication_constraints_violation;
  bool power_limit_violation;
  bool joint_p2p_insufficient_torque_for_planning;
  bool tau_j_range_violation;
  bool instability_detected;
} franka_msgs__msg__Errors;

// Struct for a sequence of franka_msgs__msg__Errors.
typedef struct franka_msgs__msg__Errors__Sequence
{
  franka_msgs__msg__Errors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} franka_msgs__msg__Errors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FRANKA_MSGS__MSG__DETAIL__ERRORS__STRUCT_H_
