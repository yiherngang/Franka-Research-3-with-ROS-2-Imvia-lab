# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetPositionIK.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPositionIK_Request(type):
    """Metaclass of message 'GetPositionIK_Request'."""

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
                'moveit_msgs.srv.GetPositionIK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_position_ik__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_position_ik__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_position_ik__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_position_ik__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_position_ik__request

            from moveit_msgs.msg import PositionIKRequest
            if PositionIKRequest.__class__._TYPE_SUPPORT is None:
                PositionIKRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPositionIK_Request(metaclass=Metaclass_GetPositionIK_Request):
    """Message class 'GetPositionIK_Request'."""

    __slots__ = [
        '_ik_request',
    ]

    _fields_and_field_types = {
        'ik_request': 'moveit_msgs/PositionIKRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PositionIKRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import PositionIKRequest
        self.ik_request = kwargs.get('ik_request', PositionIKRequest())

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
        if self.ik_request != other.ik_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ik_request(self):
        """Message field 'ik_request'."""
        return self._ik_request

    @ik_request.setter
    def ik_request(self, value):
        if __debug__:
            from moveit_msgs.msg import PositionIKRequest
            assert \
                isinstance(value, PositionIKRequest), \
                "The 'ik_request' field must be a sub message of type 'PositionIKRequest'"
        self._ik_request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPositionIK_Response(type):
    """Metaclass of message 'GetPositionIK_Response'."""

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
                'moveit_msgs.srv.GetPositionIK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_position_ik__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_position_ik__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_position_ik__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_position_ik__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_position_ik__response

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPositionIK_Response(metaclass=Metaclass_GetPositionIK_Response):
    """Message class 'GetPositionIK_Response'."""

    __slots__ = [
        '_solution',
        '_error_code',
    ]

    _fields_and_field_types = {
        'solution': 'moveit_msgs/RobotState',
        'error_code': 'moveit_msgs/MoveItErrorCodes',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import RobotState
        self.solution = kwargs.get('solution', RobotState())
        from moveit_msgs.msg import MoveItErrorCodes
        self.error_code = kwargs.get('error_code', MoveItErrorCodes())

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
        if self.solution != other.solution:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def solution(self):
        """Message field 'solution'."""
        return self._solution

    @solution.setter
    def solution(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'solution' field must be a sub message of type 'RobotState'"
        self._solution = value

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


class Metaclass_GetPositionIK(type):
    """Metaclass of service 'GetPositionIK'."""

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
                'moveit_msgs.srv.GetPositionIK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_position_ik

            from moveit_msgs.srv import _get_position_ik
            if _get_position_ik.Metaclass_GetPositionIK_Request._TYPE_SUPPORT is None:
                _get_position_ik.Metaclass_GetPositionIK_Request.__import_type_support__()
            if _get_position_ik.Metaclass_GetPositionIK_Response._TYPE_SUPPORT is None:
                _get_position_ik.Metaclass_GetPositionIK_Response.__import_type_support__()


class GetPositionIK(metaclass=Metaclass_GetPositionIK):
    from moveit_msgs.srv._get_position_ik import GetPositionIK_Request as Request
    from moveit_msgs.srv._get_position_ik import GetPositionIK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
