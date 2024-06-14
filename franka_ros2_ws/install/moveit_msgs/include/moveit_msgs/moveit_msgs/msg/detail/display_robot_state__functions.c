// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/display_robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `highlight_links`
#include "moveit_msgs/msg/detail/object_color__functions.h"

bool
moveit_msgs__msg__DisplayRobotState__init(moveit_msgs__msg__DisplayRobotState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!moveit_msgs__msg__RobotState__init(&msg->state)) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
    return false;
  }
  // highlight_links
  if (!moveit_msgs__msg__ObjectColor__Sequence__init(&msg->highlight_links, 0)) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
    return false;
  }
  // hide
  return true;
}

void
moveit_msgs__msg__DisplayRobotState__fini(moveit_msgs__msg__DisplayRobotState * msg)
{
  if (!msg) {
    return;
  }
  // state
  moveit_msgs__msg__RobotState__fini(&msg->state);
  // highlight_links
  moveit_msgs__msg__ObjectColor__Sequence__fini(&msg->highlight_links);
  // hide
}

bool
moveit_msgs__msg__DisplayRobotState__are_equal(const moveit_msgs__msg__DisplayRobotState * lhs, const moveit_msgs__msg__DisplayRobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // highlight_links
  if (!moveit_msgs__msg__ObjectColor__Sequence__are_equal(
      &(lhs->highlight_links), &(rhs->highlight_links)))
  {
    return false;
  }
  // hide
  if (lhs->hide != rhs->hide) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__DisplayRobotState__copy(
  const moveit_msgs__msg__DisplayRobotState * input,
  moveit_msgs__msg__DisplayRobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // highlight_links
  if (!moveit_msgs__msg__ObjectColor__Sequence__copy(
      &(input->highlight_links), &(output->highlight_links)))
  {
    return false;
  }
  // hide
  output->hide = input->hide;
  return true;
}

moveit_msgs__msg__DisplayRobotState *
moveit_msgs__msg__DisplayRobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__DisplayRobotState * msg = (moveit_msgs__msg__DisplayRobotState *)allocator.allocate(sizeof(moveit_msgs__msg__DisplayRobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__DisplayRobotState));
  bool success = moveit_msgs__msg__DisplayRobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__DisplayRobotState__destroy(moveit_msgs__msg__DisplayRobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__DisplayRobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__DisplayRobotState__Sequence__init(moveit_msgs__msg__DisplayRobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__DisplayRobotState * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__DisplayRobotState *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__DisplayRobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__DisplayRobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__DisplayRobotState__fini(&data[i - 1]);
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
moveit_msgs__msg__DisplayRobotState__Sequence__fini(moveit_msgs__msg__DisplayRobotState__Sequence * array)
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
      moveit_msgs__msg__DisplayRobotState__fini(&array->data[i]);
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

moveit_msgs__msg__DisplayRobotState__Sequence *
moveit_msgs__msg__DisplayRobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__DisplayRobotState__Sequence * array = (moveit_msgs__msg__DisplayRobotState__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__DisplayRobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__DisplayRobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__DisplayRobotState__Sequence__destroy(moveit_msgs__msg__DisplayRobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__DisplayRobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__DisplayRobotState__Sequence__are_equal(const moveit_msgs__msg__DisplayRobotState__Sequence * lhs, const moveit_msgs__msg__DisplayRobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__DisplayRobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__DisplayRobotState__Sequence__copy(
  const moveit_msgs__msg__DisplayRobotState__Sequence * input,
  moveit_msgs__msg__DisplayRobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__DisplayRobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__DisplayRobotState * data =
      (moveit_msgs__msg__DisplayRobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__DisplayRobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__DisplayRobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__DisplayRobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
