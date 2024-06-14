// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from moveit_msgs:msg/ContactInformation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__BUILDER_HPP_
#define MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "moveit_msgs/msg/detail/contact_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace moveit_msgs
{

namespace msg
{

namespace builder
{

class Init_ContactInformation_body_type_2
{
public:
  explicit Init_ContactInformation_body_type_2(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  ::moveit_msgs::msg::ContactInformation body_type_2(::moveit_msgs::msg::ContactInformation::_body_type_2_type arg)
  {
    msg_.body_type_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_contact_body_2
{
public:
  explicit Init_ContactInformation_contact_body_2(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_body_type_2 contact_body_2(::moveit_msgs::msg::ContactInformation::_contact_body_2_type arg)
  {
    msg_.contact_body_2 = std::move(arg);
    return Init_ContactInformation_body_type_2(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_body_type_1
{
public:
  explicit Init_ContactInformation_body_type_1(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_contact_body_2 body_type_1(::moveit_msgs::msg::ContactInformation::_body_type_1_type arg)
  {
    msg_.body_type_1 = std::move(arg);
    return Init_ContactInformation_contact_body_2(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_contact_body_1
{
public:
  explicit Init_ContactInformation_contact_body_1(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_body_type_1 contact_body_1(::moveit_msgs::msg::ContactInformation::_contact_body_1_type arg)
  {
    msg_.contact_body_1 = std::move(arg);
    return Init_ContactInformation_body_type_1(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_depth
{
public:
  explicit Init_ContactInformation_depth(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_contact_body_1 depth(::moveit_msgs::msg::ContactInformation::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return Init_ContactInformation_contact_body_1(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_normal
{
public:
  explicit Init_ContactInformation_normal(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_depth normal(::moveit_msgs::msg::ContactInformation::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_ContactInformation_depth(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_position
{
public:
  explicit Init_ContactInformation_position(::moveit_msgs::msg::ContactInformation & msg)
  : msg_(msg)
  {}
  Init_ContactInformation_normal position(::moveit_msgs::msg::ContactInformation::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_ContactInformation_normal(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

class Init_ContactInformation_header
{
public:
  Init_ContactInformation_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContactInformation_position header(::moveit_msgs::msg::ContactInformation::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ContactInformation_position(msg_);
  }

private:
  ::moveit_msgs::msg::ContactInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::moveit_msgs::msg::ContactInformation>()
{
  return moveit_msgs::msg::builder::Init_ContactInformation_header();
}

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__DETAIL__CONTACT_INFORMATION__BUILDER_HPP_
