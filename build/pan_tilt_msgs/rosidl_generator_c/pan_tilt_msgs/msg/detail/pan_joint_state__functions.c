// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice
#include "pan_tilt_msgs/msg/detail/pan_joint_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name1`
// Member `name2`
#include "rosidl_runtime_c/string_functions.h"

bool
pan_tilt_msgs__msg__PanJointState__init(pan_tilt_msgs__msg__PanJointState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    pan_tilt_msgs__msg__PanJointState__fini(msg);
    return false;
  }
  // name1
  if (!rosidl_runtime_c__String__init(&msg->name1)) {
    pan_tilt_msgs__msg__PanJointState__fini(msg);
    return false;
  }
  // position1
  // velocity1
  // effort1
  // name2
  if (!rosidl_runtime_c__String__init(&msg->name2)) {
    pan_tilt_msgs__msg__PanJointState__fini(msg);
    return false;
  }
  // position2
  // velocity2
  // effort2
  return true;
}

void
pan_tilt_msgs__msg__PanJointState__fini(pan_tilt_msgs__msg__PanJointState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name1
  rosidl_runtime_c__String__fini(&msg->name1);
  // position1
  // velocity1
  // effort1
  // name2
  rosidl_runtime_c__String__fini(&msg->name2);
  // position2
  // velocity2
  // effort2
}

bool
pan_tilt_msgs__msg__PanJointState__are_equal(const pan_tilt_msgs__msg__PanJointState * lhs, const pan_tilt_msgs__msg__PanJointState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // name1
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name1), &(rhs->name1)))
  {
    return false;
  }
  // position1
  if (lhs->position1 != rhs->position1) {
    return false;
  }
  // velocity1
  if (lhs->velocity1 != rhs->velocity1) {
    return false;
  }
  // effort1
  if (lhs->effort1 != rhs->effort1) {
    return false;
  }
  // name2
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name2), &(rhs->name2)))
  {
    return false;
  }
  // position2
  if (lhs->position2 != rhs->position2) {
    return false;
  }
  // velocity2
  if (lhs->velocity2 != rhs->velocity2) {
    return false;
  }
  // effort2
  if (lhs->effort2 != rhs->effort2) {
    return false;
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanJointState__copy(
  const pan_tilt_msgs__msg__PanJointState * input,
  pan_tilt_msgs__msg__PanJointState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // name1
  if (!rosidl_runtime_c__String__copy(
      &(input->name1), &(output->name1)))
  {
    return false;
  }
  // position1
  output->position1 = input->position1;
  // velocity1
  output->velocity1 = input->velocity1;
  // effort1
  output->effort1 = input->effort1;
  // name2
  if (!rosidl_runtime_c__String__copy(
      &(input->name2), &(output->name2)))
  {
    return false;
  }
  // position2
  output->position2 = input->position2;
  // velocity2
  output->velocity2 = input->velocity2;
  // effort2
  output->effort2 = input->effort2;
  return true;
}

pan_tilt_msgs__msg__PanJointState *
pan_tilt_msgs__msg__PanJointState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanJointState * msg = (pan_tilt_msgs__msg__PanJointState *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanJointState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pan_tilt_msgs__msg__PanJointState));
  bool success = pan_tilt_msgs__msg__PanJointState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pan_tilt_msgs__msg__PanJointState__destroy(pan_tilt_msgs__msg__PanJointState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pan_tilt_msgs__msg__PanJointState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pan_tilt_msgs__msg__PanJointState__Sequence__init(pan_tilt_msgs__msg__PanJointState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanJointState * data = NULL;

  if (size) {
    data = (pan_tilt_msgs__msg__PanJointState *)allocator.zero_allocate(size, sizeof(pan_tilt_msgs__msg__PanJointState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pan_tilt_msgs__msg__PanJointState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pan_tilt_msgs__msg__PanJointState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pan_tilt_msgs__msg__PanJointState__Sequence__fini(pan_tilt_msgs__msg__PanJointState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pan_tilt_msgs__msg__PanJointState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pan_tilt_msgs__msg__PanJointState__Sequence *
pan_tilt_msgs__msg__PanJointState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pan_tilt_msgs__msg__PanJointState__Sequence * array = (pan_tilt_msgs__msg__PanJointState__Sequence *)allocator.allocate(sizeof(pan_tilt_msgs__msg__PanJointState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pan_tilt_msgs__msg__PanJointState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pan_tilt_msgs__msg__PanJointState__Sequence__destroy(pan_tilt_msgs__msg__PanJointState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pan_tilt_msgs__msg__PanJointState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pan_tilt_msgs__msg__PanJointState__Sequence__are_equal(const pan_tilt_msgs__msg__PanJointState__Sequence * lhs, const pan_tilt_msgs__msg__PanJointState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pan_tilt_msgs__msg__PanJointState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pan_tilt_msgs__msg__PanJointState__Sequence__copy(
  const pan_tilt_msgs__msg__PanJointState__Sequence * input,
  pan_tilt_msgs__msg__PanJointState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pan_tilt_msgs__msg__PanJointState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pan_tilt_msgs__msg__PanJointState * data =
      (pan_tilt_msgs__msg__PanJointState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pan_tilt_msgs__msg__PanJointState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pan_tilt_msgs__msg__PanJointState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pan_tilt_msgs__msg__PanJointState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
