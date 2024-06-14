// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from franka_msgs:action/Move.idl
// generated code does not contain a copyright notice

#ifndef FRANKA_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_
#define FRANKA_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "franka_msgs/action/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Goal_speed
{
public:
  explicit Init_Move_Goal_speed(::franka_msgs::action::Move_Goal & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_Goal speed(::franka_msgs::action::Move_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_Goal msg_;
};

class Init_Move_Goal_width
{
public:
  Init_Move_Goal_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Goal_speed width(::franka_msgs::action::Move_Goal::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Move_Goal_speed(msg_);
  }

private:
  ::franka_msgs::action::Move_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_Goal>()
{
  return franka_msgs::action::builder::Init_Move_Goal_width();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Result_error
{
public:
  explicit Init_Move_Result_error(::franka_msgs::action::Move_Result & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_Result error(::franka_msgs::action::Move_Result::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_Result msg_;
};

class Init_Move_Result_success
{
public:
  Init_Move_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_Result_error success(::franka_msgs::action::Move_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Move_Result_error(msg_);
  }

private:
  ::franka_msgs::action::Move_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_Result>()
{
  return franka_msgs::action::builder::Init_Move_Result_success();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_Feedback_current_width
{
public:
  Init_Move_Feedback_current_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::action::Move_Feedback current_width(::franka_msgs::action::Move_Feedback::_current_width_type arg)
  {
    msg_.current_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_Feedback>()
{
  return franka_msgs::action::builder::Init_Move_Feedback_current_width();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Request_goal
{
public:
  explicit Init_Move_SendGoal_Request_goal(::franka_msgs::action::Move_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_SendGoal_Request goal(::franka_msgs::action::Move_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_SendGoal_Request msg_;
};

class Init_Move_SendGoal_Request_goal_id
{
public:
  Init_Move_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Request_goal goal_id(::franka_msgs::action::Move_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_SendGoal_Request_goal(msg_);
  }

private:
  ::franka_msgs::action::Move_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_SendGoal_Request>()
{
  return franka_msgs::action::builder::Init_Move_SendGoal_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_SendGoal_Response_stamp
{
public:
  explicit Init_Move_SendGoal_Response_stamp(::franka_msgs::action::Move_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_SendGoal_Response stamp(::franka_msgs::action::Move_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_SendGoal_Response msg_;
};

class Init_Move_SendGoal_Response_accepted
{
public:
  Init_Move_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_SendGoal_Response_stamp accepted(::franka_msgs::action::Move_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Move_SendGoal_Response_stamp(msg_);
  }

private:
  ::franka_msgs::action::Move_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_SendGoal_Response>()
{
  return franka_msgs::action::builder::Init_Move_SendGoal_Response_accepted();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Request_goal_id
{
public:
  Init_Move_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::franka_msgs::action::Move_GetResult_Request goal_id(::franka_msgs::action::Move_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_GetResult_Request>()
{
  return franka_msgs::action::builder::Init_Move_GetResult_Request_goal_id();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_GetResult_Response_result
{
public:
  explicit Init_Move_GetResult_Response_result(::franka_msgs::action::Move_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_GetResult_Response result(::franka_msgs::action::Move_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_GetResult_Response msg_;
};

class Init_Move_GetResult_Response_status
{
public:
  Init_Move_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_GetResult_Response_result status(::franka_msgs::action::Move_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Move_GetResult_Response_result(msg_);
  }

private:
  ::franka_msgs::action::Move_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_GetResult_Response>()
{
  return franka_msgs::action::builder::Init_Move_GetResult_Response_status();
}

}  // namespace franka_msgs


namespace franka_msgs
{

namespace action
{

namespace builder
{

class Init_Move_FeedbackMessage_feedback
{
public:
  explicit Init_Move_FeedbackMessage_feedback(::franka_msgs::action::Move_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::franka_msgs::action::Move_FeedbackMessage feedback(::franka_msgs::action::Move_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::franka_msgs::action::Move_FeedbackMessage msg_;
};

class Init_Move_FeedbackMessage_goal_id
{
public:
  Init_Move_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_FeedbackMessage_feedback goal_id(::franka_msgs::action::Move_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Move_FeedbackMessage_feedback(msg_);
  }

private:
  ::franka_msgs::action::Move_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::franka_msgs::action::Move_FeedbackMessage>()
{
  return franka_msgs::action::builder::Init_Move_FeedbackMessage_goal_id();
}

}  // namespace franka_msgs

#endif  // FRANKA_MSGS__ACTION__DETAIL__MOVE__BUILDER_HPP_
