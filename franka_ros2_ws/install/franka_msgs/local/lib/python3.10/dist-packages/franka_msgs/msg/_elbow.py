# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:msg/Elbow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
# Member 'desired_position'
# Member 'commanded_position'
# Member 'commanded_velocity'
# Member 'commanded_acceleration'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Elbow(type):
    """Metaclass of message 'Elbow'."""

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
                'franka_msgs.msg.Elbow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__elbow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__elbow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__elbow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__elbow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__elbow

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Elbow(metaclass=Metaclass_Elbow):
    """Message class 'Elbow'."""

    __slots__ = [
        '_position',
        '_desired_position',
        '_commanded_position',
        '_commanded_velocity',
        '_commanded_acceleration',
    ]

    _fields_and_field_types = {
        'position': 'double[2]',
        'desired_position': 'double[2]',
        'commanded_position': 'double[2]',
        'commanded_velocity': 'double[2]',
        'commanded_acceleration': 'double[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'position' not in kwargs:
            self.position = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float64)
            assert self.position.shape == (2, )
        if 'desired_position' not in kwargs:
            self.desired_position = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.desired_position = numpy.array(kwargs.get('desired_position'), dtype=numpy.float64)
            assert self.desired_position.shape == (2, )
        if 'commanded_position' not in kwargs:
            self.commanded_position = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.commanded_position = numpy.array(kwargs.get('commanded_position'), dtype=numpy.float64)
            assert self.commanded_position.shape == (2, )
        if 'commanded_velocity' not in kwargs:
            self.commanded_velocity = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.commanded_velocity = numpy.array(kwargs.get('commanded_velocity'), dtype=numpy.float64)
            assert self.commanded_velocity.shape == (2, )
        if 'commanded_acceleration' not in kwargs:
            self.commanded_acceleration = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.commanded_acceleration = numpy.array(kwargs.get('commanded_acceleration'), dtype=numpy.float64)
            assert self.commanded_acceleration.shape == (2, )

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
        if all(self.position != other.position):
            return False
        if all(self.desired_position != other.desired_position):
            return False
        if all(self.commanded_position != other.commanded_position):
            return False
        if all(self.commanded_velocity != other.commanded_velocity):
            return False
        if all(self.commanded_acceleration != other.commanded_acceleration):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'position' numpy.ndarray() must have a size of 2"
            self._position = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def desired_position(self):
        """Message field 'desired_position'."""
        return self._desired_position

    @desired_position.setter
    def desired_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'desired_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'desired_position' numpy.ndarray() must have a size of 2"
            self._desired_position = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'desired_position' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._desired_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def commanded_position(self):
        """Message field 'commanded_position'."""
        return self._commanded_position

    @commanded_position.setter
    def commanded_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'commanded_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'commanded_position' numpy.ndarray() must have a size of 2"
            self._commanded_position = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'commanded_position' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._commanded_position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def commanded_velocity(self):
        """Message field 'commanded_velocity'."""
        return self._commanded_velocity

    @commanded_velocity.setter
    def commanded_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'commanded_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'commanded_velocity' numpy.ndarray() must have a size of 2"
            self._commanded_velocity = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'commanded_velocity' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._commanded_velocity = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def commanded_acceleration(self):
        """Message field 'commanded_acceleration'."""
        return self._commanded_acceleration

    @commanded_acceleration.setter
    def commanded_acceleration(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'commanded_acceleration' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'commanded_acceleration' numpy.ndarray() must have a size of 2"
            self._commanded_acceleration = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'commanded_acceleration' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._commanded_acceleration = numpy.array(value, dtype=numpy.float64)
