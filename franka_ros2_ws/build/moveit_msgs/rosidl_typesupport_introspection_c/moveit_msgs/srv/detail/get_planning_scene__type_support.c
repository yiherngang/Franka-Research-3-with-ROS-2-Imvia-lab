// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/detail/get_planning_scene__functions.h"
#include "moveit_msgs/srv/detail/get_planning_scene__struct.h"


// Include directives for member types
// Member `components`
#include "moveit_msgs/msg/planning_scene_components.h"
// Member `components`
#include "moveit_msgs/msg/detail/planning_scene_components__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GetPlanningScene_Request__init(message_memory);
}

void moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_fini_function(void * message_memory)
{
  moveit_msgs__srv__GetPlanningScene_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_member_array[1] = {
  {
    "components",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPlanningScene_Request, components),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPlanningScene_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__GetPlanningScene_Request),
  moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_member_array,  // message members
  moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle = {
  0,
  &moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Request)() {
  moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningSceneComponents)();
  if (!moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__GetPlanningScene_Request__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/detail/get_planning_scene__functions.h"
// already included above
// #include "moveit_msgs/srv/detail/get_planning_scene__struct.h"


// Include directives for member types
// Member `scene`
#include "moveit_msgs/msg/planning_scene.h"
// Member `scene`
#include "moveit_msgs/msg/detail/planning_scene__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  moveit_msgs__srv__GetPlanningScene_Response__init(message_memory);
}

void moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_fini_function(void * message_memory)
{
  moveit_msgs__srv__GetPlanningScene_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[1] = {
  {
    "scene",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPlanningScene_Response, scene),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPlanningScene_Response",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__GetPlanningScene_Response),
  moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array,  // message members
  moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle = {
  0,
  &moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Response)() {
  moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningScene)();
  if (!moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &moveit_msgs__srv__GetPlanningScene_Response__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/detail/get_planning_scene__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_members = {
  "moveit_msgs__srv",  // service namespace
  "GetPlanningScene",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle = {
  0,
  &moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene)() {
  if (!moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPlanningScene_Response)()->data;
  }

  return &moveit_msgs__srv__detail__get_planning_scene__rosidl_typesupport_introspection_c__GetPlanningScene_service_type_support_handle;
}
