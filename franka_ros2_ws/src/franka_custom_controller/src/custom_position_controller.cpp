#include <cassert>
#include <cmath>
#include <exception>

#include <pluginlib/class_list_macros.hpp>
#include <controller_interface/controller_interface.hpp>

namespace franka_custom_controller {

class CustomPositionController : public controller_interface::ControllerInterface {
public:
  CustomPositionController() = default;

  using CallbackReturn = rclcpp_lifecycle::node_interfaces::LifecycleNodeInterface::CallbackReturn;

  CallbackReturn on_init() override {
    node_ = get_node();
    node_->declare_parameter("target_position", std::vector<double>(7, 0.0));
    return CallbackReturn::SUCCESS;
  }

  controller_interface::InterfaceConfiguration command_interface_configuration() const override {
    controller_interface::InterfaceConfiguration config;
    config.type = controller_interface::interface_configuration_type::INDIVIDUAL;
    for (int i = 1; i <= 7; ++i) {
      config.names.push_back("panda_joint" + std::to_string(i) + "/position");
    }
    return config;
  }

  controller_interface::InterfaceConfiguration state_interface_configuration() const override {
    controller_interface::InterfaceConfiguration config;
    config.type = controller_interface::interface_configuration_type::INDIVIDUAL;
    for (int i = 1; i <= 7; ++i) {
      config.names.push_back("panda_joint" + std::to_string(i) + "/position");
    }
    return config;
  }

  controller_interface::return_type update(const rclcpp::Time& /*time*/, const rclcpp::Duration& /*period*/) override {
    // Get the target position from the parameter server
    std::vector<double> target_position;
    node_->get_parameter("target_position", target_position);

    if (target_position.size() != 7) {
      RCLCPP_ERROR(node_->get_logger(), "Target position must have 7 elements");
      return controller_interface::return_type::ERROR;
    }

    for (size_t i = 0; i < 7; ++i) {
      command_interfaces_[i].set_value(target_position[i]);
    }

    return controller_interface::return_type::OK;
  }

  CallbackReturn on_configure(const rclcpp_lifecycle::State& /*previous_state*/) override {
    // Perform any necessary setup during the configure phase
    RCLCPP_INFO(node_->get_logger(), "Configuring CustomPositionController");
    return CallbackReturn::SUCCESS;
  }

  CallbackReturn on_activate(const rclcpp_lifecycle::State& /*previous_state*/) override {
    // Perform any necessary setup during the activate phase
    RCLCPP_INFO(node_->get_logger(), "Activating CustomPositionController");
    return CallbackReturn::SUCCESS;
  }

  CallbackReturn on_deactivate(const rclcpp_lifecycle::State& /*previous_state*/) override {
    // Perform any necessary cleanup during the deactivate phase
    RCLCPP_INFO(node_->get_logger(), "Deactivating CustomPositionController");
    return CallbackReturn::SUCCESS;
  }

private:
  std::shared_ptr<rclcpp_lifecycle::LifecycleNode> node_;
};

}  // namespace franka_custom_controller

// Export the controller as a plugin
PLUGINLIB_EXPORT_CLASS(franka_custom_controller::CustomPositionController, controller_interface::ControllerInterface)

