// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/Grasp.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/grasp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `allowed_touch_objects`
#include "rosidl_runtime_c/string_functions.h"
// Member `pre_grasp_posture`
// Member `grasp_posture`
#include "trajectory_msgs/msg/detail/joint_trajectory__functions.h"
// Member `grasp_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"
// Member `pre_grasp_approach`
// Member `post_grasp_retreat`
// Member `post_place_retreat`
#include "moveit_msgs/msg/detail/gripper_translation__functions.h"

bool
moveit_msgs__msg__Grasp__init(moveit_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // pre_grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->pre_grasp_posture)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->grasp_posture)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->grasp_pose)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // grasp_quality
  // pre_grasp_approach
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->pre_grasp_approach)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // post_grasp_retreat
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->post_grasp_retreat)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__init(&msg->post_place_retreat)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  // max_contact_force
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__init(&msg->allowed_touch_objects, 0)) {
    moveit_msgs__msg__Grasp__fini(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__msg__Grasp__fini(moveit_msgs__msg__Grasp * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // pre_grasp_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->pre_grasp_posture);
  // grasp_posture
  trajectory_msgs__msg__JointTrajectory__fini(&msg->grasp_posture);
  // grasp_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->grasp_pose);
  // grasp_quality
  // pre_grasp_approach
  moveit_msgs__msg__GripperTranslation__fini(&msg->pre_grasp_approach);
  // post_grasp_retreat
  moveit_msgs__msg__GripperTranslation__fini(&msg->post_grasp_retreat);
  // post_place_retreat
  moveit_msgs__msg__GripperTranslation__fini(&msg->post_place_retreat);
  // max_contact_force
  // allowed_touch_objects
  rosidl_runtime_c__String__Sequence__fini(&msg->allowed_touch_objects);
}

bool
moveit_msgs__msg__Grasp__are_equal(const moveit_msgs__msg__Grasp * lhs, const moveit_msgs__msg__Grasp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // pre_grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->pre_grasp_posture), &(rhs->pre_grasp_posture)))
  {
    return false;
  }
  // grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__are_equal(
      &(lhs->grasp_posture), &(rhs->grasp_posture)))
  {
    return false;
  }
  // grasp_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->grasp_pose), &(rhs->grasp_pose)))
  {
    return false;
  }
  // grasp_quality
  if (lhs->grasp_quality != rhs->grasp_quality) {
    return false;
  }
  // pre_grasp_approach
  if (!moveit_msgs__msg__GripperTranslation__are_equal(
      &(lhs->pre_grasp_approach), &(rhs->pre_grasp_approach)))
  {
    return false;
  }
  // post_grasp_retreat
  if (!moveit_msgs__msg__GripperTranslation__are_equal(
      &(lhs->post_grasp_retreat), &(rhs->post_grasp_retreat)))
  {
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__are_equal(
      &(lhs->post_place_retreat), &(rhs->post_place_retreat)))
  {
    return false;
  }
  // max_contact_force
  if (lhs->max_contact_force != rhs->max_contact_force) {
    return false;
  }
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->allowed_touch_objects), &(rhs->allowed_touch_objects)))
  {
    return false;
  }
  return true;
}

bool
moveit_msgs__msg__Grasp__copy(
  const moveit_msgs__msg__Grasp * input,
  moveit_msgs__msg__Grasp * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // pre_grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->pre_grasp_posture), &(output->pre_grasp_posture)))
  {
    return false;
  }
  // grasp_posture
  if (!trajectory_msgs__msg__JointTrajectory__copy(
      &(input->grasp_posture), &(output->grasp_posture)))
  {
    return false;
  }
  // grasp_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->grasp_pose), &(output->grasp_pose)))
  {
    return false;
  }
  // grasp_quality
  output->grasp_quality = input->grasp_quality;
  // pre_grasp_approach
  if (!moveit_msgs__msg__GripperTranslation__copy(
      &(input->pre_grasp_approach), &(output->pre_grasp_approach)))
  {
    return false;
  }
  // post_grasp_retreat
  if (!moveit_msgs__msg__GripperTranslation__copy(
      &(input->post_grasp_retreat), &(output->post_grasp_retreat)))
  {
    return false;
  }
  // post_place_retreat
  if (!moveit_msgs__msg__GripperTranslation__copy(
      &(input->post_place_retreat), &(output->post_place_retreat)))
  {
    return false;
  }
  // max_contact_force
  output->max_contact_force = input->max_contact_force;
  // allowed_touch_objects
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->allowed_touch_objects), &(output->allowed_touch_objects)))
  {
    return false;
  }
  return true;
}

moveit_msgs__msg__Grasp *
moveit_msgs__msg__Grasp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__Grasp * msg = (moveit_msgs__msg__Grasp *)allocator.allocate(sizeof(moveit_msgs__msg__Grasp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__Grasp));
  bool success = moveit_msgs__msg__Grasp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__Grasp__destroy(moveit_msgs__msg__Grasp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    moveit_msgs__msg__Grasp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
moveit_msgs__msg__Grasp__Sequence__init(moveit_msgs__msg__Grasp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__Grasp * data = NULL;

  if (size) {
    data = (moveit_msgs__msg__Grasp *)allocator.zero_allocate(size, sizeof(moveit_msgs__msg__Grasp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__Grasp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__Grasp__fini(&data[i - 1]);
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
moveit_msgs__msg__Grasp__Sequence__fini(moveit_msgs__msg__Grasp__Sequence * array)
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
      moveit_msgs__msg__Grasp__fini(&array->data[i]);
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

moveit_msgs__msg__Grasp__Sequence *
moveit_msgs__msg__Grasp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  moveit_msgs__msg__Grasp__Sequence * array = (moveit_msgs__msg__Grasp__Sequence *)allocator.allocate(sizeof(moveit_msgs__msg__Grasp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__Grasp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__Grasp__Sequence__destroy(moveit_msgs__msg__Grasp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    moveit_msgs__msg__Grasp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
moveit_msgs__msg__Grasp__Sequence__are_equal(const moveit_msgs__msg__Grasp__Sequence * lhs, const moveit_msgs__msg__Grasp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!moveit_msgs__msg__Grasp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
moveit_msgs__msg__Grasp__Sequence__copy(
  const moveit_msgs__msg__Grasp__Sequence * input,
  moveit_msgs__msg__Grasp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(moveit_msgs__msg__Grasp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    moveit_msgs__msg__Grasp * data =
      (moveit_msgs__msg__Grasp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!moveit_msgs__msg__Grasp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          moveit_msgs__msg__Grasp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!moveit_msgs__msg__Grasp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
