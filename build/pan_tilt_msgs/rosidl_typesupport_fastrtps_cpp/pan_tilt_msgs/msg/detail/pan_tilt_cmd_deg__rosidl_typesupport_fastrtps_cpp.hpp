// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pan_tilt_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace pan_tilt_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
cdr_serialize(
  const pan_tilt_msgs::msg::PanTiltCmdDeg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pan_tilt_msgs::msg::PanTiltCmdDeg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
get_serialized_size(
  const pan_tilt_msgs::msg::PanTiltCmdDeg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
max_serialized_size_PanTiltCmdDeg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pan_tilt_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pan_tilt_msgs, msg, PanTiltCmdDeg)();

#ifdef __cplusplus
}
#endif

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
