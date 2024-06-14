# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/VisibilityConstraint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VisibilityConstraint(type):
    """Metaclass of message 'VisibilityConstraint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SENSOR_Z': 0,
        'SENSOR_Y': 1,
        'SENSOR_X': 2,
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
                'moveit_msgs.msg.VisibilityConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__visibility_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__visibility_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__visibility_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__visibility_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__visibility_constraint

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SENSOR_Z': cls.__constants['SENSOR_Z'],
            'SENSOR_Y': cls.__constants['SENSOR_Y'],
            'SENSOR_X': cls.__constants['SENSOR_X'],
        }

    @property
    def SENSOR_Z(self):
        """Message constant 'SENSOR_Z'."""
        return Metaclass_VisibilityConstraint.__constants['SENSOR_Z']

    @property
    def SENSOR_Y(self):
        """Message constant 'SENSOR_Y'."""
        return Metaclass_VisibilityConstraint.__constants['SENSOR_Y']

    @property
    def SENSOR_X(self):
        """Message constant 'SENSOR_X'."""
        return Metaclass_VisibilityConstraint.__constants['SENSOR_X']


class VisibilityConstraint(metaclass=Metaclass_VisibilityConstraint):
    """
    Message class 'VisibilityConstraint'.

    Constants:
      SENSOR_Z
      SENSOR_Y
      SENSOR_X
    """

    __slots__ = [
        '_target_radius',
        '_target_pose',
        '_cone_sides',
        '_sensor_pose',
        '_max_view_angle',
        '_max_range_angle',
        '_sensor_view_direction',
        '_weight',
    ]

    _fields_and_field_types = {
        'target_radius': 'double',
        'target_pose': 'geometry_msgs/PoseStamped',
        'cone_sides': 'int32',
        'sensor_pose': 'geometry_msgs/PoseStamped',
        'max_view_angle': 'double',
        'max_range_angle': 'double',
        'sensor_view_direction': 'uint8',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_radius = kwargs.get('target_radius', float())
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.cone_sides = kwargs.get('cone_sides', int())
        from geometry_msgs.msg import PoseStamped
        self.sensor_pose = kwargs.get('sensor_pose', PoseStamped())
        self.max_view_angle = kwargs.get('max_view_angle', float())
        self.max_range_angle = kwargs.get('max_range_angle', float())
        self.sensor_view_direction = kwargs.get('sensor_view_direction', int())
        self.weight = kwargs.get('weight', float())

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
        if self.target_radius != other.target_radius:
            return False
        if self.target_pose != other.target_pose:
            return False
        if self.cone_sides != other.cone_sides:
            return False
        if self.sensor_pose != other.sensor_pose:
            return False
        if self.max_view_angle != other.max_view_angle:
            return False
        if self.max_range_angle != other.max_range_angle:
            return False
        if self.sensor_view_direction != other.sensor_view_direction:
            return False
        if self.weight != other.weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_radius(self):
        """Message field 'target_radius'."""
        return self._target_radius

    @target_radius.setter
    def target_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_radius = value

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def cone_sides(self):
        """Message field 'cone_sides'."""
        return self._cone_sides

    @cone_sides.setter
    def cone_sides(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cone_sides' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cone_sides' field must be an integer in [-2147483648, 2147483647]"
        self._cone_sides = value

    @builtins.property
    def sensor_pose(self):
        """Message field 'sensor_pose'."""
        return self._sensor_pose

    @sensor_pose.setter
    def sensor_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'sensor_pose' field must be a sub message of type 'PoseStamped'"
        self._sensor_pose = value

    @builtins.property
    def max_view_angle(self):
        """Message field 'max_view_angle'."""
        return self._max_view_angle

    @max_view_angle.setter
    def max_view_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_view_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_view_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_view_angle = value

    @builtins.property
    def max_range_angle(self):
        """Message field 'max_range_angle'."""
        return self._max_range_angle

    @max_range_angle.setter
    def max_range_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_range_angle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_range_angle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_range_angle = value

    @builtins.property
    def sensor_view_direction(self):
        """Message field 'sensor_view_direction'."""
        return self._sensor_view_direction

    @sensor_view_direction.setter
    def sensor_view_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_view_direction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_view_direction' field must be an unsigned integer in [0, 255]"
        self._sensor_view_direction = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'weight' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._weight = value
