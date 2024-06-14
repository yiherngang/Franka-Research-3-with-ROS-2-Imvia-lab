// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/CollisionIndicators.idl
// generated code does not contain a copyright notice
#include "franka_msgs/msg/detail/collision_indicators__rosidl_typesupport_fastrtps_cpp.hpp"
#include "franka_msgs/msg/detail/collision_indicators__struct.hpp"

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
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Vector3 already declared above

// functions for geometry_msgs::msg::Vector3 already declared above

// functions for geometry_msgs::msg::Vector3 already declared above


namespace franka_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_serialize(
  const franka_msgs::msg::CollisionIndicators & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_cartesian_linear_collision
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.is_cartesian_linear_collision,
    cdr);
  // Member: is_cartesian_angular_collision
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.is_cartesian_angular_collision,
    cdr);
  // Member: is_cartesian_linear_contact
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.is_cartesian_linear_contact,
    cdr);
  // Member: is_cartesian_angular_contact
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.is_cartesian_angular_contact,
    cdr);
  // Member: is_joint_collision
  {
    cdr << ros_message.is_joint_collision;
  }
  // Member: is_joint_contact
  {
    cdr << ros_message.is_joint_contact;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  franka_msgs::msg::CollisionIndicators & ros_message)
{
  // Member: is_cartesian_linear_collision
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.is_cartesian_linear_collision);

  // Member: is_cartesian_angular_collision
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.is_cartesian_angular_collision);

  // Member: is_cartesian_linear_contact
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.is_cartesian_linear_contact);

  // Member: is_cartesian_angular_contact
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.is_cartesian_angular_contact);

  // Member: is_joint_collision
  {
    cdr >> ros_message.is_joint_collision;
  }

  // Member: is_joint_contact
  {
    cdr >> ros_message.is_joint_contact;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
get_serialized_size(
  const franka_msgs::msg::CollisionIndicators & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_cartesian_linear_collision

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.is_cartesian_linear_collision, current_alignment);
  // Member: is_cartesian_angular_collision

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.is_cartesian_angular_collision, current_alignment);
  // Member: is_cartesian_linear_contact

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.is_cartesian_linear_contact, current_alignment);
  // Member: is_cartesian_angular_contact

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.is_cartesian_angular_contact, current_alignment);
  // Member: is_joint_collision
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.is_joint_collision[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_joint_contact
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.is_joint_contact[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_franka_msgs
max_serialized_size_CollisionIndicators(
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


  // Member: is_cartesian_linear_collision
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_cartesian_angular_collision
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_cartesian_linear_contact
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_cartesian_angular_contact
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: is_joint_collision
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: is_joint_contact
  {
    size_t array_size = 7;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = franka_msgs::msg::CollisionIndicators;
    is_plain =
      (
      offsetof(DataType, is_joint_contact) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CollisionIndicators__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::CollisionIndicators *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CollisionIndicators__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<franka_msgs::msg::CollisionIndicators *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CollisionIndicators__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const franka_msgs::msg::CollisionIndicators *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CollisionIndicators__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CollisionIndicators(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CollisionIndicators__callbacks = {
  "franka_msgs::msg",
  "CollisionIndicators",
  _CollisionIndicators__cdr_serialize,
  _CollisionIndicators__cdr_deserialize,
  _CollisionIndicators__get_serialized_size,
  _CollisionIndicators__max_serialized_size
};

static rosidl_message_type_support_t _CollisionIndicators__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CollisionIndicators__callbacks,
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
get_message_type_support_handle<franka_msgs::msg::CollisionIndicators>()
{
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_CollisionIndicators__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, msg, CollisionIndicators)() {
  return &franka_msgs::msg::typesupport_fastrtps_cpp::_CollisionIndicators__handle;
}

#ifdef __cplusplus
}
#endif
