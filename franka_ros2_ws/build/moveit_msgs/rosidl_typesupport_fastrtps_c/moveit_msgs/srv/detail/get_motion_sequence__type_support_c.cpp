// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/GetMotionSequence.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_motion_sequence__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/detail/get_motion_sequence__struct.h"
#include "moveit_msgs/srv/detail/get_motion_sequence__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/motion_sequence_request__functions.h"  // request

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__MotionSequenceRequest(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__MotionSequenceRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceRequest)();


using _GetMotionSequence_Request__ros_msg_type = moveit_msgs__srv__GetMotionSequence_Request;

static bool _GetMotionSequence_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMotionSequence_Request__ros_msg_type * ros_message = static_cast<const _GetMotionSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceRequest
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->request, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetMotionSequence_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMotionSequence_Request__ros_msg_type * ros_message = static_cast<_GetMotionSequence_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceRequest
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->request))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__GetMotionSequence_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMotionSequence_Request__ros_msg_type * ros_message = static_cast<const _GetMotionSequence_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name request

  current_alignment += get_serialized_size_moveit_msgs__msg__MotionSequenceRequest(
    &(ros_message->request), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetMotionSequence_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__GetMotionSequence_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__GetMotionSequence_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: request
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__MotionSequenceRequest(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__srv__GetMotionSequence_Request;
    is_plain =
      (
      offsetof(DataType, request) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetMotionSequence_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__GetMotionSequence_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetMotionSequence_Request = {
  "moveit_msgs::srv",
  "GetMotionSequence_Request",
  _GetMotionSequence_Request__cdr_serialize,
  _GetMotionSequence_Request__cdr_deserialize,
  _GetMotionSequence_Request__get_serialized_size,
  _GetMotionSequence_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMotionSequence_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMotionSequence_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Request)() {
  return &_GetMotionSequence_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_motion_sequence__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "moveit_msgs/msg/detail/motion_sequence_response__functions.h"  // response

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__MotionSequenceResponse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__MotionSequenceResponse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceResponse)();


using _GetMotionSequence_Response__ros_msg_type = moveit_msgs__srv__GetMotionSequence_Response;

static bool _GetMotionSequence_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMotionSequence_Response__ros_msg_type * ros_message = static_cast<const _GetMotionSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceResponse
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->response, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetMotionSequence_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMotionSequence_Response__ros_msg_type * ros_message = static_cast<_GetMotionSequence_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, MotionSequenceResponse
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->response))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__GetMotionSequence_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMotionSequence_Response__ros_msg_type * ros_message = static_cast<const _GetMotionSequence_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name response

  current_alignment += get_serialized_size_moveit_msgs__msg__MotionSequenceResponse(
    &(ros_message->response), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetMotionSequence_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__GetMotionSequence_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__GetMotionSequence_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: response
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__MotionSequenceResponse(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__srv__GetMotionSequence_Response;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetMotionSequence_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__GetMotionSequence_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetMotionSequence_Response = {
  "moveit_msgs::srv",
  "GetMotionSequence_Response",
  _GetMotionSequence_Response__cdr_serialize,
  _GetMotionSequence_Response__cdr_deserialize,
  _GetMotionSequence_Response__get_serialized_size,
  _GetMotionSequence_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMotionSequence_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMotionSequence_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Response)() {
  return &_GetMotionSequence_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/get_motion_sequence.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetMotionSequence__callbacks = {
  "moveit_msgs::srv",
  "GetMotionSequence",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence_Response)(),
};

static rosidl_service_type_support_t GetMotionSequence__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetMotionSequence__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetMotionSequence)() {
  return &GetMotionSequence__handle;
}

#if defined(__cplusplus)
}
#endif
