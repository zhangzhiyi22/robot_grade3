// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:srv/MotorGains.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/srv/detail/motor_gains__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
#include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__MotorGains_Request__init(message_memory);
}

void interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__MotorGains_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_member_array[9] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, cmd_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, kp_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, ki_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kd_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, kd_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, k1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "k2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, k2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, kp_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ki_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Request, ki_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "MotorGains_Request",  // message name
  9,  // number of fields
  sizeof(interbotix_xs_msgs__srv__MotorGains_Request),
  interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_member_array,  // message members
  interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Request)() {
  if (!interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__MotorGains_Request__rosidl_typesupport_introspection_c__MotorGains_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__MotorGains_Response__init(message_memory);
}

void interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__MotorGains_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__MotorGains_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "MotorGains_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_xs_msgs__srv__MotorGains_Response),
  interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_member_array,  // message members
  interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Response)() {
  if (!interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__MotorGains_Response__rosidl_typesupport_introspection_c__MotorGains_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/motor_gains__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_members = {
  "interbotix_xs_msgs__srv",  // service namespace
  "MotorGains",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains)() {
  if (!interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, MotorGains_Response)()->data;
  }

  return &interbotix_xs_msgs__srv__detail__motor_gains__rosidl_typesupport_introspection_c__MotorGains_service_type_support_handle;
}
