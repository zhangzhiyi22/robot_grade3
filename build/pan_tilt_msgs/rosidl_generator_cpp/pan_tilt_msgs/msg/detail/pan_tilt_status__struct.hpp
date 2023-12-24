// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pan_tilt_msgs:msg/PanTiltStatus.idl
// generated code does not contain a copyright notice

#ifndef PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_HPP_
#define PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_HPP_

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
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltStatus __attribute__((deprecated))
#else
# define DEPRECATED__pan_tilt_msgs__msg__PanTiltStatus __declspec(deprecated)
#endif

namespace pan_tilt_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PanTiltStatus_
{
  using Type = PanTiltStatus_<ContainerAllocator>;

  explicit PanTiltStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->serial_num = "";
      this->hw_version = "";
      this->bd_version = "";
      this->sw_version = "";
      this->set_zero = 0;
      this->speed = 0;
      this->yaw_goal = 0.0f;
      this->pitch_goal = 0.0f;
      this->reserved = 0;
      this->driver_ec = 0;
      this->encoder_ec = 0;
      this->yaw_now = 0.0f;
      this->pitch_now = 0.0f;
      this->yaw_temp = 0.0f;
      this->pitch_temp = 0.0f;
      this->yaw_raw = 0;
      this->pitch_raw = 0;
      this->loop_ec = 0;
      this->loop_time = 0;
    }
  }

  explicit PanTiltStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    serial_num(_alloc),
    hw_version(_alloc),
    bd_version(_alloc),
    sw_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->serial_num = "";
      this->hw_version = "";
      this->bd_version = "";
      this->sw_version = "";
      this->set_zero = 0;
      this->speed = 0;
      this->yaw_goal = 0.0f;
      this->pitch_goal = 0.0f;
      this->reserved = 0;
      this->driver_ec = 0;
      this->encoder_ec = 0;
      this->yaw_now = 0.0f;
      this->pitch_now = 0.0f;
      this->yaw_temp = 0.0f;
      this->pitch_temp = 0.0f;
      this->yaw_raw = 0;
      this->pitch_raw = 0;
      this->loop_ec = 0;
      this->loop_time = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint8_t;
  _id_type id;
  using _serial_num_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _serial_num_type serial_num;
  using _hw_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _hw_version_type hw_version;
  using _bd_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bd_version_type bd_version;
  using _sw_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _sw_version_type sw_version;
  using _set_zero_type =
    uint8_t;
  _set_zero_type set_zero;
  using _speed_type =
    int16_t;
  _speed_type speed;
  using _yaw_goal_type =
    float;
  _yaw_goal_type yaw_goal;
  using _pitch_goal_type =
    float;
  _pitch_goal_type pitch_goal;
  using _reserved_type =
    uint16_t;
  _reserved_type reserved;
  using _driver_ec_type =
    uint16_t;
  _driver_ec_type driver_ec;
  using _encoder_ec_type =
    uint16_t;
  _encoder_ec_type encoder_ec;
  using _yaw_now_type =
    float;
  _yaw_now_type yaw_now;
  using _pitch_now_type =
    float;
  _pitch_now_type pitch_now;
  using _yaw_temp_type =
    float;
  _yaw_temp_type yaw_temp;
  using _pitch_temp_type =
    float;
  _pitch_temp_type pitch_temp;
  using _yaw_raw_type =
    int16_t;
  _yaw_raw_type yaw_raw;
  using _pitch_raw_type =
    int16_t;
  _pitch_raw_type pitch_raw;
  using _loop_ec_type =
    uint16_t;
  _loop_ec_type loop_ec;
  using _loop_time_type =
    uint16_t;
  _loop_time_type loop_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__serial_num(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->serial_num = _arg;
    return *this;
  }
  Type & set__hw_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->hw_version = _arg;
    return *this;
  }
  Type & set__bd_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bd_version = _arg;
    return *this;
  }
  Type & set__sw_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->sw_version = _arg;
    return *this;
  }
  Type & set__set_zero(
    const uint8_t & _arg)
  {
    this->set_zero = _arg;
    return *this;
  }
  Type & set__speed(
    const int16_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__yaw_goal(
    const float & _arg)
  {
    this->yaw_goal = _arg;
    return *this;
  }
  Type & set__pitch_goal(
    const float & _arg)
  {
    this->pitch_goal = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint16_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__driver_ec(
    const uint16_t & _arg)
  {
    this->driver_ec = _arg;
    return *this;
  }
  Type & set__encoder_ec(
    const uint16_t & _arg)
  {
    this->encoder_ec = _arg;
    return *this;
  }
  Type & set__yaw_now(
    const float & _arg)
  {
    this->yaw_now = _arg;
    return *this;
  }
  Type & set__pitch_now(
    const float & _arg)
  {
    this->pitch_now = _arg;
    return *this;
  }
  Type & set__yaw_temp(
    const float & _arg)
  {
    this->yaw_temp = _arg;
    return *this;
  }
  Type & set__pitch_temp(
    const float & _arg)
  {
    this->pitch_temp = _arg;
    return *this;
  }
  Type & set__yaw_raw(
    const int16_t & _arg)
  {
    this->yaw_raw = _arg;
    return *this;
  }
  Type & set__pitch_raw(
    const int16_t & _arg)
  {
    this->pitch_raw = _arg;
    return *this;
  }
  Type & set__loop_ec(
    const uint16_t & _arg)
  {
    this->loop_ec = _arg;
    return *this;
  }
  Type & set__loop_time(
    const uint16_t & _arg)
  {
    this->loop_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltStatus
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pan_tilt_msgs__msg__PanTiltStatus
    std::shared_ptr<pan_tilt_msgs::msg::PanTiltStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PanTiltStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->serial_num != other.serial_num) {
      return false;
    }
    if (this->hw_version != other.hw_version) {
      return false;
    }
    if (this->bd_version != other.bd_version) {
      return false;
    }
    if (this->sw_version != other.sw_version) {
      return false;
    }
    if (this->set_zero != other.set_zero) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->yaw_goal != other.yaw_goal) {
      return false;
    }
    if (this->pitch_goal != other.pitch_goal) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->driver_ec != other.driver_ec) {
      return false;
    }
    if (this->encoder_ec != other.encoder_ec) {
      return false;
    }
    if (this->yaw_now != other.yaw_now) {
      return false;
    }
    if (this->pitch_now != other.pitch_now) {
      return false;
    }
    if (this->yaw_temp != other.yaw_temp) {
      return false;
    }
    if (this->pitch_temp != other.pitch_temp) {
      return false;
    }
    if (this->yaw_raw != other.yaw_raw) {
      return false;
    }
    if (this->pitch_raw != other.pitch_raw) {
      return false;
    }
    if (this->loop_ec != other.loop_ec) {
      return false;
    }
    if (this->loop_time != other.loop_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const PanTiltStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PanTiltStatus_

// alias to use template instance with default allocator
using PanTiltStatus =
  pan_tilt_msgs::msg::PanTiltStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pan_tilt_msgs

#endif  // PAN_TILT_MSGS__MSG__DETAIL__PAN_TILT_STATUS__STRUCT_HPP_
