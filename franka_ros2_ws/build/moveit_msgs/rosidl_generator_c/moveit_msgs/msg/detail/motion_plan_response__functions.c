// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionPlanResponse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_plan_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__msg__MotionPlanResponse__init(moveit_msgs__msg__MotionPlanResponse * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->trajectory)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  // planning_time
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__MotionPlanResponse__fini(moveit_msgs__msg__MotionPlanResponse * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // trajectory
  moveit_msgs__msg__RobotTrajectory__fini(&msg->trajectory);
  // planning_time
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

bool
moveit_msgs__msg__MotionPlanResponse__are_equal(const moveit_msgs__msg__MotionPlanResponse * lhs, const moveit_msgs__msg__MotionPlanResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->trajectory_start), &(rhs->trajectory_start)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // planning_time
  if (lhs->planning_time != rhs->planning_time) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__MotionPlanResponse__copy(
  const moveit_msgs__msg__MotionPlanResponse * input,
  moveit_msgs__msg__MotionPlanResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->trajectory_start), &(output->trajectory_start)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // trajectory
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // planning_time
  output->planning_time = input->planning_time;
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__MotionPlanResponse *
moveit_msgs__msg__MotionPlanResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanResponse * msg = (moveit_msgs__msg__MotionPlanResponse *)allocator.allocate(sizeof(moveit_msgs__msg__MotionPlanResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionPlanResponse));
  bool success = moveit_msgs__msg__MotionPlanResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionPlanResponse__destroy(moveit_msgs__msg__MotionPlanResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__MotionPlanResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__MotionPlanResponse__Sequence__init(moveit_msgs__msg__MotionPlanResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanResponse * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__MotionPlanResponse *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__MotionPlanResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionPlanResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionPlanResponse__fini(&data[i - 1]);
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
moveit_msgs__msg__MotionPlanResponse__Sequence__fini(moveit_msgs__msg__MotionPlanResponse__Sequence * array)
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
      moveit_msgs__msg__MotionPlanResponse__fini(&array->data[i]);
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

moveit_msgs__msg__MotionPlanResponse__Sequence *
moveit_msgs__msg__MotionPlanResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionPlanResponse__Sequence * array = (moveit_msgs__msg__MotionPlanResponse__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__MotionPlanResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionPlanResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionPlanResponse__Sequence__destroy(moveit_msgs__msg__MotionPlanResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__MotionPlanResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__MotionPlanResponse__Sequence__are_equal(const moveit_msgs__msg__MotionPlanResponse__Sequence * lhs, const moveit_msgs__msg__MotionPlanResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__MotionPlanResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__MotionPlanResponse__Sequence__copy(
  const moveit_msgs__msg__MotionPlanResponse__Sequence * input,
  moveit_msgs__msg__MotionPlanResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__MotionPlanResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__MotionPlanResponse * data =
      (moveit_msgs__msg__MotionPlanResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__MotionPlanResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__MotionPlanResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__MotionPlanResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
