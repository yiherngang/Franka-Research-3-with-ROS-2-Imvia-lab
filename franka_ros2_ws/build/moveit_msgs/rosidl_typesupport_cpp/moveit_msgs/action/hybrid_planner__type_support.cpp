// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:action/HybridPlanner.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Goal_type_support_ids_t;

static const _HybridPlanner_Goal_type_support_ids_t _HybridPlanner_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Goal_type_support_symbol_names_t _HybridPlanner_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_Goal)),
  }
};

typedef struct _HybridPlanner_Goal_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Goal_type_support_data_t;

static _HybridPlanner_Goal_type_support_data_t _HybridPlanner_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Goal_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Goal_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Goal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_Goal)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Goal>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Result_type_support_ids_t;

static const _HybridPlanner_Result_type_support_ids_t _HybridPlanner_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Result_type_support_symbol_names_t _HybridPlanner_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_Result)),
  }
};

typedef struct _HybridPlanner_Result_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Result_type_support_data_t;

static _HybridPlanner_Result_type_support_data_t _HybridPlanner_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Result_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Result_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Result_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Result_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Result>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_Result)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Result>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_Feedback_type_support_ids_t;

static const _HybridPlanner_Feedback_type_support_ids_t _HybridPlanner_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_Feedback_type_support_symbol_names_t _HybridPlanner_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_Feedback)),
  }
};

typedef struct _HybridPlanner_Feedback_type_support_data_t
{
  void * data[2];
} _HybridPlanner_Feedback_type_support_data_t;

static _HybridPlanner_Feedback_type_support_data_t _HybridPlanner_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_Feedback_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_Feedback_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Feedback>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_Feedback)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_Feedback>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_Request_type_support_ids_t;

static const _HybridPlanner_SendGoal_Request_type_support_ids_t _HybridPlanner_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_Request_type_support_symbol_names_t _HybridPlanner_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Request)),
  }
};

typedef struct _HybridPlanner_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_Request_type_support_data_t;

static _HybridPlanner_SendGoal_Request_type_support_data_t _HybridPlanner_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_Request_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_SendGoal_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_SendGoal_Request>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_Response_type_support_ids_t;

static const _HybridPlanner_SendGoal_Response_type_support_ids_t _HybridPlanner_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_Response_type_support_symbol_names_t _HybridPlanner_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Response)),
  }
};

typedef struct _HybridPlanner_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_Response_type_support_data_t;

static _HybridPlanner_SendGoal_Response_type_support_data_t _HybridPlanner_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_Response_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_SendGoal_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_SendGoal_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_SendGoal_type_support_ids_t;

static const _HybridPlanner_SendGoal_type_support_ids_t _HybridPlanner_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_SendGoal_type_support_symbol_names_t _HybridPlanner_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_SendGoal)),
  }
};

typedef struct _HybridPlanner_SendGoal_type_support_data_t
{
  void * data[2];
} _HybridPlanner_SendGoal_type_support_data_t;

static _HybridPlanner_SendGoal_type_support_data_t _HybridPlanner_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_SendGoal_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HybridPlanner_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_SendGoal_service_typesupport_map),
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
get_service_type_support_handle<moveit_msgs::action::HybridPlanner_SendGoal>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_Request_type_support_ids_t;

static const _HybridPlanner_GetResult_Request_type_support_ids_t _HybridPlanner_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_Request_type_support_symbol_names_t _HybridPlanner_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_GetResult_Request)),
  }
};

typedef struct _HybridPlanner_GetResult_Request_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_Request_type_support_data_t;

static _HybridPlanner_GetResult_Request_type_support_data_t _HybridPlanner_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_Request_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_Request_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_GetResult_Request>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_GetResult_Request)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_GetResult_Request>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_Response_type_support_ids_t;

static const _HybridPlanner_GetResult_Response_type_support_ids_t _HybridPlanner_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_Response_type_support_symbol_names_t _HybridPlanner_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_GetResult_Response)),
  }
};

typedef struct _HybridPlanner_GetResult_Response_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_Response_type_support_data_t;

static _HybridPlanner_GetResult_Response_type_support_data_t _HybridPlanner_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_Response_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_Response_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_GetResult_Response>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_GetResult_Response)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_GetResult_Response>();
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
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_GetResult_type_support_ids_t;

static const _HybridPlanner_GetResult_type_support_ids_t _HybridPlanner_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_GetResult_type_support_symbol_names_t _HybridPlanner_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_GetResult)),
  }
};

typedef struct _HybridPlanner_GetResult_type_support_data_t
{
  void * data[2];
} _HybridPlanner_GetResult_type_support_data_t;

static _HybridPlanner_GetResult_type_support_data_t _HybridPlanner_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_GetResult_service_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t HybridPlanner_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_GetResult_service_typesupport_map),
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
get_service_type_support_handle<moveit_msgs::action::HybridPlanner_GetResult>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

typedef struct _HybridPlanner_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _HybridPlanner_FeedbackMessage_type_support_ids_t;

static const _HybridPlanner_FeedbackMessage_type_support_ids_t _HybridPlanner_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _HybridPlanner_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _HybridPlanner_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _HybridPlanner_FeedbackMessage_type_support_symbol_names_t _HybridPlanner_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, action, HybridPlanner_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, action, HybridPlanner_FeedbackMessage)),
  }
};

typedef struct _HybridPlanner_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _HybridPlanner_FeedbackMessage_type_support_data_t;

static _HybridPlanner_FeedbackMessage_type_support_data_t _HybridPlanner_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _HybridPlanner_FeedbackMessage_message_typesupport_map = {
  2,
  "moveit_msgs",
  &_HybridPlanner_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_HybridPlanner_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_HybridPlanner_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t HybridPlanner_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_HybridPlanner_FeedbackMessage_message_typesupport_map),
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
get_message_type_support_handle<moveit_msgs::action::HybridPlanner_FeedbackMessage>()
{
  return &::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, moveit_msgs, action, HybridPlanner_FeedbackMessage)() {
  return get_message_type_support_handle<moveit_msgs::action::HybridPlanner_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "moveit_msgs/action/detail/hybrid_planner__struct.hpp"
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

static rosidl_action_type_support_t HybridPlanner_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace moveit_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<moveit_msgs::action::HybridPlanner>()
{
  using ::moveit_msgs::action::rosidl_typesupport_cpp::HybridPlanner_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  HybridPlanner_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::moveit_msgs::action::HybridPlanner::Impl::SendGoalService>();
  HybridPlanner_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::moveit_msgs::action::HybridPlanner::Impl::GetResultService>();
  HybridPlanner_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::moveit_msgs::action::HybridPlanner::Impl::CancelGoalService>();
  HybridPlanner_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::moveit_msgs::action::HybridPlanner::Impl::FeedbackMessage>();
  HybridPlanner_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::moveit_msgs::action::HybridPlanner::Impl::GoalStatusMessage>();
  return &HybridPlanner_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
