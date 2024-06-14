// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/detail/multi_dof_joint_state__struct.h"
// Member 'attached_collision_objects'
#include "moveit_msgs/msg/detail/attached_collision_object__struct.h"

/// Struct defined in msg/RobotState in the package moveit_msgs.
/**
  * This message contains information about the robot state, i.e. the positions of its joints and links
 */
typedef struct moveit_msgs__msg__RobotState
{
  sensor_msgs__msg__JointState joint_state;
  /// Joints that may have multiple DOF are specified here
  sensor_msgs__msg__MultiDOFJointState multi_dof_joint_state;
  /// Attached collision objects (attached to some link on the robot)
  moveit_msgs__msg__AttachedCollisionObject__Sequence attached_collision_objects;
  /// Flag indicating whether this scene is to be interpreted as a diff with respect to some other scene
  /// This is mostly important for handling the attached bodies (whether or not to clear the attached bodies
  /// of a moveit::core::RobotState before updating it with this message)
  bool is_diff;
} moveit_msgs__msg__RobotState;

// Struct for a sequence of moveit_msgs__msg__RobotState.
typedef struct moveit_msgs__msg__RobotState__Sequence
{
  moveit_msgs__msg__RobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__RobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__ROBOT_STATE__STRUCT_H_
