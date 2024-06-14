import cv2
import numpy as np
import os

dirname = os.path.dirname(os.path.realpath(__file__))

# In OpenCV, the pre-defined dictionaries for the ARUCO markers have a pattern
# in their name, consisting of:
#                   DICT_LxL_N
# Where L is the side length of the marker in cm, and N is the maximum amount of
# different markers we can create. We created this dictionary to easily extract
# L and N based on the key used.
aruco_dict_parser = {
    cv2.aruco.DICT_4X4_50 :   (4, 50),
    cv2.aruco.DICT_4X4_100 :  (4, 100),
    cv2.aruco.DICT_4X4_250 :  (4, 250),
    cv2.aruco.DICT_4X4_1000 : (4, 1000),
    cv2.aruco.DICT_5X5_50 :   (5, 50),
    cv2.aruco.DICT_5X5_100 :  (5, 100),
    cv2.aruco.DICT_5X5_250 :  (5, 250),
    cv2.aruco.DICT_5X5_1000 : (5, 1000),
    cv2.aruco.DICT_6X6_50 :   (6, 50),
    cv2.aruco.DICT_6X6_100 :  (6, 100),
    cv2.aruco.DICT_6X6_250 :  (6, 250),
    cv2.aruco.DICT_6X6_1000 : (6, 1000),
    cv2.aruco.DICT_7X7_50 :   (7, 50),
    cv2.aruco.DICT_7X7_100 :  (7, 100),
    cv2.aruco.DICT_7X7_250 :  (7, 250),
    cv2.aruco.DICT_7X7_1000 : (7, 1000),
}

class ArucoHandler(object):
    '''
    Class to handle the generation, and detection of ArUco markers. We use the
    default configuration and parameters available in OpenCV. The dictionary can
    be changed to one of the options in the aruco_dict_parser variable.

    Once the dictionary defined, we can generate different markers by providing
    their ids. Finally, if the camera is calibrated, we can detect the arUco
    markers and estimate their relative pose with respect to the camera frame of
    coordinates.
    '''
    def __init__(self, dictionary_used = cv2.aruco.DICT_7X7_50, debug = True):
        '''
        Constructor

        Args:
            dictionary_used: One of the OpenCV pre-defined ArUco markers
                dictionaries. If the provided value is not one of the possible
                options, an assertion is thrown.
        '''
        # Sanity check
        assert(dictionary_used in aruco_dict_parser.keys())

        self.dictionary_used = dictionary_used
        self.aruco_detector = None
        self.debug = debug

    def generate_markers_dictionary(self, N, output_path):
        '''
        Create ArUco markers images from the chosen pre-defined markers
        dictionary. The created markers will be stored in disk as images.
        Each generated marker will be briefly shown.

        Args:
            N: Amount of markers to create. The markers ids from 0 until N - 1
                included will be generated and stored.
            output_path: Path to the directory where the markers will be stored.
                All the markers will be saved in a directory called
                'generated_markers', inside output_path.
        '''
        # Sanity check
        _, max_N = aruco_dict_parser[self.dictionary_used]
        assert(N < max_N)

        dictionary = cv2.aruco.getPredefinedDictionary(self.dictionary_used)

        # If the given path does not exists, we create it.
        output_dir = os.path.join(output_path, 'generated_markers')
        os.makedirs(output_dir, exist_ok=True)

        for i in range(N):
            marker_img = cv2.aruco.generateImageMarker(
                dictionary,
                id=i,
                sidePixels=200,
                borderBits=1)
            cv2.imwrite(os.path.join(output_dir, 'marker_{:02d}.png'.format(i)), marker_img)

            cv2.namedWindow('Marker {:02d}'.format(i), cv2.WINDOW_NORMAL)
            cv2.imshow('Marker {:02d}'.format(i), marker_img)
            cv2.waitKey(500)
        cv2.destroyAllWindows()

    def initialize_detector(self):
        '''
        Initialize the ArUco marker detector objects. This function should be
        called before detecting the markers or their pose.
        '''
        detectorParams = cv2.aruco.DetectorParameters()
        dictionary = cv2.aruco.getPredefinedDictionary(self.dictionary_used)
        self.aruco_detector = cv2.aruco.ArucoDetector(dictionary, detectorParams)

    def detect_markers(self, raw_image):
        '''
        Find ArUco markers in the given image. The markers used should be part
        of the chosen dictionary during construction.

        Args:
            raw_image: Image from the camera to analyze. This image is supposed
                to be undistorted by the calibration matrix.

        Returns:
            Three elements: the detected markers corners, their ids, and an
            image with the detected markers enclosed by a square, and with the
            corresponding ID on it.
        '''
        markerCorners = None
        markerIds = None
        detected_markers_img = None

        if not self.aruco_detector is None:
            markerCorners, markerIds, rejectedCandidates = self.aruco_detector.detectMarkers(raw_image)
            # If the input image is grayscale, we convert it into a color image
            # to see the markers in color.
            if len(raw_image.shape) == 2:
                raw_image = cv2.cvtColor(raw_image, cv2.COLOR_GRAY2BGR)

            detected_markers_img = cv2.aruco.drawDetectedMarkers(raw_image, markerCorners, markerIds)
        else:
            print('ERROR: Before detecting the markers, you need to initialize the detector.')
            assert(0)

        return markerCorners, markerIds, detected_markers_img

    def detect_markers_and_pose(self, raw_image, K, dist_coeff):
        '''
        Detect the ArUco markers in the image, and if there is any, their
        relative pose w.r.t. the CCF are estimated.

        Args:
            raw_image: Image from the camera to analyze. This image is supposed
                to be undistorted by the calibration matrix.
            K: Intrinsics parameters of the camera used.
            dist_coeff: Distortion coefficients of the camera used.

        Returns:
            Four elements: The rotation and translation vectors for each marker,
            the corresponding ID, and an image with the coordinate frame drawn
            over each marker.
        '''
        markersRotAnglesRad = []
        markersTranslCm = []
        detected_markers_img = None
        detected_markers_img = raw_image

        # We decode the Aruco dictionary name into its length and the maximum
        # amount of ids we can create
        marker_length, _ = aruco_dict_parser[self.dictionary_used]

        # Define the marker corners
        objPoints = np.array([[-marker_length / 2.0,  marker_length / 2.0, 0],
                              [ marker_length / 2.0,  marker_length / 2.0, 0],
                              [ marker_length / 2.0, -marker_length / 2.0, 0],
                              [-marker_length / 2.0, -marker_length / 2.0, 0]], dtype=np.float64)


        if not self.aruco_detector is None:
            # We detect the markers
            markerCorners, markerIds, rejectedCandidates = self.aruco_detector.detectMarkers(raw_image)
            if markerCorners:
                nMarkers = len(markerCorners)

                # If the input image is grayscale, we convert it into a color image
                # to see the markers in color.
                if len(detected_markers_img.shape) == 2:
                    detected_markers_img = cv2.cvtColor(detected_markers_img, cv2.COLOR_GRAY2BGR)

                # Calculate pose for each marker
                for i in range(nMarkers):
                    retval, rvec, tvec = cv2.solvePnP(
                        objPoints,
                        markerCorners[i],
                        K,
                        dist_coeff)

                    if retval:
                        if self.debug:
                            print("Marker: {} - Rot vector: {} - Translation: {}".format(
                                markerIds[i][0],
                                rvec.reshape(-1) * (180.0 / np.pi),
                                tvec.reshape(-1)))

                        # Draw axis for each marker
                        detected_markers_img = cv2.drawFrameAxes(detected_markers_img,
                            cameraMatrix=K,
                            distCoeffs=dist_coeff,
                            rvec=rvec,
                            tvec=tvec,
                            length=5,
                            thickness=10)

                        markersRotAnglesRad.append(rvec)
                        markersTranslCm.append(tvec)
        else:
            print('ERROR: Before detecting the markers, you need to initialize the detector.')
            assert(0)

        return np.array(markersRotAnglesRad), np.array(markersTranslCm), markerIds, detected_markers_img