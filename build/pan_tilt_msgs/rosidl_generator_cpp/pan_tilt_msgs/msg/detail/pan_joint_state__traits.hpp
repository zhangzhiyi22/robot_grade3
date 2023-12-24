// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__TRAITS_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pan_tilt_msgs/msg/detail/pan_joint_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace pan_tilt_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PanJointState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: name1
  {
    out << "name1: ";
    rosidl_generator_traits::value_to_yaml(msg.name1, out);
    out << ", ";
  }

  // member: position1
  {
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << ", ";
  }

  // member: velocity1
  {
    out << "velocity1: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity1, out);
    out << ", ";
  }

  // member: effort1
  {
    out << "effort1: ";
    rosidl_generator_traits::value_to_yaml(msg.effort1, out);
    out << ", ";
  }

  // member: name2
  {
    out << "name2: ";
    rosidl_generator_traits::value_to_yaml(msg.name2, out);
    out << ", ";
  }

  // member: position2
  {
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << ", ";
  }

  // member: velocity2
  {
    out << "velocity2: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity2, out);
    out << ", ";
  }

  // member: effort2
  {
    out << "effort2: ";
    rosidl_generator_traits::value_to_yaml(msg.effort2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PanJointState & msg,
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

  // member: name1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name1: ";
    rosidl_generator_traits::value_to_yaml(msg.name1, out);
    out << "\n";
  }

  // member: position1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position1: ";
    rosidl_generator_traits::value_to_yaml(msg.position1, out);
    out << "\n";
  }

  // member: velocity1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity1: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity1, out);
    out << "\n";
  }

  // member: effort1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort1: ";
    rosidl_generator_traits::value_to_yaml(msg.effort1, out);
    out << "\n";
  }

  // member: name2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name2: ";
    rosidl_generator_traits::value_to_yaml(msg.name2, out);
    out << "\n";
  }

  // member: position2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position2: ";
    rosidl_generator_traits::value_to_yaml(msg.position2, out);
    out << "\n";
  }

  // member: velocity2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity2: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity2, out);
    out << "\n";
  }

  // member: effort2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effort2: ";
    rosidl_generator_traits::value_to_yaml(msg.effort2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PanJointState & msg, bool use_flow_style = false)
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
  const pan_tilt_msgs::msg::PanJointState & msg,
  std::ostream & out, size_t indentation = 0)
{
  pan_tilt_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pan_tilt_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const pan_tilt_msgs::msg::PanJointState & msg)
{
  return pan_tilt_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pan_tilt_msgs::msg::PanJointState>()
{
  return "pan_tilt_msgs::msg::PanJointState";
}

template<>
inline const char * name<pan_tilt_msgs::msg::PanJointState>()
{
  return "pan_tilt_msgs/msg/PanJointState";
}

template<>
struct has_fixed_size<pan_tilt_msgs::msg::PanJointState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pan_tilt_msgs::msg::PanJointState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pan_tilt_msgs::msg::PanJointState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__TRAITS_HPP_
