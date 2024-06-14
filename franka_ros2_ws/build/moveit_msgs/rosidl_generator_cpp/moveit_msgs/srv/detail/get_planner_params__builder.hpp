// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_planner_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlannerParams_Request_group
{
public:
  explicit Init_GetPlannerParams_Request_group(::moveit_msgs::srv::GetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetPlannerParams_Request group(::moveit_msgs::srv::GetPlannerParams_Request::_group_type arg)
  {
    msg_.group = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlannerParams_Request msg_;
};

class Init_GetPlannerParams_Request_planner_config
{
public:
  explicit Init_GetPlannerParams_Request_planner_config(::moveit_msgs::srv::GetPlannerParams_Request & msg)
  : msg_(msg)
  {}
  Init_GetPlannerParams_Request_group planner_config(::moveit_msgs::srv::GetPlannerParams_Request::_planner_config_type arg)
  {
    msg_.planner_config = std::move(arg);
    return Init_GetPlannerParams_Request_group(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlannerParams_Request msg_;
};

class Init_GetPlannerParams_Request_pipeline_id
{
public:
  Init_GetPlannerParams_Request_pipeline_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPlannerParams_Request_planner_config pipeline_id(::moveit_msgs::srv::GetPlannerParams_Request::_pipeline_id_type arg)
  {
    msg_.pipeline_id = std::move(arg);
    return Init_GetPlannerParams_Request_planner_config(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlannerParams_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPlannerParams_Request>()
{
  return moveit_msgs::srv::builder::Init_GetPlannerParams_Request_pipeline_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetPlannerParams_Response_params
{
public:
  Init_GetPlannerParams_Response_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::GetPlannerParams_Response params(::moveit_msgs::srv::GetPlannerParams_Response::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetPlannerParams_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetPlannerParams_Response>()
{
  return moveit_msgs::srv::builder::Init_GetPlannerParams_Response_params();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_PLANNER_PARAMS__BUILDER_HPP_
