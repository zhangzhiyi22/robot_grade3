// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__BUILDER_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pan_tilt_msgs/msg/detail/pan_tilt_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pan_tilt_msgs
{

namespace msg
{

namespace builder
{

class Init_PanTiltStatus_loop_time
{
public:
  explicit Init_PanTiltStatus_loop_time(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  ::pan_tilt_msgs::msg::PanTiltStatus loop_time(::pan_tilt_msgs::msg::PanTiltStatus::_loop_time_type arg)
  {
    msg_.loop_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_loop_ec
{
public:
  explicit Init_PanTiltStatus_loop_ec(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_loop_time loop_ec(::pan_tilt_msgs::msg::PanTiltStatus::_loop_ec_type arg)
  {
    msg_.loop_ec = std::move(arg);
    return Init_PanTiltStatus_loop_time(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_pitch_raw
{
public:
  explicit Init_PanTiltStatus_pitch_raw(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_loop_ec pitch_raw(::pan_tilt_msgs::msg::PanTiltStatus::_pitch_raw_type arg)
  {
    msg_.pitch_raw = std::move(arg);
    return Init_PanTiltStatus_loop_ec(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_yaw_raw
{
public:
  explicit Init_PanTiltStatus_yaw_raw(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_pitch_raw yaw_raw(::pan_tilt_msgs::msg::PanTiltStatus::_yaw_raw_type arg)
  {
    msg_.yaw_raw = std::move(arg);
    return Init_PanTiltStatus_pitch_raw(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_pitch_temp
{
public:
  explicit Init_PanTiltStatus_pitch_temp(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_yaw_raw pitch_temp(::pan_tilt_msgs::msg::PanTiltStatus::_pitch_temp_type arg)
  {
    msg_.pitch_temp = std::move(arg);
    return Init_PanTiltStatus_yaw_raw(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_yaw_temp
{
public:
  explicit Init_PanTiltStatus_yaw_temp(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_pitch_temp yaw_temp(::pan_tilt_msgs::msg::PanTiltStatus::_yaw_temp_type arg)
  {
    msg_.yaw_temp = std::move(arg);
    return Init_PanTiltStatus_pitch_temp(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_pitch_now
{
public:
  explicit Init_PanTiltStatus_pitch_now(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_yaw_temp pitch_now(::pan_tilt_msgs::msg::PanTiltStatus::_pitch_now_type arg)
  {
    msg_.pitch_now = std::move(arg);
    return Init_PanTiltStatus_yaw_temp(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_yaw_now
{
public:
  explicit Init_PanTiltStatus_yaw_now(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_pitch_now yaw_now(::pan_tilt_msgs::msg::PanTiltStatus::_yaw_now_type arg)
  {
    msg_.yaw_now = std::move(arg);
    return Init_PanTiltStatus_pitch_now(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_encoder_ec
{
public:
  explicit Init_PanTiltStatus_encoder_ec(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_yaw_now encoder_ec(::pan_tilt_msgs::msg::PanTiltStatus::_encoder_ec_type arg)
  {
    msg_.encoder_ec = std::move(arg);
    return Init_PanTiltStatus_yaw_now(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_driver_ec
{
public:
  explicit Init_PanTiltStatus_driver_ec(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_encoder_ec driver_ec(::pan_tilt_msgs::msg::PanTiltStatus::_driver_ec_type arg)
  {
    msg_.driver_ec = std::move(arg);
    return Init_PanTiltStatus_encoder_ec(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_reserved
{
public:
  explicit Init_PanTiltStatus_reserved(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_driver_ec reserved(::pan_tilt_msgs::msg::PanTiltStatus::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_PanTiltStatus_driver_ec(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_pitch_goal
{
public:
  explicit Init_PanTiltStatus_pitch_goal(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_reserved pitch_goal(::pan_tilt_msgs::msg::PanTiltStatus::_pitch_goal_type arg)
  {
    msg_.pitch_goal = std::move(arg);
    return Init_PanTiltStatus_reserved(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_yaw_goal
{
public:
  explicit Init_PanTiltStatus_yaw_goal(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_pitch_goal yaw_goal(::pan_tilt_msgs::msg::PanTiltStatus::_yaw_goal_type arg)
  {
    msg_.yaw_goal = std::move(arg);
    return Init_PanTiltStatus_pitch_goal(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_speed
{
public:
  explicit Init_PanTiltStatus_speed(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_yaw_goal speed(::pan_tilt_msgs::msg::PanTiltStatus::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PanTiltStatus_yaw_goal(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_set_zero
{
public:
  explicit Init_PanTiltStatus_set_zero(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_speed set_zero(::pan_tilt_msgs::msg::PanTiltStatus::_set_zero_type arg)
  {
    msg_.set_zero = std::move(arg);
    return Init_PanTiltStatus_speed(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_sw_version
{
public:
  explicit Init_PanTiltStatus_sw_version(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_set_zero sw_version(::pan_tilt_msgs::msg::PanTiltStatus::_sw_version_type arg)
  {
    msg_.sw_version = std::move(arg);
    return Init_PanTiltStatus_set_zero(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_bd_version
{
public:
  explicit Init_PanTiltStatus_bd_version(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_sw_version bd_version(::pan_tilt_msgs::msg::PanTiltStatus::_bd_version_type arg)
  {
    msg_.bd_version = std::move(arg);
    return Init_PanTiltStatus_sw_version(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_hw_version
{
public:
  explicit Init_PanTiltStatus_hw_version(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_bd_version hw_version(::pan_tilt_msgs::msg::PanTiltStatus::_hw_version_type arg)
  {
    msg_.hw_version = std::move(arg);
    return Init_PanTiltStatus_bd_version(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_serial_num
{
public:
  explicit Init_PanTiltStatus_serial_num(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_hw_version serial_num(::pan_tilt_msgs::msg::PanTiltStatus::_serial_num_type arg)
  {
    msg_.serial_num = std::move(arg);
    return Init_PanTiltStatus_hw_version(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_id
{
public:
  explicit Init_PanTiltStatus_id(::pan_tilt_msgs::msg::PanTiltStatus & msg)
  : msg_(msg)
  {}
  Init_PanTiltStatus_serial_num id(::pan_tilt_msgs::msg::PanTiltStatus::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PanTiltStatus_serial_num(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

class Init_PanTiltStatus_header
{
public:
  Init_PanTiltStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PanTiltStatus_id header(::pan_tilt_msgs::msg::PanTiltStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PanTiltStatus_id(msg_);
  }

private:
  ::pan_tilt_msgs::msg::PanTiltStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pan_tilt_msgs::msg::PanTiltStatus>()
{
  return pan_tilt_msgs::msg::builder::Init_PanTiltStatus_header();
}

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__BUILDER_HPP_
