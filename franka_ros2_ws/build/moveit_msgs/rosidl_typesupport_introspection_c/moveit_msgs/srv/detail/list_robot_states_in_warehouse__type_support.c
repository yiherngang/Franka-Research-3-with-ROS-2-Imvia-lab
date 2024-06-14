// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"
#include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.h"


// Include directives for member types
// Member `regex`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__init(message_memory);
}

void moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_member_array[2] = {
  {
    "regex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request, regex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request, robot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "ListRobotStatesInWarehouse_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Request),
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_member_array,  // message members
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Request)() {
  if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__ListRobotStatesInWarehouse_Request__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__struct.h"


// Include directives for member types
// Member `states`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__init(message_memory);
}

void moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__fini(message_memory);
}

size_t moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__size_function__ListRobotStatesInWarehouse_Response__states(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_const_function__ListRobotStatesInWarehouse_Response__states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_function__ListRobotStatesInWarehouse_Response__states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__fetch_function__ListRobotStatesInWarehouse_Response__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_const_function__ListRobotStatesInWarehouse_Response__states(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__assign_function__ListRobotStatesInWarehouse_Response__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_function__ListRobotStatesInWarehouse_Response__states(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__resize_function__ListRobotStatesInWarehouse_Response__states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_member_array[1] = {
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response, states),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__size_function__ListRobotStatesInWarehouse_Response__states,  // size() function pointer
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_const_function__ListRobotStatesInWarehouse_Response__states,  // get_const(index) function pointer
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__get_function__ListRobotStatesInWarehouse_Response__states,  // get(index) function pointer
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__fetch_function__ListRobotStatesInWarehouse_Response__states,  // fetch(index, &value) function pointer
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__assign_function__ListRobotStatesInWarehouse_Response__states,  // assign(index, value) function pointer
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__resize_function__ListRobotStatesInWarehouse_Response__states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "ListRobotStatesInWarehouse_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__ListRobotStatesInWarehouse_Response),
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_member_array,  // message members
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Response)() {
  if (!moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__ListRobotStatesInWarehouse_Response__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/list_robot_states_in_warehouse__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_members = {
  "moveit_msgs__srv",  // service namespace
  "ListRobotStatesInWarehouse",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse)() {
  if (!moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, ListRobotStatesInWarehouse_Response)()->data;
  }

  return &moveit_msgs__srv__detail__list_robot_states_in_warehouse__rosidl_typesupport_introspection_c__ListRobotStatesInWarehouse_service_type_support_handle;
}
