// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/detail/planning_options__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/detail/planning_options__struct.h"
#include "moveit_msgs/msg/detail/planning_options__functions.h"
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

#include "moveit_msgs/msg/detail/planning_scene__functions.h"  // planning_scene_diff

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__PlanningScene(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__PlanningScene(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene)();


using _PlanningOptions__ros_msg_type = moveit_msgs__msg__PlanningOptions;

static bool _PlanningOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanningOptions__ros_msg_type * ros_message = static_cast<const _PlanningOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: planning_scene_diff
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->planning_scene_diff, cdr))
    {
      return false;
    }
  }

  // Field name: plan_only
  {
    cdr << (ros_message->plan_only ? true : false);
  }

  // Field name: look_around
  {
    cdr << (ros_message->look_around ? true : false);
  }

  // Field name: look_around_attempts
  {
    cdr << ros_message->look_around_attempts;
  }

  // Field name: max_safe_execution_cost
  {
    cdr << ros_message->max_safe_execution_cost;
  }

  // Field name: replan
  {
    cdr << (ros_message->replan ? true : false);
  }

  // Field name: replan_attempts
  {
    cdr << ros_message->replan_attempts;
  }

  // Field name: replan_delay
  {
    cdr << ros_message->replan_delay;
  }

  return true;
}

static bool _PlanningOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanningOptions__ros_msg_type * ros_message = static_cast<_PlanningOptions__ros_msg_type *>(untyped_ros_message);
  // Field name: planning_scene_diff
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->planning_scene_diff))
    {
      return false;
    }
  }

  // Field name: plan_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plan_only = tmp ? true : false;
  }

  // Field name: look_around
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->look_around = tmp ? true : false;
  }

  // Field name: look_around_attempts
  {
    cdr >> ros_message->look_around_attempts;
  }

  // Field name: max_safe_execution_cost
  {
    cdr >> ros_message->max_safe_execution_cost;
  }

  // Field name: replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->replan = tmp ? true : false;
  }

  // Field name: replan_attempts
  {
    cdr >> ros_message->replan_attempts;
  }

  // Field name: replan_delay
  {
    cdr >> ros_message->replan_delay;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__PlanningOptions(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanningOptions__ros_msg_type * ros_message = static_cast<const _PlanningOptions__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name planning_scene_diff

  current_alignment += get_serialized_size_moveit_msgs__msg__PlanningScene(
    &(ros_message->planning_scene_diff), current_alignment);
  // field.name plan_only
  {
    size_t item_size = sizeof(ros_message->plan_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name look_around
  {
    size_t item_size = sizeof(ros_message->look_around);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name look_around_attempts
  {
    size_t item_size = sizeof(ros_message->look_around_attempts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_safe_execution_cost
  {
    size_t item_size = sizeof(ros_message->max_safe_execution_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan
  {
    size_t item_size = sizeof(ros_message->replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_attempts
  {
    size_t item_size = sizeof(ros_message->replan_attempts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_delay
  {
    size_t item_size = sizeof(ros_message->replan_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanningOptions__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__PlanningOptions(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__PlanningOptions(
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

  // member: planning_scene_diff
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_moveit_msgs__msg__PlanningScene(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: plan_only
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: look_around
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: look_around_attempts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_safe_execution_cost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: replan_attempts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: replan_delay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = moveit_msgs__msg__PlanningOptions;
    is_plain =
      (
      offsetof(DataType, replan_delay) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _PlanningOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_moveit_msgs__msg__PlanningOptions(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanningOptions = {
  "moveit_msgs::msg",
  "PlanningOptions",
  _PlanningOptions__cdr_serialize,
  _PlanningOptions__cdr_deserialize,
  _PlanningOptions__get_serialized_size,
  _PlanningOptions__max_serialized_size
};

static rosidl_message_type_support_t _PlanningOptions__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanningOptions,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningOptions)() {
  return &_PlanningOptions__type_support;
}

#if defined(__cplusplus)
}
#endif
