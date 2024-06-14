// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:srv/SetForceTorqueCollisionBehavior.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "franka_msgs/srv/detail/set_force_torque_collision_behavior__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetForceTorqueCollisionBehavior_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::srv::SetForceTorqueCollisionBehavior_Request(_init);
}

void SetForceTorqueCollisionBehavior_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::srv::SetForceTorqueCollisionBehavior_Request *>(message_memory);
  typed_message->~SetForceTorqueCollisionBehavior_Request();
}

size_t size_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetForceTorqueCollisionBehavior_Request_message_member_array[4] = {
  {
    "lower_torque_thresholds_nominal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Request, lower_torque_thresholds_nominal),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal,  // size() function pointer
    get_const_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal,  // get_const(index) function pointer
    get_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal,  // get(index) function pointer
    fetch_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal,  // fetch(index, &value) function pointer
    assign_function__SetForceTorqueCollisionBehavior_Request__lower_torque_thresholds_nominal,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "upper_torque_thresholds_nominal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Request, upper_torque_thresholds_nominal),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal,  // size() function pointer
    get_const_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal,  // get_const(index) function pointer
    get_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal,  // get(index) function pointer
    fetch_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal,  // fetch(index, &value) function pointer
    assign_function__SetForceTorqueCollisionBehavior_Request__upper_torque_thresholds_nominal,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lower_force_thresholds_nominal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Request, lower_force_thresholds_nominal),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal,  // size() function pointer
    get_const_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal,  // get_const(index) function pointer
    get_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal,  // get(index) function pointer
    fetch_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal,  // fetch(index, &value) function pointer
    assign_function__SetForceTorqueCollisionBehavior_Request__lower_force_thresholds_nominal,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "upper_force_thresholds_nominal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Request, upper_force_thresholds_nominal),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal,  // size() function pointer
    get_const_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal,  // get_const(index) function pointer
    get_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal,  // get(index) function pointer
    fetch_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal,  // fetch(index, &value) function pointer
    assign_function__SetForceTorqueCollisionBehavior_Request__upper_force_thresholds_nominal,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetForceTorqueCollisionBehavior_Request_message_members = {
  "franka_msgs::srv",  // message namespace
  "SetForceTorqueCollisionBehavior_Request",  // message name
  4,  // number of fields
  sizeof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Request),
  SetForceTorqueCollisionBehavior_Request_message_member_array,  // message members
  SetForceTorqueCollisionBehavior_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetForceTorqueCollisionBehavior_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetForceTorqueCollisionBehavior_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetForceTorqueCollisionBehavior_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior_Request>()
{
  return &::franka_msgs::srv::rosidl_typesupport_introspection_cpp::SetForceTorqueCollisionBehavior_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Request)() {
  return &::franka_msgs::srv::rosidl_typesupport_introspection_cpp::SetForceTorqueCollisionBehavior_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "franka_msgs/srv/detail/set_force_torque_collision_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace franka_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetForceTorqueCollisionBehavior_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) franka_msgs::srv::SetForceTorqueCollisionBehavior_Response(_init);
}

void SetForceTorqueCollisionBehavior_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<franka_msgs::srv::SetForceTorqueCollisionBehavior_Response *>(message_memory);
  typed_message->~SetForceTorqueCollisionBehavior_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetForceTorqueCollisionBehavior_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Response, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetForceTorqueCollisionBehavior_Response_message_members = {
  "franka_msgs::srv",  // message namespace
  "SetForceTorqueCollisionBehavior_Response",  // message name
  2,  // number of fields
  sizeof(franka_msgs::srv::SetForceTorqueCollisionBehavior_Response),
  SetForceTorqueCollisionBehavior_Response_message_member_array,  // message members
  SetForceTorqueCollisionBehavior_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetForceTorqueCollisionBehavior_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetForceTorqueCollisionBehavior_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetForceTorqueCollisionBehavior_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior_Response>()
{
  return &::franka_msgs::srv::rosidl_typesupport_introspection_cpp::SetForceTorqueCollisionBehavior_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior_Response)() {
  return &::franka_msgs::srv::rosidl_typesupport_introspection_cpp::SetForceTorqueCollisionBehavior_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "franka_msgs/srv/detail/set_force_torque_collision_behavior__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace franka_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetForceTorqueCollisionBehavior_service_members = {
  "franka_msgs::srv",  // service namespace
  "SetForceTorqueCollisionBehavior",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetForceTorqueCollisionBehavior_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetForceTorqueCollisionBehavior_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace franka_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::franka_msgs::srv::rosidl_typesupport_introspection_cpp::SetForceTorqueCollisionBehavior_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::franka_msgs::srv::SetForceTorqueCollisionBehavior_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, srv, SetForceTorqueCollisionBehavior)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<franka_msgs::srv::SetForceTorqueCollisionBehavior>();
}

#ifdef __cplusplus
}
#endif
