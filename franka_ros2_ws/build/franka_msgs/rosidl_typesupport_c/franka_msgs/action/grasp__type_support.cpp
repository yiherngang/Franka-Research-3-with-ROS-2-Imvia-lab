// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from franka_msgs:action/Grasp.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_msgs/action/detail/grasp__struct.h"
#include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_Goal_type_support_ids_t;

static const _Grasp_Goal_type_support_ids_t _Grasp_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_Goal_type_support_symbol_names_t _Grasp_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_Goal)),
  }
};

typedef struct _Grasp_Goal_type_support_data_t
{
  void * data[2];
} _Grasp_Goal_type_support_data_t;

static _Grasp_Goal_type_support_data_t _Grasp_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_Goal_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_Goal_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_Goal)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_Result_type_support_ids_t;

static const _Grasp_Result_type_support_ids_t _Grasp_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_Result_type_support_symbol_names_t _Grasp_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_Result)),
  }
};

typedef struct _Grasp_Result_type_support_data_t
{
  void * data[2];
} _Grasp_Result_type_support_data_t;

static _Grasp_Result_type_support_data_t _Grasp_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_Result_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_Result_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_Result)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_Feedback_type_support_ids_t;

static const _Grasp_Feedback_type_support_ids_t _Grasp_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_Feedback_type_support_symbol_names_t _Grasp_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_Feedback)),
  }
};

typedef struct _Grasp_Feedback_type_support_data_t
{
  void * data[2];
} _Grasp_Feedback_type_support_data_t;

static _Grasp_Feedback_type_support_data_t _Grasp_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_Feedback_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_Feedback_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_Feedback)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_SendGoal_Request_type_support_ids_t;

static const _Grasp_SendGoal_Request_type_support_ids_t _Grasp_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_SendGoal_Request_type_support_symbol_names_t _Grasp_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_SendGoal_Request)),
  }
};

typedef struct _Grasp_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Grasp_SendGoal_Request_type_support_data_t;

static _Grasp_SendGoal_Request_type_support_data_t _Grasp_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_SendGoal_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_SendGoal_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_SendGoal_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_SendGoal_Response_type_support_ids_t;

static const _Grasp_SendGoal_Response_type_support_ids_t _Grasp_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_SendGoal_Response_type_support_symbol_names_t _Grasp_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_SendGoal_Response)),
  }
};

typedef struct _Grasp_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Grasp_SendGoal_Response_type_support_data_t;

static _Grasp_SendGoal_Response_type_support_data_t _Grasp_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_SendGoal_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_SendGoal_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_SendGoal_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_SendGoal_type_support_ids_t;

static const _Grasp_SendGoal_type_support_ids_t _Grasp_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_SendGoal_type_support_symbol_names_t _Grasp_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_SendGoal)),
  }
};

typedef struct _Grasp_SendGoal_type_support_data_t
{
  void * data[2];
} _Grasp_SendGoal_type_support_data_t;

static _Grasp_SendGoal_type_support_data_t _Grasp_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_SendGoal_service_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Grasp_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Grasp_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Grasp_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_SendGoal_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_SendGoal)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_GetResult_Request_type_support_ids_t;

static const _Grasp_GetResult_Request_type_support_ids_t _Grasp_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_GetResult_Request_type_support_symbol_names_t _Grasp_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_GetResult_Request)),
  }
};

typedef struct _Grasp_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Grasp_GetResult_Request_type_support_data_t;

static _Grasp_GetResult_Request_type_support_data_t _Grasp_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_GetResult_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_GetResult_Request_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_GetResult_Request)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_GetResult_Response_type_support_ids_t;

static const _Grasp_GetResult_Response_type_support_ids_t _Grasp_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_GetResult_Response_type_support_symbol_names_t _Grasp_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_GetResult_Response)),
  }
};

typedef struct _Grasp_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Grasp_GetResult_Response_type_support_data_t;

static _Grasp_GetResult_Response_type_support_data_t _Grasp_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_GetResult_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_GetResult_Response_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_GetResult_Response)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_GetResult_type_support_ids_t;

static const _Grasp_GetResult_type_support_ids_t _Grasp_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_GetResult_type_support_symbol_names_t _Grasp_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_GetResult)),
  }
};

typedef struct _Grasp_GetResult_type_support_data_t
{
  void * data[2];
} _Grasp_GetResult_type_support_data_t;

static _Grasp_GetResult_type_support_data_t _Grasp_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_GetResult_service_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Grasp_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Grasp_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Grasp_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_GetResult_service_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_GetResult)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__struct.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"
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

typedef struct _Grasp_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Grasp_FeedbackMessage_type_support_ids_t;

static const _Grasp_FeedbackMessage_type_support_ids_t _Grasp_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Grasp_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Grasp_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Grasp_FeedbackMessage_type_support_symbol_names_t _Grasp_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, franka_msgs, action, Grasp_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, franka_msgs, action, Grasp_FeedbackMessage)),
  }
};

typedef struct _Grasp_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Grasp_FeedbackMessage_type_support_data_t;

static _Grasp_FeedbackMessage_type_support_data_t _Grasp_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Grasp_FeedbackMessage_message_typesupport_map = {
  2,
  "franka_msgs",
  &_Grasp_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Grasp_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Grasp_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Grasp_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Grasp_FeedbackMessage_message_typesupport_map),
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
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, franka_msgs, action, Grasp_FeedbackMessage)() {
  return &::franka_msgs::action::rosidl_typesupport_c::Grasp_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "franka_msgs/action/grasp.h"
// already included above
// #include "franka_msgs/action/detail/grasp__type_support.h"

static rosidl_action_type_support_t _franka_msgs__action__Grasp__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, franka_msgs, action, Grasp)()
{
  // Thread-safe by always writing the same values to the static struct
  _franka_msgs__action__Grasp__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Grasp_SendGoal)();
  _franka_msgs__action__Grasp__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Grasp_GetResult)();
  _franka_msgs__action__Grasp__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _franka_msgs__action__Grasp__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, franka_msgs, action, Grasp_FeedbackMessage)();
  _franka_msgs__action__Grasp__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_franka_msgs__action__Grasp__typesupport_c;
}

#ifdef __cplusplus
}
#endif
