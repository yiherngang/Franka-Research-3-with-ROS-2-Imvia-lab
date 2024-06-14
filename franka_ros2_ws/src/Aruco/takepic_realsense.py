import cv2
import pyrealsense2 as rs
import numpy as np

def main():
    # Initialize the RealSense pipeline
    pipeline = rs.pipeline()
    config = rs.config()
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)
    pipeline.start(config)

    try:
        # Capture frames
        frames = pipeline.wait_for_frames()
        color_frame = frames.get_color_frame()

        if color_frame:
            # Convert the color frame to a numpy array
            color_image = np.asanyarray(color_frame.get_data())

            # Save the color image
            cv2.imwrite("cali5.png", color_image)

            print("Color image saved successfully.")

    finally:
        pipeline.stop()

if __name__ == "__main__":
    main()
