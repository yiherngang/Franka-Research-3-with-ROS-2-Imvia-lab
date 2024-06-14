// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/MoveGroupSequence.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request'
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.h"
// Member 'planning_options'
#include "moveit_msgs/msg/detail/planning_options__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_Goal
{
  moveit_msgs__msg__MotionSequenceRequest request;
  /// Planning options
  moveit_msgs__msg__PlanningOptions planning_options;
} moveit_msgs__action__MoveGroupSequence_Goal;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_Goal.
typedef struct moveit_msgs__action__MoveGroupSequence_Goal__Sequence
{
  moveit_msgs__action__MoveGroupSequence_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "moveit_msgs/msg/detail/motion_sequence_response__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_Result
{
  /// Response comprising information on all sections of the sequence
  moveit_msgs__msg__MotionSequenceResponse response;
} moveit_msgs__action__MoveGroupSequence_Result;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_Result.
typedef struct moveit_msgs__action__MoveGroupSequence_Result__Sequence
{
  moveit_msgs__action__MoveGroupSequence_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_Feedback
{
  /// The internal state that the move group action currently is in
  rosidl_runtime_c__String state;
} moveit_msgs__action__MoveGroupSequence_Feedback;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_Feedback.
typedef struct moveit_msgs__action__MoveGroupSequence_Feedback__Sequence
{
  moveit_msgs__action__MoveGroupSequence_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/move_group_sequence__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__MoveGroupSequence_Goal goal;
} moveit_msgs__action__MoveGroupSequence_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_SendGoal_Request.
typedef struct moveit_msgs__action__MoveGroupSequence_SendGoal_Request__Sequence
{
  moveit_msgs__action__MoveGroupSequence_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__MoveGroupSequence_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_SendGoal_Response.
typedef struct moveit_msgs__action__MoveGroupSequence_SendGoal_Response__Sequence
{
  moveit_msgs__action__MoveGroupSequence_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__MoveGroupSequence_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_GetResult_Request.
typedef struct moveit_msgs__action__MoveGroupSequence_GetResult_Request__Sequence
{
  moveit_msgs__action__MoveGroupSequence_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__MoveGroupSequence_Result result;
} moveit_msgs__action__MoveGroupSequence_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_GetResult_Response.
typedef struct moveit_msgs__action__MoveGroupSequence_GetResult_Response__Sequence
{
  moveit_msgs__action__MoveGroupSequence_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/move_group_sequence__struct.h"

/// Struct defined in action/MoveGroupSequence in the package moveit_msgs.
typedef struct moveit_msgs__action__MoveGroupSequence_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__MoveGroupSequence_Feedback feedback;
} moveit_msgs__action__MoveGroupSequence_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__MoveGroupSequence_FeedbackMessage.
typedef struct moveit_msgs__action__MoveGroupSequence_FeedbackMessage__Sequence
{
  moveit_msgs__action__MoveGroupSequence_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__MoveGroupSequence_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP_SEQUENCE__STRUCT_H_
