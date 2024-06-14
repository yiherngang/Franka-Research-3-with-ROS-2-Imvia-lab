// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/query_planner_interfaces__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"
#include "moveit_msgs/srv/detail/query_planner_interfaces__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__QueryPlannerInterfaces_Request__init(message_memory);
}

void moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__QueryPlannerInterfaces_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__QueryPlannerInterfaces_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "QueryPlannerInterfaces_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Request),
  moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_member_array,  // message members
  moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)() {
  if (!moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__QueryPlannerInterfaces_Request__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__struct.h"


// Include directives for member types
// Member `planner_interfaces`
#include "moveit_msgs/msg/planner_interface_description.h"
// Member `planner_interfaces`
#include "moveit_msgs/msg/detail/planner_interface_description__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__QueryPlannerInterfaces_Response__init(message_memory);
}

void moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__QueryPlannerInterfaces_Response__fini(message_memory);
}

size_t moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__size_function__QueryPlannerInterfaces_Response__planner_interfaces(
  const void * untyped_member)
{
  const moveit_msgs__msg__PlannerInterfaceDescription__Sequence * member =
    (const moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)(untyped_member);
  return member->size;
}

const void * moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__QueryPlannerInterfaces_Response__planner_interfaces(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__PlannerInterfaceDescription__Sequence * member =
    (const moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void * moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_function__QueryPlannerInterfaces_Response__planner_interfaces(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence * member =
    (moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__QueryPlannerInterfaces_Response__planner_interfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__PlannerInterfaceDescription * item =
    ((const moveit_msgs__msg__PlannerInterfaceDescription *)
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__QueryPlannerInterfaces_Response__planner_interfaces(untyped_member, index));
  moveit_msgs__msg__PlannerInterfaceDescription * value =
    (moveit_msgs__msg__PlannerInterfaceDescription *)(untyped_value);
  *value = *item;
}

void moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__QueryPlannerInterfaces_Response__planner_interfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__PlannerInterfaceDescription * item =
    ((moveit_msgs__msg__PlannerInterfaceDescription *)
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_function__QueryPlannerInterfaces_Response__planner_interfaces(untyped_member, index));
  const moveit_msgs__msg__PlannerInterfaceDescription * value =
    (const moveit_msgs__msg__PlannerInterfaceDescription *)(untyped_value);
  *item = *value;
}

bool moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__QueryPlannerInterfaces_Response__planner_interfaces(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence * member =
    (moveit_msgs__msg__PlannerInterfaceDescription__Sequence *)(untyped_member);
  moveit_msgs__msg__PlannerInterfaceDescription__Sequence__fini(member);
  return moveit_msgs__msg__PlannerInterfaceDescription__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_member_array[1] = {
  {
    "planner_interfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__QueryPlannerInterfaces_Response, planner_interfaces),  // bytes offset in struct
    NULL,  // default value
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__size_function__QueryPlannerInterfaces_Response__planner_interfaces,  // size() function pointer
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_const_function__QueryPlannerInterfaces_Response__planner_interfaces,  // get_const(index) function pointer
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__get_function__QueryPlannerInterfaces_Response__planner_interfaces,  // get(index) function pointer
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__fetch_function__QueryPlannerInterfaces_Response__planner_interfaces,  // fetch(index, &value) function pointer
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__assign_function__QueryPlannerInterfaces_Response__planner_interfaces,  // assign(index, value) function pointer
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__resize_function__QueryPlannerInterfaces_Response__planner_interfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "QueryPlannerInterfaces_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__QueryPlannerInterfaces_Response),
  moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_member_array,  // message members
  moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)() {
  moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlannerInterfaceDescription)();
  if (!moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__QueryPlannerInterfaces_Response__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/query_planner_interfaces__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_members = {
  "moveit_msgs__srv",  // service namespace
  "QueryPlannerInterfaces",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces)() {
  if (!moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, QueryPlannerInterfaces_Response)()->data;
  }

  return &moveit_msgs__srv__detail__query_planner_interfaces__rosidl_typesupport_introspection_c__QueryPlannerInterfaces_service_type_support_handle;
}
