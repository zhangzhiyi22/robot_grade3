// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__TRAITS_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pan_tilt_msgs/msg/detail/pan_tilt_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pan_tilt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanTiltStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: serial_num
  {
    out << "serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_num, out);
    out << ", ";
  }

  // member: hw_version
  {
    out << "hw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_version, out);
    out << ", ";
  }

  // member: bd_version
  {
    out << "bd_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bd_version, out);
    out << ", ";
  }

  // member: sw_version
  {
    out << "sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_version, out);
    out << ", ";
  }

  // member: set_zero
  {
    out << "set_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.set_zero, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: yaw_goal
  {
    out << "yaw_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_goal, out);
    out << ", ";
  }

  // member: pitch_goal
  {
    out << "pitch_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_goal, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: driver_ec
  {
    out << "driver_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_ec, out);
    out << ", ";
  }

  // member: encoder_ec
  {
    out << "encoder_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_ec, out);
    out << ", ";
  }

  // member: yaw_now
  {
    out << "yaw_now: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_now, out);
    out << ", ";
  }

  // member: pitch_now
  {
    out << "pitch_now: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_now, out);
    out << ", ";
  }

  // member: yaw_temp
  {
    out << "yaw_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_temp, out);
    out << ", ";
  }

  // member: pitch_temp
  {
    out << "pitch_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_temp, out);
    out << ", ";
  }

  // member: yaw_raw
  {
    out << "yaw_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_raw, out);
    out << ", ";
  }

  // member: pitch_raw
  {
    out << "pitch_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_raw, out);
    out << ", ";
  }

  // member: loop_ec
  {
    out << "loop_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_ec, out);
    out << ", ";
  }

  // member: loop_time
  {
    out << "loop_time: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanTiltStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_num: ";
    rosidl_generator_traits::value_to_yaml(msg.serial_num, out);
    out << "\n";
  }

  // member: hw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.hw_version, out);
    out << "\n";
  }

  // member: bd_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bd_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bd_version, out);
    out << "\n";
  }

  // member: sw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_version: ";
    rosidl_generator_traits::value_to_yaml(msg.sw_version, out);
    out << "\n";
  }

  // member: set_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.set_zero, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: yaw_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_goal, out);
    out << "\n";
  }

  // member: pitch_goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_goal: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_goal, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: driver_ec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "driver_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.driver_ec, out);
    out << "\n";
  }

  // member: encoder_ec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_ec, out);
    out << "\n";
  }

  // member: yaw_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_now: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_now, out);
    out << "\n";
  }

  // member: pitch_now
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_now: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_now, out);
    out << "\n";
  }

  // member: yaw_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_temp, out);
    out << "\n";
  }

  // member: pitch_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_temp: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_temp, out);
    out << "\n";
  }

  // member: yaw_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_raw, out);
    out << "\n";
  }

  // member: pitch_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_raw, out);
    out << "\n";
  }

  // member: loop_ec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_ec: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_ec, out);
    out << "\n";
  }

  // member: loop_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_time: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanTiltStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pan_tilt_msgs

namespace rosidl_generator_traits
{

[[deprecated("use pan_tilt_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pan_tilt_msgs::msg::PanTiltStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  pan_tilt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pan_tilt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pan_tilt_msgs::msg::PanTiltStatus & msg)
{
  return pan_tilt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pan_tilt_msgs::msg::PanTiltStatus>()
{
  return "pan_tilt_msgs::msg::PanTiltStatus";
}

template<>
inline const char * name<pan_tilt_msgs::msg::PanTiltStatus>()
{
  return "pan_tilt_msgs/msg/PanTiltStatus";
}

template<>
struct has_fixed_size<pan_tilt_msgs::msg::PanTiltStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pan_tilt_msgs::msg::PanTiltStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pan_tilt_msgs::msg::PanTiltStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__TRAITS_HPP_
