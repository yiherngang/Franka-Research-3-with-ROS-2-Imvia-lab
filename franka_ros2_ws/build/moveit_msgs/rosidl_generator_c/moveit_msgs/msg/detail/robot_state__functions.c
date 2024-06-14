// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_state`
#include "sensor_msgs/msg/detail/joint_state__functions.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/detail/multi_dof_joint_state__functions.h"
// Member `attached_collision_objects`
#include "moveit_msgs/msg/detail/attached_collision_object__functions.h"

bool
moveit_msgs__msg__RobotState__init(moveit_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // multi_dof_joint_state
  if (!sensor_msgs__msg__MultiDOFJointState__init(&msg->multi_dof_joint_state)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // attached_collision_objects
  if (!moveit_msgs__msg__AttachedCollisionObject__Sequence__init(&msg->attached_collision_objects, 0)) {
    moveit_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // is_diff
  return true;
}

void
moveit_msgs__msg__RobotState__fini(moveit_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // multi_dof_joint_state
  sensor_msgs__msg__MultiDOFJointState__fini(&msg->multi_dof_joint_state);
  // attached_collision_objects
  moveit_msgs__msg__AttachedCollisionObject__Sequence__fini(&msg->attached_collision_objects);
  // is_diff
}

bool
moveit_msgs__msg__RobotState__are_equal(const moveit_msgs__msg__RobotState * lhs, const moveit_msgs__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  // multi_dof_joint_state
  if (!sensor_msgs__msg__MultiDOFJointState__are_equal(
      &(lhs->multi_dof_joint_state), &(rhs->multi_dof_joint_state)))
  {
    return false;
  }
  // attached_collision_objects
  if (!moveit_msgs__msg__AttachedCollisionObject__Sequence__are_equal(
      &(lhs->attached_collision_objects), &(rhs->attached_collision_objects)))
  {
    return false;
  }
  // is_diff
  if (lhs->is_diff != rhs->is_diff) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__RobotState__copy(
  const moveit_msgs__msg__RobotState * input,
  moveit_msgs__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  // multi_dof_joint_state
  if (!sensor_msgs__msg__MultiDOFJointState__copy(
      &(input->multi_dof_joint_state), &(output->multi_dof_joint_state)))
  {
    return false;
  }
  // attached_collision_objects
  if (!moveit_msgs__msg__AttachedCollisionObject__Sequence__copy(
      &(input->attached_collision_objects), &(output->attached_collision_objects)))
  {
    return false;
  }
  // is_diff
  output->is_diff = input->is_diff;
  return true;
}

moveit_msgs__msg__RobotState *
moveit_msgs__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__RobotState * msg = (moveit_msgs__msg__RobotState *)allocator.allocate(sizeof(moveit_msgs__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__RobotState));
  bool success = moveit_msgs__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__RobotState__destroy(moveit_msgs__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__RobotState__Sequence__init(moveit_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__RobotState * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__RobotState *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__RobotState__fini(&data[i - 1]);
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
moveit_msgs__msg__RobotState__Sequence__fini(moveit_msgs__msg__RobotState__Sequence * array)
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
      moveit_msgs__msg__RobotState__fini(&array->data[i]);
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

moveit_msgs__msg__RobotState__Sequence *
moveit_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__RobotState__Sequence * array = (moveit_msgs__msg__RobotState__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__RobotState__Sequence__destroy(moveit_msgs__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__RobotState__Sequence__are_equal(const moveit_msgs__msg__RobotState__Sequence * lhs, const moveit_msgs__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__RobotState__Sequence__copy(
  const moveit_msgs__msg__RobotState__Sequence * input,
  moveit_msgs__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__RobotState * data =
      (moveit_msgs__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
