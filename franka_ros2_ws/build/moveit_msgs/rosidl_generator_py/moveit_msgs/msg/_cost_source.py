# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/CostSource.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CostSource(type):
    """Metaclass of message 'CostSource'."""

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
                'moveit_msgs.msg.CostSource')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cost_source
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cost_source
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cost_source
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cost_source
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cost_source

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CostSource(metaclass=Metaclass_CostSource):
    """Message class 'CostSource'."""

    __slots__ = [
        '_cost_density',
        '_aabb_min',
        '_aabb_max',
    ]

    _fields_and_field_types = {
        'cost_density': 'double',
        'aabb_min': 'geometry_msgs/Vector3',
        'aabb_max': 'geometry_msgs/Vector3',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cost_density = kwargs.get('cost_density', float())
        from geometry_msgs.msg import Vector3
        self.aabb_min = kwargs.get('aabb_min', Vector3())
        from geometry_msgs.msg import Vector3
        self.aabb_max = kwargs.get('aabb_max', Vector3())

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
        if self.cost_density != other.cost_density:
            return False
        if self.aabb_min != other.aabb_min:
            return False
        if self.aabb_max != other.aabb_max:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cost_density(self):
        """Message field 'cost_density'."""
        return self._cost_density

    @cost_density.setter
    def cost_density(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cost_density' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cost_density' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cost_density = value

    @builtins.property
    def aabb_min(self):
        """Message field 'aabb_min'."""
        return self._aabb_min

    @aabb_min.setter
    def aabb_min(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'aabb_min' field must be a sub message of type 'Vector3'"
        self._aabb_min = value

    @builtins.property
    def aabb_max(self):
        """Message field 'aabb_max'."""
        return self._aabb_max

    @aabb_max.setter
    def aabb_max(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'aabb_max' field must be a sub message of type 'Vector3'"
        self._aabb_max = value
