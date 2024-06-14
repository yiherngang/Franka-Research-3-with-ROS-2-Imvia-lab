// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/GenericTrajectory.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/generic_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `cartesian_trajectory`
#include "moveit_msgs/msg/detail/cartesian_trajectory__functions.h"

bool
moveit_msgs__msg__GenericTrajectory__init(moveit_msgs__msg__GenericTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&msg->joint_trajectory, 0)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  // cartesian_trajectory
  if (!moveit_msgs__msg__CartesianTrajectory__Sequence__init(&msg->cartesian_trajectory, 0)) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__GenericTrajectory__fini(moveit_msgs__msg__GenericTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(&msg->joint_trajectory);
  // cartesian_trajectory
  moveit_msgs__msg__CartesianTrajectory__Sequence__fini(&msg->cartesian_trajectory);
}

bool
moveit_msgs__msg__GenericTrajectory__are_equal(const moveit_msgs__msg__GenericTrajectory * lhs, const moveit_msgs__msg__GenericTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__are_equal(
      &(lhs->joint_trajectory), &(rhs->joint_trajectory)))
  {
    return false;
  }
  // cartesian_trajectory
  if (!moveit_msgs__msg__CartesianTrajectory__Sequence__are_equal(
      &(lhs->cartesian_trajectory), &(rhs->cartesian_trajectory)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__GenericTrajectory__copy(
  const moveit_msgs__msg__GenericTrajectory * input,
  moveit_msgs__msg__GenericTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__copy(
      &(input->joint_trajectory), &(output->joint_trajectory)))
  {
    return false;
  }
  // cartesian_trajectory
  if (!moveit_msgs__msg__CartesianTrajectory__Sequence__copy(
      &(input->cartesian_trajectory), &(output->cartesian_trajectory)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__GenericTrajectory *
moveit_msgs__msg__GenericTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GenericTrajectory * msg = (moveit_msgs__msg__GenericTrajectory *)allocator.allocate(sizeof(moveit_msgs__msg__GenericTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__GenericTrajectory));
  bool success = moveit_msgs__msg__GenericTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__GenericTrajectory__destroy(moveit_msgs__msg__GenericTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__GenericTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__GenericTrajectory__Sequence__init(moveit_msgs__msg__GenericTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GenericTrajectory * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__GenericTrajectory *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__GenericTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__GenericTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__GenericTrajectory__fini(&data[i - 1]);
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
moveit_msgs__msg__GenericTrajectory__Sequence__fini(moveit_msgs__msg__GenericTrajectory__Sequence * array)
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
      moveit_msgs__msg__GenericTrajectory__fini(&array->data[i]);
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

moveit_msgs__msg__GenericTrajectory__Sequence *
moveit_msgs__msg__GenericTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__GenericTrajectory__Sequence * array = (moveit_msgs__msg__GenericTrajectory__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__GenericTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__GenericTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__GenericTrajectory__Sequence__destroy(moveit_msgs__msg__GenericTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__GenericTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__GenericTrajectory__Sequence__are_equal(const moveit_msgs__msg__GenericTrajectory__Sequence * lhs, const moveit_msgs__msg__GenericTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__GenericTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__GenericTrajectory__Sequence__copy(
  const moveit_msgs__msg__GenericTrajectory__Sequence * input,
  moveit_msgs__msg__GenericTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__GenericTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__GenericTrajectory * data =
      (moveit_msgs__msg__GenericTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__GenericTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__GenericTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__GenericTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
