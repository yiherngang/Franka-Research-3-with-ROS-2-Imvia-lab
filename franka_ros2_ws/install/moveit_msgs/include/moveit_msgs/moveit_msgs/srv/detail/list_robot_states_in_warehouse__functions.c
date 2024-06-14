// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `regex`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__init(moveit_msgs__srv__ListRobotStatesInWarehouse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // regex
  if (!rosidl_runtime_c__String__init(&msg->regex)) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(moveit_msgs__srv__ListRobotStatesInWarehouse_Request * msg)
{
  if (!msg) {
    return;
  }
  // regex
  rosidl_runtime_c__String__fini(&msg->regex);
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__are_equal(const moveit_msgs__srv__ListRobotStatesInWarehouse_Request * lhs, const moveit_msgs__srv__ListRobotStatesInWarehouse_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // regex
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->regex), &(rhs->regex)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__copy(
  const moveit_msgs__srv__ListRobotStatesInWarehouse_Request * input,
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // regex
  if (!rosidl_runtime_c__String__copy(
      &(input->regex), &(output->regex)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__ListRobotStatesInWarehouse_Request *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request * msg = (moveit_msgs__srv__ListRobotStatesInWarehouse_Request *)allocator.allocate(sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request));
  bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__destroy(moveit_msgs__srv__ListRobotStatesInWarehouse_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__init(moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__ListRobotStatesInWarehouse_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__fini(moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * array)
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
      moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(&array->data[i]);
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

moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * array = (moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__destroy(moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__are_equal(const moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * lhs, const moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence__copy(
  const moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * input,
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request * data =
      (moveit_msgs__srv__ListRobotStatesInWarehouse_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `states`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__init(moveit_msgs__srv__ListRobotStatesInWarehouse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // states
  if (!rosidl_runtime_c__String__Sequence__init(&msg->states, 0)) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(moveit_msgs__srv__ListRobotStatesInWarehouse_Response * msg)
{
  if (!msg) {
    return;
  }
  // states
  rosidl_runtime_c__String__Sequence__fini(&msg->states);
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__are_equal(const moveit_msgs__srv__ListRobotStatesInWarehouse_Response * lhs, const moveit_msgs__srv__ListRobotStatesInWarehouse_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // states
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->states), &(rhs->states)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__copy(
  const moveit_msgs__srv__ListRobotStatesInWarehouse_Response * input,
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // states
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->states), &(output->states)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__ListRobotStatesInWarehouse_Response *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response * msg = (moveit_msgs__srv__ListRobotStatesInWarehouse_Response *)allocator.allocate(sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response));
  bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__destroy(moveit_msgs__srv__ListRobotStatesInWarehouse_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__init(moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__ListRobotStatesInWarehouse_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__fini(moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * array)
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
      moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(&array->data[i]);
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

moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence *
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * array = (moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__destroy(moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__are_equal(const moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * lhs, const moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence__copy(
  const moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * input,
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response * data =
      (moveit_msgs__srv__ListRobotStatesInWarehouse_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
