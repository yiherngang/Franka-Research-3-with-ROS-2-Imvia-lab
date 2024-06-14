# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetPositionFK.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPositionFK_Request(type):
    """Metaclass of message 'GetPositionFK_Request'."""

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
                'moveit_msgs.srv.GetPositionFK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_position_fk__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_position_fk__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_position_fk__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_position_fk__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_position_fk__request

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPositionFK_Request(metaclass=Metaclass_GetPositionFK_Request):
    """Message class 'GetPositionFK_Request'."""

    __slots__ = [
        '_header',
        '_fk_link_names',
        '_robot_state',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'fk_link_names': 'sequence<string>',
        'robot_state': 'moveit_msgs/RobotState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.fk_link_names = kwargs.get('fk_link_names', [])
        from moveit_msgs.msg import RobotState
        self.robot_state = kwargs.get('robot_state', RobotState())

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
        if self.header != other.header:
            return False
        if self.fk_link_names != other.fk_link_names:
            return False
        if self.robot_state != other.robot_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def fk_link_names(self):
        """Message field 'fk_link_names'."""
        return self._fk_link_names

    @fk_link_names.setter
    def fk_link_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'fk_link_names' field must be a set or sequence and each value of type 'str'"
        self._fk_link_names = value

    @builtins.property
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'robot_state' field must be a sub message of type 'RobotState'"
        self._robot_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPositionFK_Response(type):
    """Metaclass of message 'GetPositionFK_Response'."""

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
                'moveit_msgs.srv.GetPositionFK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_position_fk__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_position_fk__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_position_fk__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_position_fk__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_position_fk__response

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from moveit_msgs.msg import MoveItErrorCodes
            if MoveItErrorCodes.__class__._TYPE_SUPPORT is None:
                MoveItErrorCodes.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPositionFK_Response(metaclass=Metaclass_GetPositionFK_Response):
    """Message class 'GetPositionFK_Response'."""

    __slots__ = [
        '_pose_stamped',
        '_fk_link_names',
        '_error_code',
    ]

    _fields_and_field_types = {
        'pose_stamped': 'sequence<geometry_msgs/PoseStamped>',
        'fk_link_names': 'sequence<string>',
        'error_code': 'moveit_msgs/MoveItErrorCodes',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MoveItErrorCodes'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pose_stamped = kwargs.get('pose_stamped', [])
        self.fk_link_names = kwargs.get('fk_link_names', [])
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
        if self.pose_stamped != other.pose_stamped:
            return False
        if self.fk_link_names != other.fk_link_names:
            return False
        if self.error_code != other.error_code:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def pose_stamped(self):
        """Message field 'pose_stamped'."""
        return self._pose_stamped

    @pose_stamped.setter
    def pose_stamped(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
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
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'pose_stamped' field must be a set or sequence and each value of type 'PoseStamped'"
        self._pose_stamped = value

    @builtins.property
    def fk_link_names(self):
        """Message field 'fk_link_names'."""
        return self._fk_link_names

    @fk_link_names.setter
    def fk_link_names(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'fk_link_names' field must be a set or sequence and each value of type 'str'"
        self._fk_link_names = value

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


class Metaclass_GetPositionFK(type):
    """Metaclass of service 'GetPositionFK'."""

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
                'moveit_msgs.srv.GetPositionFK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_position_fk

            from moveit_msgs.srv import _get_position_fk
            if _get_position_fk.Metaclass_GetPositionFK_Request._TYPE_SUPPORT is None:
                _get_position_fk.Metaclass_GetPositionFK_Request.__import_type_support__()
            if _get_position_fk.Metaclass_GetPositionFK_Response._TYPE_SUPPORT is None:
                _get_position_fk.Metaclass_GetPositionFK_Response.__import_type_support__()


class GetPositionFK(metaclass=Metaclass_GetPositionFK):
    from moveit_msgs.srv._get_position_fk import GetPositionFK_Request as Request
    from moveit_msgs.srv._get_position_fk import GetPositionFK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
