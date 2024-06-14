# A service definition for a standard forward kinematics service
# The frame_id in the header message is the frame in which 
# the forward kinematics poses will be returned
std_msgs/Header header

# A vector of link name for which forward kinematics must be computed
string[] fk_link_names

# A robot state consisting of joint names and joint positions to be used for forward kinematics
RobotState robot_state
