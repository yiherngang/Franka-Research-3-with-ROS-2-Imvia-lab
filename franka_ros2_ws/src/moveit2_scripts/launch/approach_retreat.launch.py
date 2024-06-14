import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder("moveit_resources_panda")
        .robot_description(file_path="/home/adminlab/franka_ros2_ws/src/franka_ros2/franka_description/robots/panda_arm.urdf.xacro")
        .to_moveit_configs()
    )
    

   
    # MoveItCpp demo executable
    moveit_cpp_node = Node(
        name="approach_retreat",
        package="moveit2_scripts",
        executable="approach_retreat",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            {'use_sim_time': True},
        ],
    )

    return LaunchDescription(
        [
            moveit_cpp_node
        ]
    )

