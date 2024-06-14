# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PlanningScene.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningScene(type):
    """Metaclass of message 'PlanningScene'."""

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
                'moveit_msgs.msg.PlanningScene')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_scene
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_scene
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_scene
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_scene
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_scene

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

            from moveit_msgs.msg import AllowedCollisionMatrix
            if AllowedCollisionMatrix.__class__._TYPE_SUPPORT is None:
                AllowedCollisionMatrix.__class__.__import_type_support__()

            from moveit_msgs.msg import LinkPadding
            if LinkPadding.__class__._TYPE_SUPPORT is None:
                LinkPadding.__class__.__import_type_support__()

            from moveit_msgs.msg import LinkScale
            if LinkScale.__class__._TYPE_SUPPORT is None:
                LinkScale.__class__.__import_type_support__()

            from moveit_msgs.msg import ObjectColor
            if ObjectColor.__class__._TYPE_SUPPORT is None:
                ObjectColor.__class__.__import_type_support__()

            from moveit_msgs.msg import PlanningSceneWorld
            if PlanningSceneWorld.__class__._TYPE_SUPPORT is None:
                PlanningSceneWorld.__class__.__import_type_support__()

            from moveit_msgs.msg import RobotState
            if RobotState.__class__._TYPE_SUPPORT is None:
                RobotState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanningScene(metaclass=Metaclass_PlanningScene):
    """Message class 'PlanningScene'."""

    __slots__ = [
        '_name',
        '_robot_state',
        '_robot_model_name',
        '_fixed_frame_transforms',
        '_allowed_collision_matrix',
        '_link_padding',
        '_link_scale',
        '_object_colors',
        '_world',
        '_is_diff',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'robot_state': 'moveit_msgs/RobotState',
        'robot_model_name': 'string',
        'fixed_frame_transforms': 'sequence<geometry_msgs/TransformStamped>',
        'allowed_collision_matrix': 'moveit_msgs/AllowedCollisionMatrix',
        'link_padding': 'sequence<moveit_msgs/LinkPadding>',
        'link_scale': 'sequence<moveit_msgs/LinkScale>',
        'object_colors': 'sequence<moveit_msgs/ObjectColor>',
        'world': 'moveit_msgs/PlanningSceneWorld',
        'is_diff': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'RobotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'AllowedCollisionMatrix'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'LinkPadding')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'LinkScale')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'ObjectColor')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningSceneWorld'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        from moveit_msgs.msg import RobotState
        self.robot_state = kwargs.get('robot_state', RobotState())
        self.robot_model_name = kwargs.get('robot_model_name', str())
        self.fixed_frame_transforms = kwargs.get('fixed_frame_transforms', [])
        from moveit_msgs.msg import AllowedCollisionMatrix
        self.allowed_collision_matrix = kwargs.get('allowed_collision_matrix', AllowedCollisionMatrix())
        self.link_padding = kwargs.get('link_padding', [])
        self.link_scale = kwargs.get('link_scale', [])
        self.object_colors = kwargs.get('object_colors', [])
        from moveit_msgs.msg import PlanningSceneWorld
        self.world = kwargs.get('world', PlanningSceneWorld())
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
        if self.name != other.name:
            return False
        if self.robot_state != other.robot_state:
            return False
        if self.robot_model_name != other.robot_model_name:
            return False
        if self.fixed_frame_transforms != other.fixed_frame_transforms:
            return False
        if self.allowed_collision_matrix != other.allowed_collision_matrix:
            return False
        if self.link_padding != other.link_padding:
            return False
        if self.link_scale != other.link_scale:
            return False
        if self.object_colors != other.object_colors:
            return False
        if self.world != other.world:
            return False
        if self.is_diff != other.is_diff:
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
    def robot_state(self):
        """Message field 'robot_state'."""
        return self._robot_state

    @robot_state.setter
    def robot_state(self, value):
        if __debug__:
            from moveit_msgs.msg import RobotState
            assert \
                isinstance(value, RobotState), \
                "The 'robot_state' field must be a sub message of type 'RobotState'"
        self._robot_state = value

    @builtins.property
    def robot_model_name(self):
        """Message field 'robot_model_name'."""
        return self._robot_model_name

    @robot_model_name.setter
    def robot_model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_model_name' field must be of type 'str'"
        self._robot_model_name = value

    @builtins.property
    def fixed_frame_transforms(self):
        """Message field 'fixed_frame_transforms'."""
        return self._fixed_frame_transforms

    @fixed_frame_transforms.setter
    def fixed_frame_transforms(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
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
                 all(isinstance(v, TransformStamped) for v in value) and
                 True), \
                "The 'fixed_frame_transforms' field must be a set or sequence and each value of type 'TransformStamped'"
        self._fixed_frame_transforms = value

    @builtins.property
    def allowed_collision_matrix(self):
        """Message field 'allowed_collision_matrix'."""
        return self._allowed_collision_matrix

    @allowed_collision_matrix.setter
    def allowed_collision_matrix(self, value):
        if __debug__:
            from moveit_msgs.msg import AllowedCollisionMatrix
            assert \
                isinstance(value, AllowedCollisionMatrix), \
                "The 'allowed_collision_matrix' field must be a sub message of type 'AllowedCollisionMatrix'"
        self._allowed_collision_matrix = value

    @builtins.property
    def link_padding(self):
        """Message field 'link_padding'."""
        return self._link_padding

    @link_padding.setter
    def link_padding(self, value):
        if __debug__:
            from moveit_msgs.msg import LinkPadding
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
                 all(isinstance(v, LinkPadding) for v in value) and
                 True), \
                "The 'link_padding' field must be a set or sequence and each value of type 'LinkPadding'"
        self._link_padding = value

    @builtins.property
    def link_scale(self):
        """Message field 'link_scale'."""
        return self._link_scale

    @link_scale.setter
    def link_scale(self, value):
        if __debug__:
            from moveit_msgs.msg import LinkScale
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
                 all(isinstance(v, LinkScale) for v in value) and
                 True), \
                "The 'link_scale' field must be a set or sequence and each value of type 'LinkScale'"
        self._link_scale = value

    @builtins.property
    def object_colors(self):
        """Message field 'object_colors'."""
        return self._object_colors

    @object_colors.setter
    def object_colors(self, value):
        if __debug__:
            from moveit_msgs.msg import ObjectColor
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
                 all(isinstance(v, ObjectColor) for v in value) and
                 True), \
                "The 'object_colors' field must be a set or sequence and each value of type 'ObjectColor'"
        self._object_colors = value

    @builtins.property
    def world(self):
        """Message field 'world'."""
        return self._world

    @world.setter
    def world(self, value):
        if __debug__:
            from moveit_msgs.msg import PlanningSceneWorld
            assert \
                isinstance(value, PlanningSceneWorld), \
                "The 'world' field must be a sub message of type 'PlanningSceneWorld'"
        self._world = value

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
