// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/WorkspaceParameters in the package moveit_msgs.
/**
  * This message contains a set of parameters useful in
  * setting up the volume (a box) in which the robot is allowed to move.
  * This is useful only when planning for mobile parts of 
  * the robot as well.
 */
typedef struct moveit_msgs__msg__WorkspaceParameters
{
  /// Define the frame of reference for the box corners
  std_msgs__msg__Header header;
  /// The minumum corner of the box, with respect to the robot starting pose
  geometry_msgs__msg__Vector3 min_corner;
  /// The maximum corner of the box, with respect to the robot starting pose
  geometry_msgs__msg__Vector3 max_corner;
} moveit_msgs__msg__WorkspaceParameters;

// Struct for a sequence of moveit_msgs__msg__WorkspaceParameters.
typedef struct moveit_msgs__msg__WorkspaceParameters__Sequence
{
  moveit_msgs__msg__WorkspaceParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__WorkspaceParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__WORKSPACE_PARAMETERS__STRUCT_H_
