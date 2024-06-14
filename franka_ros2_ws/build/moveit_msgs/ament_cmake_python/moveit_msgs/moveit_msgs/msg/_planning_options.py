# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PlanningOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningOptions(type):
    """Metaclass of message 'PlanningOptions'."""

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
                'moveit_msgs.msg.PlanningOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_options

            from moveit_msgs.msg import PlanningScene
            if PlanningScene.__class__._TYPE_SUPPORT is None:
                PlanningScene.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningOptions(metaclass=Metaclass_PlanningOptions):
    """Message class 'PlanningOptions'."""

    __slots__ = [
        '_planning_scene_diff',
        '_plan_only',
        '_look_around',
        '_look_around_attempts',
        '_max_safe_execution_cost',
        '_replan',
        '_replan_attempts',
        '_replan_delay',
    ]

    _fields_and_field_types = {
        'planning_scene_diff': 'moveit_msgs/PlanningScene',
        'plan_only': 'boolean',
        'look_around': 'boolean',
        'look_around_attempts': 'int32',
        'max_safe_execution_cost': 'double',
        'replan': 'boolean',
        'replan_attempts': 'int32',
        'replan_delay': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningScene'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import PlanningScene
        self.planning_scene_diff = kwargs.get('planning_scene_diff', PlanningScene())
        self.plan_only = kwargs.get('plan_only', bool())
        self.look_around = kwargs.get('look_around', bool())
        self.look_around_attempts = kwargs.get('look_around_attempts', int())
        self.max_safe_execution_cost = kwargs.get('max_safe_execution_cost', float())
        self.replan = kwargs.get('replan', bool())
        self.replan_attempts = kwargs.get('replan_attempts', int())
        self.replan_delay = kwargs.get('replan_delay', float())

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
        if self.planning_scene_diff != other.planning_scene_diff:
            return False
        if self.plan_only != other.plan_only:
            return False
        if self.look_around != other.look_around:
            return False
        if self.look_around_attempts != other.look_around_attempts:
            return False
        if self.max_safe_execution_cost != other.max_safe_execution_cost:
            return False
        if self.replan != other.replan:
            return False
        if self.replan_attempts != other.replan_attempts:
            return False
        if self.replan_delay != other.replan_delay:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def planning_scene_diff(self):
        """Message field 'planning_scene_diff'."""
        return self._planning_scene_diff

    @planning_scene_diff.setter
    def planning_scene_diff(self, value):
        if __debug__:
            from moveit_msgs.msg import PlanningScene
            assert \
                isinstance(value, PlanningScene), \
                "The 'planning_scene_diff' field must be a sub message of type 'PlanningScene'"
        self._planning_scene_diff = value

    @builtins.property
    def plan_only(self):
        """Message field 'plan_only'."""
        return self._plan_only

    @plan_only.setter
    def plan_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_only' field must be of type 'bool'"
        self._plan_only = value

    @builtins.property
    def look_around(self):
        """Message field 'look_around'."""
        return self._look_around

    @look_around.setter
    def look_around(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'look_around' field must be of type 'bool'"
        self._look_around = value

    @builtins.property
    def look_around_attempts(self):
        """Message field 'look_around_attempts'."""
        return self._look_around_attempts

    @look_around_attempts.setter
    def look_around_attempts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'look_around_attempts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'look_around_attempts' field must be an integer in [-2147483648, 2147483647]"
        self._look_around_attempts = value

    @builtins.property
    def max_safe_execution_cost(self):
        """Message field 'max_safe_execution_cost'."""
        return self._max_safe_execution_cost

    @max_safe_execution_cost.setter
    def max_safe_execution_cost(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_safe_execution_cost' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_safe_execution_cost' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_safe_execution_cost = value

    @builtins.property
    def replan(self):
        """Message field 'replan'."""
        return self._replan

    @replan.setter
    def replan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'replan' field must be of type 'bool'"
        self._replan = value

    @builtins.property
    def replan_attempts(self):
        """Message field 'replan_attempts'."""
        return self._replan_attempts

    @replan_attempts.setter
    def replan_attempts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replan_attempts' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'replan_attempts' field must be an integer in [-2147483648, 2147483647]"
        self._replan_attempts = value

    @builtins.property
    def replan_delay(self):
        """Message field 'replan_delay'."""
        return self._replan_delay

    @replan_delay.setter
    def replan_delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'replan_delay' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'replan_delay' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._replan_delay = value
