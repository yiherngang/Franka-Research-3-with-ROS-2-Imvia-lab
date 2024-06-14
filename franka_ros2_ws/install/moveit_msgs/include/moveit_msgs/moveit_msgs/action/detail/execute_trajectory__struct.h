// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_
#define MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_Goal
{
  moveit_msgs__msg__RobotTrajectory trajectory;
} moveit_msgs__action__ExecuteTrajectory_Goal;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_Goal.
typedef struct moveit_msgs__action__ExecuteTrajectory_Goal__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_Result
{
  /// Error code - encodes the overall reason for failure
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__action__ExecuteTrajectory_Result;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_Result.
typedef struct moveit_msgs__action__ExecuteTrajectory_Result__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_Feedback
{
  /// The internal state that the move group action currently is in
  rosidl_runtime_c__String state;
} moveit_msgs__action__ExecuteTrajectory_Feedback;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_Feedback.
typedef struct moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "moveit_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__ExecuteTrajectory_Goal goal;
} moveit_msgs__action__ExecuteTrajectory_SendGoal_Request;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_SendGoal_Request.
typedef struct moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} moveit_msgs__action__ExecuteTrajectory_SendGoal_Response;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_SendGoal_Response.
typedef struct moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} moveit_msgs__action__ExecuteTrajectory_GetResult_Request;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_GetResult_Request.
typedef struct moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_GetResult_Response
{
  int8_t status;
  moveit_msgs__action__ExecuteTrajectory_Result result;
} moveit_msgs__action__ExecuteTrajectory_GetResult_Response;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_GetResult_Response.
typedef struct moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "moveit_msgs/action/detail/execute_trajectory__struct.h"

/// Struct defined in action/ExecuteTrajectory in the package moveit_msgs.
typedef struct moveit_msgs__action__ExecuteTrajectory_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  moveit_msgs__action__ExecuteTrajectory_Feedback feedback;
} moveit_msgs__action__ExecuteTrajectory_FeedbackMessage;

// Struct for a sequence of moveit_msgs__action__ExecuteTrajectory_FeedbackMessage.
typedef struct moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence
{
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__STRUCT_H_
