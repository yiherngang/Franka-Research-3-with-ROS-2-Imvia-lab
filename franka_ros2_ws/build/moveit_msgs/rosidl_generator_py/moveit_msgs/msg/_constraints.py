# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/Constraints.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Constraints(type):
    """Metaclass of message 'Constraints'."""

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
                'moveit_msgs.msg.Constraints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__constraints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__constraints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__constraints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__constraints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__constraints

            from moveit_msgs.msg import JointConstraint
            if JointConstraint.__class__._TYPE_SUPPORT is None:
                JointConstraint.__class__.__import_type_support__()

            from moveit_msgs.msg import OrientationConstraint
            if OrientationConstraint.__class__._TYPE_SUPPORT is None:
                OrientationConstraint.__class__.__import_type_support__()

            from moveit_msgs.msg import PositionConstraint
            if PositionConstraint.__class__._TYPE_SUPPORT is None:
                PositionConstraint.__class__.__import_type_support__()

            from moveit_msgs.msg import VisibilityConstraint
            if VisibilityConstraint.__class__._TYPE_SUPPORT is None:
                VisibilityConstraint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Constraints(metaclass=Metaclass_Constraints):
    """Message class 'Constraints'."""

    __slots__ = [
        '_name',
        '_joint_constraints',
        '_position_constraints',
        '_orientation_constraints',
        '_visibility_constraints',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'joint_constraints': 'sequence<moveit_msgs/JointConstraint>',
        'position_constraints': 'sequence<moveit_msgs/PositionConstraint>',
        'orientation_constraints': 'sequence<moveit_msgs/OrientationConstraint>',
        'visibility_constraints': 'sequence<moveit_msgs/VisibilityConstraint>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'JointConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PositionConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'OrientationConstraint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'VisibilityConstraint')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.joint_constraints = kwargs.get('joint_constraints', [])
        self.position_constraints = kwargs.get('position_constraints', [])
        self.orientation_constraints = kwargs.get('orientation_constraints', [])
        self.visibility_constraints = kwargs.get('visibility_constraints', [])

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
        if self.joint_constraints != other.joint_constraints:
            return False
        if self.position_constraints != other.position_constraints:
            return False
        if self.orientation_constraints != other.orientation_constraints:
            return False
        if self.visibility_constraints != other.visibility_constraints:
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
    def joint_constraints(self):
        """Message field 'joint_constraints'."""
        return self._joint_constraints

    @joint_constraints.setter
    def joint_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import JointConstraint
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
                 all(isinstance(v, JointConstraint) for v in value) and
                 True), \
                "The 'joint_constraints' field must be a set or sequence and each value of type 'JointConstraint'"
        self._joint_constraints = value

    @builtins.property
    def position_constraints(self):
        """Message field 'position_constraints'."""
        return self._position_constraints

    @position_constraints.setter
    def position_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import PositionConstraint
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
                 all(isinstance(v, PositionConstraint) for v in value) and
                 True), \
                "The 'position_constraints' field must be a set or sequence and each value of type 'PositionConstraint'"
        self._position_constraints = value

    @builtins.property
    def orientation_constraints(self):
        """Message field 'orientation_constraints'."""
        return self._orientation_constraints

    @orientation_constraints.setter
    def orientation_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import OrientationConstraint
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
                 all(isinstance(v, OrientationConstraint) for v in value) and
                 True), \
                "The 'orientation_constraints' field must be a set or sequence and each value of type 'OrientationConstraint'"
        self._orientation_constraints = value

    @builtins.property
    def visibility_constraints(self):
        """Message field 'visibility_constraints'."""
        return self._visibility_constraints

    @visibility_constraints.setter
    def visibility_constraints(self, value):
        if __debug__:
            from moveit_msgs.msg import VisibilityConstraint
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
                 all(isinstance(v, VisibilityConstraint) for v in value) and
                 True), \
                "The 'visibility_constraints' field must be a set or sequence and each value of type 'VisibilityConstraint'"
        self._visibility_constraints = value
