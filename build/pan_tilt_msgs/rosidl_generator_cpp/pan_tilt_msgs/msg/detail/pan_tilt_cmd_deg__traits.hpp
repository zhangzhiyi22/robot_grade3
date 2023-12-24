// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__TRAITS_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pan_tilt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanTiltCmdDeg & msg,
  std::ostream & out)
{
  out << "{";
  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanTiltCmdDeg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanTiltCmdDeg & msg, bool use_flow_style = false)
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
  const pan_tilt_msgs::msg::PanTiltCmdDeg & msg,
  std::ostream & out, size_t indentation = 0)
{
  pan_tilt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pan_tilt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pan_tilt_msgs::msg::PanTiltCmdDeg & msg)
{
  return pan_tilt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pan_tilt_msgs::msg::PanTiltCmdDeg>()
{
  return "pan_tilt_msgs::msg::PanTiltCmdDeg";
}

template<>
inline const char * name<pan_tilt_msgs::msg::PanTiltCmdDeg>()
{
  return "pan_tilt_msgs/msg/PanTiltCmdDeg";
}

template<>
struct has_fixed_size<pan_tilt_msgs::msg::PanTiltCmdDeg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pan_tilt_msgs::msg::PanTiltCmdDeg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pan_tilt_msgs::msg::PanTiltCmdDeg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__TRAITS_HPP_
