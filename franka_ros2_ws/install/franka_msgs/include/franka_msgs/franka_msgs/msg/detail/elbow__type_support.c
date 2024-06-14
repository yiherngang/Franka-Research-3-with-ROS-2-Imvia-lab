// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from franka_msgs:msg/Elbow.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "franka_msgs/msg/detail/elbow__rosidl_typesupport_introspection_c.h"
#include "franka_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "franka_msgs/msg/detail/elbow__functions.h"
#include "franka_msgs/msg/detail/elbow__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  franka_msgs__msg__Elbow__init(message_memory);
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_fini_function(void * message_memory)
{
  franka_msgs__msg__Elbow__fini(message_memory);
}

size_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__desired_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__desired_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__desired_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__desired_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__desired_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__desired_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__desired_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_velocity(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_velocity(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_velocity(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_velocity(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_acceleration(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_acceleration(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_acceleration(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_acceleration(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_acceleration(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_member_array[5] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, position),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__position,  // size() function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__position,  // get_const(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__position,  // get(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__position,  // fetch(index, &value) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desired_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, desired_position),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__desired_position,  // size() function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__desired_position,  // get_const(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__desired_position,  // get(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__desired_position,  // fetch(index, &value) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__desired_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_position),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_position,  // size() function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_position,  // get_const(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_position,  // get(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_position,  // fetch(index, &value) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_velocity),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_velocity,  // size() function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_velocity,  // get_const(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_velocity,  // get(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_velocity,  // fetch(index, &value) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "commanded_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(franka_msgs__msg__Elbow, commanded_acceleration),  // bytes offset in struct
    NULL,  // default value
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__size_function__Elbow__commanded_acceleration,  // size() function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_const_function__Elbow__commanded_acceleration,  // get_const(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__get_function__Elbow__commanded_acceleration,  // get(index) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__fetch_function__Elbow__commanded_acceleration,  // fetch(index, &value) function pointer
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__assign_function__Elbow__commanded_acceleration,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_members = {
  "franka_msgs__msg",  // message namespace
  "Elbow",  // message name
  5,  // number of fields
  sizeof(franka_msgs__msg__Elbow),
  franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_member_array,  // message members
  franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_init_function,  // function to initialize message memory (memory has to be allocated)
  franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle = {
  0,
  &franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_franka_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, Elbow)() {
  if (!franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle.typesupport_identifier) {
    franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &franka_msgs__msg__Elbow__rosidl_typesupport_introspection_c__Elbow_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
