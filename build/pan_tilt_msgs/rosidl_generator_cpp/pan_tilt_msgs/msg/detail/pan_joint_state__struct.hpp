// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pan_tilt_msgs:msg/PanJointState.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__pan_tilt_msgs__msg__PanJointState __attribute__((deprecated))
#else
# define DEPRECATED__pan_tilt_msgs__msg__PanJointState __declspec(deprecated)
#endif

namespace pan_tilt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanJointState_
{
  using Type = PanJointState_<ContainerAllocator>;

  explicit PanJointState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = "";
      this->position1 = 0.0;
      this->velocity1 = 0.0;
      this->effort1 = 0.0;
      this->name2 = "";
      this->position2 = 0.0;
      this->velocity2 = 0.0;
      this->effort2 = 0.0;
    }
  }

  explicit PanJointState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name1(_alloc),
    name2(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name1 = "";
      this->position1 = 0.0;
      this->velocity1 = 0.0;
      this->effort1 = 0.0;
      this->name2 = "";
      this->position2 = 0.0;
      this->velocity2 = 0.0;
      this->effort2 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name1_type name1;
  using _position1_type =
    double;
  _position1_type position1;
  using _velocity1_type =
    double;
  _velocity1_type velocity1;
  using _effort1_type =
    double;
  _effort1_type effort1;
  using _name2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name2_type name2;
  using _position2_type =
    double;
  _position2_type position2;
  using _velocity2_type =
    double;
  _velocity2_type velocity2;
  using _effort2_type =
    double;
  _effort2_type effort2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name1 = _arg;
    return *this;
  }
  Type & set__position1(
    const double & _arg)
  {
    this->position1 = _arg;
    return *this;
  }
  Type & set__velocity1(
    const double & _arg)
  {
    this->velocity1 = _arg;
    return *this;
  }
  Type & set__effort1(
    const double & _arg)
  {
    this->effort1 = _arg;
    return *this;
  }
  Type & set__name2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name2 = _arg;
    return *this;
  }
  Type & set__position2(
    const double & _arg)
  {
    this->position2 = _arg;
    return *this;
  }
  Type & set__velocity2(
    const double & _arg)
  {
    this->velocity2 = _arg;
    return *this;
  }
  Type & set__effort2(
    const double & _arg)
  {
    this->effort2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> *;
  using ConstRawPtr =
    const pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pan_tilt_msgs__msg__PanJointState
    std::shared_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pan_tilt_msgs__msg__PanJointState
    std::shared_ptr<pan_tilt_msgs::msg::PanJointState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanJointState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name1 != other.name1) {
      return false;
    }
    if (this->position1 != other.position1) {
      return false;
    }
    if (this->velocity1 != other.velocity1) {
      return false;
    }
    if (this->effort1 != other.effort1) {
      return false;
    }
    if (this->name2 != other.name2) {
      return false;
    }
    if (this->position2 != other.position2) {
      return false;
    }
    if (this->velocity2 != other.velocity2) {
      return false;
    }
    if (this->effort2 != other.effort2) {
      return false;
    }
    return true;
  }
  bool operator!=(const PanJointState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanJointState_

// alias to use template instance with default allocator
using PanJointState =
  pan_tilt_msgs::msg::PanJointState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_JOINT_STATE__STRUCT_HPP_
