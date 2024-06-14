# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/DisplayTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DisplayTrajectory(type):
    """Metaclass of message 'DisplayTrajectory'."""

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
                'moveit_msgs.msg.DisplayTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__display_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__display_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__display_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__display_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__display_trajectory

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


class DisplayTrajectory(metaclass=Metaclass_DisplayTrajectory):
    """Message class 'DisplayTrajectory'."""

    __slots__ = [
        '_model_id',
        '_trajectory',
        '_trajectory_start',
    ]

    _fields_and_field_types = {
        'model_id': 'string',
        'trajectory': 'sequence<moveit_msgs/RobotTrajectory>',
        'trajectory_start': 'moveit_msgs/RobotState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotTrajectory')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model_id = kwargs.get('model_id', str())
        self.trajectory = kwargs.get('trajectory', [])
        from moveit_msgs.msg import RobotState
        self.trajectory_start = kwargs.get('trajectory_start', RobotState())

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
        if self.model_id != other.model_id:
            return False
        if self.trajectory != other.trajectory:
            return False
        if self.trajectory_start != other.trajectory_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model_id(self):
        """Message field 'model_id'."""
        return self._model_id

    @model_id.setter
    def model_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_id' field must be of type 'str'"
        self._model_id = value

    @builtins.property
    def trajectory(self):
        """Message field 'trajectory'."""
        return self._trajectory

    @trajectory.setter
    def trajectory(self, value):
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
                "The 'trajectory' field must be a set or sequence and each value of type 'RobotTrajectory'"
        self._trajectory = value

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
