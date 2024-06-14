// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__init(moveit_msgs__srv__QueryPlannerInterfaces_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(moveit_msgs__srv__QueryPlannerInterfaces_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__are_equal(const moveit_msgs__srv__QueryPlannerInterfaces_Request * lhs, const moveit_msgs__srv__QueryPlannerInterfaces_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__copy(
  const moveit_msgs__srv__QueryPlannerInterfaces_Request * input,
  moveit_msgs__srv__QueryPlannerInterfaces_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

moveit_msgs__srv__QueryPlannerInterfaces_Request *
moveit_msgs__srv__QueryPlannerInterfaces_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Request * msg = (moveit_msgs__srv__QueryPlannerInterfaces_Request *)allocator.allocate(sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request));
  bool success = moveit_msgs__srv__QueryPlannerInterfaces_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Request__destroy(moveit_msgs__srv__QueryPlannerInterfaces_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__init(moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__QueryPlannerInterfaces_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__QueryPlannerInterfaces_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__fini(moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * array)
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
      moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(&array->data[i]);
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

moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence *
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * array = (moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__destroy(moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__are_equal(const moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * lhs, const moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__QueryPlannerInterfaces_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence__copy(
  const moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * input,
  moveit_msgs__srv__QueryPlannerInterfaces_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__QueryPlannerInterfaces_Request * data =
      (moveit_msgs__srv__QueryPlannerInterfaces_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__QueryPlannerInterfaces_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__QueryPlannerInterfaces_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `planner_interfaces`
#include "moveit_msgs/msg/detail/planner_interface_description__functions.h"

bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__init(moveit_msgs__srv__QueryPlannerInterfaces_Response * msg)
{
  if (!msg) {
    return false;
  }
  // planner_interfaces
  if (!moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(&msg->planner_interfaces, 0)) {
    moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(moveit_msgs__srv__QueryPlannerInterfaces_Response * msg)
{
  if (!msg) {
    return;
  }
  // planner_interfaces
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(&msg->planner_interfaces);
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__are_equal(const moveit_msgs__srv__QueryPlannerInterfaces_Response * lhs, const moveit_msgs__srv__QueryPlannerInterfaces_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // planner_interfaces
  if (!moveit_msgs__msg__PlannerInterfaceDescription__Sequence__are_equal(
      &(lhs->planner_interfaces), &(rhs->planner_interfaces)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__copy(
  const moveit_msgs__srv__QueryPlannerInterfaces_Response * input,
  moveit_msgs__srv__QueryPlannerInterfaces_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // planner_interfaces
  if (!moveit_msgs__msg__PlannerInterfaceDescription__Sequence__copy(
      &(input->planner_interfaces), &(output->planner_interfaces)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__QueryPlannerInterfaces_Response *
moveit_msgs__srv__QueryPlannerInterfaces_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Response * msg = (moveit_msgs__srv__QueryPlannerInterfaces_Response *)allocator.allocate(sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response));
  bool success = moveit_msgs__srv__QueryPlannerInterfaces_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Response__destroy(moveit_msgs__srv__QueryPlannerInterfaces_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__init(moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__QueryPlannerInterfaces_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__QueryPlannerInterfaces_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__fini(moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * array)
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
      moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(&array->data[i]);
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

moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence *
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * array = (moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__destroy(moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__are_equal(const moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * lhs, const moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__QueryPlannerInterfaces_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence__copy(
  const moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * input,
  moveit_msgs__srv__QueryPlannerInterfaces_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__QueryPlannerInterfaces_Response * data =
      (moveit_msgs__srv__QueryPlannerInterfaces_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__QueryPlannerInterfaces_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__QueryPlannerInterfaces_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
