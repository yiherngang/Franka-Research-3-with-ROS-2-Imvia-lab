# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PositionConstraint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionConstraint(type):
    """Metaclass of message 'PositionConstraint'."""

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
                'moveit_msgs.msg.PositionConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_constraint

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from moveit_msgs.msg import BoundingVolume
            if BoundingVolume.__class__._TYPE_SUPPORT is None:
                BoundingVolume.__class__.__import_type_support__()

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


class PositionConstraint(metaclass=Metaclass_PositionConstraint):
    """Message class 'PositionConstraint'."""

    __slots__ = [
        '_header',
        '_link_name',
        '_target_point_offset',
        '_constraint_region',
        '_weight',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'link_name': 'string',
        'target_point_offset': 'geometry_msgs/Vector3',
        'constraint_region': 'moveit_msgs/BoundingVolume',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'BoundingVolume'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.link_name = kwargs.get('link_name', str())
        from geometry_msgs.msg import Vector3
        self.target_point_offset = kwargs.get('target_point_offset', Vector3())
        from moveit_msgs.msg import BoundingVolume
        self.constraint_region = kwargs.get('constraint_region', BoundingVolume())
        self.weight = kwargs.get('weight', float())

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
        if self.link_name != other.link_name:
            return False
        if self.target_point_offset != other.target_point_offset:
            return False
        if self.constraint_region != other.constraint_region:
            return False
        if self.weight != other.weight:
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
    def link_name(self):
        """Message field 'link_name'."""
        return self._link_name

    @link_name.setter
    def link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_name' field must be of type 'str'"
        self._link_name = value

    @builtins.property
    def target_point_offset(self):
        """Message field 'target_point_offset'."""
        return self._target_point_offset

    @target_point_offset.setter
    def target_point_offset(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'target_point_offset' field must be a sub message of type 'Vector3'"
        self._target_point_offset = value

    @builtins.property
    def constraint_region(self):
        """Message field 'constraint_region'."""
        return self._constraint_region

    @constraint_region.setter
    def constraint_region(self, value):
        if __debug__:
            from moveit_msgs.msg import BoundingVolume
            assert \
                isinstance(value, BoundingVolume), \
                "The 'constraint_region' field must be a sub message of type 'BoundingVolume'"
        self._constraint_region = value

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'weight' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._weight = value
