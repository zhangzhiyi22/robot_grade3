// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "pan_tilt_msgs/msg/detail/pan_tilt_cmd_rad__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace pan_tilt_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PanTiltCmdRad_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) pan_tilt_msgs::msg::PanTiltCmdRad(_init);
}

void PanTiltCmdRad_fini_function(void * message_memory)
{
  auto typed_message = static_cast<pan_tilt_msgs::msg::PanTiltCmdRad *>(message_memory);
  typed_message->~PanTiltCmdRad();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PanTiltCmdRad_message_member_array[3] = {
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs::msg::PanTiltCmdRad, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pitch",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs::msg::PanTiltCmdRad, pitch),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pan_tilt_msgs::msg::PanTiltCmdRad, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PanTiltCmdRad_message_members = {
  "pan_tilt_msgs::msg",  // message namespace
  "PanTiltCmdRad",  // message name
  3,  // number of fields
  sizeof(pan_tilt_msgs::msg::PanTiltCmdRad),
  PanTiltCmdRad_message_member_array,  // message members
  PanTiltCmdRad_init_function,  // function to initialize message memory (memory has to be allocated)
  PanTiltCmdRad_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PanTiltCmdRad_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PanTiltCmdRad_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace pan_tilt_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<pan_tilt_msgs::msg::PanTiltCmdRad>()
{
  return &::pan_tilt_msgs::msg::rosidl_typesupport_introspection_cpp::PanTiltCmdRad_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, pan_tilt_msgs, msg, PanTiltCmdRad)() {
  return &::pan_tilt_msgs::msg::rosidl_typesupport_introspection_cpp::PanTiltCmdRad_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
