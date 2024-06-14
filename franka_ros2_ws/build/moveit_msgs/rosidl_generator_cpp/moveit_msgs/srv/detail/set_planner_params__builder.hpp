// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/SetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/set_planner_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_SetPlannerParams_Request_replace
{
public:
  explicit Init_SetPlannerParams_Request_replace(::moveit_msgs::srv::SetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::SetPlannerParams_Request replace(::moveit_msgs::srv::SetPlannerParams_Request::_replace_type arg)
  {
    msg_.replace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::SetPlannerParams_Request msg_;
};

class Init_SetPlannerParams_Request_params
{
public:
  explicit Init_SetPlannerParams_Request_params(::moveit_msgs::srv::SetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetPlannerParams_Request_replace params(::moveit_msgs::srv::SetPlannerParams_Request::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_SetPlannerParams_Request_replace(msg_);
  }

private:
  ::moveit_msgs::srv::SetPlannerParams_Request msg_;
};

class Init_SetPlannerParams_Request_group
{
public:
  explicit Init_SetPlannerParams_Request_group(::moveit_msgs::srv::SetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetPlannerParams_Request_params group(::moveit_msgs::srv::SetPlannerParams_Request::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_SetPlannerParams_Request_params(msg_);
  }

private:
  ::moveit_msgs::srv::SetPlannerParams_Request msg_;
};

class Init_SetPlannerParams_Request_planner_config
{
public:
  explicit Init_SetPlannerParams_Request_planner_config(::moveit_msgs::srv::SetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  Init_SetPlannerParams_Request_group planner_config(::moveit_msgs::srv::SetPlannerParams_Request::_planner_config_type arg)
  {
    msg_.planner_config = std::move(arg);
    return Init_SetPlannerParams_Request_group(msg_);
  }

private:
  ::moveit_msgs::srv::SetPlannerParams_Request msg_;
};

class Init_SetPlannerParams_Request_pipeline_id
{
public:
  Init_SetPlannerParams_Request_pipeline_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetPlannerParams_Request_planner_config pipeline_id(::moveit_msgs::srv::SetPlannerParams_Request::_pipeline_id_type arg)
  {
    msg_.pipeline_id = std::move(arg);
    return Init_SetPlannerParams_Request_planner_config(msg_);
  }

private:
  ::moveit_msgs::srv::SetPlannerParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::SetPlannerParams_Request>()
{
  return moveit_msgs::srv::builder::Init_SetPlannerParams_Request_pipeline_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::SetPlannerParams_Response>()
{
  return ::moveit_msgs::srv::SetPlannerParams_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__SET_PLANNER_PARAMS__BUILDER_HPP_
