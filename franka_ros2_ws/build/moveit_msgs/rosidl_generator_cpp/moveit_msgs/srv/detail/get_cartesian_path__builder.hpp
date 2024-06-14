// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/get_cartesian_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCartesianPath_Request_path_constraints
{
public:
  explicit Init_GetCartesianPath_Request_path_constraints(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetCartesianPath_Request path_constraints(::moveit_msgs::srv::GetCartesianPath_Request::_path_constraints_type arg)
  {
    msg_.path_constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_avoid_collisions
{
public:
  explicit Init_GetCartesianPath_Request_avoid_collisions(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_path_constraints avoid_collisions(::moveit_msgs::srv::GetCartesianPath_Request::_avoid_collisions_type arg)
  {
    msg_.avoid_collisions = std::move(arg);
    return Init_GetCartesianPath_Request_path_constraints(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_revolute_jump_threshold
{
public:
  explicit Init_GetCartesianPath_Request_revolute_jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_avoid_collisions revolute_jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request::_revolute_jump_threshold_type arg)
  {
    msg_.revolute_jump_threshold = std::move(arg);
    return Init_GetCartesianPath_Request_avoid_collisions(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_prismatic_jump_threshold
{
public:
  explicit Init_GetCartesianPath_Request_prismatic_jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_revolute_jump_threshold prismatic_jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request::_prismatic_jump_threshold_type arg)
  {
    msg_.prismatic_jump_threshold = std::move(arg);
    return Init_GetCartesianPath_Request_revolute_jump_threshold(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_jump_threshold
{
public:
  explicit Init_GetCartesianPath_Request_jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_prismatic_jump_threshold jump_threshold(::moveit_msgs::srv::GetCartesianPath_Request::_jump_threshold_type arg)
  {
    msg_.jump_threshold = std::move(arg);
    return Init_GetCartesianPath_Request_prismatic_jump_threshold(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_max_step
{
public:
  explicit Init_GetCartesianPath_Request_max_step(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_jump_threshold max_step(::moveit_msgs::srv::GetCartesianPath_Request::_max_step_type arg)
  {
    msg_.max_step = std::move(arg);
    return Init_GetCartesianPath_Request_jump_threshold(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_waypoints
{
public:
  explicit Init_GetCartesianPath_Request_waypoints(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_max_step waypoints(::moveit_msgs::srv::GetCartesianPath_Request::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return Init_GetCartesianPath_Request_max_step(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_link_name
{
public:
  explicit Init_GetCartesianPath_Request_link_name(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_waypoints link_name(::moveit_msgs::srv::GetCartesianPath_Request::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return Init_GetCartesianPath_Request_waypoints(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_group_name
{
public:
  explicit Init_GetCartesianPath_Request_group_name(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_link_name group_name(::moveit_msgs::srv::GetCartesianPath_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_GetCartesianPath_Request_link_name(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_start_state
{
public:
  explicit Init_GetCartesianPath_Request_start_state(::moveit_msgs::srv::GetCartesianPath_Request & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Request_group_name start_state(::moveit_msgs::srv::GetCartesianPath_Request::_start_state_type arg)
  {
    msg_.start_state = std::move(arg);
    return Init_GetCartesianPath_Request_group_name(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

class Init_GetCartesianPath_Request_header
{
public:
  Init_GetCartesianPath_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCartesianPath_Request_start_state header(::moveit_msgs::srv::GetCartesianPath_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetCartesianPath_Request_start_state(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetCartesianPath_Request>()
{
  return moveit_msgs::srv::builder::Init_GetCartesianPath_Request_header();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GetCartesianPath_Response_error_code
{
public:
  explicit Init_GetCartesianPath_Response_error_code(::moveit_msgs::srv::GetCartesianPath_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GetCartesianPath_Response error_code(::moveit_msgs::srv::GetCartesianPath_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Response msg_;
};

class Init_GetCartesianPath_Response_fraction
{
public:
  explicit Init_GetCartesianPath_Response_fraction(::moveit_msgs::srv::GetCartesianPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Response_error_code fraction(::moveit_msgs::srv::GetCartesianPath_Response::_fraction_type arg)
  {
    msg_.fraction = std::move(arg);
    return Init_GetCartesianPath_Response_error_code(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Response msg_;
};

class Init_GetCartesianPath_Response_solution
{
public:
  explicit Init_GetCartesianPath_Response_solution(::moveit_msgs::srv::GetCartesianPath_Response & msg)
  : msg_(msg)
  {}
  Init_GetCartesianPath_Response_fraction solution(::moveit_msgs::srv::GetCartesianPath_Response::_solution_type arg)
  {
    msg_.solution = std::move(arg);
    return Init_GetCartesianPath_Response_fraction(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Response msg_;
};

class Init_GetCartesianPath_Response_start_state
{
public:
  Init_GetCartesianPath_Response_start_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCartesianPath_Response_solution start_state(::moveit_msgs::srv::GetCartesianPath_Response::_start_state_type arg)
  {
    msg_.start_state = std::move(arg);
    return Init_GetCartesianPath_Response_solution(msg_);
  }

private:
  ::moveit_msgs::srv::GetCartesianPath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GetCartesianPath_Response>()
{
  return moveit_msgs::srv::builder::Init_GetCartesianPath_Response_start_state();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GET_CARTESIAN_PATH__BUILDER_HPP_
