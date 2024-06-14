// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/CheckIfRobotStateExistsInWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__struct.h"
#include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name, robot
#include "rosidl_runtime_c/string_functions.h"  // name, robot

// forward declare type support functions


using _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request;

static bool _CheckIfRobotStateExistsInWarehouse_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type * ros_message = static_cast<const _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
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

static bool _CheckIfRobotStateExistsInWarehouse_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type * ros_message = static_cast<_CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
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
size_t get_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type * ros_message = static_cast<const _CheckIfRobotStateExistsInWarehouse_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name robot
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CheckIfRobotStateExistsInWarehouse_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request(
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

  // member: name
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
    using DataType = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request;
    is_plain =
      (
      offsetof(DataType, robot) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CheckIfRobotStateExistsInWarehouse_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CheckIfRobotStateExistsInWarehouse_Request = {
  "moveit_msgs::srv",
  "CheckIfRobotStateExistsInWarehouse_Request",
  _CheckIfRobotStateExistsInWarehouse_Request__cdr_serialize,
  _CheckIfRobotStateExistsInWarehouse_Request__cdr_deserialize,
  _CheckIfRobotStateExistsInWarehouse_Request__get_serialized_size,
  _CheckIfRobotStateExistsInWarehouse_Request__max_serialized_size
};

static rosidl_message_type_support_t _CheckIfRobotStateExistsInWarehouse_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CheckIfRobotStateExistsInWarehouse_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, CheckIfRobotStateExistsInWarehouse_Request)() {
  return &_CheckIfRobotStateExistsInWarehouse_Request__type_support;
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
// #include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/check_if_robot_state_exists_in_warehouse__functions.h"
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


using _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response;

static bool _CheckIfRobotStateExistsInWarehouse_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type * ros_message = static_cast<const _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exists
  {
    cdr << (ros_message->exists ? true : false);
  }

  return true;
}

static bool _CheckIfRobotStateExistsInWarehouse_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type * ros_message = static_cast<_CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: exists
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->exists = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type * ros_message = static_cast<const _CheckIfRobotStateExistsInWarehouse_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name exists
  {
    size_t item_size = sizeof(ros_message->exists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CheckIfRobotStateExistsInWarehouse_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response(
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

  // member: exists
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
    using DataType = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response;
    is_plain =
      (
      offsetof(DataType, exists) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CheckIfRobotStateExistsInWarehouse_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CheckIfRobotStateExistsInWarehouse_Response = {
  "moveit_msgs::srv",
  "CheckIfRobotStateExistsInWarehouse_Response",
  _CheckIfRobotStateExistsInWarehouse_Response__cdr_serialize,
  _CheckIfRobotStateExistsInWarehouse_Response__cdr_deserialize,
  _CheckIfRobotStateExistsInWarehouse_Response__get_serialized_size,
  _CheckIfRobotStateExistsInWarehouse_Response__max_serialized_size
};

static rosidl_message_type_support_t _CheckIfRobotStateExistsInWarehouse_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CheckIfRobotStateExistsInWarehouse_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, CheckIfRobotStateExistsInWarehouse_Response)() {
  return &_CheckIfRobotStateExistsInWarehouse_Response__type_support;
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
#include "moveit_msgs/srv/check_if_robot_state_exists_in_warehouse.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CheckIfRobotStateExistsInWarehouse__callbacks = {
  "moveit_msgs::srv",
  "CheckIfRobotStateExistsInWarehouse",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, CheckIfRobotStateExistsInWarehouse_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, CheckIfRobotStateExistsInWarehouse_Response)(),
};

static rosidl_service_type_support_t CheckIfRobotStateExistsInWarehouse__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CheckIfRobotStateExistsInWarehouse__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, CheckIfRobotStateExistsInWarehouse)() {
  return &CheckIfRobotStateExistsInWarehouse__handle;
}

#if defined(__cplusplus)
}
#endif
