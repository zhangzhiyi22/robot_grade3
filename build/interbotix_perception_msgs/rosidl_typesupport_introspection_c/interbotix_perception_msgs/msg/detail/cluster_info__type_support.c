// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_perception_msgs:msg/ClusterInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_perception_msgs/msg/detail/cluster_info__rosidl_typesupport_introspection_c.h"
#include "interbotix_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_perception_msgs/msg/detail/cluster_info__functions.h"
#include "interbotix_perception_msgs/msg/detail/cluster_info__struct.h"


// Include directives for member types
// Member `frame_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
// Member `min_z_point`
#include "geometry_msgs/msg/point.h"
// Member `position`
// Member `min_z_point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `color`
#include "std_msgs/msg/color_rgba.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_perception_msgs__msg__ClusterInfo__init(message_memory);
}

void interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_fini_function(void * message_memory)
{
  interbotix_perception_msgs__msg__ClusterInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_member_array[6] = {
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_z_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, min_z_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_perception_msgs__msg__ClusterInfo, num_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_members = {
  "interbotix_perception_msgs__msg",  // message namespace
  "ClusterInfo",  // message name
  6,  // number of fields
  sizeof(interbotix_perception_msgs__msg__ClusterInfo),
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_member_array,  // message members
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_type_support_handle = {
  0,
  &interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_perception_msgs, msg, ClusterInfo)() {
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_type_support_handle.typesupport_identifier) {
    interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_perception_msgs__msg__ClusterInfo__rosidl_typesupport_introspection_c__ClusterInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
