// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GetPositionFK.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionFK_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionFK_Request_type_support_ids_t;

static const _GetPositionFK_Request_type_support_ids_t _GetPositionFK_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionFK_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionFK_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionFK_Request_type_support_symbol_names_t _GetPositionFK_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionFK_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionFK_Request)),
  }
};

typedef struct _GetPositionFK_Request_type_support_data_t
{
  void * data[2];
} _GetPositionFK_Request_type_support_data_t;

static _GetPositionFK_Request_type_support_data_t _GetPositionFK_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionFK_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionFK_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetPositionFK_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetPositionFK_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPositionFK_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionFK_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GetPositionFK_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionFK_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionFK_Request)() {
  return get_message_type_support_handle<moveit_msgs::srv::GetPositionFK_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionFK_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionFK_Response_type_support_ids_t;

static const _GetPositionFK_Response_type_support_ids_t _GetPositionFK_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionFK_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionFK_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionFK_Response_type_support_symbol_names_t _GetPositionFK_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionFK_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionFK_Response)),
  }
};

typedef struct _GetPositionFK_Response_type_support_data_t
{
  void * data[2];
} _GetPositionFK_Response_type_support_data_t;

static _GetPositionFK_Response_type_support_data_t _GetPositionFK_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionFK_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionFK_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetPositionFK_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetPositionFK_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetPositionFK_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionFK_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GetPositionFK_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionFK_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, srv, GetPositionFK_Response)() {
  return get_message_type_support_handle<moveit_msgs::srv::GetPositionFK_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/srv/detail/get_position_fk__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetPositionFK_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetPositionFK_type_support_ids_t;

static const _GetPositionFK_type_support_ids_t _GetPositionFK_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetPositionFK_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetPositionFK_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetPositionFK_type_support_symbol_names_t _GetPositionFK_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, srv, GetPositionFK)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GetPositionFK)),
  }
};

typedef struct _GetPositionFK_type_support_data_t
{
  void * data[2];
} _GetPositionFK_type_support_data_t;

static _GetPositionFK_type_support_data_t _GetPositionFK_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetPositionFK_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GetPositionFK_service_typesupport_ids.typesupport_identifier[0],
  &_GetPositionFK_service_typesupport_symbol_names.symbol_name[0],
  &_GetPositionFK_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetPositionFK_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetPositionFK_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::GetPositionFK>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_cpp::GetPositionFK_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
