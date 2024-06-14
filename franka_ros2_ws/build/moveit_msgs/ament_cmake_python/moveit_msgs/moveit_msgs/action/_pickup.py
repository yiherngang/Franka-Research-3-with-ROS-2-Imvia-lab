# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:action/Pickup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pickup_Goal(type):
    """Metaclass of message 'Pickup_Goal'."""

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
                'moveit_msgs.action.Pickup_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__goal

            from moveit_msgs.msg import Constraints
            if Constraints.__class__._TYPE_SUPPORT is None:
                Constraints.__class__.__import_type_support__()

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

            from moveit_msgs.msg import PlanningOptions
            if PlanningOptions.__class__._TYPE_SUPPORT is None:
                PlanningOptions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_Goal(metaclass=Metaclass_Pickup_Goal):
    """Message class 'Pickup_Goal'."""

    __slots__ = [
        '_target_name',
        '_group_name',
        '_end_effector',
        '_possible_grasps',
        '_support_surface_name',
        '_allow_gripper_support_collision',
        '_attached_object_touch_links',
        '_minimize_object_distance',
        '_path_constraints',
        '_planner_id',
        '_allowed_touch_objects',
        '_allowed_planning_time',
        '_planning_options',
    ]

    _fields_and_field_types = {
        'target_name': 'string',
        'group_name': 'string',
        'end_effector': 'string',
        'possible_grasps': 'sequence<moveit_msgs/Grasp>',
        'support_surface_name': 'string',
        'allow_gripper_support_collision': 'boolean',
        'attached_object_touch_links': 'sequence<string>',
        'minimize_object_distance': 'boolean',
        'path_constraints': 'moveit_msgs/Constraints',
        'planner_id': 'string',
        'allowed_touch_objects': 'sequence<string>',
        'allowed_planning_time': 'double',
        'planning_options': 'moveit_msgs/PlanningOptions',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Constraints'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningOptions'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_name = kwargs.get('target_name', str())
        self.group_name = kwargs.get('group_name', str())
        self.end_effector = kwargs.get('end_effector', str())
        self.possible_grasps = kwargs.get('possible_grasps', [])
        self.support_surface_name = kwargs.get('support_surface_name', str())
        self.allow_gripper_support_collision = kwargs.get('allow_gripper_support_collision', bool())
        self.attached_object_touch_links = kwargs.get('attached_object_touch_links', [])
        self.minimize_object_distance = kwargs.get('minimize_object_distance', bool())
        from moveit_msgs.msg import Constraints
        self.path_constraints = kwargs.get('path_constraints', Constraints())
        self.planner_id = kwargs.get('planner_id', str())
        self.allowed_touch_objects = kwargs.get('allowed_touch_objects', [])
        self.allowed_planning_time = kwargs.get('allowed_planning_time', float())
        from moveit_msgs.msg import PlanningOptions
        self.planning_options = kwargs.get('planning_options', PlanningOptions())

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
        if self.target_name != other.target_name:
            return False
        if self.group_name != other.group_name:
            return False
        if self.end_effector != other.end_effector:
            return False
        if self.possible_grasps != other.possible_grasps:
            return False
        if self.support_surface_name != other.support_surface_name:
            return False
        if self.allow_gripper_support_collision != other.allow_gripper_support_collision:
            return False
        if self.attached_object_touch_links != other.attached_object_touch_links:
            return False
        if self.minimize_object_distance != other.minimize_object_distance:
            return False
        if self.path_constraints != other.path_constraints:
            return False
        if self.planner_id != other.planner_id:
            return False
        if self.allowed_touch_objects != other.allowed_touch_objects:
            return False
        if self.allowed_planning_time != other.allowed_planning_time:
            return False
        if self.planning_options != other.planning_options:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_name(self):
        """Message field 'target_name'."""
        return self._target_name

    @target_name.setter
    def target_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_name' field must be of type 'str'"
        self._target_name = value

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
    def end_effector(self):
        """Message field 'end_effector'."""
        return self._end_effector

    @end_effector.setter
    def end_effector(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'end_effector' field must be of type 'str'"
        self._end_effector = value

    @builtins.property
    def possible_grasps(self):
        """Message field 'possible_grasps'."""
        return self._possible_grasps

    @possible_grasps.setter
    def possible_grasps(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
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
                 all(isinstance(v, Grasp) for v in value) and
                 True), \
                "The 'possible_grasps' field must be a set or sequence and each value of type 'Grasp'"
        self._possible_grasps = value

    @builtins.property
    def support_surface_name(self):
        """Message field 'support_surface_name'."""
        return self._support_surface_name

    @support_surface_name.setter
    def support_surface_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'support_surface_name' field must be of type 'str'"
        self._support_surface_name = value

    @builtins.property
    def allow_gripper_support_collision(self):
        """Message field 'allow_gripper_support_collision'."""
        return self._allow_gripper_support_collision

    @allow_gripper_support_collision.setter
    def allow_gripper_support_collision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_gripper_support_collision' field must be of type 'bool'"
        self._allow_gripper_support_collision = value

    @builtins.property
    def attached_object_touch_links(self):
        """Message field 'attached_object_touch_links'."""
        return self._attached_object_touch_links

    @attached_object_touch_links.setter
    def attached_object_touch_links(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'attached_object_touch_links' field must be a set or sequence and each value of type 'str'"
        self._attached_object_touch_links = value

    @builtins.property
    def minimize_object_distance(self):
        """Message field 'minimize_object_distance'."""
        return self._minimize_object_distance

    @minimize_object_distance.setter
    def minimize_object_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'minimize_object_distance' field must be of type 'bool'"
        self._minimize_object_distance = value

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
    def allowed_touch_objects(self):
        """Message field 'allowed_touch_objects'."""
        return self._allowed_touch_objects

    @allowed_touch_objects.setter
    def allowed_touch_objects(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'allowed_touch_objects' field must be a set or sequence and each value of type 'str'"
        self._allowed_touch_objects = value

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
    def planning_options(self):
        """Message field 'planning_options'."""
        return self._planning_options

    @planning_options.setter
    def planning_options(self, value):
        if __debug__:
            from moveit_msgs.msg import PlanningOptions
            assert \
                isinstance(value, PlanningOptions), \
                "The 'planning_options' field must be a sub message of type 'PlanningOptions'"
        self._planning_options = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_Result(type):
    """Metaclass of message 'Pickup_Result'."""

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
                'moveit_msgs.action.Pickup_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__result

            from moveit_msgs.msg import Grasp
            if Grasp.__class__._TYPE_SUPPORT is None:
                Grasp.__class__.__import_type_support__()

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotTrajectory
            if RobotTrajectory.__class__._TYPE_SUPPORT is None:
                RobotTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_Result(metaclass=Metaclass_Pickup_Result):
    """Message class 'Pickup_Result'."""

    __slots__ = [
        '_error_code',
        '_trajectory_start',
        '_trajectory_stages',
        '_trajectory_descriptions',
        '_grasp',
        '_planning_time',
    ]

    _fields_and_field_types = {
        'error_code': 'moveit_msgs/MoveItErrorCodes',
        'trajectory_start': 'moveit_msgs/RobotState',
        'trajectory_stages': 'sequence<moveit_msgs/RobotTrajectory>',
        'trajectory_descriptions': 'sequence<string>',
        'grasp': 'moveit_msgs/Grasp',
        'planning_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'Grasp'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())
        from moveit_msgs.msg import RobotState
        self.trajectory_start = kwargs.get('trajectory_start', RobotState())
        self.trajectory_stages = kwargs.get('trajectory_stages', [])
        self.trajectory_descriptions = kwargs.get('trajectory_descriptions', [])
        from moveit_msgs.msg import Grasp
        self.grasp = kwargs.get('grasp', Grasp())
        self.planning_time = kwargs.get('planning_time', float())

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
        if self.error_code != other.error_code:
            return False
        if self.trajectory_start != other.trajectory_start:
            return False
        if self.trajectory_stages != other.trajectory_stages:
            return False
        if self.trajectory_descriptions != other.trajectory_descriptions:
            return False
        if self.grasp != other.grasp:
            return False
        if self.planning_time != other.planning_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            from moveit_msgs.msg import MoveItErrorCodes
            assert \
                isinstance(value, MoveItErrorCodes), \
                "The 'error_code' field must be a sub message of type 'MoveItErrorCodes'"
        self._error_code = value

    @builtins.property
    def trajectory_start(self):
        """Message field 'trajectory_start'."""
        return self._trajectory_start

    @trajectory_start.setter
    def trajectory_start(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'trajectory_start' field must be a sub message of type 'RobotState'"
        self._trajectory_start = value

    @builtins.property
    def trajectory_stages(self):
        """Message field 'trajectory_stages'."""
        return self._trajectory_stages

    @trajectory_stages.setter
    def trajectory_stages(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotTrajectory
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
                 all(isinstance(v, RobotTrajectory) for v in value) and
                 True), \
                "The 'trajectory_stages' field must be a set or sequence and each value of type 'RobotTrajectory'"
        self._trajectory_stages = value

    @builtins.property
    def trajectory_descriptions(self):
        """Message field 'trajectory_descriptions'."""
        return self._trajectory_descriptions

    @trajectory_descriptions.setter
    def trajectory_descriptions(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'trajectory_descriptions' field must be a set or sequence and each value of type 'str'"
        self._trajectory_descriptions = value

    @builtins.property
    def grasp(self):
        """Message field 'grasp'."""
        return self._grasp

    @grasp.setter
    def grasp(self, value):
        if __debug__:
            from moveit_msgs.msg import Grasp
            assert \
                isinstance(value, Grasp), \
                "The 'grasp' field must be a sub message of type 'Grasp'"
        self._grasp = value

    @builtins.property
    def planning_time(self):
        """Message field 'planning_time'."""
        return self._planning_time

    @planning_time.setter
    def planning_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'planning_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planning_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planning_time = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_Feedback(type):
    """Metaclass of message 'Pickup_Feedback'."""

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
                'moveit_msgs.action.Pickup_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_Feedback(metaclass=Metaclass_Pickup_Feedback):
    """Message class 'Pickup_Feedback'."""

    __slots__ = [
        '_state',
    ]

    _fields_and_field_types = {
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', str())

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
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_SendGoal_Request(type):
    """Metaclass of message 'Pickup_SendGoal_Request'."""

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
                'moveit_msgs.action.Pickup_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__send_goal__request

            from moveit_msgs.action import Pickup
            if Pickup.Goal.__class__._TYPE_SUPPORT is None:
                Pickup.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_SendGoal_Request(metaclass=Metaclass_Pickup_SendGoal_Request):
    """Message class 'Pickup_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'moveit_msgs/Pickup_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'action'], 'Pickup_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from moveit_msgs.action._pickup import Pickup_Goal
        self.goal = kwargs.get('goal', Pickup_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from moveit_msgs.action._pickup import Pickup_Goal
            assert \
                isinstance(value, Pickup_Goal), \
                "The 'goal' field must be a sub message of type 'Pickup_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_SendGoal_Response(type):
    """Metaclass of message 'Pickup_SendGoal_Response'."""

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
                'moveit_msgs.action.Pickup_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_SendGoal_Response(metaclass=Metaclass_Pickup_SendGoal_Response):
    """Message class 'Pickup_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_Pickup_SendGoal(type):
    """Metaclass of service 'Pickup_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.action.Pickup_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pickup__send_goal

            from moveit_msgs.action import _pickup
            if _pickup.Metaclass_Pickup_SendGoal_Request._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_SendGoal_Request.__import_type_support__()
            if _pickup.Metaclass_Pickup_SendGoal_Response._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_SendGoal_Response.__import_type_support__()


class Pickup_SendGoal(metaclass=Metaclass_Pickup_SendGoal):
    from moveit_msgs.action._pickup import Pickup_SendGoal_Request as Request
    from moveit_msgs.action._pickup import Pickup_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_GetResult_Request(type):
    """Metaclass of message 'Pickup_GetResult_Request'."""

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
                'moveit_msgs.action.Pickup_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_GetResult_Request(metaclass=Metaclass_Pickup_GetResult_Request):
    """Message class 'Pickup_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_GetResult_Response(type):
    """Metaclass of message 'Pickup_GetResult_Response'."""

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
                'moveit_msgs.action.Pickup_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__get_result__response

            from moveit_msgs.action import Pickup
            if Pickup.Result.__class__._TYPE_SUPPORT is None:
                Pickup.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_GetResult_Response(metaclass=Metaclass_Pickup_GetResult_Response):
    """Message class 'Pickup_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'moveit_msgs/Pickup_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'action'], 'Pickup_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from moveit_msgs.action._pickup import Pickup_Result
        self.result = kwargs.get('result', Pickup_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from moveit_msgs.action._pickup import Pickup_Result
            assert \
                isinstance(value, Pickup_Result), \
                "The 'result' field must be a sub message of type 'Pickup_Result'"
        self._result = value


class Metaclass_Pickup_GetResult(type):
    """Metaclass of service 'Pickup_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.action.Pickup_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__pickup__get_result

            from moveit_msgs.action import _pickup
            if _pickup.Metaclass_Pickup_GetResult_Request._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_GetResult_Request.__import_type_support__()
            if _pickup.Metaclass_Pickup_GetResult_Response._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_GetResult_Response.__import_type_support__()


class Pickup_GetResult(metaclass=Metaclass_Pickup_GetResult):
    from moveit_msgs.action._pickup import Pickup_GetResult_Request as Request
    from moveit_msgs.action._pickup import Pickup_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Pickup_FeedbackMessage(type):
    """Metaclass of message 'Pickup_FeedbackMessage'."""

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
                'moveit_msgs.action.Pickup_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__pickup__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__pickup__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__pickup__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__pickup__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__pickup__feedback_message

            from moveit_msgs.action import Pickup
            if Pickup.Feedback.__class__._TYPE_SUPPORT is None:
                Pickup.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pickup_FeedbackMessage(metaclass=Metaclass_Pickup_FeedbackMessage):
    """Message class 'Pickup_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'moveit_msgs/Pickup_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'action'], 'Pickup_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from moveit_msgs.action._pickup import Pickup_Feedback
        self.feedback = kwargs.get('feedback', Pickup_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from moveit_msgs.action._pickup import Pickup_Feedback
            assert \
                isinstance(value, Pickup_Feedback), \
                "The 'feedback' field must be a sub message of type 'Pickup_Feedback'"
        self._feedback = value


class Metaclass_Pickup(type):
    """Metaclass of action 'Pickup'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.action.Pickup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__pickup

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from moveit_msgs.action import _pickup
            if _pickup.Metaclass_Pickup_SendGoal._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_SendGoal.__import_type_support__()
            if _pickup.Metaclass_Pickup_GetResult._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_GetResult.__import_type_support__()
            if _pickup.Metaclass_Pickup_FeedbackMessage._TYPE_SUPPORT is None:
                _pickup.Metaclass_Pickup_FeedbackMessage.__import_type_support__()


class Pickup(metaclass=Metaclass_Pickup):

    # The goal message defined in the action definition.
    from moveit_msgs.action._pickup import Pickup_Goal as Goal
    # The result message defined in the action definition.
    from moveit_msgs.action._pickup import Pickup_Result as Result
    # The feedback message defined in the action definition.
    from moveit_msgs.action._pickup import Pickup_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from moveit_msgs.action._pickup import Pickup_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from moveit_msgs.action._pickup import Pickup_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from moveit_msgs.action._pickup import Pickup_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
