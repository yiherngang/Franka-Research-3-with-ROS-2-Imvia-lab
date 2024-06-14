// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.h"
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"
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

#include "rosidl_runtime_c/string.h"  // regex, robot
#include "rosidl_runtime_c/string_functions.h"  // regex, robot

// forward declare type support functions


using _ListRobotStatesInWarehouse_Request__ros_msg_type = moveit_msgs__srv__ListRobotStatesInWarehouse_Request;

static bool _ListRobotStatesInWarehouse_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListRobotStatesInWarehouse_Request__ros_msg_type * ros_message = static_cast<const _ListRobotStatesInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: regex
  {
    const rosidl_runtime_c__String * str = &ros_message->regex;
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

  // Field name: robot
  {
    const rosidl_runtime_c__String * str = &ros_message->robot;
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

static bool _ListRobotStatesInWarehouse_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListRobotStatesInWarehouse_Request__ros_msg_type * ros_message = static_cast<_ListRobotStatesInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: regex
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->regex.data) {
      rosidl_runtime_c__String__init(&ros_message->regex);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->regex,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'regex'\n");
      return false;
    }
  }

  // Field name: robot
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot.data) {
      rosidl_runtime_c__String__init(&ros_message->robot);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListRobotStatesInWarehouse_Request__ros_msg_type * ros_message = static_cast<const _ListRobotStatesInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name regex
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->regex.size + 1);
  // field.name robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ListRobotStatesInWarehouse_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Request(
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

  // member: regex
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
  // member: robot
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
    using DataType = moveit_msgs__srv__ListRobotStatesInWarehouse_Request;
    is_plain =
      (
      offsetof(DataType, robot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ListRobotStatesInWarehouse_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListRobotStatesInWarehouse_Request = {
  "moveit_msgs::srv",
  "ListRobotStatesInWarehouse_Request",
  _ListRobotStatesInWarehouse_Request__cdr_serialize,
  _ListRobotStatesInWarehouse_Request__cdr_deserialize,
  _ListRobotStatesInWarehouse_Request__get_serialized_size,
  _ListRobotStatesInWarehouse_Request__max_serialized_size
};

static rosidl_message_type_support_t _ListRobotStatesInWarehouse_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListRobotStatesInWarehouse_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Request)() {
  return &_ListRobotStatesInWarehouse_Request__type_support;
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
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"
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

// already included above
// #include "rosidl_runtime_c/string.h"  // states
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // states

// forward declare type support functions


using _ListRobotStatesInWarehouse_Response__ros_msg_type = moveit_msgs__srv__ListRobotStatesInWarehouse_Response;

static bool _ListRobotStatesInWarehouse_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ListRobotStatesInWarehouse_Response__ros_msg_type * ros_message = static_cast<const _ListRobotStatesInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: states
  {
    size_t size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
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

  return true;
}

static bool _ListRobotStatesInWarehouse_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ListRobotStatesInWarehouse_Response__ros_msg_type * ros_message = static_cast<_ListRobotStatesInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: states
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->states.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->states);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->states, size)) {
      fprintf(stderr, "failed to create array for field 'states'");
      return false;
    }
    auto array_ptr = ros_message->states.data;
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
        fprintf(stderr, "failed to assign string into field 'states'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ListRobotStatesInWarehouse_Response__ros_msg_type * ros_message = static_cast<const _ListRobotStatesInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name states
  {
    size_t array_size = ros_message->states.size;
    auto array_ptr = ros_message->states.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ListRobotStatesInWarehouse_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Response(
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

  // member: states
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__srv__ListRobotStatesInWarehouse_Response;
    is_plain =
      (
      offsetof(DataType, states) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ListRobotStatesInWarehouse_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__ListRobotStatesInWarehouse_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ListRobotStatesInWarehouse_Response = {
  "moveit_msgs::srv",
  "ListRobotStatesInWarehouse_Response",
  _ListRobotStatesInWarehouse_Response__cdr_serialize,
  _ListRobotStatesInWarehouse_Response__cdr_deserialize,
  _ListRobotStatesInWarehouse_Response__get_serialized_size,
  _ListRobotStatesInWarehouse_Response__max_serialized_size
};

static rosidl_message_type_support_t _ListRobotStatesInWarehouse_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ListRobotStatesInWarehouse_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Response)() {
  return &_ListRobotStatesInWarehouse_Response__type_support;
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
#include "moveit_msgs/srv/list_robot_states_in_warehouse.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ListRobotStatesInWarehouse__callbacks = {
  "moveit_msgs::srv",
  "ListRobotStatesInWarehouse",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Response)(),
};

static rosidl_service_type_support_t ListRobotStatesInWarehouse__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ListRobotStatesInWarehouse__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ListRobotStatesInWarehouse)() {
  return &ListRobotStatesInWarehouse__handle;
}

#if defined(__cplusplus)
}
#endif
