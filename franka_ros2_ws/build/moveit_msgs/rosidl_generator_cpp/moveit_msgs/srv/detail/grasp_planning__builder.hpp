// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:srv/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__BUILDER_HPP_
#define MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/srv/detail/grasp_planning__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GraspPlanning_Request_movable_obstacles
{
public:
  explicit Init_GraspPlanning_Request_movable_obstacles(::moveit_msgs::srv::GraspPlanning_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GraspPlanning_Request movable_obstacles(::moveit_msgs::srv::GraspPlanning_Request::_movable_obstacles_type arg)
  {
    msg_.movable_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Request msg_;
};

class Init_GraspPlanning_Request_candidate_grasps
{
public:
  explicit Init_GraspPlanning_Request_candidate_grasps(::moveit_msgs::srv::GraspPlanning_Request & msg)
  : msg_(msg)
  {}
  Init_GraspPlanning_Request_movable_obstacles candidate_grasps(::moveit_msgs::srv::GraspPlanning_Request::_candidate_grasps_type arg)
  {
    msg_.candidate_grasps = std::move(arg);
    return Init_GraspPlanning_Request_movable_obstacles(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Request msg_;
};

class Init_GraspPlanning_Request_support_surfaces
{
public:
  explicit Init_GraspPlanning_Request_support_surfaces(::moveit_msgs::srv::GraspPlanning_Request & msg)
  : msg_(msg)
  {}
  Init_GraspPlanning_Request_candidate_grasps support_surfaces(::moveit_msgs::srv::GraspPlanning_Request::_support_surfaces_type arg)
  {
    msg_.support_surfaces = std::move(arg);
    return Init_GraspPlanning_Request_candidate_grasps(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Request msg_;
};

class Init_GraspPlanning_Request_target
{
public:
  explicit Init_GraspPlanning_Request_target(::moveit_msgs::srv::GraspPlanning_Request & msg)
  : msg_(msg)
  {}
  Init_GraspPlanning_Request_support_surfaces target(::moveit_msgs::srv::GraspPlanning_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_GraspPlanning_Request_support_surfaces(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Request msg_;
};

class Init_GraspPlanning_Request_group_name
{
public:
  Init_GraspPlanning_Request_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspPlanning_Request_target group_name(::moveit_msgs::srv::GraspPlanning_Request::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_GraspPlanning_Request_target(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GraspPlanning_Request>()
{
  return moveit_msgs::srv::builder::Init_GraspPlanning_Request_group_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace srv
{

namespace builder
{

class Init_GraspPlanning_Response_error_code
{
public:
  explicit Init_GraspPlanning_Response_error_code(::moveit_msgs::srv::GraspPlanning_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::srv::GraspPlanning_Response error_code(::moveit_msgs::srv::GraspPlanning_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Response msg_;
};

class Init_GraspPlanning_Response_grasps
{
public:
  Init_GraspPlanning_Response_grasps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspPlanning_Response_error_code grasps(::moveit_msgs::srv::GraspPlanning_Response::_grasps_type arg)
  {
    msg_.grasps = std::move(arg);
    return Init_GraspPlanning_Response_error_code(msg_);
  }

private:
  ::moveit_msgs::srv::GraspPlanning_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::srv::GraspPlanning_Response>()
{
  return moveit_msgs::srv::builder::Init_GraspPlanning_Response_grasps();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__DETAIL__GRASP_PLANNING__BUILDER_HPP_
