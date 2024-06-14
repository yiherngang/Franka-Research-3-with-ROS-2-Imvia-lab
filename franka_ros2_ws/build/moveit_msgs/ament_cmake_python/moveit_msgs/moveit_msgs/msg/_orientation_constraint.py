# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/OrientationConstraint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OrientationConstraint(type):
    """Metaclass of message 'OrientationConstraint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'XYZ_EULER_ANGLES': 0,
        'ROTATION_VECTOR': 1,
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
                'moveit_msgs.msg.OrientationConstraint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__orientation_constraint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__orientation_constraint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__orientation_constraint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__orientation_constraint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__orientation_constraint

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'XYZ_EULER_ANGLES': cls.__constants['XYZ_EULER_ANGLES'],
            'ROTATION_VECTOR': cls.__constants['ROTATION_VECTOR'],
        }

    @property
    def XYZ_EULER_ANGLES(self):
        """Message constant 'XYZ_EULER_ANGLES'."""
        return Metaclass_OrientationConstraint.__constants['XYZ_EULER_ANGLES']

    @property
    def ROTATION_VECTOR(self):
        """Message constant 'ROTATION_VECTOR'."""
        return Metaclass_OrientationConstraint.__constants['ROTATION_VECTOR']


class OrientationConstraint(metaclass=Metaclass_OrientationConstraint):
    """
    Message class 'OrientationConstraint'.

    Constants:
      XYZ_EULER_ANGLES
      ROTATION_VECTOR
    """

    __slots__ = [
        '_header',
        '_orientation',
        '_link_name',
        '_absolute_x_axis_tolerance',
        '_absolute_y_axis_tolerance',
        '_absolute_z_axis_tolerance',
        '_parameterization',
        '_weight',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'orientation': 'geometry_msgs/Quaternion',
        'link_name': 'string',
        'absolute_x_axis_tolerance': 'double',
        'absolute_y_axis_tolerance': 'double',
        'absolute_z_axis_tolerance': 'double',
        'parameterization': 'uint8',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.link_name = kwargs.get('link_name', str())
        self.absolute_x_axis_tolerance = kwargs.get('absolute_x_axis_tolerance', float())
        self.absolute_y_axis_tolerance = kwargs.get('absolute_y_axis_tolerance', float())
        self.absolute_z_axis_tolerance = kwargs.get('absolute_z_axis_tolerance', float())
        self.parameterization = kwargs.get('parameterization', int())
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
        if self.orientation != other.orientation:
            return False
        if self.link_name != other.link_name:
            return False
        if self.absolute_x_axis_tolerance != other.absolute_x_axis_tolerance:
            return False
        if self.absolute_y_axis_tolerance != other.absolute_y_axis_tolerance:
            return False
        if self.absolute_z_axis_tolerance != other.absolute_z_axis_tolerance:
            return False
        if self.parameterization != other.parameterization:
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
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

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
    def absolute_x_axis_tolerance(self):
        """Message field 'absolute_x_axis_tolerance'."""
        return self._absolute_x_axis_tolerance

    @absolute_x_axis_tolerance.setter
    def absolute_x_axis_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'absolute_x_axis_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'absolute_x_axis_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._absolute_x_axis_tolerance = value

    @builtins.property
    def absolute_y_axis_tolerance(self):
        """Message field 'absolute_y_axis_tolerance'."""
        return self._absolute_y_axis_tolerance

    @absolute_y_axis_tolerance.setter
    def absolute_y_axis_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'absolute_y_axis_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'absolute_y_axis_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._absolute_y_axis_tolerance = value

    @builtins.property
    def absolute_z_axis_tolerance(self):
        """Message field 'absolute_z_axis_tolerance'."""
        return self._absolute_z_axis_tolerance

    @absolute_z_axis_tolerance.setter
    def absolute_z_axis_tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'absolute_z_axis_tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'absolute_z_axis_tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._absolute_z_axis_tolerance = value

    @builtins.property
    def parameterization(self):
        """Message field 'parameterization'."""
        return self._parameterization

    @parameterization.setter
    def parameterization(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'parameterization' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'parameterization' field must be an unsigned integer in [0, 255]"
        self._parameterization = value

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
