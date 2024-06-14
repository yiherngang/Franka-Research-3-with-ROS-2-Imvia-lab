// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROBOT_LINK'.
enum
{
  moveit_msgs__msg__ContactInformation__ROBOT_LINK = 0ul
};

/// Constant 'WORLD_OBJECT'.
enum
{
  moveit_msgs__msg__ContactInformation__WORLD_OBJECT = 1ul
};

/// Constant 'ROBOT_ATTACHED'.
enum
{
  moveit_msgs__msg__ContactInformation__ROBOT_ATTACHED = 2ul
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'contact_body_1'
// Member 'contact_body_2'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ContactInformation in the package moveit_msgs.
/**
  * Standard ROS header contains information 
  * about the frame in which this 
  * contact is specified
 */
typedef struct moveit_msgs__msg__ContactInformation
{
  std_msgs__msg__Header header;
  /// Position of the contact point
  geometry_msgs__msg__Point position;
  /// Normal corresponding to the contact point
  geometry_msgs__msg__Vector3 normal;
  /// Depth of contact point
  double depth;
  /// Name of the first body that is in contact
  /// This could be a link or a namespace that represents a body
  rosidl_runtime_c__String contact_body_1;
  uint32_t body_type_1;
  /// Name of the second body that is in contact
  /// This could be a link or a namespace that represents a body
  rosidl_runtime_c__String contact_body_2;
  uint32_t body_type_2;
} moveit_msgs__msg__ContactInformation;

// Struct for a sequence of moveit_msgs__msg__ContactInformation.
typedef struct moveit_msgs__msg__ContactInformation__Sequence
{
  moveit_msgs__msg__ContactInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__ContactInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__STRUCT_H_
