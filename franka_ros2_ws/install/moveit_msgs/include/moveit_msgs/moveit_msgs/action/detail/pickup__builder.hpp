// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:action/Pickup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PICKUP__BUILDER_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__PICKUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/action/detail/pickup__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_Goal_planning_options
{
public:
  explicit Init_Pickup_Goal_planning_options(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_Goal planning_options(::moveit_msgs::action::Pickup_Goal::_planning_options_type arg)
  {
    msg_.planning_options = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_allowed_planning_time
{
public:
  explicit Init_Pickup_Goal_allowed_planning_time(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_planning_options allowed_planning_time(::moveit_msgs::action::Pickup_Goal::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_Pickup_Goal_planning_options(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_allowed_touch_objects
{
public:
  explicit Init_Pickup_Goal_allowed_touch_objects(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_allowed_planning_time allowed_touch_objects(::moveit_msgs::action::Pickup_Goal::_allowed_touch_objects_type arg)
  {
    msg_.allowed_touch_objects = std::move(arg);
    return Init_Pickup_Goal_allowed_planning_time(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_planner_id
{
public:
  explicit Init_Pickup_Goal_planner_id(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_allowed_touch_objects planner_id(::moveit_msgs::action::Pickup_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_Pickup_Goal_allowed_touch_objects(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_path_constraints
{
public:
  explicit Init_Pickup_Goal_path_constraints(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_planner_id path_constraints(::moveit_msgs::action::Pickup_Goal::_path_constraints_type arg)
  {
    msg_.path_constraints = std::move(arg);
    return Init_Pickup_Goal_planner_id(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_minimize_object_distance
{
public:
  explicit Init_Pickup_Goal_minimize_object_distance(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_path_constraints minimize_object_distance(::moveit_msgs::action::Pickup_Goal::_minimize_object_distance_type arg)
  {
    msg_.minimize_object_distance = std::move(arg);
    return Init_Pickup_Goal_path_constraints(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_attached_object_touch_links
{
public:
  explicit Init_Pickup_Goal_attached_object_touch_links(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_minimize_object_distance attached_object_touch_links(::moveit_msgs::action::Pickup_Goal::_attached_object_touch_links_type arg)
  {
    msg_.attached_object_touch_links = std::move(arg);
    return Init_Pickup_Goal_minimize_object_distance(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_allow_gripper_support_collision
{
public:
  explicit Init_Pickup_Goal_allow_gripper_support_collision(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_attached_object_touch_links allow_gripper_support_collision(::moveit_msgs::action::Pickup_Goal::_allow_gripper_support_collision_type arg)
  {
    msg_.allow_gripper_support_collision = std::move(arg);
    return Init_Pickup_Goal_attached_object_touch_links(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_support_surface_name
{
public:
  explicit Init_Pickup_Goal_support_surface_name(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_allow_gripper_support_collision support_surface_name(::moveit_msgs::action::Pickup_Goal::_support_surface_name_type arg)
  {
    msg_.support_surface_name = std::move(arg);
    return Init_Pickup_Goal_allow_gripper_support_collision(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_possible_grasps
{
public:
  explicit Init_Pickup_Goal_possible_grasps(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_support_surface_name possible_grasps(::moveit_msgs::action::Pickup_Goal::_possible_grasps_type arg)
  {
    msg_.possible_grasps = std::move(arg);
    return Init_Pickup_Goal_support_surface_name(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_end_effector
{
public:
  explicit Init_Pickup_Goal_end_effector(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_possible_grasps end_effector(::moveit_msgs::action::Pickup_Goal::_end_effector_type arg)
  {
    msg_.end_effector = std::move(arg);
    return Init_Pickup_Goal_possible_grasps(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_group_name
{
public:
  explicit Init_Pickup_Goal_group_name(::moveit_msgs::action::Pickup_Goal & msg)
  : msg_(msg)
  {}
  Init_Pickup_Goal_end_effector group_name(::moveit_msgs::action::Pickup_Goal::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_Pickup_Goal_end_effector(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

class Init_Pickup_Goal_target_name
{
public:
  Init_Pickup_Goal_target_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_Goal_group_name target_name(::moveit_msgs::action::Pickup_Goal::_target_name_type arg)
  {
    msg_.target_name = std::move(arg);
    return Init_Pickup_Goal_group_name(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_Goal>()
{
  return moveit_msgs::action::builder::Init_Pickup_Goal_target_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_Result_planning_time
{
public:
  explicit Init_Pickup_Result_planning_time(::moveit_msgs::action::Pickup_Result & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_Result planning_time(::moveit_msgs::action::Pickup_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

class Init_Pickup_Result_grasp
{
public:
  explicit Init_Pickup_Result_grasp(::moveit_msgs::action::Pickup_Result & msg)
  : msg_(msg)
  {}
  Init_Pickup_Result_planning_time grasp(::moveit_msgs::action::Pickup_Result::_grasp_type arg)
  {
    msg_.grasp = std::move(arg);
    return Init_Pickup_Result_planning_time(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

class Init_Pickup_Result_trajectory_descriptions
{
public:
  explicit Init_Pickup_Result_trajectory_descriptions(::moveit_msgs::action::Pickup_Result & msg)
  : msg_(msg)
  {}
  Init_Pickup_Result_grasp trajectory_descriptions(::moveit_msgs::action::Pickup_Result::_trajectory_descriptions_type arg)
  {
    msg_.trajectory_descriptions = std::move(arg);
    return Init_Pickup_Result_grasp(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

class Init_Pickup_Result_trajectory_stages
{
public:
  explicit Init_Pickup_Result_trajectory_stages(::moveit_msgs::action::Pickup_Result & msg)
  : msg_(msg)
  {}
  Init_Pickup_Result_trajectory_descriptions trajectory_stages(::moveit_msgs::action::Pickup_Result::_trajectory_stages_type arg)
  {
    msg_.trajectory_stages = std::move(arg);
    return Init_Pickup_Result_trajectory_descriptions(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

class Init_Pickup_Result_trajectory_start
{
public:
  explicit Init_Pickup_Result_trajectory_start(::moveit_msgs::action::Pickup_Result & msg)
  : msg_(msg)
  {}
  Init_Pickup_Result_trajectory_stages trajectory_start(::moveit_msgs::action::Pickup_Result::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_Pickup_Result_trajectory_stages(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

class Init_Pickup_Result_error_code
{
public:
  Init_Pickup_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_Result_trajectory_start error_code(::moveit_msgs::action::Pickup_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Pickup_Result_trajectory_start(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_Result>()
{
  return moveit_msgs::action::builder::Init_Pickup_Result_error_code();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_Feedback_state
{
public:
  Init_Pickup_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::Pickup_Feedback state(::moveit_msgs::action::Pickup_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_Feedback>()
{
  return moveit_msgs::action::builder::Init_Pickup_Feedback_state();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_SendGoal_Request_goal
{
public:
  explicit Init_Pickup_SendGoal_Request_goal(::moveit_msgs::action::Pickup_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_SendGoal_Request goal(::moveit_msgs::action::Pickup_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_SendGoal_Request msg_;
};

class Init_Pickup_SendGoal_Request_goal_id
{
public:
  Init_Pickup_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_SendGoal_Request_goal goal_id(::moveit_msgs::action::Pickup_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pickup_SendGoal_Request_goal(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_SendGoal_Request>()
{
  return moveit_msgs::action::builder::Init_Pickup_SendGoal_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_SendGoal_Response_stamp
{
public:
  explicit Init_Pickup_SendGoal_Response_stamp(::moveit_msgs::action::Pickup_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_SendGoal_Response stamp(::moveit_msgs::action::Pickup_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_SendGoal_Response msg_;
};

class Init_Pickup_SendGoal_Response_accepted
{
public:
  Init_Pickup_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_SendGoal_Response_stamp accepted(::moveit_msgs::action::Pickup_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Pickup_SendGoal_Response_stamp(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_SendGoal_Response>()
{
  return moveit_msgs::action::builder::Init_Pickup_SendGoal_Response_accepted();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_GetResult_Request_goal_id
{
public:
  Init_Pickup_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::Pickup_GetResult_Request goal_id(::moveit_msgs::action::Pickup_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_GetResult_Request>()
{
  return moveit_msgs::action::builder::Init_Pickup_GetResult_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_GetResult_Response_result
{
public:
  explicit Init_Pickup_GetResult_Response_result(::moveit_msgs::action::Pickup_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_GetResult_Response result(::moveit_msgs::action::Pickup_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_GetResult_Response msg_;
};

class Init_Pickup_GetResult_Response_status
{
public:
  Init_Pickup_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_GetResult_Response_result status(::moveit_msgs::action::Pickup_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Pickup_GetResult_Response_result(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_GetResult_Response>()
{
  return moveit_msgs::action::builder::Init_Pickup_GetResult_Response_status();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Pickup_FeedbackMessage_feedback
{
public:
  explicit Init_Pickup_FeedbackMessage_feedback(::moveit_msgs::action::Pickup_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Pickup_FeedbackMessage feedback(::moveit_msgs::action::Pickup_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_FeedbackMessage msg_;
};

class Init_Pickup_FeedbackMessage_goal_id
{
public:
  Init_Pickup_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pickup_FeedbackMessage_feedback goal_id(::moveit_msgs::action::Pickup_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Pickup_FeedbackMessage_feedback(msg_);
  }

private:
  ::moveit_msgs::action::Pickup_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Pickup_FeedbackMessage>()
{
  return moveit_msgs::action::builder::Init_Pickup_FeedbackMessage_goal_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PICKUP__BUILDER_HPP_
