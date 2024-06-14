# CMake generated Testfile for 
# Source directory: /home/adminlab/franka_ros2_ws/src/opencv/modules/gapi
# Build directory: /home/adminlab/franka_ros2_ws/build/OpenCV/modules/gapi
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_gapi "/home/adminlab/franka_ros2_ws/build/OpenCV/bin/opencv_test_gapi" "--gtest_output=xml:opencv_test_gapi.xml")
set_tests_properties(opencv_test_gapi PROPERTIES  LABELS "Main;opencv_gapi;Accuracy" WORKING_DIRECTORY "/home/adminlab/franka_ros2_ws/build/OpenCV/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1375;ocv_add_test_from_target;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;292;ocv_add_accuracy_tests;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;0;")
add_test(opencv_perf_gapi "/home/adminlab/franka_ros2_ws/build/OpenCV/bin/opencv_perf_gapi" "--gtest_output=xml:opencv_perf_gapi.xml")
set_tests_properties(opencv_perf_gapi PROPERTIES  LABELS "Main;opencv_gapi;Performance" WORKING_DIRECTORY "/home/adminlab/franka_ros2_ws/build/OpenCV/test-reports/performance" _BACKTRACE_TRIPLES "/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1274;ocv_add_test_from_target;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;401;ocv_add_perf_tests;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;0;")
add_test(opencv_sanity_gapi "/home/adminlab/franka_ros2_ws/build/OpenCV/bin/opencv_perf_gapi" "--gtest_output=xml:opencv_perf_gapi.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_gapi PROPERTIES  LABELS "Main;opencv_gapi;Sanity" WORKING_DIRECTORY "/home/adminlab/franka_ros2_ws/build/OpenCV/test-reports/sanity" _BACKTRACE_TRIPLES "/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVUtils.cmake;1795;add_test;/home/adminlab/franka_ros2_ws/src/opencv/cmake/OpenCVModule.cmake;1275;ocv_add_test_from_target;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;401;ocv_add_perf_tests;/home/adminlab/franka_ros2_ws/src/opencv/modules/gapi/CMakeLists.txt;0;")
