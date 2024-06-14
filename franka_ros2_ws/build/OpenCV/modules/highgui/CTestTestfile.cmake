# CMake generated Testfile for 
# Source directory: /home/adminlab/franka_ros2_ws/src/opencv/modules/highgui
# Build directory: /home/adminlab/franka_ros2_ws/build/OpenCV/modules/highgui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_highgui "/home/adminlab/franka_ros2_ws/build/OpenCV/bin/opencv_test_highgui" "--gtest_output=xml:opencv_test_highgui.xml")
set_tests_properties(opencv_test_highgui PROPERTIES  LABELS "Main;opencv_highgui;Accuracy" WORKING_DIRECTORY "/home/adminlab/franka_ros2_ws/build/OpenCV/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1375;ocv_add_test_from_target;/home/adminlab/franka_ros2_ws/src/opencv/modules/highgui/CMakeLists.txt;309;ocv_add_accuracy_tests;/home/adminlab/franka_ros2_ws/src/opencv/modules/highgui/CMakeLists.txt;0;")
