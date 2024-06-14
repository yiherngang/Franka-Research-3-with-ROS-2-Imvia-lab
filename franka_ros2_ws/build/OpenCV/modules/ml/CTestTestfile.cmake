# CMake generated Testfile for 
# Source directory: /home/adminlab/franka_ros2_ws/src/opencv/modules/ml
# Build directory: /home/adminlab/franka_ros2_ws/build/OpenCV/modules/ml
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_ml "/home/adminlab/franka_ros2_ws/build/OpenCV/bin/opencv_test_ml" "--gtest_output=xml:opencv_test_ml.xml")
set_tests_properties(opencv_test_ml PROPERTIES  LABELS "Main;opencv_ml;Accuracy" WORKING_DIRECTORY "/home/adminlab/franka_ros2_ws/build/OpenCV/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1375;ocv_add_test_from_target;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1133;ocv_add_accuracy_tests;/home/adminlab/franka_ros2_ws/src/opencv/modules/ml/CMakeLists.txt;2;ocv_define_module;/home/adminlab/franka_ros2_ws/src/opencv/modules/ml/CMakeLists.txt;0;")
