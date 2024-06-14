// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from moveit_msgs:srv/DeleteRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__DELETE_ROBOT_STATE_FROM_WAREHOUSE__FUNCTIONS_H_
#define MOVEIT_MSGS__SRV__DETAIL__DELETE_ROBOT_STATE_FROM_WAREHOUSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "moveit_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "moveit_msgs/srv/detail/delete_robot_state_from_warehouse__struct.h"

/// Initialize srv/DeleteRobotStateFromWarehouse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request
 * )) before or use
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg);

/// Finalize srv/DeleteRobotStateFromWarehouse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg);

/// Create srv/DeleteRobotStateFromWarehouse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__create();

/// Destroy srv/DeleteRobotStateFromWarehouse message.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * msg);

/// Check for srv/DeleteRobotStateFromWarehouse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__are_equal(const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * lhs, const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * rhs);

/// Copy a srv/DeleteRobotStateFromWarehouse message.
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__copy(
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * input,
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request * output);

/// Initialize array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array, size_t size);

/// Finalize array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array);

/// Create array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__create(size_t size);

/// Destroy array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * array);

/// Check for srv/DeleteRobotStateFromWarehouse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__are_equal(const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * lhs, const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * rhs);

/// Copy an array of srv/DeleteRobotStateFromWarehouse messages.
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence__copy(
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * input,
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Request__Sequence * output);

/// Initialize srv/DeleteRobotStateFromWarehouse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response
 * )) before or use
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg);

/// Finalize srv/DeleteRobotStateFromWarehouse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg);

/// Create srv/DeleteRobotStateFromWarehouse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__create();

/// Destroy srv/DeleteRobotStateFromWarehouse message.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * msg);

/// Check for srv/DeleteRobotStateFromWarehouse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__are_equal(const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * lhs, const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * rhs);

/// Copy a srv/DeleteRobotStateFromWarehouse message.
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__copy(
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * input,
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response * output);

/// Initialize array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It allocates the memory for the number of elements and calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__init(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array, size_t size);

/// Finalize array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__fini(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array);

/// Create array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It allocates the memory for the array and calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence *
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__create(size_t size);

/// Destroy array of srv/DeleteRobotStateFromWarehouse messages.
/**
 * It calls
 * moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
void
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__destroy(moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * array);

/// Check for srv/DeleteRobotStateFromWarehouse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_moveit_msgs
bool
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__are_equal(const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * lhs, const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * rhs);

/// Copy an array of srv/DeleteRobotStateFromWarehouse messages.
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
moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence__copy(
  const moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * input,
  moveit_msgs__srv__DeleteRobotStateFromWarehouse_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__SRV__DETAIL__DELETE_ROBOT_STATE_FROM_WAREHOUSE__FUNCTIONS_H_
