// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PlannerParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/planner_params__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/planner_params__functions.h"
#include "moveit_msgs/msg/detail/planner_params__struct.h"


// Include directives for member types
// Member `keys`
// Member `values`
// Member `descriptions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PlannerParams__init(message_memory);
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_fini_function(void * message_memory)
{
  moveit_msgs__msg__PlannerParams__fini(message_memory);
}

size_t moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__keys(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__keys(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__keys(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__keys(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__keys(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__keys(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__keys(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__keys(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__values(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__values(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__descriptions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__descriptions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__descriptions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__descriptions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__descriptions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__descriptions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__descriptions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__descriptions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_member_array[3] = {
  {
    "keys",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, keys),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__keys,  // size() function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__keys,  // get_const(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__keys,  // get(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__keys,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__keys,  // assign(index, value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__keys  // resize(index) function pointer
  },
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, values),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__values,  // size() function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__values,  // get_const(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__values,  // get(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__values,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__values,  // assign(index, value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__values  // resize(index) function pointer
  },
  {
    "descriptions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlannerParams, descriptions),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__size_function__PlannerParams__descriptions,  // size() function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_const_function__PlannerParams__descriptions,  // get_const(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__get_function__PlannerParams__descriptions,  // get(index) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__fetch_function__PlannerParams__descriptions,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__assign_function__PlannerParams__descriptions,  // assign(index, value) function pointer
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__resize_function__PlannerParams__descriptions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PlannerParams",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__msg__PlannerParams),
  moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_member_array,  // message members
  moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle = {
  0,
  &moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlannerParams)() {
  if (!moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__PlannerParams__rosidl_typesupport_introspection_c__PlannerParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
