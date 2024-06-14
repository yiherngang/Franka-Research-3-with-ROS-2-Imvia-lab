// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_
#define MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_

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
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'group_name'
// Member 'link_name'
#include "rosidl_runtime_c/string.h"
// Member 'waypoints'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"

/// Struct defined in srv/GetCartesianPath in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetCartesianPath_Request
{
  std_msgs__msg__Header header;
  /// The start at which to start the Cartesian path
  moveit_msgs__msg__RobotState start_state;
  /// Mandatory name of group to compute the path for
  rosidl_runtime_c__String group_name;
  /// Optional name of IK link for which waypoints are specified.
  /// If not specified, the tip of the group (which is assumed to be a chain)
  /// is assumed to be the link
  rosidl_runtime_c__String link_name;
  /// A sequence of waypoints to be followed by the specified link,
  /// while moving the specified group, such that the group moves only
  /// in a straight line between waypoints
  geometry_msgs__msg__Pose__Sequence waypoints;
  /// The maximum distance (in Cartesian space) between consecutive points
  /// in the returned path. This must always be specified and > 0
  double max_step;
  /// If jump_threshold is set > 0, it acts as a scaling factor that is used to
  /// filter out large relative joint-space jumps in the generated Cartesian path.
  /// To this end, the average joint-space distance between consecutive waypoints
  /// is computed. If any joint-space distance is larger than this average distance
  /// by a factor of jump_threshold_factor, this step is considered a jump
  /// and the returned path is truncated before the step.
  double jump_threshold;
  /// If prismatic_jump_threshold or revolute_jump_threshold are set > 0, then for
  /// all active prismatic or revolute joints, the joint-space difference between
  /// consecutive waypoints is compared to the respective absolute threshold.
  /// If any threshold is exceeded, this step is considered a jump and the returned path
  /// is truncated before the step.
  double prismatic_jump_threshold;
  double revolute_jump_threshold;
  /// Set to true if collisions should be avoided when possible
  bool avoid_collisions;
  /// Specify additional constraints to be met by the Cartesian path
  moveit_msgs__msg__Constraints path_constraints;
} moveit_msgs__srv__GetCartesianPath_Request;

// Struct for a sequence of moveit_msgs__srv__GetCartesianPath_Request.
typedef struct moveit_msgs__srv__GetCartesianPath_Request__Sequence
{
  moveit_msgs__srv__GetCartesianPath_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetCartesianPath_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'start_state'
// already included above
// #include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'solution'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"
// Member 'error_code'
#include "moveit_msgs/msg/detail/move_it_error_codes__struct.h"

/// Struct defined in srv/GetCartesianPath in the package moveit_msgs.
typedef struct moveit_msgs__srv__GetCartesianPath_Response
{
  /// The state at which the computed path starts
  moveit_msgs__msg__RobotState start_state;
  /// The computed solution trajectory, for the desired group, in configuration space
  moveit_msgs__msg__RobotTrajectory solution;
  /// If the computation was incomplete, this value indicates the fraction of the path
  /// that was in fact computed (number of waypoints traveled through)
  double fraction;
  /// The error code of the computation
  moveit_msgs__msg__MoveItErrorCodes error_code;
} moveit_msgs__srv__GetCartesianPath_Response;

// Struct for a sequence of moveit_msgs__srv__GetCartesianPath_Response.
typedef struct moveit_msgs__srv__GetCartesianPath_Response__Sequence
{
  moveit_msgs__srv__GetCartesianPath_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__srv__GetCartesianPath_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__STRUCT_H_
