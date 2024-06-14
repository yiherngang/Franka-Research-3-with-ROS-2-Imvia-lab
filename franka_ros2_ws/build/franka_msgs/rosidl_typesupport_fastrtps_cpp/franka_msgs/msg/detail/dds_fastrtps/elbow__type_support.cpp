// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/elbow__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_msgs/msg/detail/elbow__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::msg::Elbow & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: position
  {
    cdr << ros_message.position;
  }
  // Member: desired_position
  {
    cdr << ros_message.desired_position;
  }
  // Member: commanded_position
  {
    cdr << ros_message.commanded_position;
  }
  // Member: commanded_velocity
  {
    cdr << ros_message.commanded_velocity;
  }
  // Member: commanded_acceleration
  {
    cdr << ros_message.commanded_acceleration;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::msg::Elbow & ros_message)
{
  // Member: position
  {
    cdr >> ros_message.position;
  }

  // Member: desired_position
  {
    cdr >> ros_message.desired_position;
  }

  // Member: commanded_position
  {
    cdr >> ros_message.commanded_position;
  }

  // Member: commanded_velocity
  {
    cdr >> ros_message.commanded_velocity;
  }

  // Member: commanded_acceleration
  {
    cdr >> ros_message.commanded_acceleration;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::msg::Elbow & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: position
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: desired_position
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.desired_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commanded_position
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.commanded_position[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commanded_velocity
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.commanded_velocity[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commanded_acceleration
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.commanded_acceleration[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_Elbow(
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


  // Member: position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: desired_position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: commanded_position
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: commanded_velocity
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: commanded_acceleration
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs::msg::Elbow;
    is_plain =
      (
      offsetof(DataType, commanded_acceleration) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Elbow__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::Elbow *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Elbow__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::msg::Elbow *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Elbow__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::Elbow *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Elbow__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Elbow(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Elbow__callbacks = {
  "franka_msgs::msg",
  "Elbow",
  _Elbow__cdr_serialize,
  _Elbow__cdr_deserialize,
  _Elbow__get_serialized_size,
  _Elbow__max_serialized_size
};

static rosidl_message_type_support_t _Elbow__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Elbow__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace franka_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_franka_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::msg::Elbow>()
{
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_Elbow__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, msg, Elbow)() {
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_Elbow__handle;
}

#ifdef __cplusplus
}
#endif
