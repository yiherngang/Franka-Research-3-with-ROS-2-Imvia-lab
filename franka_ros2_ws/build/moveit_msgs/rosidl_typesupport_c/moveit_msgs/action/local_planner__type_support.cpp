// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/LocalPlanner.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/local_planner__struct.h"
#include "moveit_msgs/action/detail/local_planner__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_Goal_type_support_ids_t;

static const _LocalPlanner_Goal_type_support_ids_t _LocalPlanner_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_Goal_type_support_symbol_names_t _LocalPlanner_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_Goal)),
  }
};

typedef struct _LocalPlanner_Goal_type_support_data_t
{
  void * data[2];
} _LocalPlanner_Goal_type_support_data_t;

static _LocalPlanner_Goal_type_support_data_t _LocalPlanner_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_Goal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_Result_type_support_ids_t;

static const _LocalPlanner_Result_type_support_ids_t _LocalPlanner_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_Result_type_support_symbol_names_t _LocalPlanner_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_Result)),
  }
};

typedef struct _LocalPlanner_Result_type_support_data_t
{
  void * data[2];
} _LocalPlanner_Result_type_support_data_t;

static _LocalPlanner_Result_type_support_data_t _LocalPlanner_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_Result_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_Result_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_Result)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_Feedback_type_support_ids_t;

static const _LocalPlanner_Feedback_type_support_ids_t _LocalPlanner_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_Feedback_type_support_symbol_names_t _LocalPlanner_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_Feedback)),
  }
};

typedef struct _LocalPlanner_Feedback_type_support_data_t
{
  void * data[2];
} _LocalPlanner_Feedback_type_support_data_t;

static _LocalPlanner_Feedback_type_support_data_t _LocalPlanner_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_Feedback)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_SendGoal_Request_type_support_ids_t;

static const _LocalPlanner_SendGoal_Request_type_support_ids_t _LocalPlanner_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_SendGoal_Request_type_support_symbol_names_t _LocalPlanner_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_SendGoal_Request)),
  }
};

typedef struct _LocalPlanner_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _LocalPlanner_SendGoal_Request_type_support_data_t;

static _LocalPlanner_SendGoal_Request_type_support_data_t _LocalPlanner_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_SendGoal_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_SendGoal_Response_type_support_ids_t;

static const _LocalPlanner_SendGoal_Response_type_support_ids_t _LocalPlanner_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_SendGoal_Response_type_support_symbol_names_t _LocalPlanner_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_SendGoal_Response)),
  }
};

typedef struct _LocalPlanner_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _LocalPlanner_SendGoal_Response_type_support_data_t;

static _LocalPlanner_SendGoal_Response_type_support_data_t _LocalPlanner_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_SendGoal_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_SendGoal_type_support_ids_t;

static const _LocalPlanner_SendGoal_type_support_ids_t _LocalPlanner_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_SendGoal_type_support_symbol_names_t _LocalPlanner_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_SendGoal)),
  }
};

typedef struct _LocalPlanner_SendGoal_type_support_data_t
{
  void * data[2];
} _LocalPlanner_SendGoal_type_support_data_t;

static _LocalPlanner_SendGoal_type_support_data_t _LocalPlanner_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LocalPlanner_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_SendGoal)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_GetResult_Request_type_support_ids_t;

static const _LocalPlanner_GetResult_Request_type_support_ids_t _LocalPlanner_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_GetResult_Request_type_support_symbol_names_t _LocalPlanner_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_GetResult_Request)),
  }
};

typedef struct _LocalPlanner_GetResult_Request_type_support_data_t
{
  void * data[2];
} _LocalPlanner_GetResult_Request_type_support_data_t;

static _LocalPlanner_GetResult_Request_type_support_data_t _LocalPlanner_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_GetResult_Request)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_GetResult_Response_type_support_ids_t;

static const _LocalPlanner_GetResult_Response_type_support_ids_t _LocalPlanner_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_GetResult_Response_type_support_symbol_names_t _LocalPlanner_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_GetResult_Response)),
  }
};

typedef struct _LocalPlanner_GetResult_Response_type_support_data_t
{
  void * data[2];
} _LocalPlanner_GetResult_Response_type_support_data_t;

static _LocalPlanner_GetResult_Response_type_support_data_t _LocalPlanner_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_GetResult_Response)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_GetResult_type_support_ids_t;

static const _LocalPlanner_GetResult_type_support_ids_t _LocalPlanner_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_GetResult_type_support_symbol_names_t _LocalPlanner_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_GetResult)),
  }
};

typedef struct _LocalPlanner_GetResult_type_support_data_t
{
  void * data[2];
} _LocalPlanner_GetResult_type_support_data_t;

static _LocalPlanner_GetResult_type_support_data_t _LocalPlanner_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LocalPlanner_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_GetResult)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__struct.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"
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

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _LocalPlanner_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LocalPlanner_FeedbackMessage_type_support_ids_t;

static const _LocalPlanner_FeedbackMessage_type_support_ids_t _LocalPlanner_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LocalPlanner_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LocalPlanner_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LocalPlanner_FeedbackMessage_type_support_symbol_names_t _LocalPlanner_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, action, LocalPlanner_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, LocalPlanner_FeedbackMessage)),
  }
};

typedef struct _LocalPlanner_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _LocalPlanner_FeedbackMessage_type_support_data_t;

static _LocalPlanner_FeedbackMessage_type_support_data_t _LocalPlanner_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LocalPlanner_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_LocalPlanner_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_LocalPlanner_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_LocalPlanner_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LocalPlanner_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LocalPlanner_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace moveit_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_FeedbackMessage)() {
  return &::moveit_msgs::action::rosidl_typesupport_c::LocalPlanner_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "moveit_msgs/action/local_planner.h"
// already included above
// #include "moveit_msgs/action/detail/local_planner__type_support.h"

static rosidl_action_type_support_t _moveit_msgs__action__LocalPlanner__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, moveit_msgs, action, LocalPlanner)()
{
  // Thread-safe by always writing the same values to the static struct
  _moveit_msgs__action__LocalPlanner__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_SendGoal)();
  _moveit_msgs__action__LocalPlanner__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_GetResult)();
  _moveit_msgs__action__LocalPlanner__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _moveit_msgs__action__LocalPlanner__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, moveit_msgs, action, LocalPlanner_FeedbackMessage)();
  _moveit_msgs__action__LocalPlanner__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_moveit_msgs__action__LocalPlanner__typesupport_c;
}

#ifdef __cplusplus
}
#endif
