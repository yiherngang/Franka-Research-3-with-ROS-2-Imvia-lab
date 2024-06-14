// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'group_name'
#include "rosidl_runtime_c/string.h"
// Member 'constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"

/// Struct defined in srv/GetStateValidity in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetStateValidity_Request
{
  moveit_msgs__msg__RobotState robot_state;
  rosidl_runtime_c__String group_name;
  moveit_msgs__msg__Constraints constraints;
} moveit_msgs__srv__GetStateValidity_Request;

// Struct for a sequence of moveit_msgs__srv__GetStateValidity_Request.
typedef struct moveit_msgs__srv__GetStateValidity_Request__Sequence
{
  moveit_msgs__srv__GetStateValidity_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetStateValidity_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'contacts'
#include "moveit_msgs/msg/detail/contact_information__struct.h"
// Member 'cost_sources'
#include "moveit_msgs/msg/detail/cost_source__struct.h"
// Member 'constraint_result'
#include "moveit_msgs/msg/detail/constraint_eval_result__struct.h"

/// Struct defined in srv/GetStateValidity in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetStateValidity_Response
{
  bool valid;
  moveit_msgs__msg__ContactInformation__Sequence contacts;
  moveit_msgs__msg__CostSource__Sequence cost_sources;
  moveit_msgs__msg__ConstraintEvalResult__Sequence constraint_result;
} moveit_msgs__srv__GetStateValidity_Response;

// Struct for a sequence of moveit_msgs__srv__GetStateValidity_Response.
typedef struct moveit_msgs__srv__GetStateValidity_Response__Sequence
{
  moveit_msgs__srv__GetStateValidity_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetStateValidity_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_STATE_VALIDITY__STRUCT_H_
