import cv2
import os
import datetime
import numpy as np
from camera_handler import CameraHandler
from utils import load_calibration, undistort, get_color_image, get_images_list
from aruco_handler import ArucoHandler

dirname = os.path.dirname(os.path.realpath(__file__))
data_path = os.path.join(dirname, 'dataset')

file_list = []
number_files = []
counter = 0

def get_image(camera_obj, use_cam = True):
    '''
    Function to be flexible in the way of switching between a real camera, and
    static images.

    Args:
        camera_obj: Camera instance used to retrive images from, when we want to
            use a camera.
        use_cam: Boolean. If true, the returned images will be those coming from
            the camera object. If False, the returned images will correspond to a
            set of already stored images in disk.

    Returns:
        Boolean true if the image is valid, and the corresponding image. If the
        image is not valid, then None is returned.
    '''
    global file_list
    global number_files
    global counter

    ret_val = False
    img = None
    if use_cam:
        ret_val, img = camera_obj.read_raw()
    else:
        fp = file_list[counter]
        counter = (counter + 1) % number_files
        img = cv2.imread(fp, cv2.IMREAD_UNCHANGED)
        ret_val = (not img is None)

    return ret_val, img

def main():
    global file_list
    global number_files
    global counter

    is_running = True
    now = datetime.datetime.now() # current date and time
    timestamp = now.strftime("%d%m%Y_%H%M%S")

   ########################### Application parameters ##########################
    data_folder_used = os.path.join(data_path, 'real_sense_data')
    calib_path = os.path.join(data_folder_used, 'calib_dict.yaml')
    out_dir = os.path.join(dirname, "recored_imgs_" + timestamp)
    # Load a camera
    use_camera = True ## Or False. If false, it will use already stored images in the data_folder_used directory
    cam = '/dev/video0'
   #############################################################################

    aruco_h = ArucoHandler(cv2.aruco.DICT_7X7_50)

    #### This line generates the ArUcO markers and it stores them in the generated_markers folder
    aruco_h.generate_markers_dictionary(2, dirname)

    aruco_h.initialize_detector()

    if use_camera:
        cam = CameraHandler(use_ros=True, device=cam)
    else:
        file_list = get_images_list(data_folder_used)
        number_files = len(file_list)
        counter = 0

    # We load the calibration parameters
    K, dist, img_shape = load_calibration(calib_path)

    N = 1

    while is_running:
        ret, raw = get_image(cam, use_camera)

        if ret:
            # We convert the raw image into a color image, and we undistort it with
            # the calibration parameters
            frame = get_color_image(raw, img_shape)
            output = undistort(frame, K, dist)

            # Detect the ArUco markers and their position.

            ################# Choose what to do (function 1 or function 2) ###################################
            # rvecs, tvecs, ids, output = aruco_h.detect_markers_and_pose(output, K, dist)    ##### Function 1
            markerCorners, ids, output = aruco_h.detect_markers(output)                       ##### Function 2

            cv2.namedWindow('Output', cv2.WINDOW_NORMAL)
            cv2.imshow('Output', output)
            # If we have a camera, we update the input image continuously. If
            # not, we use static images, that we update when the user presses a
            # key.
            if use_camera:
                key = cv2.waitKey(1)
            else:
                key = cv2.waitKey()

            if key == ord('q') or key == ord('Q'):
                is_running = False
                continue
            elif key == ord('r') or key == ord('R'):
                # We record the raw image in disk
                os.makedirs(out_dir, exist_ok=True)
                cv2.imwrite(os.path.join(out_dir, "img_{}.png".format(N)), raw)
                N += 1

    if use_camera:
        cam.release()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
