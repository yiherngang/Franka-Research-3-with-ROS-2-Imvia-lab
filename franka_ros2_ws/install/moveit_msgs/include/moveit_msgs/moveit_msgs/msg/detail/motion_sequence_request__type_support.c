// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/MotionSequenceRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/motion_sequence_request__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/motion_sequence_request__functions.h"
#include "moveit_msgs/msg/detail/motion_sequence_request__struct.h"


// Include directives for member types
// Member `items`
#include "moveit_msgs/msg/motion_sequence_item.h"
// Member `items`
#include "moveit_msgs/msg/detail/motion_sequence_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__MotionSequenceRequest__init(message_memory);
}

void moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_fini_function(void * message_memory)
{
  moveit_msgs__msg__MotionSequenceRequest__fini(message_memory);
}

size_t moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__size_function__MotionSequenceRequest__items(
  const void * untyped_member)
{
  const moveit_msgs__msg__MotionSequenceItem__Sequence * member =
    (const moveit_msgs__msg__MotionSequenceItem__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_const_function__MotionSequenceRequest__items(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__MotionSequenceItem__Sequence * member =
    (const moveit_msgs__msg__MotionSequenceItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_function__MotionSequenceRequest__items(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__MotionSequenceItem__Sequence * member =
    (moveit_msgs__msg__MotionSequenceItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__fetch_function__MotionSequenceRequest__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__MotionSequenceItem * item =
    ((const moveit_msgs__msg__MotionSequenceItem *)
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_const_function__MotionSequenceRequest__items(untyped_member, index));
  moveit_msgs__msg__MotionSequenceItem * value =
    (moveit_msgs__msg__MotionSequenceItem *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__assign_function__MotionSequenceRequest__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__MotionSequenceItem * item =
    ((moveit_msgs__msg__MotionSequenceItem *)
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_function__MotionSequenceRequest__items(untyped_member, index));
  const moveit_msgs__msg__MotionSequenceItem * value =
    (const moveit_msgs__msg__MotionSequenceItem *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__resize_function__MotionSequenceRequest__items(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__MotionSequenceItem__Sequence * member =
    (moveit_msgs__msg__MotionSequenceItem__Sequence *)(untyped_member);
  moveit_msgs__msg__MotionSequenceItem__Sequence__fini(member);
  return moveit_msgs__msg__MotionSequenceItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_member_array[1] = {
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__MotionSequenceRequest, items),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__size_function__MotionSequenceRequest__items,  // size() function pointer
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_const_function__MotionSequenceRequest__items,  // get_const(index) function pointer
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__get_function__MotionSequenceRequest__items,  // get(index) function pointer
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__fetch_function__MotionSequenceRequest__items,  // fetch(index, &value) function pointer
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__assign_function__MotionSequenceRequest__items,  // assign(index, value) function pointer
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__resize_function__MotionSequenceRequest__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_members = {
  "moveit_msgs__msg",  // message namespace
  "MotionSequenceRequest",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__msg__MotionSequenceRequest),
  moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_member_array,  // message members
  moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_type_support_handle = {
  0,
  &moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionSequenceRequest)() {
  moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionSequenceItem)();
  if (!moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__MotionSequenceRequest__rosidl_typesupport_introspection_c__MotionSequenceRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
