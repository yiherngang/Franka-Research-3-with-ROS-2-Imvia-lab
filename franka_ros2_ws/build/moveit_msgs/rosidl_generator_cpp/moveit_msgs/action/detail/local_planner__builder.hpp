// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:action/LocalPlanner.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__BUILDER_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/action/detail/local_planner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_Goal_local_constraints
{
public:
  Init_LocalPlanner_Goal_local_constraints()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::LocalPlanner_Goal local_constraints(::moveit_msgs::action::LocalPlanner_Goal::_local_constraints_type arg)
  {
    msg_.local_constraints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_Goal>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_Goal_local_constraints();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_Result_error_message
{
public:
  explicit Init_LocalPlanner_Result_error_message(::moveit_msgs::action::LocalPlanner_Result & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::LocalPlanner_Result error_message(::moveit_msgs::action::LocalPlanner_Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_Result msg_;
};

class Init_LocalPlanner_Result_error_code
{
public:
  Init_LocalPlanner_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanner_Result_error_message error_code(::moveit_msgs::action::LocalPlanner_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LocalPlanner_Result_error_message(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_Result>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_Result_error_code();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_Feedback_feedback
{
public:
  Init_LocalPlanner_Feedback_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::LocalPlanner_Feedback feedback(::moveit_msgs::action::LocalPlanner_Feedback::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_Feedback>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_Feedback_feedback();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_SendGoal_Request_goal
{
public:
  explicit Init_LocalPlanner_SendGoal_Request_goal(::moveit_msgs::action::LocalPlanner_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::LocalPlanner_SendGoal_Request goal(::moveit_msgs::action::LocalPlanner_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_SendGoal_Request msg_;
};

class Init_LocalPlanner_SendGoal_Request_goal_id
{
public:
  Init_LocalPlanner_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanner_SendGoal_Request_goal goal_id(::moveit_msgs::action::LocalPlanner_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LocalPlanner_SendGoal_Request_goal(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_SendGoal_Request>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_SendGoal_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_SendGoal_Response_stamp
{
public:
  explicit Init_LocalPlanner_SendGoal_Response_stamp(::moveit_msgs::action::LocalPlanner_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::LocalPlanner_SendGoal_Response stamp(::moveit_msgs::action::LocalPlanner_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_SendGoal_Response msg_;
};

class Init_LocalPlanner_SendGoal_Response_accepted
{
public:
  Init_LocalPlanner_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanner_SendGoal_Response_stamp accepted(::moveit_msgs::action::LocalPlanner_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LocalPlanner_SendGoal_Response_stamp(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_SendGoal_Response>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_SendGoal_Response_accepted();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_GetResult_Request_goal_id
{
public:
  Init_LocalPlanner_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::LocalPlanner_GetResult_Request goal_id(::moveit_msgs::action::LocalPlanner_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_GetResult_Request>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_GetResult_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_GetResult_Response_result
{
public:
  explicit Init_LocalPlanner_GetResult_Response_result(::moveit_msgs::action::LocalPlanner_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::LocalPlanner_GetResult_Response result(::moveit_msgs::action::LocalPlanner_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_GetResult_Response msg_;
};

class Init_LocalPlanner_GetResult_Response_status
{
public:
  Init_LocalPlanner_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanner_GetResult_Response_result status(::moveit_msgs::action::LocalPlanner_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LocalPlanner_GetResult_Response_result(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_GetResult_Response>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_GetResult_Response_status();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_LocalPlanner_FeedbackMessage_feedback
{
public:
  explicit Init_LocalPlanner_FeedbackMessage_feedback(::moveit_msgs::action::LocalPlanner_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::LocalPlanner_FeedbackMessage feedback(::moveit_msgs::action::LocalPlanner_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_FeedbackMessage msg_;
};

class Init_LocalPlanner_FeedbackMessage_goal_id
{
public:
  Init_LocalPlanner_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LocalPlanner_FeedbackMessage_feedback goal_id(::moveit_msgs::action::LocalPlanner_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LocalPlanner_FeedbackMessage_feedback(msg_);
  }

private:
  ::moveit_msgs::action::LocalPlanner_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::LocalPlanner_FeedbackMessage>()
{
  return moveit_msgs::action::builder::Init_LocalPlanner_FeedbackMessage_goal_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__LOCAL_PLANNER__BUILDER_HPP_
