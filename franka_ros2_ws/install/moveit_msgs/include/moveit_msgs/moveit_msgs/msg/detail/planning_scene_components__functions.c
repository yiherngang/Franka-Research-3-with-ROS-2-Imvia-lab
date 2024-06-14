// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_scene_components__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
moveit_msgs__msg__PlanningSceneComponents__init(moveit_msgs__msg__PlanningSceneComponents * msg)
{
  if (!msg) {
    return false;
  }
  // components
  return true;
}

void
moveit_msgs__msg__PlanningSceneComponents__fini(moveit_msgs__msg__PlanningSceneComponents * msg)
{
  if (!msg) {
    return;
  }
  // components
}

bool
moveit_msgs__msg__PlanningSceneComponents__are_equal(const moveit_msgs__msg__PlanningSceneComponents * lhs, const moveit_msgs__msg__PlanningSceneComponents * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // components
  if (lhs->components != rhs->components) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlanningSceneComponents__copy(
  const moveit_msgs__msg__PlanningSceneComponents * input,
  moveit_msgs__msg__PlanningSceneComponents * output)
{
  if (!input || !output) {
    return false;
  }
  // components
  output->components = input->components;
  return true;
}

moveit_msgs__msg__PlanningSceneComponents *
moveit_msgs__msg__PlanningSceneComponents__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningSceneComponents * msg = (moveit_msgs__msg__PlanningSceneComponents *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningSceneComponents), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningSceneComponents));
  bool success = moveit_msgs__msg__PlanningSceneComponents__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningSceneComponents__destroy(moveit_msgs__msg__PlanningSceneComponents * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__PlanningSceneComponents__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__init(moveit_msgs__msg__PlanningSceneComponents__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningSceneComponents * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__PlanningSceneComponents *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__PlanningSceneComponents), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningSceneComponents__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningSceneComponents__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningSceneComponents__Sequence__fini(moveit_msgs__msg__PlanningSceneComponents__Sequence * array)
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
      moveit_msgs__msg__PlanningSceneComponents__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningSceneComponents__Sequence *
moveit_msgs__msg__PlanningSceneComponents__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningSceneComponents__Sequence * array = (moveit_msgs__msg__PlanningSceneComponents__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningSceneComponents__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningSceneComponents__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningSceneComponents__Sequence__destroy(moveit_msgs__msg__PlanningSceneComponents__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__PlanningSceneComponents__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__are_equal(const moveit_msgs__msg__PlanningSceneComponents__Sequence * lhs, const moveit_msgs__msg__PlanningSceneComponents__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlanningSceneComponents__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__copy(
  const moveit_msgs__msg__PlanningSceneComponents__Sequence * input,
  moveit_msgs__msg__PlanningSceneComponents__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlanningSceneComponents);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__PlanningSceneComponents * data =
      (moveit_msgs__msg__PlanningSceneComponents *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlanningSceneComponents__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlanningSceneComponents__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__PlanningSceneComponents__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
