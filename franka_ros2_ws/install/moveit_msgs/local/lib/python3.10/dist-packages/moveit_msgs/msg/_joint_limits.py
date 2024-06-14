# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/JointLimits.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointLimits(type):
    """Metaclass of message 'JointLimits'."""

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
                'moveit_msgs.msg.JointLimits')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_limits
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_limits
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_limits
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_limits
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_limits

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointLimits(metaclass=Metaclass_JointLimits):
    """Message class 'JointLimits'."""

    __slots__ = [
        '_joint_name',
        '_has_position_limits',
        '_min_position',
        '_max_position',
        '_has_velocity_limits',
        '_max_velocity',
        '_has_acceleration_limits',
        '_max_acceleration',
        '_has_jerk_limits',
        '_max_jerk',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'has_position_limits': 'boolean',
        'min_position': 'double',
        'max_position': 'double',
        'has_velocity_limits': 'boolean',
        'max_velocity': 'double',
        'has_acceleration_limits': 'boolean',
        'max_acceleration': 'double',
        'has_jerk_limits': 'boolean',
        'max_jerk': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.has_position_limits = kwargs.get('has_position_limits', bool())
        self.min_position = kwargs.get('min_position', float())
        self.max_position = kwargs.get('max_position', float())
        self.has_velocity_limits = kwargs.get('has_velocity_limits', bool())
        self.max_velocity = kwargs.get('max_velocity', float())
        self.has_acceleration_limits = kwargs.get('has_acceleration_limits', bool())
        self.max_acceleration = kwargs.get('max_acceleration', float())
        self.has_jerk_limits = kwargs.get('has_jerk_limits', bool())
        self.max_jerk = kwargs.get('max_jerk', float())

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
        if self.joint_name != other.joint_name:
            return False
        if self.has_position_limits != other.has_position_limits:
            return False
        if self.min_position != other.min_position:
            return False
        if self.max_position != other.max_position:
            return False
        if self.has_velocity_limits != other.has_velocity_limits:
            return False
        if self.max_velocity != other.max_velocity:
            return False
        if self.has_acceleration_limits != other.has_acceleration_limits:
            return False
        if self.max_acceleration != other.max_acceleration:
            return False
        if self.has_jerk_limits != other.has_jerk_limits:
            return False
        if self.max_jerk != other.max_jerk:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_name(self):
        """Message field 'joint_name'."""
        return self._joint_name

    @joint_name.setter
    def joint_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint_name' field must be of type 'str'"
        self._joint_name = value

    @builtins.property
    def has_position_limits(self):
        """Message field 'has_position_limits'."""
        return self._has_position_limits

    @has_position_limits.setter
    def has_position_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_position_limits' field must be of type 'bool'"
        self._has_position_limits = value

    @builtins.property
    def min_position(self):
        """Message field 'min_position'."""
        return self._min_position

    @min_position.setter
    def min_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_position = value

    @builtins.property
    def max_position(self):
        """Message field 'max_position'."""
        return self._max_position

    @max_position.setter
    def max_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_position = value

    @builtins.property
    def has_velocity_limits(self):
        """Message field 'has_velocity_limits'."""
        return self._has_velocity_limits

    @has_velocity_limits.setter
    def has_velocity_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_velocity_limits' field must be of type 'bool'"
        self._has_velocity_limits = value

    @builtins.property
    def max_velocity(self):
        """Message field 'max_velocity'."""
        return self._max_velocity

    @max_velocity.setter
    def max_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_velocity = value

    @builtins.property
    def has_acceleration_limits(self):
        """Message field 'has_acceleration_limits'."""
        return self._has_acceleration_limits

    @has_acceleration_limits.setter
    def has_acceleration_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_acceleration_limits' field must be of type 'bool'"
        self._has_acceleration_limits = value

    @builtins.property
    def max_acceleration(self):
        """Message field 'max_acceleration'."""
        return self._max_acceleration

    @max_acceleration.setter
    def max_acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_acceleration = value

    @builtins.property
    def has_jerk_limits(self):
        """Message field 'has_jerk_limits'."""
        return self._has_jerk_limits

    @has_jerk_limits.setter
    def has_jerk_limits(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_jerk_limits' field must be of type 'bool'"
        self._has_jerk_limits = value

    @builtins.property
    def max_jerk(self):
        """Message field 'max_jerk'."""
        return self._max_jerk

    @max_jerk.setter
    def max_jerk(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_jerk = value
