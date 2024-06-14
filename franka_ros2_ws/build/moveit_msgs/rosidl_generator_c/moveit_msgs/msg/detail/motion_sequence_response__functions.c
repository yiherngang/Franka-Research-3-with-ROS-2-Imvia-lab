// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MotionSequenceResponse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/motion_sequence_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"
// Member `sequence_start`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `planned_trajectories`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"

bool
moveit_msgs__msg__MotionSequenceResponse__init(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // sequence_start
  if (!moveit_msgs__msg__RobotState__init(&msg->sequence_start)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // planned_trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->planned_trajectories, 0)) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
    return false;
  }
  // planning_time
  return true;
}

void
moveit_msgs__msg__MotionSequenceResponse__fini(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
  // sequence_start
  moveit_msgs__msg__RobotState__fini(&msg->sequence_start);
  // planned_trajectories
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->planned_trajectories);
  // planning_time
}

bool
moveit_msgs__msg__MotionSequenceResponse__are_equal(const moveit_msgs__msg__MotionSequenceResponse * lhs, const moveit_msgs__msg__MotionSequenceResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // sequence_start
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->sequence_start), &(rhs->sequence_start)))
  {
    return false;
  }
  // planned_trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__are_equal(
      &(lhs->planned_trajectories), &(rhs->planned_trajectories)))
  {
    return false;
  }
  // planning_time
  if (lhs->planning_time != rhs->planning_time) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__MotionSequenceResponse__copy(
  const moveit_msgs__msg__MotionSequenceResponse * input,
  moveit_msgs__msg__MotionSequenceResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // sequence_start
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->sequence_start), &(output->sequence_start)))
  {
    return false;
  }
  // planned_trajectories
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__copy(
      &(input->planned_trajectories), &(output->planned_trajectories)))
  {
    return false;
  }
  // planning_time
  output->planning_time = input->planning_time;
  return true;
}

moveit_msgs__msg__MotionSequenceResponse *
moveit_msgs__msg__MotionSequenceResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionSequenceResponse * msg = (moveit_msgs__msg__MotionSequenceResponse *)allocator.allocate(sizeof(moveit_msgs__msg__MotionSequenceResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MotionSequenceResponse));
  bool success = moveit_msgs__msg__MotionSequenceResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MotionSequenceResponse__destroy(moveit_msgs__msg__MotionSequenceResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__MotionSequenceResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__MotionSequenceResponse__Sequence__init(moveit_msgs__msg__MotionSequenceResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionSequenceResponse * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__MotionSequenceResponse *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__MotionSequenceResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MotionSequenceResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MotionSequenceResponse__fini(&data[i - 1]);
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
moveit_msgs__msg__MotionSequenceResponse__Sequence__fini(moveit_msgs__msg__MotionSequenceResponse__Sequence * array)
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
      moveit_msgs__msg__MotionSequenceResponse__fini(&array->data[i]);
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

moveit_msgs__msg__MotionSequenceResponse__Sequence *
moveit_msgs__msg__MotionSequenceResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__MotionSequenceResponse__Sequence * array = (moveit_msgs__msg__MotionSequenceResponse__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__MotionSequenceResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MotionSequenceResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MotionSequenceResponse__Sequence__destroy(moveit_msgs__msg__MotionSequenceResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__MotionSequenceResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__MotionSequenceResponse__Sequence__are_equal(const moveit_msgs__msg__MotionSequenceResponse__Sequence * lhs, const moveit_msgs__msg__MotionSequenceResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__MotionSequenceResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__MotionSequenceResponse__Sequence__copy(
  const moveit_msgs__msg__MotionSequenceResponse__Sequence * input,
  moveit_msgs__msg__MotionSequenceResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__MotionSequenceResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__MotionSequenceResponse * data =
      (moveit_msgs__msg__MotionSequenceResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__MotionSequenceResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__MotionSequenceResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__MotionSequenceResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
