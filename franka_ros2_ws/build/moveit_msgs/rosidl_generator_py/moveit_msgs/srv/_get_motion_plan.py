# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetMotionPlan.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMotionPlan_Request(type):
    """Metaclass of message 'GetMotionPlan_Request'."""

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
                'moveit_msgs.srv.GetMotionPlan_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_motion_plan__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_motion_plan__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_motion_plan__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_motion_plan__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_motion_plan__request

            from moveit_msgs.msg import MotionPlanRequest
            if MotionPlanRequest.__class__._TYPE_SUPPORT is None:
                MotionPlanRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMotionPlan_Request(metaclass=Metaclass_GetMotionPlan_Request):
    """Message class 'GetMotionPlan_Request'."""

    __slots__ = [
        '_motion_plan_request',
    ]

    _fields_and_field_types = {
        'motion_plan_request': 'moveit_msgs/MotionPlanRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MotionPlanRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MotionPlanRequest
        self.motion_plan_request = kwargs.get('motion_plan_request', MotionPlanRequest())

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
        if self.motion_plan_request != other.motion_plan_request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion_plan_request(self):
        """Message field 'motion_plan_request'."""
        return self._motion_plan_request

    @motion_plan_request.setter
    def motion_plan_request(self, value):
        if __debug__:
            from moveit_msgs.msg import MotionPlanRequest
            assert \
                isinstance(value, MotionPlanRequest), \
                "The 'motion_plan_request' field must be a sub message of type 'MotionPlanRequest'"
        self._motion_plan_request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMotionPlan_Response(type):
    """Metaclass of message 'GetMotionPlan_Response'."""

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
                'moveit_msgs.srv.GetMotionPlan_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_motion_plan__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_motion_plan__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_motion_plan__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_motion_plan__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_motion_plan__response

            from moveit_msgs.msg import MotionPlanResponse
            if MotionPlanResponse.__class__._TYPE_SUPPORT is None:
                MotionPlanResponse.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMotionPlan_Response(metaclass=Metaclass_GetMotionPlan_Response):
    """Message class 'GetMotionPlan_Response'."""

    __slots__ = [
        '_motion_plan_response',
    ]

    _fields_and_field_types = {
        'motion_plan_response': 'moveit_msgs/MotionPlanResponse',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'MotionPlanResponse'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import MotionPlanResponse
        self.motion_plan_response = kwargs.get('motion_plan_response', MotionPlanResponse())

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
        if self.motion_plan_response != other.motion_plan_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def motion_plan_response(self):
        """Message field 'motion_plan_response'."""
        return self._motion_plan_response

    @motion_plan_response.setter
    def motion_plan_response(self, value):
        if __debug__:
            from moveit_msgs.msg import MotionPlanResponse
            assert \
                isinstance(value, MotionPlanResponse), \
                "The 'motion_plan_response' field must be a sub message of type 'MotionPlanResponse'"
        self._motion_plan_response = value


class Metaclass_GetMotionPlan(type):
    """Metaclass of service 'GetMotionPlan'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetMotionPlan')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_motion_plan

            from moveit_msgs.srv import _get_motion_plan
            if _get_motion_plan.Metaclass_GetMotionPlan_Request._TYPE_SUPPORT is None:
                _get_motion_plan.Metaclass_GetMotionPlan_Request.__import_type_support__()
            if _get_motion_plan.Metaclass_GetMotionPlan_Response._TYPE_SUPPORT is None:
                _get_motion_plan.Metaclass_GetMotionPlan_Response.__import_type_support__()


class GetMotionPlan(metaclass=Metaclass_GetMotionPlan):
    from moveit_msgs.srv._get_motion_plan import GetMotionPlan_Request as Request
    from moveit_msgs.srv._get_motion_plan import GetMotionPlan_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
