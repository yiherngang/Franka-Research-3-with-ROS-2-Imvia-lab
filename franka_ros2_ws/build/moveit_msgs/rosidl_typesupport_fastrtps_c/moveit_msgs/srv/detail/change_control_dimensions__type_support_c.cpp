// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/ChangeControlDimensions.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/change_control_dimensions__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/detail/change_control_dimensions__struct.h"
#include "moveit_msgs/srv/detail/change_control_dimensions__functions.h"
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


// forward declare type support functions


using _ChangeControlDimensions_Request__ros_msg_type = moveit_msgs__srv__ChangeControlDimensions_Request;

static bool _ChangeControlDimensions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeControlDimensions_Request__ros_msg_type * ros_message = static_cast<const _ChangeControlDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_x_translation
  {
    cdr << (ros_message->control_x_translation ? true : false);
  }

  // Field name: control_y_translation
  {
    cdr << (ros_message->control_y_translation ? true : false);
  }

  // Field name: control_z_translation
  {
    cdr << (ros_message->control_z_translation ? true : false);
  }

  // Field name: control_x_rotation
  {
    cdr << (ros_message->control_x_rotation ? true : false);
  }

  // Field name: control_y_rotation
  {
    cdr << (ros_message->control_y_rotation ? true : false);
  }

  // Field name: control_z_rotation
  {
    cdr << (ros_message->control_z_rotation ? true : false);
  }

  return true;
}

static bool _ChangeControlDimensions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeControlDimensions_Request__ros_msg_type * ros_message = static_cast<_ChangeControlDimensions_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: control_x_translation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_x_translation = tmp ? true : false;
  }

  // Field name: control_y_translation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_y_translation = tmp ? true : false;
  }

  // Field name: control_z_translation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_z_translation = tmp ? true : false;
  }

  // Field name: control_x_rotation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_x_rotation = tmp ? true : false;
  }

  // Field name: control_y_rotation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_y_rotation = tmp ? true : false;
  }

  // Field name: control_z_rotation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->control_z_rotation = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeControlDimensions_Request__ros_msg_type * ros_message = static_cast<const _ChangeControlDimensions_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name control_x_translation
  {
    size_t item_size = sizeof(ros_message->control_x_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_y_translation
  {
    size_t item_size = sizeof(ros_message->control_y_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_z_translation
  {
    size_t item_size = sizeof(ros_message->control_z_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_x_rotation
  {
    size_t item_size = sizeof(ros_message->control_x_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_y_rotation
  {
    size_t item_size = sizeof(ros_message->control_y_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_z_rotation
  {
    size_t item_size = sizeof(ros_message->control_z_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeControlDimensions_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Request(
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

  // member: control_x_translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_y_translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_z_translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_x_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_y_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_z_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__srv__ChangeControlDimensions_Request;
    is_plain =
      (
      offsetof(DataType, control_z_rotation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeControlDimensions_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeControlDimensions_Request = {
  "moveit_msgs::srv",
  "ChangeControlDimensions_Request",
  _ChangeControlDimensions_Request__cdr_serialize,
  _ChangeControlDimensions_Request__cdr_deserialize,
  _ChangeControlDimensions_Request__get_serialized_size,
  _ChangeControlDimensions_Request__max_serialized_size
};

static rosidl_message_type_support_t _ChangeControlDimensions_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeControlDimensions_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ChangeControlDimensions_Request)() {
  return &_ChangeControlDimensions_Request__type_support;
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
// #include "moveit_msgs/srv/detail/change_control_dimensions__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/change_control_dimensions__functions.h"
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


// forward declare type support functions


using _ChangeControlDimensions_Response__ros_msg_type = moveit_msgs__srv__ChangeControlDimensions_Response;

static bool _ChangeControlDimensions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ChangeControlDimensions_Response__ros_msg_type * ros_message = static_cast<const _ChangeControlDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ChangeControlDimensions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ChangeControlDimensions_Response__ros_msg_type * ros_message = static_cast<_ChangeControlDimensions_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ChangeControlDimensions_Response__ros_msg_type * ros_message = static_cast<const _ChangeControlDimensions_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ChangeControlDimensions_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__srv__ChangeControlDimensions_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ChangeControlDimensions_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__ChangeControlDimensions_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ChangeControlDimensions_Response = {
  "moveit_msgs::srv",
  "ChangeControlDimensions_Response",
  _ChangeControlDimensions_Response__cdr_serialize,
  _ChangeControlDimensions_Response__cdr_deserialize,
  _ChangeControlDimensions_Response__get_serialized_size,
  _ChangeControlDimensions_Response__max_serialized_size
};

static rosidl_message_type_support_t _ChangeControlDimensions_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ChangeControlDimensions_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ChangeControlDimensions_Response)() {
  return &_ChangeControlDimensions_Response__type_support;
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
#include "moveit_msgs/srv/change_control_dimensions.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ChangeControlDimensions__callbacks = {
  "moveit_msgs::srv",
  "ChangeControlDimensions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ChangeControlDimensions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ChangeControlDimensions_Response)(),
};

static rosidl_service_type_support_t ChangeControlDimensions__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ChangeControlDimensions__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ChangeControlDimensions)() {
  return &ChangeControlDimensions__handle;
}

#if defined(__cplusplus)
}
#endif
