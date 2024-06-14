// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/allowed_collision_matrix__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"
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

#include "moveit_msgs/msg/detail/allowed_collision_entry__functions.h"  // entry_values
#include "rosidl_runtime_c/primitives_sequence.h"  // default_entry_values
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // default_entry_values
#include "rosidl_runtime_c/string.h"  // default_entry_names, entry_names
#include "rosidl_runtime_c/string_functions.h"  // default_entry_names, entry_names

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AllowedCollisionEntry)();


using _AllowedCollisionMatrix__ros_msg_type = moveit_msgs__msg__AllowedCollisionMatrix;

static bool _AllowedCollisionMatrix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AllowedCollisionMatrix__ros_msg_type * ros_message = static_cast<const _AllowedCollisionMatrix__ros_msg_type *>(untyped_ros_message);
  // Field name: entry_names
  {
    size_t size = ros_message->entry_names.size;
    auto array_ptr = ros_message->entry_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: entry_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AllowedCollisionEntry
      )()->data);
    size_t size = ros_message->entry_values.size;
    auto array_ptr = ros_message->entry_values.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: default_entry_names
  {
    size_t size = ros_message->default_entry_names.size;
    auto array_ptr = ros_message->default_entry_names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: default_entry_values
  {
    size_t size = ros_message->default_entry_values.size;
    auto array_ptr = ros_message->default_entry_values.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AllowedCollisionMatrix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AllowedCollisionMatrix__ros_msg_type * ros_message = static_cast<_AllowedCollisionMatrix__ros_msg_type *>(untyped_ros_message);
  // Field name: entry_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->entry_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->entry_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->entry_names, size)) {
      fprintf(stderr, "failed to create array for field 'entry_names'");
      return false;
    }
    auto array_ptr = ros_message->entry_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'entry_names'\n");
        return false;
      }
    }
  }

  // Field name: entry_values
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AllowedCollisionEntry
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->entry_values.data) {
      moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(&ros_message->entry_values);
    }
    if (!moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(&ros_message->entry_values, size)) {
      fprintf(stderr, "failed to create array for field 'entry_values'");
      return false;
    }
    auto array_ptr = ros_message->entry_values.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: default_entry_names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->default_entry_names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->default_entry_names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->default_entry_names, size)) {
      fprintf(stderr, "failed to create array for field 'default_entry_names'");
      return false;
    }
    auto array_ptr = ros_message->default_entry_names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'default_entry_names'\n");
        return false;
      }
    }
  }

  // Field name: default_entry_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->default_entry_values.data) {
      rosidl_runtime_c__boolean__Sequence__fini(&ros_message->default_entry_values);
    }
    if (!rosidl_runtime_c__boolean__Sequence__init(&ros_message->default_entry_values, size)) {
      fprintf(stderr, "failed to create array for field 'default_entry_values'");
      return false;
    }
    auto array_ptr = ros_message->default_entry_values.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__AllowedCollisionMatrix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AllowedCollisionMatrix__ros_msg_type * ros_message = static_cast<const _AllowedCollisionMatrix__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name entry_names
  {
    size_t array_size = ros_message->entry_names.size;
    auto array_ptr = ros_message->entry_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name entry_values
  {
    size_t array_size = ros_message->entry_values.size;
    auto array_ptr = ros_message->entry_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name default_entry_names
  {
    size_t array_size = ros_message->default_entry_names.size;
    auto array_ptr = ros_message->default_entry_names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name default_entry_values
  {
    size_t array_size = ros_message->default_entry_values.size;
    auto array_ptr = ros_message->default_entry_values.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AllowedCollisionMatrix__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__AllowedCollisionMatrix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__AllowedCollisionMatrix(
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

  // member: entry_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: entry_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: default_entry_names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: default_entry_values
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__msg__AllowedCollisionMatrix;
    is_plain =
      (
      offsetof(DataType, default_entry_values) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _AllowedCollisionMatrix__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__msg__AllowedCollisionMatrix(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_AllowedCollisionMatrix = {
  "moveit_msgs::msg",
  "AllowedCollisionMatrix",
  _AllowedCollisionMatrix__cdr_serialize,
  _AllowedCollisionMatrix__cdr_deserialize,
  _AllowedCollisionMatrix__get_serialized_size,
  _AllowedCollisionMatrix__max_serialized_size
};

static rosidl_message_type_support_t _AllowedCollisionMatrix__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AllowedCollisionMatrix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AllowedCollisionMatrix)() {
  return &_AllowedCollisionMatrix__type_support;
}

#if defined(__cplusplus)
}
#endif
