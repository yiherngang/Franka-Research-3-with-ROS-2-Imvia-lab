// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:action/ExecuteTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_
#define MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/action/detail/execute_trajectory__struct.h"

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Goal
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__init(moveit_msgs__action__ExecuteTrajectory_Goal * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__fini(moveit_msgs__action__ExecuteTrajectory_Goal * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Goal *
moveit_msgs__action__ExecuteTrajectory_Goal__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__destroy(moveit_msgs__action__ExecuteTrajectory_Goal * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__are_equal(const moveit_msgs__action__ExecuteTrajectory_Goal * lhs, const moveit_msgs__action__ExecuteTrajectory_Goal * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_Goal__copy(
  const moveit_msgs__action__ExecuteTrajectory_Goal * input,
  moveit_msgs__action__ExecuteTrajectory_Goal * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence *
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_Goal__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_Goal__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Result
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__init(moveit_msgs__action__ExecuteTrajectory_Result * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__fini(moveit_msgs__action__ExecuteTrajectory_Result * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Result *
moveit_msgs__action__ExecuteTrajectory_Result__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__destroy(moveit_msgs__action__ExecuteTrajectory_Result * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__are_equal(const moveit_msgs__action__ExecuteTrajectory_Result * lhs, const moveit_msgs__action__ExecuteTrajectory_Result * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_Result__copy(
  const moveit_msgs__action__ExecuteTrajectory_Result * input,
  moveit_msgs__action__ExecuteTrajectory_Result * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Result__Sequence *
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Result__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_Result__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_Result__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_Result__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_Result__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_Result__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_Feedback
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__init(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__fini(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Feedback *
moveit_msgs__action__ExecuteTrajectory_Feedback__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__are_equal(const moveit_msgs__action__ExecuteTrajectory_Feedback * lhs, const moveit_msgs__action__ExecuteTrajectory_Feedback * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_Feedback__copy(
  const moveit_msgs__action__ExecuteTrajectory_Feedback * input,
  moveit_msgs__action__ExecuteTrajectory_Feedback * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence *
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_Feedback__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__are_equal(const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * lhs, const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__copy(
  const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * input,
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Request__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__are_equal(const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * lhs, const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__copy(
  const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * input,
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_SendGoal_Response__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Request *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__are_equal(const moveit_msgs__action__ExecuteTrajectory_GetResult_Request * lhs, const moveit_msgs__action__ExecuteTrajectory_GetResult_Request * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__copy(
  const moveit_msgs__action__ExecuteTrajectory_GetResult_Request * input,
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_GetResult_Request__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Response *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__are_equal(const moveit_msgs__action__ExecuteTrajectory_GetResult_Response * lhs, const moveit_msgs__action__ExecuteTrajectory_GetResult_Response * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__copy(
  const moveit_msgs__action__ExecuteTrajectory_GetResult_Response * input,
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence *
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_GetResult_Response__Sequence * output);

/// Initialize action/ExecuteTrajectory message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage
 * )) before or use
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);

/// Finalize action/ExecuteTrajectory message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);

/// Create action/ExecuteTrajectory message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__create();

/// Destroy action/ExecuteTrajectory message.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * msg);

/// Check for action/ExecuteTrajectory message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__are_equal(const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * lhs, const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * rhs);

/// Copy a action/ExecuteTrajectory message.
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
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__copy(
  const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * input,
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage * output);

/// Initialize array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array);

/// Create array of action/ExecuteTrajectory messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence *
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ExecuteTrajectory messages.
/**
 * It calls
 * moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__destroy(moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * array);

/// Check for action/ExecuteTrajectory message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__are_equal(const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * lhs, const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ExecuteTrajectory messages.
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
moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence__copy(
  const moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * input,
  moveit_msgs__action__ExecuteTrajectory_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__ACTION__DETAIL__EXECUTE_TRAJECTORY__FUNCTIONS_H_
