// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from interbotix_xs_msgs:srv/RegisterValues.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "interbotix_xs_msgs/srv/detail/register_values__rosidl_typesupport_introspection_c.h"
#include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "interbotix_xs_msgs/srv/detail/register_values__functions.h"
#include "interbotix_xs_msgs/srv/detail/register_values__struct.h"


// Include directives for member types
// Member `cmd_type`
// Member `name`
// Member `reg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__RegisterValues_Request__init(message_memory);
}

void interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__RegisterValues_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_member_array[4] = {
  {
    "cmd_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RegisterValues_Request, cmd_type),  // bytes offset in struct
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
    offsetof(interbotix_xs_msgs__srv__RegisterValues_Request, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RegisterValues_Request, reg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RegisterValues_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "RegisterValues_Request",  // message name
  4,  // number of fields
  sizeof(interbotix_xs_msgs__srv__RegisterValues_Request),
  interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_member_array,  // message members
  interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Request)() {
  if (!interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__RegisterValues_Request__rosidl_typesupport_introspection_c__RegisterValues_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "interbotix_xs_msgs/srv/detail/register_values__rosidl_typesupport_introspection_c.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/register_values__functions.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/register_values__struct.h"


// Include directives for member types
// Member `values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  interbotix_xs_msgs__srv__RegisterValues_Response__init(message_memory);
}

void interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_fini_function(void * message_memory)
{
  interbotix_xs_msgs__srv__RegisterValues_Response__fini(message_memory);
}

size_t interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__size_function__RegisterValues_Response__values(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_const_function__RegisterValues_Response__values(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_function__RegisterValues_Response__values(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__fetch_function__RegisterValues_Response__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_const_function__RegisterValues_Response__values(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__assign_function__RegisterValues_Response__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_function__RegisterValues_Response__values(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__resize_function__RegisterValues_Response__values(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_member_array[1] = {
  {
    "values",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(interbotix_xs_msgs__srv__RegisterValues_Response, values),  // bytes offset in struct
    NULL,  // default value
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__size_function__RegisterValues_Response__values,  // size() function pointer
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_const_function__RegisterValues_Response__values,  // get_const(index) function pointer
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__get_function__RegisterValues_Response__values,  // get(index) function pointer
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__fetch_function__RegisterValues_Response__values,  // fetch(index, &value) function pointer
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__assign_function__RegisterValues_Response__values,  // assign(index, value) function pointer
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__resize_function__RegisterValues_Response__values  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_members = {
  "interbotix_xs_msgs__srv",  // message namespace
  "RegisterValues_Response",  // message name
  1,  // number of fields
  sizeof(interbotix_xs_msgs__srv__RegisterValues_Response),
  interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_member_array,  // message members
  interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Response)() {
  if (!interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &interbotix_xs_msgs__srv__RegisterValues_Response__rosidl_typesupport_introspection_c__RegisterValues_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "interbotix_xs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "interbotix_xs_msgs/srv/detail/register_values__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_members = {
  "interbotix_xs_msgs__srv",  // service namespace
  "RegisterValues",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_Request_message_type_support_handle,
  NULL  // response message
  // interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_Response_message_type_support_handle
};

static rosidl_service_type_support_t interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_type_support_handle = {
  0,
  &interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_interbotix_xs_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues)() {
  if (!interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_type_support_handle.typesupport_identifier) {
    interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interbotix_xs_msgs, srv, RegisterValues_Response)()->data;
  }

  return &interbotix_xs_msgs__srv__detail__register_values__rosidl_typesupport_introspection_c__RegisterValues_service_type_support_handle;
}
