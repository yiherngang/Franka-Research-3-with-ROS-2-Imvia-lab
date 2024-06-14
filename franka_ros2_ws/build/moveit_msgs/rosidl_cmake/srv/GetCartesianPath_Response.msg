

# The state at which the computed path starts
RobotState start_state

# The computed solution trajectory, for the desired group, in configuration space
RobotTrajectory solution

# If the computation was incomplete, this value indicates the fraction of the path
# that was in fact computed (number of waypoints traveled through)
float64 fraction

# The error code of the computation
MoveItErrorCodes error_code
