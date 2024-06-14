# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/GripperTranslation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperTranslation(type):
    """Metaclass of message 'GripperTranslation'."""

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
                'moveit_msgs.msg.GripperTranslation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gripper_translation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gripper_translation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gripper_translation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gripper_translation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gripper_translation

            from geometry_msgs.msg import Vector3Stamped
            if Vector3Stamped.__class__._TYPE_SUPPORT is None:
                Vector3Stamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperTranslation(metaclass=Metaclass_GripperTranslation):
    """Message class 'GripperTranslation'."""

    __slots__ = [
        '_direction',
        '_desired_distance',
        '_min_distance',
    ]

    _fields_and_field_types = {
        'direction': 'geometry_msgs/Vector3Stamped',
        'desired_distance': 'float',
        'min_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3Stamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Vector3Stamped
        self.direction = kwargs.get('direction', Vector3Stamped())
        self.desired_distance = kwargs.get('desired_distance', float())
        self.min_distance = kwargs.get('min_distance', float())

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
        if self.direction != other.direction:
            return False
        if self.desired_distance != other.desired_distance:
            return False
        if self.min_distance != other.min_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3Stamped
            assert \
                isinstance(value, Vector3Stamped), \
                "The 'direction' field must be a sub message of type 'Vector3Stamped'"
        self._direction = value

    @builtins.property
    def desired_distance(self):
        """Message field 'desired_distance'."""
        return self._desired_distance

    @desired_distance.setter
    def desired_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'desired_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'desired_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._desired_distance = value

    @builtins.property
    def min_distance(self):
        """Message field 'min_distance'."""
        return self._min_distance

    @min_distance.setter
    def min_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_distance = value
