// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interbotix_perception_msgs:srv/FilterParams.idl
// generated code does not contain a copyright notice

#ifndef INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__TRAITS_HPP_
#define INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interbotix_perception_msgs/srv/detail/filter_params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interbotix_perception_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilterParams_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_filter_min
  {
    out << "x_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_filter_min, out);
    out << ", ";
  }

  // member: x_filter_max
  {
    out << "x_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_filter_max, out);
    out << ", ";
  }

  // member: y_filter_min
  {
    out << "y_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filter_min, out);
    out << ", ";
  }

  // member: y_filter_max
  {
    out << "y_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filter_max, out);
    out << ", ";
  }

  // member: z_filter_min
  {
    out << "z_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.z_filter_min, out);
    out << ", ";
  }

  // member: z_filter_max
  {
    out << "z_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.z_filter_max, out);
    out << ", ";
  }

  // member: voxel_leaf_size
  {
    out << "voxel_leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_leaf_size, out);
    out << ", ";
  }

  // member: plane_max_iter
  {
    out << "plane_max_iter: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_max_iter, out);
    out << ", ";
  }

  // member: plane_dist_thresh
  {
    out << "plane_dist_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_dist_thresh, out);
    out << ", ";
  }

  // member: ror_radius_search
  {
    out << "ror_radius_search: ";
    rosidl_generator_traits::value_to_yaml(msg.ror_radius_search, out);
    out << ", ";
  }

  // member: ror_min_neighbors
  {
    out << "ror_min_neighbors: ";
    rosidl_generator_traits::value_to_yaml(msg.ror_min_neighbors, out);
    out << ", ";
  }

  // member: cluster_tol
  {
    out << "cluster_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_tol, out);
    out << ", ";
  }

  // member: cluster_min_size
  {
    out << "cluster_min_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_min_size, out);
    out << ", ";
  }

  // member: cluster_max_size
  {
    out << "cluster_max_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_max_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_filter_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.x_filter_min, out);
    out << "\n";
  }

  // member: x_filter_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.x_filter_max, out);
    out << "\n";
  }

  // member: y_filter_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filter_min, out);
    out << "\n";
  }

  // member: y_filter_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.y_filter_max, out);
    out << "\n";
  }

  // member: z_filter_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_filter_min: ";
    rosidl_generator_traits::value_to_yaml(msg.z_filter_min, out);
    out << "\n";
  }

  // member: z_filter_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_filter_max: ";
    rosidl_generator_traits::value_to_yaml(msg.z_filter_max, out);
    out << "\n";
  }

  // member: voxel_leaf_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voxel_leaf_size: ";
    rosidl_generator_traits::value_to_yaml(msg.voxel_leaf_size, out);
    out << "\n";
  }

  // member: plane_max_iter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_max_iter: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_max_iter, out);
    out << "\n";
  }

  // member: plane_dist_thresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_dist_thresh: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_dist_thresh, out);
    out << "\n";
  }

  // member: ror_radius_search
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ror_radius_search: ";
    rosidl_generator_traits::value_to_yaml(msg.ror_radius_search, out);
    out << "\n";
  }

  // member: ror_min_neighbors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ror_min_neighbors: ";
    rosidl_generator_traits::value_to_yaml(msg.ror_min_neighbors, out);
    out << "\n";
  }

  // member: cluster_tol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_tol, out);
    out << "\n";
  }

  // member: cluster_min_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_min_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_min_size, out);
    out << "\n";
  }

  // member: cluster_max_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cluster_max_size: ";
    rosidl_generator_traits::value_to_yaml(msg.cluster_max_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterParams_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_perception_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_perception_msgs::srv::FilterParams_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_perception_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_perception_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_perception_msgs::srv::FilterParams_Request & msg)
{
  return interbotix_perception_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::FilterParams_Request>()
{
  return "interbotix_perception_msgs::srv::FilterParams_Request";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::FilterParams_Request>()
{
  return "interbotix_perception_msgs/srv/FilterParams_Request";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::FilterParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::FilterParams_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_perception_msgs::srv::FilterParams_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interbotix_perception_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FilterParams_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilterParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilterParams_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interbotix_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use interbotix_perception_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interbotix_perception_msgs::srv::FilterParams_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interbotix_perception_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interbotix_perception_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const interbotix_perception_msgs::srv::FilterParams_Response & msg)
{
  return interbotix_perception_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interbotix_perception_msgs::srv::FilterParams_Response>()
{
  return "interbotix_perception_msgs::srv::FilterParams_Response";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::FilterParams_Response>()
{
  return "interbotix_perception_msgs/srv/FilterParams_Response";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::FilterParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::FilterParams_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interbotix_perception_msgs::srv::FilterParams_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interbotix_perception_msgs::srv::FilterParams>()
{
  return "interbotix_perception_msgs::srv::FilterParams";
}

template<>
inline const char * name<interbotix_perception_msgs::srv::FilterParams>()
{
  return "interbotix_perception_msgs/srv/FilterParams";
}

template<>
struct has_fixed_size<interbotix_perception_msgs::srv::FilterParams>
  : std::integral_constant<
    bool,
    has_fixed_size<interbotix_perception_msgs::srv::FilterParams_Request>::value &&
    has_fixed_size<interbotix_perception_msgs::srv::FilterParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<interbotix_perception_msgs::srv::FilterParams>
  : std::integral_constant<
    bool,
    has_bounded_size<interbotix_perception_msgs::srv::FilterParams_Request>::value &&
    has_bounded_size<interbotix_perception_msgs::srv::FilterParams_Response>::value
  >
{
};

template<>
struct is_service<interbotix_perception_msgs::srv::FilterParams>
  : std::true_type
{
};

template<>
struct is_service_request<interbotix_perception_msgs::srv::FilterParams_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interbotix_perception_msgs::srv::FilterParams_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERBOTIX_PERCEPTION_MSGS__SRV__DETAIL__FILTER_PARAMS__TRAITS_HPP_
