import glob
import cv2
import numpy as np
import os
from load_data import LoadData
from evaluate_calibration import EvaluateCalibration
from utils import save_calib, undistort

dirname = os.path.dirname(os.path.realpath(__file__))
data_path = os.path.join(dirname, "dataset")

def main():
    myLoader = LoadData()
    # objpoints, imgpoints, img_shape = myLoader.get_calibration_data(
    #     os.path.join(data_path, "geom_calib_robotics_lab"),
    #     is_camera=False,
    #     use_raw=False)

    objpoints, imgpoints, img_shape = myLoader.get_calibration_data(
        "/dev/video0",
        is_camera=True,
        use_raw=True)

    if imgpoints and objpoints:
        print("Computing calibration matrix")
        ret, mtx, dist, rvecs, tvecs = cv2.calibrateCamera(
            objpoints,
            imgpoints,
            img_shape[::-1],
            None,
            None)

        # We evaluate the model by computing the error between the projection of
        # the 3d points into the image plane, and the measured image plane points.
        evaluator = EvaluateCalibration(mtx, dist)
        evaluator.evaluate(objpoints, imgpoints, rvecs, tvecs)

        # plumb-bob distortion model is the one that corrects both, radial and
        # tangential distortions of the lens.
        save_calib(mtx, dist, img_shape[0], img_shape[1], 'plumb_bob', myLoader.last_used_dir)

    else:
        print("No calibration images found")

if __name__ == '__main__':
    main()
