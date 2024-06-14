import numpy as np
import cv2
import os
import glob
import datetime
from camera_handler import CameraHandler

dirname = os.path.dirname(os.path.realpath(__file__))
data_path = os.path.join(dirname, "dataset")

class LoadData(object):
    '''
    Get calibration data (Images, 3D and 2D points) from a checkerboard
    calibration pattern. The data can be loaded from a connected camera or from
    already stored data.

    This class makes use of the OpenCV camera calibration toolkit to detect the
    checker board pattern. Only the images in which the pattern is found are
    going to be loaded.
    '''
    def __init__(self):
        '''
        Constructor. Internal variables are initialized. Particularly, the
        subpixel refinement step criteria, and the checker board pattern size.
        '''
        self.file_ext = "png"
        # Checkerboard pattern size to search
        self.checker_pattern_size = (9, 7)
        # termination criteria for the subpixel improvement correction
        self.subpix_end_criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)
        self.last_used_dir = None

    def get_calibration_data(self, path, is_camera, use_raw):
        '''
        Load / Create calibration data.

        Args:
            is_camera: Boolean flag. If true, the data will be created from the
                images obtained from the camera. If not, the data will be loaded
                from already stored images.
            path: If the camera is used, this string corresponds to the device
                path corresponding to the camera to be used. If not, it
                corresponds to the directory where the calibration images are
                located.
            use_raw: If true, the raw images from the camera are used. If not,
                the images are preprocessed.

        Returns:
            Three elements are returned: 3d points coordinates, 2d projection of
            the 3d points, and the size of the images used.
        '''
        if is_camera:
            return self.get_camera_data(path, use_raw)
        else:
            return self.load_existing_data(path)

    def find_checker_pattern(self, frame):
        '''
        Search for the checker pattern in the given image. To speed up the
        search, the input image is resized to a fixed size (640 x 480), and the
        first estimation of the input points is done in this last image. Then, a
        refinement step is done is the full size image.

        Args:
            frame: Input image in which the checker pattern will be looked for.

        Returns:
            Three elements:
                * Boolean True if the pattern is found in the input image. False
                  otherwise.
                * 2d points in the image plane.
                * Corresponding 3d points.
        '''
        img_2d = None
        # prepare object points, like (0,0,0), (1,0,0), (2,0,0) ....,(6,5,0)
        pts_3d = np.zeros((np.prod(self.checker_pattern_size), 3), dtype=np.float32)
        pts_3d[:,:2] = np.mgrid[0:self.checker_pattern_size[0], 0:self.checker_pattern_size[1]].T.reshape(-1,2)

        # (height, width)
        #working_size = (640, 480)
        working_size = (480, 640)


        if len(frame.shape) == 2:
            gray = frame
        else:
            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

        original_size = gray.shape[0:2]
        smaller_img = cv2.resize(gray, working_size)
        ret, corners = cv2.findChessboardCorners(smaller_img, self.checker_pattern_size, None)

        # If found, add object points, image points (after refining them)
        if ret == True:
            working_size = smaller_img.shape[0:2]
            original_size = gray.shape[0:2]
            corners[:, :, 0] = corners[:, :, 0] * (float(original_size[1]) / working_size[1])
            corners[:, :, 1] = corners[:, :, 1] * (float(original_size[0]) / working_size[0])
            print("Checker pattern found!")

            img_2d = cv2.cornerSubPix(gray, corners, (11,11), (-1,-1), self.subpix_end_criteria)

        return ret, img_2d, pts_3d

    def load_existing_data(self, path):
        '''
        Load data from already stored calibration images. This function will
        look for image files in a given folder, and if the checker pattern is
        found in the image, then that image is used for the calibration.

        Args:
            path: Directory to the location where the calibration images are.

        Returns:
            Three elements are returned: 3d points coordinates, 2d projection of
            the 3d points, and the size of the images used.
        '''
        self.last_used_dir = path
        if path:
            if not os.path.exists(path):
                print("ERROR: The specified loading path does not exists.")
                assert(0)
            elif not os.path.isdir(path):
                print("ERROR: The specified loading path is not a directory.")
                assert(0)

        filepaths = []
        for fp in glob.glob(os.path.join(path, "*." + self.file_ext)):
            filepaths.append(fp)

        # Arrays to store object points and image points from all the images.
        objpoints = [] # 3d point in real world space
        imgpoints = [] # 2d points in image plane.
        frames_shape = (0, 0, 0)

        cv2.namedWindow('Frame', cv2.WINDOW_NORMAL)

        for fp in filepaths:
            frame = cv2.imread(fp, cv2.IMREAD_COLOR)
            if not frame is None:
                ret, img_2d, pts_3d = self.find_checker_pattern(frame)

                # If found, add object points, image points (after refining them)
                if ret == True:
                    objpoints.append(pts_3d)
                    imgpoints.append(img_2d)
                    frames_shape = frame.shape
                    # Draw and display the corners
                    frame = cv2.drawChessboardCorners(frame, self.checker_pattern_size, img_2d, ret)

                    cv2.namedWindow('Frame', cv2.WINDOW_NORMAL)
                    cv2.imshow('Frame', frame)
                else:
                    print("Image rejected: {}".format(fp))

            key = cv2.waitKey(1)
            if key == ord('q') or key == ord('Q'):
                break

        cv2.destroyAllWindows()
        return objpoints, imgpoints, frames_shape[0:2]

    def get_camera_data(self, dev, use_raw_data=False):
        '''
        Create calibration data from the images received from a camera. At each
        frame, if the checker pattern is found in the image, then that image is
        used for the calibration, and it will be stored in disk to be used later
        on. To reduce the saving frequency, if a pattern is found, we sleep for
        200 mS. If not, we sleep only for 100 mS.

        This function works in two steps: firstly, we read the camera images,
        and we search for checker pattern. If we find it, we store that frame in
        disk, and we show the pattern to indicate the user that it has well
        detected. This way, we avoid storing useless images.
        Secondly, once the user press the 'q' / 'Q' key, we stop grabbing
        images, and we use the load function to read the previously stored
        images.

        The storing directory is called calib_images_found + the start
        timestamp, and it is located at the same directory as this script.

        Args:
            dev: String with the device path to be used as camera input.
            use_raw_data: Boolean. If true, the full-resolution image is used
                from the polarization camera. If not, we use the total intensity
                computed from the polarization channels, and this image has the
                half of the size in each dimension.

        Returns:
            Three elements are returned: 3d points coordinates, 2d projection of
            the 3d points, and the size of the images used.
        '''
        counter = 0
        is_running = True

        # We create a storing directory
        now = datetime.datetime.now() # current date and time
        timestamp = now.strftime("%d%m%Y_%H%M%S")
        self.last_used_dir = os.path.join(data_path, "calib_images_found_" + timestamp)
        os.makedirs(self.last_used_dir, exist_ok=True)

        print("Recorded images will be stored in {}".format(self.last_used_dir))

        # define a video capture object
        cap = CameraHandler(use_ros=True)
        #cap = CameraHandler(use_ros=False, device=dev)

        while is_running:

            if use_raw_data:
                ret, frame = cap.read_raw()
            else:
                ret, frame = cap.read()
            if not frame is None:
                ret, img_2d, _ = self.find_checker_pattern(frame)

                # If found, add object points, image points (after refining them)
                if ret == True:
                    final_path = os.path.join(self.last_used_dir, 'img_{:010d}.png'.format(counter))
                    cv2.imwrite(final_path, frame)
                    # We convert the frame into 3 channels to have colors in the
                    # drawn checker pattern.
                    if len(frame.shape) == 2:
                        frame = cv2.cvtColor(frame, cv2.COLOR_GRAY2BGR)
                    # Draw and display the corners
                    frame = cv2.drawChessboardCorners(frame, self.checker_pattern_size, img_2d, ret)
                    counter += 1
                    print("Image stored at {}".format(os.path.basename(final_path)))
                    # We use this wait to reduce the storing frequency
                    cv2.waitKey(100)

                cv2.namedWindow('Frame', cv2.WINDOW_NORMAL)
                cv2.imshow('Frame', frame)
            else:
                print("Empty image received")
                is_running = False
                continue

            key = cv2.waitKey(100)
            if key == ord('q') or key == ord('Q'):
                is_running = False
                continue

        cv2.destroyAllWindows()
        cap.release()

        print("Loading the created data...")
        return self.load_existing_data(self.last_used_dir)
