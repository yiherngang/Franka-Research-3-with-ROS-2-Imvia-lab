# generated from rosidl_generator_py/resource/_idl.py.em
# with input from franka_msgs:srv/SetTCPFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'transformation'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetTCPFrame_Request(type):
    """Metaclass of message 'SetTCPFrame_Request'."""

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
                'franka_msgs.srv.SetTCPFrame_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_tcp_frame__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_tcp_frame__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_tcp_frame__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_tcp_frame__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_tcp_frame__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTCPFrame_Request(metaclass=Metaclass_SetTCPFrame_Request):
    """Message class 'SetTCPFrame_Request'."""

    __slots__ = [
        '_transformation',
    ]

    _fields_and_field_types = {
        'transformation': 'double[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'transformation' not in kwargs:
            self.transformation = numpy.zeros(16, dtype=numpy.float64)
        else:
            self.transformation = numpy.array(kwargs.get('transformation'), dtype=numpy.float64)
            assert self.transformation.shape == (16, )

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
        if all(self.transformation != other.transformation):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def transformation(self):
        """Message field 'transformation'."""
        return self._transformation

    @transformation.setter
    def transformation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'transformation' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 16, \
                "The 'transformation' numpy.ndarray() must have a size of 16"
            self._transformation = value
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
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'transformation' field must be a set or sequence with length 16 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._transformation = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetTCPFrame_Response(type):
    """Metaclass of message 'SetTCPFrame_Response'."""

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
                'franka_msgs.srv.SetTCPFrame_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_tcp_frame__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_tcp_frame__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_tcp_frame__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_tcp_frame__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_tcp_frame__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetTCPFrame_Response(metaclass=Metaclass_SetTCPFrame_Response):
    """Message class 'SetTCPFrame_Response'."""

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


class Metaclass_SetTCPFrame(type):
    """Metaclass of service 'SetTCPFrame'."""

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
                'franka_msgs.srv.SetTCPFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_tcp_frame

            from franka_msgs.srv import _set_tcp_frame
            if _set_tcp_frame.Metaclass_SetTCPFrame_Request._TYPE_SUPPORT is None:
                _set_tcp_frame.Metaclass_SetTCPFrame_Request.__import_type_support__()
            if _set_tcp_frame.Metaclass_SetTCPFrame_Response._TYPE_SUPPORT is None:
                _set_tcp_frame.Metaclass_SetTCPFrame_Response.__import_type_support__()


class SetTCPFrame(metaclass=Metaclass_SetTCPFrame):
    from franka_msgs.srv._set_tcp_frame import SetTCPFrame_Request as Request
    from franka_msgs.srv._set_tcp_frame import SetTCPFrame_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
