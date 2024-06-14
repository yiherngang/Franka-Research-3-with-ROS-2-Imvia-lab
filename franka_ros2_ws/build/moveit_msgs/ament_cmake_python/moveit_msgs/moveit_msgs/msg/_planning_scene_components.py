# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/PlanningSceneComponents.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningSceneComponents(type):
    """Metaclass of message 'PlanningSceneComponents'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SCENE_SETTINGS': 1,
        'ROBOT_STATE': 2,
        'ROBOT_STATE_ATTACHED_OBJECTS': 4,
        'WORLD_OBJECT_NAMES': 8,
        'WORLD_OBJECT_GEOMETRY': 16,
        'OCTOMAP': 32,
        'TRANSFORMS': 64,
        'ALLOWED_COLLISION_MATRIX': 128,
        'LINK_PADDING_AND_SCALING': 256,
        'OBJECT_COLORS': 512,
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
                'moveit_msgs.msg.PlanningSceneComponents')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_scene_components
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_scene_components
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_scene_components
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_scene_components
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_scene_components

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SCENE_SETTINGS': cls.__constants['SCENE_SETTINGS'],
            'ROBOT_STATE': cls.__constants['ROBOT_STATE'],
            'ROBOT_STATE_ATTACHED_OBJECTS': cls.__constants['ROBOT_STATE_ATTACHED_OBJECTS'],
            'WORLD_OBJECT_NAMES': cls.__constants['WORLD_OBJECT_NAMES'],
            'WORLD_OBJECT_GEOMETRY': cls.__constants['WORLD_OBJECT_GEOMETRY'],
            'OCTOMAP': cls.__constants['OCTOMAP'],
            'TRANSFORMS': cls.__constants['TRANSFORMS'],
            'ALLOWED_COLLISION_MATRIX': cls.__constants['ALLOWED_COLLISION_MATRIX'],
            'LINK_PADDING_AND_SCALING': cls.__constants['LINK_PADDING_AND_SCALING'],
            'OBJECT_COLORS': cls.__constants['OBJECT_COLORS'],
        }

    @property
    def SCENE_SETTINGS(self):
        """Message constant 'SCENE_SETTINGS'."""
        return Metaclass_PlanningSceneComponents.__constants['SCENE_SETTINGS']

    @property
    def ROBOT_STATE(self):
        """Message constant 'ROBOT_STATE'."""
        return Metaclass_PlanningSceneComponents.__constants['ROBOT_STATE']

    @property
    def ROBOT_STATE_ATTACHED_OBJECTS(self):
        """Message constant 'ROBOT_STATE_ATTACHED_OBJECTS'."""
        return Metaclass_PlanningSceneComponents.__constants['ROBOT_STATE_ATTACHED_OBJECTS']

    @property
    def WORLD_OBJECT_NAMES(self):
        """Message constant 'WORLD_OBJECT_NAMES'."""
        return Metaclass_PlanningSceneComponents.__constants['WORLD_OBJECT_NAMES']

    @property
    def WORLD_OBJECT_GEOMETRY(self):
        """Message constant 'WORLD_OBJECT_GEOMETRY'."""
        return Metaclass_PlanningSceneComponents.__constants['WORLD_OBJECT_GEOMETRY']

    @property
    def OCTOMAP(self):
        """Message constant 'OCTOMAP'."""
        return Metaclass_PlanningSceneComponents.__constants['OCTOMAP']

    @property
    def TRANSFORMS(self):
        """Message constant 'TRANSFORMS'."""
        return Metaclass_PlanningSceneComponents.__constants['TRANSFORMS']

    @property
    def ALLOWED_COLLISION_MATRIX(self):
        """Message constant 'ALLOWED_COLLISION_MATRIX'."""
        return Metaclass_PlanningSceneComponents.__constants['ALLOWED_COLLISION_MATRIX']

    @property
    def LINK_PADDING_AND_SCALING(self):
        """Message constant 'LINK_PADDING_AND_SCALING'."""
        return Metaclass_PlanningSceneComponents.__constants['LINK_PADDING_AND_SCALING']

    @property
    def OBJECT_COLORS(self):
        """Message constant 'OBJECT_COLORS'."""
        return Metaclass_PlanningSceneComponents.__constants['OBJECT_COLORS']


class PlanningSceneComponents(metaclass=Metaclass_PlanningSceneComponents):
    """
    Message class 'PlanningSceneComponents'.

    Constants:
      SCENE_SETTINGS
      ROBOT_STATE
      ROBOT_STATE_ATTACHED_OBJECTS
      WORLD_OBJECT_NAMES
      WORLD_OBJECT_GEOMETRY
      OCTOMAP
      TRANSFORMS
      ALLOWED_COLLISION_MATRIX
      LINK_PADDING_AND_SCALING
      OBJECT_COLORS
    """

    __slots__ = [
        '_components',
    ]

    _fields_and_field_types = {
        'components': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.components = kwargs.get('components', int())

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
        if self.components != other.components:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def components(self):
        """Message field 'components'."""
        return self._components

    @components.setter
    def components(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'components' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'components' field must be an unsigned integer in [0, 4294967295]"
        self._components = value
