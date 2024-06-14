# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/ChangeDriftDimensions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ChangeDriftDimensions_Request(type):
    """Metaclass of message 'ChangeDriftDimensions_Request'."""

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
                'moveit_msgs.srv.ChangeDriftDimensions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_drift_dimensions__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_drift_dimensions__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_drift_dimensions__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_drift_dimensions__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_drift_dimensions__request

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeDriftDimensions_Request(metaclass=Metaclass_ChangeDriftDimensions_Request):
    """Message class 'ChangeDriftDimensions_Request'."""

    __slots__ = [
        '_drift_x_translation',
        '_drift_y_translation',
        '_drift_z_translation',
        '_drift_x_rotation',
        '_drift_y_rotation',
        '_drift_z_rotation',
        '_transform_jog_frame_to_drift_frame',
    ]

    _fields_and_field_types = {
        'drift_x_translation': 'boolean',
        'drift_y_translation': 'boolean',
        'drift_z_translation': 'boolean',
        'drift_x_rotation': 'boolean',
        'drift_y_rotation': 'boolean',
        'drift_z_rotation': 'boolean',
        'transform_jog_frame_to_drift_frame': 'geometry_msgs/Transform',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drift_x_translation = kwargs.get('drift_x_translation', bool())
        self.drift_y_translation = kwargs.get('drift_y_translation', bool())
        self.drift_z_translation = kwargs.get('drift_z_translation', bool())
        self.drift_x_rotation = kwargs.get('drift_x_rotation', bool())
        self.drift_y_rotation = kwargs.get('drift_y_rotation', bool())
        self.drift_z_rotation = kwargs.get('drift_z_rotation', bool())
        from geometry_msgs.msg import Transform
        self.transform_jog_frame_to_drift_frame = kwargs.get('transform_jog_frame_to_drift_frame', Transform())

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
        if self.drift_x_translation != other.drift_x_translation:
            return False
        if self.drift_y_translation != other.drift_y_translation:
            return False
        if self.drift_z_translation != other.drift_z_translation:
            return False
        if self.drift_x_rotation != other.drift_x_rotation:
            return False
        if self.drift_y_rotation != other.drift_y_rotation:
            return False
        if self.drift_z_rotation != other.drift_z_rotation:
            return False
        if self.transform_jog_frame_to_drift_frame != other.transform_jog_frame_to_drift_frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drift_x_translation(self):
        """Message field 'drift_x_translation'."""
        return self._drift_x_translation

    @drift_x_translation.setter
    def drift_x_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_x_translation' field must be of type 'bool'"
        self._drift_x_translation = value

    @builtins.property
    def drift_y_translation(self):
        """Message field 'drift_y_translation'."""
        return self._drift_y_translation

    @drift_y_translation.setter
    def drift_y_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_y_translation' field must be of type 'bool'"
        self._drift_y_translation = value

    @builtins.property
    def drift_z_translation(self):
        """Message field 'drift_z_translation'."""
        return self._drift_z_translation

    @drift_z_translation.setter
    def drift_z_translation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_z_translation' field must be of type 'bool'"
        self._drift_z_translation = value

    @builtins.property
    def drift_x_rotation(self):
        """Message field 'drift_x_rotation'."""
        return self._drift_x_rotation

    @drift_x_rotation.setter
    def drift_x_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_x_rotation' field must be of type 'bool'"
        self._drift_x_rotation = value

    @builtins.property
    def drift_y_rotation(self):
        """Message field 'drift_y_rotation'."""
        return self._drift_y_rotation

    @drift_y_rotation.setter
    def drift_y_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_y_rotation' field must be of type 'bool'"
        self._drift_y_rotation = value

    @builtins.property
    def drift_z_rotation(self):
        """Message field 'drift_z_rotation'."""
        return self._drift_z_rotation

    @drift_z_rotation.setter
    def drift_z_rotation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'drift_z_rotation' field must be of type 'bool'"
        self._drift_z_rotation = value

    @builtins.property
    def transform_jog_frame_to_drift_frame(self):
        """Message field 'transform_jog_frame_to_drift_frame'."""
        return self._transform_jog_frame_to_drift_frame

    @transform_jog_frame_to_drift_frame.setter
    def transform_jog_frame_to_drift_frame(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'transform_jog_frame_to_drift_frame' field must be a sub message of type 'Transform'"
        self._transform_jog_frame_to_drift_frame = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ChangeDriftDimensions_Response(type):
    """Metaclass of message 'ChangeDriftDimensions_Response'."""

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
                'moveit_msgs.srv.ChangeDriftDimensions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__change_drift_dimensions__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__change_drift_dimensions__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__change_drift_dimensions__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__change_drift_dimensions__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__change_drift_dimensions__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ChangeDriftDimensions_Response(metaclass=Metaclass_ChangeDriftDimensions_Response):
    """Message class 'ChangeDriftDimensions_Response'."""

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


class Metaclass_ChangeDriftDimensions(type):
    """Metaclass of service 'ChangeDriftDimensions'."""

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
                'moveit_msgs.srv.ChangeDriftDimensions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__change_drift_dimensions

            from moveit_msgs.srv import _change_drift_dimensions
            if _change_drift_dimensions.Metaclass_ChangeDriftDimensions_Request._TYPE_SUPPORT is None:
                _change_drift_dimensions.Metaclass_ChangeDriftDimensions_Request.__import_type_support__()
            if _change_drift_dimensions.Metaclass_ChangeDriftDimensions_Response._TYPE_SUPPORT is None:
                _change_drift_dimensions.Metaclass_ChangeDriftDimensions_Response.__import_type_support__()


class ChangeDriftDimensions(metaclass=Metaclass_ChangeDriftDimensions):
    from moveit_msgs.srv._change_drift_dimensions import ChangeDriftDimensions_Request as Request
    from moveit_msgs.srv._change_drift_dimensions import ChangeDriftDimensions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
