# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/RobotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotState(type):
    """Metaclass of message 'RobotState'."""

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
                'moveit_msgs.msg.RobotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_state

            from moveit_msgs.msg import AttachedCollisionObject
            if AttachedCollisionObject.__class__._TYPE_SUPPORT is None:
                AttachedCollisionObject.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from sensor_msgs.msg import MultiDOFJointState
            if MultiDOFJointState.__class__._TYPE_SUPPORT is None:
                MultiDOFJointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotState(metaclass=Metaclass_RobotState):
    """Message class 'RobotState'."""

    __slots__ = [
        '_joint_state',
        '_multi_dof_joint_state',
        '_attached_collision_objects',
        '_is_diff',
    ]

    _fields_and_field_types = {
        'joint_state': 'sensor_msgs/JointState',
        'multi_dof_joint_state': 'sensor_msgs/MultiDOFJointState',
        'attached_collision_objects': 'sequence<moveit_msgs/AttachedCollisionObject>',
        'is_diff': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'MultiDOFJointState'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'AttachedCollisionObject')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.joint_state = kwargs.get('joint_state', JointState())
        from sensor_msgs.msg import MultiDOFJointState
        self.multi_dof_joint_state = kwargs.get('multi_dof_joint_state', MultiDOFJointState())
        self.attached_collision_objects = kwargs.get('attached_collision_objects', [])
        self.is_diff = kwargs.get('is_diff', bool())

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
        if self.joint_state != other.joint_state:
            return False
        if self.multi_dof_joint_state != other.multi_dof_joint_state:
            return False
        if self.attached_collision_objects != other.attached_collision_objects:
            return False
        if self.is_diff != other.is_diff:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_state(self):
        """Message field 'joint_state'."""
        return self._joint_state

    @joint_state.setter
    def joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_state' field must be a sub message of type 'JointState'"
        self._joint_state = value

    @builtins.property
    def multi_dof_joint_state(self):
        """Message field 'multi_dof_joint_state'."""
        return self._multi_dof_joint_state

    @multi_dof_joint_state.setter
    def multi_dof_joint_state(self, value):
        if __debug__:
            from sensor_msgs.msg import MultiDOFJointState
            assert \
                isinstance(value, MultiDOFJointState), \
                "The 'multi_dof_joint_state' field must be a sub message of type 'MultiDOFJointState'"
        self._multi_dof_joint_state = value

    @builtins.property
    def attached_collision_objects(self):
        """Message field 'attached_collision_objects'."""
        return self._attached_collision_objects

    @attached_collision_objects.setter
    def attached_collision_objects(self, value):
        if __debug__:
            from moveit_msgs.msg import AttachedCollisionObject
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
                 all(isinstance(v, AttachedCollisionObject) for v in value) and
                 True), \
                "The 'attached_collision_objects' field must be a set or sequence and each value of type 'AttachedCollisionObject'"
        self._attached_collision_objects = value

    @builtins.property
    def is_diff(self):
        """Message field 'is_diff'."""
        return self._is_diff

    @is_diff.setter
    def is_diff(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_diff' field must be of type 'bool'"
        self._is_diff = value
