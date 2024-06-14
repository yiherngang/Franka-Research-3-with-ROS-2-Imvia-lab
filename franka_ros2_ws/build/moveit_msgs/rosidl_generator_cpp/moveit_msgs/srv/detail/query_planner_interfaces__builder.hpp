// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/QueryPlannerInterfaces.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/query_planner_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::QueryPlannerInterfaces_Request>()
{
  return ::moveit_msgs::srv::QueryPlannerInterfaces_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_QueryPlannerInterfaces_Response_planner_interfaces
{
public:
  Init_QueryPlannerInterfaces_Response_planner_interfaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::srv::QueryPlannerInterfaces_Response planner_interfaces(::moveit_msgs::srv::QueryPlannerInterfaces_Response::_planner_interfaces_type arg)
  {
    msg_.planner_interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::QueryPlannerInterfaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::QueryPlannerInterfaces_Response>()
{
  return moveit_msgs::srv::builder::Init_QueryPlannerInterfaces_Response_planner_interfaces();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__QUERY_PLANNER_INTERFACES__BUILDER_HPP_
