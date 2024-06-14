# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/RenameRobotStateInWarehouse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RenameRobotStateInWarehouse_Request(type):
    """Metaclass of message 'RenameRobotStateInWarehouse_Request'."""

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
                'moveit_msgs.srv.RenameRobotStateInWarehouse_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rename_robot_state_in_warehouse__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rename_robot_state_in_warehouse__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rename_robot_state_in_warehouse__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rename_robot_state_in_warehouse__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rename_robot_state_in_warehouse__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RenameRobotStateInWarehouse_Request(metaclass=Metaclass_RenameRobotStateInWarehouse_Request):
    """Message class 'RenameRobotStateInWarehouse_Request'."""

    __slots__ = [
        '_old_name',
        '_new_name',
        '_robot',
    ]

    _fields_and_field_types = {
        'old_name': 'string',
        'new_name': 'string',
        'robot': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.old_name = kwargs.get('old_name', str())
        self.new_name = kwargs.get('new_name', str())
        self.robot = kwargs.get('robot', str())

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
        if self.old_name != other.old_name:
            return False
        if self.new_name != other.new_name:
            return False
        if self.robot != other.robot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def old_name(self):
        """Message field 'old_name'."""
        return self._old_name

    @old_name.setter
    def old_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'old_name' field must be of type 'str'"
        self._old_name = value

    @builtins.property
    def new_name(self):
        """Message field 'new_name'."""
        return self._new_name

    @new_name.setter
    def new_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'new_name' field must be of type 'str'"
        self._new_name = value

    @builtins.property
    def robot(self):
        """Message field 'robot'."""
        return self._robot

    @robot.setter
    def robot(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot' field must be of type 'str'"
        self._robot = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RenameRobotStateInWarehouse_Response(type):
    """Metaclass of message 'RenameRobotStateInWarehouse_Response'."""

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
                'moveit_msgs.srv.RenameRobotStateInWarehouse_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rename_robot_state_in_warehouse__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rename_robot_state_in_warehouse__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rename_robot_state_in_warehouse__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rename_robot_state_in_warehouse__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rename_robot_state_in_warehouse__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RenameRobotStateInWarehouse_Response(metaclass=Metaclass_RenameRobotStateInWarehouse_Response):
    """Message class 'RenameRobotStateInWarehouse_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_RenameRobotStateInWarehouse(type):
    """Metaclass of service 'RenameRobotStateInWarehouse'."""

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
                'moveit_msgs.srv.RenameRobotStateInWarehouse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rename_robot_state_in_warehouse

            from moveit_msgs.srv import _rename_robot_state_in_warehouse
            if _rename_robot_state_in_warehouse.Metaclass_RenameRobotStateInWarehouse_Request._TYPE_SUPPORT is None:
                _rename_robot_state_in_warehouse.Metaclass_RenameRobotStateInWarehouse_Request.__import_type_support__()
            if _rename_robot_state_in_warehouse.Metaclass_RenameRobotStateInWarehouse_Response._TYPE_SUPPORT is None:
                _rename_robot_state_in_warehouse.Metaclass_RenameRobotStateInWarehouse_Response.__import_type_support__()


class RenameRobotStateInWarehouse(metaclass=Metaclass_RenameRobotStateInWarehouse):
    from moveit_msgs.srv._rename_robot_state_in_warehouse import RenameRobotStateInWarehouse_Request as Request
    from moveit_msgs.srv._rename_robot_state_in_warehouse import RenameRobotStateInWarehouse_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
