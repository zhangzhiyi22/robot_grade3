// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__TRAITS_HPP_
#define INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interbotix_xs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorGains_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: cmd_type
  {
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: kp_pos
  {
    out << "kp_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_pos, out);
    out << ", ";
  }

  // member: ki_pos
  {
    out << "ki_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_pos, out);
    out << ", ";
  }

  // member: kd_pos
  {
    out << "kd_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_pos, out);
    out << ", ";
  }

  // member: k1
  {
    out << "k1: ";
    rosidl_generator_traits::value_to_yaml(msg.k1, out);
    out << ", ";
  }

  // member: k2
  {
    out << "k2: ";
    rosidl_generator_traits::value_to_yaml(msg.k2, out);
    out << ", ";
  }

  // member: kp_vel
  {
    out << "kp_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_vel, out);
    out << ", ";
  }

  // member: ki_vel
  {
    out << "ki_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_vel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorGains_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cmd_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_type: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd_type, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: kp_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_pos, out);
    out << "\n";
  }

  // member: ki_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_pos, out);
    out << "\n";
  }

  // member: kd_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kd_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.kd_pos, out);
    out << "\n";
  }

  // member: k1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k1: ";
    rosidl_generator_traits::value_to_yaml(msg.k1, out);
    out << "\n";
  }

  // member: k2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "k2: ";
    rosidl_generator_traits::value_to_yaml(msg.k2, out);
    out << "\n";
  }

  // member: kp_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.kp_vel, out);
    out << "\n";
  }

  // member: ki_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ki_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.ki_vel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorGains_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_xs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_xs_msgs::srv::MotorGains_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_xs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_xs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_xs_msgs::srv::MotorGains_Request & msg)
{
  return interbotix_xs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::MotorGains_Request>()
{
  return "interbotix_xs_msgs::srv::MotorGains_Request";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::MotorGains_Request>()
{
  return "interbotix_xs_msgs/srv/MotorGains_Request";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::MotorGains_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::MotorGains_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<interbotix_xs_msgs::srv::MotorGains_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interbotix_xs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotorGains_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorGains_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorGains_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_xs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_xs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_xs_msgs::srv::MotorGains_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_xs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_xs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_xs_msgs::srv::MotorGains_Response & msg)
{
  return interbotix_xs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_xs_msgs::srv::MotorGains_Response>()
{
  return "interbotix_xs_msgs::srv::MotorGains_Response";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::MotorGains_Response>()
{
  return "interbotix_xs_msgs/srv/MotorGains_Response";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::MotorGains_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::MotorGains_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_xs_msgs::srv::MotorGains_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_xs_msgs::srv::MotorGains>()
{
  return "interbotix_xs_msgs::srv::MotorGains";
}

template<>
inline const char * name<interbotix_xs_msgs::srv::MotorGains>()
{
  return "interbotix_xs_msgs/srv/MotorGains";
}

template<>
struct has_fixed_size<interbotix_xs_msgs::srv::MotorGains>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_xs_msgs::srv::MotorGains_Request>::value &&
    has_fixed_size<interbotix_xs_msgs::srv::MotorGains_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_xs_msgs::srv::MotorGains>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_xs_msgs::srv::MotorGains_Request>::value &&
    has_bounded_size<interbotix_xs_msgs::srv::MotorGains_Response>::value
  >
{
};

template<>
struct is_service<interbotix_xs_msgs::srv::MotorGains>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_xs_msgs::srv::MotorGains_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_xs_msgs::srv::MotorGains_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_XS_MSGS__SRV__DETAIL__MOTOR_GAINS__TRAITS_HPP_
