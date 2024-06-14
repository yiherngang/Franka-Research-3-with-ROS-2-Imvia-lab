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

#include "example_validators.hpp"


namespace admittance_controller {

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
        double scientific_notation_num = 1e-11;
        std::string interpolation_mode = "spline";
        std::vector<std::string> joints = {"joint1", "joint2", "joint3"};
        std::vector<std::string> dof_names = {"x", "y", "rz"};
        rsl::StaticString<25> fixed_string = {"string_value"};
        rsl::StaticVector<double, 10> fixed_array = {{1.0, 2.3, 4.0, 5.4, 3.3}};
        rsl::StaticString<25> fixed_string_no_default;
        std::vector<std::string> command_interfaces;
        std::vector<std::string> state_interfaces;
        std::vector<std::string> chainable_command_interfaces;
        bool enable_parameter_update_without_reactivation = true;
        bool use_feedforward_commanded_input = false;
        int64_t lt_eq_fifteen = 1;
        int64_t gt_fifteen = 16;
        int64_t one_number = 14540;
        std::vector<int64_t> three_numbers = {3, 4, 5};
        rsl::StaticVector<int64_t, 5> three_numbers_of_five = {{3, 3, 3}};
        struct Pid {
            double rate = 0.005;
            struct MapJoints {
                double p = 1.0;
                double i = 1.0;
                double d = 1.0;
            };
            std::map<std::string, MapJoints> joints_map;
        } pid;
        struct Gains {
            struct MapDofNames {
                double k = 2.0;
            };
            std::map<std::string, MapDofNames> dof_names_map;
        } gains;
        struct Kinematics {
            std::string plugin_name;
            std::string plugin_package;
            std::string base;
            std::string tip;
            double alpha = 0.0005;
            std::string group_name;
        } kinematics;
        struct FtSensor {
            std::string name;
            double filter_coefficient = 0.005;
            struct Frame {
                std::string id;
                bool external = false;
            } frame;
        } ft_sensor;
        struct Control {
            struct Frame {
                std::string id;
                bool external = false;
            } frame;
        } control;
        struct FixedWorldFrame {
            struct Frame {
                std::string id;
                bool external = false;
            } frame;
        } fixed_world_frame;
        struct GravityCompensation {
            struct Frame {
                std::string id;
                bool external = false;
            } frame;
            struct Cog {
                std::vector<double> pos;
                double force = std::numeric_limits<double>::quiet_NaN();
            } CoG;
        } gravity_compensation;
        struct Admittance {
            std::vector<bool> selected_axes;
            std::vector<double> mass;
            std::vector<double> damping_ratio;
            std::vector<double> stiffness;
        } admittance;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double scientific_notation_num = 1e-11;
        rsl::StaticString<25> fixed_string = {"string_value"};
        rsl::StaticVector<double, 10> fixed_array = {{1.0, 2.3, 4.0, 5.4, 3.3}};
        rsl::StaticString<25> fixed_string_no_default;
        bool enable_parameter_update_without_reactivation = true;
        bool use_feedforward_commanded_input = false;
        int64_t lt_eq_fifteen = 1;
        int64_t gt_fifteen = 16;
        int64_t one_number = 14540;
        rsl::StaticVector<int64_t, 5> three_numbers_of_five = {{3, 3, 3}};
        struct Pid {
            double rate = 0.005;
        } pid;
        struct Kinematics {
            double alpha = 0.0005;
        } kinematics;
        struct FtSensor {
            double filter_coefficient = 0.005;
            struct Frame {
                bool external = false;
            } frame;
        } ft_sensor;
        struct Control {
            struct Frame {
                bool external = false;
            } frame;
        } control;
        struct FixedWorldFrame {
            struct Frame {
                bool external = false;
            } frame;
        } fixed_world_frame;
        struct GravityCompensation {
            struct Frame {
                bool external = false;
            } frame;
            struct Cog {
                double force = std::numeric_limits<double>::quiet_NaN();
            } CoG;
        } gravity_compensation;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("admittance_controller"), prefix) {
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
      output.scientific_notation_num = params.scientific_notation_num;
      output.pid.rate = params.pid.rate;
      output.fixed_string = params.fixed_string;
      output.fixed_array = params.fixed_array;
      output.fixed_string_no_default = params.fixed_string_no_default;
      output.kinematics.alpha = params.kinematics.alpha;
      output.ft_sensor.frame.external = params.ft_sensor.frame.external;
      output.ft_sensor.filter_coefficient = params.ft_sensor.filter_coefficient;
      output.control.frame.external = params.control.frame.external;
      output.fixed_world_frame.frame.external = params.fixed_world_frame.frame.external;
      output.gravity_compensation.frame.external = params.gravity_compensation.frame.external;
      output.gravity_compensation.CoG.force = params.gravity_compensation.CoG.force;
      output.enable_parameter_update_without_reactivation = params.enable_parameter_update_without_reactivation;
      output.use_feedforward_commanded_input = params.use_feedforward_commanded_input;
      output.lt_eq_fifteen = params.lt_eq_fifteen;
      output.gt_fifteen = params.gt_fifteen;
      output.one_number = params.one_number;
      output.three_numbers_of_five = params.three_numbers_of_five;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "proportional gain term";
              descriptor.read_only = false;
              descriptor.floating_point_range.resize(1);
              descriptor.floating_point_range.at(0).from_value = 0.0001;
              descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = gt_eq<double>(param, 0.0001);
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'pid.__map_joints.p': {}", validation_result.error()));
          }
          entry.p = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "integral gain term";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "derivative gain term";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}
      for (const auto & value : updated_params.dof_names){
          auto& entry = updated_params.gains.dof_names_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "k");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "general gain";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.k);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.k = param.as_double();}
    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "scientific_notation_num")) {
            updated_params.scientific_notation_num = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interpolation_mode")) {
            if(auto validation_result = one_of<std::string>(param, {"spline", "linear"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = custom_validators::no_args_validator(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.interpolation_mode = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "joints")) {
            updated_params.joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "dof_names")) {
            updated_params.dof_names = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pid.rate")) {
            updated_params.pid.rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_string")) {
            if(auto validation_result = size_lt<std::string>(param, 26);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.fixed_string = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_array")) {
            if(auto validation_result = size_lt<double>(param, 11);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.fixed_array = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_string_no_default")) {
            if(auto validation_result = size_lt<std::string>(param, 26);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.fixed_string_no_default = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interfaces")) {
            updated_params.command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_interfaces")) {
            updated_params.state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "chainable_command_interfaces")) {
            updated_params.chainable_command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.plugin_name")) {
            updated_params.kinematics.plugin_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.plugin_package")) {
            updated_params.kinematics.plugin_package = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.base")) {
            updated_params.kinematics.base = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.tip")) {
            updated_params.kinematics.tip = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.alpha")) {
            updated_params.kinematics.alpha = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "kinematics.group_name")) {
            updated_params.kinematics.group_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.name")) {
            updated_params.ft_sensor.name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.frame.id")) {
            updated_params.ft_sensor.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.frame.external")) {
            updated_params.ft_sensor.frame.external = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "ft_sensor.filter_coefficient")) {
            updated_params.ft_sensor.filter_coefficient = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "control.frame.id")) {
            updated_params.control.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "control.frame.external")) {
            updated_params.control.frame.external = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_world_frame.frame.id")) {
            updated_params.fixed_world_frame.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "fixed_world_frame.frame.external")) {
            updated_params.fixed_world_frame.frame.external = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.frame.id")) {
            updated_params.gravity_compensation.frame.id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.frame.external")) {
            updated_params.gravity_compensation.frame.external = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.CoG.pos")) {
            if(auto validation_result = fixed_size<double>(param, 3);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.gravity_compensation.CoG.pos = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gravity_compensation.CoG.force")) {
            updated_params.gravity_compensation.CoG.force = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.selected_axes")) {
            if(auto validation_result = fixed_size<bool>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.selected_axes = param.as_bool_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.mass")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = element_bounds<double>(param, 0.0001, 1000000.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.mass = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.damping_ratio")) {
            if(auto validation_result = fixed_size<double>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = custom_validators::validate_double_array_custom_func(param, 20.3, 5.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = element_bounds<double>(param, 0.1, 10.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.damping_ratio = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "admittance.stiffness")) {
            if(auto validation_result = element_bounds(param, 0.0001, 100000.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.admittance.stiffness = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_parameter_update_without_reactivation")) {
            updated_params.enable_parameter_update_without_reactivation = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "use_feedforward_commanded_input")) {
            updated_params.use_feedforward_commanded_input = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "lt_eq_fifteen")) {
            if(auto validation_result = lt_eq<int64_t>(param, 15);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.lt_eq_fifteen = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "gt_fifteen")) {
            if(auto validation_result = gt<int64_t>(param, 15);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.gt_fifteen = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "one_number")) {
            if(auto validation_result = bounds<int64_t>(param, 1024, 65535);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.one_number = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "three_numbers")) {
            updated_params.three_numbers = param.as_integer_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "three_numbers_of_five")) {
            if(auto validation_result = size_lt<int64_t>(param, 6);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.three_numbers_of_five = param.as_integer_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      // update dynamic parameters
      for (const auto &param: parameters) {
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "p");
            if (param.get_name() == param_name) {
                if(auto validation_result = gt_eq<double>(param, 0.0001);
                  !validation_result) {
                    return rsl::to_parameter_result_msg(validation_result);
                }
                updated_params.pid.joints_map[value].p = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "i");
            if (param.get_name() == param_name) {
                updated_params.pid.joints_map[value].i = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "d");
            if (param.get_name() == param_name) {
                updated_params.pid.joints_map[value].d = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.dof_names){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "k");
            if (param.get_name() == param_name) {
                updated_params.gains.dof_names_map[value].k = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
      }
      updated_params.__stamp = clock_.now();
      update_interal_params(updated_params);
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "scientific_notation_num")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Test scientific notation";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.scientific_notation_num);
          parameters_interface_->declare_parameter(prefix_ + "scientific_notation_num", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interpolation_mode")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which algorithm to use for interpolation.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interpolation_mode);
          parameters_interface_->declare_parameter(prefix_ + "interpolation_mode", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which joints will be used by the controller";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.joints);
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "dof_names")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which joints will be used by the controller";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.dof_names);
          parameters_interface_->declare_parameter(prefix_ + "dof_names", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pid.rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "update loop period in seconds";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pid.rate);
          parameters_interface_->declare_parameter(prefix_ + "pid.rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_string")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "test code generation for fixed sized string";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.fixed_string);
          parameters_interface_->declare_parameter(prefix_ + "fixed_string", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_array")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "test code generation for fixed sized array";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.fixed_array);
          parameters_interface_->declare_parameter(prefix_ + "fixed_array", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_string_no_default")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "test code generation for fixed sized string with no default";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "fixed_string_no_default", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which command interfaces to claim";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which state interfaces to claim";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "chainable_command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which chainable interfaces to claim";
          descriptor.read_only = true;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "chainable_command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.plugin_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies which kinematics plugin to load";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.plugin_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.plugin_package")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the package to load the kinematics plugin from";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.plugin_package", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.base")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the base link of the robot description used by the kinematics plugin";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.base", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.tip")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the end effector link of the robot description used by the kinematics plugin";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.tip", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.alpha")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the damping coefficient for the Jacobian pseudo inverse";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.kinematics.alpha);
          parameters_interface_->declare_parameter(prefix_ + "kinematics.alpha", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "kinematics.group_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the group name for planning with Moveit";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "kinematics.group_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "name of the force torque sensor in the robot description";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "frame of the force torque sensor";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.frame.external")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies if the force torque sensor is contained in the kinematics chain from the base to the tip";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ft_sensor.frame.external);
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.frame.external", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "ft_sensor.filter_coefficient")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies the coefficient for the sensor's exponential filter";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.ft_sensor.filter_coefficient);
          parameters_interface_->declare_parameter(prefix_ + "ft_sensor.filter_coefficient", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "control.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "control frame used for admittance control";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "control.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "control.frame.external")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies if the control frame is contained in the kinematics chain from the base to the tip";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.control.frame.external);
          parameters_interface_->declare_parameter(prefix_ + "control.frame.external", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_world_frame.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "world frame, gravity points down (neg. Z) in this frame";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "fixed_world_frame.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "fixed_world_frame.frame.external")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies if the world frame is contained in the kinematics chain from the base to the tip";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.fixed_world_frame.frame.external);
          parameters_interface_->declare_parameter(prefix_ + "fixed_world_frame.frame.external", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.frame.id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "frame which center of gravity (CoG) is defined in";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_STRING;
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.frame.id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.frame.external")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies if the center of gravity frame is contained in the kinematics chain from the base to the tip";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gravity_compensation.frame.external);
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.frame.external", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.CoG.pos")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "position of the center of gravity (CoG) in its frame";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.CoG.pos", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gravity_compensation.CoG.force")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "weight of the end effector, e.g mass * 9.81";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.gravity_compensation.CoG.force);
          parameters_interface_->declare_parameter(prefix_ + "gravity_compensation.CoG.force", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.selected_axes")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies if the axes x, y, z, rx, ry, and rz are enabled";
          descriptor.read_only = false;
          auto parameter = rclcpp::ParameterType::PARAMETER_BOOL_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.selected_axes", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.mass")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies mass values for x, y, z, rx, ry, and rz used in the admittance calculation";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0001;
          descriptor.floating_point_range.at(0).to_value = 1000000.0;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.mass", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.damping_ratio")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies damping ratio values for x, y, z, rx, ry, and rz used in the admittance calculation. The values are calculated as damping can be used instead: zeta = D / (2 * sqrt( M * S ))";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.1;
          descriptor.floating_point_range.at(0).to_value = 10.0;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.damping_ratio", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "admittance.stiffness")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "specifies stiffness values for x, y, z, rx, ry, and rz used in the admittance calculation";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0001;
          descriptor.floating_point_range.at(0).to_value = 100000.0;
          auto parameter = rclcpp::ParameterType::PARAMETER_DOUBLE_ARRAY;
          parameters_interface_->declare_parameter(prefix_ + "admittance.stiffness", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_parameter_update_without_reactivation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "if enabled, read_only parameters will be dynamically updated in the control loop";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_parameter_update_without_reactivation);
          parameters_interface_->declare_parameter(prefix_ + "enable_parameter_update_without_reactivation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "use_feedforward_commanded_input")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "if enabled, the velocity commanded to the admittance controller is added to its calculated admittance velocity";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.use_feedforward_commanded_input);
          parameters_interface_->declare_parameter(prefix_ + "use_feedforward_commanded_input", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "lt_eq_fifteen")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "should be a number less than or equal to 15";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = std::numeric_limits<int>::lowest();
          descriptor.integer_range.at(0).to_value = 15;
          auto parameter = to_parameter_value(updated_params.lt_eq_fifteen);
          parameters_interface_->declare_parameter(prefix_ + "lt_eq_fifteen", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "gt_fifteen")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "should be a number greater than 15";
          descriptor.read_only = false;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 15;
          descriptor.integer_range.at(0).to_value = std::numeric_limits<int>::max();
          auto parameter = to_parameter_value(updated_params.gt_fifteen);
          parameters_interface_->declare_parameter(prefix_ + "gt_fifteen", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "one_number")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = true;
          descriptor.integer_range.resize(1);
          descriptor.integer_range.at(0).from_value = 1024;
          descriptor.integer_range.at(0).to_value = 65535;
          auto parameter = to_parameter_value(updated_params.one_number);
          parameters_interface_->declare_parameter(prefix_ + "one_number", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "three_numbers")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.three_numbers);
          parameters_interface_->declare_parameter(prefix_ + "three_numbers", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "three_numbers_of_five")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.three_numbers_of_five);
          parameters_interface_->declare_parameter(prefix_ + "three_numbers_of_five", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "scientific_notation_num");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.scientific_notation_num = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "interpolation_mode");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = one_of<std::string>(param, {"spline", "linear"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'interpolation_mode': {}", validation_result.error()));
      }
      if(auto validation_result = custom_validators::no_args_validator(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'interpolation_mode': {}", validation_result.error()));
      }
      updated_params.interpolation_mode = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "dof_names");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.dof_names = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "pid.rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pid.rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_string");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = size_lt<std::string>(param, 26);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'fixed_string': {}", validation_result.error()));
      }
      updated_params.fixed_string = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_array");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = size_lt<double>(param, 11);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'fixed_array': {}", validation_result.error()));
      }
      updated_params.fixed_array = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_string_no_default");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = size_lt<std::string>(param, 26);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'fixed_string_no_default': {}", validation_result.error()));
      }
      updated_params.fixed_string_no_default = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "chainable_command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.chainable_command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.plugin_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.plugin_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.plugin_package");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.plugin_package = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.base");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.base = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.tip");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.tip = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.alpha");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.alpha = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "kinematics.group_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.kinematics.group_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.frame.external");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.frame.external = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "ft_sensor.filter_coefficient");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.ft_sensor.filter_coefficient = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "control.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.control.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "control.frame.external");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.control.frame.external = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_world_frame.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.fixed_world_frame.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "fixed_world_frame.frame.external");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.fixed_world_frame.frame.external = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.frame.id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gravity_compensation.frame.id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.frame.external");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gravity_compensation.frame.external = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.CoG.pos");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 3);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gravity_compensation.CoG.pos': {}", validation_result.error()));
      }
      updated_params.gravity_compensation.CoG.pos = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "gravity_compensation.CoG.force");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.gravity_compensation.CoG.force = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.selected_axes");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<bool>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.selected_axes': {}", validation_result.error()));
      }
      updated_params.admittance.selected_axes = param.as_bool_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.mass");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.mass': {}", validation_result.error()));
      }
      if(auto validation_result = element_bounds<double>(param, 0.0001, 1000000.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.mass': {}", validation_result.error()));
      }
      updated_params.admittance.mass = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.damping_ratio");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = fixed_size<double>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.damping_ratio': {}", validation_result.error()));
      }
      if(auto validation_result = custom_validators::validate_double_array_custom_func(param, 20.3, 5.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.damping_ratio': {}", validation_result.error()));
      }
      if(auto validation_result = element_bounds<double>(param, 0.1, 10.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.damping_ratio': {}", validation_result.error()));
      }
      updated_params.admittance.damping_ratio = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "admittance.stiffness");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = element_bounds(param, 0.0001, 100000.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'admittance.stiffness': {}", validation_result.error()));
      }
      updated_params.admittance.stiffness = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "enable_parameter_update_without_reactivation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_parameter_update_without_reactivation = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "use_feedforward_commanded_input");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.use_feedforward_commanded_input = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "lt_eq_fifteen");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = lt_eq<int64_t>(param, 15);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'lt_eq_fifteen': {}", validation_result.error()));
      }
      updated_params.lt_eq_fifteen = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "gt_fifteen");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<int64_t>(param, 15);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'gt_fifteen': {}", validation_result.error()));
      }
      updated_params.gt_fifteen = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "one_number");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = bounds<int64_t>(param, 1024, 65535);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'one_number': {}", validation_result.error()));
      }
      updated_params.one_number = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "three_numbers");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.three_numbers = param.as_integer_array();
      param = parameters_interface_->get_parameter(prefix_ + "three_numbers_of_five");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = size_lt<int64_t>(param, 6);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'three_numbers_of_five': {}", validation_result.error()));
      }
      updated_params.three_numbers_of_five = param.as_integer_array();


      // declare and set all dynamic parameters
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "proportional gain term";
              descriptor.read_only = false;
              descriptor.floating_point_range.resize(1);
              descriptor.floating_point_range.at(0).from_value = 0.0001;
              descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          if(auto validation_result = gt_eq<double>(param, 0.0001);
            !validation_result) {
              throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'pid.__map_joints.p': {}", validation_result.error()));
          }
          entry.p = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "integral gain term";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.pid.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "pid", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "derivative gain term";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}
      for (const auto & value : updated_params.dof_names){
          auto& entry = updated_params.gains.dof_names_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "k");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "general gain";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.k);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.k = param.as_double();}

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
      rclcpp::Logger logger_ = rclcpp::get_logger("admittance_controller");
      std::mutex mutable mutex_;
  };

} // namespace admittance_controller
