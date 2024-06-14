// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/GlobalPlanner.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/global_planner__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_Goal_type_support_ids_t;

static const _GlobalPlanner_Goal_type_support_ids_t _GlobalPlanner_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_Goal_type_support_symbol_names_t _GlobalPlanner_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_Goal)),
  }
};

typedef struct _GlobalPlanner_Goal_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_Goal_type_support_data_t;

static _GlobalPlanner_Goal_type_support_data_t _GlobalPlanner_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Goal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_Goal)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Goal>();
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
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_Result_type_support_ids_t;

static const _GlobalPlanner_Result_type_support_ids_t _GlobalPlanner_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_Result_type_support_symbol_names_t _GlobalPlanner_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_Result)),
  }
};

typedef struct _GlobalPlanner_Result_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_Result_type_support_data_t;

static _GlobalPlanner_Result_type_support_data_t _GlobalPlanner_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Result>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_Result)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Result>();
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
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_Feedback_type_support_ids_t;

static const _GlobalPlanner_Feedback_type_support_ids_t _GlobalPlanner_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_Feedback_type_support_symbol_names_t _GlobalPlanner_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_Feedback)),
  }
};

typedef struct _GlobalPlanner_Feedback_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_Feedback_type_support_data_t;

static _GlobalPlanner_Feedback_type_support_data_t _GlobalPlanner_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Feedback>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_Feedback)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_Feedback>();
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
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_SendGoal_Request_type_support_ids_t;

static const _GlobalPlanner_SendGoal_Request_type_support_ids_t _GlobalPlanner_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_SendGoal_Request_type_support_symbol_names_t _GlobalPlanner_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Request)),
  }
};

typedef struct _GlobalPlanner_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_SendGoal_Request_type_support_data_t;

static _GlobalPlanner_SendGoal_Request_type_support_data_t _GlobalPlanner_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Request>();
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
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_SendGoal_Response_type_support_ids_t;

static const _GlobalPlanner_SendGoal_Response_type_support_ids_t _GlobalPlanner_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_SendGoal_Response_type_support_symbol_names_t _GlobalPlanner_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Response)),
  }
};

typedef struct _GlobalPlanner_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_SendGoal_Response_type_support_data_t;

static _GlobalPlanner_SendGoal_Response_type_support_data_t _GlobalPlanner_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_SendGoal_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_SendGoal_type_support_ids_t;

static const _GlobalPlanner_SendGoal_type_support_ids_t _GlobalPlanner_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_SendGoal_type_support_symbol_names_t _GlobalPlanner_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_SendGoal)),
  }
};

typedef struct _GlobalPlanner_SendGoal_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_SendGoal_type_support_data_t;

static _GlobalPlanner_SendGoal_type_support_data_t _GlobalPlanner_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GlobalPlanner_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::GlobalPlanner_SendGoal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_GetResult_Request_type_support_ids_t;

static const _GlobalPlanner_GetResult_Request_type_support_ids_t _GlobalPlanner_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_GetResult_Request_type_support_symbol_names_t _GlobalPlanner_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Request)),
  }
};

typedef struct _GlobalPlanner_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_GetResult_Request_type_support_data_t;

static _GlobalPlanner_GetResult_Request_type_support_data_t _GlobalPlanner_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Request>();
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
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_GetResult_Response_type_support_ids_t;

static const _GlobalPlanner_GetResult_Response_type_support_ids_t _GlobalPlanner_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_GetResult_Response_type_support_symbol_names_t _GlobalPlanner_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Response)),
  }
};

typedef struct _GlobalPlanner_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_GetResult_Response_type_support_data_t;

static _GlobalPlanner_GetResult_Response_type_support_data_t _GlobalPlanner_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_GetResult_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_GetResult_type_support_ids_t;

static const _GlobalPlanner_GetResult_type_support_ids_t _GlobalPlanner_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_GetResult_type_support_symbol_names_t _GlobalPlanner_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_GetResult)),
  }
};

typedef struct _GlobalPlanner_GetResult_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_GetResult_type_support_data_t;

static _GlobalPlanner_GetResult_type_support_data_t _GlobalPlanner_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GlobalPlanner_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::action::GlobalPlanner_GetResult>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
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

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GlobalPlanner_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GlobalPlanner_FeedbackMessage_type_support_ids_t;

static const _GlobalPlanner_FeedbackMessage_type_support_ids_t _GlobalPlanner_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GlobalPlanner_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GlobalPlanner_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GlobalPlanner_FeedbackMessage_type_support_symbol_names_t _GlobalPlanner_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, GlobalPlanner_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, GlobalPlanner_FeedbackMessage)),
  }
};

typedef struct _GlobalPlanner_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GlobalPlanner_FeedbackMessage_type_support_data_t;

static _GlobalPlanner_FeedbackMessage_type_support_data_t _GlobalPlanner_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GlobalPlanner_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_GlobalPlanner_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GlobalPlanner_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GlobalPlanner_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GlobalPlanner_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GlobalPlanner_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_FeedbackMessage>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, GlobalPlanner_FeedbackMessage)() {
  return get_message_type_support_handle<moveit_msgs::action::GlobalPlanner_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "moveit_msgs/action/detail/global_planner__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace moveit_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GlobalPlanner_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<moveit_msgs::action::GlobalPlanner>()
{
  using ::moveit_msgs::action::rosidl_typesupport_cpp::GlobalPlanner_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GlobalPlanner_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::moveit_msgs::action::GlobalPlanner::Impl::SendGoalService>();
  GlobalPlanner_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::moveit_msgs::action::GlobalPlanner::Impl::GetResultService>();
  GlobalPlanner_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::moveit_msgs::action::GlobalPlanner::Impl::CancelGoalService>();
  GlobalPlanner_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::moveit_msgs::action::GlobalPlanner::Impl::FeedbackMessage>();
  GlobalPlanner_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::moveit_msgs::action::GlobalPlanner::Impl::GoalStatusMessage>();
  return &GlobalPlanner_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
