// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'robot'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetRobotStateFromWarehouse in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetRobotStateFromWarehouse_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String robot;
} moveit_msgs__srv__GetRobotStateFromWarehouse_Request;

// Struct for a sequence of moveit_msgs__srv__GetRobotStateFromWarehouse_Request.
typedef struct moveit_msgs__srv__GetRobotStateFromWarehouse_Request__Sequence
{
  moveit_msgs__srv__GetRobotStateFromWarehouse_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetRobotStateFromWarehouse_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"

/// Struct defined in srv/GetRobotStateFromWarehouse in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetRobotStateFromWarehouse_Response
{
  moveit_msgs__msg__RobotState state;
} moveit_msgs__srv__GetRobotStateFromWarehouse_Response;

// Struct for a sequence of moveit_msgs__srv__GetRobotStateFromWarehouse_Response.
typedef struct moveit_msgs__srv__GetRobotStateFromWarehouse_Response__Sequence
{
  moveit_msgs__srv__GetRobotStateFromWarehouse_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetRobotStateFromWarehouse_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_ROBOT_STATE_FROM_WAREHOUSE__STRUCT_H_
