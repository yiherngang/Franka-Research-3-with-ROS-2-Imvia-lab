// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `planning_scene_diff`
#include "moveit_msgs/msg/detail/planning_scene__functions.h"

bool
moveit_msgs__msg__PlanningOptions__init(moveit_msgs__msg__PlanningOptions * msg)
{
  if (!msg) {
    return false;
  }
  // planning_scene_diff
  if (!moveit_msgs__msg__PlanningScene__init(&msg->planning_scene_diff)) {
    moveit_msgs__msg__PlanningOptions__fini(msg);
    return false;
  }
  // plan_only
  // look_around
  // look_around_attempts
  // max_safe_execution_cost
  // replan
  // replan_attempts
  // replan_delay
  return true;
}

void
moveit_msgs__msg__PlanningOptions__fini(moveit_msgs__msg__PlanningOptions * msg)
{
  if (!msg) {
    return;
  }
  // planning_scene_diff
  moveit_msgs__msg__PlanningScene__fini(&msg->planning_scene_diff);
  // plan_only
  // look_around
  // look_around_attempts
  // max_safe_execution_cost
  // replan
  // replan_attempts
  // replan_delay
}

bool
moveit_msgs__msg__PlanningOptions__are_equal(const moveit_msgs__msg__PlanningOptions * lhs, const moveit_msgs__msg__PlanningOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planning_scene_diff
  if (!moveit_msgs__msg__PlanningScene__are_equal(
      &(lhs->planning_scene_diff), &(rhs->planning_scene_diff)))
  {
    return false;
  }
  // plan_only
  if (lhs->plan_only != rhs->plan_only) {
    return false;
  }
  // look_around
  if (lhs->look_around != rhs->look_around) {
    return false;
  }
  // look_around_attempts
  if (lhs->look_around_attempts != rhs->look_around_attempts) {
    return false;
  }
  // max_safe_execution_cost
  if (lhs->max_safe_execution_cost != rhs->max_safe_execution_cost) {
    return false;
  }
  // replan
  if (lhs->replan != rhs->replan) {
    return false;
  }
  // replan_attempts
  if (lhs->replan_attempts != rhs->replan_attempts) {
    return false;
  }
  // replan_delay
  if (lhs->replan_delay != rhs->replan_delay) {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__PlanningOptions__copy(
  const moveit_msgs__msg__PlanningOptions * input,
  moveit_msgs__msg__PlanningOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // planning_scene_diff
  if (!moveit_msgs__msg__PlanningScene__copy(
      &(input->planning_scene_diff), &(output->planning_scene_diff)))
  {
    return false;
  }
  // plan_only
  output->plan_only = input->plan_only;
  // look_around
  output->look_around = input->look_around;
  // look_around_attempts
  output->look_around_attempts = input->look_around_attempts;
  // max_safe_execution_cost
  output->max_safe_execution_cost = input->max_safe_execution_cost;
  // replan
  output->replan = input->replan;
  // replan_attempts
  output->replan_attempts = input->replan_attempts;
  // replan_delay
  output->replan_delay = input->replan_delay;
  return true;
}

moveit_msgs__msg__PlanningOptions *
moveit_msgs__msg__PlanningOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningOptions * msg = (moveit_msgs__msg__PlanningOptions *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__PlanningOptions));
  bool success = moveit_msgs__msg__PlanningOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__PlanningOptions__destroy(moveit_msgs__msg__PlanningOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__PlanningOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__PlanningOptions__Sequence__init(moveit_msgs__msg__PlanningOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningOptions * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__PlanningOptions *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__PlanningOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__PlanningOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__PlanningOptions__fini(&data[i - 1]);
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
moveit_msgs__msg__PlanningOptions__Sequence__fini(moveit_msgs__msg__PlanningOptions__Sequence * array)
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
      moveit_msgs__msg__PlanningOptions__fini(&array->data[i]);
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

moveit_msgs__msg__PlanningOptions__Sequence *
moveit_msgs__msg__PlanningOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__PlanningOptions__Sequence * array = (moveit_msgs__msg__PlanningOptions__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__PlanningOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__PlanningOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__PlanningOptions__Sequence__destroy(moveit_msgs__msg__PlanningOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__PlanningOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__PlanningOptions__Sequence__are_equal(const moveit_msgs__msg__PlanningOptions__Sequence * lhs, const moveit_msgs__msg__PlanningOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__PlanningOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__PlanningOptions__Sequence__copy(
  const moveit_msgs__msg__PlanningOptions__Sequence * input,
  moveit_msgs__msg__PlanningOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__PlanningOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__PlanningOptions * data =
      (moveit_msgs__msg__PlanningOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__PlanningOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__PlanningOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__PlanningOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
