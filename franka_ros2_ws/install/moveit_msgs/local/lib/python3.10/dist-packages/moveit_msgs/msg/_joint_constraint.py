# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/JointConstraint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointConstraint(type):
    """Metaclass of message 'JointConstraint'."""

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
                'moveit_msgs.msg.JointConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_constraint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointConstraint(metaclass=Metaclass_JointConstraint):
    """Message class 'JointConstraint'."""

    __slots__ = [
        '_joint_name',
        '_position',
        '_tolerance_above',
        '_tolerance_below',
        '_weight',
    ]

    _fields_and_field_types = {
        'joint_name': 'string',
        'position': 'double',
        'tolerance_above': 'double',
        'tolerance_below': 'double',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint_name = kwargs.get('joint_name', str())
        self.position = kwargs.get('position', float())
        self.tolerance_above = kwargs.get('tolerance_above', float())
        self.tolerance_below = kwargs.get('tolerance_below', float())
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
        if self.joint_name != other.joint_name:
            return False
        if self.position != other.position:
            return False
        if self.tolerance_above != other.tolerance_above:
            return False
        if self.tolerance_below != other.tolerance_below:
            return False
        if self.weight != other.weight:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'position' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._position = value

    @builtins.property
    def tolerance_above(self):
        """Message field 'tolerance_above'."""
        return self._tolerance_above

    @tolerance_above.setter
    def tolerance_above(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance_above' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance_above' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance_above = value

    @builtins.property
    def tolerance_below(self):
        """Message field 'tolerance_below'."""
        return self._tolerance_below

    @tolerance_below.setter
    def tolerance_below(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance_below' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance_below' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance_below = value

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
