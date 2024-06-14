# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/AttachedCollisionObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AttachedCollisionObject(type):
    """Metaclass of message 'AttachedCollisionObject'."""

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
                'moveit_msgs.msg.AttachedCollisionObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__attached_collision_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__attached_collision_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__attached_collision_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__attached_collision_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__attached_collision_object

            from moveit_msgs.msg import CollisionObject
            if CollisionObject.__class__._TYPE_SUPPORT is None:
                CollisionObject.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AttachedCollisionObject(metaclass=Metaclass_AttachedCollisionObject):
    """Message class 'AttachedCollisionObject'."""

    __slots__ = [
        '_link_name',
        '_object',
        '_touch_links',
        '_detach_posture',
        '_weight',
    ]

    _fields_and_field_types = {
        'link_name': 'string',
        'object': 'moveit_msgs/CollisionObject',
        'touch_links': 'sequence<string>',
        'detach_posture': 'trajectory_msgs/JointTrajectory',
        'weight': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CollisionObject'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link_name = kwargs.get('link_name', str())
        from moveit_msgs.msg import CollisionObject
        self.object = kwargs.get('object', CollisionObject())
        self.touch_links = kwargs.get('touch_links', [])
        from trajectory_msgs.msg import JointTrajectory
        self.detach_posture = kwargs.get('detach_posture', JointTrajectory())
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
        if self.link_name != other.link_name:
            return False
        if self.object != other.object:
            return False
        if self.touch_links != other.touch_links:
            return False
        if self.detach_posture != other.detach_posture:
            return False
        if self.weight != other.weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property  # noqa: A003
    def object(self):  # noqa: A003
        """Message field 'object'."""
        return self._object

    @object.setter  # noqa: A003
    def object(self, value):  # noqa: A003
        if __debug__:
            from moveit_msgs.msg import CollisionObject
            assert \
                isinstance(value, CollisionObject), \
                "The 'object' field must be a sub message of type 'CollisionObject'"
        self._object = value

    @builtins.property
    def touch_links(self):
        """Message field 'touch_links'."""
        return self._touch_links

    @touch_links.setter
    def touch_links(self, value):
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
                "The 'touch_links' field must be a set or sequence and each value of type 'str'"
        self._touch_links = value

    @builtins.property
    def detach_posture(self):
        """Message field 'detach_posture'."""
        return self._detach_posture

    @detach_posture.setter
    def detach_posture(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'detach_posture' field must be a sub message of type 'JointTrajectory'"
        self._detach_posture = value

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
