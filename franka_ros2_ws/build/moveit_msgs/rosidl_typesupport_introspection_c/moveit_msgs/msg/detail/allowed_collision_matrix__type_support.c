// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/allowed_collision_matrix__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__functions.h"
#include "moveit_msgs/msg/detail/allowed_collision_matrix__struct.h"


// Include directives for member types
// Member `entry_names`
// Member `default_entry_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `entry_values`
#include "moveit_msgs/msg/allowed_collision_entry.h"
// Member `entry_values`
#include "moveit_msgs/msg/detail/allowed_collision_entry__rosidl_typesupport_introspection_c.h"
// Member `default_entry_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__AllowedCollisionMatrix__init(message_memory);
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_fini_function(void * message_memory)
{
  moveit_msgs__msg__AllowedCollisionMatrix__fini(message_memory);
}

size_t moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__entry_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__entry_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__entry_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__entry_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__entry_values(
  const void * untyped_member)
{
  const moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_values(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (const moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_values(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__entry_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__AllowedCollisionEntry * item =
    ((const moveit_msgs__msg__AllowedCollisionEntry *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_values(untyped_member, index));
  moveit_msgs__msg__AllowedCollisionEntry * value =
    (moveit_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__entry_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__AllowedCollisionEntry * item =
    ((moveit_msgs__msg__AllowedCollisionEntry *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_values(untyped_member, index));
  const moveit_msgs__msg__AllowedCollisionEntry * value =
    (const moveit_msgs__msg__AllowedCollisionEntry *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__entry_values(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__AllowedCollisionEntry__Sequence * member =
    (moveit_msgs__msg__AllowedCollisionEntry__Sequence *)(untyped_member);
  moveit_msgs__msg__AllowedCollisionEntry__Sequence__fini(member);
  return moveit_msgs__msg__AllowedCollisionEntry__Sequence__init(member, size);
}

size_t moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__default_entry_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__default_entry_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__default_entry_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__default_entry_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__default_entry_values(
  const void * untyped_member)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__boolean__Sequence * member =
    (const rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__default_entry_values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_values(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__default_entry_values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_values(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__default_entry_values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__boolean__Sequence * member =
    (rosidl_runtime_c__boolean__Sequence *)(untyped_member);
  rosidl_runtime_c__boolean__Sequence__fini(member);
  return rosidl_runtime_c__boolean__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array[4] = {
  {
    "entry_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, entry_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__entry_names,  // size() function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_names,  // get_const(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_names,  // get(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__entry_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__entry_names,  // assign(index, value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__entry_names  // resize(index) function pointer
  },
  {
    "entry_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, entry_values),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__entry_values,  // size() function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__entry_values,  // get_const(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__entry_values,  // get(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__entry_values,  // fetch(index, &value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__entry_values,  // assign(index, value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__entry_values  // resize(index) function pointer
  },
  {
    "default_entry_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, default_entry_names),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__default_entry_names,  // size() function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_names,  // get_const(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_names,  // get(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__default_entry_names,  // fetch(index, &value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__default_entry_names,  // assign(index, value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__default_entry_names  // resize(index) function pointer
  },
  {
    "default_entry_values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__AllowedCollisionMatrix, default_entry_values),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__size_function__AllowedCollisionMatrix__default_entry_values,  // size() function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_const_function__AllowedCollisionMatrix__default_entry_values,  // get_const(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__get_function__AllowedCollisionMatrix__default_entry_values,  // get(index) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__fetch_function__AllowedCollisionMatrix__default_entry_values,  // fetch(index, &value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__assign_function__AllowedCollisionMatrix__default_entry_values,  // assign(index, value) function pointer
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__resize_function__AllowedCollisionMatrix__default_entry_values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_members = {
  "moveit_msgs__msg",  // message namespace
  "AllowedCollisionMatrix",  // message name
  4,  // number of fields
  sizeof(moveit_msgs__msg__AllowedCollisionMatrix),
  moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array,  // message members
  moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle = {
  0,
  &moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionMatrix)() {
  moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionEntry)();
  if (!moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__AllowedCollisionMatrix__rosidl_typesupport_introspection_c__AllowedCollisionMatrix_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
