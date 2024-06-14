// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from franka_msgs:msg/Errors.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/errors__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
franka_msgs__msg__Errors__init(franka_msgs__msg__Errors * msg)
{
  if (!msg) {
    return false;
  }
  // joint_position_limits_violation
  // cartesian_position_limits_violation
  // self_collision_avoidance_violation
  // joint_velocity_violation
  // cartesian_velocity_violation
  // force_control_safety_violation
  // joint_reflex
  // cartesian_reflex
  // max_goal_pose_deviation_violation
  // max_path_pose_deviation_violation
  // cartesian_velocity_profile_safety_violation
  // joint_position_motion_generator_start_pose_invalid
  // joint_motion_generator_position_limits_violation
  // joint_motion_generator_velocity_limits_violation
  // joint_motion_generator_velocity_discontinuity
  // joint_motion_generator_acceleration_discontinuity
  // cartesian_position_motion_generator_start_pose_invalid
  // cartesian_motion_generator_elbow_limit_violation
  // cartesian_motion_generator_velocity_limits_violation
  // cartesian_motion_generator_velocity_discontinuity
  // cartesian_motion_generator_acceleration_discontinuity
  // cartesian_motion_generator_elbow_sign_inconsistent
  // cartesian_motion_generator_start_elbow_invalid
  // cartesian_motion_generator_joint_position_limits_violation
  // cartesian_motion_generator_joint_velocity_limits_violation
  // cartesian_motion_generator_joint_velocity_discontinuity
  // cartesian_motion_generator_joint_acceleration_discontinuity
  // cartesian_position_motion_generator_invalid_frame
  // force_controller_desired_force_tolerance_violation
  // controller_torque_discontinuity
  // start_elbow_sign_inconsistent
  // communication_constraints_violation
  // power_limit_violation
  // joint_p2p_insufficient_torque_for_planning
  // tau_j_range_violation
  // instability_detected
  return true;
}

void
franka_msgs__msg__Errors__fini(franka_msgs__msg__Errors * msg)
{
  if (!msg) {
    return;
  }
  // joint_position_limits_violation
  // cartesian_position_limits_violation
  // self_collision_avoidance_violation
  // joint_velocity_violation
  // cartesian_velocity_violation
  // force_control_safety_violation
  // joint_reflex
  // cartesian_reflex
  // max_goal_pose_deviation_violation
  // max_path_pose_deviation_violation
  // cartesian_velocity_profile_safety_violation
  // joint_position_motion_generator_start_pose_invalid
  // joint_motion_generator_position_limits_violation
  // joint_motion_generator_velocity_limits_violation
  // joint_motion_generator_velocity_discontinuity
  // joint_motion_generator_acceleration_discontinuity
  // cartesian_position_motion_generator_start_pose_invalid
  // cartesian_motion_generator_elbow_limit_violation
  // cartesian_motion_generator_velocity_limits_violation
  // cartesian_motion_generator_velocity_discontinuity
  // cartesian_motion_generator_acceleration_discontinuity
  // cartesian_motion_generator_elbow_sign_inconsistent
  // cartesian_motion_generator_start_elbow_invalid
  // cartesian_motion_generator_joint_position_limits_violation
  // cartesian_motion_generator_joint_velocity_limits_violation
  // cartesian_motion_generator_joint_velocity_discontinuity
  // cartesian_motion_generator_joint_acceleration_discontinuity
  // cartesian_position_motion_generator_invalid_frame
  // force_controller_desired_force_tolerance_violation
  // controller_torque_discontinuity
  // start_elbow_sign_inconsistent
  // communication_constraints_violation
  // power_limit_violation
  // joint_p2p_insufficient_torque_for_planning
  // tau_j_range_violation
  // instability_detected
}

bool
franka_msgs__msg__Errors__are_equal(const franka_msgs__msg__Errors * lhs, const franka_msgs__msg__Errors * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_position_limits_violation
  if (lhs->joint_position_limits_violation != rhs->joint_position_limits_violation) {
    return false;
  }
  // cartesian_position_limits_violation
  if (lhs->cartesian_position_limits_violation != rhs->cartesian_position_limits_violation) {
    return false;
  }
  // self_collision_avoidance_violation
  if (lhs->self_collision_avoidance_violation != rhs->self_collision_avoidance_violation) {
    return false;
  }
  // joint_velocity_violation
  if (lhs->joint_velocity_violation != rhs->joint_velocity_violation) {
    return false;
  }
  // cartesian_velocity_violation
  if (lhs->cartesian_velocity_violation != rhs->cartesian_velocity_violation) {
    return false;
  }
  // force_control_safety_violation
  if (lhs->force_control_safety_violation != rhs->force_control_safety_violation) {
    return false;
  }
  // joint_reflex
  if (lhs->joint_reflex != rhs->joint_reflex) {
    return false;
  }
  // cartesian_reflex
  if (lhs->cartesian_reflex != rhs->cartesian_reflex) {
    return false;
  }
  // max_goal_pose_deviation_violation
  if (lhs->max_goal_pose_deviation_violation != rhs->max_goal_pose_deviation_violation) {
    return false;
  }
  // max_path_pose_deviation_violation
  if (lhs->max_path_pose_deviation_violation != rhs->max_path_pose_deviation_violation) {
    return false;
  }
  // cartesian_velocity_profile_safety_violation
  if (lhs->cartesian_velocity_profile_safety_violation != rhs->cartesian_velocity_profile_safety_violation) {
    return false;
  }
  // joint_position_motion_generator_start_pose_invalid
  if (lhs->joint_position_motion_generator_start_pose_invalid != rhs->joint_position_motion_generator_start_pose_invalid) {
    return false;
  }
  // joint_motion_generator_position_limits_violation
  if (lhs->joint_motion_generator_position_limits_violation != rhs->joint_motion_generator_position_limits_violation) {
    return false;
  }
  // joint_motion_generator_velocity_limits_violation
  if (lhs->joint_motion_generator_velocity_limits_violation != rhs->joint_motion_generator_velocity_limits_violation) {
    return false;
  }
  // joint_motion_generator_velocity_discontinuity
  if (lhs->joint_motion_generator_velocity_discontinuity != rhs->joint_motion_generator_velocity_discontinuity) {
    return false;
  }
  // joint_motion_generator_acceleration_discontinuity
  if (lhs->joint_motion_generator_acceleration_discontinuity != rhs->joint_motion_generator_acceleration_discontinuity) {
    return false;
  }
  // cartesian_position_motion_generator_start_pose_invalid
  if (lhs->cartesian_position_motion_generator_start_pose_invalid != rhs->cartesian_position_motion_generator_start_pose_invalid) {
    return false;
  }
  // cartesian_motion_generator_elbow_limit_violation
  if (lhs->cartesian_motion_generator_elbow_limit_violation != rhs->cartesian_motion_generator_elbow_limit_violation) {
    return false;
  }
  // cartesian_motion_generator_velocity_limits_violation
  if (lhs->cartesian_motion_generator_velocity_limits_violation != rhs->cartesian_motion_generator_velocity_limits_violation) {
    return false;
  }
  // cartesian_motion_generator_velocity_discontinuity
  if (lhs->cartesian_motion_generator_velocity_discontinuity != rhs->cartesian_motion_generator_velocity_discontinuity) {
    return false;
  }
  // cartesian_motion_generator_acceleration_discontinuity
  if (lhs->cartesian_motion_generator_acceleration_discontinuity != rhs->cartesian_motion_generator_acceleration_discontinuity) {
    return false;
  }
  // cartesian_motion_generator_elbow_sign_inconsistent
  if (lhs->cartesian_motion_generator_elbow_sign_inconsistent != rhs->cartesian_motion_generator_elbow_sign_inconsistent) {
    return false;
  }
  // cartesian_motion_generator_start_elbow_invalid
  if (lhs->cartesian_motion_generator_start_elbow_invalid != rhs->cartesian_motion_generator_start_elbow_invalid) {
    return false;
  }
  // cartesian_motion_generator_joint_position_limits_violation
  if (lhs->cartesian_motion_generator_joint_position_limits_violation != rhs->cartesian_motion_generator_joint_position_limits_violation) {
    return false;
  }
  // cartesian_motion_generator_joint_velocity_limits_violation
  if (lhs->cartesian_motion_generator_joint_velocity_limits_violation != rhs->cartesian_motion_generator_joint_velocity_limits_violation) {
    return false;
  }
  // cartesian_motion_generator_joint_velocity_discontinuity
  if (lhs->cartesian_motion_generator_joint_velocity_discontinuity != rhs->cartesian_motion_generator_joint_velocity_discontinuity) {
    return false;
  }
  // cartesian_motion_generator_joint_acceleration_discontinuity
  if (lhs->cartesian_motion_generator_joint_acceleration_discontinuity != rhs->cartesian_motion_generator_joint_acceleration_discontinuity) {
    return false;
  }
  // cartesian_position_motion_generator_invalid_frame
  if (lhs->cartesian_position_motion_generator_invalid_frame != rhs->cartesian_position_motion_generator_invalid_frame) {
    return false;
  }
  // force_controller_desired_force_tolerance_violation
  if (lhs->force_controller_desired_force_tolerance_violation != rhs->force_controller_desired_force_tolerance_violation) {
    return false;
  }
  // controller_torque_discontinuity
  if (lhs->controller_torque_discontinuity != rhs->controller_torque_discontinuity) {
    return false;
  }
  // start_elbow_sign_inconsistent
  if (lhs->start_elbow_sign_inconsistent != rhs->start_elbow_sign_inconsistent) {
    return false;
  }
  // communication_constraints_violation
  if (lhs->communication_constraints_violation != rhs->communication_constraints_violation) {
    return false;
  }
  // power_limit_violation
  if (lhs->power_limit_violation != rhs->power_limit_violation) {
    return false;
  }
  // joint_p2p_insufficient_torque_for_planning
  if (lhs->joint_p2p_insufficient_torque_for_planning != rhs->joint_p2p_insufficient_torque_for_planning) {
    return false;
  }
  // tau_j_range_violation
  if (lhs->tau_j_range_violation != rhs->tau_j_range_violation) {
    return false;
  }
  // instability_detected
  if (lhs->instability_detected != rhs->instability_detected) {
    return false;
  }
  return true;
}

bool
franka_msgs__msg__Errors__copy(
  const franka_msgs__msg__Errors * input,
  franka_msgs__msg__Errors * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_position_limits_violation
  output->joint_position_limits_violation = input->joint_position_limits_violation;
  // cartesian_position_limits_violation
  output->cartesian_position_limits_violation = input->cartesian_position_limits_violation;
  // self_collision_avoidance_violation
  output->self_collision_avoidance_violation = input->self_collision_avoidance_violation;
  // joint_velocity_violation
  output->joint_velocity_violation = input->joint_velocity_violation;
  // cartesian_velocity_violation
  output->cartesian_velocity_violation = input->cartesian_velocity_violation;
  // force_control_safety_violation
  output->force_control_safety_violation = input->force_control_safety_violation;
  // joint_reflex
  output->joint_reflex = input->joint_reflex;
  // cartesian_reflex
  output->cartesian_reflex = input->cartesian_reflex;
  // max_goal_pose_deviation_violation
  output->max_goal_pose_deviation_violation = input->max_goal_pose_deviation_violation;
  // max_path_pose_deviation_violation
  output->max_path_pose_deviation_violation = input->max_path_pose_deviation_violation;
  // cartesian_velocity_profile_safety_violation
  output->cartesian_velocity_profile_safety_violation = input->cartesian_velocity_profile_safety_violation;
  // joint_position_motion_generator_start_pose_invalid
  output->joint_position_motion_generator_start_pose_invalid = input->joint_position_motion_generator_start_pose_invalid;
  // joint_motion_generator_position_limits_violation
  output->joint_motion_generator_position_limits_violation = input->joint_motion_generator_position_limits_violation;
  // joint_motion_generator_velocity_limits_violation
  output->joint_motion_generator_velocity_limits_violation = input->joint_motion_generator_velocity_limits_violation;
  // joint_motion_generator_velocity_discontinuity
  output->joint_motion_generator_velocity_discontinuity = input->joint_motion_generator_velocity_discontinuity;
  // joint_motion_generator_acceleration_discontinuity
  output->joint_motion_generator_acceleration_discontinuity = input->joint_motion_generator_acceleration_discontinuity;
  // cartesian_position_motion_generator_start_pose_invalid
  output->cartesian_position_motion_generator_start_pose_invalid = input->cartesian_position_motion_generator_start_pose_invalid;
  // cartesian_motion_generator_elbow_limit_violation
  output->cartesian_motion_generator_elbow_limit_violation = input->cartesian_motion_generator_elbow_limit_violation;
  // cartesian_motion_generator_velocity_limits_violation
  output->cartesian_motion_generator_velocity_limits_violation = input->cartesian_motion_generator_velocity_limits_violation;
  // cartesian_motion_generator_velocity_discontinuity
  output->cartesian_motion_generator_velocity_discontinuity = input->cartesian_motion_generator_velocity_discontinuity;
  // cartesian_motion_generator_acceleration_discontinuity
  output->cartesian_motion_generator_acceleration_discontinuity = input->cartesian_motion_generator_acceleration_discontinuity;
  // cartesian_motion_generator_elbow_sign_inconsistent
  output->cartesian_motion_generator_elbow_sign_inconsistent = input->cartesian_motion_generator_elbow_sign_inconsistent;
  // cartesian_motion_generator_start_elbow_invalid
  output->cartesian_motion_generator_start_elbow_invalid = input->cartesian_motion_generator_start_elbow_invalid;
  // cartesian_motion_generator_joint_position_limits_violation
  output->cartesian_motion_generator_joint_position_limits_violation = input->cartesian_motion_generator_joint_position_limits_violation;
  // cartesian_motion_generator_joint_velocity_limits_violation
  output->cartesian_motion_generator_joint_velocity_limits_violation = input->cartesian_motion_generator_joint_velocity_limits_violation;
  // cartesian_motion_generator_joint_velocity_discontinuity
  output->cartesian_motion_generator_joint_velocity_discontinuity = input->cartesian_motion_generator_joint_velocity_discontinuity;
  // cartesian_motion_generator_joint_acceleration_discontinuity
  output->cartesian_motion_generator_joint_acceleration_discontinuity = input->cartesian_motion_generator_joint_acceleration_discontinuity;
  // cartesian_position_motion_generator_invalid_frame
  output->cartesian_position_motion_generator_invalid_frame = input->cartesian_position_motion_generator_invalid_frame;
  // force_controller_desired_force_tolerance_violation
  output->force_controller_desired_force_tolerance_violation = input->force_controller_desired_force_tolerance_violation;
  // controller_torque_discontinuity
  output->controller_torque_discontinuity = input->controller_torque_discontinuity;
  // start_elbow_sign_inconsistent
  output->start_elbow_sign_inconsistent = input->start_elbow_sign_inconsistent;
  // communication_constraints_violation
  output->communication_constraints_violation = input->communication_constraints_violation;
  // power_limit_violation
  output->power_limit_violation = input->power_limit_violation;
  // joint_p2p_insufficient_torque_for_planning
  output->joint_p2p_insufficient_torque_for_planning = input->joint_p2p_insufficient_torque_for_planning;
  // tau_j_range_violation
  output->tau_j_range_violation = input->tau_j_range_violation;
  // instability_detected
  output->instability_detected = input->instability_detected;
  return true;
}

franka_msgs__msg__Errors *
franka_msgs__msg__Errors__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Errors * msg = (franka_msgs__msg__Errors *)allocator.allocate(sizeof(franka_msgs__msg__Errors), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(franka_msgs__msg__Errors));
  bool success = franka_msgs__msg__Errors__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
franka_msgs__msg__Errors__destroy(franka_msgs__msg__Errors * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    franka_msgs__msg__Errors__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
franka_msgs__msg__Errors__Sequence__init(franka_msgs__msg__Errors__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Errors * data = NULL;

  if (size) {
    data = (franka_msgs__msg__Errors *)allocator.zero_allocate(size, sizeof(franka_msgs__msg__Errors), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = franka_msgs__msg__Errors__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        franka_msgs__msg__Errors__fini(&data[i - 1]);
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
franka_msgs__msg__Errors__Sequence__fini(franka_msgs__msg__Errors__Sequence * array)
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
      franka_msgs__msg__Errors__fini(&array->data[i]);
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

franka_msgs__msg__Errors__Sequence *
franka_msgs__msg__Errors__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  franka_msgs__msg__Errors__Sequence * array = (franka_msgs__msg__Errors__Sequence *)allocator.allocate(sizeof(franka_msgs__msg__Errors__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = franka_msgs__msg__Errors__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
franka_msgs__msg__Errors__Sequence__destroy(franka_msgs__msg__Errors__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    franka_msgs__msg__Errors__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
franka_msgs__msg__Errors__Sequence__are_equal(const franka_msgs__msg__Errors__Sequence * lhs, const franka_msgs__msg__Errors__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!franka_msgs__msg__Errors__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
franka_msgs__msg__Errors__Sequence__copy(
  const franka_msgs__msg__Errors__Sequence * input,
  franka_msgs__msg__Errors__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(franka_msgs__msg__Errors);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    franka_msgs__msg__Errors * data =
      (franka_msgs__msg__Errors *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!franka_msgs__msg__Errors__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          franka_msgs__msg__Errors__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!franka_msgs__msg__Errors__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
