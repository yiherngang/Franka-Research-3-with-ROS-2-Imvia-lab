// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_H_

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
// Member 'fk_link_names'
#include "rosidl_runtime_c/string.h"
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"

/// Struct defined in srv/GetPositionFK in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetPositionFK_Request
{
  std_msgs__msg__Header header;
  /// A vector of link name for which forward kinematics must be computed
  rosidl_runtime_c__String__Sequence fk_link_names;
  /// A robot state consisting of joint names and joint positions to be used for forward kinematics
  moveit_msgs__msg__RobotState robot_state;
} moveit_msgs__srv__GetPositionFK_Request;

// Struct for a sequence of moveit_msgs__srv__GetPositionFK_Request.
typedef struct moveit_msgs__srv__GetPositionFK_Request__Sequence
{
  moveit_msgs__srv__GetPositionFK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetPositionFK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose_stamped'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'fk_link_names'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in srv/GetPositionFK in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetPositionFK_Response
{
  geometry_msgs__msg__PoseStamped__Sequence pose_stamped;
  /// The list of link names corresponding to the poses
  rosidl_runtime_c__String__Sequence fk_link_names;
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__GetPositionFK_Response;

// Struct for a sequence of moveit_msgs__srv__GetPositionFK_Response.
typedef struct moveit_msgs__srv__GetPositionFK_Response__Sequence
{
  moveit_msgs__srv__GetPositionFK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetPositionFK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_FK__STRUCT_H_
