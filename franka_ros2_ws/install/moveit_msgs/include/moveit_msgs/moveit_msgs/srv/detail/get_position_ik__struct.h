// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ik_request'
#include "moveit_msgs/msg/detail/position_ik_request__struct.h"

/// Struct defined in srv/GetPositionIK in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetPositionIK_Request
{
  moveit_msgs__msg__PositionIKRequest ik_request;
} moveit_msgs__srv__GetPositionIK_Request;

// Struct for a sequence of moveit_msgs__srv__GetPositionIK_Request.
typedef struct moveit_msgs__srv__GetPositionIK_Request__Sequence
{
  moveit_msgs__srv__GetPositionIK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetPositionIK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in srv/GetPositionIK in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetPositionIK_Response
{
  /// The returned solution
  /// (in the same order as the list of joints specified in the IKRequest message)
  moveit_msgs__msg__RobotState solution;
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__GetPositionIK_Response;

// Struct for a sequence of moveit_msgs__srv__GetPositionIK_Response.
typedef struct moveit_msgs__srv__GetPositionIK_Response__Sequence
{
  moveit_msgs__srv__GetPositionIK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetPositionIK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_POSITION_IK__STRUCT_H_
