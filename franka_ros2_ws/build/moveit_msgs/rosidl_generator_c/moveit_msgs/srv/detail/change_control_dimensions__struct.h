// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/ChangeControlDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ChangeControlDimensions in the package moveit_msgs.
typedef struct moveit_msgs__srv__ChangeControlDimensions_Request
{
  bool control_x_translation;
  bool control_y_translation;
  bool control_z_translation;
  bool control_x_rotation;
  bool control_y_rotation;
  bool control_z_rotation;
} moveit_msgs__srv__ChangeControlDimensions_Request;

// Struct for a sequence of moveit_msgs__srv__ChangeControlDimensions_Request.
typedef struct moveit_msgs__srv__ChangeControlDimensions_Request__Sequence
{
  moveit_msgs__srv__ChangeControlDimensions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ChangeControlDimensions_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChangeControlDimensions in the package moveit_msgs.
typedef struct moveit_msgs__srv__ChangeControlDimensions_Response
{
  bool success;
} moveit_msgs__srv__ChangeControlDimensions_Response;

// Struct for a sequence of moveit_msgs__srv__ChangeControlDimensions_Response.
typedef struct moveit_msgs__srv__ChangeControlDimensions_Response__Sequence
{
  moveit_msgs__srv__ChangeControlDimensions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ChangeControlDimensions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_CONTROL_DIMENSIONS__STRUCT_H_
