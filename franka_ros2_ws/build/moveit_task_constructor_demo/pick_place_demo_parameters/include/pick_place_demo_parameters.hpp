// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace pick_place_task_demo {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        bool execute = false;
        std::string table_name;
        std::string table_reference_frame;
        std::vector<double> table_dimensions;
        std::vector<double> table_pose;
        std::string object_name;
        std::string object_reference_frame;
        std::vector<double> object_dimensions;
        std::vector<double> object_pose;
        bool spawn_table = true;
        int64_t max_solutions = 10;
        std::string arm_group_name;
        std::string eef_name;
        std::string hand_group_name;
        std::string hand_frame;
        std::string hand_open_pose;
        std::string hand_close_pose;
        std::string arm_home_pose;
        std::string world_frame;
        std::string surface_link;
        std::vector<double> grasp_frame_transform;
        std::vector<double> place_pose;
        double place_surface_offset;
        double approach_object_min_dist;
        double approach_object_max_dist;
        double lift_object_min_dist;
        double lift_object_max_dist;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool execute = false;
        bool spawn_table = true;
        int64_t max_solutions = 10;
        double place_surface_offset;
        double approach_object_min_dist;
        double approach_object_max_dist;
        double lift_object_min_dist;
        double lift_object_max_dist;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("pick_place_task_demo"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "") {
      logger_ = logger;
      prefix_ = prefix;
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.execute = params.execute;
      output.spawn_table = params.spawn_table;
      output.max_solutions = params.max_solutions;
      output.place_surface_offset = params.place_surface_offset;
      output.approach_object_min_dist = params.approach_object_min_dist;
      output.approach_object_max_dist = params.approach_object_max_dist;
      output.lift_object_min_dist = params.lift_object_min_dist;
      output.lift_object_max_dist = params.lift_object_max_dist;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "execute")) {
            updated_params.execute = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "table_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.table_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "table_reference_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.table_reference_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "table_dimensions")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.table_dimensions = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "table_pose")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.table_pose = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "object_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.object_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "object_reference_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.object_reference_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "object_dimensions")) {
            if(auto validation_result = fixed_size<double>(param, 2);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.object_dimensions = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "object_pose")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.object_pose = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "spawn_table")) {
            updated_params.spawn_table = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "max_solutions")) {
            updated_params.max_solutions = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "arm_group_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.arm_group_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "eef_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.eef_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hand_group_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hand_group_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hand_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hand_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hand_open_pose")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hand_open_pose = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "hand_close_pose")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.hand_close_pose = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "arm_home_pose")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.arm_home_pose = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "world_frame")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.world_frame = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "surface_link")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.surface_link = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "grasp_frame_transform")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.grasp_frame_transform = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "place_pose")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.place_pose = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "place_surface_offset")) {
            updated_params.place_surface_offset = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "approach_object_min_dist")) {
            updated_params.approach_object_min_dist = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "approach_object_max_dist")) {
            updated_params.approach_object_max_dist = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lift_object_min_dist")) {
            updated_params.lift_object_min_dist = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lift_object_max_dist")) {
            updated_params.lift_object_max_dist = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "execute")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.execute);
          parameters_interface_->declare_parameter(prefix_ + "execute", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "table_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "table_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "table_reference_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "table_reference_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "table_dimensions")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "table_dimensions", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "table_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "table_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "object_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "object_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "object_reference_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "object_reference_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "object_dimensions")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "object_dimensions", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "object_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "object_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "spawn_table")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.spawn_table);
          parameters_interface_->declare_parameter(prefix_ + "spawn_table", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "max_solutions")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.max_solutions);
          parameters_interface_->declare_parameter(prefix_ + "max_solutions", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "arm_group_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "arm_group_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "eef_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "eef_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hand_group_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "hand_group_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hand_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "hand_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hand_open_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "hand_open_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "hand_close_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "hand_close_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "arm_home_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "arm_home_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "world_frame")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "world_frame", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "surface_link")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "surface_link", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "grasp_frame_transform")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "grasp_frame_transform", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "place_pose")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "place_pose", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "place_surface_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE;
          parameters_interface_->declare_parameter(prefix_ + "place_surface_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "approach_object_min_dist")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE;
          parameters_interface_->declare_parameter(prefix_ + "approach_object_min_dist", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "approach_object_max_dist")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE;
          parameters_interface_->declare_parameter(prefix_ + "approach_object_max_dist", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lift_object_min_dist")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE;
          parameters_interface_->declare_parameter(prefix_ + "lift_object_min_dist", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lift_object_max_dist")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE;
          parameters_interface_->declare_parameter(prefix_ + "lift_object_max_dist", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "execute");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.execute = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "table_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'table_name': {}", validation_result.error()));
      }
      updated_params.table_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "table_reference_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'table_reference_frame': {}", validation_result.error()));
      }
      updated_params.table_reference_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "table_dimensions");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'table_dimensions': {}", validation_result.error()));
      }
      updated_params.table_dimensions = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "table_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'table_pose': {}", validation_result.error()));
      }
      updated_params.table_pose = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "object_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'object_name': {}", validation_result.error()));
      }
      updated_params.object_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "object_reference_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'object_reference_frame': {}", validation_result.error()));
      }
      updated_params.object_reference_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "object_dimensions");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 2);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'object_dimensions': {}", validation_result.error()));
      }
      updated_params.object_dimensions = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "object_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'object_pose': {}", validation_result.error()));
      }
      updated_params.object_pose = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "spawn_table");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.spawn_table = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "max_solutions");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.max_solutions = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "arm_group_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'arm_group_name': {}", validation_result.error()));
      }
      updated_params.arm_group_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "eef_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'eef_name': {}", validation_result.error()));
      }
      updated_params.eef_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "hand_group_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hand_group_name': {}", validation_result.error()));
      }
      updated_params.hand_group_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "hand_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hand_frame': {}", validation_result.error()));
      }
      updated_params.hand_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "hand_open_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hand_open_pose': {}", validation_result.error()));
      }
      updated_params.hand_open_pose = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "hand_close_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'hand_close_pose': {}", validation_result.error()));
      }
      updated_params.hand_close_pose = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "arm_home_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'arm_home_pose': {}", validation_result.error()));
      }
      updated_params.arm_home_pose = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "world_frame");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'world_frame': {}", validation_result.error()));
      }
      updated_params.world_frame = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "surface_link");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'surface_link': {}", validation_result.error()));
      }
      updated_params.surface_link = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "grasp_frame_transform");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'grasp_frame_transform': {}", validation_result.error()));
      }
      updated_params.grasp_frame_transform = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "place_pose");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'place_pose': {}", validation_result.error()));
      }
      updated_params.place_pose = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "place_surface_offset");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.place_surface_offset = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "approach_object_min_dist");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.approach_object_min_dist = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "approach_object_max_dist");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.approach_object_max_dist = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lift_object_min_dist");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lift_object_min_dist = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "lift_object_max_dist");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.lift_object_max_dist = param.as_double();


      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
    }

    private:
      void update_interal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = updated_params;
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;

      // rclcpp::Logger cannot be default-constructed
      // so we must provide a initialization here even though
      // every one of our constructors initializes logger_
      rclcpp::Logger logger_ = rclcpp::get_logger("pick_place_task_demo");
      std::mutex mutable mutex_;
  };

} // namespace pick_place_task_demo
