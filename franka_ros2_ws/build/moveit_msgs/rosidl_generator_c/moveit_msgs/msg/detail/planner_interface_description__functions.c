// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlannerInterfaceDescription.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planner_interface_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `pipeline_id`
// Member `planner_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__msg__PlannerInterfaceDescription__init(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__init(&msg->pipeline_id)) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
    return false;
  }
  // planner_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->planner_ids, 0)) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__fini(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pipeline_id
  rosidl_runtime_c__String__fini(&msg->pipeline_id);
  // planner_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->planner_ids);
}

bool
moveit_msgs__msg__PlannerInterfaceDescription__are_equal(const moveit_msgs__msg__PlannerInterfaceDescription * lhs, const moveit_msgs__msg__PlannerInterfaceDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pipeline_id), &(rhs->pipeline_id)))
  {
    return false;
  }
  // planner_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->planner_ids), &(rhs->planner_ids)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlannerInterfaceDescription__copy(
  const moveit_msgs__msg__PlannerInterfaceDescription * input,
  moveit_msgs__msg__PlannerInterfaceDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pipeline_id
  if (!rosidl_runtime_c__String__copy(
      &(input->pipeline_id), &(output->pipeline_id)))
  {
    return false;
  }
  // planner_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->planner_ids), &(output->planner_ids)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__PlannerInterfaceDescription *
moveit_msgs__msg__PlannerInterfaceDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerInterfaceDescription * msg = (moveit_msgs__msg__PlannerInterfaceDescription *)allocator.allocate(sizeof(moveit_msgs__msg__PlannerInterfaceDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlannerInterfaceDescription));
  bool success = moveit_msgs__msg__PlannerInterfaceDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__destroy(moveit_msgs__msg__PlannerInterfaceDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__PlannerInterfaceDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerInterfaceDescription * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__PlannerInterfaceDescription *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__PlannerInterfaceDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlannerInterfaceDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlannerInterfaceDescription__fini(&data[i - 1]);
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
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array)
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
      moveit_msgs__msg__PlannerInterfaceDescription__fini(&array->data[i]);
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

moveit_msgs__msg__PlannerInterfaceDescription__Sequence *
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array = (moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__PlannerInterfaceDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__destroy(moveit_msgs__msg__PlannerInterfaceDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__are_equal(const moveit_msgs__msg__PlannerInterfaceDescription__Sequence * lhs, const moveit_msgs__msg__PlannerInterfaceDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlannerInterfaceDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlannerInterfaceDescription__Sequence__copy(
  const moveit_msgs__msg__PlannerInterfaceDescription__Sequence * input,
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlannerInterfaceDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__PlannerInterfaceDescription * data =
      (moveit_msgs__msg__PlannerInterfaceDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlannerInterfaceDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlannerInterfaceDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__PlannerInterfaceDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
