// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/joint_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_name`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__JointLimits__init(moveit_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__init(&msg->joint_name)) {
    moveit_msgs__msg__JointLimits__fini(msg);
    return false;
  }
  // has_position_limits
  // min_position
  // max_position
  // has_velocity_limits
  // max_velocity
  // has_acceleration_limits
  // max_acceleration
  // has_jerk_limits
  // max_jerk
  return true;
}

void
moveit_msgs__msg__JointLimits__fini(moveit_msgs__msg__JointLimits * msg)
{
  if (!msg) {
    return;
  }
  // joint_name
  rosidl_runtime_c__String__fini(&msg->joint_name);
  // has_position_limits
  // min_position
  // max_position
  // has_velocity_limits
  // max_velocity
  // has_acceleration_limits
  // max_acceleration
  // has_jerk_limits
  // max_jerk
}

bool
moveit_msgs__msg__JointLimits__are_equal(const moveit_msgs__msg__JointLimits * lhs, const moveit_msgs__msg__JointLimits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->joint_name), &(rhs->joint_name)))
  {
    return false;
  }
  // has_position_limits
  if (lhs->has_position_limits != rhs->has_position_limits) {
    return false;
  }
  // min_position
  if (lhs->min_position != rhs->min_position) {
    return false;
  }
  // max_position
  if (lhs->max_position != rhs->max_position) {
    return false;
  }
  // has_velocity_limits
  if (lhs->has_velocity_limits != rhs->has_velocity_limits) {
    return false;
  }
  // max_velocity
  if (lhs->max_velocity != rhs->max_velocity) {
    return false;
  }
  // has_acceleration_limits
  if (lhs->has_acceleration_limits != rhs->has_acceleration_limits) {
    return false;
  }
  // max_acceleration
  if (lhs->max_acceleration != rhs->max_acceleration) {
    return false;
  }
  // has_jerk_limits
  if (lhs->has_jerk_limits != rhs->has_jerk_limits) {
    return false;
  }
  // max_jerk
  if (lhs->max_jerk != rhs->max_jerk) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__JointLimits__copy(
  const moveit_msgs__msg__JointLimits * input,
  moveit_msgs__msg__JointLimits * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_name
  if (!rosidl_runtime_c__String__copy(
      &(input->joint_name), &(output->joint_name)))
  {
    return false;
  }
  // has_position_limits
  output->has_position_limits = input->has_position_limits;
  // min_position
  output->min_position = input->min_position;
  // max_position
  output->max_position = input->max_position;
  // has_velocity_limits
  output->has_velocity_limits = input->has_velocity_limits;
  // max_velocity
  output->max_velocity = input->max_velocity;
  // has_acceleration_limits
  output->has_acceleration_limits = input->has_acceleration_limits;
  // max_acceleration
  output->max_acceleration = input->max_acceleration;
  // has_jerk_limits
  output->has_jerk_limits = input->has_jerk_limits;
  // max_jerk
  output->max_jerk = input->max_jerk;
  return true;
}

moveit_msgs__msg__JointLimits *
moveit_msgs__msg__JointLimits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__JointLimits * msg = (moveit_msgs__msg__JointLimits *)allocator.allocate(sizeof(moveit_msgs__msg__JointLimits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__JointLimits));
  bool success = moveit_msgs__msg__JointLimits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__JointLimits__destroy(moveit_msgs__msg__JointLimits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__JointLimits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__JointLimits__Sequence__init(moveit_msgs__msg__JointLimits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__JointLimits * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__JointLimits *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__JointLimits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__JointLimits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__JointLimits__fini(&data[i - 1]);
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
moveit_msgs__msg__JointLimits__Sequence__fini(moveit_msgs__msg__JointLimits__Sequence * array)
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
      moveit_msgs__msg__JointLimits__fini(&array->data[i]);
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

moveit_msgs__msg__JointLimits__Sequence *
moveit_msgs__msg__JointLimits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__JointLimits__Sequence * array = (moveit_msgs__msg__JointLimits__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__JointLimits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__JointLimits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__JointLimits__Sequence__destroy(moveit_msgs__msg__JointLimits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__JointLimits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__JointLimits__Sequence__are_equal(const moveit_msgs__msg__JointLimits__Sequence * lhs, const moveit_msgs__msg__JointLimits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__JointLimits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__JointLimits__Sequence__copy(
  const moveit_msgs__msg__JointLimits__Sequence * input,
  moveit_msgs__msg__JointLimits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__JointLimits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__JointLimits * data =
      (moveit_msgs__msg__JointLimits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__JointLimits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__JointLimits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__JointLimits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
