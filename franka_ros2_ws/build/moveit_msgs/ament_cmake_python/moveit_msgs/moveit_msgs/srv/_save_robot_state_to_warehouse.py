# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/SaveRobotStateToWarehouse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveRobotStateToWarehouse_Request(type):
    """Metaclass of message 'SaveRobotStateToWarehouse_Request'."""

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
                'moveit_msgs.srv.SaveRobotStateToWarehouse_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_robot_state_to_warehouse__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_robot_state_to_warehouse__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_robot_state_to_warehouse__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_robot_state_to_warehouse__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_robot_state_to_warehouse__request

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


class SaveRobotStateToWarehouse_Request(metaclass=Metaclass_SaveRobotStateToWarehouse_Request):
    """Message class 'SaveRobotStateToWarehouse_Request'."""

    __slots__ = [
        '_name',
        '_robot',
        '_state',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'robot': 'string',
        'state': 'moveit_msgs/RobotState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.robot = kwargs.get('robot', str())
        from moveit_msgs.msg import RobotState
        self.state = kwargs.get('state', RobotState())

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
        if self.name != other.name:
            return False
        if self.robot != other.robot:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

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

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'state' field must be a sub message of type 'RobotState'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SaveRobotStateToWarehouse_Response(type):
    """Metaclass of message 'SaveRobotStateToWarehouse_Response'."""

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
                'moveit_msgs.srv.SaveRobotStateToWarehouse_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__save_robot_state_to_warehouse__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__save_robot_state_to_warehouse__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__save_robot_state_to_warehouse__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__save_robot_state_to_warehouse__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__save_robot_state_to_warehouse__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveRobotStateToWarehouse_Response(metaclass=Metaclass_SaveRobotStateToWarehouse_Response):
    """Message class 'SaveRobotStateToWarehouse_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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


class Metaclass_SaveRobotStateToWarehouse(type):
    """Metaclass of service 'SaveRobotStateToWarehouse'."""

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
                'moveit_msgs.srv.SaveRobotStateToWarehouse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__save_robot_state_to_warehouse

            from moveit_msgs.srv import _save_robot_state_to_warehouse
            if _save_robot_state_to_warehouse.Metaclass_SaveRobotStateToWarehouse_Request._TYPE_SUPPORT is None:
                _save_robot_state_to_warehouse.Metaclass_SaveRobotStateToWarehouse_Request.__import_type_support__()
            if _save_robot_state_to_warehouse.Metaclass_SaveRobotStateToWarehouse_Response._TYPE_SUPPORT is None:
                _save_robot_state_to_warehouse.Metaclass_SaveRobotStateToWarehouse_Response.__import_type_support__()


class SaveRobotStateToWarehouse(metaclass=Metaclass_SaveRobotStateToWarehouse):
    from moveit_msgs.srv._save_robot_state_to_warehouse import SaveRobotStateToWarehouse_Request as Request
    from moveit_msgs.srv._save_robot_state_to_warehouse import SaveRobotStateToWarehouse_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
