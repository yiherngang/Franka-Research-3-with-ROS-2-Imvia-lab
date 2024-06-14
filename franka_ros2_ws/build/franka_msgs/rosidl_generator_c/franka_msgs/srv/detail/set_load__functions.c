// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:srv/SetLoad.idl
// generated code does not contain a copyright notice
#include "franka_msgs/srv/detail/set_load__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
franka_msgs__srv__SetLoad_Request__init(franka_msgs__srv__SetLoad_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mass
  // center_of_mass
  // load_inertia
  return true;
}

void
franka_msgs__srv__SetLoad_Request__fini(franka_msgs__srv__SetLoad_Request * msg)
{
  if (!msg) {
    return;
  }
  // mass
  // center_of_mass
  // load_inertia
}

bool
franka_msgs__srv__SetLoad_Request__are_equal(const franka_msgs__srv__SetLoad_Request * lhs, const franka_msgs__srv__SetLoad_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mass
  if (lhs->mass != rhs->mass) {
    return false;
  }
  // center_of_mass
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->center_of_mass[i] != rhs->center_of_mass[i]) {
      return false;
    }
  }
  // load_inertia
  for (size_t i = 0; i < 9; ++i) {
    if (lhs->load_inertia[i] != rhs->load_inertia[i]) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__srv__SetLoad_Request__copy(
  const franka_msgs__srv__SetLoad_Request * input,
  franka_msgs__srv__SetLoad_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mass
  output->mass = input->mass;
  // center_of_mass
  for (size_t i = 0; i < 3; ++i) {
    output->center_of_mass[i] = input->center_of_mass[i];
  }
  // load_inertia
  for (size_t i = 0; i < 9; ++i) {
    output->load_inertia[i] = input->load_inertia[i];
  }
  return true;
}

franka_msgs__srv__SetLoad_Request *
franka_msgs__srv__SetLoad_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Request * msg = (franka_msgs__srv__SetLoad_Request *)allocator.allocate(sizeof(franka_msgs__srv__SetLoad_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__srv__SetLoad_Request));
  bool success = franka_msgs__srv__SetLoad_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__srv__SetLoad_Request__destroy(franka_msgs__srv__SetLoad_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__srv__SetLoad_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__srv__SetLoad_Request__Sequence__init(franka_msgs__srv__SetLoad_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Request * data = NULL;

  if (size) {
    data = (franka_msgs__srv__SetLoad_Request *)allocator.zero_allocate(size, sizeof(franka_msgs__srv__SetLoad_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__srv__SetLoad_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__srv__SetLoad_Request__fini(&data[i - 1]);
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
franka_msgs__srv__SetLoad_Request__Sequence__fini(franka_msgs__srv__SetLoad_Request__Sequence * array)
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
      franka_msgs__srv__SetLoad_Request__fini(&array->data[i]);
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

franka_msgs__srv__SetLoad_Request__Sequence *
franka_msgs__srv__SetLoad_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Request__Sequence * array = (franka_msgs__srv__SetLoad_Request__Sequence *)allocator.allocate(sizeof(franka_msgs__srv__SetLoad_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__srv__SetLoad_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__srv__SetLoad_Request__Sequence__destroy(franka_msgs__srv__SetLoad_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__srv__SetLoad_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__srv__SetLoad_Request__Sequence__are_equal(const franka_msgs__srv__SetLoad_Request__Sequence * lhs, const franka_msgs__srv__SetLoad_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__srv__SetLoad_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__srv__SetLoad_Request__Sequence__copy(
  const franka_msgs__srv__SetLoad_Request__Sequence * input,
  franka_msgs__srv__SetLoad_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__srv__SetLoad_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__srv__SetLoad_Request * data =
      (franka_msgs__srv__SetLoad_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__srv__SetLoad_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__srv__SetLoad_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__srv__SetLoad_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
franka_msgs__srv__SetLoad_Response__init(franka_msgs__srv__SetLoad_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    franka_msgs__srv__SetLoad_Response__fini(msg);
    return false;
  }
  return true;
}

void
franka_msgs__srv__SetLoad_Response__fini(franka_msgs__srv__SetLoad_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
franka_msgs__srv__SetLoad_Response__are_equal(const franka_msgs__srv__SetLoad_Response * lhs, const franka_msgs__srv__SetLoad_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
franka_msgs__srv__SetLoad_Response__copy(
  const franka_msgs__srv__SetLoad_Response * input,
  franka_msgs__srv__SetLoad_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

franka_msgs__srv__SetLoad_Response *
franka_msgs__srv__SetLoad_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Response * msg = (franka_msgs__srv__SetLoad_Response *)allocator.allocate(sizeof(franka_msgs__srv__SetLoad_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__srv__SetLoad_Response));
  bool success = franka_msgs__srv__SetLoad_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__srv__SetLoad_Response__destroy(franka_msgs__srv__SetLoad_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__srv__SetLoad_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__srv__SetLoad_Response__Sequence__init(franka_msgs__srv__SetLoad_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Response * data = NULL;

  if (size) {
    data = (franka_msgs__srv__SetLoad_Response *)allocator.zero_allocate(size, sizeof(franka_msgs__srv__SetLoad_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__srv__SetLoad_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__srv__SetLoad_Response__fini(&data[i - 1]);
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
franka_msgs__srv__SetLoad_Response__Sequence__fini(franka_msgs__srv__SetLoad_Response__Sequence * array)
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
      franka_msgs__srv__SetLoad_Response__fini(&array->data[i]);
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

franka_msgs__srv__SetLoad_Response__Sequence *
franka_msgs__srv__SetLoad_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__srv__SetLoad_Response__Sequence * array = (franka_msgs__srv__SetLoad_Response__Sequence *)allocator.allocate(sizeof(franka_msgs__srv__SetLoad_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__srv__SetLoad_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__srv__SetLoad_Response__Sequence__destroy(franka_msgs__srv__SetLoad_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__srv__SetLoad_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__srv__SetLoad_Response__Sequence__are_equal(const franka_msgs__srv__SetLoad_Response__Sequence * lhs, const franka_msgs__srv__SetLoad_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__srv__SetLoad_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__srv__SetLoad_Response__Sequence__copy(
  const franka_msgs__srv__SetLoad_Response__Sequence * input,
  franka_msgs__srv__SetLoad_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__srv__SetLoad_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__srv__SetLoad_Response * data =
      (franka_msgs__srv__SetLoad_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__srv__SetLoad_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__srv__SetLoad_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__srv__SetLoad_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
