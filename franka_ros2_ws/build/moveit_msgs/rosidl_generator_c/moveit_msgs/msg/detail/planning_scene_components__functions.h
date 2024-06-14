// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:msg/PlanningSceneComponents.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__FUNCTIONS_H_
#define MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/msg/detail/planning_scene_components__struct.h"

/// Initialize msg/PlanningSceneComponents message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__msg__PlanningSceneComponents
 * )) before or use
 * moveit_msgs__msg__PlanningSceneComponents__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__init(moveit_msgs__msg__PlanningSceneComponents * msg);

/// Finalize msg/PlanningSceneComponents message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PlanningSceneComponents__fini(moveit_msgs__msg__PlanningSceneComponents * msg);

/// Create msg/PlanningSceneComponents message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__msg__PlanningSceneComponents__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__PlanningSceneComponents *
moveit_msgs__msg__PlanningSceneComponents__create();

/// Destroy msg/PlanningSceneComponents message.
/**
 * It calls
 * moveit_msgs__msg__PlanningSceneComponents__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PlanningSceneComponents__destroy(moveit_msgs__msg__PlanningSceneComponents * msg);

/// Check for msg/PlanningSceneComponents message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__are_equal(const moveit_msgs__msg__PlanningSceneComponents * lhs, const moveit_msgs__msg__PlanningSceneComponents * rhs);

/// Copy a msg/PlanningSceneComponents message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__copy(
  const moveit_msgs__msg__PlanningSceneComponents * input,
  moveit_msgs__msg__PlanningSceneComponents * output);

/// Initialize array of msg/PlanningSceneComponents messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__msg__PlanningSceneComponents__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__init(moveit_msgs__msg__PlanningSceneComponents__Sequence * array, size_t size);

/// Finalize array of msg/PlanningSceneComponents messages.
/**
 * It calls
 * moveit_msgs__msg__PlanningSceneComponents__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PlanningSceneComponents__Sequence__fini(moveit_msgs__msg__PlanningSceneComponents__Sequence * array);

/// Create array of msg/PlanningSceneComponents messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__msg__PlanningSceneComponents__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__PlanningSceneComponents__Sequence *
moveit_msgs__msg__PlanningSceneComponents__Sequence__create(size_t size);

/// Destroy array of msg/PlanningSceneComponents messages.
/**
 * It calls
 * moveit_msgs__msg__PlanningSceneComponents__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PlanningSceneComponents__Sequence__destroy(moveit_msgs__msg__PlanningSceneComponents__Sequence * array);

/// Check for msg/PlanningSceneComponents message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__are_equal(const moveit_msgs__msg__PlanningSceneComponents__Sequence * lhs, const moveit_msgs__msg__PlanningSceneComponents__Sequence * rhs);

/// Copy an array of msg/PlanningSceneComponents messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PlanningSceneComponents__Sequence__copy(
  const moveit_msgs__msg__PlanningSceneComponents__Sequence * input,
  moveit_msgs__msg__PlanningSceneComponents__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__PLANNING_SCENE_COMPONENTS__FUNCTIONS_H_
