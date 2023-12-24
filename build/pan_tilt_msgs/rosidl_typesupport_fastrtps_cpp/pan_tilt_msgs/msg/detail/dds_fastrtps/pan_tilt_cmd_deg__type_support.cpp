// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_deg__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: yaw
  cdr << ros_message.yaw;
  // Member: pitch
  cdr << ros_message.pitch;
  // Member: speed
  cdr << ros_message.speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pan_tilt_msgs::msg::PanTiltCmdDeg & ros_message)
{
  // Member: yaw
  cdr >> ros_message.yaw;

  // Member: pitch
  cdr >> ros_message.pitch;

  // Member: speed
  cdr >> ros_message.speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
get_serialized_size(
  const pan_tilt_msgs::msg::PanTiltCmdDeg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: yaw
  {
    size_t item_size = sizeof(ros_message.yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch
  {
    size_t item_size = sizeof(ros_message.pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pan_tilt_msgs
max_serialized_size_PanTiltCmdDeg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PanTiltCmdDeg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pan_tilt_msgs::msg::PanTiltCmdDeg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PanTiltCmdDeg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pan_tilt_msgs::msg::PanTiltCmdDeg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PanTiltCmdDeg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pan_tilt_msgs::msg::PanTiltCmdDeg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PanTiltCmdDeg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PanTiltCmdDeg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PanTiltCmdDeg__callbacks = {
  "pan_tilt_msgs::msg",
  "PanTiltCmdDeg",
  _PanTiltCmdDeg__cdr_serialize,
  _PanTiltCmdDeg__cdr_deserialize,
  _PanTiltCmdDeg__get_serialized_size,
  _PanTiltCmdDeg__max_serialized_size
};

static rosidl_message_type_support_t _PanTiltCmdDeg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PanTiltCmdDeg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pan_tilt_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pan_tilt_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pan_tilt_msgs::msg::PanTiltCmdDeg>()
{
  return &pan_tilt_msgs::msg::typesupport_fastrtps_cpp::_PanTiltCmdDeg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pan_tilt_msgs, msg, PanTiltCmdDeg)() {
  return &pan_tilt_msgs::msg::typesupport_fastrtps_cpp::_PanTiltCmdDeg__handle;
}

#ifdef __cplusplus
}
#endif
