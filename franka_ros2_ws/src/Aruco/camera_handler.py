import cv2
import numpy as np
import os
from real_sense_camera import RealSense
dirname = os.path.dirname(os.path.realpath(__file__))
class CameraHandler(object):
    '''
    Class aimed to ease the switch between the laptop webcam and the real
    polarization camera. This way, we can do small tests of the calibration
    algorithm without the polarization camera.
    It has two working modes: normal and raw. For the webcam, the normal
    method provides a color image, and the raw one provides a gray image. For
    the polarization camera, the raw method provides the full-resolution image,
    and the normal method provides the total intensity, mosaiced image.
    Thus, this last image has half size in each dimention with respect to the
    full-resolution image.
    '''
    def __init__(self, use_ros = True, device = None):
        '''
        Constructor. We initialize variables, and we initialize the camera we
        will use.
        Args:
            use_ros: Boolean. If true, we will use the polarimetric camera
                through the ROS server. If not, we will use the laptop webcam in
                device.
            device: String with the path of the device to use for the webcam
                camera. Default: None.
        '''
        self.use_ros = use_ros
        self.dev = device
        self.camera_object = None
        self.ros_comm = None
        self.initialize()
    def initialize(self):
        '''
        Initialize the camera. The camera to initialize depends on the arguments
        given during construction.
        If the ROS camera will be used, then we initialize the ROS communication
        with the server. If the webcam is to be used, we check the device
        exists, and that it can be opened. If it is not possible to initialize
        the webcam, an assertion is thrown.
        '''
        if self.use_ros:
            self.ros_comm = RealSense(width=640, height=480, frame_rate=30)
        else:
            assert(self.dev)
            # define a video capture object
            self.camera_object = cv2.VideoCapture(self.dev)
            if self.camera_object is None or not self.camera_object.isOpened():
                print("ERROR: Cannot initialize the capture")
                assert(0)
    def read_raw(self):
        ret = False
        frame = None

        if self.use_ros:
            ret, frame = self.ros_comm.read_raw()
        else:
            ret, frame = self.camera_object.read()
        return ret, frame
    def read(self):
        '''
        Get an image from the camera. If the polarization camera is used, the
        total intensity, mosaiced image is returned. If the webcam is returned,
        a color image is returned. To have the same amount of channels as the
        color image, the polarization image channel is copied three times.
        Returns:
            Boolean true if the image has been retrieved correctly, and a
            an image from the used camera. False and None are returned
            otherwise.
        '''
        ret = False
        frame = None
        if self.use_ros:
            ret, frame = self.ros_comm.read_raw()
        else:
            ret, frame = self.camera_object.read()
        return ret, frame
    def release(self):
        '''
        Release the used camera. For the moment, we do not do anything for the
        ROS camera, and for the webcam, we call the corresponding release method.
        '''
        if self.use_ros:
            self.ros_comm.release()
        else:
            self.camera_object.release()
 
