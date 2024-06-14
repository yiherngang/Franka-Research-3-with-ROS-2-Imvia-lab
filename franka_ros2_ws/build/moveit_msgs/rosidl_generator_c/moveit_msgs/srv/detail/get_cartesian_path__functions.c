// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_cartesian_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `start_state`
#include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `group_name`
// Member `link_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `path_constraints`
#include "moveit_msgs/msg/detail/constraints__functions.h"

bool
moveit_msgs__srv__GetCartesianPath_Request__init(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__init(&msg->link_name)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->waypoints, 0)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  // max_step
  // jump_threshold
  // prismatic_jump_threshold
  // revolute_jump_threshold
  // avoid_collisions
  // path_constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->path_constraints)) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetCartesianPath_Request__fini(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // link_name
  rosidl_runtime_c__String__fini(&msg->link_name);
  // waypoints
  geometry_msgs__msg__Pose__Sequence__fini(&msg->waypoints);
  // max_step
  // jump_threshold
  // prismatic_jump_threshold
  // revolute_jump_threshold
  // avoid_collisions
  // path_constraints
  moveit_msgs__msg__Constraints__fini(&msg->path_constraints);
}

bool
moveit_msgs__srv__GetCartesianPath_Request__are_equal(const moveit_msgs__srv__GetCartesianPath_Request * lhs, const moveit_msgs__srv__GetCartesianPath_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->start_state), &(rhs->start_state)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_name), &(rhs->link_name)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // max_step
  if (lhs->max_step != rhs->max_step) {
    return false;
  }
  // jump_threshold
  if (lhs->jump_threshold != rhs->jump_threshold) {
    return false;
  }
  // prismatic_jump_threshold
  if (lhs->prismatic_jump_threshold != rhs->prismatic_jump_threshold) {
    return false;
  }
  // revolute_jump_threshold
  if (lhs->revolute_jump_threshold != rhs->revolute_jump_threshold) {
    return false;
  }
  // avoid_collisions
  if (lhs->avoid_collisions != rhs->avoid_collisions) {
    return false;
  }
  // path_constraints
  if (!moveit_msgs__msg__Constraints__are_equal(
      &(lhs->path_constraints), &(rhs->path_constraints)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetCartesianPath_Request__copy(
  const moveit_msgs__srv__GetCartesianPath_Request * input,
  moveit_msgs__srv__GetCartesianPath_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->start_state), &(output->start_state)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // link_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link_name), &(output->link_name)))
  {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // max_step
  output->max_step = input->max_step;
  // jump_threshold
  output->jump_threshold = input->jump_threshold;
  // prismatic_jump_threshold
  output->prismatic_jump_threshold = input->prismatic_jump_threshold;
  // revolute_jump_threshold
  output->revolute_jump_threshold = input->revolute_jump_threshold;
  // avoid_collisions
  output->avoid_collisions = input->avoid_collisions;
  // path_constraints
  if (!moveit_msgs__msg__Constraints__copy(
      &(input->path_constraints), &(output->path_constraints)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetCartesianPath_Request *
moveit_msgs__srv__GetCartesianPath_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Request * msg = (moveit_msgs__srv__GetCartesianPath_Request *)allocator.allocate(sizeof(moveit_msgs__srv__GetCartesianPath_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetCartesianPath_Request));
  bool success = moveit_msgs__srv__GetCartesianPath_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetCartesianPath_Request__destroy(moveit_msgs__srv__GetCartesianPath_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GetCartesianPath_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GetCartesianPath_Request__Sequence__init(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Request * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GetCartesianPath_Request *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GetCartesianPath_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetCartesianPath_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetCartesianPath_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__GetCartesianPath_Request__Sequence__fini(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array)
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
      moveit_msgs__srv__GetCartesianPath_Request__fini(&array->data[i]);
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

moveit_msgs__srv__GetCartesianPath_Request__Sequence *
moveit_msgs__srv__GetCartesianPath_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Request__Sequence * array = (moveit_msgs__srv__GetCartesianPath_Request__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GetCartesianPath_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetCartesianPath_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetCartesianPath_Request__Sequence__destroy(moveit_msgs__srv__GetCartesianPath_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GetCartesianPath_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GetCartesianPath_Request__Sequence__are_equal(const moveit_msgs__srv__GetCartesianPath_Request__Sequence * lhs, const moveit_msgs__srv__GetCartesianPath_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetCartesianPath_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetCartesianPath_Request__Sequence__copy(
  const moveit_msgs__srv__GetCartesianPath_Request__Sequence * input,
  moveit_msgs__srv__GetCartesianPath_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetCartesianPath_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GetCartesianPath_Request * data =
      (moveit_msgs__srv__GetCartesianPath_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetCartesianPath_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetCartesianPath_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GetCartesianPath_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `start_state`
// already included above
// #include "moveit_msgs/msg/detail/robot_state__functions.h"
// Member `solution`
#include "moveit_msgs/msg/detail/robot_trajectory__functions.h"
// Member `error_code`
#include "moveit_msgs/msg/detail/move_it_error_codes__functions.h"

bool
moveit_msgs__srv__GetCartesianPath_Response__init(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  if (!msg) {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__init(&msg->start_state)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  // solution
  if (!moveit_msgs__msg__RobotTrajectory__init(&msg->solution)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  // fraction
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__GetCartesianPath_Response__fini(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  if (!msg) {
    return;
  }
  // start_state
  moveit_msgs__msg__RobotState__fini(&msg->start_state);
  // solution
  moveit_msgs__msg__RobotTrajectory__fini(&msg->solution);
  // fraction
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
}

bool
moveit_msgs__srv__GetCartesianPath_Response__are_equal(const moveit_msgs__srv__GetCartesianPath_Response * lhs, const moveit_msgs__srv__GetCartesianPath_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__are_equal(
      &(lhs->start_state), &(rhs->start_state)))
  {
    return false;
  }
  // solution
  if (!moveit_msgs__msg__RobotTrajectory__are_equal(
      &(lhs->solution), &(rhs->solution)))
  {
    return false;
  }
  // fraction
  if (lhs->fraction != rhs->fraction) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__srv__GetCartesianPath_Response__copy(
  const moveit_msgs__srv__GetCartesianPath_Response * input,
  moveit_msgs__srv__GetCartesianPath_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // start_state
  if (!moveit_msgs__msg__RobotState__copy(
      &(input->start_state), &(output->start_state)))
  {
    return false;
  }
  // solution
  if (!moveit_msgs__msg__RobotTrajectory__copy(
      &(input->solution), &(output->solution)))
  {
    return false;
  }
  // fraction
  output->fraction = input->fraction;
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  return true;
}

moveit_msgs__srv__GetCartesianPath_Response *
moveit_msgs__srv__GetCartesianPath_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Response * msg = (moveit_msgs__srv__GetCartesianPath_Response *)allocator.allocate(sizeof(moveit_msgs__srv__GetCartesianPath_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__GetCartesianPath_Response));
  bool success = moveit_msgs__srv__GetCartesianPath_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__GetCartesianPath_Response__destroy(moveit_msgs__srv__GetCartesianPath_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__srv__GetCartesianPath_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__srv__GetCartesianPath_Response__Sequence__init(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Response * data = NULL;

  if (size) {
    data = (moveit_msgs__srv__GetCartesianPath_Response *)allocator.zero_allocate(size, sizeof(moveit_msgs__srv__GetCartesianPath_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__GetCartesianPath_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__GetCartesianPath_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__GetCartesianPath_Response__Sequence__fini(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array)
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
      moveit_msgs__srv__GetCartesianPath_Response__fini(&array->data[i]);
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

moveit_msgs__srv__GetCartesianPath_Response__Sequence *
moveit_msgs__srv__GetCartesianPath_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__srv__GetCartesianPath_Response__Sequence * array = (moveit_msgs__srv__GetCartesianPath_Response__Sequence *)allocator.allocate(sizeof(moveit_msgs__srv__GetCartesianPath_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__GetCartesianPath_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__GetCartesianPath_Response__Sequence__destroy(moveit_msgs__srv__GetCartesianPath_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__srv__GetCartesianPath_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__srv__GetCartesianPath_Response__Sequence__are_equal(const moveit_msgs__srv__GetCartesianPath_Response__Sequence * lhs, const moveit_msgs__srv__GetCartesianPath_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__srv__GetCartesianPath_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__srv__GetCartesianPath_Response__Sequence__copy(
  const moveit_msgs__srv__GetCartesianPath_Response__Sequence * input,
  moveit_msgs__srv__GetCartesianPath_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__srv__GetCartesianPath_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__srv__GetCartesianPath_Response * data =
      (moveit_msgs__srv__GetCartesianPath_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__srv__GetCartesianPath_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__srv__GetCartesianPath_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__srv__GetCartesianPath_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
