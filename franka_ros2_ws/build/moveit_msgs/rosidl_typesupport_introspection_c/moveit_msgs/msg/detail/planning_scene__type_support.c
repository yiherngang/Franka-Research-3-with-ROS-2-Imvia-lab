// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/PlanningScene.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/detail/planning_scene__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/detail/planning_scene__functions.h"
#include "moveit_msgs/msg/detail/planning_scene__struct.h"


// Include directives for member types
// Member `name`
// Member `robot_model_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `robot_state`
#include "moveit_msgs/msg/robot_state.h"
// Member `robot_state`
#include "moveit_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
// Member `fixed_frame_transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `fixed_frame_transforms`
#include "geometry_msgs/msg/detail/transform_stamped__rosidl_typesupport_introspection_c.h"
// Member `allowed_collision_matrix`
#include "moveit_msgs/msg/allowed_collision_matrix.h"
// Member `allowed_collision_matrix`
#include "moveit_msgs/msg/detail/allowed_collision_matrix__rosidl_typesupport_introspection_c.h"
// Member `link_padding`
#include "moveit_msgs/msg/link_padding.h"
// Member `link_padding`
#include "moveit_msgs/msg/detail/link_padding__rosidl_typesupport_introspection_c.h"
// Member `link_scale`
#include "moveit_msgs/msg/link_scale.h"
// Member `link_scale`
#include "moveit_msgs/msg/detail/link_scale__rosidl_typesupport_introspection_c.h"
// Member `object_colors`
#include "moveit_msgs/msg/object_color.h"
// Member `object_colors`
#include "moveit_msgs/msg/detail/object_color__rosidl_typesupport_introspection_c.h"
// Member `world`
#include "moveit_msgs/msg/planning_scene_world.h"
// Member `world`
#include "moveit_msgs/msg/detail/planning_scene_world__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__msg__PlanningScene__init(message_memory);
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_fini_function(void * message_memory)
{
  moveit_msgs__msg__PlanningScene__fini(message_memory);
}

size_t moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__fixed_frame_transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__fixed_frame_transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__fixed_frame_transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__fixed_frame_transforms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__TransformStamped * item =
    ((const geometry_msgs__msg__TransformStamped *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__fixed_frame_transforms(untyped_member, index));
  geometry_msgs__msg__TransformStamped * value =
    (geometry_msgs__msg__TransformStamped *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__fixed_frame_transforms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__TransformStamped * item =
    ((geometry_msgs__msg__TransformStamped *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__fixed_frame_transforms(untyped_member, index));
  const geometry_msgs__msg__TransformStamped * value =
    (const geometry_msgs__msg__TransformStamped *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__fixed_frame_transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__link_padding(
  const void * untyped_member)
{
  const moveit_msgs__msg__LinkPadding__Sequence * member =
    (const moveit_msgs__msg__LinkPadding__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_padding(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__LinkPadding__Sequence * member =
    (const moveit_msgs__msg__LinkPadding__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_padding(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__LinkPadding__Sequence * member =
    (moveit_msgs__msg__LinkPadding__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__link_padding(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__LinkPadding * item =
    ((const moveit_msgs__msg__LinkPadding *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_padding(untyped_member, index));
  moveit_msgs__msg__LinkPadding * value =
    (moveit_msgs__msg__LinkPadding *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__link_padding(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__LinkPadding * item =
    ((moveit_msgs__msg__LinkPadding *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_padding(untyped_member, index));
  const moveit_msgs__msg__LinkPadding * value =
    (const moveit_msgs__msg__LinkPadding *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__link_padding(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__LinkPadding__Sequence * member =
    (moveit_msgs__msg__LinkPadding__Sequence *)(untyped_member);
  moveit_msgs__msg__LinkPadding__Sequence__fini(member);
  return moveit_msgs__msg__LinkPadding__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__link_scale(
  const void * untyped_member)
{
  const moveit_msgs__msg__LinkScale__Sequence * member =
    (const moveit_msgs__msg__LinkScale__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_scale(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__LinkScale__Sequence * member =
    (const moveit_msgs__msg__LinkScale__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_scale(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__LinkScale__Sequence * member =
    (moveit_msgs__msg__LinkScale__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__link_scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__LinkScale * item =
    ((const moveit_msgs__msg__LinkScale *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_scale(untyped_member, index));
  moveit_msgs__msg__LinkScale * value =
    (moveit_msgs__msg__LinkScale *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__link_scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__LinkScale * item =
    ((moveit_msgs__msg__LinkScale *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_scale(untyped_member, index));
  const moveit_msgs__msg__LinkScale * value =
    (const moveit_msgs__msg__LinkScale *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__link_scale(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__LinkScale__Sequence * member =
    (moveit_msgs__msg__LinkScale__Sequence *)(untyped_member);
  moveit_msgs__msg__LinkScale__Sequence__fini(member);
  return moveit_msgs__msg__LinkScale__Sequence__init(member, size);
}

size_t moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__object_colors(
  const void * untyped_member)
{
  const moveit_msgs__msg__ObjectColor__Sequence * member =
    (const moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__object_colors(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__ObjectColor__Sequence * member =
    (const moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__object_colors(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__ObjectColor__Sequence * member =
    (moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__object_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__ObjectColor * item =
    ((const moveit_msgs__msg__ObjectColor *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__object_colors(untyped_member, index));
  moveit_msgs__msg__ObjectColor * value =
    (moveit_msgs__msg__ObjectColor *)(untyped_value);
  *value = *item;
}

void moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__object_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__ObjectColor * item =
    ((moveit_msgs__msg__ObjectColor *)
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__object_colors(untyped_member, index));
  const moveit_msgs__msg__ObjectColor * value =
    (const moveit_msgs__msg__ObjectColor *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__object_colors(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__ObjectColor__Sequence * member =
    (moveit_msgs__msg__ObjectColor__Sequence *)(untyped_member);
  moveit_msgs__msg__ObjectColor__Sequence__fini(member);
  return moveit_msgs__msg__ObjectColor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[10] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_model_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, robot_model_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_frame_transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, fixed_frame_transforms),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__fixed_frame_transforms,  // size() function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__fixed_frame_transforms,  // get_const(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__fixed_frame_transforms,  // get(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__fixed_frame_transforms,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__fixed_frame_transforms,  // assign(index, value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__fixed_frame_transforms  // resize(index) function pointer
  },
  {
    "allowed_collision_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, allowed_collision_matrix),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_padding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, link_padding),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__link_padding,  // size() function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_padding,  // get_const(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_padding,  // get(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__link_padding,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__link_padding,  // assign(index, value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__link_padding  // resize(index) function pointer
  },
  {
    "link_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, link_scale),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__link_scale,  // size() function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__link_scale,  // get_const(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__link_scale,  // get(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__link_scale,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__link_scale,  // assign(index, value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__link_scale  // resize(index) function pointer
  },
  {
    "object_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, object_colors),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__size_function__PlanningScene__object_colors,  // size() function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_const_function__PlanningScene__object_colors,  // get_const(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__get_function__PlanningScene__object_colors,  // get(index) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__fetch_function__PlanningScene__object_colors,  // fetch(index, &value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__assign_function__PlanningScene__object_colors,  // assign(index, value) function pointer
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__resize_function__PlanningScene__object_colors  // resize(index) function pointer
  },
  {
    "world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_diff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__PlanningScene, is_diff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_members = {
  "moveit_msgs__msg",  // message namespace
  "PlanningScene",  // message name
  10,  // number of fields
  sizeof(moveit_msgs__msg__PlanningScene),
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array,  // message members
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_type_support_handle = {
  0,
  &moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningScene)() {
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, AllowedCollisionMatrix)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, LinkPadding)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, LinkScale)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, ObjectColor)();
  moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningSceneWorld)();
  if (!moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__msg__PlanningScene__rosidl_typesupport_introspection_c__PlanningScene_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
