// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planner_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `keys`
// Member `values`
// Member `descriptions`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__PlannerParams__init(moveit_msgs__msg__PlannerParams * msg)
{
  if (!msg) {
    return false;
  }
  // keys
  if (!rosidl_runtime_c__String__Sequence__init(&msg->keys, 0)) {
    moveit_msgs__msg__PlannerParams__fini(msg);
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__init(&msg->values, 0)) {
    moveit_msgs__msg__PlannerParams__fini(msg);
    return false;
  }
  // descriptions
  if (!rosidl_runtime_c__String__Sequence__init(&msg->descriptions, 0)) {
    moveit_msgs__msg__PlannerParams__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlannerParams__fini(moveit_msgs__msg__PlannerParams * msg)
{
  if (!msg) {
    return;
  }
  // keys
  rosidl_runtime_c__String__Sequence__fini(&msg->keys);
  // values
  rosidl_runtime_c__String__Sequence__fini(&msg->values);
  // descriptions
  rosidl_runtime_c__String__Sequence__fini(&msg->descriptions);
}

bool
moveit_msgs__msg__PlannerParams__are_equal(const moveit_msgs__msg__PlannerParams * lhs, const moveit_msgs__msg__PlannerParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // keys
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->keys), &(rhs->keys)))
  {
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // descriptions
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->descriptions), &(rhs->descriptions)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlannerParams__copy(
  const moveit_msgs__msg__PlannerParams * input,
  moveit_msgs__msg__PlannerParams * output)
{
  if (!input || !output) {
    return false;
  }
  // keys
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->keys), &(output->keys)))
  {
    return false;
  }
  // values
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // descriptions
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->descriptions), &(output->descriptions)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__PlannerParams *
moveit_msgs__msg__PlannerParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerParams * msg = (moveit_msgs__msg__PlannerParams *)allocator.allocate(sizeof(moveit_msgs__msg__PlannerParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlannerParams));
  bool success = moveit_msgs__msg__PlannerParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlannerParams__destroy(moveit_msgs__msg__PlannerParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__PlannerParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__PlannerParams__Sequence__init(moveit_msgs__msg__PlannerParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerParams * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__PlannerParams *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__PlannerParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlannerParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlannerParams__fini(&data[i - 1]);
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
moveit_msgs__msg__PlannerParams__Sequence__fini(moveit_msgs__msg__PlannerParams__Sequence * array)
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
      moveit_msgs__msg__PlannerParams__fini(&array->data[i]);
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

moveit_msgs__msg__PlannerParams__Sequence *
moveit_msgs__msg__PlannerParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerParams__Sequence * array = (moveit_msgs__msg__PlannerParams__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__PlannerParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlannerParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlannerParams__Sequence__destroy(moveit_msgs__msg__PlannerParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__PlannerParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__PlannerParams__Sequence__are_equal(const moveit_msgs__msg__PlannerParams__Sequence * lhs, const moveit_msgs__msg__PlannerParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlannerParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlannerParams__Sequence__copy(
  const moveit_msgs__msg__PlannerParams__Sequence * input,
  moveit_msgs__msg__PlannerParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlannerParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__PlannerParams * data =
      (moveit_msgs__msg__PlannerParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlannerParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlannerParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__PlannerParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
