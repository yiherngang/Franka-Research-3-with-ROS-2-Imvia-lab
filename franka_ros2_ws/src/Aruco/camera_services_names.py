'''
CameraServicesNames class: It holds all the names of the useful topics / services
availables in the server.

It will also define the constant that we require to change or request parameters
in the camera.
'''
class CameraServicesNames(object):
    def __init__(self, camera_name):
        if camera_name and camera_name[0] != '/':
            camera_name = '/' + camera_name

        self.request_camera_state_topic = camera_name + '/camera_request_params_topic'
        self.camera_state_topic = camera_name + '/camera_state_topic'

        self.temperature_topic = camera_name + '/camera_temp_topic'
        self.image_raw_topic = camera_name + '/camera_image_topic'

        self.service_is_alive = camera_name + '/camera_is_alive_srv'
        self.service_request_single_param = camera_name + '/camera_request_single_param_srv'

        ## Params to change values:
        self.ALL = 0
        self.AUTO_EXPOSURE = 1
        self.AUTO_GAIN = 2
        self.AUTO_WHITE_BALANCE = 3
        self.FRAME_RATE = 4
        self.EXPOSURE_TIME = 5
        self.GAIN = 6
        self.WHITE_BALANCE_GAINS = 7

        self.service_set_params = camera_name + '/camera_set_params_service'
