// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/detail/get_state_validity__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/detail/get_state_validity__struct.h"
#include "moveit_msgs/srv/detail/get_state_validity__functions.h"
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

#include "moveit_msgs/msg/detail/constraints__functions.h"  // constraints
#include "moveit_msgs/msg/detail/robot_state__functions.h"  // robot_state
#include "rosidl_runtime_c/string.h"  // group_name
#include "rosidl_runtime_c/string_functions.h"  // group_name

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__Constraints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__Constraints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints)();
size_t get_serialized_size_moveit_msgs__msg__RobotState(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__RobotState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState)();


using _GetStateValidity_Request__ros_msg_type = moveit_msgs__srv__GetStateValidity_Request;

static bool _GetStateValidity_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetStateValidity_Request__ros_msg_type * ros_message = static_cast<const _GetStateValidity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robot_state, cdr))
    {
      return false;
    }
  }

  // Field name: group_name
  {
    const rosidl_runtime_c__String * str = &ros_message->group_name;
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

  // Field name: constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->constraints, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetStateValidity_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetStateValidity_Request__ros_msg_type * ros_message = static_cast<_GetStateValidity_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_state
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, RobotState
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robot_state))
    {
      return false;
    }
  }

  // Field name: group_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->group_name.data) {
      rosidl_runtime_c__String__init(&ros_message->group_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->group_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'group_name'\n");
      return false;
    }
  }

  // Field name: constraints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, Constraints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->constraints))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__GetStateValidity_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetStateValidity_Request__ros_msg_type * ros_message = static_cast<const _GetStateValidity_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_state

  current_alignment += get_serialized_size_moveit_msgs__msg__RobotState(
    &(ros_message->robot_state), current_alignment);
  // field.name group_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->group_name.size + 1);
  // field.name constraints

  current_alignment += get_serialized_size_moveit_msgs__msg__Constraints(
    &(ros_message->constraints), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetStateValidity_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__GetStateValidity_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__GetStateValidity_Request(
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

  // member: robot_state
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__RobotState(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: group_name
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
  // member: constraints
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__Constraints(
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
    using DataType = moveit_msgs__srv__GetStateValidity_Request;
    is_plain =
      (
      offsetof(DataType, constraints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetStateValidity_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__GetStateValidity_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetStateValidity_Request = {
  "moveit_msgs::srv",
  "GetStateValidity_Request",
  _GetStateValidity_Request__cdr_serialize,
  _GetStateValidity_Request__cdr_deserialize,
  _GetStateValidity_Request__get_serialized_size,
  _GetStateValidity_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetStateValidity_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetStateValidity_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetStateValidity_Request)() {
  return &_GetStateValidity_Request__type_support;
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
// #include "moveit_msgs/srv/detail/get_state_validity__struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_state_validity__functions.h"
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

#include "moveit_msgs/msg/detail/constraint_eval_result__functions.h"  // constraint_result
#include "moveit_msgs/msg/detail/contact_information__functions.h"  // contacts
#include "moveit_msgs/msg/detail/cost_source__functions.h"  // cost_sources

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__ConstraintEvalResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__ConstraintEvalResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ConstraintEvalResult)();
size_t get_serialized_size_moveit_msgs__msg__ContactInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__ContactInformation(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ContactInformation)();
size_t get_serialized_size_moveit_msgs__msg__CostSource(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__CostSource(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CostSource)();


using _GetStateValidity_Response__ros_msg_type = moveit_msgs__srv__GetStateValidity_Response;

static bool _GetStateValidity_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetStateValidity_Response__ros_msg_type * ros_message = static_cast<const _GetStateValidity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid
  {
    cdr << (ros_message->valid ? true : false);
  }

  // Field name: contacts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ContactInformation
      )()->data);
    size_t size = ros_message->contacts.size;
    auto array_ptr = ros_message->contacts.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cost_sources
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CostSource
      )()->data);
    size_t size = ros_message->cost_sources.size;
    auto array_ptr = ros_message->cost_sources.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: constraint_result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ConstraintEvalResult
      )()->data);
    size_t size = ros_message->constraint_result.size;
    auto array_ptr = ros_message->constraint_result.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetStateValidity_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetStateValidity_Response__ros_msg_type * ros_message = static_cast<_GetStateValidity_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->valid = tmp ? true : false;
  }

  // Field name: contacts
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ContactInformation
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->contacts.data) {
      moveit_msgs__msg__ContactInformation__Sequence__fini(&ros_message->contacts);
    }
    if (!moveit_msgs__msg__ContactInformation__Sequence__init(&ros_message->contacts, size)) {
      fprintf(stderr, "failed to create array for field 'contacts'");
      return false;
    }
    auto array_ptr = ros_message->contacts.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cost_sources
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, CostSource
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cost_sources.data) {
      moveit_msgs__msg__CostSource__Sequence__fini(&ros_message->cost_sources);
    }
    if (!moveit_msgs__msg__CostSource__Sequence__init(&ros_message->cost_sources, size)) {
      fprintf(stderr, "failed to create array for field 'cost_sources'");
      return false;
    }
    auto array_ptr = ros_message->cost_sources.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: constraint_result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, ConstraintEvalResult
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->constraint_result.data) {
      moveit_msgs__msg__ConstraintEvalResult__Sequence__fini(&ros_message->constraint_result);
    }
    if (!moveit_msgs__msg__ConstraintEvalResult__Sequence__init(&ros_message->constraint_result, size)) {
      fprintf(stderr, "failed to create array for field 'constraint_result'");
      return false;
    }
    auto array_ptr = ros_message->constraint_result.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__GetStateValidity_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetStateValidity_Response__ros_msg_type * ros_message = static_cast<const _GetStateValidity_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name valid
  {
    size_t item_size = sizeof(ros_message->valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contacts
  {
    size_t array_size = ros_message->contacts.size;
    auto array_ptr = ros_message->contacts.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__ContactInformation(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cost_sources
  {
    size_t array_size = ros_message->cost_sources.size;
    auto array_ptr = ros_message->cost_sources.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__CostSource(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name constraint_result
  {
    size_t array_size = ros_message->constraint_result.size;
    auto array_ptr = ros_message->constraint_result.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_moveit_msgs__msg__ConstraintEvalResult(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetStateValidity_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__GetStateValidity_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__GetStateValidity_Response(
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

  // member: valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: contacts
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
        max_serialized_size_moveit_msgs__msg__ContactInformation(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cost_sources
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
        max_serialized_size_moveit_msgs__msg__CostSource(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: constraint_result
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
        max_serialized_size_moveit_msgs__msg__ConstraintEvalResult(
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
    using DataType = moveit_msgs__srv__GetStateValidity_Response;
    is_plain =
      (
      offsetof(DataType, constraint_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GetStateValidity_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__srv__GetStateValidity_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetStateValidity_Response = {
  "moveit_msgs::srv",
  "GetStateValidity_Response",
  _GetStateValidity_Response__cdr_serialize,
  _GetStateValidity_Response__cdr_deserialize,
  _GetStateValidity_Response__get_serialized_size,
  _GetStateValidity_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetStateValidity_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetStateValidity_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetStateValidity_Response)() {
  return &_GetStateValidity_Response__type_support;
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
#include "moveit_msgs/srv/get_state_validity.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetStateValidity__callbacks = {
  "moveit_msgs::srv",
  "GetStateValidity",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetStateValidity_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetStateValidity_Response)(),
};

static rosidl_service_type_support_t GetStateValidity__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetStateValidity__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, GetStateValidity)() {
  return &GetStateValidity__handle;
}

#if defined(__cplusplus)
}
#endif
