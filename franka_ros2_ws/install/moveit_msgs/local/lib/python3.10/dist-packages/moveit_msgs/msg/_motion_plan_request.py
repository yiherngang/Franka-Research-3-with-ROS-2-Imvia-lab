# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/MotionPlanRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotionPlanRequest(type):
    """Metaclass of message 'MotionPlanRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.MotionPlanRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motion_plan_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motion_plan_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motion_plan_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motion_plan_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motion_plan_request

            from moveit_msgs.msg import Constraints
            if Constraints.__class__._TYPE_SUPPORT is None:
                Constraints.__class__.__import_type_support__()

            from moveit_msgs.msg import GenericTrajectory
            if GenericTrajectory.__class__._TYPE_SUPPORT is None:
                GenericTrajectory.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from moveit_msgs.msg import TrajectoryConstraints
            if TrajectoryConstraints.__class__._TYPE_SUPPORT is None:
                TrajectoryConstraints.__class__.__import_type_support__()

            from moveit_msgs.msg import WorkspaceParameters
            if WorkspaceParameters.__class__._TYPE_SUPPORT is None:
                WorkspaceParameters.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotionPlanRequest(metaclass=Metaclass_MotionPlanRequest):
    """Message class 'MotionPlanRequest'."""

    __slots__ = [
        '_workspace_parameters',
        '_start_state',
        '_goal_constraints',
        '_path_constraints',
        '_trajectory_constraints',
        '_reference_trajectories',
        '_pipeline_id',
        '_planner_id',
        '_group_name',
        '_num_planning_attempts',
        '_allowed_planning_time',
        '_max_velocity_scaling_factor',
        '_max_acceleration_scaling_factor',
        '_cartesian_speed_end_effector_link',
        '_max_cartesian_speed',
    ]

    _fields_and_field_types = {
        'workspace_parameters': 'moveit_msgs/WorkspaceParameters',
        'start_state': 'moveit_msgs/RobotState',
        'goal_constraints': 'sequence<moveit_msgs/Constraints>',
        'path_constraints': 'moveit_msgs/Constraints',
        'trajectory_constraints': 'moveit_msgs/TrajectoryConstraints',
        'reference_trajectories': 'sequence<moveit_msgs/GenericTrajectory>',
        'pipeline_id': 'string',
        'planner_id': 'string',
        'group_name': 'string',
        'num_planning_attempts': 'int32',
        'allowed_planning_time': 'double',
        'max_velocity_scaling_factor': 'double',
        'max_acceleration_scaling_factor': 'double',
        'cartesian_speed_end_effector_link': 'string',
        'max_cartesian_speed': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'WorkspaceParameters'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'TrajectoryConstraints'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'GenericTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import WorkspaceParameters
        self.workspace_parameters = kwargs.get('workspace_parameters', WorkspaceParameters())
        from moveit_msgs.msg import RobotState
        self.start_state = kwargs.get('start_state', RobotState())
        self.goal_constraints = kwargs.get('goal_constraints', [])
        from moveit_msgs.msg import Constraints
        self.path_constraints = kwargs.get('path_constraints', Constraints())
        from moveit_msgs.msg import TrajectoryConstraints
        self.trajectory_constraints = kwargs.get('trajectory_constraints', TrajectoryConstraints())
        self.reference_trajectories = kwargs.get('reference_trajectories', [])
        self.pipeline_id = kwargs.get('pipeline_id', str())
        self.planner_id = kwargs.get('planner_id', str())
        self.group_name = kwargs.get('group_name', str())
        self.num_planning_attempts = kwargs.get('num_planning_attempts', int())
        self.allowed_planning_time = kwargs.get('allowed_planning_time', float())
        self.max_velocity_scaling_factor = kwargs.get('max_velocity_scaling_factor', float())
        self.max_acceleration_scaling_factor = kwargs.get('max_acceleration_scaling_factor', float())
        self.cartesian_speed_end_effector_link = kwargs.get('cartesian_speed_end_effector_link', str())
        self.max_cartesian_speed = kwargs.get('max_cartesian_speed', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.workspace_parameters != other.workspace_parameters:
            return False
        if self.start_state != other.start_state:
            return False
        if self.goal_constraints != other.goal_constraints:
            return False
        if self.path_constraints != other.path_constraints:
            return False
        if self.trajectory_constraints != other.trajectory_constraints:
            return False
        if self.reference_trajectories != other.reference_trajectories:
            return False
        if self.pipeline_id != other.pipeline_id:
            return False
        if self.planner_id != other.planner_id:
            return False
        if self.group_name != other.group_name:
            return False
        if self.num_planning_attempts != other.num_planning_attempts:
            return False
        if self.allowed_planning_time != other.allowed_planning_time:
            return False
        if self.max_velocity_scaling_factor != other.max_velocity_scaling_factor:
            return False
        if self.max_acceleration_scaling_factor != other.max_acceleration_scaling_factor:
            return False
        if self.cartesian_speed_end_effector_link != other.cartesian_speed_end_effector_link:
            return False
        if self.max_cartesian_speed != other.max_cartesian_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def workspace_parameters(self):
        """Message field 'workspace_parameters'."""
        return self._workspace_parameters

    @workspace_parameters.setter
    def workspace_parameters(self, value):
        if __debug__:
            from moveit_msgs.msg import WorkspaceParameters
            assert \
                isinstance(value, WorkspaceParameters), \
                "The 'workspace_parameters' field must be a sub message of type 'WorkspaceParameters'"
        self._workspace_parameters = value

    @builtins.property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'start_state' field must be a sub message of type 'RobotState'"
        self._start_state = value

    @builtins.property
    def goal_constraints(self):
        """Message field 'goal_constraints'."""
        return self._goal_constraints

    @goal_constraints.setter
    def goal_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import Constraints
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Constraints) for v in value) and
                 True), \
                "The 'goal_constraints' field must be a set or sequence and each value of type 'Constraints'"
        self._goal_constraints = value

    @builtins.property
    def path_constraints(self):
        """Message field 'path_constraints'."""
        return self._path_constraints

    @path_constraints.setter
    def path_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import Constraints
            assert \
                isinstance(value, Constraints), \
                "The 'path_constraints' field must be a sub message of type 'Constraints'"
        self._path_constraints = value

    @builtins.property
    def trajectory_constraints(self):
        """Message field 'trajectory_constraints'."""
        return self._trajectory_constraints

    @trajectory_constraints.setter
    def trajectory_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import TrajectoryConstraints
            assert \
                isinstance(value, TrajectoryConstraints), \
                "The 'trajectory_constraints' field must be a sub message of type 'TrajectoryConstraints'"
        self._trajectory_constraints = value

    @builtins.property
    def reference_trajectories(self):
        """Message field 'reference_trajectories'."""
        return self._reference_trajectories

    @reference_trajectories.setter
    def reference_trajectories(self, value):
        if __debug__:
            from moveit_msgs.msg import GenericTrajectory
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, GenericTrajectory) for v in value) and
                 True), \
                "The 'reference_trajectories' field must be a set or sequence and each value of type 'GenericTrajectory'"
        self._reference_trajectories = value

    @builtins.property
    def pipeline_id(self):
        """Message field 'pipeline_id'."""
        return self._pipeline_id

    @pipeline_id.setter
    def pipeline_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pipeline_id' field must be of type 'str'"
        self._pipeline_id = value

    @builtins.property
    def planner_id(self):
        """Message field 'planner_id'."""
        return self._planner_id

    @planner_id.setter
    def planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_id' field must be of type 'str'"
        self._planner_id = value

    @builtins.property
    def group_name(self):
        """Message field 'group_name'."""
        return self._group_name

    @group_name.setter
    def group_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'group_name' field must be of type 'str'"
        self._group_name = value

    @builtins.property
    def num_planning_attempts(self):
        """Message field 'num_planning_attempts'."""
        return self._num_planning_attempts

    @num_planning_attempts.setter
    def num_planning_attempts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_planning_attempts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_planning_attempts' field must be an integer in [-2147483648, 2147483647]"
        self._num_planning_attempts = value

    @builtins.property
    def allowed_planning_time(self):
        """Message field 'allowed_planning_time'."""
        return self._allowed_planning_time

    @allowed_planning_time.setter
    def allowed_planning_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'allowed_planning_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'allowed_planning_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._allowed_planning_time = value

    @builtins.property
    def max_velocity_scaling_factor(self):
        """Message field 'max_velocity_scaling_factor'."""
        return self._max_velocity_scaling_factor

    @max_velocity_scaling_factor.setter
    def max_velocity_scaling_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_velocity_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_velocity_scaling_factor = value

    @builtins.property
    def max_acceleration_scaling_factor(self):
        """Message field 'max_acceleration_scaling_factor'."""
        return self._max_acceleration_scaling_factor

    @max_acceleration_scaling_factor.setter
    def max_acceleration_scaling_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration_scaling_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration_scaling_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration_scaling_factor = value

    @builtins.property
    def cartesian_speed_end_effector_link(self):
        """Message field 'cartesian_speed_end_effector_link'."""
        return self._cartesian_speed_end_effector_link

    @cartesian_speed_end_effector_link.setter
    def cartesian_speed_end_effector_link(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cartesian_speed_end_effector_link' field must be of type 'str'"
        self._cartesian_speed_end_effector_link = value

    @builtins.property
    def max_cartesian_speed(self):
        """Message field 'max_cartesian_speed'."""
        return self._max_cartesian_speed

    @max_cartesian_speed.setter
    def max_cartesian_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_cartesian_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_cartesian_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_cartesian_speed = value
