# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/ChangeControlDimensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeControlDimensions_Request(type):
    """Metaclass of message 'ChangeControlDimensions_Request'."""

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
                'moveit_msgs.srv.ChangeControlDimensions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_control_dimensions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_control_dimensions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_control_dimensions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_control_dimensions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_control_dimensions__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeControlDimensions_Request(metaclass=Metaclass_ChangeControlDimensions_Request):
    """Message class 'ChangeControlDimensions_Request'."""

    __slots__ = [
        '_control_x_translation',
        '_control_y_translation',
        '_control_z_translation',
        '_control_x_rotation',
        '_control_y_rotation',
        '_control_z_rotation',
    ]

    _fields_and_field_types = {
        'control_x_translation': 'boolean',
        'control_y_translation': 'boolean',
        'control_z_translation': 'boolean',
        'control_x_rotation': 'boolean',
        'control_y_rotation': 'boolean',
        'control_z_rotation': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.control_x_translation = kwargs.get('control_x_translation', bool())
        self.control_y_translation = kwargs.get('control_y_translation', bool())
        self.control_z_translation = kwargs.get('control_z_translation', bool())
        self.control_x_rotation = kwargs.get('control_x_rotation', bool())
        self.control_y_rotation = kwargs.get('control_y_rotation', bool())
        self.control_z_rotation = kwargs.get('control_z_rotation', bool())

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
        if self.control_x_translation != other.control_x_translation:
            return False
        if self.control_y_translation != other.control_y_translation:
            return False
        if self.control_z_translation != other.control_z_translation:
            return False
        if self.control_x_rotation != other.control_x_rotation:
            return False
        if self.control_y_rotation != other.control_y_rotation:
            return False
        if self.control_z_rotation != other.control_z_rotation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def control_x_translation(self):
        """Message field 'control_x_translation'."""
        return self._control_x_translation

    @control_x_translation.setter
    def control_x_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_x_translation' field must be of type 'bool'"
        self._control_x_translation = value

    @builtins.property
    def control_y_translation(self):
        """Message field 'control_y_translation'."""
        return self._control_y_translation

    @control_y_translation.setter
    def control_y_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_y_translation' field must be of type 'bool'"
        self._control_y_translation = value

    @builtins.property
    def control_z_translation(self):
        """Message field 'control_z_translation'."""
        return self._control_z_translation

    @control_z_translation.setter
    def control_z_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_z_translation' field must be of type 'bool'"
        self._control_z_translation = value

    @builtins.property
    def control_x_rotation(self):
        """Message field 'control_x_rotation'."""
        return self._control_x_rotation

    @control_x_rotation.setter
    def control_x_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_x_rotation' field must be of type 'bool'"
        self._control_x_rotation = value

    @builtins.property
    def control_y_rotation(self):
        """Message field 'control_y_rotation'."""
        return self._control_y_rotation

    @control_y_rotation.setter
    def control_y_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_y_rotation' field must be of type 'bool'"
        self._control_y_rotation = value

    @builtins.property
    def control_z_rotation(self):
        """Message field 'control_z_rotation'."""
        return self._control_z_rotation

    @control_z_rotation.setter
    def control_z_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'control_z_rotation' field must be of type 'bool'"
        self._control_z_rotation = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeControlDimensions_Response(type):
    """Metaclass of message 'ChangeControlDimensions_Response'."""

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
                'moveit_msgs.srv.ChangeControlDimensions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_control_dimensions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_control_dimensions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_control_dimensions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_control_dimensions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_control_dimensions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeControlDimensions_Response(metaclass=Metaclass_ChangeControlDimensions_Response):
    """Message class 'ChangeControlDimensions_Response'."""

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


class Metaclass_ChangeControlDimensions(type):
    """Metaclass of service 'ChangeControlDimensions'."""

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
                'moveit_msgs.srv.ChangeControlDimensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_control_dimensions

            from moveit_msgs.srv import _change_control_dimensions
            if _change_control_dimensions.Metaclass_ChangeControlDimensions_Request._TYPE_SUPPORT is None:
                _change_control_dimensions.Metaclass_ChangeControlDimensions_Request.__import_type_support__()
            if _change_control_dimensions.Metaclass_ChangeControlDimensions_Response._TYPE_SUPPORT is None:
                _change_control_dimensions.Metaclass_ChangeControlDimensions_Response.__import_type_support__()


class ChangeControlDimensions(metaclass=Metaclass_ChangeControlDimensions):
    from moveit_msgs.srv._change_control_dimensions import ChangeControlDimensions_Request as Request
    from moveit_msgs.srv._change_control_dimensions import ChangeControlDimensions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
