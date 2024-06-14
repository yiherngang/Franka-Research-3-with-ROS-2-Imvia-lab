// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/ChangeDriftDimensions.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'transform_jog_frame_to_drift_frame'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in srv/ChangeDriftDimensions in the package moveit_msgs.
typedef struct moveit_msgs__srv__ChangeDriftDimensions_Request
{
  bool drift_x_translation;
  bool drift_y_translation;
  bool drift_z_translation;
  bool drift_x_rotation;
  bool drift_y_rotation;
  bool drift_z_rotation;
  /// Not implemented as of Jan 2020 (for now assumed to be the identity matrix). In the future it will allow us to transform
  /// from the jog control frame to a unique drift frame, so the robot can drift along off-principal axes
  geometry_msgs__msg__Transform transform_jog_frame_to_drift_frame;
} moveit_msgs__srv__ChangeDriftDimensions_Request;

// Struct for a sequence of moveit_msgs__srv__ChangeDriftDimensions_Request.
typedef struct moveit_msgs__srv__ChangeDriftDimensions_Request__Sequence
{
  moveit_msgs__srv__ChangeDriftDimensions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ChangeDriftDimensions_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ChangeDriftDimensions in the package moveit_msgs.
typedef struct moveit_msgs__srv__ChangeDriftDimensions_Response
{
  bool success;
} moveit_msgs__srv__ChangeDriftDimensions_Response;

// Struct for a sequence of moveit_msgs__srv__ChangeDriftDimensions_Response.
typedef struct moveit_msgs__srv__ChangeDriftDimensions_Response__Sequence
{
  moveit_msgs__srv__ChangeDriftDimensions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__ChangeDriftDimensions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__CHANGE_DRIFT_DIMENSIONS__STRUCT_H_
