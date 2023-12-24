// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__BUILDER_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pan_tilt_msgs
{

namespace msg
{

namespace builder
{

class Init_PanTiltCmdRad_speed
{
public:
  explicit Init_PanTiltCmdRad_speed(::pan_tilt_msgs::msg::PanTiltCmdRad & msg)
  : msg_(msg)
  {}
  ::pan_tilt_msgs::msg::PanTiltCmdRad speed(::pan_tilt_msgs::msg::PanTiltCmdRad::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdRad msg_;
};

class Init_PanTiltCmdRad_pitch
{
public:
  explicit Init_PanTiltCmdRad_pitch(::pan_tilt_msgs::msg::PanTiltCmdRad & msg)
  : msg_(msg)
  {}
  Init_PanTiltCmdRad_speed pitch(::pan_tilt_msgs::msg::PanTiltCmdRad::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_PanTiltCmdRad_speed(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdRad msg_;
};

class Init_PanTiltCmdRad_yaw
{
public:
  Init_PanTiltCmdRad_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanTiltCmdRad_pitch yaw(::pan_tilt_msgs::msg::PanTiltCmdRad::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PanTiltCmdRad_pitch(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltCmdRad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pan_tilt_msgs::msg::PanTiltCmdRad>()
{
  return pan_tilt_msgs::msg::builder::Init_PanTiltCmdRad_yaw();
}

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__BUILDER_HPP_
