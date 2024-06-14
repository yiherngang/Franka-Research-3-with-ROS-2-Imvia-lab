// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cartesian_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `point`
#include "moveit_msgs/msg/detail/cartesian_point__functions.h"
// Member `time_from_start`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
moveit_msgs__msg__CartesianTrajectoryPoint__init(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // point
  if (!moveit_msgs__msg__CartesianPoint__init(&msg->point)) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__init(&msg->time_from_start)) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__fini(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // point
  moveit_msgs__msg__CartesianPoint__fini(&msg->point);
  // time_from_start
  builtin_interfaces__msg__Duration__fini(&msg->time_from_start);
}

bool
moveit_msgs__msg__CartesianTrajectoryPoint__are_equal(const moveit_msgs__msg__CartesianTrajectoryPoint * lhs, const moveit_msgs__msg__CartesianTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // point
  if (!moveit_msgs__msg__CartesianPoint__are_equal(
      &(lhs->point), &(rhs->point)))
  {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_from_start), &(rhs->time_from_start)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__CartesianTrajectoryPoint__copy(
  const moveit_msgs__msg__CartesianTrajectoryPoint * input,
  moveit_msgs__msg__CartesianTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // point
  if (!moveit_msgs__msg__CartesianPoint__copy(
      &(input->point), &(output->point)))
  {
    return false;
  }
  // time_from_start
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_from_start), &(output->time_from_start)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__CartesianTrajectoryPoint *
moveit_msgs__msg__CartesianTrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianTrajectoryPoint * msg = (moveit_msgs__msg__CartesianTrajectoryPoint *)allocator.allocate(sizeof(moveit_msgs__msg__CartesianTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CartesianTrajectoryPoint));
  bool success = moveit_msgs__msg__CartesianTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__destroy(moveit_msgs__msg__CartesianTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__CartesianTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianTrajectoryPoint * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__CartesianTrajectoryPoint *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__CartesianTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CartesianTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CartesianTrajectoryPoint__fini(&data[i - 1]);
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
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
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
      moveit_msgs__msg__CartesianTrajectoryPoint__fini(&array->data[i]);
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

moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array = (moveit_msgs__msg__CartesianTrajectoryPoint__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__destroy(moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__are_equal(const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * lhs, const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__CartesianTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(
  const moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * input,
  moveit_msgs__msg__CartesianTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__CartesianTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__CartesianTrajectoryPoint * data =
      (moveit_msgs__msg__CartesianTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__CartesianTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__CartesianTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__CartesianTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
