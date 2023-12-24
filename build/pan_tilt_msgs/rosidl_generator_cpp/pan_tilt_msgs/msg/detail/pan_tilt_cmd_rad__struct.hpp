// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltCmdRad.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdRad __attribute__((deprecated))
#else
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdRad __declspec(deprecated)
#endif

namespace pan_tilt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanTiltCmdRad_
{
  using Type = PanTiltCmdRad_<ContainerAllocator>;

  explicit PanTiltCmdRad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->speed = 0.0;
    }
  }

  explicit PanTiltCmdRad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->speed = 0.0;
    }
  }

  // field types and members
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> *;
  using ConstRawPtr =
    const pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdRad
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltCmdRad
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltCmdRad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanTiltCmdRad_ & other) const
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
  bool operator!=(const PanTiltCmdRad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanTiltCmdRad_

// alias to use template instance with default allocator
using PanTiltCmdRad =
  pan_tilt_msgs::msg::PanTiltCmdRad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_CMD_RAD__STRUCT_HPP_
