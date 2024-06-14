from camera_services_names import CameraServicesNames

from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

from std_srvs.srv import Empty as srvEmpty
from polarimetric_camera_server.srv import ParameterRequested
from polarimetric_camera_server.srv import CameraParameters

import rospy
from threading import Lock
import copy
import cv2

image_mutex = Lock()

'''
RosComm class. It is a way to ease the handling of services and topics that serve
as communication with ROS. It is subscribed to a single topic: The images topic.
The other functionalities are implemented as services.
'''
class RosCamera(object):
    def __init__(self):
        '''
        Constructor. It will create the internal variables, and it will subscribe
        to the images topic.
        '''
        rospy.init_node('camera_calib', anonymous=True)

        camera_name = ""
        user_defined_topic = "user_camera_name"
        try:
            camera_name = rospy.get_param("~" + user_defined_topic)
        except KeyError:
            print("Cannot find the camera name parameter {}. Using an empty string".format(user_defined_topic))

        self.services_names = CameraServicesNames(camera_name)
        self.raw_image = None

        ## Services handlers
        self.service_start_grabing_handler = None
        self.service_stop_grabing_handler = None
        self.service_is_alive_handler = None
        self.service_request_params_handler = None
        self.service_set_param_handler = None

        self.bridge = CvBridge()
        rospy.Subscriber(self.services_names.image_raw_topic, Image, self.raw_image_topic_callback)

        self.initialize_cam_params()

    def initialize_cam_params(self):
        '''
        It will create the Services objects.
        '''
        self.service_is_alive_handler = rospy.ServiceProxy(self.services_names.service_is_alive, srvEmpty)
        self.service_request_params_handler = rospy.ServiceProxy(self.services_names.service_request_single_param, ParameterRequested)
        self.service_set_param_handler = rospy.ServiceProxy(self.services_names.service_set_params, CameraParameters)

    def reset_services(self):
        '''
        If the camera has been initialized, it will stop the continuous mode,
        and it will set all the services objects to None.
        '''
        if not self.service_stop_grabing_handler is None:
            try:
                self.service_stop_grabing_handler()
            except rospy.ServiceException:
                pass

        self.service_start_grabing_handler = None
        self.service_stop_grabing_handler = None
        self.service_is_alive_handler = None
        self.service_request_params_handler = None
        self.service_set_param_handler = None

    def change_exposure_time(self, new_time):
        '''
        Call the service that changes the exposure time.

        Args:
            new_time: New exposure time in uS.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, new_time, None, None, None, None, None, None, None, self.services_names.EXPOSURE_TIME)
            except rospy.ServiceException:
                pass

    def change_gain(self, new_gain):
        '''
        Call the service that changes the camera gain.

        Args:
            new_gain: New gain to be set, in dB.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(new_gain, None, None, None, None, None, None, None, None, self.services_names.GAIN)
            except rospy.ServiceException:
                pass

    def set_white_balance_gains(self, gains):
        '''
        Call the service that changes the white balance gains.

        Args:
            gains: List with three values. The first value is the red gain,
                the second value is the green gain, and the third value is the
                blue gain.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, None, None, gains[0], gains[1], gains[2], None, None, None, self.services_names.WHITE_BALANCE_GAINS)
            except rospy.ServiceException:
                pass

    def raw_image_topic_callback(self, msg):
        '''
        Callback executed each time a new image arrive through the proper topic.
        The new image will be stored locally in the class.
        Args:
            msg: Image message received.
        '''
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, "passthrough")
        except CvBridgeError as e:
            print(e)

        with image_mutex:
            self.raw_image = copy.deepcopy(cv_image)

    def get_camera_parameters(self):
        '''
        Call the service to retrieve the actual camera parameters. The parameters
        requested are:
            * Gain (dB)
            * Exposure time (uS)
            * Frame rate (fps)
            * Red gain
            * Green gain
            * Blue gain
            * Auto gain
            * Auto exposure time
            * Auto white balance
        Returns:
            List with [Exposure time, gain, frame rate, red gain, green gain,
            blue gain, auto gain, auto exposure, auto white balance].
            If the service is not available, or it fails, default values are returned.
        '''
        # Exposure time, gain, frame rate, red gain, green gain, blue gain
        cam_params = [22, 0, 1, 1, 1, 1, False, False, False]
        if not self.service_request_params_handler is None:
            try:
                response = self.service_request_params_handler(self.services_names.ALL)
                cam_params = [
                    response.exposureUs,
                    response.gain,
                    response.frameRate,
                    response.redGain,
                    response.greenGain,
                    response.blueGain,
                    bool(response.autoGainEnabled),
                    bool(response.autoExposureEnabled),
                    bool(response.autoWhiteBalanceEnabled)]
            except rospy.ServiceException:
                pass

        return cam_params

    def update_frame_rate(self, new_fr):
        '''
        Call the service to change the desired camera frame rate.

        Args:
            new_fr: New value of the frame rate, in fps.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, None, new_fr, None, None, None, None, None, None, self.services_names.FRAME_RATE)
            except rospy.ServiceException:
                pass

    def get_raw_image_async(self):
        '''
        Retrieve a copy of the last received image.
        '''
        with image_mutex:
            return self.raw_image

    def get_raw_image_sync(self):
        '''
        Retrieve an image from the server synchronously
        '''
        cv_image = None
        if not rospy.is_shutdown():
            msg = rospy.wait_for_message(self.services_names.image_raw_topic, Image, timeout=10)
            try:
                cv_image = self.bridge.imgmsg_to_cv2(msg, "passthrough")
            except CvBridgeError as e:
                print(e)

        return cv_image

    def set_auto_gain_state(self, enabled):
        '''
        Change the Auto gain feature state.

        Args:
            enabled: If true, the feature will be enabled.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, None, None, None, None, None, enabled, None, None, self.services_names.AUTO_GAIN)
            except rospy.ServiceException:
                pass

    def set_auto_exposure_state(self, enabled):
        '''
        Change the Auto exposure time feature state.

        Args:
            enabled: If true, the feature will be enabled.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, None, None, None, None, None, None, enabled, None, self.services_names.AUTO_EXPOSURE)
            except rospy.ServiceException:
                pass

    def set_auto_white_balance_state(self, enabled):
        '''
        Change the Auto white balance feature state.

        Args:
            enabled: If true, the feature will be enabled.
        '''
        if not self.service_set_param_handler is None:
            try:
                #Args: gain exposureUs frameRate redGain greenGain blueGain autoGainEnabled autoExposureEnabled autoWhiteBalanceEnabled paramToChange
                self.service_set_param_handler(None, None, None, None, None, None, None, None, enabled, self.services_names.AUTO_WHITE_BALANCE)
            except rospy.ServiceException:
                pass
