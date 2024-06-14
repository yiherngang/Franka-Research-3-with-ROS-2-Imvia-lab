import cv2
import numpy as np
import os
import glob

dirname = os.path.dirname(os.path.realpath(__file__))

class EvaluateCalibration(object):
    '''
    Helper class to evaluate the calibration results. It will take the
    calibration points, their corresponding image projections, and the
    calibration matrix, and it will compute the reprojection error for each case.
    '''
    def __init__(self, K, dist_params):
        '''
        Constructor.

        Args:
            K: Intrinsics calibration matrix.
            dist_params: Distortion parameters obtained from the calibration.
        '''
        self.intrinsics = K
        self.distortion_params = dist_params

    def evaluate(self, pts_3d, pts_2d, rvecs, tvecs):
        '''
        Evaluate the reprojection error of the 3D points into the image plane
        with the obtained calibration. This function will print the average and
        the Std. Dev. of the reprojetion error.

        Args:
            pts_3d: 3D world coordinate points used for the calirbation.
            pts_2d: 2D image coordinates obtained from the camera measurements.
            rvecs: Output vector of rotation vectors estimated for each pattern view.
            tvecs: Output vector of translation vectors estimated for each pattern view.
        '''
        errors = []

        assert(len(pts_3d) == len(pts_2d))

        print('Computing reprojection error:')
        for i in range(len(pts_3d)):
            img_points2, _ = cv2.projectPoints(
                pts_3d[i],
                rvecs[i],
                tvecs[i],
                self.intrinsics,
                self.distortion_params)

            # When two sources are given, cv2.norm calculates an absolute
            # difference norm.
            error = cv2.norm(pts_2d[i], img_points2, cv2.NORM_L2) / len(img_points2)
            print('Average error of the points in image {}: Error {:.6f}'.format(i, error))
            errors.append(error)

        reprojection_error_avg = np.average(errors)
        reprojection_error_stddev = np.std(errors)
        print("Average reprojection error: {:.6f} +/- {:.6f}".format(
            reprojection_error_avg,
            reprojection_error_stddev))