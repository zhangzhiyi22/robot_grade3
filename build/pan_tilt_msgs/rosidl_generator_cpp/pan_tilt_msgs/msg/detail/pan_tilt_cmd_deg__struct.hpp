// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdDeg.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdDeg __attribute__((deprecated))
#else
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdDeg __declspec(deprecated)
#endif

namespace pan_tilt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanTiltCmdDeg_
{
  using Type = PanTiltCmdDeg_<ContainerAllocator>;

  explicit PanTiltCmdDeg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->speed = 0;
    }
  }

  explicit PanTiltCmdDeg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->speed = 0;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _speed_type =
    int16_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__speed(
    const int16_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> *;
  using ConstRawPtr =
    const pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdDeg
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdDeg
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdDeg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanTiltCmdDeg_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PanTiltCmdDeg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanTiltCmdDeg_

// alias to use template instance with default allocator
using PanTiltCmdDeg =
  pan_tilt_msgs::msg::PanTiltCmdDeg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_DEG__STRUCT_HPP_
