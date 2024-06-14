// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `workspace_parameters`
#include "moveit_msgs/msg/detail/workspace_parameters__functions.h"
// Member `start_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `goal_constraints`
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"
// Member `trajectory_constraints`
#include "moveit_msgs/msg/detail/trajectory_constraints__functions.h"
// Member `reference_trajectories`
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"
// Member `pipeline_id`
// Member `planner_id`
// Member `group_name`
// Member `cartesian_speed_end_effector_link`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__MotionPlanRequest__init(moveit_msgs__msg__MotionPlanRequest * msg)
{
  if (!msg) {
    return false;
  }
  // workspace_parameters
  if (!moveit_msgs__msg__WorkspaceParameters__init(&msg->workspace_parameters)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // goal_constraints
  if (!moveit_msgs__msg__Constraints__Sequence__init(&msg->goal_constraints, 0)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // path_constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->path_constraints)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // trajectory_constraints
  if (!moveit_msgs__msg__TrajectoryConstraints__init(&msg->trajectory_constraints)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // reference_trajectories
  if (!moveit_msgs__msg__GenericTrajectory__Sequence__init(&msg->reference_trajectories, 0)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__init(&msg->pipeline_id)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // planner_id
  if (!rosidl_runtime_c__String__init(&msg->planner_id)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // num_planning_attempts
  // allowed_planning_time
  // max_velocity_scaling_factor
  // max_acceleration_scaling_factor
  // cartesian_speed_end_effector_link
  if (!rosidl_runtime_c__String__init(&msg->cartesian_speed_end_effector_link)) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
    return false;
  }
  // max_cartesian_speed
  return true;
}

void
moveit_msgs__msg__MotionPlanRequest__fini(moveit_msgs__msg__MotionPlanRequest * msg)
{
  if (!msg) {
    return;
  }
  // workspace_parameters
  moveit_msgs__msg__WorkspaceParameters__fini(&msg->workspace_parameters);
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // goal_constraints
  moveit_msgs__msg__Constraints__Sequence__fini(&msg->goal_constraints);
  // path_constraints
  moveit_msgs__msg__Constraints__fini(&msg->path_constraints);
  // trajectory_constraints
  moveit_msgs__msg__TrajectoryConstraints__fini(&msg->trajectory_constraints);
  // reference_trajectories
  moveit_msgs__msg__GenericTrajectory__Sequence__fini(&msg->reference_trajectories);
  // pipeline_id
  rosidl_runtime_c__String__fini(&msg->pipeline_id);
  // planner_id
  rosidl_runtime_c__String__fini(&msg->planner_id);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // num_planning_attempts
  // allowed_planning_time
  // max_velocity_scaling_factor
  // max_acceleration_scaling_factor
  // cartesian_speed_end_effector_link
  rosidl_runtime_c__String__fini(&msg->cartesian_speed_end_effector_link);
  // max_cartesian_speed
}

bool
moveit_msgs__msg__MotionPlanRequest__are_equal(const moveit_msgs__msg__MotionPlanRequest * lhs, const moveit_msgs__msg__MotionPlanRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // workspace_parameters
  if (!moveit_msgs__msg__WorkspaceParameters__are_equal(
      &(lhs->workspace_parameters), &(rhs->workspace_parameters)))
  {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->start_state), &(rhs->start_state)))
  {
    return false;
  }
  // goal_constraints
  if (!moveit_msgs__msg__Constraints__Sequence__are_equal(
      &(lhs->goal_constraints), &(rhs->goal_constraints)))
  {
    return false;
  }
  // path_constraints
  if (!moveit_msgs__msg__Constraints__are_equal(
      &(lhs->path_constraints), &(rhs->path_constraints)))
  {
    return false;
  }
  // trajectory_constraints
  if (!moveit_msgs__msg__TrajectoryConstraints__are_equal(
      &(lhs->trajectory_constraints), &(rhs->trajectory_constraints)))
  {
    return false;
  }
  // reference_trajectories
  if (!moveit_msgs__msg__GenericTrajectory__Sequence__are_equal(
      &(lhs->reference_trajectories), &(rhs->reference_trajectories)))
  {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pipeline_id), &(rhs->pipeline_id)))
  {
    return false;
  }
  // planner_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->planner_id), &(rhs->planner_id)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // num_planning_attempts
  if (lhs->num_planning_attempts != rhs->num_planning_attempts) {
    return false;
  }
  // allowed_planning_time
  if (lhs->allowed_planning_time != rhs->allowed_planning_time) {
    return false;
  }
  // max_velocity_scaling_factor
  if (lhs->max_velocity_scaling_factor != rhs->max_velocity_scaling_factor) {
    return false;
  }
  // max_acceleration_scaling_factor
  if (lhs->max_acceleration_scaling_factor != rhs->max_acceleration_scaling_factor) {
    return false;
  }
  // cartesian_speed_end_effector_link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cartesian_speed_end_effector_link), &(rhs->cartesian_speed_end_effector_link)))
  {
    return false;
  }
  // max_cartesian_speed
  if (lhs->max_cartesian_speed != rhs->max_cartesian_speed) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__MotionPlanRequest__copy(
  const moveit_msgs__msg__MotionPlanRequest * input,
  moveit_msgs__msg__MotionPlanRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // workspace_parameters
  if (!moveit_msgs__msg__WorkspaceParameters__copy(
      &(input->workspace_parameters), &(output->workspace_parameters)))
  {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->start_state), &(output->start_state)))
  {
    return false;
  }
  // goal_constraints
  if (!moveit_msgs__msg__Constraints__Sequence__copy(
      &(input->goal_constraints), &(output->goal_constraints)))
  {
    return false;
  }
  // path_constraints
  if (!moveit_msgs__msg__Constraints__copy(
      &(input->path_constraints), &(output->path_constraints)))
  {
    return false;
  }
  // trajectory_constraints
  if (!moveit_msgs__msg__TrajectoryConstraints__copy(
      &(input->trajectory_constraints), &(output->trajectory_constraints)))
  {
    return false;
  }
  // reference_trajectories
  if (!moveit_msgs__msg__GenericTrajectory__Sequence__copy(
      &(input->reference_trajectories), &(output->reference_trajectories)))
  {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__copy(
      &(input->pipeline_id), &(output->pipeline_id)))
  {
    return false;
  }
  // planner_id
  if (!rosidl_runtime_c__String__copy(
      &(input->planner_id), &(output->planner_id)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // num_planning_attempts
  output->num_planning_attempts = input->num_planning_attempts;
  // allowed_planning_time
  output->allowed_planning_time = input->allowed_planning_time;
  // max_velocity_scaling_factor
  output->max_velocity_scaling_factor = input->max_velocity_scaling_factor;
  // max_acceleration_scaling_factor
  output->max_acceleration_scaling_factor = input->max_acceleration_scaling_factor;
  // cartesian_speed_end_effector_link
  if (!rosidl_runtime_c__String__copy(
      &(input->cartesian_speed_end_effector_link), &(output->cartesian_speed_end_effector_link)))
  {
    return false;
  }
  // max_cartesian_speed
  output->max_cartesian_speed = input->max_cartesian_speed;
  return true;
}

moveit_msgs__msg__MotionPlanRequest *
moveit_msgs__msg__MotionPlanRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanRequest * msg = (moveit_msgs__msg__MotionPlanRequest *)allocator.allocate(sizeof(moveit_msgs__msg__MotionPlanRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionPlanRequest));
  bool success = moveit_msgs__msg__MotionPlanRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionPlanRequest__destroy(moveit_msgs__msg__MotionPlanRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__MotionPlanRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__MotionPlanRequest__Sequence__init(moveit_msgs__msg__MotionPlanRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanRequest * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__MotionPlanRequest *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__MotionPlanRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionPlanRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionPlanRequest__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
moveit_msgs__msg__MotionPlanRequest__Sequence__fini(moveit_msgs__msg__MotionPlanRequest__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MotionPlanRequest__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

moveit_msgs__msg__MotionPlanRequest__Sequence *
moveit_msgs__msg__MotionPlanRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanRequest__Sequence * array = (moveit_msgs__msg__MotionPlanRequest__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__MotionPlanRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionPlanRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionPlanRequest__Sequence__destroy(moveit_msgs__msg__MotionPlanRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__MotionPlanRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__MotionPlanRequest__Sequence__are_equal(const moveit_msgs__msg__MotionPlanRequest__Sequence * lhs, const moveit_msgs__msg__MotionPlanRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__MotionPlanRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__MotionPlanRequest__Sequence__copy(
  const moveit_msgs__msg__MotionPlanRequest__Sequence * input,
  moveit_msgs__msg__MotionPlanRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__MotionPlanRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__MotionPlanRequest * data =
      (moveit_msgs__msg__MotionPlanRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__MotionPlanRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__MotionPlanRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__MotionPlanRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
