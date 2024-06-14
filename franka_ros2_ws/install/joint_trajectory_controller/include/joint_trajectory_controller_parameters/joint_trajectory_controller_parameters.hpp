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

#include "validate_jtc_parameters.hpp"


namespace joint_trajectory_controller {

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
        std::vector<std::string> joints = {};
        std::vector<std::string> command_joints = {};
        std::vector<std::string> command_interfaces = {};
        std::vector<std::string> state_interfaces = {};
        double state_publish_rate = 50.0;
        bool allow_partial_joints_goal = false;
        bool open_loop_control = false;
        bool allow_integration_in_goal_trajectories = false;
        double action_monitor_rate = 20.0;
        std::string interpolation_method = "splines";
        struct Gains {
            struct MapJoints {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp = 0.0;
                double ff_velocity_scale = 0.0;
                bool normalize_error = false;
            };
            std::map<std::string, MapJoints> joints_map;
        } gains;
        struct Constraints {
            double stopped_velocity_tolerance = 0.01;
            double goal_time = 0.0;
            struct MapJoints {
                double trajectory = 0.0;
                double goal = 0.0;
            };
            std::map<std::string, MapJoints> joints_map;
        } constraints;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double state_publish_rate = 50.0;
        bool allow_partial_joints_goal = false;
        bool open_loop_control = false;
        bool allow_integration_in_goal_trajectories = false;
        double action_monitor_rate = 20.0;
        struct Constraints {
            double stopped_velocity_tolerance = 0.01;
            double goal_time = 0.0;
        } constraints;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("joint_trajectory_controller"), prefix) {
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
      output.state_publish_rate = params.state_publish_rate;
      output.allow_partial_joints_goal = params.allow_partial_joints_goal;
      output.open_loop_control = params.open_loop_control;
      output.allow_integration_in_goal_trajectories = params.allow_integration_in_goal_trajectories;
      output.action_monitor_rate = params.action_monitor_rate;
      output.constraints.stopped_velocity_tolerance = params.constraints.stopped_velocity_tolerance;
      output.constraints.goal_time = params.constraints.goal_time;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Intigral gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integrale clamp. Symmetrical in both positive and negative direction.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Feed-forward scaling of velocity.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.ff_velocity_scale);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.ff_velocity_scale = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "normalize_error");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Use position error normalization to -pi to pi.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.normalize_error);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.normalize_error = param.as_bool();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.constraints.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance during movement.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.trajectory);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.trajectory = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.constraints.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance at the goal position.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.goal);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.goal = param.as_double();}
    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_joints")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_joints = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "command_interfaces")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration", "effort"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = command_interface_type_combinations(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.command_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_interfaces")) {
            if(auto validation_result = unique<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            if(auto validation_result = state_interface_type_combinations(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.state_interfaces = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "state_publish_rate")) {
            if(auto validation_result = gt_eq(param, 0.1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.state_publish_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_partial_joints_goal")) {
            updated_params.allow_partial_joints_goal = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "open_loop_control")) {
            updated_params.open_loop_control = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "allow_integration_in_goal_trajectories")) {
            updated_params.allow_integration_in_goal_trajectories = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "action_monitor_rate")) {
            if(auto validation_result = gt_eq(param, 0.1);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.action_monitor_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "interpolation_method")) {
            if(auto validation_result = one_of<std::string>(param, {"splines", "none"});
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.interpolation_method = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "constraints.stopped_velocity_tolerance")) {
            updated_params.constraints.stopped_velocity_tolerance = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "constraints.goal_time")) {
            if(auto validation_result = gt_eq(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.constraints.goal_time = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      // update dynamic parameters
      for (const auto &param: parameters) {
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].p = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].i = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].d = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].i_clamp = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].ff_velocity_scale = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "normalize_error");
            if (param.get_name() == param_name) {
                updated_params.gains.joints_map[value].normalize_error = param.as_bool();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
            if (param.get_name() == param_name) {
                updated_params.constraints.joints_map[value].trajectory = param.as_double();
                RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
            }
        }
        for (const auto & value : updated_params.joints){
            auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
            if (param.get_name() == param_name) {
                updated_params.constraints.joints_map[value].goal = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Names of joints used by the controller";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.joints);
          parameters_interface_->declare_parameter(prefix_ + "joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_joints")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Names of the commanding joints used by the controller";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.command_joints);
          parameters_interface_->declare_parameter(prefix_ + "command_joints", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "command_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Names of command interfaces to claim";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.command_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "command_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_interfaces")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Names of state interfaces to claim";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.state_interfaces);
          parameters_interface_->declare_parameter(prefix_ + "state_interfaces", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "state_publish_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Rate controller state is published";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.1;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.state_publish_rate);
          parameters_interface_->declare_parameter(prefix_ + "state_publish_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_partial_joints_goal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Goals with partial set of joints are allowed";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_partial_joints_goal);
          parameters_interface_->declare_parameter(prefix_ + "allow_partial_joints_goal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop_control")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Run the controller in open-loop, i.e., read hardware states only when starting controller. This is useful when robot is not exactly following the commanded trajectory.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.open_loop_control);
          parameters_interface_->declare_parameter(prefix_ + "open_loop_control", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "allow_integration_in_goal_trajectories")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Allow integration in goal trajectories to accept goals without position or velocity specified";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.allow_integration_in_goal_trajectories);
          parameters_interface_->declare_parameter(prefix_ + "allow_integration_in_goal_trajectories", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "action_monitor_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Rate status changes will be monitored";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.1;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.action_monitor_rate);
          parameters_interface_->declare_parameter(prefix_ + "action_monitor_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "interpolation_method")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "The type of interpolation to use, if any";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.interpolation_method);
          parameters_interface_->declare_parameter(prefix_ + "interpolation_method", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "constraints.stopped_velocity_tolerance")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Velocity tolerance for at the end of the trajectory that indicates that controlled system is stopped.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.constraints.stopped_velocity_tolerance);
          parameters_interface_->declare_parameter(prefix_ + "constraints.stopped_velocity_tolerance", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "constraints.goal_time")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Time tolerance for achieving trajectory goal before or after commanded time.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.constraints.goal_time);
          parameters_interface_->declare_parameter(prefix_ + "constraints.goal_time", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'joints': {}", validation_result.error()));
      }
      updated_params.joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_joints");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_joints': {}", validation_result.error()));
      }
      updated_params.command_joints = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "command_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration", "effort"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = command_interface_type_combinations(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'command_interfaces': {}", validation_result.error()));
      }
      updated_params.command_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_interfaces");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = unique<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = subset_of<std::string>(param, {"position", "velocity", "acceleration"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      if(auto validation_result = state_interface_type_combinations(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_interfaces': {}", validation_result.error()));
      }
      updated_params.state_interfaces = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "state_publish_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'state_publish_rate': {}", validation_result.error()));
      }
      updated_params.state_publish_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "allow_partial_joints_goal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_partial_joints_goal = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "open_loop_control");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop_control = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "allow_integration_in_goal_trajectories");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.allow_integration_in_goal_trajectories = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "action_monitor_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.1);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'action_monitor_rate': {}", validation_result.error()));
      }
      updated_params.action_monitor_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "interpolation_method");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = one_of<std::string>(param, {"splines", "none"});
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'interpolation_method': {}", validation_result.error()));
      }
      updated_params.interpolation_method = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "constraints.stopped_velocity_tolerance");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.constraints.stopped_velocity_tolerance = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "constraints.goal_time");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt_eq(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'constraints.goal_time': {}", validation_result.error()));
      }
      updated_params.constraints.goal_time = param.as_double();


      // declare and set all dynamic parameters
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "p");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Proportional gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.p);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.p = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Intigral gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "d");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Derivative gain for PID";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.d);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.d = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "i_clamp");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Integrale clamp. Symmetrical in both positive and negative direction.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.i_clamp);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.i_clamp = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "ff_velocity_scale");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Feed-forward scaling of velocity.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.ff_velocity_scale);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.ff_velocity_scale = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.gains.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "gains", value, "normalize_error");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Use position error normalization to -pi to pi.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.normalize_error);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.normalize_error = param.as_bool();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.constraints.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "trajectory");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance during movement.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.trajectory);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.trajectory = param.as_double();}
      for (const auto & value : updated_params.joints){
          auto& entry = updated_params.constraints.joints_map[value];
          auto param_name = fmt::format("{}{}.{}.{}", prefix_, "constraints", value, "goal");
          if (!parameters_interface_->has_parameter(param_name)) {
              rcl_interfaces::msg::ParameterDescriptor descriptor;
              descriptor.description = "Per-joint trajectory offset tolerance at the goal position.";
              descriptor.read_only = false;
              auto parameter = rclcpp::ParameterValue(entry.goal);
              parameters_interface_->declare_parameter(param_name, parameter, descriptor);
          }
          param = parameters_interface_->get_parameter(param_name);
          RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
          entry.goal = param.as_double();}

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
      rclcpp::Logger logger_ = rclcpp::get_logger("joint_trajectory_controller");
      std::mutex mutable mutex_;
  };

} // namespace joint_trajectory_controller
