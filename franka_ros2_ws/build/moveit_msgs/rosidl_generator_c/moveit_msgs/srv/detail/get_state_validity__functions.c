// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_state_validity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"

bool
moveit_msgs__srv__GetStateValidity_Request__init(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__init(&msg->robot_state)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  // constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->constraints)) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetStateValidity_Request__fini(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_state
  moveit_msgs__msg__RobotState__fini(&msg->robot_state);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // constraints
  moveit_msgs__msg__Constraints__fini(&msg->constraints);
}

bool
moveit_msgs__srv__GetStateValidity_Request__are_equal(const moveit_msgs__srv__GetStateValidity_Request * lhs, const moveit_msgs__srv__GetStateValidity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->robot_state), &(rhs->robot_state)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // constraints
  if (!moveit_msgs__msg__Constraints__are_equal(
      &(lhs->constraints), &(rhs->constraints)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetStateValidity_Request__copy(
  const moveit_msgs__srv__GetStateValidity_Request * input,
  moveit_msgs__srv__GetStateValidity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->robot_state), &(output->robot_state)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // constraints
  if (!moveit_msgs__msg__Constraints__copy(
      &(input->constraints), &(output->constraints)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetStateValidity_Request *
moveit_msgs__srv__GetStateValidity_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Request * msg = (moveit_msgs__srv__GetStateValidity_Request *)allocator.allocate(sizeof(moveit_msgs__srv__GetStateValidity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetStateValidity_Request));
  bool success = moveit_msgs__srv__GetStateValidity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetStateValidity_Request__destroy(moveit_msgs__srv__GetStateValidity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GetStateValidity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GetStateValidity_Request__Sequence__init(moveit_msgs__srv__GetStateValidity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GetStateValidity_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GetStateValidity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetStateValidity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetStateValidity_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetStateValidity_Request__Sequence__fini(moveit_msgs__srv__GetStateValidity_Request__Sequence * array)
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
      moveit_msgs__srv__GetStateValidity_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetStateValidity_Request__Sequence *
moveit_msgs__srv__GetStateValidity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Request__Sequence * array = (moveit_msgs__srv__GetStateValidity_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GetStateValidity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetStateValidity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetStateValidity_Request__Sequence__destroy(moveit_msgs__srv__GetStateValidity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GetStateValidity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GetStateValidity_Request__Sequence__are_equal(const moveit_msgs__srv__GetStateValidity_Request__Sequence * lhs, const moveit_msgs__srv__GetStateValidity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetStateValidity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetStateValidity_Request__Sequence__copy(
  const moveit_msgs__srv__GetStateValidity_Request__Sequence * input,
  moveit_msgs__srv__GetStateValidity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetStateValidity_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GetStateValidity_Request * data =
      (moveit_msgs__srv__GetStateValidity_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetStateValidity_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetStateValidity_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GetStateValidity_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `contacts`
#include "moveit_msgs/msg/detail/contact_information__functions.h"
// Member `cost_sources`
#include "moveit_msgs/msg/detail/cost_source__functions.h"
// Member `constraint_result`
#include "moveit_msgs/msg/detail/constraint_eval_result__functions.h"

bool
moveit_msgs__srv__GetStateValidity_Response__init(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid
  // contacts
  if (!moveit_msgs__msg__ContactInformation__Sequence__init(&msg->contacts, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  // cost_sources
  if (!moveit_msgs__msg__CostSource__Sequence__init(&msg->cost_sources, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  // constraint_result
  if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__init(&msg->constraint_result, 0)) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetStateValidity_Response__fini(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid
  // contacts
  moveit_msgs__msg__ContactInformation__Sequence__fini(&msg->contacts);
  // cost_sources
  moveit_msgs__msg__CostSource__Sequence__fini(&msg->cost_sources);
  // constraint_result
  moveit_msgs__msg__ConstraintEvalResult__Sequence__fini(&msg->constraint_result);
}

bool
moveit_msgs__srv__GetStateValidity_Response__are_equal(const moveit_msgs__srv__GetStateValidity_Response * lhs, const moveit_msgs__srv__GetStateValidity_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid
  if (lhs->valid != rhs->valid) {
    return false;
  }
  // contacts
  if (!moveit_msgs__msg__ContactInformation__Sequence__are_equal(
      &(lhs->contacts), &(rhs->contacts)))
  {
    return false;
  }
  // cost_sources
  if (!moveit_msgs__msg__CostSource__Sequence__are_equal(
      &(lhs->cost_sources), &(rhs->cost_sources)))
  {
    return false;
  }
  // constraint_result
  if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__are_equal(
      &(lhs->constraint_result), &(rhs->constraint_result)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetStateValidity_Response__copy(
  const moveit_msgs__srv__GetStateValidity_Response * input,
  moveit_msgs__srv__GetStateValidity_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid
  output->valid = input->valid;
  // contacts
  if (!moveit_msgs__msg__ContactInformation__Sequence__copy(
      &(input->contacts), &(output->contacts)))
  {
    return false;
  }
  // cost_sources
  if (!moveit_msgs__msg__CostSource__Sequence__copy(
      &(input->cost_sources), &(output->cost_sources)))
  {
    return false;
  }
  // constraint_result
  if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__copy(
      &(input->constraint_result), &(output->constraint_result)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetStateValidity_Response *
moveit_msgs__srv__GetStateValidity_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Response * msg = (moveit_msgs__srv__GetStateValidity_Response *)allocator.allocate(sizeof(moveit_msgs__srv__GetStateValidity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetStateValidity_Response));
  bool success = moveit_msgs__srv__GetStateValidity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetStateValidity_Response__destroy(moveit_msgs__srv__GetStateValidity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GetStateValidity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GetStateValidity_Response__Sequence__init(moveit_msgs__srv__GetStateValidity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GetStateValidity_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GetStateValidity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetStateValidity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetStateValidity_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetStateValidity_Response__Sequence__fini(moveit_msgs__srv__GetStateValidity_Response__Sequence * array)
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
      moveit_msgs__srv__GetStateValidity_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetStateValidity_Response__Sequence *
moveit_msgs__srv__GetStateValidity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetStateValidity_Response__Sequence * array = (moveit_msgs__srv__GetStateValidity_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GetStateValidity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetStateValidity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetStateValidity_Response__Sequence__destroy(moveit_msgs__srv__GetStateValidity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GetStateValidity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GetStateValidity_Response__Sequence__are_equal(const moveit_msgs__srv__GetStateValidity_Response__Sequence * lhs, const moveit_msgs__srv__GetStateValidity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetStateValidity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetStateValidity_Response__Sequence__copy(
  const moveit_msgs__srv__GetStateValidity_Response__Sequence * input,
  moveit_msgs__srv__GetStateValidity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetStateValidity_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GetStateValidity_Response * data =
      (moveit_msgs__srv__GetStateValidity_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetStateValidity_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetStateValidity_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GetStateValidity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
