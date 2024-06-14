# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:msg/CollisionIndicators.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'is_joint_collision'
# Member 'is_joint_contact'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollisionIndicators(type):
    """Metaclass of message 'CollisionIndicators'."""

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
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.msg.CollisionIndicators')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_indicators
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_indicators
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_indicators
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_indicators
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_indicators

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollisionIndicators(metaclass=Metaclass_CollisionIndicators):
    """Message class 'CollisionIndicators'."""

    __slots__ = [
        '_is_cartesian_linear_collision',
        '_is_cartesian_angular_collision',
        '_is_cartesian_linear_contact',
        '_is_cartesian_angular_contact',
        '_is_joint_collision',
        '_is_joint_contact',
    ]

    _fields_and_field_types = {
        'is_cartesian_linear_collision': 'geometry_msgs/Vector3',
        'is_cartesian_angular_collision': 'geometry_msgs/Vector3',
        'is_cartesian_linear_contact': 'geometry_msgs/Vector3',
        'is_cartesian_angular_contact': 'geometry_msgs/Vector3',
        'is_joint_collision': 'double[7]',
        'is_joint_contact': 'double[7]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3
        self.is_cartesian_linear_collision = kwargs.get('is_cartesian_linear_collision', Vector3())
        from geometry_msgs.msg import Vector3
        self.is_cartesian_angular_collision = kwargs.get('is_cartesian_angular_collision', Vector3())
        from geometry_msgs.msg import Vector3
        self.is_cartesian_linear_contact = kwargs.get('is_cartesian_linear_contact', Vector3())
        from geometry_msgs.msg import Vector3
        self.is_cartesian_angular_contact = kwargs.get('is_cartesian_angular_contact', Vector3())
        if 'is_joint_collision' not in kwargs:
            self.is_joint_collision = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.is_joint_collision = numpy.array(kwargs.get('is_joint_collision'), dtype=numpy.float64)
            assert self.is_joint_collision.shape == (7, )
        if 'is_joint_contact' not in kwargs:
            self.is_joint_contact = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.is_joint_contact = numpy.array(kwargs.get('is_joint_contact'), dtype=numpy.float64)
            assert self.is_joint_contact.shape == (7, )

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
        if self.is_cartesian_linear_collision != other.is_cartesian_linear_collision:
            return False
        if self.is_cartesian_angular_collision != other.is_cartesian_angular_collision:
            return False
        if self.is_cartesian_linear_contact != other.is_cartesian_linear_contact:
            return False
        if self.is_cartesian_angular_contact != other.is_cartesian_angular_contact:
            return False
        if all(self.is_joint_collision != other.is_joint_collision):
            return False
        if all(self.is_joint_contact != other.is_joint_contact):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_cartesian_linear_collision(self):
        """Message field 'is_cartesian_linear_collision'."""
        return self._is_cartesian_linear_collision

    @is_cartesian_linear_collision.setter
    def is_cartesian_linear_collision(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'is_cartesian_linear_collision' field must be a sub message of type 'Vector3'"
        self._is_cartesian_linear_collision = value

    @builtins.property
    def is_cartesian_angular_collision(self):
        """Message field 'is_cartesian_angular_collision'."""
        return self._is_cartesian_angular_collision

    @is_cartesian_angular_collision.setter
    def is_cartesian_angular_collision(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'is_cartesian_angular_collision' field must be a sub message of type 'Vector3'"
        self._is_cartesian_angular_collision = value

    @builtins.property
    def is_cartesian_linear_contact(self):
        """Message field 'is_cartesian_linear_contact'."""
        return self._is_cartesian_linear_contact

    @is_cartesian_linear_contact.setter
    def is_cartesian_linear_contact(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'is_cartesian_linear_contact' field must be a sub message of type 'Vector3'"
        self._is_cartesian_linear_contact = value

    @builtins.property
    def is_cartesian_angular_contact(self):
        """Message field 'is_cartesian_angular_contact'."""
        return self._is_cartesian_angular_contact

    @is_cartesian_angular_contact.setter
    def is_cartesian_angular_contact(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'is_cartesian_angular_contact' field must be a sub message of type 'Vector3'"
        self._is_cartesian_angular_contact = value

    @builtins.property
    def is_joint_collision(self):
        """Message field 'is_joint_collision'."""
        return self._is_joint_collision

    @is_joint_collision.setter
    def is_joint_collision(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'is_joint_collision' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'is_joint_collision' numpy.ndarray() must have a size of 7"
            self._is_joint_collision = value
            return
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'is_joint_collision' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._is_joint_collision = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def is_joint_contact(self):
        """Message field 'is_joint_contact'."""
        return self._is_joint_contact

    @is_joint_contact.setter
    def is_joint_contact(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'is_joint_contact' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'is_joint_contact' numpy.ndarray() must have a size of 7"
            self._is_joint_contact = value
            return
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
                 len(value) == 7 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'is_joint_contact' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._is_joint_contact = numpy.array(value, dtype=numpy.float64)
