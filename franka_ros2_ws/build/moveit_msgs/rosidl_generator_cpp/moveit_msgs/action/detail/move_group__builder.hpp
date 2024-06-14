// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__BUILDER_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/action/detail/move_group__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_Goal_planning_options
{
public:
  explicit Init_MoveGroup_Goal_planning_options(::moveit_msgs::action::MoveGroup_Goal & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_Goal planning_options(::moveit_msgs::action::MoveGroup_Goal::_planning_options_type arg)
  {
    msg_.planning_options = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Goal msg_;
};

class Init_MoveGroup_Goal_request
{
public:
  Init_MoveGroup_Goal_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_Goal_planning_options request(::moveit_msgs::action::MoveGroup_Goal::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveGroup_Goal_planning_options(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_Goal>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_Goal_request();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_Result_planning_time
{
public:
  explicit Init_MoveGroup_Result_planning_time(::moveit_msgs::action::MoveGroup_Result & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_Result planning_time(::moveit_msgs::action::MoveGroup_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Result msg_;
};

class Init_MoveGroup_Result_executed_trajectory
{
public:
  explicit Init_MoveGroup_Result_executed_trajectory(::moveit_msgs::action::MoveGroup_Result & msg)
  : msg_(msg)
  {}
  Init_MoveGroup_Result_planning_time executed_trajectory(::moveit_msgs::action::MoveGroup_Result::_executed_trajectory_type arg)
  {
    msg_.executed_trajectory = std::move(arg);
    return Init_MoveGroup_Result_planning_time(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Result msg_;
};

class Init_MoveGroup_Result_planned_trajectory
{
public:
  explicit Init_MoveGroup_Result_planned_trajectory(::moveit_msgs::action::MoveGroup_Result & msg)
  : msg_(msg)
  {}
  Init_MoveGroup_Result_executed_trajectory planned_trajectory(::moveit_msgs::action::MoveGroup_Result::_planned_trajectory_type arg)
  {
    msg_.planned_trajectory = std::move(arg);
    return Init_MoveGroup_Result_executed_trajectory(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Result msg_;
};

class Init_MoveGroup_Result_trajectory_start
{
public:
  explicit Init_MoveGroup_Result_trajectory_start(::moveit_msgs::action::MoveGroup_Result & msg)
  : msg_(msg)
  {}
  Init_MoveGroup_Result_planned_trajectory trajectory_start(::moveit_msgs::action::MoveGroup_Result::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_MoveGroup_Result_planned_trajectory(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Result msg_;
};

class Init_MoveGroup_Result_error_code
{
public:
  Init_MoveGroup_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_Result_trajectory_start error_code(::moveit_msgs::action::MoveGroup_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MoveGroup_Result_trajectory_start(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_Result>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_Result_error_code();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_Feedback_state
{
public:
  Init_MoveGroup_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::MoveGroup_Feedback state(::moveit_msgs::action::MoveGroup_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_Feedback>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_Feedback_state();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_SendGoal_Request_goal
{
public:
  explicit Init_MoveGroup_SendGoal_Request_goal(::moveit_msgs::action::MoveGroup_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_SendGoal_Request goal(::moveit_msgs::action::MoveGroup_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_SendGoal_Request msg_;
};

class Init_MoveGroup_SendGoal_Request_goal_id
{
public:
  Init_MoveGroup_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_SendGoal_Request_goal goal_id(::moveit_msgs::action::MoveGroup_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveGroup_SendGoal_Request_goal(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_SendGoal_Request>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_SendGoal_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_SendGoal_Response_stamp
{
public:
  explicit Init_MoveGroup_SendGoal_Response_stamp(::moveit_msgs::action::MoveGroup_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_SendGoal_Response stamp(::moveit_msgs::action::MoveGroup_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_SendGoal_Response msg_;
};

class Init_MoveGroup_SendGoal_Response_accepted
{
public:
  Init_MoveGroup_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_SendGoal_Response_stamp accepted(::moveit_msgs::action::MoveGroup_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MoveGroup_SendGoal_Response_stamp(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_SendGoal_Response>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_SendGoal_Response_accepted();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_GetResult_Request_goal_id
{
public:
  Init_MoveGroup_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::MoveGroup_GetResult_Request goal_id(::moveit_msgs::action::MoveGroup_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_GetResult_Request>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_GetResult_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_GetResult_Response_result
{
public:
  explicit Init_MoveGroup_GetResult_Response_result(::moveit_msgs::action::MoveGroup_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_GetResult_Response result(::moveit_msgs::action::MoveGroup_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_GetResult_Response msg_;
};

class Init_MoveGroup_GetResult_Response_status
{
public:
  Init_MoveGroup_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_GetResult_Response_result status(::moveit_msgs::action::MoveGroup_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MoveGroup_GetResult_Response_result(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_GetResult_Response>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_GetResult_Response_status();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_MoveGroup_FeedbackMessage_feedback
{
public:
  explicit Init_MoveGroup_FeedbackMessage_feedback(::moveit_msgs::action::MoveGroup_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::MoveGroup_FeedbackMessage feedback(::moveit_msgs::action::MoveGroup_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_FeedbackMessage msg_;
};

class Init_MoveGroup_FeedbackMessage_goal_id
{
public:
  Init_MoveGroup_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveGroup_FeedbackMessage_feedback goal_id(::moveit_msgs::action::MoveGroup_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MoveGroup_FeedbackMessage_feedback(msg_);
  }

private:
  ::moveit_msgs::action::MoveGroup_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::MoveGroup_FeedbackMessage>()
{
  return moveit_msgs::action::builder::Init_MoveGroup_FeedbackMessage_goal_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__MOVE_GROUP__BUILDER_HPP_
