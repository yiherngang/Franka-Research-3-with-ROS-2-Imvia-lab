# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:srv/SetFullCollisionBehavior.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'lower_torque_thresholds_acceleration'
# Member 'upper_torque_thresholds_acceleration'
# Member 'lower_torque_thresholds_nominal'
# Member 'upper_torque_thresholds_nominal'
# Member 'lower_force_thresholds_acceleration'
# Member 'upper_force_thresholds_acceleration'
# Member 'lower_force_thresholds_nominal'
# Member 'upper_force_thresholds_nominal'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetFullCollisionBehavior_Request(type):
    """Metaclass of message 'SetFullCollisionBehavior_Request'."""

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
                'franka_msgs.srv.SetFullCollisionBehavior_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_full_collision_behavior__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_full_collision_behavior__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_full_collision_behavior__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_full_collision_behavior__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_full_collision_behavior__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFullCollisionBehavior_Request(metaclass=Metaclass_SetFullCollisionBehavior_Request):
    """Message class 'SetFullCollisionBehavior_Request'."""

    __slots__ = [
        '_lower_torque_thresholds_acceleration',
        '_upper_torque_thresholds_acceleration',
        '_lower_torque_thresholds_nominal',
        '_upper_torque_thresholds_nominal',
        '_lower_force_thresholds_acceleration',
        '_upper_force_thresholds_acceleration',
        '_lower_force_thresholds_nominal',
        '_upper_force_thresholds_nominal',
    ]

    _fields_and_field_types = {
        'lower_torque_thresholds_acceleration': 'double[7]',
        'upper_torque_thresholds_acceleration': 'double[7]',
        'lower_torque_thresholds_nominal': 'double[7]',
        'upper_torque_thresholds_nominal': 'double[7]',
        'lower_force_thresholds_acceleration': 'double[6]',
        'upper_force_thresholds_acceleration': 'double[6]',
        'lower_force_thresholds_nominal': 'double[6]',
        'upper_force_thresholds_nominal': 'double[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 7),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'lower_torque_thresholds_acceleration' not in kwargs:
            self.lower_torque_thresholds_acceleration = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.lower_torque_thresholds_acceleration = numpy.array(kwargs.get('lower_torque_thresholds_acceleration'), dtype=numpy.float64)
            assert self.lower_torque_thresholds_acceleration.shape == (7, )
        if 'upper_torque_thresholds_acceleration' not in kwargs:
            self.upper_torque_thresholds_acceleration = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.upper_torque_thresholds_acceleration = numpy.array(kwargs.get('upper_torque_thresholds_acceleration'), dtype=numpy.float64)
            assert self.upper_torque_thresholds_acceleration.shape == (7, )
        if 'lower_torque_thresholds_nominal' not in kwargs:
            self.lower_torque_thresholds_nominal = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.lower_torque_thresholds_nominal = numpy.array(kwargs.get('lower_torque_thresholds_nominal'), dtype=numpy.float64)
            assert self.lower_torque_thresholds_nominal.shape == (7, )
        if 'upper_torque_thresholds_nominal' not in kwargs:
            self.upper_torque_thresholds_nominal = numpy.zeros(7, dtype=numpy.float64)
        else:
            self.upper_torque_thresholds_nominal = numpy.array(kwargs.get('upper_torque_thresholds_nominal'), dtype=numpy.float64)
            assert self.upper_torque_thresholds_nominal.shape == (7, )
        if 'lower_force_thresholds_acceleration' not in kwargs:
            self.lower_force_thresholds_acceleration = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.lower_force_thresholds_acceleration = numpy.array(kwargs.get('lower_force_thresholds_acceleration'), dtype=numpy.float64)
            assert self.lower_force_thresholds_acceleration.shape == (6, )
        if 'upper_force_thresholds_acceleration' not in kwargs:
            self.upper_force_thresholds_acceleration = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.upper_force_thresholds_acceleration = numpy.array(kwargs.get('upper_force_thresholds_acceleration'), dtype=numpy.float64)
            assert self.upper_force_thresholds_acceleration.shape == (6, )
        if 'lower_force_thresholds_nominal' not in kwargs:
            self.lower_force_thresholds_nominal = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.lower_force_thresholds_nominal = numpy.array(kwargs.get('lower_force_thresholds_nominal'), dtype=numpy.float64)
            assert self.lower_force_thresholds_nominal.shape == (6, )
        if 'upper_force_thresholds_nominal' not in kwargs:
            self.upper_force_thresholds_nominal = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.upper_force_thresholds_nominal = numpy.array(kwargs.get('upper_force_thresholds_nominal'), dtype=numpy.float64)
            assert self.upper_force_thresholds_nominal.shape == (6, )

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
        if all(self.lower_torque_thresholds_acceleration != other.lower_torque_thresholds_acceleration):
            return False
        if all(self.upper_torque_thresholds_acceleration != other.upper_torque_thresholds_acceleration):
            return False
        if all(self.lower_torque_thresholds_nominal != other.lower_torque_thresholds_nominal):
            return False
        if all(self.upper_torque_thresholds_nominal != other.upper_torque_thresholds_nominal):
            return False
        if all(self.lower_force_thresholds_acceleration != other.lower_force_thresholds_acceleration):
            return False
        if all(self.upper_force_thresholds_acceleration != other.upper_force_thresholds_acceleration):
            return False
        if all(self.lower_force_thresholds_nominal != other.lower_force_thresholds_nominal):
            return False
        if all(self.upper_force_thresholds_nominal != other.upper_force_thresholds_nominal):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lower_torque_thresholds_acceleration(self):
        """Message field 'lower_torque_thresholds_acceleration'."""
        return self._lower_torque_thresholds_acceleration

    @lower_torque_thresholds_acceleration.setter
    def lower_torque_thresholds_acceleration(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'lower_torque_thresholds_acceleration' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'lower_torque_thresholds_acceleration' numpy.ndarray() must have a size of 7"
            self._lower_torque_thresholds_acceleration = value
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
                "The 'lower_torque_thresholds_acceleration' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lower_torque_thresholds_acceleration = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def upper_torque_thresholds_acceleration(self):
        """Message field 'upper_torque_thresholds_acceleration'."""
        return self._upper_torque_thresholds_acceleration

    @upper_torque_thresholds_acceleration.setter
    def upper_torque_thresholds_acceleration(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'upper_torque_thresholds_acceleration' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'upper_torque_thresholds_acceleration' numpy.ndarray() must have a size of 7"
            self._upper_torque_thresholds_acceleration = value
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
                "The 'upper_torque_thresholds_acceleration' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._upper_torque_thresholds_acceleration = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def lower_torque_thresholds_nominal(self):
        """Message field 'lower_torque_thresholds_nominal'."""
        return self._lower_torque_thresholds_nominal

    @lower_torque_thresholds_nominal.setter
    def lower_torque_thresholds_nominal(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'lower_torque_thresholds_nominal' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'lower_torque_thresholds_nominal' numpy.ndarray() must have a size of 7"
            self._lower_torque_thresholds_nominal = value
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
                "The 'lower_torque_thresholds_nominal' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lower_torque_thresholds_nominal = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def upper_torque_thresholds_nominal(self):
        """Message field 'upper_torque_thresholds_nominal'."""
        return self._upper_torque_thresholds_nominal

    @upper_torque_thresholds_nominal.setter
    def upper_torque_thresholds_nominal(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'upper_torque_thresholds_nominal' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 7, \
                "The 'upper_torque_thresholds_nominal' numpy.ndarray() must have a size of 7"
            self._upper_torque_thresholds_nominal = value
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
                "The 'upper_torque_thresholds_nominal' field must be a set or sequence with length 7 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._upper_torque_thresholds_nominal = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def lower_force_thresholds_acceleration(self):
        """Message field 'lower_force_thresholds_acceleration'."""
        return self._lower_force_thresholds_acceleration

    @lower_force_thresholds_acceleration.setter
    def lower_force_thresholds_acceleration(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'lower_force_thresholds_acceleration' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'lower_force_thresholds_acceleration' numpy.ndarray() must have a size of 6"
            self._lower_force_thresholds_acceleration = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'lower_force_thresholds_acceleration' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lower_force_thresholds_acceleration = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def upper_force_thresholds_acceleration(self):
        """Message field 'upper_force_thresholds_acceleration'."""
        return self._upper_force_thresholds_acceleration

    @upper_force_thresholds_acceleration.setter
    def upper_force_thresholds_acceleration(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'upper_force_thresholds_acceleration' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'upper_force_thresholds_acceleration' numpy.ndarray() must have a size of 6"
            self._upper_force_thresholds_acceleration = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'upper_force_thresholds_acceleration' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._upper_force_thresholds_acceleration = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def lower_force_thresholds_nominal(self):
        """Message field 'lower_force_thresholds_nominal'."""
        return self._lower_force_thresholds_nominal

    @lower_force_thresholds_nominal.setter
    def lower_force_thresholds_nominal(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'lower_force_thresholds_nominal' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'lower_force_thresholds_nominal' numpy.ndarray() must have a size of 6"
            self._lower_force_thresholds_nominal = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'lower_force_thresholds_nominal' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._lower_force_thresholds_nominal = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def upper_force_thresholds_nominal(self):
        """Message field 'upper_force_thresholds_nominal'."""
        return self._upper_force_thresholds_nominal

    @upper_force_thresholds_nominal.setter
    def upper_force_thresholds_nominal(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'upper_force_thresholds_nominal' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 6, \
                "The 'upper_force_thresholds_nominal' numpy.ndarray() must have a size of 6"
            self._upper_force_thresholds_nominal = value
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'upper_force_thresholds_nominal' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._upper_force_thresholds_nominal = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetFullCollisionBehavior_Response(type):
    """Metaclass of message 'SetFullCollisionBehavior_Response'."""

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
                'franka_msgs.srv.SetFullCollisionBehavior_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_full_collision_behavior__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_full_collision_behavior__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_full_collision_behavior__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_full_collision_behavior__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_full_collision_behavior__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetFullCollisionBehavior_Response(metaclass=Metaclass_SetFullCollisionBehavior_Response):
    """Message class 'SetFullCollisionBehavior_Response'."""

    __slots__ = [
        '_success',
        '_error',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error = kwargs.get('error', str())

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
        if self.success != other.success:
            return False
        if self.error != other.error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def error(self):
        """Message field 'error'."""
        return self._error

    @error.setter
    def error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error' field must be of type 'str'"
        self._error = value


class Metaclass_SetFullCollisionBehavior(type):
    """Metaclass of service 'SetFullCollisionBehavior'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('franka_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'franka_msgs.srv.SetFullCollisionBehavior')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_full_collision_behavior

            from franka_msgs.srv import _set_full_collision_behavior
            if _set_full_collision_behavior.Metaclass_SetFullCollisionBehavior_Request._TYPE_SUPPORT is None:
                _set_full_collision_behavior.Metaclass_SetFullCollisionBehavior_Request.__import_type_support__()
            if _set_full_collision_behavior.Metaclass_SetFullCollisionBehavior_Response._TYPE_SUPPORT is None:
                _set_full_collision_behavior.Metaclass_SetFullCollisionBehavior_Response.__import_type_support__()


class SetFullCollisionBehavior(metaclass=Metaclass_SetFullCollisionBehavior):
    from franka_msgs.srv._set_full_collision_behavior import SetFullCollisionBehavior_Request as Request
    from franka_msgs.srv._set_full_collision_behavior import SetFullCollisionBehavior_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
