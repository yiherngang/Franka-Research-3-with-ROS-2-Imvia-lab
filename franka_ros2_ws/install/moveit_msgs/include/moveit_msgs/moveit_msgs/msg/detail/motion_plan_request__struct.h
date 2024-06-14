// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_
#define MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/detail/workspace_parameters__struct.h"
// Member 'start_state'
#include "moveit_msgs/msg/detail/robot_state__struct.h"
// Member 'goal_constraints'
// Member 'path_constraints'
#include "moveit_msgs/msg/detail/constraints__struct.h"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/detail/trajectory_constraints__struct.h"
// Member 'reference_trajectories'
#include "moveit_msgs/msg/detail/generic_trajectory__struct.h"
// Member 'pipeline_id'
// Member 'planner_id'
// Member 'group_name'
// Member 'cartesian_speed_end_effector_link'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotionPlanRequest in the package moveit_msgs.
/**
  * This service contains the definition for a request to the motion
  * planner and the output it provides
 */
typedef struct moveit_msgs__msg__MotionPlanRequest
{
  /// Parameters for the workspace that the planner should work inside
  moveit_msgs__msg__WorkspaceParameters workspace_parameters;
  /// Starting state updates. If certain joints should be considered
  /// at positions other than the current ones, these positions should
  /// be set here
  moveit_msgs__msg__RobotState start_state;
  /// The possible goal states for the model to plan for. Each element of
  /// the array defines a goal region. The goal is achieved
  /// if the constraints for a particular region are satisfied
  moveit_msgs__msg__Constraints__Sequence goal_constraints;
  /// No state at any point along the path in the produced motion plan will violate these constraints (this applies to all points, not just waypoints)
  moveit_msgs__msg__Constraints path_constraints;
  /// The constraints the resulting trajectory must satisfy
  moveit_msgs__msg__TrajectoryConstraints trajectory_constraints;
  /// A set of trajectories that may be used as reference or initial trajectories for (typically optimization-based) planners
  /// These trajectories do not override start_state or goal_constraints
  moveit_msgs__msg__GenericTrajectory__Sequence reference_trajectories;
  /// The name of the planning pipeline to use. If no name is specified,
  /// the configured planning pipeline will be used
  rosidl_runtime_c__String pipeline_id;
  /// The name of the planning algorithm to use. If no name is specified,
  /// the default planner of the planning pipeline will be used
  rosidl_runtime_c__String planner_id;
  /// The name of the group of joints on which this planner is operating
  rosidl_runtime_c__String group_name;
  /// The number of times this plan is to be computed. Shortest solution
  /// will be reported.
  int32_t num_planning_attempts;
  /// The maximum amount of time the motion planner is allowed to plan for (in seconds)
  double allowed_planning_time;
  /// Scaling factors for optionally reducing the maximum joint velocities and
  /// accelerations.  Allowed values are in (0,1].  The maximum joint velocity and
  /// acceleration specified in the robot model are multiplied by thier respective
  /// factors.  If either are outside their valid ranges (importantly, this
  /// includes being set to 0.0), the factor is set to the default value of 1.0
  /// internally (i.e., maximum joint velocity or maximum joint acceleration).
  double max_velocity_scaling_factor;
  double max_acceleration_scaling_factor;
  /// Maximum cartesian speed for the given end effector.
  /// If max_cartesian_speed <= 0 the trajectory is not modified.
  /// These fields require the following planning request adapter: default_planner_request_adapters/SetMaxCartesianEndEffectorSpeed
  rosidl_runtime_c__String cartesian_speed_end_effector_link;
  /// m/s
  double max_cartesian_speed;
} moveit_msgs__msg__MotionPlanRequest;

// Struct for a sequence of moveit_msgs__msg__MotionPlanRequest.
typedef struct moveit_msgs__msg__MotionPlanRequest__Sequence
{
  moveit_msgs__msg__MotionPlanRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__MotionPlanRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__MOTION_PLAN_REQUEST__STRUCT_H_
