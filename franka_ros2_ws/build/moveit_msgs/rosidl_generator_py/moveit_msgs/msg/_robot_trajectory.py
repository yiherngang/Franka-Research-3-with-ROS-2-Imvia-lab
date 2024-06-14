# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/RobotTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotTrajectory(type):
    """Metaclass of message 'RobotTrajectory'."""

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
                'moveit_msgs.msg.RobotTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robot_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robot_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robot_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robot_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robot_trajectory

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

            from trajectory_msgs.msg import MultiDOFJointTrajectory
            if MultiDOFJointTrajectory.__class__._TYPE_SUPPORT is None:
                MultiDOFJointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotTrajectory(metaclass=Metaclass_RobotTrajectory):
    """Message class 'RobotTrajectory'."""

    __slots__ = [
        '_joint_trajectory',
        '_multi_dof_joint_trajectory',
    ]

    _fields_and_field_types = {
        'joint_trajectory': 'trajectory_msgs/JointTrajectory',
        'multi_dof_joint_trajectory': 'trajectory_msgs/MultiDOFJointTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'MultiDOFJointTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from trajectory_msgs.msg import JointTrajectory
        self.joint_trajectory = kwargs.get('joint_trajectory', JointTrajectory())
        from trajectory_msgs.msg import MultiDOFJointTrajectory
        self.multi_dof_joint_trajectory = kwargs.get('multi_dof_joint_trajectory', MultiDOFJointTrajectory())

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
        if self.joint_trajectory != other.joint_trajectory:
            return False
        if self.multi_dof_joint_trajectory != other.multi_dof_joint_trajectory:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_trajectory(self):
        """Message field 'joint_trajectory'."""
        return self._joint_trajectory

    @joint_trajectory.setter
    def joint_trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'joint_trajectory' field must be a sub message of type 'JointTrajectory'"
        self._joint_trajectory = value

    @builtins.property
    def multi_dof_joint_trajectory(self):
        """Message field 'multi_dof_joint_trajectory'."""
        return self._multi_dof_joint_trajectory

    @multi_dof_joint_trajectory.setter
    def multi_dof_joint_trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import MultiDOFJointTrajectory
            assert \
                isinstance(value, MultiDOFJointTrajectory), \
                "The 'multi_dof_joint_trajectory' field must be a sub message of type 'MultiDOFJointTrajectory'"
        self._multi_dof_joint_trajectory = value
