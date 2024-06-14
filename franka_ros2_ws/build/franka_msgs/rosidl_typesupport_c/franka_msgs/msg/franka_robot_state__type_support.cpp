// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from franka_msgs:msg/FrankaRobotState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_msgs/msg/detail/franka_robot_state__struct.h"
#include "franka_msgs/msg/detail/franka_robot_state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _FrankaRobotState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FrankaRobotState_type_support_ids_t;

static const _FrankaRobotState_type_support_ids_t _FrankaRobotState_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FrankaRobotState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FrankaRobotState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FrankaRobotState_type_support_symbol_names_t _FrankaRobotState_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, msg, FrankaRobotState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, msg, FrankaRobotState)),
  }
};

typedef struct _FrankaRobotState_type_support_data_t
{
  void * data[2];
} _FrankaRobotState_type_support_data_t;

static _FrankaRobotState_type_support_data_t _FrankaRobotState_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FrankaRobotState_message_typesupport_map = {
  2,
  "franka_msgs",
  &_FrankaRobotState_message_typesupport_ids.typesupport_identifier[0],
  &_FrankaRobotState_message_typesupport_symbol_names.symbol_name[0],
  &_FrankaRobotState_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FrankaRobotState_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FrankaRobotState_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, msg, FrankaRobotState)() {
  return &::franka_msgs::msg::rosidl_typesupport_c::FrankaRobotState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
