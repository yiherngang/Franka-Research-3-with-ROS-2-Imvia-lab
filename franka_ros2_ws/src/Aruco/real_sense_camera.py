import pyrealsense2 as rs
import numpy as np
import cv2

class RealSense(object):
    def __init__(self, width, height, frame_rate):
        self.pipe = rs.pipeline()
        self.cfg = rs.config()
        self.width = width
        self.height = height
        self.fr = frame_rate

        self.initialize_camera()

    def initialize_camera(self):
        self.cfg.enable_stream(
            rs.stream.color,
            self.width,
            self.height,
            rs.format.bgr8,
            self.fr)

        self.cfg.enable_stream(
            rs.stream.depth,
            self.width,
            self.height,
            rs.format.z16,
            self.fr)

        self.pipe.start(self.cfg)

    def release(self):
        self.pipe.stop()

    def read_raw(self):
        return True, self.get_only_color()

    def get_images(self):
        frames = self.pipe.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        color_frame = frames.get_color_frame()
        depth_image = np.asanyarray(depth_frame.get_data())
        color_image = np.asanyarray(color_frame.get_data())
        depth_image = cv2.convertScaleAbs(depth_image, alpha=0.5)

        return color_image, depth_image

    def get_only_color(self):
        frames = self.pipe.wait_for_frames()
        color_frame = frames.get_color_frame()
        color_image = np.asanyarray(color_frame.get_data())
        return color_image

    def get_only_depth(self):
        frames = self.pipe.wait_for_frames()
        depth_frame = frames.get_depth_frame()
        depth_image = np.asanyarray(depth_frame.get_data())
        depth_image = cv2.convertScaleAbs(depth_image, alpha=0.5)
        return depth_image


