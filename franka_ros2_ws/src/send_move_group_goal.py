import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
import yaml
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import MotionPlanRequest, Constraints, JointConstraint, PositionConstraint, OrientationConstraint, VisibilityConstraint, TrajectoryConstraints
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import PoseStamped, Quaternion, Vector3
from sensor_msgs.msg import JointState

class MoveGroupActionClient(Node):
    def __init__(self):
        super().__init__('move_group_action_client')
        self._client = ActionClient(self, MoveGroup, '/move_action')

    def send_goal(self, goal_msg):
        self._client.wait_for_server()
        self._send_goal_future = self._client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return
        self.get_logger().info('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result}')

def main(args=None):
    rclpy.init(args=args)
    node = MoveGroupActionClient()

    with open('move_group_goal.yaml', 'r') as file:
        yaml_data = yaml.safe_load(file)
    
    goal_msg = MoveGroup.Goal()
    goal_msg.request = MotionPlanRequest()

    # Populate MotionPlanRequest fields
    request_data = yaml_data['request']
    goal_msg.request.workspace_parameters.header.stamp.sec = request_data['workspace_parameters']['header']['stamp']['sec']
    goal_msg.request.workspace_parameters.header.stamp.nanosec = request_data['workspace_parameters']['header']['stamp']['nanosec']
    goal_msg.request.workspace_parameters.header.frame_id = request_data['workspace_parameters']['header']['frame_id']
    goal_msg.request.workspace_parameters.min_corner.x = request_data['workspace_parameters']['min_corner']['x']
    goal_msg.request.workspace_parameters.min_corner.y = request_data['workspace_parameters']['min_corner']['y']
    goal_msg.request.workspace_parameters.min_corner.z = request_data['workspace_parameters']['min_corner']['z']
    goal_msg.request.workspace_parameters.max_corner.x = request_data['workspace_parameters']['max_corner']['x']
    goal_msg.request.workspace_parameters.max_corner.y = request_data['workspace_parameters']['max_corner']['y']
    goal_msg.request.workspace_parameters.max_corner.z = request_data['workspace_parameters']['max_corner']['z']

    # Populate start state
    goal_msg.request.start_state.joint_state.header.stamp.sec = request_data['start_state']['joint_state']['header']['stamp']['sec']
    goal_msg.request.start_state.joint_state.header.stamp.nanosec = request_data['start_state']['joint_state']['header']['stamp']['nanosec']
    goal_msg.request.start_state.joint_state.header.frame_id = request_data['start_state']['joint_state']['header']['frame_id']
    goal_msg.request.start_state.joint_state.name = request_data['start_state']['joint_state']['name']
    goal_msg.request.start_state.joint_state.position = request_data['start_state']['joint_state']['position']
    goal_msg.request.start_state.joint_state.velocity = request_data['start_state']['joint_state']['velocity']
    goal_msg.request.start_state.joint_state.effort = request_data['start_state']['joint_state']['effort']

    # Other fields of MotionPlanRequest
    goal_msg.request.goal_constraints = [Constraints(**c) for c in request_data['goal_constraints']]
    goal_msg.request.path_constraints = Constraints(**request_data['path_constraints'])
    goal_msg.request.trajectory_constraints = TrajectoryConstraints(**request_data['trajectory_constraints'])
    goal_msg.request.reference_trajectories = request_data['reference_trajectories']
    goal_msg.request.pipeline_id = request_data['pipeline_id']
    goal_msg.request.planner_id = request_data['planner_id']
    goal_msg.request.group_name = request_data['group_name']
    goal_msg.request.num_planning_attempts = request_data['num_planning_attempts']
    goal_msg.request.allowed_planning_time = request_data['allowed_planning_time']
    goal_msg.request.max_velocity_scaling_factor = request_data['max_velocity_scaling_factor']
    goal_msg.request.max_acceleration_scaling_factor = request_data['max_acceleration_scaling_factor']
    goal_msg.request.cartesian_speed_end_effector_link = request_data['cartesian_speed_end_effector_link']
    goal_msg.request.max_cartesian_speed = request_data['max_cartesian_speed']

    # Populate PlanningOptions
    planning_options_data = yaml_data['planning_options']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.header.stamp.sec = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['header']['stamp']['sec']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.header.stamp.nanosec = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['header']['stamp']['nanosec']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.header.frame_id = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['header']['frame_id']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.name = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['name']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.position = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['position']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.velocity = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['velocity']
    goal_msg.planning_options.planning_scene_diff.robot_state.joint_state.effort = planning_options_data['planning_scene_diff']['robot_state']['joint_state']['effort']

    # Other fields of PlanningOptions
    goal_msg.planning_options.plan_only = planning_options_data['plan_only']
    goal_msg.planning_options.look_around = planning_options_data['look_around']
    goal_msg.planning_options.look_around_attempts = planning_options_data['look_around_attempts']
    goal_msg.planning_options.max_safe_execution_cost = planning_options_data['max_safe_execution_cost']
    goal_msg.planning_options.replan = planning_options_data['replan']
    goal_msg.planning_options.replan_attempts = planning_options_data['replan_attempts']
    goal_msg.planning_options.replan_delay = planning_options_data['replan_delay']

    node.send_goal(goal_msg)
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

