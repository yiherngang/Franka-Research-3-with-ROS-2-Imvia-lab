// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'old_name'
// Member 'new_name'
// Member 'robot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RenameRobotStateInWarehouse in the package moveit_msgs.
typedef struct moveit_msgs__srv__RenameRobotStateInWarehouse_Request
{
  rosidl_runtime_c__String old_name;
  rosidl_runtime_c__String new_name;
  rosidl_runtime_c__String robot;
} moveit_msgs__srv__RenameRobotStateInWarehouse_Request;

// Struct for a sequence of moveit_msgs__srv__RenameRobotStateInWarehouse_Request.
typedef struct moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__RenameRobotStateInWarehouse_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RenameRobotStateInWarehouse in the package moveit_msgs.
typedef struct moveit_msgs__srv__RenameRobotStateInWarehouse_Response
{
  uint8_t structure_needs_at_least_one_member;
} moveit_msgs__srv__RenameRobotStateInWarehouse_Response;

// Struct for a sequence of moveit_msgs__srv__RenameRobotStateInWarehouse_Response.
typedef struct moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence
{
  moveit_msgs__srv__RenameRobotStateInWarehouse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__RenameRobotStateInWarehouse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__RENAME_ROBOT_STATE_IN_WAREHOUSE__STRUCT_H_
