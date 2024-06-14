
set(BUILD_SHARED_LIBS "ON")

set(CMAKE_BINARY_DIR "/home/adminlab/franka_ros2_ws/build/VISP")

set(CMAKE_INSTALL_PREFIX "/home/adminlab/franka_ros2_ws/install/VISP")

set(BINARY_OUTPUT_PATH "/home/adminlab/franka_ros2_ws/build/VISP/bin")

set(VISP_SOURCE_DIR "/home/adminlab/franka_ros2_ws/src/visp")

set(VISP_VERSION "3.6.1")

set(VISP_BINARY_DIR "/home/adminlab/franka_ros2_ws/build/VISP")

set(VISP_LIB_INSTALL_PATH "lib")

set(VISP_BIN_INSTALL_PATH "bin")

set(VISP_INC_INSTALL_PATH "include")

set(VISP_3P_LIB_INSTALL_PATH "lib/visp/3rdparty")

set(VISP_DEBUG_POSTFIX "")

set(VISP_ARCH "")

set(VISP_RUNTIME "")

set(VISP_HAVE_OPENMP "TRUE")

set(WITH_CATCH2 "ON")

set(WITH_PUGIXML "ON")

set(WITH_SIMDLIB "ON")

set(WITH_STBIMAGE "ON")

set(WITH_TINYEXR "ON")

set(FILE_VISP_SCRIPT_CONFIG "/home/adminlab/franka_ros2_ws/build/VISP/bin/visp-config")

set(FILE_VISP_SCRIPT_CONFIG_INSTALL "/home/adminlab/franka_ros2_ws/build/VISP/unix-install/visp-config")

set(FILE_VISP_SCRIPT_PC_INSTALL "/home/adminlab/franka_ros2_ws/build/VISP/unix-install/visp.pc")

set(_cxx_flags "-fopenmp;-std=c++17")

set(_includes_modules "/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/tt_mi/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/tt/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/mbt/include;/home/adminlab/franka_ros2_ws/src/visp/modules/detection/include;/home/adminlab/franka_ros2_ws/src/visp/modules/vision/include;/home/adminlab/franka_ros2_ws/src/visp/modules/vs/include;/home/adminlab/franka_ros2_ws/src/visp/modules/visual_features/include;/home/adminlab/franka_ros2_ws/src/visp/modules/robot/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/blob/include;/home/adminlab/franka_ros2_ws/src/visp/modules/ar/include;/home/adminlab/franka_ros2_ws/src/visp/modules/sensor/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/me/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/klt/include;/home/adminlab/franka_ros2_ws/src/visp/modules/io/include;/home/adminlab/franka_ros2_ws/src/visp/modules/imgproc/include;/home/adminlab/franka_ros2_ws/src/visp/modules/gui/include;/home/adminlab/franka_ros2_ws/src/visp/modules/tracker/dnn/include;/home/adminlab/franka_ros2_ws/src/visp/modules/core/include")

set(_includes_extra "/usr/local/include/opencv4;/usr/include/eigen3;/usr/include/libxml2;/usr/include;/usr/include/pcl-1.12;/usr/include/ni;/usr/include/openni2;/usr/include/vtk-9.1;/usr/include/libusb-1.0;/usr/local/include;/usr/include/OGRE/")

set(_system_include_dirs "/usr/include/c++/11;/usr/include/x86_64-linux-gnu/c++/11;/usr/include/c++/11/backward;/usr/lib/gcc/x86_64-linux-gnu/11/include;/usr/local/include;/usr/include/x86_64-linux-gnu;/usr/include")

set(_modules "visp_detection;visp_imgproc;visp_robot;visp_sensor;visp_dnn_tracker;visp_mbt;visp_ar;visp_klt;visp_gui;visp_tt_mi;visp_tt;visp_vision;visp_io;visp_vs;visp_visual_features;visp_blob;visp_me;visp_core")

set(_extra_opt "/usr/lib/x86_64-linux-gnu/libOgreMain.so;/usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0;/usr/local/lib/libopencv_core.so.4.10.0;/usr/local/lib/libopencv_imgproc.so.4.10.0;/usr/local/lib/libopencv_highgui.so.4.10.0;/usr/local/lib/libopencv_calib3d.so.4.10.0;/usr/local/lib/libopencv_features2d.so.4.10.0;/usr/lib/x86_64-linux-gnu/liblapack.so;/usr/lib/x86_64-linux-gnu/libblas.so;/usr/lib/x86_64-linux-gnu/libxml2.so;/usr/lib/gcc/x86_64-linux-gnu/11/libgomp.so;/usr/lib/x86_64-linux-gnu/libzbar.so;/usr/local/lib/libopencv_objdetect.so.4.10.0;/usr/local/lib/libopencv_dnn.so.4.10.0;/usr/local/lib/libopencv_videoio.so.4.10.0;/usr/local/lib/libopencv_imgcodecs.so.4.10.0;/usr/lib/libfranka.so.0.13.2;/usr/lib/x86_64-linux-gnu/libv4l2.so;/usr/lib/x86_64-linux-gnu/libv4lconvert.so;/usr/lib/x86_64-linux-gnu/libdc1394.so;/usr/lib/x86_64-linux-gnu/libusb-1.0.so;/usr/local/lib/librealsense2.so;/usr/local/lib/libopencv_video.so.4.10.0;/usr/lib/x86_64-linux-gnu/libpcl_apps.so;/usr/lib/x86_64-linux-gnu/libpcl_outofcore.so;/usr/lib/x86_64-linux-gnu/libpcl_people.so;/usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.74.0;/usr/lib/x86_64-linux-gnu/libvtkChartsCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonColor-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonMath-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonMisc-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersSources-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkImagingCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkImagingSources-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionImage-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOImage-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOLegacy-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOPLY-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkViewsCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libflann_cpp.so;/usr/lib/x86_64-linux-gnu/libpcl_common.so;/usr/lib/x86_64-linux-gnu/libpcl_kdtree.so;/usr/lib/x86_64-linux-gnu/libpcl_octree.so;/usr/lib/x86_64-linux-gnu/libpcl_search.so;/usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so;/usr/lib/libOpenNI.so;/usr/lib/x86_64-linux-gnu/libOpenNI2.so;/usr/lib/x86_64-linux-gnu/libpng.so;/usr/lib/x86_64-linux-gnu/libz.so;/usr/lib/x86_64-linux-gnu/libpcl_filters.so;/usr/lib/x86_64-linux-gnu/libpcl_features.so;/usr/lib/x86_64-linux-gnu/libpcl_ml.so;/usr/lib/x86_64-linux-gnu/libpcl_io.so;/usr/lib/x86_64-linux-gnu/libpcl_registration.so;/usr/lib/x86_64-linux-gnu/libpcl_segmentation.so;/usr/lib/x86_64-linux-gnu/libpcl_visualization.so;/usr/lib/x86_64-linux-gnu/libpcl_surface.so;/usr/lib/x86_64-linux-gnu/libpcl_keypoints.so;/usr/lib/x86_64-linux-gnu/libpcl_tracking.so;/usr/lib/x86_64-linux-gnu/libpcl_recognition.so;/usr/lib/x86_64-linux-gnu/libpcl_stereo.so;/usr/lib/x86_64-linux-gnu/libvtksys-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libtbb.so.12.5;/usr/lib/x86_64-linux-gnu/libvtkkissfft-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingUI-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3;/usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3;/usr/lib/x86_64-linux-gnu/liblz4.so;/usr/lib/x86_64-linux-gnu/libqhull_r.so.8.0.2;/usr/lib/x86_64-linux-gnu/libOpenGL.so;/usr/lib/x86_64-linux-gnu/libGLX.so;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/local/lib/libopencv_flann.so.4.10.0")

set(_extra_dbg "/usr/lib/x86_64-linux-gnu/libOgreMain.so;/usr/lib/x86_64-linux-gnu/libboost_thread.so.1.74.0;/usr/local/lib/libopencv_core.so.4.10.0;/usr/local/lib/libopencv_imgproc.so.4.10.0;/usr/local/lib/libopencv_highgui.so.4.10.0;/usr/local/lib/libopencv_calib3d.so.4.10.0;/usr/local/lib/libopencv_features2d.so.4.10.0;/usr/lib/x86_64-linux-gnu/liblapack.so;/usr/lib/x86_64-linux-gnu/libblas.so;/usr/lib/x86_64-linux-gnu/libxml2.so;/usr/lib/gcc/x86_64-linux-gnu/11/libgomp.so;/usr/lib/x86_64-linux-gnu/libzbar.so;/usr/local/lib/libopencv_objdetect.so.4.10.0;/usr/local/lib/libopencv_dnn.so.4.10.0;/usr/local/lib/libopencv_videoio.so.4.10.0;/usr/local/lib/libopencv_imgcodecs.so.4.10.0;/usr/lib/libfranka.so.0.13.2;/usr/lib/x86_64-linux-gnu/libv4l2.so;/usr/lib/x86_64-linux-gnu/libv4lconvert.so;/usr/lib/x86_64-linux-gnu/libdc1394.so;/usr/lib/x86_64-linux-gnu/libusb-1.0.so;/usr/local/lib/librealsense2.so;/usr/local/lib/libopencv_video.so.4.10.0;/usr/lib/x86_64-linux-gnu/libpcl_apps.so;/usr/lib/x86_64-linux-gnu/libpcl_outofcore.so;/usr/lib/x86_64-linux-gnu/libpcl_people.so;/usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0;/usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.74.0;/usr/lib/x86_64-linux-gnu/libvtkChartsCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonColor-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonMath-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonMisc-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkFiltersSources-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkImagingCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkImagingSources-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionImage-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOGeometry-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOImage-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOLegacy-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkIOPLY-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkViewsCore-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libflann_cpp.so;/usr/lib/x86_64-linux-gnu/libpcl_common.so;/usr/lib/x86_64-linux-gnu/libpcl_kdtree.so;/usr/lib/x86_64-linux-gnu/libpcl_octree.so;/usr/lib/x86_64-linux-gnu/libpcl_search.so;/usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so;/usr/lib/libOpenNI.so;/usr/lib/x86_64-linux-gnu/libOpenNI2.so;/usr/lib/x86_64-linux-gnu/libpng.so;/usr/lib/x86_64-linux-gnu/libz.so;/usr/lib/x86_64-linux-gnu/libpcl_filters.so;/usr/lib/x86_64-linux-gnu/libpcl_features.so;/usr/lib/x86_64-linux-gnu/libpcl_ml.so;/usr/lib/x86_64-linux-gnu/libpcl_io.so;/usr/lib/x86_64-linux-gnu/libpcl_registration.so;/usr/lib/x86_64-linux-gnu/libpcl_segmentation.so;/usr/lib/x86_64-linux-gnu/libpcl_visualization.so;/usr/lib/x86_64-linux-gnu/libpcl_surface.so;/usr/lib/x86_64-linux-gnu/libpcl_keypoints.so;/usr/lib/x86_64-linux-gnu/libpcl_tracking.so;/usr/lib/x86_64-linux-gnu/libpcl_recognition.so;/usr/lib/x86_64-linux-gnu/libpcl_stereo.so;/usr/lib/x86_64-linux-gnu/libvtksys-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libtbb.so.12.5;/usr/lib/x86_64-linux-gnu/libvtkkissfft-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libvtkRenderingUI-9.1.so.9.1.0;/usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3;/usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3;/usr/lib/x86_64-linux-gnu/liblz4.so;/usr/lib/x86_64-linux-gnu/libqhull_r.so.8.0.2;/usr/lib/x86_64-linux-gnu/libOpenGL.so;/usr/lib/x86_64-linux-gnu/libGLX.so;/usr/lib/x86_64-linux-gnu/libGLU.so;/usr/local/lib/libopencv_flann.so.4.10.0")

set(_3rdparty "")

set(TARGET_LOCATION_visp_detection "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_detection.so.3.6.1")

set(TARGET_LOCATION_visp_imgproc "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_imgproc.so.3.6.1")

set(TARGET_LOCATION_visp_robot "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_robot.so.3.6.1")

set(TARGET_LOCATION_visp_sensor "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_sensor.so.3.6.1")

set(TARGET_LOCATION_visp_dnn_tracker "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_dnn_tracker.so.3.6.1")

set(TARGET_LOCATION_visp_mbt "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_mbt.so.3.6.1")

set(TARGET_LOCATION_visp_ar "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_ar.so.3.6.1")

set(TARGET_LOCATION_visp_klt "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_klt.so.3.6.1")

set(TARGET_LOCATION_visp_gui "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_gui.so.3.6.1")

set(TARGET_LOCATION_visp_tt_mi "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_tt_mi.so.3.6.1")

set(TARGET_LOCATION_visp_tt "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_tt.so.3.6.1")

set(TARGET_LOCATION_visp_vision "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_vision.so.3.6.1")

set(TARGET_LOCATION_visp_io "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_io.so.3.6.1")

set(TARGET_LOCATION_visp_vs "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_vs.so.3.6.1")

set(TARGET_LOCATION_visp_visual_features "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_visual_features.so.3.6.1")

set(TARGET_LOCATION_visp_blob "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_blob.so.3.6.1")

set(TARGET_LOCATION_visp_me "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_me.so.3.6.1")

set(TARGET_LOCATION_visp_core "/home/adminlab/franka_ros2_ws/build/VISP/lib/libvisp_core.so.3.6.1")
