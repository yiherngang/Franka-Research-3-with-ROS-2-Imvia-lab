// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:srv/SetForceTorqueCollisionBehavior.idl
// generated code does not contain a copyright notice
#include "franka_msgs/srv/detail/set_force_torque_collision_behavior__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_msgs/srv/detail/set_force_torque_collision_behavior__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace franka_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lower_torque_thresholds_nominal
  {
    cdr << ros_message.lower_torque_thresholds_nominal;
  }
  // Member: upper_torque_thresholds_nominal
  {
    cdr << ros_message.upper_torque_thresholds_nominal;
  }
  // Member: lower_force_thresholds_nominal
  {
    cdr << ros_message.lower_force_thresholds_nominal;
  }
  // Member: upper_force_thresholds_nominal
  {
    cdr << ros_message.upper_force_thresholds_nominal;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & ros_message)
{
  // Member: lower_torque_thresholds_nominal
  {
    cdr >> ros_message.lower_torque_thresholds_nominal;
  }

  // Member: upper_torque_thresholds_nominal
  {
    cdr >> ros_message.upper_torque_thresholds_nominal;
  }

  // Member: lower_force_thresholds_nominal
  {
    cdr >> ros_message.lower_force_thresholds_nominal;
  }

  // Member: upper_force_thresholds_nominal
  {
    cdr >> ros_message.upper_force_thresholds_nominal;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::srv::SetForceTorqueCollisionBehavior_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lower_torque_thresholds_nominal
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.lower_torque_thresholds_nominal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: upper_torque_thresholds_nominal
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.upper_torque_thresholds_nominal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lower_force_thresholds_nominal
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.lower_force_thresholds_nominal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: upper_force_thresholds_nominal
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.upper_force_thresholds_nominal[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_SetForceTorqueCollisionBehavior_Request(
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


  // Member: lower_torque_thresholds_nominal
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: upper_torque_thresholds_nominal
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lower_force_thresholds_nominal
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: upper_force_thresholds_nominal
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
    using DataType = franka_msgs::srv::SetForceTorqueCollisionBehavior_Request;
    is_plain =
      (
      offsetof(DataType, upper_force_thresholds_nominal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetForceTorqueCollisionBehavior_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::srv::SetForceTorqueCollisionBehavior_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetForceTorqueCollisionBehavior_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::srv::SetForceTorqueCollisionBehavior_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetForceTorqueCollisionBehavior_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::srv::SetForceTorqueCollisionBehavior_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetForceTorqueCollisionBehavior_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetForceTorqueCollisionBehavior_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetForceTorqueCollisionBehavior_Request__callbacks = {
  "franka_msgs::srv",
  "SetForceTorqueCollisionBehavior_Request",
  _SetForceTorqueCollisionBehavior_Request__cdr_serialize,
  _SetForceTorqueCollisionBehavior_Request__cdr_deserialize,
  _SetForceTorqueCollisionBehavior_Request__get_serialized_size,
  _SetForceTorqueCollisionBehavior_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetForceTorqueCollisionBehavior_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetForceTorqueCollisionBehavior_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior_Request>()
{
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Request)() {
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace franka_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::srv::SetForceTorqueCollisionBehavior_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  // Member: error
  cdr << ros_message.error;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::srv::SetForceTorqueCollisionBehavior_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  // Member: error
  cdr >> ros_message.error;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::srv::SetForceTorqueCollisionBehavior_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.error.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_SetForceTorqueCollisionBehavior_Response(
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


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error
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
    using DataType = franka_msgs::srv::SetForceTorqueCollisionBehavior_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetForceTorqueCollisionBehavior_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::srv::SetForceTorqueCollisionBehavior_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetForceTorqueCollisionBehavior_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::srv::SetForceTorqueCollisionBehavior_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetForceTorqueCollisionBehavior_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::srv::SetForceTorqueCollisionBehavior_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetForceTorqueCollisionBehavior_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetForceTorqueCollisionBehavior_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetForceTorqueCollisionBehavior_Response__callbacks = {
  "franka_msgs::srv",
  "SetForceTorqueCollisionBehavior_Response",
  _SetForceTorqueCollisionBehavior_Response__cdr_serialize,
  _SetForceTorqueCollisionBehavior_Response__cdr_deserialize,
  _SetForceTorqueCollisionBehavior_Response__get_serialized_size,
  _SetForceTorqueCollisionBehavior_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetForceTorqueCollisionBehavior_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetForceTorqueCollisionBehavior_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior_Response>()
{
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Response)() {
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace franka_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetForceTorqueCollisionBehavior__callbacks = {
  "franka_msgs::srv",
  "SetForceTorqueCollisionBehavior",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Response)(),
};

static rosidl_service_type_support_t _SetForceTorqueCollisionBehavior__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetForceTorqueCollisionBehavior__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior>()
{
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior)() {
  return &franka_msgs::srv::typesupport_fastrtps_cpp::_SetForceTorqueCollisionBehavior__handle;
}

#ifdef __cplusplus
}
#endif
