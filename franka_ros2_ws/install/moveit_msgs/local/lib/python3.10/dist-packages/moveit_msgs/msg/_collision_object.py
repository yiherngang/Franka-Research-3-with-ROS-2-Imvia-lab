# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/CollisionObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollisionObject(type):
    """Metaclass of message 'CollisionObject'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ADD': b'\x00',
        'REMOVE': b'\x01',
        'APPEND': b'\x02',
        'MOVE': b'\x03',
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
                'moveit_msgs.msg.CollisionObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_object

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from object_recognition_msgs.msg import ObjectType
            if ObjectType.__class__._TYPE_SUPPORT is None:
                ObjectType.__class__.__import_type_support__()

            from shape_msgs.msg import Mesh
            if Mesh.__class__._TYPE_SUPPORT is None:
                Mesh.__class__.__import_type_support__()

            from shape_msgs.msg import Plane
            if Plane.__class__._TYPE_SUPPORT is None:
                Plane.__class__.__import_type_support__()

            from shape_msgs.msg import SolidPrimitive
            if SolidPrimitive.__class__._TYPE_SUPPORT is None:
                SolidPrimitive.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ADD': cls.__constants['ADD'],
            'REMOVE': cls.__constants['REMOVE'],
            'APPEND': cls.__constants['APPEND'],
            'MOVE': cls.__constants['MOVE'],
        }

    @property
    def ADD(self):
        """Message constant 'ADD'."""
        return Metaclass_CollisionObject.__constants['ADD']

    @property
    def REMOVE(self):
        """Message constant 'REMOVE'."""
        return Metaclass_CollisionObject.__constants['REMOVE']

    @property
    def APPEND(self):
        """Message constant 'APPEND'."""
        return Metaclass_CollisionObject.__constants['APPEND']

    @property
    def MOVE(self):
        """Message constant 'MOVE'."""
        return Metaclass_CollisionObject.__constants['MOVE']


class CollisionObject(metaclass=Metaclass_CollisionObject):
    """
    Message class 'CollisionObject'.

    Constants:
      ADD
      REMOVE
      APPEND
      MOVE
    """

    __slots__ = [
        '_header',
        '_pose',
        '_id',
        '_type',
        '_primitives',
        '_primitive_poses',
        '_meshes',
        '_mesh_poses',
        '_planes',
        '_plane_poses',
        '_subframe_names',
        '_subframe_poses',
        '_operation',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'pose': 'geometry_msgs/Pose',
        'id': 'string',
        'type': 'object_recognition_msgs/ObjectType',
        'primitives': 'sequence<shape_msgs/SolidPrimitive>',
        'primitive_poses': 'sequence<geometry_msgs/Pose>',
        'meshes': 'sequence<shape_msgs/Mesh>',
        'mesh_poses': 'sequence<geometry_msgs/Pose>',
        'planes': 'sequence<shape_msgs/Plane>',
        'plane_poses': 'sequence<geometry_msgs/Pose>',
        'subframe_names': 'sequence<string>',
        'subframe_poses': 'sequence<geometry_msgs/Pose>',
        'operation': 'octet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'msg'], 'ObjectType'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'SolidPrimitive')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Mesh')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Plane')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose')),  # noqa: E501
        rosidl_parser.definition.BasicType('octet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        self.id = kwargs.get('id', str())
        from object_recognition_msgs.msg import ObjectType
        self.type = kwargs.get('type', ObjectType())
        self.primitives = kwargs.get('primitives', [])
        self.primitive_poses = kwargs.get('primitive_poses', [])
        self.meshes = kwargs.get('meshes', [])
        self.mesh_poses = kwargs.get('mesh_poses', [])
        self.planes = kwargs.get('planes', [])
        self.plane_poses = kwargs.get('plane_poses', [])
        self.subframe_names = kwargs.get('subframe_names', [])
        self.subframe_poses = kwargs.get('subframe_poses', [])
        self.operation = kwargs.get('operation', bytes([0]))

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
        if self.pose != other.pose:
            return False
        if self.id != other.id:
            return False
        if self.type != other.type:
            return False
        if self.primitives != other.primitives:
            return False
        if self.primitive_poses != other.primitive_poses:
            return False
        if self.meshes != other.meshes:
            return False
        if self.mesh_poses != other.mesh_poses:
            return False
        if self.planes != other.planes:
            return False
        if self.plane_poses != other.plane_poses:
            return False
        if self.subframe_names != other.subframe_names:
            return False
        if self.subframe_poses != other.subframe_poses:
            return False
        if self.operation != other.operation:
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
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            from object_recognition_msgs.msg import ObjectType
            assert \
                isinstance(value, ObjectType), \
                "The 'type' field must be a sub message of type 'ObjectType'"
        self._type = value

    @builtins.property
    def primitives(self):
        """Message field 'primitives'."""
        return self._primitives

    @primitives.setter
    def primitives(self, value):
        if __debug__:
            from shape_msgs.msg import SolidPrimitive
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
                 all(isinstance(v, SolidPrimitive) for v in value) and
                 True), \
                "The 'primitives' field must be a set or sequence and each value of type 'SolidPrimitive'"
        self._primitives = value

    @builtins.property
    def primitive_poses(self):
        """Message field 'primitive_poses'."""
        return self._primitive_poses

    @primitive_poses.setter
    def primitive_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'primitive_poses' field must be a set or sequence and each value of type 'Pose'"
        self._primitive_poses = value

    @builtins.property
    def meshes(self):
        """Message field 'meshes'."""
        return self._meshes

    @meshes.setter
    def meshes(self, value):
        if __debug__:
            from shape_msgs.msg import Mesh
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
                 all(isinstance(v, Mesh) for v in value) and
                 True), \
                "The 'meshes' field must be a set or sequence and each value of type 'Mesh'"
        self._meshes = value

    @builtins.property
    def mesh_poses(self):
        """Message field 'mesh_poses'."""
        return self._mesh_poses

    @mesh_poses.setter
    def mesh_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'mesh_poses' field must be a set or sequence and each value of type 'Pose'"
        self._mesh_poses = value

    @builtins.property
    def planes(self):
        """Message field 'planes'."""
        return self._planes

    @planes.setter
    def planes(self, value):
        if __debug__:
            from shape_msgs.msg import Plane
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
                 all(isinstance(v, Plane) for v in value) and
                 True), \
                "The 'planes' field must be a set or sequence and each value of type 'Plane'"
        self._planes = value

    @builtins.property
    def plane_poses(self):
        """Message field 'plane_poses'."""
        return self._plane_poses

    @plane_poses.setter
    def plane_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'plane_poses' field must be a set or sequence and each value of type 'Pose'"
        self._plane_poses = value

    @builtins.property
    def subframe_names(self):
        """Message field 'subframe_names'."""
        return self._subframe_names

    @subframe_names.setter
    def subframe_names(self, value):
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
                "The 'subframe_names' field must be a set or sequence and each value of type 'str'"
        self._subframe_names = value

    @builtins.property
    def subframe_poses(self):
        """Message field 'subframe_poses'."""
        return self._subframe_poses

    @subframe_poses.setter
    def subframe_poses(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
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
                 all(isinstance(v, Pose) for v in value) and
                 True), \
                "The 'subframe_poses' field must be a set or sequence and each value of type 'Pose'"
        self._subframe_poses = value

    @builtins.property
    def operation(self):
        """Message field 'operation'."""
        return self._operation

    @operation.setter
    def operation(self, value):
        if __debug__:
            from collections.abc import ByteString
            assert \
                (isinstance(value, (bytes, ByteString)) and
                 len(value) == 1), \
                "The 'operation' field must be of type 'bytes' or 'ByteString' with length 1"
        self._operation = value
