// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from franka_msgs:srv/SetFullCollisionBehavior.idl
// generated code does not contain a copyright notice
#include "franka_msgs/srv/detail/set_full_collision_behavior__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/srv/detail/set_full_collision_behavior__struct.h"
#include "franka_msgs/srv/detail/set_full_collision_behavior__functions.h"
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


using _SetFullCollisionBehavior_Request__ros_msg_type = franka_msgs__srv__SetFullCollisionBehavior_Request;

static bool _SetFullCollisionBehavior_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetFullCollisionBehavior_Request__ros_msg_type * ros_message = static_cast<const _SetFullCollisionBehavior_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: lower_torque_thresholds_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: upper_torque_thresholds_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lower_torque_thresholds_nominal
  {
    size_t size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_nominal;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: upper_torque_thresholds_nominal
  {
    size_t size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_nominal;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lower_force_thresholds_acceleration
  {
    size_t size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: upper_force_thresholds_acceleration
  {
    size_t size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_acceleration;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lower_force_thresholds_nominal
  {
    size_t size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_nominal;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: upper_force_thresholds_nominal
  {
    size_t size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_nominal;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SetFullCollisionBehavior_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetFullCollisionBehavior_Request__ros_msg_type * ros_message = static_cast<_SetFullCollisionBehavior_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: lower_torque_thresholds_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: upper_torque_thresholds_acceleration
  {
    size_t size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lower_torque_thresholds_nominal
  {
    size_t size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_nominal;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: upper_torque_thresholds_nominal
  {
    size_t size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_nominal;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lower_force_thresholds_acceleration
  {
    size_t size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: upper_force_thresholds_acceleration
  {
    size_t size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_acceleration;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lower_force_thresholds_nominal
  {
    size_t size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_nominal;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: upper_force_thresholds_nominal
  {
    size_t size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_nominal;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetFullCollisionBehavior_Request__ros_msg_type * ros_message = static_cast<const _SetFullCollisionBehavior_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lower_torque_thresholds_acceleration
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper_torque_thresholds_acceleration
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lower_torque_thresholds_nominal
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->lower_torque_thresholds_nominal;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper_torque_thresholds_nominal
  {
    size_t array_size = 7;
    auto array_ptr = ros_message->upper_torque_thresholds_nominal;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lower_force_thresholds_acceleration
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper_force_thresholds_acceleration
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_acceleration;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lower_force_thresholds_nominal
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->lower_force_thresholds_nominal;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name upper_force_thresholds_nominal
  {
    size_t array_size = 6;
    auto array_ptr = ros_message->upper_force_thresholds_nominal;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetFullCollisionBehavior_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Request(
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

  // member: lower_torque_thresholds_acceleration
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: upper_torque_thresholds_acceleration
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lower_torque_thresholds_nominal
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: upper_torque_thresholds_nominal
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lower_force_thresholds_acceleration
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: upper_force_thresholds_acceleration
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lower_force_thresholds_nominal
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: upper_force_thresholds_nominal
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs__srv__SetFullCollisionBehavior_Request;
    is_plain =
      (
      offsetof(DataType, upper_force_thresholds_nominal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetFullCollisionBehavior_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetFullCollisionBehavior_Request = {
  "franka_msgs::srv",
  "SetFullCollisionBehavior_Request",
  _SetFullCollisionBehavior_Request__cdr_serialize,
  _SetFullCollisionBehavior_Request__cdr_deserialize,
  _SetFullCollisionBehavior_Request__get_serialized_size,
  _SetFullCollisionBehavior_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetFullCollisionBehavior_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetFullCollisionBehavior_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, srv, SetFullCollisionBehavior_Request)() {
  return &_SetFullCollisionBehavior_Request__type_support;
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
// #include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "franka_msgs/srv/detail/set_full_collision_behavior__struct.h"
// already included above
// #include "franka_msgs/srv/detail/set_full_collision_behavior__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error
#include "rosidl_runtime_c/string_functions.h"  // error

// forward declare type support functions


using _SetFullCollisionBehavior_Response__ros_msg_type = franka_msgs__srv__SetFullCollisionBehavior_Response;

static bool _SetFullCollisionBehavior_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetFullCollisionBehavior_Response__ros_msg_type * ros_message = static_cast<const _SetFullCollisionBehavior_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: error
  {
    const rosidl_runtime_c__String * str = &ros_message->error;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetFullCollisionBehavior_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetFullCollisionBehavior_Response__ros_msg_type * ros_message = static_cast<_SetFullCollisionBehavior_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error.data) {
      rosidl_runtime_c__String__init(&ros_message->error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t get_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetFullCollisionBehavior_Response__ros_msg_type * ros_message = static_cast<const _SetFullCollisionBehavior_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetFullCollisionBehavior_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_franka_msgs
size_t max_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Response(
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
  // member: error
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs__srv__SetFullCollisionBehavior_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetFullCollisionBehavior_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_franka_msgs__srv__SetFullCollisionBehavior_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetFullCollisionBehavior_Response = {
  "franka_msgs::srv",
  "SetFullCollisionBehavior_Response",
  _SetFullCollisionBehavior_Response__cdr_serialize,
  _SetFullCollisionBehavior_Response__cdr_deserialize,
  _SetFullCollisionBehavior_Response__get_serialized_size,
  _SetFullCollisionBehavior_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetFullCollisionBehavior_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetFullCollisionBehavior_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, srv, SetFullCollisionBehavior_Response)() {
  return &_SetFullCollisionBehavior_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "franka_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "franka_msgs/srv/set_full_collision_behavior.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetFullCollisionBehavior__callbacks = {
  "franka_msgs::srv",
  "SetFullCollisionBehavior",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, srv, SetFullCollisionBehavior_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, srv, SetFullCollisionBehavior_Response)(),
};

static rosidl_service_type_support_t SetFullCollisionBehavior__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetFullCollisionBehavior__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, srv, SetFullCollisionBehavior)() {
  return &SetFullCollisionBehavior__handle;
}

#if defined(__cplusplus)
}
#endif
