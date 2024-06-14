// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from franka_msgs:action/Homing.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_msgs/action/detail/homing__struct.h"
#include "franka_msgs/action/detail/homing__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_Goal_type_support_ids_t;

static const _Homing_Goal_type_support_ids_t _Homing_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_Goal_type_support_symbol_names_t _Homing_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_Goal)),
  }
};

typedef struct _Homing_Goal_type_support_data_t
{
  void * data[2];
} _Homing_Goal_type_support_data_t;

static _Homing_Goal_type_support_data_t _Homing_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_Goal_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_Goal)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_Result_type_support_ids_t;

static const _Homing_Result_type_support_ids_t _Homing_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_Result_type_support_symbol_names_t _Homing_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_Result)),
  }
};

typedef struct _Homing_Result_type_support_data_t
{
  void * data[2];
} _Homing_Result_type_support_data_t;

static _Homing_Result_type_support_data_t _Homing_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_Result_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_Result)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_Feedback_type_support_ids_t;

static const _Homing_Feedback_type_support_ids_t _Homing_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_Feedback_type_support_symbol_names_t _Homing_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_Feedback)),
  }
};

typedef struct _Homing_Feedback_type_support_data_t
{
  void * data[2];
} _Homing_Feedback_type_support_data_t;

static _Homing_Feedback_type_support_data_t _Homing_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_Feedback_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_Feedback)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_SendGoal_Request_type_support_ids_t;

static const _Homing_SendGoal_Request_type_support_ids_t _Homing_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_SendGoal_Request_type_support_symbol_names_t _Homing_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_SendGoal_Request)),
  }
};

typedef struct _Homing_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Homing_SendGoal_Request_type_support_data_t;

static _Homing_SendGoal_Request_type_support_data_t _Homing_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_SendGoal_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_SendGoal_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_SendGoal_Response_type_support_ids_t;

static const _Homing_SendGoal_Response_type_support_ids_t _Homing_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_SendGoal_Response_type_support_symbol_names_t _Homing_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_SendGoal_Response)),
  }
};

typedef struct _Homing_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Homing_SendGoal_Response_type_support_data_t;

static _Homing_SendGoal_Response_type_support_data_t _Homing_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_SendGoal_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_SendGoal_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_SendGoal_type_support_ids_t;

static const _Homing_SendGoal_type_support_ids_t _Homing_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_SendGoal_type_support_symbol_names_t _Homing_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_SendGoal)),
  }
};

typedef struct _Homing_SendGoal_type_support_data_t
{
  void * data[2];
} _Homing_SendGoal_type_support_data_t;

static _Homing_SendGoal_type_support_data_t _Homing_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_SendGoal_service_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Homing_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Homing_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Homing_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_SendGoal)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_GetResult_Request_type_support_ids_t;

static const _Homing_GetResult_Request_type_support_ids_t _Homing_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_GetResult_Request_type_support_symbol_names_t _Homing_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_GetResult_Request)),
  }
};

typedef struct _Homing_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Homing_GetResult_Request_type_support_data_t;

static _Homing_GetResult_Request_type_support_data_t _Homing_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_GetResult_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_GetResult_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_GetResult_Response_type_support_ids_t;

static const _Homing_GetResult_Response_type_support_ids_t _Homing_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_GetResult_Response_type_support_symbol_names_t _Homing_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_GetResult_Response)),
  }
};

typedef struct _Homing_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Homing_GetResult_Response_type_support_data_t;

static _Homing_GetResult_Response_type_support_data_t _Homing_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_GetResult_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_GetResult_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_GetResult_type_support_ids_t;

static const _Homing_GetResult_type_support_ids_t _Homing_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_GetResult_type_support_symbol_names_t _Homing_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_GetResult)),
  }
};

typedef struct _Homing_GetResult_type_support_data_t
{
  void * data[2];
} _Homing_GetResult_type_support_data_t;

static _Homing_GetResult_type_support_data_t _Homing_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_GetResult_service_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Homing_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Homing_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Homing_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_GetResult)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__struct.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _Homing_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Homing_FeedbackMessage_type_support_ids_t;

static const _Homing_FeedbackMessage_type_support_ids_t _Homing_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Homing_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Homing_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Homing_FeedbackMessage_type_support_symbol_names_t _Homing_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Homing_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Homing_FeedbackMessage)),
  }
};

typedef struct _Homing_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Homing_FeedbackMessage_type_support_data_t;

static _Homing_FeedbackMessage_type_support_data_t _Homing_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Homing_FeedbackMessage_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Homing_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Homing_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Homing_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Homing_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Homing_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace franka_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Homing_FeedbackMessage)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Homing_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "franka_msgs/action/homing.h"
// already included above
// #include "franka_msgs/action/detail/homing__type_support.h"

static rosidl_action_type_support_t _franka_msgs__action__Homing__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, franka_msgs, action, Homing)()
{
  // Thread-safe by always writing the same values to the static struct
  _franka_msgs__action__Homing__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Homing_SendGoal)();
  _franka_msgs__action__Homing__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Homing_GetResult)();
  _franka_msgs__action__Homing__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _franka_msgs__action__Homing__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Homing_FeedbackMessage)();
  _franka_msgs__action__Homing__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_franka_msgs__action__Homing__typesupport_c;
}

#ifdef __cplusplus
}
#endif
