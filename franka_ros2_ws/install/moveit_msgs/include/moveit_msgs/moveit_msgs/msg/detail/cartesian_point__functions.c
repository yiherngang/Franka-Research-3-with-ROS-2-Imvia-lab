// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/cartesian_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration`
#include "geometry_msgs/msg/detail/accel__functions.h"

bool
moveit_msgs__msg__CartesianPoint__init(moveit_msgs__msg__CartesianPoint * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__init(&msg->velocity)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration)) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__CartesianPoint__fini(moveit_msgs__msg__CartesianPoint * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // velocity
  geometry_msgs__msg__Twist__fini(&msg->velocity);
  // acceleration
  geometry_msgs__msg__Accel__fini(&msg->acceleration);
}

bool
moveit_msgs__msg__CartesianPoint__are_equal(const moveit_msgs__msg__CartesianPoint * lhs, const moveit_msgs__msg__CartesianPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__CartesianPoint__copy(
  const moveit_msgs__msg__CartesianPoint * input,
  moveit_msgs__msg__CartesianPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // acceleration
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__CartesianPoint *
moveit_msgs__msg__CartesianPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianPoint * msg = (moveit_msgs__msg__CartesianPoint *)allocator.allocate(sizeof(moveit_msgs__msg__CartesianPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__CartesianPoint));
  bool success = moveit_msgs__msg__CartesianPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__CartesianPoint__destroy(moveit_msgs__msg__CartesianPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__CartesianPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__CartesianPoint__Sequence__init(moveit_msgs__msg__CartesianPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianPoint * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__CartesianPoint *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__CartesianPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__CartesianPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__CartesianPoint__fini(&data[i - 1]);
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
moveit_msgs__msg__CartesianPoint__Sequence__fini(moveit_msgs__msg__CartesianPoint__Sequence * array)
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
      moveit_msgs__msg__CartesianPoint__fini(&array->data[i]);
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

moveit_msgs__msg__CartesianPoint__Sequence *
moveit_msgs__msg__CartesianPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__CartesianPoint__Sequence * array = (moveit_msgs__msg__CartesianPoint__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__CartesianPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__CartesianPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__CartesianPoint__Sequence__destroy(moveit_msgs__msg__CartesianPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__CartesianPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__CartesianPoint__Sequence__are_equal(const moveit_msgs__msg__CartesianPoint__Sequence * lhs, const moveit_msgs__msg__CartesianPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__CartesianPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__CartesianPoint__Sequence__copy(
  const moveit_msgs__msg__CartesianPoint__Sequence * input,
  moveit_msgs__msg__CartesianPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__CartesianPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__CartesianPoint * data =
      (moveit_msgs__msg__CartesianPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__CartesianPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__CartesianPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__CartesianPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
