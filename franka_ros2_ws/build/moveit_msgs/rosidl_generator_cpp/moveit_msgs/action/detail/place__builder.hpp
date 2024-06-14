// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__DETAIL__PLACE__BUILDER_HPP_
#define MOVEIT_MSGS__ACTION__DETAIL__PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/action/detail/place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_Goal_planning_options
{
public:
  explicit Init_Place_Goal_planning_options(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_Goal planning_options(::moveit_msgs::action::Place_Goal::_planning_options_type arg)
  {
    msg_.planning_options = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_allowed_planning_time
{
public:
  explicit Init_Place_Goal_allowed_planning_time(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_planning_options allowed_planning_time(::moveit_msgs::action::Place_Goal::_allowed_planning_time_type arg)
  {
    msg_.allowed_planning_time = std::move(arg);
    return Init_Place_Goal_planning_options(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_allowed_touch_objects
{
public:
  explicit Init_Place_Goal_allowed_touch_objects(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_allowed_planning_time allowed_touch_objects(::moveit_msgs::action::Place_Goal::_allowed_touch_objects_type arg)
  {
    msg_.allowed_touch_objects = std::move(arg);
    return Init_Place_Goal_allowed_planning_time(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_planner_id
{
public:
  explicit Init_Place_Goal_planner_id(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_allowed_touch_objects planner_id(::moveit_msgs::action::Place_Goal::_planner_id_type arg)
  {
    msg_.planner_id = std::move(arg);
    return Init_Place_Goal_allowed_touch_objects(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_path_constraints
{
public:
  explicit Init_Place_Goal_path_constraints(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_planner_id path_constraints(::moveit_msgs::action::Place_Goal::_path_constraints_type arg)
  {
    msg_.path_constraints = std::move(arg);
    return Init_Place_Goal_planner_id(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_allow_gripper_support_collision
{
public:
  explicit Init_Place_Goal_allow_gripper_support_collision(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_path_constraints allow_gripper_support_collision(::moveit_msgs::action::Place_Goal::_allow_gripper_support_collision_type arg)
  {
    msg_.allow_gripper_support_collision = std::move(arg);
    return Init_Place_Goal_path_constraints(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_support_surface_name
{
public:
  explicit Init_Place_Goal_support_surface_name(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_allow_gripper_support_collision support_surface_name(::moveit_msgs::action::Place_Goal::_support_surface_name_type arg)
  {
    msg_.support_surface_name = std::move(arg);
    return Init_Place_Goal_allow_gripper_support_collision(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_place_eef
{
public:
  explicit Init_Place_Goal_place_eef(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_support_surface_name place_eef(::moveit_msgs::action::Place_Goal::_place_eef_type arg)
  {
    msg_.place_eef = std::move(arg);
    return Init_Place_Goal_support_surface_name(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_place_locations
{
public:
  explicit Init_Place_Goal_place_locations(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_place_eef place_locations(::moveit_msgs::action::Place_Goal::_place_locations_type arg)
  {
    msg_.place_locations = std::move(arg);
    return Init_Place_Goal_place_eef(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_attached_object_name
{
public:
  explicit Init_Place_Goal_attached_object_name(::moveit_msgs::action::Place_Goal & msg)
  : msg_(msg)
  {}
  Init_Place_Goal_place_locations attached_object_name(::moveit_msgs::action::Place_Goal::_attached_object_name_type arg)
  {
    msg_.attached_object_name = std::move(arg);
    return Init_Place_Goal_place_locations(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

class Init_Place_Goal_group_name
{
public:
  Init_Place_Goal_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_Goal_attached_object_name group_name(::moveit_msgs::action::Place_Goal::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_Place_Goal_attached_object_name(msg_);
  }

private:
  ::moveit_msgs::action::Place_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_Goal>()
{
  return moveit_msgs::action::builder::Init_Place_Goal_group_name();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_Result_planning_time
{
public:
  explicit Init_Place_Result_planning_time(::moveit_msgs::action::Place_Result & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_Result planning_time(::moveit_msgs::action::Place_Result::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

class Init_Place_Result_place_location
{
public:
  explicit Init_Place_Result_place_location(::moveit_msgs::action::Place_Result & msg)
  : msg_(msg)
  {}
  Init_Place_Result_planning_time place_location(::moveit_msgs::action::Place_Result::_place_location_type arg)
  {
    msg_.place_location = std::move(arg);
    return Init_Place_Result_planning_time(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

class Init_Place_Result_trajectory_descriptions
{
public:
  explicit Init_Place_Result_trajectory_descriptions(::moveit_msgs::action::Place_Result & msg)
  : msg_(msg)
  {}
  Init_Place_Result_place_location trajectory_descriptions(::moveit_msgs::action::Place_Result::_trajectory_descriptions_type arg)
  {
    msg_.trajectory_descriptions = std::move(arg);
    return Init_Place_Result_place_location(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

class Init_Place_Result_trajectory_stages
{
public:
  explicit Init_Place_Result_trajectory_stages(::moveit_msgs::action::Place_Result & msg)
  : msg_(msg)
  {}
  Init_Place_Result_trajectory_descriptions trajectory_stages(::moveit_msgs::action::Place_Result::_trajectory_stages_type arg)
  {
    msg_.trajectory_stages = std::move(arg);
    return Init_Place_Result_trajectory_descriptions(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

class Init_Place_Result_trajectory_start
{
public:
  explicit Init_Place_Result_trajectory_start(::moveit_msgs::action::Place_Result & msg)
  : msg_(msg)
  {}
  Init_Place_Result_trajectory_stages trajectory_start(::moveit_msgs::action::Place_Result::_trajectory_start_type arg)
  {
    msg_.trajectory_start = std::move(arg);
    return Init_Place_Result_trajectory_stages(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

class Init_Place_Result_error_code
{
public:
  Init_Place_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_Result_trajectory_start error_code(::moveit_msgs::action::Place_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Place_Result_trajectory_start(msg_);
  }

private:
  ::moveit_msgs::action::Place_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_Result>()
{
  return moveit_msgs::action::builder::Init_Place_Result_error_code();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_Feedback_state
{
public:
  Init_Place_Feedback_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::Place_Feedback state(::moveit_msgs::action::Place_Feedback::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_Feedback>()
{
  return moveit_msgs::action::builder::Init_Place_Feedback_state();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_SendGoal_Request_goal
{
public:
  explicit Init_Place_SendGoal_Request_goal(::moveit_msgs::action::Place_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_SendGoal_Request goal(::moveit_msgs::action::Place_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_SendGoal_Request msg_;
};

class Init_Place_SendGoal_Request_goal_id
{
public:
  Init_Place_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_SendGoal_Request_goal goal_id(::moveit_msgs::action::Place_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Place_SendGoal_Request_goal(msg_);
  }

private:
  ::moveit_msgs::action::Place_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_SendGoal_Request>()
{
  return moveit_msgs::action::builder::Init_Place_SendGoal_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_SendGoal_Response_stamp
{
public:
  explicit Init_Place_SendGoal_Response_stamp(::moveit_msgs::action::Place_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_SendGoal_Response stamp(::moveit_msgs::action::Place_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_SendGoal_Response msg_;
};

class Init_Place_SendGoal_Response_accepted
{
public:
  Init_Place_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_SendGoal_Response_stamp accepted(::moveit_msgs::action::Place_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Place_SendGoal_Response_stamp(msg_);
  }

private:
  ::moveit_msgs::action::Place_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_SendGoal_Response>()
{
  return moveit_msgs::action::builder::Init_Place_SendGoal_Response_accepted();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_GetResult_Request_goal_id
{
public:
  Init_Place_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::moveit_msgs::action::Place_GetResult_Request goal_id(::moveit_msgs::action::Place_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_GetResult_Request>()
{
  return moveit_msgs::action::builder::Init_Place_GetResult_Request_goal_id();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_GetResult_Response_result
{
public:
  explicit Init_Place_GetResult_Response_result(::moveit_msgs::action::Place_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_GetResult_Response result(::moveit_msgs::action::Place_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_GetResult_Response msg_;
};

class Init_Place_GetResult_Response_status
{
public:
  Init_Place_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_GetResult_Response_result status(::moveit_msgs::action::Place_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Place_GetResult_Response_result(msg_);
  }

private:
  ::moveit_msgs::action::Place_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_GetResult_Response>()
{
  return moveit_msgs::action::builder::Init_Place_GetResult_Response_status();
}

}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace action
{

namespace builder
{

class Init_Place_FeedbackMessage_feedback
{
public:
  explicit Init_Place_FeedbackMessage_feedback(::moveit_msgs::action::Place_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::action::Place_FeedbackMessage feedback(::moveit_msgs::action::Place_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::action::Place_FeedbackMessage msg_;
};

class Init_Place_FeedbackMessage_goal_id
{
public:
  Init_Place_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_FeedbackMessage_feedback goal_id(::moveit_msgs::action::Place_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Place_FeedbackMessage_feedback(msg_);
  }

private:
  ::moveit_msgs::action::Place_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::action::Place_FeedbackMessage>()
{
  return moveit_msgs::action::builder::Init_Place_FeedbackMessage_goal_id();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__ACTION__DETAIL__PLACE__BUILDER_HPP_
