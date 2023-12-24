// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__BUILDER_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pan_tilt_msgs/msg/detail/pan_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pan_tilt_msgs
{

namespace msg
{

namespace builder
{

class Init_PanJointState_effort2
{
public:
  explicit Init_PanJointState_effort2(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  ::pan_tilt_msgs::msg::PanJointState effort2(::pan_tilt_msgs::msg::PanJointState::_effort2_type arg)
  {
    msg_.effort2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_velocity2
{
public:
  explicit Init_PanJointState_velocity2(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_effort2 velocity2(::pan_tilt_msgs::msg::PanJointState::_velocity2_type arg)
  {
    msg_.velocity2 = std::move(arg);
    return Init_PanJointState_effort2(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_position2
{
public:
  explicit Init_PanJointState_position2(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_velocity2 position2(::pan_tilt_msgs::msg::PanJointState::_position2_type arg)
  {
    msg_.position2 = std::move(arg);
    return Init_PanJointState_velocity2(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_name2
{
public:
  explicit Init_PanJointState_name2(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_position2 name2(::pan_tilt_msgs::msg::PanJointState::_name2_type arg)
  {
    msg_.name2 = std::move(arg);
    return Init_PanJointState_position2(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_effort1
{
public:
  explicit Init_PanJointState_effort1(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_name2 effort1(::pan_tilt_msgs::msg::PanJointState::_effort1_type arg)
  {
    msg_.effort1 = std::move(arg);
    return Init_PanJointState_name2(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_velocity1
{
public:
  explicit Init_PanJointState_velocity1(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_effort1 velocity1(::pan_tilt_msgs::msg::PanJointState::_velocity1_type arg)
  {
    msg_.velocity1 = std::move(arg);
    return Init_PanJointState_effort1(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_position1
{
public:
  explicit Init_PanJointState_position1(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_velocity1 position1(::pan_tilt_msgs::msg::PanJointState::_position1_type arg)
  {
    msg_.position1 = std::move(arg);
    return Init_PanJointState_velocity1(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_name1
{
public:
  explicit Init_PanJointState_name1(::pan_tilt_msgs::msg::PanJointState & msg)
  : msg_(msg)
  {}
  Init_PanJointState_position1 name1(::pan_tilt_msgs::msg::PanJointState::_name1_type arg)
  {
    msg_.name1 = std::move(arg);
    return Init_PanJointState_position1(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

class Init_PanJointState_header
{
public:
  Init_PanJointState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanJointState_name1 header(::pan_tilt_msgs::msg::PanJointState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PanJointState_name1(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanJointState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pan_tilt_msgs::msg::PanJointState>()
{
  return pan_tilt_msgs::msg::builder::Init_PanJointState_header();
}

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__BUILDER_HPP_
