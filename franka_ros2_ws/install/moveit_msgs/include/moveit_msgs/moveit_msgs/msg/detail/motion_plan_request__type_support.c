// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/motion_plan_request__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"
#include "moveit_msgs/msg/detail/motion_plan_request__struct.h"


// Include directives for member types
// Member `workspace_parameters`
#include "moveit_msgs/msg/workspace_parameters.h"
// Member `workspace_parameters`
#include "moveit_msgs/msg/detail/workspace_parameters__rosidl_typesupport_introspection_c.h"
// Member `start_state`
#include "moveit_msgs/msg/robot_state.h"
// Member `start_state`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `goal_constraints`
// Member `path_constraints`
#include "moveit_msgs/msg/constraints.h"
// Member `goal_constraints`
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__rosidl_typesupport_introspection_c.h"
// Member `trajectory_constraints`
#include "moveit_msgs/msg/trajectory_constraints.h"
// Member `trajectory_constraints`
#include "moveit_msgs/msg/detail/trajectory_constraints__rosidl_typesupport_introspection_c.h"
// Member `reference_trajectories`
#include "moveit_msgs/msg/generic_trajectory.h"
// Member `reference_trajectories`
#include "moveit_msgs/msg/detail/generic_trajectory__rosidl_typesupport_introspection_c.h"
// Member `pipeline_id`
// Member `planner_id`
// Member `group_name`
// Member `cartesian_speed_end_effector_link`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__MotionPlanRequest__init(message_memory);
}

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_fini_function(void * message_memory)
{
  moveit_msgs__msg__MotionPlanRequest__fini(message_memory);
}

size_t moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__size_function__MotionPlanRequest__goal_constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__Constraints__Sequence * member =
    (const moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__goal_constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Constraints__Sequence * member =
    (const moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__goal_constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Constraints__Sequence * member =
    (moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__fetch_function__MotionPlanRequest__goal_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__Constraints * item =
    ((const moveit_msgs__msg__Constraints *)
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__goal_constraints(untyped_member, index));
  moveit_msgs__msg__Constraints * value =
    (moveit_msgs__msg__Constraints *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__assign_function__MotionPlanRequest__goal_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__Constraints * item =
    ((moveit_msgs__msg__Constraints *)
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__goal_constraints(untyped_member, index));
  const moveit_msgs__msg__Constraints * value =
    (const moveit_msgs__msg__Constraints *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__resize_function__MotionPlanRequest__goal_constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Constraints__Sequence * member =
    (moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  moveit_msgs__msg__Constraints__Sequence__fini(member);
  return moveit_msgs__msg__Constraints__Sequence__init(member, size);
}

size_t moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__size_function__MotionPlanRequest__reference_trajectories(
  const void * untyped_member)
{
  const moveit_msgs__msg__GenericTrajectory__Sequence * member =
    (const moveit_msgs__msg__GenericTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__reference_trajectories(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__GenericTrajectory__Sequence * member =
    (const moveit_msgs__msg__GenericTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__reference_trajectories(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__GenericTrajectory__Sequence * member =
    (moveit_msgs__msg__GenericTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__fetch_function__MotionPlanRequest__reference_trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__GenericTrajectory * item =
    ((const moveit_msgs__msg__GenericTrajectory *)
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__reference_trajectories(untyped_member, index));
  moveit_msgs__msg__GenericTrajectory * value =
    (moveit_msgs__msg__GenericTrajectory *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__assign_function__MotionPlanRequest__reference_trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__GenericTrajectory * item =
    ((moveit_msgs__msg__GenericTrajectory *)
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__reference_trajectories(untyped_member, index));
  const moveit_msgs__msg__GenericTrajectory * value =
    (const moveit_msgs__msg__GenericTrajectory *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__resize_function__MotionPlanRequest__reference_trajectories(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__GenericTrajectory__Sequence * member =
    (moveit_msgs__msg__GenericTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__GenericTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__GenericTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[15] = {
  {
    "workspace_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, workspace_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, start_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, goal_constraints),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__size_function__MotionPlanRequest__goal_constraints,  // size() function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__goal_constraints,  // get_const(index) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__goal_constraints,  // get(index) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__fetch_function__MotionPlanRequest__goal_constraints,  // fetch(index, &value) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__assign_function__MotionPlanRequest__goal_constraints,  // assign(index, value) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__resize_function__MotionPlanRequest__goal_constraints  // resize(index) function pointer
  },
  {
    "path_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, path_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, trajectory_constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, reference_trajectories),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__size_function__MotionPlanRequest__reference_trajectories,  // size() function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_const_function__MotionPlanRequest__reference_trajectories,  // get_const(index) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__get_function__MotionPlanRequest__reference_trajectories,  // get(index) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__fetch_function__MotionPlanRequest__reference_trajectories,  // fetch(index, &value) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__assign_function__MotionPlanRequest__reference_trajectories,  // assign(index, value) function pointer
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__resize_function__MotionPlanRequest__reference_trajectories  // resize(index) function pointer
  },
  {
    "pipeline_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, pipeline_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planner_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, planner_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_planning_attempts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, num_planning_attempts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowed_planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, allowed_planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_velocity_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, max_velocity_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_acceleration_scaling_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, max_acceleration_scaling_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cartesian_speed_end_effector_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, cartesian_speed_end_effector_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_cartesian_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionPlanRequest, max_cartesian_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_members = {
  "moveit_msgs__msg",  // message namespace
  "MotionPlanRequest",  // message name
  15,  // number of fields
  sizeof(moveit_msgs__msg__MotionPlanRequest),
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array,  // message members
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_type_support_handle = {
  0,
  &moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionPlanRequest)() {
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, WorkspaceParameters)();
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, TrajectoryConstraints)();
  moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, GenericTrajectory)();
  if (!moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__MotionPlanRequest__rosidl_typesupport_introspection_c__MotionPlanRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
