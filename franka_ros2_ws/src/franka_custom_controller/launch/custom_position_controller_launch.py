from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='controller_manager',
            executable='ros2_control_node',
            parameters=[
                {'robot_description': 'path_to_your_urdf'},
                'path_to_your_control_config.yaml',
                'path_to_your_franka_config.yaml',
                'config/custom_position_controller.yaml'
            ],
            output='screen'
        ),
        Node(
            package='controller_manager',
            executable='spawner.py',
            arguments=['custom_position_controller'],
            output='screen'
        )
    ])

