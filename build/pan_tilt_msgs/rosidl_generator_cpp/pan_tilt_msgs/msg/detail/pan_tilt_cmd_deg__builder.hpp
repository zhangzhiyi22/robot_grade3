// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__BUILDER_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pan_tilt_msgs
{

namespace msg
{

namespace builder
{

class Init_PanTiltCmdDeg_speed
{
public:
  explicit Init_PanTiltCmdDeg_speed(::pan_tilt_msgs::msg::PanTiltCmdDeg & msg)
  : msg_(msg)
  {}
  ::pan_tilt_msgs::msg::PanTiltCmdDeg speed(::pan_tilt_msgs::msg::PanTiltCmdDeg::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdDeg msg_;
};

class Init_PanTiltCmdDeg_pitch
{
public:
  explicit Init_PanTiltCmdDeg_pitch(::pan_tilt_msgs::msg::PanTiltCmdDeg & msg)
  : msg_(msg)
  {}
  Init_PanTiltCmdDeg_speed pitch(::pan_tilt_msgs::msg::PanTiltCmdDeg::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PanTiltCmdDeg_speed(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdDeg msg_;
};

class Init_PanTiltCmdDeg_yaw
{
public:
  Init_PanTiltCmdDeg_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanTiltCmdDeg_pitch yaw(::pan_tilt_msgs::msg::PanTiltCmdDeg::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PanTiltCmdDeg_pitch(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdDeg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pan_tilt_msgs::msg::PanTiltCmdDeg>()
{
  return pan_tilt_msgs::msg::builder::Init_PanTiltCmdDeg_yaw();
}

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__BUILDER_HPP_
