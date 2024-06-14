// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__FUNCTIONS_H_
#define MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/msg/detail/position_constraint__struct.h"

/// Initialize msg/PositionConstraint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__msg__PositionConstraint
 * )) before or use
 * moveit_msgs__msg__PositionConstraint__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PositionConstraint__init(moveit_msgs__msg__PositionConstraint * msg);

/// Finalize msg/PositionConstraint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PositionConstraint__fini(moveit_msgs__msg__PositionConstraint * msg);

/// Create msg/PositionConstraint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__msg__PositionConstraint__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__PositionConstraint *
moveit_msgs__msg__PositionConstraint__create();

/// Destroy msg/PositionConstraint message.
/**
 * It calls
 * moveit_msgs__msg__PositionConstraint__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PositionConstraint__destroy(moveit_msgs__msg__PositionConstraint * msg);

/// Check for msg/PositionConstraint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PositionConstraint__are_equal(const moveit_msgs__msg__PositionConstraint * lhs, const moveit_msgs__msg__PositionConstraint * rhs);

/// Copy a msg/PositionConstraint message.
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
moveit_msgs__msg__PositionConstraint__copy(
  const moveit_msgs__msg__PositionConstraint * input,
  moveit_msgs__msg__PositionConstraint * output);

/// Initialize array of msg/PositionConstraint messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__msg__PositionConstraint__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PositionConstraint__Sequence__init(moveit_msgs__msg__PositionConstraint__Sequence * array, size_t size);

/// Finalize array of msg/PositionConstraint messages.
/**
 * It calls
 * moveit_msgs__msg__PositionConstraint__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PositionConstraint__Sequence__fini(moveit_msgs__msg__PositionConstraint__Sequence * array);

/// Create array of msg/PositionConstraint messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__msg__PositionConstraint__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__msg__PositionConstraint__Sequence *
moveit_msgs__msg__PositionConstraint__Sequence__create(size_t size);

/// Destroy array of msg/PositionConstraint messages.
/**
 * It calls
 * moveit_msgs__msg__PositionConstraint__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__msg__PositionConstraint__Sequence__destroy(moveit_msgs__msg__PositionConstraint__Sequence * array);

/// Check for msg/PositionConstraint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__msg__PositionConstraint__Sequence__are_equal(const moveit_msgs__msg__PositionConstraint__Sequence * lhs, const moveit_msgs__msg__PositionConstraint__Sequence * rhs);

/// Copy an array of msg/PositionConstraint messages.
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
moveit_msgs__msg__PositionConstraint__Sequence__copy(
  const moveit_msgs__msg__PositionConstraint__Sequence * input,
  moveit_msgs__msg__PositionConstraint__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DETAIL__POSITION_CONSTRAINT__FUNCTIONS_H_
