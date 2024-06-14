import cv2
import numpy as np
import os
import yaml
import glob

dirname = os.path.dirname(os.path.realpath(__file__))

gamma = 2.2
invGamma = 1.0 / gamma
table = np.array([((i / 255.0) ** invGamma) * 255 for i in np.arange(0, 256)]).astype("uint8")

def get_images_list(path):
    '''
    Find all the PNG files in a given folder. We suppose the images have a name
    format img_X.png, where X is an integer number.

    Args:
        path: Full path to the root directory where the PNG files are.

    Returns:
        List with all the PNG files found, sorted by the image index.
    '''
    files = glob.glob(os.path.join(path, "*.png"))
    return sorted(files, key=lambda x: int(os.path.basename(x).split(".")[0].replace("img_", "")))

def lryaml(name, d, k, r, p, size, dist_model):
    '''
    Get a YAML formatted calibration string. This file includes the distortion
    parameters, the intrinsics, the camera image size, and the model name
    strings.

    Args:
        name: Camera name to be used to identify the camera to which the
            calibration parameters belongs to.
        d: Distortion model vector.
        k: Intrinsics parameters matrix.
        r: Rotation matrix with respect to a reference frame. For monocular
            systems, this matrix is the identity.
        p: Projection matrix from 3d to the image plane.
        size: Image size (rows, columns) == (height, width).
        dist_model: String with the distortion model used during calibration.

    Returns:
        YAML formatted string, with the calibration results placed on the
        dictionary fields. The provided fields are:

            - image_width
            - image_height
            - camera_name
            - distortion_model
            - camera_matrix
                * rows
                * cols
                * data
            - distortion_coefficients
                * rows
                * cols
                * data
            - rectification_matrix
                * rows
                * cols
                * data
            - projection_matrix
                * rows
                * cols
                * data
    '''
    # Taken from https://github.com/ros-perception/image_pipeline/blob/noetic/camera_calibration/src/camera_calibration/calibrator.py
    def format_mat(x, precision):
        return ("[%s]" % (
            np.array2string(x, precision=precision, suppress_small=True, separator=", ")
                .replace("[", "").replace("]", "").replace("\n", "\n        ")
        ))

    assert k.shape == (3, 3)
    assert r.shape == (3, 3)
    assert p.shape == (3, 4)

    calmessage = "\n".join([
        "image_width: %d" % size[0],
        "image_height: %d" % size[1],
        "camera_name: " + name,
        "camera_matrix:",
        "  rows: 3",
        "  cols: 3",
        "  data: " + format_mat(k, 5),
        "distortion_model: " + dist_model,
        "distortion_coefficients:",
        "  rows: 1",
        "  cols: %d" % d.size,
        "  data: [%s]" % ", ".join("%8f" % x for x in d.flat),
        "rectification_matrix:",
        "  rows: 3",
        "  cols: 3",
        "  data: " + format_mat(r, 8),
        "projection_matrix:",
        "  rows: 3",
        "  cols: 4",
        "  data: " + format_mat(p, 5),
        ""
    ])
    return calmessage

def save_calib(K, dist, height, width, dist_model, output_dir):
    '''
    Save the calibration results into a YAML formatted file. The output file has
    the name 'calib_dict.yaml'.

    Args:
        K: Intrinsics parameters matrix.
        dist: Distortion model parameters.
        height: Camera image height.
        width: Camera image width.
        dist_model: Distortion model name.
        output_dir: Path where to store the calibration results YAML file.
    '''
    # For monocular calibration, the rotation matrix R is an identity
    R = np.zeros((3,3))
    R[0, 0] = 1
    R[1, 1] = 1
    R[2, 2] = 1

    P = np.zeros((3, 4), dtype=np.float64)
    P[0:3, 0:3] = K
    P[2,3] = 1

    yaml_str = lryaml('basler_camera', dist, K, R, P, (width, height), dist_model)

    with open(os.path.join(output_dir, 'calib_dict.yaml'), 'w') as fp:
        fp.write(yaml_str)

def undistort(raw_img, K, dist):
    '''
    Undistort the image with the given calibration parameters.

    Args:
        raw_img: Image from the camera, distorted.
        K: Intrinsics parameters.
        dist: Distortion parameters.

    Returns:
        Undistorted image.
    '''
    h, w = raw_img.shape[0:2]
    newcameramtx, _ = cv2.getOptimalNewCameraMatrix(
        K,       # Intrinsics
        dist,    # Distortion coefficients
        (w, h),
        1,       # Alpha parameter
        (w, h)
    )

    dst = cv2.undistort(raw_img, K, dist, None, newcameramtx)
    return dst

def load_calibration(path):
    '''
    Read the geometric calibration parameters stored in a YAML file.

    Args:
        path: Path where the YAML calibration file is localted.

    Returns:
        Loaded data from the file: intrinsics parameters matrix K, distortion
            parameters d, and the image size of the calibrated camera.
    '''
    with open(path, 'rb') as f:
        calib_dict = yaml.load(f, Loader=yaml.loader.SafeLoader)

    K_rows = calib_dict['camera_matrix']['rows']
    K_cols = calib_dict['camera_matrix']['cols']
    K = np.array(calib_dict['camera_matrix']['data'], dtype=np.float32).reshape((K_rows, K_cols))

    dist_rows = np.array(calib_dict['distortion_coefficients']['rows'])
    dist_cols = np.array(calib_dict['distortion_coefficients']['cols'])
    dist = np.array(calib_dict['distortion_coefficients']['data'], dtype=np.float32).reshape((dist_rows, dist_cols))

    img_width = calib_dict['image_width']
    img_height = calib_dict['image_height']
    img_shape = (img_height, img_width)

    return K, dist, img_shape

def get_color_image(img, output_shape):
    '''
    Convert a raw polarization image into a gamma corrected, color image.
    This is done by computing the average of the polarization channels, then
    demosaicing the obtained image, and finally applying the gamma correction
    with a gamma factor of 2.2

    Args:
        img: Raw image from an RGB-polarization camera.
        output_shape: Desired output size of the image.

    Returns:
        Demosaiced, gamma corrected image, resized to the given image shape.
    '''
    rows, cols = output_shape[0:2]
    return cv2.resize(img, (cols, rows))

# Some coloring print function
def prRed(skk): print("\033[91m {}\033[00m" .format(skk))
def prGreen(skk): print("\033[92m {}\033[00m" .format(skk))
def prYellow(skk): print("\033[93m {}\033[00m" .format(skk))

def verify_model_dictionary(loaded_dict):
    '''
    Verify that the board model dictionary is well formed. For that, we consider
    that: The two main keys are:

        "board_shape" --> Tuple with the amount of rows and columns of the image
            to generage (board size in cm as ints),

        "number_tags" --> Integer number with the amount of tags included in the
            board.

    Then, there must be as many "tag_i" blocks as the number indicated in
    "number_tags". The index i should go from 1 up to "number_tags".

    Each tag_i block contains the following fields:
        "id" --> ArUco tag id
        "top_left" --> Tuple with two integers indicating the row, column of the
            top left corner of a tag.
        "bottom_right" --> Tuple with two integers indicating the row, column of the
            bottom right corner of a tag.
        "center" --> Tuple with two integers, indicating the row and column of
            the tag.
    '''
    ret_val = True
    tag_keys = [
        "id",
        "top_left",
        "bottom_right",
        "center"
    ]
    if "board_shape" in loaded_dict.keys() and "number_tags" in loaded_dict.keys():
        for i in range(loaded_dict["number_tags"]):
            tag_key = "tag_" + str(i + 1)
            if tag_key in loaded_dict.keys():
                for k in tag_keys:
                    if not k in loaded_dict[tag_key].keys():
                        prRed("ERROR: The tag {} has not the field {}".format(tag_key, k))
                        ret_val = False
            else:
                prRed("ERROR: {} has not been found in the dictionary.".format(tag_key))
                prRed("If we have N tags, we should include the fields tag_i, with i in the range [1, N]")
                ret_val = False
    else:
        prRed("ERROR: The keys board_shape or / and number_tags have not been found.")
        ret_val = False

    return ret_val

def find_valid_range(line):
    values = np.where(line != 0)
    return np.min(values), np.max(values)

def load_board_mask(path):
    '''
    Create a board mask by loading a dictionary with the tags information and
    board shape. Then, with the loaded information, the mask can be warped to
    fit the board position in the current image.

    Args:
        path: Full path to the YAML file that contains the board model data.

    Returns:
        Image of the formed mask, and a dictionary with the central points of
        the tags. Each element of this dictionary has the following shape:
                            id: [row, column]
        where "id" is the ArUco tag ID, and [row, column] are the coordinates of
        the central point of that tag. If the dictionary cannot be loaded or it
        is not well formed, the image is None, and the points dictionary is
        empty.
    '''
    points = {}
    img = None

    if os.path.exists(path) and os.path.isfile(path):
        with open(path, 'rb') as f:
            model_dict = yaml.safe_load(f)

        # We check if the dictionary is well formed.
        if verify_model_dictionary(model_dict):
            prGreen("Dictionary correctly loaded")
            N_tags = model_dict["number_tags"]
            img = np.ones(model_dict["board_shape"], dtype=np.uint8)
            for i in range(N_tags):
                tag_data = model_dict["tag_{}".format(i + 1)]
                points[tag_data["id"]] = np.array(tag_data["center"])
                tl = tag_data["top_left"]
                br = tag_data["bottom_right"]
                img[tl[0]:br[0], tl[1]:br[1]] = 0
    else:
        prRed("ERROR: Cannot load the YAML file {}".format(path))

    # min_row_0, max_row_0 = find_valid_range(img[:,0])
    # min_row_1, max_row_1 = find_valid_range(img[:,-1])
    # min_row = np.max((min_row_0, min_row_1))
    # max_row = np.min((max_row_0, max_row_1))

    # min_col_0, max_col_0 = find_valid_range(img[0, :])
    # min_col_1, max_col_1 = find_valid_range(img[-1, :])
    # min_col = np.max((min_col_0, min_col_1))
    # max_col = np.min((max_col_0, max_col_1))

    # img = np.zeros_like(img, dtype=np.uint8)
    # img[min_row:max_row, min_col:max_col] = 1


    return img, points

def transform_mask(mask, ref_points, tvecs, ids, K, dist, warped_size, output_size):
    '''
    Warp mask to the real board image. The given mask is set to 1 every pixel
    that belongs only to the board, and not to the tags. The tags positions in
    this mask are given too, and with them, the transformation to warp the mask
    into the image is computed. Then, the mask is warped such that we obtain 1s
    only where the board is in the image, and zero in the rest of the image.

    Args:
        mask: Original mask reference. It contains 1s at every pixel where the
            board is, and zeros where the tags are.
        ref_points: Set of 2D points in the mask where the center of the tags
            are. These points will be used as initial positions of the board.
        tvecs: Translation vectors of the tags. It is a set of points in the
            space (3D points), whose projection in the image plane corresponds
            to the transformation of the reference points into the new view.
        ids: ID of the tags. They are used to know how to match the reference
            points with the points in the image.
        K: Intrisics calibration matrix.
        dist: Distorsion coefficients vector.
        warped_size: The size of the image from where the tvecs points have been
            taken.
        output_size: Final size of the mask image.

    Returns:
        Warped, resized image of the forward mask into the image plane.
    '''
    output = np.uint8(np.ones(output_size) * 255.0)
    if not ids is None:
        ids = ids.squeeze()

        # We check if the found points are the ones we expect.
        pts_1 = []
        pts_2 = []
        for k in ref_points.keys():
            if k in ids:
                idx = np.where(ids == k)[0][0]
                pts_1.append(ref_points[k])
                pts_2.append(tvecs[idx].reshape(-1))

        pts_1 = np.array(pts_1, dtype=np.float32)
        pts_2 = np.array(pts_2, dtype=np.float32)

        # If between the found points we have all the reference points, we
        # compute the warping, and resizing.
        if len(pts_1) > 3:
            rvec = np.zeros((3, 1), np.float32)
            tvec = np.zeros((3, 1), np.float32)
            # We project all the ArUco points into the image plane
            pts_2d, _ = cv2.projectPoints(pts_2,
                rvec, tvec,
                K,
                dist)

            pts_2d = pts_2d.squeeze()
            M = cv2.getPerspectiveTransform(np.float32(pts_1), np.float32(pts_2d))
            output = cv2.warpPerspective(mask, M, (warped_size[1], warped_size[0]))
            output = cv2.resize(output, (output_size[1], output_size[0]))

    return output

def write_text_in_image(text):
    '''
    Create an image with just text. The background is white, and the letters are
    in blue.

    Args:
        text: List of strings. Each element of the list is a line in the image.

    Returns:
        Image of 1000 pixels width, and 50 times the amount of lines in the
        text.
    '''
    # font
    font = cv2.FONT_HERSHEY_SIMPLEX

    # fontScale
    fontScale = 1

    # Blue color in BGR
    color = (255, 0, 0)

    # Line thickness of 2 px
    thickness = 2

    prev_baseline = 0
    label_height = 50 * len(text)
    label_width = 1000
    white_board = np.ones((label_height + 10, label_width + 10, 3), dtype=np.uint8) * 255
    for i in range(len(text)):
        (label_width, label_height), _ = cv2.getTextSize(
            text[i],
            font,
            fontScale,
            thickness)

        new_baseline = label_height + prev_baseline + 15
        white_board = cv2.putText(
            white_board,
            text[i],
            (0, new_baseline),
            font,
            fontScale,
            color,
            thickness,
            cv2.LINE_AA)
        prev_baseline = new_baseline

    return white_board
