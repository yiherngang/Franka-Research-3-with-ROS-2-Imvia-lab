// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GraspPlanning_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::srv::GraspPlanning_Request(_init);
}

void GraspPlanning_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::srv::GraspPlanning_Request *>(message_memory);
  typed_message->~GraspPlanning_Request();
}

size_t size_function__GraspPlanning_Request__support_surfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspPlanning_Request__support_surfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspPlanning_Request__support_surfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraspPlanning_Request__support_surfaces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GraspPlanning_Request__support_surfaces(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GraspPlanning_Request__support_surfaces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GraspPlanning_Request__support_surfaces(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GraspPlanning_Request__support_surfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GraspPlanning_Request__candidate_grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspPlanning_Request__candidate_grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspPlanning_Request__candidate_grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraspPlanning_Request__candidate_grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(
    get_const_function__GraspPlanning_Request__candidate_grasps(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::Grasp *>(untyped_value);
  value = item;
}

void assign_function__GraspPlanning_Request__candidate_grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::Grasp *>(
    get_function__GraspPlanning_Request__candidate_grasps(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(untyped_value);
  item = value;
}

void resize_function__GraspPlanning_Request__candidate_grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GraspPlanning_Request__movable_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::CollisionObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspPlanning_Request__movable_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::CollisionObject> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspPlanning_Request__movable_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::CollisionObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraspPlanning_Request__movable_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::CollisionObject *>(
    get_const_function__GraspPlanning_Request__movable_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::CollisionObject *>(untyped_value);
  value = item;
}

void assign_function__GraspPlanning_Request__movable_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::CollisionObject *>(
    get_function__GraspPlanning_Request__movable_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::CollisionObject *>(untyped_value);
  item = value;
}

void resize_function__GraspPlanning_Request__movable_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::CollisionObject> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspPlanning_Request_message_member_array[5] = {
  {
    "group_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Request, group_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::CollisionObject>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Request, target),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "support_surfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Request, support_surfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspPlanning_Request__support_surfaces,  // size() function pointer
    get_const_function__GraspPlanning_Request__support_surfaces,  // get_const(index) function pointer
    get_function__GraspPlanning_Request__support_surfaces,  // get(index) function pointer
    fetch_function__GraspPlanning_Request__support_surfaces,  // fetch(index, &value) function pointer
    assign_function__GraspPlanning_Request__support_surfaces,  // assign(index, value) function pointer
    resize_function__GraspPlanning_Request__support_surfaces  // resize(index) function pointer
  },
  {
    "candidate_grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Request, candidate_grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspPlanning_Request__candidate_grasps,  // size() function pointer
    get_const_function__GraspPlanning_Request__candidate_grasps,  // get_const(index) function pointer
    get_function__GraspPlanning_Request__candidate_grasps,  // get(index) function pointer
    fetch_function__GraspPlanning_Request__candidate_grasps,  // fetch(index, &value) function pointer
    assign_function__GraspPlanning_Request__candidate_grasps,  // assign(index, value) function pointer
    resize_function__GraspPlanning_Request__candidate_grasps  // resize(index) function pointer
  },
  {
    "movable_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::CollisionObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Request, movable_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspPlanning_Request__movable_obstacles,  // size() function pointer
    get_const_function__GraspPlanning_Request__movable_obstacles,  // get_const(index) function pointer
    get_function__GraspPlanning_Request__movable_obstacles,  // get(index) function pointer
    fetch_function__GraspPlanning_Request__movable_obstacles,  // fetch(index, &value) function pointer
    assign_function__GraspPlanning_Request__movable_obstacles,  // assign(index, value) function pointer
    resize_function__GraspPlanning_Request__movable_obstacles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspPlanning_Request_message_members = {
  "moveit_msgs::srv",  // message namespace
  "GraspPlanning_Request",  // message name
  5,  // number of fields
  sizeof(moveit_msgs::srv::GraspPlanning_Request),
  GraspPlanning_Request_message_member_array,  // message members
  GraspPlanning_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraspPlanning_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspPlanning_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Request>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::GraspPlanning_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning_Request)() {
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::GraspPlanning_Request_message_type_support_handle;
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
// #include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
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

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GraspPlanning_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) moveit_msgs::srv::GraspPlanning_Response(_init);
}

void GraspPlanning_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<moveit_msgs::srv::GraspPlanning_Response *>(message_memory);
  typed_message->~GraspPlanning_Response();
}

size_t size_function__GraspPlanning_Response__grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspPlanning_Response__grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspPlanning_Response__grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void fetch_function__GraspPlanning_Response__grasps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(
    get_const_function__GraspPlanning_Response__grasps(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::Grasp *>(untyped_value);
  value = item;
}

void assign_function__GraspPlanning_Response__grasps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::Grasp *>(
    get_function__GraspPlanning_Response__grasps(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::Grasp *>(untyped_value);
  item = value;
}

void resize_function__GraspPlanning_Response__grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspPlanning_Response_message_member_array[2] = {
  {
    "grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Response, grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspPlanning_Response__grasps,  // size() function pointer
    get_const_function__GraspPlanning_Response__grasps,  // get_const(index) function pointer
    get_function__GraspPlanning_Response__grasps,  // get(index) function pointer
    fetch_function__GraspPlanning_Response__grasps,  // fetch(index, &value) function pointer
    assign_function__GraspPlanning_Response__grasps,  // assign(index, value) function pointer
    resize_function__GraspPlanning_Response__grasps  // resize(index) function pointer
  },
  {
    "error_code",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::MoveItErrorCodes>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs::srv::GraspPlanning_Response, error_code),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspPlanning_Response_message_members = {
  "moveit_msgs::srv",  // message namespace
  "GraspPlanning_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs::srv::GraspPlanning_Response),
  GraspPlanning_Response_message_member_array,  // message members
  GraspPlanning_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraspPlanning_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspPlanning_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::srv::GraspPlanning_Response>()
{
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::GraspPlanning_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning_Response)() {
  return &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::GraspPlanning_Response_message_type_support_handle;
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
// #include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace moveit_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GraspPlanning_service_members = {
  "moveit_msgs::srv",  // service namespace
  "GraspPlanning",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<moveit_msgs::srv::GraspPlanning>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GraspPlanning_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspPlanning_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace moveit_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<moveit_msgs::srv::GraspPlanning>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::moveit_msgs::srv::rosidl_typesupport_introspection_cpp::GraspPlanning_service_type_support_handle;
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
        ::moveit_msgs::srv::GraspPlanning_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::moveit_msgs::srv::GraspPlanning_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, moveit_msgs, srv, GraspPlanning)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<moveit_msgs::srv::GraspPlanning>();
}

#ifdef __cplusplus
}
#endif
