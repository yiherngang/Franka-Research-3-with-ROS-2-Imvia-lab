//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_OBJDETECT

#include <string>

#include "opencv2/objdetect.hpp"

#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/face.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/aruco_detector.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/detection_based_tracker.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/charuco_detector.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/graphical_code_detector.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/aruco_dictionary.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/aruco_board.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/objdetect/include/opencv2/objdetect/barcode.hpp"

#define LOG_TAG "org.opencv.objdetect"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_objdetect
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}

extern "C" {


//
//  native support for java finalize()
//  static void Ptr<cv::BaseCascadeClassifier>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_BaseCascadeClassifier_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_BaseCascadeClassifier_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::BaseCascadeClassifier>*) self;
}


//
//   cv::CascadeClassifier::CascadeClassifier()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::CascadeClassifier_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier> _retval_ = makePtr<cv::CascadeClassifier>();
        return (jlong)(new Ptr<cv::CascadeClassifier>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::CascadeClassifier::CascadeClassifier(String filename)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CascadeClassifier_CascadeClassifier_11
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "objdetect::CascadeClassifier_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr<cv::CascadeClassifier> _retval_ = makePtr<cv::CascadeClassifier>( n_filename );
        return (jlong)(new Ptr<cv::CascadeClassifier>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::CascadeClassifier::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::empty_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        return (*me)->empty();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::CascadeClassifier::load(String filename)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_load_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    
    static const char method_name[] = "objdetect::load_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return (*me)->load( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        (*me)->detectMultiScale( image, objects, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        (*me)->detectMultiScale( image, objects, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, (double)scaleFactor, (int)minNeighbors, (int)flags );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_13 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor, jint minNeighbors)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, (double)scaleFactor, (int)minNeighbors );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_14 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_14
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jdouble scaleFactor)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, (double)scaleFactor );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_15 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale_15
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects );
        vector_Rect_to_Mat( objects, objects_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int& numDetections, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        (*me)->detectMultiScale( image, objects, numDetections, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        (*me)->detectMultiScale( image, objects, numDetections, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, numDetections, (double)scaleFactor, (int)minNeighbors, (int)flags );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj, jdouble scaleFactor, jint minNeighbors)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, numDetections, (double)scaleFactor, (int)minNeighbors );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_14
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj, jdouble scaleFactor)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, numDetections, (double)scaleFactor );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_15 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale2_15
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong numDetections_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectMultiScale2_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> numDetections;
        Mat& numDetections_mat = *((Mat*)numDetections_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, numDetections );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( numDetections, numDetections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::CascadeClassifier::detectMultiScale(Mat image, vector_Rect& objects, vector_int& rejectLevels, vector_double& levelWeights, double scaleFactor = 1.1, int minNeighbors = 3, int flags = 0, Size minSize = Size(), Size maxSize = Size(), bool outputRejectLevels = false)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height, jboolean outputRejectLevels)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize, (bool)outputRejectLevels );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height, jdouble maxSize_width, jdouble maxSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        Size maxSize((int)maxSize_width, (int)maxSize_height);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize, maxSize );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint, jint, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags, jdouble minSize_width, jdouble minSize_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Size minSize((int)minSize_width, (int)minSize_height);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors, (int)flags, minSize );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors, jint flags)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors, (int)flags );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_14
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor, jint minNeighbors)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor, (int)minNeighbors );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_15 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_15
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj, jdouble scaleFactor)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights, (double)scaleFactor );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_16 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_detectMultiScale3_16
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong objects_mat_nativeObj, jlong rejectLevels_mat_nativeObj, jlong levelWeights_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectMultiScale3_16()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> objects;
        Mat& objects_mat = *((Mat*)objects_mat_nativeObj);
        std::vector<int> rejectLevels;
        Mat& rejectLevels_mat = *((Mat*)rejectLevels_mat_nativeObj);
        std::vector<double> levelWeights;
        Mat& levelWeights_mat = *((Mat*)levelWeights_mat_nativeObj);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->detectMultiScale( image, objects, rejectLevels, levelWeights );
        vector_Rect_to_Mat( objects, objects_mat );
        vector_int_to_Mat( rejectLevels, rejectLevels_mat );
        vector_double_to_Mat( levelWeights, levelWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::CascadeClassifier::isOldFormatCascade()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_isOldFormatCascade_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_isOldFormatCascade_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::isOldFormatCascade_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        return (*me)->isOldFormatCascade();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size cv::CascadeClassifier::getOriginalWindowSize()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_CascadeClassifier_getOriginalWindowSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_CascadeClassifier_getOriginalWindowSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getOriginalWindowSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getOriginalWindowSize();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::CascadeClassifier::getFeatureType()
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_CascadeClassifier_getFeatureType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_CascadeClassifier_getFeatureType_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getFeatureType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::CascadeClassifier>* me = (Ptr<cv::CascadeClassifier>*) self; //TODO: check for NULL
        return (*me)->getFeatureType();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static bool cv::CascadeClassifier::convert(String oldcascade, String newcascade)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_convert_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CascadeClassifier_convert_10
  (JNIEnv* env, jclass , jstring oldcascade, jstring newcascade)
{
    
    static const char method_name[] = "objdetect::convert_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_oldcascade = env->GetStringUTFChars(oldcascade, 0); String n_oldcascade( utf_oldcascade ? utf_oldcascade : "" ); env->ReleaseStringUTFChars(oldcascade, utf_oldcascade);
        const char* utf_newcascade = env->GetStringUTFChars(newcascade, 0); String n_newcascade( utf_newcascade ? utf_newcascade : "" ); env->ReleaseStringUTFChars(newcascade, utf_newcascade);
        return cv::CascadeClassifier::convert( n_oldcascade, n_newcascade );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::CascadeClassifier>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CascadeClassifier_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::CascadeClassifier>*) self;
}


//
//  void cv::FaceDetectorYN::setInputSize(Size input_size)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setInputSize_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setInputSize_10
  (JNIEnv* env, jclass , jlong self, jdouble input_size_width, jdouble input_size_height)
{
    
    static const char method_name[] = "objdetect::setInputSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        Size input_size((int)input_size_width, (int)input_size_height);
        (*me)->setInputSize( input_size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Size cv::FaceDetectorYN::getInputSize()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getInputSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getInputSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getInputSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->getInputSize();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FaceDetectorYN::setScoreThreshold(float score_threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setScoreThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setScoreThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat score_threshold)
{
    
    static const char method_name[] = "objdetect::setScoreThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        (*me)->setScoreThreshold( (float)score_threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::FaceDetectorYN::getScoreThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getScoreThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getScoreThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getScoreThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        return (*me)->getScoreThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FaceDetectorYN::setNMSThreshold(float nms_threshold)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setNMSThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setNMSThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat nms_threshold)
{
    
    static const char method_name[] = "objdetect::setNMSThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        (*me)->setNMSThreshold( (float)nms_threshold );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::FaceDetectorYN::getNMSThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getNMSThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getNMSThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getNMSThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        return (*me)->getNMSThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::FaceDetectorYN::setTopK(int top_k)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setTopK_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_setTopK_10
  (JNIEnv* env, jclass , jlong self, jint top_k)
{
    
    static const char method_name[] = "objdetect::setTopK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        (*me)->setTopK( (int)top_k );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::FaceDetectorYN::getTopK()
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getTopK_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_FaceDetectorYN_getTopK_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getTopK_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        return (*me)->getTopK();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::FaceDetectorYN::detect(Mat image, Mat& faces)
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_FaceDetectorYN_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_FaceDetectorYN_detect_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong faces_nativeObj)
{
    
    static const char method_name[] = "objdetect::detect_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceDetectorYN>* me = (Ptr<cv::FaceDetectorYN>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& faces = *((Mat*)faces_nativeObj);
        return (*me)->detect( image, faces );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_FaceDetectorYN cv::FaceDetectorYN::create(String model, String config, Size input_size, float score_threshold = 0.9f, float nms_threshold = 0.3f, int top_k = 5000, int backend_id = 0, int target_id = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_10 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble, jfloat, jfloat, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_10
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k, jint backend_id, jint target_id)
{
    
    static const char method_name[] = "objdetect::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k, (int)backend_id, (int)target_id );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_11 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble, jfloat, jfloat, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_11
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k, jint backend_id)
{
    
    static const char method_name[] = "objdetect::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k, (int)backend_id );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_12 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble, jfloat, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_12
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k)
{
    
    static const char method_name[] = "objdetect::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_13 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_13
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold)
{
    
    static const char method_name[] = "objdetect::create_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size, (float)score_threshold, (float)nms_threshold );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_14 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_14
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold)
{
    
    static const char method_name[] = "objdetect::create_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size, (float)score_threshold );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_15 (JNIEnv*, jclass, jstring, jstring, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_15
  (JNIEnv* env, jclass , jstring model, jstring config, jdouble input_size_width, jdouble input_size_height)
{
    
    static const char method_name[] = "objdetect::create_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_model, n_config, input_size );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_FaceDetectorYN cv::FaceDetectorYN::create(String framework, vector_uchar bufferModel, vector_uchar bufferConfig, Size input_size, float score_threshold = 0.9f, float nms_threshold = 0.3f, int top_k = 5000, int backend_id = 0, int target_id = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_16 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble, jfloat, jfloat, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_16
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k, jint backend_id, jint target_id)
{
    
    static const char method_name[] = "objdetect::create_16()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k, (int)backend_id, (int)target_id );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_17 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble, jfloat, jfloat, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_17
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k, jint backend_id)
{
    
    static const char method_name[] = "objdetect::create_17()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k, (int)backend_id );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_18 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble, jfloat, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_18
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold, jint top_k)
{
    
    static const char method_name[] = "objdetect::create_18()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size, (float)score_threshold, (float)nms_threshold, (int)top_k );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_19 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_19
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold, jfloat nms_threshold)
{
    
    static const char method_name[] = "objdetect::create_19()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size, (float)score_threshold, (float)nms_threshold );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_110 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_110
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height, jfloat score_threshold)
{
    
    static const char method_name[] = "objdetect::create_110()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size, (float)score_threshold );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_111 (JNIEnv*, jclass, jstring, jlong, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceDetectorYN_create_111
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj, jdouble input_size_width, jdouble input_size_height)
{
    
    static const char method_name[] = "objdetect::create_111()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        typedef Ptr<cv::FaceDetectorYN> Ptr_FaceDetectorYN;
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        Size input_size((int)input_size_width, (int)input_size_height);
        Ptr_FaceDetectorYN _retval_ = cv::FaceDetectorYN::create( n_framework, bufferModel, bufferConfig, input_size );
        return (jlong)(new Ptr_FaceDetectorYN(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::FaceDetectorYN>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceDetectorYN_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::FaceDetectorYN>*) self;
}


//
//  void cv::FaceRecognizerSF::alignCrop(Mat src_img, Mat face_box, Mat& aligned_img)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_alignCrop_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_alignCrop_10
  (JNIEnv* env, jclass , jlong self, jlong src_img_nativeObj, jlong face_box_nativeObj, jlong aligned_img_nativeObj)
{
    
    static const char method_name[] = "objdetect::alignCrop_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceRecognizerSF>* me = (Ptr<cv::FaceRecognizerSF>*) self; //TODO: check for NULL
        Mat& src_img = *((Mat*)src_img_nativeObj);
        Mat& face_box = *((Mat*)face_box_nativeObj);
        Mat& aligned_img = *((Mat*)aligned_img_nativeObj);
        (*me)->alignCrop( src_img, face_box, aligned_img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::FaceRecognizerSF::feature(Mat aligned_img, Mat& face_feature)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_feature_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_feature_10
  (JNIEnv* env, jclass , jlong self, jlong aligned_img_nativeObj, jlong face_feature_nativeObj)
{
    
    static const char method_name[] = "objdetect::feature_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceRecognizerSF>* me = (Ptr<cv::FaceRecognizerSF>*) self; //TODO: check for NULL
        Mat& aligned_img = *((Mat*)aligned_img_nativeObj);
        Mat& face_feature = *((Mat*)face_feature_nativeObj);
        (*me)->feature( aligned_img, face_feature );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  double cv::FaceRecognizerSF::match(Mat face_feature1, Mat face_feature2, int dis_type = FaceRecognizerSF::FR_COSINE)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_match_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_match_10
  (JNIEnv* env, jclass , jlong self, jlong face_feature1_nativeObj, jlong face_feature2_nativeObj, jint dis_type)
{
    
    static const char method_name[] = "objdetect::match_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceRecognizerSF>* me = (Ptr<cv::FaceRecognizerSF>*) self; //TODO: check for NULL
        Mat& face_feature1 = *((Mat*)face_feature1_nativeObj);
        Mat& face_feature2 = *((Mat*)face_feature2_nativeObj);
        return (*me)->match( face_feature1, face_feature2, (int)dis_type );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_match_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_match_11
  (JNIEnv* env, jclass , jlong self, jlong face_feature1_nativeObj, jlong face_feature2_nativeObj)
{
    
    static const char method_name[] = "objdetect::match_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::FaceRecognizerSF>* me = (Ptr<cv::FaceRecognizerSF>*) self; //TODO: check for NULL
        Mat& face_feature1 = *((Mat*)face_feature1_nativeObj);
        Mat& face_feature2 = *((Mat*)face_feature2_nativeObj);
        return (*me)->match( face_feature1, face_feature2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Ptr_FaceRecognizerSF cv::FaceRecognizerSF::create(String model, String config, int backend_id = 0, int target_id = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_10 (JNIEnv*, jclass, jstring, jstring, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_10
  (JNIEnv* env, jclass , jstring model, jstring config, jint backend_id, jint target_id)
{
    
    static const char method_name[] = "objdetect::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceRecognizerSF> Ptr_FaceRecognizerSF;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Ptr_FaceRecognizerSF _retval_ = cv::FaceRecognizerSF::create( n_model, n_config, (int)backend_id, (int)target_id );
        return (jlong)(new Ptr_FaceRecognizerSF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_11 (JNIEnv*, jclass, jstring, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_11
  (JNIEnv* env, jclass , jstring model, jstring config, jint backend_id)
{
    
    static const char method_name[] = "objdetect::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceRecognizerSF> Ptr_FaceRecognizerSF;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Ptr_FaceRecognizerSF _retval_ = cv::FaceRecognizerSF::create( n_model, n_config, (int)backend_id );
        return (jlong)(new Ptr_FaceRecognizerSF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_12 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_create_12
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    
    static const char method_name[] = "objdetect::create_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::FaceRecognizerSF> Ptr_FaceRecognizerSF;
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        Ptr_FaceRecognizerSF _retval_ = cv::FaceRecognizerSF::create( n_model, n_config );
        return (jlong)(new Ptr_FaceRecognizerSF(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::FaceRecognizerSF>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_FaceRecognizerSF_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::FaceRecognizerSF>*) self;
}


//
//  bool cv::GraphicalCodeDetector::detect(Mat img, Mat& points)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detect_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::detect_10()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        return me->detect( img, points );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  string cv::GraphicalCodeDetector::decode(Mat img, Mat points, Mat& straight_code = Mat())
//

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decode_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decode_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jlong straight_code_nativeObj)
{
    
    static const char method_name[] = "objdetect::decode_10()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& straight_code = *((Mat*)straight_code_nativeObj);
        std::string _retval_ = me->decode( img, points, straight_code );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decode_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decode_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::decode_11()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        std::string _retval_ = me->decode( img, points );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  string cv::GraphicalCodeDetector::detectAndDecode(Mat img, Mat& points = Mat(), Mat& straight_code = Mat())
//

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jlong straight_code_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecode_10()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& straight_code = *((Mat*)straight_code_nativeObj);
        std::string _retval_ = me->detectAndDecode( img, points, straight_code );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecode_11()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        std::string _retval_ = me->detectAndDecode( img, points );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecode_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecode_12()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        std::string _retval_ = me->detectAndDecode( img );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  bool cv::GraphicalCodeDetector::detectMulti(Mat img, Mat& points)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectMulti_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectMulti_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectMulti_10()";
    try {
        LOGD("%s", method_name);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        return me->detectMulti( img, points );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::GraphicalCodeDetector::decodeMulti(Mat img, Mat points, vector_string& decoded_info, vector_Mat& straight_code = vector_Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decodeMulti_10 (JNIEnv*, jclass, jlong, jlong, jlong, jobject, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decodeMulti_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jobject decoded_info_list, jlong straight_code_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::decodeMulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        std::vector<Mat> straight_code;
        Mat& straight_code_mat = *((Mat*)straight_code_mat_nativeObj);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->decodeMulti( img, points, decoded_info, straight_code );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        vector_Mat_to_Mat( straight_code, straight_code_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decodeMulti_11 (JNIEnv*, jclass, jlong, jlong, jlong, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_decodeMulti_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jobject decoded_info_list)
{
    
    static const char method_name[] = "objdetect::decodeMulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->decodeMulti( img, points, decoded_info );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::GraphicalCodeDetector::detectAndDecodeMulti(Mat img, vector_string& decoded_info, Mat& points = Mat(), vector_Mat& straight_code = vector_Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_10 (JNIEnv*, jclass, jlong, jlong, jobject, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jobject decoded_info_list, jlong points_nativeObj, jlong straight_code_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeMulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        std::vector<Mat> straight_code;
        Mat& straight_code_mat = *((Mat*)straight_code_mat_nativeObj);
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->detectAndDecodeMulti( img, decoded_info, points, straight_code );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        vector_Mat_to_Mat( straight_code, straight_code_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_11 (JNIEnv*, jclass, jlong, jlong, jobject, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jobject decoded_info_list, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeMulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->detectAndDecodeMulti( img, decoded_info, points );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_12 (JNIEnv*, jclass, jlong, jlong, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_detectAndDecodeMulti_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jobject decoded_info_list)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeMulti_12()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        cv::GraphicalCodeDetector* me = (cv::GraphicalCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = me->detectAndDecodeMulti( img, decoded_info );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::GraphicalCodeDetector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_GraphicalCodeDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::GraphicalCodeDetector*) self;
}


//
//   cv::HOGDescriptor::HOGDescriptor()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>();
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::HOGDescriptor::HOGDescriptor(Size _winSize, Size _blockSize, Size _blockStride, Size _cellSize, int _nbins, int _derivAperture = 1, double _winSigma = -1, HOGDescriptor_HistogramNormType _histogramNormType = HOGDescriptor::L2Hys, double _L2HysThreshold = 0.2, bool _gammaCorrection = false, int _nlevels = HOGDescriptor::DEFAULT_NLEVELS, bool _signedGradient = false)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_11 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jdouble, jboolean, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_11
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType, jdouble _L2HysThreshold, jboolean _gammaCorrection, jint _nlevels, jboolean _signedGradient)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_11()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (cv::HOGDescriptor::HistogramNormType)_histogramNormType, (double)_L2HysThreshold, (bool)_gammaCorrection, (int)_nlevels, (bool)_signedGradient );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_12 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jdouble, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_12
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType, jdouble _L2HysThreshold, jboolean _gammaCorrection, jint _nlevels)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_12()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (cv::HOGDescriptor::HistogramNormType)_histogramNormType, (double)_L2HysThreshold, (bool)_gammaCorrection, (int)_nlevels );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_13 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_13
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType, jdouble _L2HysThreshold, jboolean _gammaCorrection)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_13()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (cv::HOGDescriptor::HistogramNormType)_histogramNormType, (double)_L2HysThreshold, (bool)_gammaCorrection );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_14 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_14
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType, jdouble _L2HysThreshold)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_14()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (cv::HOGDescriptor::HistogramNormType)_histogramNormType, (double)_L2HysThreshold );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_15 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_15
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma, jint _histogramNormType)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_15()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma, (cv::HOGDescriptor::HistogramNormType)_histogramNormType );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_16 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_16
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture, jdouble _winSigma)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_16()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture, (double)_winSigma );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_17 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_17
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins, jint _derivAperture)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_17()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins, (int)_derivAperture );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_18 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_18
  (JNIEnv* env, jclass , jdouble _winSize_width, jdouble _winSize_height, jdouble _blockSize_width, jdouble _blockSize_height, jdouble _blockStride_width, jdouble _blockStride_height, jdouble _cellSize_width, jdouble _cellSize_height, jint _nbins)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_18()";
    try {
        LOGD("%s", method_name);
        Size _winSize((int)_winSize_width, (int)_winSize_height);
        Size _blockSize((int)_blockSize_width, (int)_blockSize_height);
        Size _blockStride((int)_blockStride_width, (int)_blockStride_height);
        Size _cellSize((int)_cellSize_width, (int)_cellSize_height);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( _winSize, _blockSize, _blockStride, _cellSize, (int)_nbins );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::HOGDescriptor::HOGDescriptor(String filename)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_19 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_HOGDescriptor_19
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "objdetect::HOGDescriptor_19()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr<cv::HOGDescriptor> _retval_ = makePtr<cv::HOGDescriptor>( n_filename );
        return (jlong)(new Ptr<cv::HOGDescriptor>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  size_t cv::HOGDescriptor::getDescriptorSize()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDescriptorSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDescriptorSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getDescriptorSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->getDescriptorSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::HOGDescriptor::checkDetectorSize()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_checkDetectorSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_checkDetectorSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::checkDetectorSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->checkDetectorSize();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::HOGDescriptor::getWinSigma()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_getWinSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_getWinSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getWinSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->getWinSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::HOGDescriptor::setSVMDetector(Mat svmdetector)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_setSVMDetector_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_setSVMDetector_10
  (JNIEnv* env, jclass , jlong self, jlong svmdetector_nativeObj)
{
    
    static const char method_name[] = "objdetect::setSVMDetector_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& svmdetector = *((Mat*)svmdetector_nativeObj);
        (*me)->setSVMDetector( svmdetector );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::HOGDescriptor::load(String filename, String objname = String())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring objname)
{
    
    static const char method_name[] = "objdetect::load_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_objname = env->GetStringUTFChars(objname, 0); String n_objname( utf_objname ? utf_objname : "" ); env->ReleaseStringUTFChars(objname, utf_objname);
        return (*me)->load( n_filename, n_objname );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_load_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    
    static const char method_name[] = "objdetect::load_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return (*me)->load( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::HOGDescriptor::save(String filename, String objname = String())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jstring objname)
{
    
    static const char method_name[] = "objdetect::save_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        const char* utf_objname = env->GetStringUTFChars(objname, 0); String n_objname( utf_objname ? utf_objname : "" ); env->ReleaseStringUTFChars(objname, utf_objname);
        (*me)->save( n_filename, n_objname );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_save_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    
    static const char method_name[] = "objdetect::save_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        (*me)->save( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::HOGDescriptor::compute(Mat img, vector_float& descriptors, Size winStride = Size(), Size padding = Size(), vector_Point locations = std::vector<Point>())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jlong locations_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::compute_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        std::vector<Point> locations;
        Mat& locations_mat = *((Mat*)locations_mat_nativeObj);
        Mat_to_vector_Point( locations_mat, locations );
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->compute( img, descriptors, winStride, padding, locations );
        vector_float_to_Mat( descriptors, descriptors_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height)
{
    
    static const char method_name[] = "objdetect::compute_11()";
    try {
        LOGD("%s", method_name);
        std::vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->compute( img, descriptors, winStride, padding );
        vector_float_to_Mat( descriptors, descriptors_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_12 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj, jdouble winStride_width, jdouble winStride_height)
{
    
    static const char method_name[] = "objdetect::compute_12()";
    try {
        LOGD("%s", method_name);
        std::vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        (*me)->compute( img, descriptors, winStride );
        vector_float_to_Mat( descriptors, descriptors_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_13 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_compute_13
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong descriptors_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::compute_13()";
    try {
        LOGD("%s", method_name);
        std::vector<float> descriptors;
        Mat& descriptors_mat = *((Mat*)descriptors_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->compute( img, descriptors );
        vector_float_to_Mat( descriptors, descriptors_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::HOGDescriptor::detect(Mat img, vector_Point& foundLocations, vector_double& weights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), vector_Point searchLocations = std::vector<Point>())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jlong searchLocations_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detect_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        std::vector<Point> searchLocations;
        Mat& searchLocations_mat = *((Mat*)searchLocations_mat_nativeObj);
        Mat_to_vector_Point( searchLocations_mat, searchLocations );
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detect( img, foundLocations, weights, (double)hitThreshold, winStride, padding, searchLocations );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height)
{
    
    static const char method_name[] = "objdetect::detect_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detect( img, foundLocations, weights, (double)hitThreshold, winStride, padding );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height)
{
    
    static const char method_name[] = "objdetect::detect_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        (*me)->detect( img, foundLocations, weights, (double)hitThreshold, winStride );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_13
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj, jdouble hitThreshold)
{
    
    static const char method_name[] = "objdetect::detect_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->detect( img, foundLocations, weights, (double)hitThreshold );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detect_14
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong weights_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detect_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Point> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->detect( img, foundLocations, weights );
        vector_Point_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::HOGDescriptor::detectMultiScale(Mat img, vector_Rect& foundLocations, vector_double& foundWeights, double hitThreshold = 0, Size winStride = Size(), Size padding = Size(), double scale = 1.05, double groupThreshold = 2.0, bool useMeanshiftGrouping = false)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jdouble scale, jdouble groupThreshold, jboolean useMeanshiftGrouping)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride, padding, (double)scale, (double)groupThreshold, (bool)useMeanshiftGrouping );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jdouble scale, jdouble groupThreshold)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride, padding, (double)scale, (double)groupThreshold );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height, jdouble scale)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride, padding, (double)scale );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_13
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height, jdouble padding_width, jdouble padding_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        Size padding((int)padding_width, (int)padding_height);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride, padding );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_14 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_14
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold, jdouble winStride_width, jdouble winStride_height)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Size winStride((int)winStride_width, (int)winStride_height);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold, winStride );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_15 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_15
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj, jdouble hitThreshold)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->detectMultiScale( img, foundLocations, foundWeights, (double)hitThreshold );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_16 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_detectMultiScale_16
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong foundLocations_mat_nativeObj, jlong foundWeights_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectMultiScale_16()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> foundLocations;
        Mat& foundLocations_mat = *((Mat*)foundLocations_mat_nativeObj);
        std::vector<double> foundWeights;
        Mat& foundWeights_mat = *((Mat*)foundWeights_mat_nativeObj);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        (*me)->detectMultiScale( img, foundLocations, foundWeights );
        vector_Rect_to_Mat( foundLocations, foundLocations_mat );
        vector_double_to_Mat( foundWeights, foundWeights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::HOGDescriptor::computeGradient(Mat img, Mat& grad, Mat& angleOfs, Size paddingTL = Size(), Size paddingBR = Size())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong grad_nativeObj, jlong angleOfs_nativeObj, jdouble paddingTL_width, jdouble paddingTL_height, jdouble paddingBR_width, jdouble paddingBR_height)
{
    
    static const char method_name[] = "objdetect::computeGradient_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& grad = *((Mat*)grad_nativeObj);
        Mat& angleOfs = *((Mat*)angleOfs_nativeObj);
        Size paddingTL((int)paddingTL_width, (int)paddingTL_height);
        Size paddingBR((int)paddingBR_width, (int)paddingBR_height);
        (*me)->computeGradient( img, grad, angleOfs, paddingTL, paddingBR );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong grad_nativeObj, jlong angleOfs_nativeObj, jdouble paddingTL_width, jdouble paddingTL_height)
{
    
    static const char method_name[] = "objdetect::computeGradient_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& grad = *((Mat*)grad_nativeObj);
        Mat& angleOfs = *((Mat*)angleOfs_nativeObj);
        Size paddingTL((int)paddingTL_width, (int)paddingTL_height);
        (*me)->computeGradient( img, grad, angleOfs, paddingTL );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_computeGradient_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong grad_nativeObj, jlong angleOfs_nativeObj)
{
    
    static const char method_name[] = "objdetect::computeGradient_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& grad = *((Mat*)grad_nativeObj);
        Mat& angleOfs = *((Mat*)angleOfs_nativeObj);
        (*me)->computeGradient( img, grad, angleOfs );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static vector_float cv::HOGDescriptor::getDefaultPeopleDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDefaultPeopleDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDefaultPeopleDetector_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::getDefaultPeopleDetector_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> _ret_val_vector_ = cv::HOGDescriptor::getDefaultPeopleDetector();
        Mat* _retval_ = new Mat();
        vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static vector_float cv::HOGDescriptor::getDaimlerPeopleDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_getDaimlerPeopleDetector_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::getDaimlerPeopleDetector_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> _ret_val_vector_ = cv::HOGDescriptor::getDaimlerPeopleDetector();
        Mat* _retval_ = new Mat();
        vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Size HOGDescriptor::winSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1winSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->winSize;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Size HOGDescriptor::blockSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1blockSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->blockSize;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Size HOGDescriptor::blockStride
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockStride_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1blockStride_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1blockStride_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->blockStride;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Size HOGDescriptor::cellSize
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1cellSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1cellSize_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1cellSize_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        Size _retval_ = (*me)->cellSize;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int HOGDescriptor::nbins
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nbins_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nbins_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1nbins_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->nbins;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int HOGDescriptor::derivAperture
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1derivAperture_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1derivAperture_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1derivAperture_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->derivAperture;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// double HOGDescriptor::winSigma
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1winSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1winSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->winSigma;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// HOGDescriptor_HistogramNormType HOGDescriptor::histogramNormType
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1histogramNormType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1histogramNormType_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1histogramNormType_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->histogramNormType;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// double HOGDescriptor::L2HysThreshold
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1L2HysThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1L2HysThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1L2HysThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->L2HysThreshold;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// bool HOGDescriptor::gammaCorrection
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1gammaCorrection_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1gammaCorrection_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1gammaCorrection_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->gammaCorrection;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// vector_float HOGDescriptor::svmDetector
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1svmDetector_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1svmDetector_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1svmDetector_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        std::vector<float> _ret_val_vector_ = (*me)->svmDetector;//();
        Mat* _retval_ = new Mat();
        vector_float_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int HOGDescriptor::nlevels
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nlevels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1nlevels_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1nlevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->nlevels;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// bool HOGDescriptor::signedGradient
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1signedGradient_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_HOGDescriptor_get_1signedGradient_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1signedGradient_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::HOGDescriptor>* me = (Ptr<cv::HOGDescriptor>*) self; //TODO: check for NULL
        return (*me)->signedGradient;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::HOGDescriptor>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_HOGDescriptor_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::HOGDescriptor>*) self;
}


//
//  void cv::groupRectangles(vector_Rect& rectList, vector_int& weights, int groupThreshold, double eps = 0.2)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_10 (JNIEnv*, jclass, jlong, jlong, jint, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_10
  (JNIEnv* env, jclass , jlong rectList_mat_nativeObj, jlong weights_mat_nativeObj, jint groupThreshold, jdouble eps)
{
    
    static const char method_name[] = "objdetect::groupRectangles_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> rectList;
        Mat& rectList_mat = *((Mat*)rectList_mat_nativeObj);
        Mat_to_vector_Rect( rectList_mat, rectList );
        std::vector<int> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        cv::groupRectangles( rectList, weights, (int)groupThreshold, (double)eps );
        vector_Rect_to_Mat( rectList, rectList_mat );
        vector_int_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_groupRectangles_11
  (JNIEnv* env, jclass , jlong rectList_mat_nativeObj, jlong weights_mat_nativeObj, jint groupThreshold)
{
    
    static const char method_name[] = "objdetect::groupRectangles_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> rectList;
        Mat& rectList_mat = *((Mat*)rectList_mat_nativeObj);
        Mat_to_vector_Rect( rectList_mat, rectList );
        std::vector<int> weights;
        Mat& weights_mat = *((Mat*)weights_mat_nativeObj);
        cv::groupRectangles( rectList, weights, (int)groupThreshold );
        vector_Rect_to_Mat( rectList, rectList_mat );
        vector_int_to_Mat( weights, weights_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::drawDetectedMarkers(Mat& image, vector_Mat corners, Mat ids = Mat(), Scalar borderColor = Scalar(0, 255, 0))
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj, jdouble borderColor_val0, jdouble borderColor_val1, jdouble borderColor_val2, jdouble borderColor_val3)
{
    
    static const char method_name[] = "objdetect::drawDetectedMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        Scalar borderColor(borderColor_val0, borderColor_val1, borderColor_val2, borderColor_val3);
        cv::aruco::drawDetectedMarkers( image, corners, ids, borderColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        cv::aruco::drawDetectedMarkers( image, corners, ids );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedMarkers_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong corners_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedMarkers_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Mat_to_vector_Mat( corners_mat, corners );
        Mat& image = *((Mat*)image_nativeObj);
        cv::aruco::drawDetectedMarkers( image, corners );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::generateImageMarker(Dictionary dictionary, int id, int sidePixels, Mat& img, int borderBits = 1)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_generateImageMarker_10 (JNIEnv*, jclass, jlong, jint, jint, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_generateImageMarker_10
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jint id, jint sidePixels, jlong img_nativeObj, jint borderBits)
{
    
    static const char method_name[] = "objdetect::generateImageMarker_10()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::generateImageMarker( (*(cv::aruco::Dictionary*)dictionary_nativeObj), (int)id, (int)sidePixels, img, (int)borderBits );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_generateImageMarker_11 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_generateImageMarker_11
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jint id, jint sidePixels, jlong img_nativeObj)
{
    
    static const char method_name[] = "objdetect::generateImageMarker_11()";
    try {
        LOGD("%s", method_name);
        Mat& img = *((Mat*)img_nativeObj);
        cv::aruco::generateImageMarker( (*(cv::aruco::Dictionary*)dictionary_nativeObj), (int)id, (int)sidePixels, img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::drawDetectedCornersCharuco(Mat& image, Mat charucoCorners, Mat charucoIds = Mat(), Scalar cornerColor = Scalar(255, 0, 0))
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jdouble cornerColor_val0, jdouble cornerColor_val1, jdouble cornerColor_val2, jdouble cornerColor_val3)
{
    
    static const char method_name[] = "objdetect::drawDetectedCornersCharuco_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Scalar cornerColor(cornerColor_val0, cornerColor_val1, cornerColor_val2, cornerColor_val3);
        cv::aruco::drawDetectedCornersCharuco( image, charucoCorners, charucoIds, cornerColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedCornersCharuco_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        cv::aruco::drawDetectedCornersCharuco( image, charucoCorners, charucoIds );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedCornersCharuco_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong charucoCorners_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedCornersCharuco_12()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        cv::aruco::drawDetectedCornersCharuco( image, charucoCorners );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::drawDetectedDiamonds(Mat& image, vector_Mat diamondCorners, Mat diamondIds = Mat(), Scalar borderColor = Scalar(0, 0, 255))
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj, jdouble borderColor_val0, jdouble borderColor_val1, jdouble borderColor_val2, jdouble borderColor_val3)
{
    
    static const char method_name[] = "objdetect::drawDetectedDiamonds_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat_to_vector_Mat( diamondCorners_mat, diamondCorners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        Scalar borderColor(borderColor_val0, borderColor_val1, borderColor_val2, borderColor_val3);
        cv::aruco::drawDetectedDiamonds( image, diamondCorners, diamondIds, borderColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedDiamonds_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat_to_vector_Mat( diamondCorners_mat, diamondCorners );
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        cv::aruco::drawDetectedDiamonds( image, diamondCorners, diamondIds );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Objdetect_drawDetectedDiamonds_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong diamondCorners_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::drawDetectedDiamonds_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Mat_to_vector_Mat( diamondCorners_mat, diamondCorners );
        Mat& image = *((Mat*)image_nativeObj);
        cv::aruco::drawDetectedDiamonds( image, diamondCorners );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Dictionary cv::aruco::getPredefinedDictionary(int dict)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_getPredefinedDictionary_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_getPredefinedDictionary_10
  (JNIEnv* env, jclass , jint dict)
{
    
    static const char method_name[] = "objdetect::getPredefinedDictionary_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary _retval_ = cv::aruco::getPredefinedDictionary( (int)dict );
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Dictionary cv::aruco::extendDictionary(int nMarkers, int markerSize, Dictionary baseDictionary = Dictionary(), int randomSeed = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_10 (JNIEnv*, jclass, jint, jint, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_10
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize, jlong baseDictionary_nativeObj, jint randomSeed)
{
    
    static const char method_name[] = "objdetect::extendDictionary_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary _retval_ = cv::aruco::extendDictionary( (int)nMarkers, (int)markerSize, (*(cv::aruco::Dictionary*)baseDictionary_nativeObj), (int)randomSeed );
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_11 (JNIEnv*, jclass, jint, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_11
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize, jlong baseDictionary_nativeObj)
{
    
    static const char method_name[] = "objdetect::extendDictionary_11()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary _retval_ = cv::aruco::extendDictionary( (int)nMarkers, (int)markerSize, (*(cv::aruco::Dictionary*)baseDictionary_nativeObj) );
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_12 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Objdetect_extendDictionary_12
  (JNIEnv* env, jclass , jint nMarkers, jint markerSize)
{
    
    static const char method_name[] = "objdetect::extendDictionary_12()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary _retval_ = cv::aruco::extendDictionary( (int)nMarkers, (int)markerSize );
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::QRCodeDetector::QRCodeDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_QRCodeDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_QRCodeDetector_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::QRCodeDetector_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* _retval_ = new cv::QRCodeDetector();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  QRCodeDetector cv::QRCodeDetector::setEpsX(double epsX)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setEpsX_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setEpsX_10
  (JNIEnv* env, jclass , jlong self, jdouble epsX)
{
    
    static const char method_name[] = "objdetect::setEpsX_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        cv::QRCodeDetector _retval_ = me->setEpsX( (double)epsX );
        return (jlong) new cv::QRCodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  QRCodeDetector cv::QRCodeDetector::setEpsY(double epsY)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setEpsY_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setEpsY_10
  (JNIEnv* env, jclass , jlong self, jdouble epsY)
{
    
    static const char method_name[] = "objdetect::setEpsY_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        cv::QRCodeDetector _retval_ = me->setEpsY( (double)epsY );
        return (jlong) new cv::QRCodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  QRCodeDetector cv::QRCodeDetector::setUseAlignmentMarkers(bool useAlignmentMarkers)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setUseAlignmentMarkers_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetector_setUseAlignmentMarkers_10
  (JNIEnv* env, jclass , jlong self, jboolean useAlignmentMarkers)
{
    
    static const char method_name[] = "objdetect::setUseAlignmentMarkers_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        cv::QRCodeDetector _retval_ = me->setUseAlignmentMarkers( (bool)useAlignmentMarkers );
        return (jlong) new cv::QRCodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String cv::QRCodeDetector::decodeCurved(Mat img, Mat points, Mat& straight_qrcode = Mat())
//

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_decodeCurved_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_decodeCurved_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jlong straight_qrcode_nativeObj)
{
    
    static const char method_name[] = "objdetect::decodeCurved_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& straight_qrcode = *((Mat*)straight_qrcode_nativeObj);
        cv::String _retval_ = me->decodeCurved( img, points, straight_qrcode );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_decodeCurved_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_decodeCurved_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::decodeCurved_11()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        cv::String _retval_ = me->decodeCurved( img, points );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  string cv::QRCodeDetector::detectAndDecodeCurved(Mat img, Mat& points = Mat(), Mat& straight_qrcode = Mat())
//

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jlong straight_qrcode_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeCurved_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        Mat& straight_qrcode = *((Mat*)straight_qrcode_nativeObj);
        std::string _retval_ = me->detectAndDecodeCurved( img, points, straight_qrcode );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeCurved_11()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        std::string _retval_ = me->detectAndDecodeCurved( img, points );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_objdetect_QRCodeDetector_detectAndDecodeCurved_12
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj)
{
    
    static const char method_name[] = "objdetect::detectAndDecodeCurved_12()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetector* me = (cv::QRCodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        std::string _retval_ = me->detectAndDecodeCurved( img );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  native support for java finalize()
//  static void cv::QRCodeDetector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::QRCodeDetector*) self;
}


//
//   cv::QRCodeDetectorAruco::QRCodeDetectorAruco()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_QRCodeDetectorAruco_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_QRCodeDetectorAruco_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::QRCodeDetectorAruco_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco* _retval_ = new cv::QRCodeDetectorAruco();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::QRCodeDetectorAruco::QRCodeDetectorAruco(QRCodeDetectorAruco_Params params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_QRCodeDetectorAruco_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_QRCodeDetectorAruco_11
  (JNIEnv* env, jclass , jlong params_nativeObj)
{
    
    static const char method_name[] = "objdetect::QRCodeDetectorAruco_11()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco* _retval_ = new cv::QRCodeDetectorAruco( (*(cv::QRCodeDetectorAruco::Params*)params_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  QRCodeDetectorAruco_Params cv::QRCodeDetectorAruco::getDetectorParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_getDetectorParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_getDetectorParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::getDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco* me = (cv::QRCodeDetectorAruco*) self; //TODO: check for NULL
        cv::QRCodeDetectorAruco::Params _retval_ = me->getDetectorParameters();
        return (jlong) new cv::QRCodeDetectorAruco::Params(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  QRCodeDetectorAruco cv::QRCodeDetectorAruco::setDetectorParameters(QRCodeDetectorAruco_Params params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_setDetectorParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_setDetectorParameters_10
  (JNIEnv* env, jclass , jlong self, jlong params_nativeObj)
{
    
    static const char method_name[] = "objdetect::setDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco* me = (cv::QRCodeDetectorAruco*) self; //TODO: check for NULL
        cv::QRCodeDetectorAruco _retval_ = me->setDetectorParameters( (*(cv::QRCodeDetectorAruco::Params*)params_nativeObj) );
        return (jlong) new cv::QRCodeDetectorAruco(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::QRCodeDetectorAruco::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::QRCodeDetectorAruco*) self;
}


//
//   cv::QRCodeDetectorAruco::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_QRCodeDetectorAruco_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_QRCodeDetectorAruco_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::QRCodeDetectorAruco_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* _retval_ = new cv::QRCodeDetectorAruco::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// float QRCodeDetectorAruco_Params::minModuleSizeInPyramid
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1minModuleSizeInPyramid_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1minModuleSizeInPyramid_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1minModuleSizeInPyramid_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->minModuleSizeInPyramid;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::minModuleSizeInPyramid
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1minModuleSizeInPyramid_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1minModuleSizeInPyramid_10
  (JNIEnv* env, jclass , jlong self, jfloat minModuleSizeInPyramid)
{
    
    static const char method_name[] = "objdetect::set_1minModuleSizeInPyramid_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->minModuleSizeInPyramid = ( (float)minModuleSizeInPyramid );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::maxRotation
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxRotation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxRotation_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1maxRotation_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->maxRotation;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::maxRotation
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxRotation_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxRotation_10
  (JNIEnv* env, jclass , jlong self, jfloat maxRotation)
{
    
    static const char method_name[] = "objdetect::set_1maxRotation_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->maxRotation = ( (float)maxRotation );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::maxModuleSizeMismatch
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxModuleSizeMismatch_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxModuleSizeMismatch_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1maxModuleSizeMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->maxModuleSizeMismatch;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::maxModuleSizeMismatch
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxModuleSizeMismatch_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxModuleSizeMismatch_10
  (JNIEnv* env, jclass , jlong self, jfloat maxModuleSizeMismatch)
{
    
    static const char method_name[] = "objdetect::set_1maxModuleSizeMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->maxModuleSizeMismatch = ( (float)maxModuleSizeMismatch );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::maxTimingPatternMismatch
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxTimingPatternMismatch_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxTimingPatternMismatch_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1maxTimingPatternMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->maxTimingPatternMismatch;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::maxTimingPatternMismatch
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxTimingPatternMismatch_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxTimingPatternMismatch_10
  (JNIEnv* env, jclass , jlong self, jfloat maxTimingPatternMismatch)
{
    
    static const char method_name[] = "objdetect::set_1maxTimingPatternMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->maxTimingPatternMismatch = ( (float)maxTimingPatternMismatch );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::maxPenalties
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxPenalties_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxPenalties_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1maxPenalties_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->maxPenalties;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::maxPenalties
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxPenalties_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxPenalties_10
  (JNIEnv* env, jclass , jlong self, jfloat maxPenalties)
{
    
    static const char method_name[] = "objdetect::set_1maxPenalties_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->maxPenalties = ( (float)maxPenalties );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::maxColorsMismatch
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxColorsMismatch_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1maxColorsMismatch_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1maxColorsMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->maxColorsMismatch;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::maxColorsMismatch
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxColorsMismatch_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1maxColorsMismatch_10
  (JNIEnv* env, jclass , jlong self, jfloat maxColorsMismatch)
{
    
    static const char method_name[] = "objdetect::set_1maxColorsMismatch_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->maxColorsMismatch = ( (float)maxColorsMismatch );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float QRCodeDetectorAruco_Params::scaleTimingPatternScore
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1scaleTimingPatternScore_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_get_1scaleTimingPatternScore_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1scaleTimingPatternScore_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        return me->scaleTimingPatternScore;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeDetectorAruco_Params::scaleTimingPatternScore
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1scaleTimingPatternScore_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_set_1scaleTimingPatternScore_10
  (JNIEnv* env, jclass , jlong self, jfloat scaleTimingPatternScore)
{
    
    static const char method_name[] = "objdetect::set_1scaleTimingPatternScore_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeDetectorAruco::Params* me = (cv::QRCodeDetectorAruco::Params*) self; //TODO: check for NULL
        me->scaleTimingPatternScore = ( (float)scaleTimingPatternScore );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::QRCodeDetectorAruco::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeDetectorAruco_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::QRCodeDetectorAruco::Params*) self;
}


//
// static Ptr_QRCodeEncoder cv::QRCodeEncoder::create(QRCodeEncoder_Params parameters = QRCodeEncoder::Params())
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_create_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_create_10
  (JNIEnv* env, jclass , jlong parameters_nativeObj)
{
    
    static const char method_name[] = "objdetect::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::QRCodeEncoder> Ptr_QRCodeEncoder;
        Ptr_QRCodeEncoder _retval_ = cv::QRCodeEncoder::create( (*(cv::QRCodeEncoder::Params*)parameters_nativeObj) );
        return (jlong)(new Ptr_QRCodeEncoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_create_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_create_11
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::create_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::QRCodeEncoder> Ptr_QRCodeEncoder;
        Ptr_QRCodeEncoder _retval_ = cv::QRCodeEncoder::create();
        return (jlong)(new Ptr_QRCodeEncoder(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::QRCodeEncoder::encode(String encoded_info, Mat& qrcode)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_encode_10 (JNIEnv*, jclass, jlong, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_encode_10
  (JNIEnv* env, jclass , jlong self, jstring encoded_info, jlong qrcode_nativeObj)
{
    
    static const char method_name[] = "objdetect::encode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::QRCodeEncoder>* me = (Ptr<cv::QRCodeEncoder>*) self; //TODO: check for NULL
        const char* utf_encoded_info = env->GetStringUTFChars(encoded_info, 0); String n_encoded_info( utf_encoded_info ? utf_encoded_info : "" ); env->ReleaseStringUTFChars(encoded_info, utf_encoded_info);
        Mat& qrcode = *((Mat*)qrcode_nativeObj);
        (*me)->encode( n_encoded_info, qrcode );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::QRCodeEncoder::encodeStructuredAppend(String encoded_info, vector_Mat& qrcodes)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_encodeStructuredAppend_10 (JNIEnv*, jclass, jlong, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_encodeStructuredAppend_10
  (JNIEnv* env, jclass , jlong self, jstring encoded_info, jlong qrcodes_mat_nativeObj)
{
    
    static const char method_name[] = "objdetect::encodeStructuredAppend_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> qrcodes;
        Mat& qrcodes_mat = *((Mat*)qrcodes_mat_nativeObj);
        Ptr<cv::QRCodeEncoder>* me = (Ptr<cv::QRCodeEncoder>*) self; //TODO: check for NULL
        const char* utf_encoded_info = env->GetStringUTFChars(encoded_info, 0); String n_encoded_info( utf_encoded_info ? utf_encoded_info : "" ); env->ReleaseStringUTFChars(encoded_info, utf_encoded_info);
        (*me)->encodeStructuredAppend( n_encoded_info, qrcodes );
        vector_Mat_to_Mat( qrcodes, qrcodes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::QRCodeEncoder>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::QRCodeEncoder>*) self;
}


//
//   cv::QRCodeEncoder::Params::Params()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_QRCodeEncoder_1Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_QRCodeEncoder_1Params_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "objdetect::QRCodeEncoder_1Params_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeEncoder::Params* _retval_ = new cv::QRCodeEncoder::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int QRCodeEncoder_Params::version
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_get_1version_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_get_1version_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1version_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeEncoder::Params* me = (cv::QRCodeEncoder::Params*) self; //TODO: check for NULL
        return me->version;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeEncoder_Params::version
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_set_1version_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_set_1version_10
  (JNIEnv* env, jclass , jlong self, jint version)
{
    
    static const char method_name[] = "objdetect::set_1version_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeEncoder::Params* me = (cv::QRCodeEncoder::Params*) self; //TODO: check for NULL
        me->version = ( (int)version );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int QRCodeEncoder_Params::structure_number
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_get_1structure_1number_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_get_1structure_1number_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "objdetect::get_1structure_1number_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeEncoder::Params* me = (cv::QRCodeEncoder::Params*) self; //TODO: check for NULL
        return me->structure_number;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void QRCodeEncoder_Params::structure_number
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_set_1structure_1number_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_set_1structure_1number_10
  (JNIEnv* env, jclass , jlong self, jint structure_number)
{
    
    static const char method_name[] = "objdetect::set_1structure_1number_10()";
    try {
        LOGD("%s", method_name);
        cv::QRCodeEncoder::Params* me = (cv::QRCodeEncoder::Params*) self; //TODO: check for NULL
        me->structure_number = ( (int)structure_number );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::QRCodeEncoder::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_QRCodeEncoder_1Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::QRCodeEncoder::Params*) self;
}


//
//   cv::aruco::ArucoDetector::ArucoDetector(Dictionary dictionary = getPredefinedDictionary(cv::aruco::DICT_4X4_50), DetectorParameters detectorParams = DetectorParameters(), RefineParameters refineParams = RefineParameters())
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_10
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jlong detectorParams_nativeObj, jlong refineParams_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::ArucoDetector_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector> _retval_ = makePtr<cv::aruco::ArucoDetector>( (*(cv::aruco::Dictionary*)dictionary_nativeObj), (*(cv::aruco::DetectorParameters*)detectorParams_nativeObj), (*(cv::aruco::RefineParameters*)refineParams_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::ArucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_11
  (JNIEnv* env, jclass , jlong dictionary_nativeObj, jlong detectorParams_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::ArucoDetector_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector> _retval_ = makePtr<cv::aruco::ArucoDetector>( (*(cv::aruco::Dictionary*)dictionary_nativeObj), (*(cv::aruco::DetectorParameters*)detectorParams_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::ArucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_12
  (JNIEnv* env, jclass , jlong dictionary_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::ArucoDetector_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector> _retval_ = makePtr<cv::aruco::ArucoDetector>( (*(cv::aruco::Dictionary*)dictionary_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::ArucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_ArucoDetector_13
  (JNIEnv* env, jclass )
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::ArucoDetector_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector> _retval_ = makePtr<cv::aruco::ArucoDetector>();
        return (jlong)(new Ptr<cv::aruco::ArucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::ArucoDetector::detectMarkers(Mat image, vector_Mat& corners, Mat& ids, vector_Mat& rejectedImgPoints = vector_Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_detectMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_detectMarkers_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj, jlong rejectedImgPoints_mat_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        std::vector<Mat> rejectedImgPoints;
        Mat& rejectedImgPoints_mat = *((Mat*)rejectedImgPoints_mat_nativeObj);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        (*me)->detectMarkers( image, corners, ids, rejectedImgPoints );
        vector_Mat_to_Mat( corners, corners_mat );
        vector_Mat_to_Mat( rejectedImgPoints, rejectedImgPoints_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_detectMarkers_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_detectMarkers_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong corners_mat_nativeObj, jlong ids_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> corners;
        Mat& corners_mat = *((Mat*)corners_mat_nativeObj);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& ids = *((Mat*)ids_nativeObj);
        (*me)->detectMarkers( image, corners, ids );
        vector_Mat_to_Mat( corners, corners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::ArucoDetector::refineDetectedMarkers(Mat image, Board board, vector_Mat& detectedCorners, Mat& detectedIds, vector_Mat& rejectedCorners, Mat cameraMatrix = Mat(), Mat distCoeffs = Mat(), Mat& recoveredIdxs = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj, jlong recoveredIdxs_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::refineDetectedMarkers_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        Mat& recoveredIdxs = *((Mat*)recoveredIdxs_nativeObj);
        (*me)->refineDetectedMarkers( image, (*(cv::aruco::Board*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners, cameraMatrix, distCoeffs, recoveredIdxs );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );
        vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj, jlong cameraMatrix_nativeObj, jlong distCoeffs_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::refineDetectedMarkers_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        (*me)->refineDetectedMarkers( image, (*(cv::aruco::Board*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners, cameraMatrix, distCoeffs );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );
        vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj, jlong cameraMatrix_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::refineDetectedMarkers_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        (*me)->refineDetectedMarkers( image, (*(cv::aruco::Board*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners, cameraMatrix );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );
        vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_13 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_refineDetectedMarkers_13
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong board_nativeObj, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong rejectedCorners_mat_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::refineDetectedMarkers_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        std::vector<Mat> rejectedCorners;
        Mat& rejectedCorners_mat = *((Mat*)rejectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( rejectedCorners_mat, rejectedCorners );
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        (*me)->refineDetectedMarkers( image, (*(cv::aruco::Board*)board_nativeObj), detectedCorners, detectedIds, rejectedCorners );
        vector_Mat_to_Mat( detectedCorners, detectedCorners_mat );
        vector_Mat_to_Mat( rejectedCorners, rejectedCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Dictionary cv::aruco::ArucoDetector::getDictionary()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getDictionary_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getDictionary_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDictionary_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        cv::aruco::Dictionary _retval_ = (*me)->getDictionary();
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::ArucoDetector::setDictionary(Dictionary dictionary)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setDictionary_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setDictionary_10
  (JNIEnv* env, jclass , jlong self, jlong dictionary_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setDictionary_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        (*me)->setDictionary( (*(cv::aruco::Dictionary*)dictionary_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  DetectorParameters cv::aruco::ArucoDetector::getDetectorParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getDetectorParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getDetectorParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        cv::aruco::DetectorParameters _retval_ = (*me)->getDetectorParameters();
        return (jlong) new cv::aruco::DetectorParameters(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::ArucoDetector::setDetectorParameters(DetectorParameters detectorParameters)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setDetectorParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setDetectorParameters_10
  (JNIEnv* env, jclass , jlong self, jlong detectorParameters_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        (*me)->setDetectorParameters( (*(cv::aruco::DetectorParameters*)detectorParameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  RefineParameters cv::aruco::ArucoDetector::getRefineParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getRefineParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_ArucoDetector_getRefineParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getRefineParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        cv::aruco::RefineParameters _retval_ = (*me)->getRefineParameters();
        return (jlong) new cv::aruco::RefineParameters(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::ArucoDetector::setRefineParameters(RefineParameters refineParameters)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setRefineParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_setRefineParameters_10
  (JNIEnv* env, jclass , jlong self, jlong refineParameters_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setRefineParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::ArucoDetector>* me = (Ptr<cv::aruco::ArucoDetector>*) self; //TODO: check for NULL
        (*me)->setRefineParameters( (*(cv::aruco::RefineParameters*)refineParameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::aruco::ArucoDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_ArucoDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::ArucoDetector>*) self;
}


//
//   cv::aruco::Board::Board(vector_Mat objPoints, Dictionary dictionary, Mat ids)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_Board_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_Board_10
  (JNIEnv* env, jclass , jlong objPoints_mat_nativeObj, jlong dictionary_nativeObj, jlong ids_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::Board_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> objPoints;
        Mat& objPoints_mat = *((Mat*)objPoints_mat_nativeObj);
        Mat_to_vector_Mat( objPoints_mat, objPoints );
        Mat& ids = *((Mat*)ids_nativeObj);
        cv::aruco::Board* _retval_ = new cv::aruco::Board( objPoints, (*(cv::aruco::Dictionary*)dictionary_nativeObj), ids );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Dictionary cv::aruco::Board::getDictionary()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getDictionary_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getDictionary_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDictionary_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        cv::aruco::Dictionary _retval_ = me->getDictionary();
        return (jlong) new cv::aruco::Dictionary(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_vector_Point3f cv::aruco::Board::getObjPoints()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getObjPoints_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getObjPoints_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getObjPoints_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        std::vector< std::vector<Point3f> > _ret_val_vector_ = me->getObjPoints();
        Mat* _retval_ = new Mat();
        vector_vector_Point3f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int cv::aruco::Board::getIds()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getIds_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Board_getIds_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getIds_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = me->getIds();
        Mat* _retval_ = new Mat();
        vector_int_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Point3f cv::aruco::Board::getRightBottomCorner()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_Board_getRightBottomCorner_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_Board_getRightBottomCorner_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getRightBottomCorner_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        Point3f _retval_ = me->getRightBottomCorner();
        jdoubleArray _da_retval_ = env->NewDoubleArray(3);  jdouble _tmp_retval_[3] = {(jdouble)_retval_.x, (jdouble)_retval_.y, (jdouble)_retval_.z}; env->SetDoubleArrayRegion(_da_retval_, 0, 3, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::Board::matchImagePoints(vector_Mat detectedCorners, Mat detectedIds, Mat& objPoints, Mat& imgPoints)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_matchImagePoints_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_matchImagePoints_10
  (JNIEnv* env, jclass , jlong self, jlong detectedCorners_mat_nativeObj, jlong detectedIds_nativeObj, jlong objPoints_nativeObj, jlong imgPoints_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::matchImagePoints_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> detectedCorners;
        Mat& detectedCorners_mat = *((Mat*)detectedCorners_mat_nativeObj);
        Mat_to_vector_Mat( detectedCorners_mat, detectedCorners );
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        Mat& detectedIds = *((Mat*)detectedIds_nativeObj);
        Mat& objPoints = *((Mat*)objPoints_nativeObj);
        Mat& imgPoints = *((Mat*)imgPoints_nativeObj);
        me->matchImagePoints( detectedCorners, detectedIds, objPoints, imgPoints );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::Board::generateImage(Size outSize, Mat& img, int marginSize = 0, int borderBits = 1)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_10
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj, jint marginSize, jint borderBits)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::generateImage_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        me->generateImage( outSize, img, (int)marginSize, (int)borderBits );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_11
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj, jint marginSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::generateImage_11()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        me->generateImage( outSize, img, (int)marginSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_generateImage_12
  (JNIEnv* env, jclass , jlong self, jdouble outSize_width, jdouble outSize_height, jlong img_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::generateImage_12()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Board* me = (cv::aruco::Board*) self; //TODO: check for NULL
        Size outSize((int)outSize_width, (int)outSize_height);
        Mat& img = *((Mat*)img_nativeObj);
        me->generateImage( outSize, img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::aruco::Board::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Board_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::Board*) self;
}


//
//   cv::aruco::CharucoBoard::CharucoBoard(Size size, float squareLength, float markerLength, Dictionary dictionary, Mat ids = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_CharucoBoard_10 (JNIEnv*, jclass, jdouble, jdouble, jfloat, jfloat, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_CharucoBoard_10
  (JNIEnv* env, jclass , jdouble size_width, jdouble size_height, jfloat squareLength, jfloat markerLength, jlong dictionary_nativeObj, jlong ids_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoBoard_10()";
    try {
        LOGD("%s", method_name);
        Size size((int)size_width, (int)size_height);
        Mat& ids = *((Mat*)ids_nativeObj);
        cv::aruco::CharucoBoard* _retval_ = new cv::aruco::CharucoBoard( size, (float)squareLength, (float)markerLength, (*(cv::aruco::Dictionary*)dictionary_nativeObj), ids );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_CharucoBoard_11 (JNIEnv*, jclass, jdouble, jdouble, jfloat, jfloat, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_CharucoBoard_11
  (JNIEnv* env, jclass , jdouble size_width, jdouble size_height, jfloat squareLength, jfloat markerLength, jlong dictionary_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoBoard_11()";
    try {
        LOGD("%s", method_name);
        Size size((int)size_width, (int)size_height);
        cv::aruco::CharucoBoard* _retval_ = new cv::aruco::CharucoBoard( size, (float)squareLength, (float)markerLength, (*(cv::aruco::Dictionary*)dictionary_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::CharucoBoard::setLegacyPattern(bool legacyPattern)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoBoard_setLegacyPattern_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoBoard_setLegacyPattern_10
  (JNIEnv* env, jclass , jlong self, jboolean legacyPattern)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setLegacyPattern_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        me->setLegacyPattern( (bool)legacyPattern );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::aruco::CharucoBoard::getLegacyPattern()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoBoard_getLegacyPattern_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoBoard_getLegacyPattern_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getLegacyPattern_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        return me->getLegacyPattern();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size cv::aruco::CharucoBoard::getChessboardSize()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_CharucoBoard_getChessboardSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_CharucoBoard_getChessboardSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getChessboardSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        Size _retval_ = me->getChessboardSize();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::aruco::CharucoBoard::getSquareLength()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_CharucoBoard_getSquareLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_CharucoBoard_getSquareLength_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getSquareLength_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        return me->getSquareLength();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::aruco::CharucoBoard::getMarkerLength()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_CharucoBoard_getMarkerLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_CharucoBoard_getMarkerLength_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getMarkerLength_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        return me->getMarkerLength();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Point3f cv::aruco::CharucoBoard::getChessboardCorners()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_getChessboardCorners_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoBoard_getChessboardCorners_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getChessboardCorners_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        std::vector<Point3f> _ret_val_vector_ = me->getChessboardCorners();
        Mat* _retval_ = new Mat();
        vector_Point3f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::aruco::CharucoBoard::checkCharucoCornersCollinear(Mat charucoIds)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoBoard_checkCharucoCornersCollinear_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoBoard_checkCharucoCornersCollinear_10
  (JNIEnv* env, jclass , jlong self, jlong charucoIds_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::checkCharucoCornersCollinear_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoBoard* me = (cv::aruco::CharucoBoard*) self; //TODO: check for NULL
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        return me->checkCharucoCornersCollinear( charucoIds );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::aruco::CharucoBoard::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoBoard_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoBoard_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::CharucoBoard*) self;
}


//
//   cv::aruco::CharucoDetector::CharucoDetector(CharucoBoard board, CharucoParameters charucoParams = CharucoParameters(), DetectorParameters detectorParams = DetectorParameters(), RefineParameters refineParams = RefineParameters())
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_10
  (JNIEnv* env, jclass , jlong board_nativeObj, jlong charucoParams_nativeObj, jlong detectorParams_nativeObj, jlong refineParams_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoDetector_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector> _retval_ = makePtr<cv::aruco::CharucoDetector>( (*(cv::aruco::CharucoBoard*)board_nativeObj), (*(cv::aruco::CharucoParameters*)charucoParams_nativeObj), (*(cv::aruco::DetectorParameters*)detectorParams_nativeObj), (*(cv::aruco::RefineParameters*)refineParams_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::CharucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_11
  (JNIEnv* env, jclass , jlong board_nativeObj, jlong charucoParams_nativeObj, jlong detectorParams_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoDetector_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector> _retval_ = makePtr<cv::aruco::CharucoDetector>( (*(cv::aruco::CharucoBoard*)board_nativeObj), (*(cv::aruco::CharucoParameters*)charucoParams_nativeObj), (*(cv::aruco::DetectorParameters*)detectorParams_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::CharucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_12
  (JNIEnv* env, jclass , jlong board_nativeObj, jlong charucoParams_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoDetector_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector> _retval_ = makePtr<cv::aruco::CharucoDetector>( (*(cv::aruco::CharucoBoard*)board_nativeObj), (*(cv::aruco::CharucoParameters*)charucoParams_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::CharucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_CharucoDetector_13
  (JNIEnv* env, jclass , jlong board_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoDetector_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector> _retval_ = makePtr<cv::aruco::CharucoDetector>( (*(cv::aruco::CharucoBoard*)board_nativeObj) );
        return (jlong)(new Ptr<cv::aruco::CharucoDetector>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  CharucoBoard cv::aruco::CharucoDetector::getBoard()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getBoard_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getBoard_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getBoard_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        cv::aruco::CharucoBoard _retval_ = (*me)->getBoard();
        return (jlong) new cv::aruco::CharucoBoard(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::CharucoDetector::setBoard(CharucoBoard board)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setBoard_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setBoard_10
  (JNIEnv* env, jclass , jlong self, jlong board_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setBoard_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        (*me)->setBoard( (*(cv::aruco::CharucoBoard*)board_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  CharucoParameters cv::aruco::CharucoDetector::getCharucoParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getCharucoParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getCharucoParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getCharucoParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        cv::aruco::CharucoParameters _retval_ = (*me)->getCharucoParameters();
        return (jlong) new cv::aruco::CharucoParameters(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::CharucoDetector::setCharucoParameters(CharucoParameters charucoParameters)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setCharucoParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setCharucoParameters_10
  (JNIEnv* env, jclass , jlong self, jlong charucoParameters_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setCharucoParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        (*me)->setCharucoParameters( (*(cv::aruco::CharucoParameters*)charucoParameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  DetectorParameters cv::aruco::CharucoDetector::getDetectorParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getDetectorParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getDetectorParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        cv::aruco::DetectorParameters _retval_ = (*me)->getDetectorParameters();
        return (jlong) new cv::aruco::DetectorParameters(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::CharucoDetector::setDetectorParameters(DetectorParameters detectorParameters)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setDetectorParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setDetectorParameters_10
  (JNIEnv* env, jclass , jlong self, jlong detectorParameters_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setDetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        (*me)->setDetectorParameters( (*(cv::aruco::DetectorParameters*)detectorParameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  RefineParameters cv::aruco::CharucoDetector::getRefineParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getRefineParameters_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoDetector_getRefineParameters_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getRefineParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        cv::aruco::RefineParameters _retval_ = (*me)->getRefineParameters();
        return (jlong) new cv::aruco::RefineParameters(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::CharucoDetector::setRefineParameters(RefineParameters refineParameters)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setRefineParameters_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_setRefineParameters_10
  (JNIEnv* env, jclass , jlong self, jlong refineParameters_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::setRefineParameters_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        (*me)->setRefineParameters( (*(cv::aruco::RefineParameters*)refineParameters_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::CharucoDetector::detectBoard(Mat image, Mat& charucoCorners, Mat& charucoIds, vector_Mat& markerCorners = vector_Mat(), Mat& markerIds = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectBoard_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        (*me)->detectBoard( image, charucoCorners, charucoIds, markerCorners, markerIds );
        vector_Mat_to_Mat( markerCorners, markerCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj, jlong markerCorners_mat_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectBoard_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        (*me)->detectBoard( image, charucoCorners, charucoIds, markerCorners );
        vector_Mat_to_Mat( markerCorners, markerCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectBoard_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong charucoCorners_nativeObj, jlong charucoIds_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectBoard_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& charucoCorners = *((Mat*)charucoCorners_nativeObj);
        Mat& charucoIds = *((Mat*)charucoIds_nativeObj);
        (*me)->detectBoard( image, charucoCorners, charucoIds );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::aruco::CharucoDetector::detectDiamonds(Mat image, vector_Mat& diamondCorners, Mat& diamondIds, vector_Mat& markerCorners = vector_Mat(), Mat& markerIds = Mat())
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj, jlong markerCorners_mat_nativeObj, jlong markerIds_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectDiamonds_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        Mat& markerIds = *((Mat*)markerIds_nativeObj);
        (*me)->detectDiamonds( image, diamondCorners, diamondIds, markerCorners, markerIds );
        vector_Mat_to_Mat( diamondCorners, diamondCorners_mat );
        vector_Mat_to_Mat( markerCorners, markerCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj, jlong markerCorners_mat_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectDiamonds_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        std::vector<Mat> markerCorners;
        Mat& markerCorners_mat = *((Mat*)markerCorners_mat_nativeObj);
        Mat_to_vector_Mat( markerCorners_mat, markerCorners );
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        (*me)->detectDiamonds( image, diamondCorners, diamondIds, markerCorners );
        vector_Mat_to_Mat( diamondCorners, diamondCorners_mat );
        vector_Mat_to_Mat( markerCorners, markerCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_detectDiamonds_12
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong diamondCorners_mat_nativeObj, jlong diamondIds_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::detectDiamonds_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> diamondCorners;
        Mat& diamondCorners_mat = *((Mat*)diamondCorners_mat_nativeObj);
        Ptr<cv::aruco::CharucoDetector>* me = (Ptr<cv::aruco::CharucoDetector>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& diamondIds = *((Mat*)diamondIds_nativeObj);
        (*me)->detectDiamonds( image, diamondCorners, diamondIds );
        vector_Mat_to_Mat( diamondCorners, diamondCorners_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::aruco::CharucoDetector>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::aruco::CharucoDetector>*) self;
}


//
//   cv::aruco::CharucoParameters::CharucoParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_CharucoParameters_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_CharucoParameters_10
  (JNIEnv* env, jclass )
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::CharucoParameters_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* _retval_ = new cv::aruco::CharucoParameters();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Mat CharucoParameters::cameraMatrix
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1cameraMatrix_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1cameraMatrix_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1cameraMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->cameraMatrix;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CharucoParameters::cameraMatrix
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1cameraMatrix_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1cameraMatrix_10
  (JNIEnv* env, jclass , jlong self, jlong cameraMatrix_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1cameraMatrix_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        Mat& cameraMatrix = *((Mat*)cameraMatrix_nativeObj);
        me->cameraMatrix = ( cameraMatrix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Mat CharucoParameters::distCoeffs
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1distCoeffs_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1distCoeffs_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1distCoeffs_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->distCoeffs;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CharucoParameters::distCoeffs
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1distCoeffs_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1distCoeffs_10
  (JNIEnv* env, jclass , jlong self, jlong distCoeffs_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1distCoeffs_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        Mat& distCoeffs = *((Mat*)distCoeffs_nativeObj);
        me->distCoeffs = ( distCoeffs );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int CharucoParameters::minMarkers
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1minMarkers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1minMarkers_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minMarkers_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        return me->minMarkers;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CharucoParameters::minMarkers
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1minMarkers_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1minMarkers_10
  (JNIEnv* env, jclass , jlong self, jint minMarkers)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minMarkers_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        me->minMarkers = ( (int)minMarkers );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool CharucoParameters::tryRefineMarkers
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1tryRefineMarkers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_CharucoParameters_get_1tryRefineMarkers_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1tryRefineMarkers_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        return me->tryRefineMarkers;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void CharucoParameters::tryRefineMarkers
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1tryRefineMarkers_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_set_1tryRefineMarkers_10
  (JNIEnv* env, jclass , jlong self, jboolean tryRefineMarkers)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1tryRefineMarkers_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::CharucoParameters* me = (cv::aruco::CharucoParameters*) self; //TODO: check for NULL
        me->tryRefineMarkers = ( (bool)tryRefineMarkers );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::aruco::CharucoParameters::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_CharucoParameters_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::CharucoParameters*) self;
}


//
//   cv::aruco::DetectorParameters::DetectorParameters()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_DetectorParameters_DetectorParameters_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_DetectorParameters_DetectorParameters_10
  (JNIEnv* env, jclass )
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::DetectorParameters_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* _retval_ = new cv::aruco::DetectorParameters();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// int DetectorParameters::adaptiveThreshWinSizeMin
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeMin_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1adaptiveThreshWinSizeMin_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->adaptiveThreshWinSizeMin;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeMin
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeMin_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeMin_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeMin)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1adaptiveThreshWinSizeMin_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->adaptiveThreshWinSizeMin = ( (int)adaptiveThreshWinSizeMin );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::adaptiveThreshWinSizeMax
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeMax_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1adaptiveThreshWinSizeMax_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->adaptiveThreshWinSizeMax;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeMax
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeMax_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeMax_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeMax)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1adaptiveThreshWinSizeMax_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->adaptiveThreshWinSizeMax = ( (int)adaptiveThreshWinSizeMax );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::adaptiveThreshWinSizeStep
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeStep_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshWinSizeStep_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1adaptiveThreshWinSizeStep_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->adaptiveThreshWinSizeStep;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshWinSizeStep
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeStep_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshWinSizeStep_10
  (JNIEnv* env, jclass , jlong self, jint adaptiveThreshWinSizeStep)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1adaptiveThreshWinSizeStep_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->adaptiveThreshWinSizeStep = ( (int)adaptiveThreshWinSizeStep );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::adaptiveThreshConstant
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshConstant_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1adaptiveThreshConstant_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1adaptiveThreshConstant_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->adaptiveThreshConstant;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::adaptiveThreshConstant
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshConstant_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1adaptiveThreshConstant_10
  (JNIEnv* env, jclass , jlong self, jdouble adaptiveThreshConstant)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1adaptiveThreshConstant_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->adaptiveThreshConstant = ( (double)adaptiveThreshConstant );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::minMarkerPerimeterRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minMarkerPerimeterRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minMarkerPerimeterRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minMarkerPerimeterRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minMarkerPerimeterRate = ( (double)minMarkerPerimeterRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::maxMarkerPerimeterRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1maxMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1maxMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1maxMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->maxMarkerPerimeterRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::maxMarkerPerimeterRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1maxMarkerPerimeterRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1maxMarkerPerimeterRate_10
  (JNIEnv* env, jclass , jlong self, jdouble maxMarkerPerimeterRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1maxMarkerPerimeterRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->maxMarkerPerimeterRate = ( (double)maxMarkerPerimeterRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::polygonalApproxAccuracyRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1polygonalApproxAccuracyRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1polygonalApproxAccuracyRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1polygonalApproxAccuracyRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->polygonalApproxAccuracyRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::polygonalApproxAccuracyRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1polygonalApproxAccuracyRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1polygonalApproxAccuracyRate_10
  (JNIEnv* env, jclass , jlong self, jdouble polygonalApproxAccuracyRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1polygonalApproxAccuracyRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->polygonalApproxAccuracyRate = ( (double)polygonalApproxAccuracyRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::minCornerDistanceRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minCornerDistanceRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minCornerDistanceRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minCornerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minCornerDistanceRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minCornerDistanceRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minCornerDistanceRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minCornerDistanceRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minCornerDistanceRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minCornerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minCornerDistanceRate = ( (double)minCornerDistanceRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::minDistanceToBorder
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minDistanceToBorder_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minDistanceToBorder_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minDistanceToBorder_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minDistanceToBorder;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minDistanceToBorder
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minDistanceToBorder_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minDistanceToBorder_10
  (JNIEnv* env, jclass , jlong self, jint minDistanceToBorder)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minDistanceToBorder_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minDistanceToBorder = ( (int)minDistanceToBorder );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::minMarkerDistanceRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerDistanceRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerDistanceRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minMarkerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minMarkerDistanceRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minMarkerDistanceRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerDistanceRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerDistanceRate_10
  (JNIEnv* env, jclass , jlong self, jdouble minMarkerDistanceRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minMarkerDistanceRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minMarkerDistanceRate = ( (double)minMarkerDistanceRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::minGroupDistance
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minGroupDistance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minGroupDistance_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minGroupDistance_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minGroupDistance;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minGroupDistance
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minGroupDistance_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minGroupDistance_10
  (JNIEnv* env, jclass , jlong self, jfloat minGroupDistance)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minGroupDistance_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minGroupDistance = ( (float)minGroupDistance );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::cornerRefinementMethod
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMethod_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMethod_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1cornerRefinementMethod_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->cornerRefinementMethod;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMethod
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMethod_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMethod_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementMethod)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1cornerRefinementMethod_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->cornerRefinementMethod = ( (int)cornerRefinementMethod );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::cornerRefinementWinSize
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1cornerRefinementWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->cornerRefinementWinSize;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementWinSize
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementWinSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementWinSize_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementWinSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1cornerRefinementWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->cornerRefinementWinSize = ( (int)cornerRefinementWinSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::relativeCornerRefinmentWinSize
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1relativeCornerRefinmentWinSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1relativeCornerRefinmentWinSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1relativeCornerRefinmentWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->relativeCornerRefinmentWinSize;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::relativeCornerRefinmentWinSize
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1relativeCornerRefinmentWinSize_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1relativeCornerRefinmentWinSize_10
  (JNIEnv* env, jclass , jlong self, jfloat relativeCornerRefinmentWinSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1relativeCornerRefinmentWinSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->relativeCornerRefinmentWinSize = ( (float)relativeCornerRefinmentWinSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::cornerRefinementMaxIterations
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMaxIterations_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMaxIterations_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1cornerRefinementMaxIterations_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->cornerRefinementMaxIterations;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMaxIterations
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMaxIterations_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMaxIterations_10
  (JNIEnv* env, jclass , jlong self, jint cornerRefinementMaxIterations)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1cornerRefinementMaxIterations_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->cornerRefinementMaxIterations = ( (int)cornerRefinementMaxIterations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::cornerRefinementMinAccuracy
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMinAccuracy_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1cornerRefinementMinAccuracy_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1cornerRefinementMinAccuracy_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->cornerRefinementMinAccuracy;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::cornerRefinementMinAccuracy
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMinAccuracy_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1cornerRefinementMinAccuracy_10
  (JNIEnv* env, jclass , jlong self, jdouble cornerRefinementMinAccuracy)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1cornerRefinementMinAccuracy_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->cornerRefinementMinAccuracy = ( (double)cornerRefinementMinAccuracy );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::markerBorderBits
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1markerBorderBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1markerBorderBits_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1markerBorderBits_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->markerBorderBits;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::markerBorderBits
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1markerBorderBits_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1markerBorderBits_10
  (JNIEnv* env, jclass , jlong self, jint markerBorderBits)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1markerBorderBits_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->markerBorderBits = ( (int)markerBorderBits );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::perspectiveRemovePixelPerCell
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1perspectiveRemovePixelPerCell_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1perspectiveRemovePixelPerCell_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1perspectiveRemovePixelPerCell_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->perspectiveRemovePixelPerCell;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::perspectiveRemovePixelPerCell
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1perspectiveRemovePixelPerCell_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1perspectiveRemovePixelPerCell_10
  (JNIEnv* env, jclass , jlong self, jint perspectiveRemovePixelPerCell)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1perspectiveRemovePixelPerCell_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->perspectiveRemovePixelPerCell = ( (int)perspectiveRemovePixelPerCell );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::perspectiveRemoveIgnoredMarginPerCell
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1perspectiveRemoveIgnoredMarginPerCell_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1perspectiveRemoveIgnoredMarginPerCell_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1perspectiveRemoveIgnoredMarginPerCell_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->perspectiveRemoveIgnoredMarginPerCell;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::perspectiveRemoveIgnoredMarginPerCell
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1perspectiveRemoveIgnoredMarginPerCell_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1perspectiveRemoveIgnoredMarginPerCell_10
  (JNIEnv* env, jclass , jlong self, jdouble perspectiveRemoveIgnoredMarginPerCell)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1perspectiveRemoveIgnoredMarginPerCell_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->perspectiveRemoveIgnoredMarginPerCell = ( (double)perspectiveRemoveIgnoredMarginPerCell );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::maxErroneousBitsInBorderRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1maxErroneousBitsInBorderRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1maxErroneousBitsInBorderRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1maxErroneousBitsInBorderRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->maxErroneousBitsInBorderRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::maxErroneousBitsInBorderRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1maxErroneousBitsInBorderRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1maxErroneousBitsInBorderRate_10
  (JNIEnv* env, jclass , jlong self, jdouble maxErroneousBitsInBorderRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1maxErroneousBitsInBorderRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->maxErroneousBitsInBorderRate = ( (double)maxErroneousBitsInBorderRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::minOtsuStdDev
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minOtsuStdDev_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minOtsuStdDev_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minOtsuStdDev_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minOtsuStdDev;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minOtsuStdDev
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minOtsuStdDev_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minOtsuStdDev_10
  (JNIEnv* env, jclass , jlong self, jdouble minOtsuStdDev)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minOtsuStdDev_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minOtsuStdDev = ( (double)minOtsuStdDev );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// double DetectorParameters::errorCorrectionRate
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->errorCorrectionRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::errorCorrectionRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self, jdouble errorCorrectionRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->errorCorrectionRate = ( (double)errorCorrectionRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::aprilTagQuadDecimate
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagQuadDecimate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagQuadDecimate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagQuadDecimate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagQuadDecimate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagQuadDecimate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagQuadDecimate_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagQuadDecimate_10
  (JNIEnv* env, jclass , jlong self, jfloat aprilTagQuadDecimate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagQuadDecimate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagQuadDecimate = ( (float)aprilTagQuadDecimate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::aprilTagQuadSigma
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagQuadSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagQuadSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagQuadSigma_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagQuadSigma;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagQuadSigma
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagQuadSigma_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagQuadSigma_10
  (JNIEnv* env, jclass , jlong self, jfloat aprilTagQuadSigma)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagQuadSigma_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagQuadSigma = ( (float)aprilTagQuadSigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::aprilTagMinClusterPixels
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMinClusterPixels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMinClusterPixels_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagMinClusterPixels_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagMinClusterPixels;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagMinClusterPixels
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMinClusterPixels_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMinClusterPixels_10
  (JNIEnv* env, jclass , jlong self, jint aprilTagMinClusterPixels)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagMinClusterPixels_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagMinClusterPixels = ( (int)aprilTagMinClusterPixels );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::aprilTagMaxNmaxima
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMaxNmaxima_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMaxNmaxima_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagMaxNmaxima_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagMaxNmaxima;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagMaxNmaxima
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMaxNmaxima_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMaxNmaxima_10
  (JNIEnv* env, jclass , jlong self, jint aprilTagMaxNmaxima)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagMaxNmaxima_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagMaxNmaxima = ( (int)aprilTagMaxNmaxima );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::aprilTagCriticalRad
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagCriticalRad_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagCriticalRad_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagCriticalRad_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagCriticalRad;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagCriticalRad
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagCriticalRad_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagCriticalRad_10
  (JNIEnv* env, jclass , jlong self, jfloat aprilTagCriticalRad)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagCriticalRad_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagCriticalRad = ( (float)aprilTagCriticalRad );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::aprilTagMaxLineFitMse
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMaxLineFitMse_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMaxLineFitMse_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagMaxLineFitMse_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagMaxLineFitMse;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagMaxLineFitMse
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMaxLineFitMse_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMaxLineFitMse_10
  (JNIEnv* env, jclass , jlong self, jfloat aprilTagMaxLineFitMse)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagMaxLineFitMse_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagMaxLineFitMse = ( (float)aprilTagMaxLineFitMse );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::aprilTagMinWhiteBlackDiff
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMinWhiteBlackDiff_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagMinWhiteBlackDiff_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagMinWhiteBlackDiff_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagMinWhiteBlackDiff;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagMinWhiteBlackDiff
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMinWhiteBlackDiff_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagMinWhiteBlackDiff_10
  (JNIEnv* env, jclass , jlong self, jint aprilTagMinWhiteBlackDiff)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagMinWhiteBlackDiff_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagMinWhiteBlackDiff = ( (int)aprilTagMinWhiteBlackDiff );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::aprilTagDeglitch
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagDeglitch_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1aprilTagDeglitch_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1aprilTagDeglitch_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->aprilTagDeglitch;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::aprilTagDeglitch
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagDeglitch_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1aprilTagDeglitch_10
  (JNIEnv* env, jclass , jlong self, jint aprilTagDeglitch)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1aprilTagDeglitch_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->aprilTagDeglitch = ( (int)aprilTagDeglitch );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool DetectorParameters::detectInvertedMarker
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1detectInvertedMarker_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1detectInvertedMarker_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1detectInvertedMarker_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->detectInvertedMarker;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::detectInvertedMarker
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1detectInvertedMarker_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1detectInvertedMarker_10
  (JNIEnv* env, jclass , jlong self, jboolean detectInvertedMarker)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1detectInvertedMarker_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->detectInvertedMarker = ( (bool)detectInvertedMarker );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool DetectorParameters::useAruco3Detection
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1useAruco3Detection_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1useAruco3Detection_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1useAruco3Detection_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->useAruco3Detection;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::useAruco3Detection
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1useAruco3Detection_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1useAruco3Detection_10
  (JNIEnv* env, jclass , jlong self, jboolean useAruco3Detection)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1useAruco3Detection_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->useAruco3Detection = ( (bool)useAruco3Detection );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int DetectorParameters::minSideLengthCanonicalImg
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minSideLengthCanonicalImg_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minSideLengthCanonicalImg_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minSideLengthCanonicalImg_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minSideLengthCanonicalImg;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minSideLengthCanonicalImg
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minSideLengthCanonicalImg_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minSideLengthCanonicalImg_10
  (JNIEnv* env, jclass , jlong self, jint minSideLengthCanonicalImg)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minSideLengthCanonicalImg_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minSideLengthCanonicalImg = ( (int)minSideLengthCanonicalImg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float DetectorParameters::minMarkerLengthRatioOriginalImg
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerLengthRatioOriginalImg_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_DetectorParameters_get_1minMarkerLengthRatioOriginalImg_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minMarkerLengthRatioOriginalImg_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        return me->minMarkerLengthRatioOriginalImg;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void DetectorParameters::minMarkerLengthRatioOriginalImg
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerLengthRatioOriginalImg_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_set_1minMarkerLengthRatioOriginalImg_10
  (JNIEnv* env, jclass , jlong self, jfloat minMarkerLengthRatioOriginalImg)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minMarkerLengthRatioOriginalImg_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::DetectorParameters* me = (cv::aruco::DetectorParameters*) self; //TODO: check for NULL
        me->minMarkerLengthRatioOriginalImg = ( (float)minMarkerLengthRatioOriginalImg );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::aruco::DetectorParameters::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_DetectorParameters_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::DetectorParameters*) self;
}


//
//   cv::aruco::Dictionary::Dictionary()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_10
  (JNIEnv* env, jclass )
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::Dictionary_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* _retval_ = new cv::aruco::Dictionary();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::aruco::Dictionary::Dictionary(Mat bytesList, int _markerSize, int maxcorr = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_11
  (JNIEnv* env, jclass , jlong bytesList_nativeObj, jint _markerSize, jint maxcorr)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::Dictionary_11()";
    try {
        LOGD("%s", method_name);
        Mat& bytesList = *((Mat*)bytesList_nativeObj);
        cv::aruco::Dictionary* _retval_ = new cv::aruco::Dictionary( bytesList, (int)_markerSize, (int)maxcorr );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_12 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_Dictionary_12
  (JNIEnv* env, jclass , jlong bytesList_nativeObj, jint _markerSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::Dictionary_12()";
    try {
        LOGD("%s", method_name);
        Mat& bytesList = *((Mat*)bytesList_nativeObj);
        cv::aruco::Dictionary* _retval_ = new cv::aruco::Dictionary( bytesList, (int)_markerSize );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::aruco::Dictionary::identify(Mat onlyBits, int& idx, int& rotation, double maxCorrectionRate)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_Dictionary_identify_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_Dictionary_identify_10
  (JNIEnv* env, jclass , jlong self, jlong onlyBits_nativeObj, jdoubleArray idx_out, jdoubleArray rotation_out, jdouble maxCorrectionRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::identify_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& onlyBits = *((Mat*)onlyBits_nativeObj);
        int idx;
        int rotation;
        bool _retval_ = me->identify( onlyBits, idx, rotation, (double)maxCorrectionRate );
        jdouble tmp_idx[1] = {(jdouble)idx}; env->SetDoubleArrayRegion(idx_out, 0, 1, tmp_idx);
        jdouble tmp_rotation[1] = {(jdouble)rotation}; env->SetDoubleArrayRegion(rotation_out, 0, 1, tmp_rotation);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::aruco::Dictionary::getDistanceToId(Mat bits, int id, bool allRotations = true)
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_getDistanceToId_10 (JNIEnv*, jclass, jlong, jlong, jint, jboolean);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_getDistanceToId_10
  (JNIEnv* env, jclass , jlong self, jlong bits_nativeObj, jint id, jboolean allRotations)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDistanceToId_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& bits = *((Mat*)bits_nativeObj);
        return me->getDistanceToId( bits, (int)id, (bool)allRotations );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_getDistanceToId_11 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_getDistanceToId_11
  (JNIEnv* env, jclass , jlong self, jlong bits_nativeObj, jint id)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getDistanceToId_11()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& bits = *((Mat*)bits_nativeObj);
        return me->getDistanceToId( bits, (int)id );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::aruco::Dictionary::generateImageMarker(int id, int sidePixels, Mat& _img, int borderBits = 1)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_generateImageMarker_10 (JNIEnv*, jclass, jlong, jint, jint, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_generateImageMarker_10
  (JNIEnv* env, jclass , jlong self, jint id, jint sidePixels, jlong _img_nativeObj, jint borderBits)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::generateImageMarker_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& _img = *((Mat*)_img_nativeObj);
        me->generateImageMarker( (int)id, (int)sidePixels, _img, (int)borderBits );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_generateImageMarker_11 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_generateImageMarker_11
  (JNIEnv* env, jclass , jlong self, jint id, jint sidePixels, jlong _img_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::generateImageMarker_11()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& _img = *((Mat*)_img_nativeObj);
        me->generateImageMarker( (int)id, (int)sidePixels, _img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// static Mat cv::aruco::Dictionary::getByteListFromBits(Mat bits)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_getByteListFromBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_getByteListFromBits_10
  (JNIEnv* env, jclass , jlong bits_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getByteListFromBits_10()";
    try {
        LOGD("%s", method_name);
        Mat& bits = *((Mat*)bits_nativeObj);
        cv::Mat _retval_ = cv::aruco::Dictionary::getByteListFromBits( bits );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Mat cv::aruco::Dictionary::getBitsFromByteList(Mat byteList, int markerSize)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_getBitsFromByteList_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_getBitsFromByteList_10
  (JNIEnv* env, jclass , jlong byteList_nativeObj, jint markerSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getBitsFromByteList_10()";
    try {
        LOGD("%s", method_name);
        Mat& byteList = *((Mat*)byteList_nativeObj);
        cv::Mat _retval_ = cv::aruco::Dictionary::getBitsFromByteList( byteList, (int)markerSize );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// Mat Dictionary::bytesList
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_get_1bytesList_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_Dictionary_get_1bytesList_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1bytesList_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->bytesList;//();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Dictionary::bytesList
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1bytesList_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1bytesList_10
  (JNIEnv* env, jclass , jlong self, jlong bytesList_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1bytesList_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        Mat& bytesList = *((Mat*)bytesList_nativeObj);
        me->bytesList = ( bytesList );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int Dictionary::markerSize
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_get_1markerSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_get_1markerSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1markerSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        return me->markerSize;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Dictionary::markerSize
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1markerSize_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1markerSize_10
  (JNIEnv* env, jclass , jlong self, jint markerSize)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1markerSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        me->markerSize = ( (int)markerSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int Dictionary::maxCorrectionBits
//

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_get_1maxCorrectionBits_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_objdetect_Dictionary_get_1maxCorrectionBits_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1maxCorrectionBits_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        return me->maxCorrectionBits;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Dictionary::maxCorrectionBits
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1maxCorrectionBits_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_set_1maxCorrectionBits_10
  (JNIEnv* env, jclass , jlong self, jint maxCorrectionBits)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1maxCorrectionBits_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::Dictionary* me = (cv::aruco::Dictionary*) self; //TODO: check for NULL
        me->maxCorrectionBits = ( (int)maxCorrectionBits );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::aruco::Dictionary::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_Dictionary_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::Dictionary*) self;
}


//
//   cv::aruco::GridBoard::GridBoard(Size size, float markerLength, float markerSeparation, Dictionary dictionary, Mat ids = Mat())
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_GridBoard_GridBoard_10 (JNIEnv*, jclass, jdouble, jdouble, jfloat, jfloat, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_GridBoard_GridBoard_10
  (JNIEnv* env, jclass , jdouble size_width, jdouble size_height, jfloat markerLength, jfloat markerSeparation, jlong dictionary_nativeObj, jlong ids_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::GridBoard_10()";
    try {
        LOGD("%s", method_name);
        Size size((int)size_width, (int)size_height);
        Mat& ids = *((Mat*)ids_nativeObj);
        cv::aruco::GridBoard* _retval_ = new cv::aruco::GridBoard( size, (float)markerLength, (float)markerSeparation, (*(cv::aruco::Dictionary*)dictionary_nativeObj), ids );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_GridBoard_GridBoard_11 (JNIEnv*, jclass, jdouble, jdouble, jfloat, jfloat, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_GridBoard_GridBoard_11
  (JNIEnv* env, jclass , jdouble size_width, jdouble size_height, jfloat markerLength, jfloat markerSeparation, jlong dictionary_nativeObj)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::GridBoard_11()";
    try {
        LOGD("%s", method_name);
        Size size((int)size_width, (int)size_height);
        cv::aruco::GridBoard* _retval_ = new cv::aruco::GridBoard( size, (float)markerLength, (float)markerSeparation, (*(cv::aruco::Dictionary*)dictionary_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Size cv::aruco::GridBoard::getGridSize()
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_GridBoard_getGridSize_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_objdetect_GridBoard_getGridSize_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getGridSize_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::GridBoard* me = (cv::aruco::GridBoard*) self; //TODO: check for NULL
        Size _retval_ = me->getGridSize();
        jdoubleArray _da_retval_ = env->NewDoubleArray(2);  jdouble _tmp_retval_[2] = {(jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 2, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::aruco::GridBoard::getMarkerLength()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_GridBoard_getMarkerLength_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_GridBoard_getMarkerLength_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getMarkerLength_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::GridBoard* me = (cv::aruco::GridBoard*) self; //TODO: check for NULL
        return me->getMarkerLength();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::aruco::GridBoard::getMarkerSeparation()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_GridBoard_getMarkerSeparation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_GridBoard_getMarkerSeparation_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::getMarkerSeparation_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::GridBoard* me = (cv::aruco::GridBoard*) self; //TODO: check for NULL
        return me->getMarkerSeparation();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::aruco::GridBoard::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_GridBoard_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_GridBoard_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::GridBoard*) self;
}


//
//   cv::aruco::RefineParameters::RefineParameters(float minRepDistance = 10.f, float errorCorrectionRate = 3.f, bool checkAllOrders = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_10 (JNIEnv*, jclass, jfloat, jfloat, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_10
  (JNIEnv* env, jclass , jfloat minRepDistance, jfloat errorCorrectionRate, jboolean checkAllOrders)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::RefineParameters_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* _retval_ = new cv::aruco::RefineParameters( (float)minRepDistance, (float)errorCorrectionRate, (bool)checkAllOrders );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_11 (JNIEnv*, jclass, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_11
  (JNIEnv* env, jclass , jfloat minRepDistance, jfloat errorCorrectionRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::RefineParameters_11()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* _retval_ = new cv::aruco::RefineParameters( (float)minRepDistance, (float)errorCorrectionRate );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_12 (JNIEnv*, jclass, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_12
  (JNIEnv* env, jclass , jfloat minRepDistance)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::RefineParameters_12()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* _retval_ = new cv::aruco::RefineParameters( (float)minRepDistance );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_13 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_RefineParameters_RefineParameters_13
  (JNIEnv* env, jclass )
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::RefineParameters_13()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* _retval_ = new cv::aruco::RefineParameters();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// float RefineParameters::minRepDistance
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_RefineParameters_get_1minRepDistance_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_RefineParameters_get_1minRepDistance_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1minRepDistance_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        return me->minRepDistance;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void RefineParameters::minRepDistance
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1minRepDistance_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1minRepDistance_10
  (JNIEnv* env, jclass , jlong self, jfloat minRepDistance)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1minRepDistance_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        me->minRepDistance = ( (float)minRepDistance );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// float RefineParameters::errorCorrectionRate
//

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_RefineParameters_get_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_objdetect_RefineParameters_get_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        return me->errorCorrectionRate;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void RefineParameters::errorCorrectionRate
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1errorCorrectionRate_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1errorCorrectionRate_10
  (JNIEnv* env, jclass , jlong self, jfloat errorCorrectionRate)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1errorCorrectionRate_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        me->errorCorrectionRate = ( (float)errorCorrectionRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool RefineParameters::checkAllOrders
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_RefineParameters_get_1checkAllOrders_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_RefineParameters_get_1checkAllOrders_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::get_1checkAllOrders_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        return me->checkAllOrders;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void RefineParameters::checkAllOrders
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1checkAllOrders_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_set_1checkAllOrders_10
  (JNIEnv* env, jclass , jlong self, jboolean checkAllOrders)
{
    using namespace cv::aruco;
    static const char method_name[] = "objdetect::set_1checkAllOrders_10()";
    try {
        LOGD("%s", method_name);
        cv::aruco::RefineParameters* me = (cv::aruco::RefineParameters*) self; //TODO: check for NULL
        me->checkAllOrders = ( (bool)checkAllOrders );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::aruco::RefineParameters::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_RefineParameters_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::aruco::RefineParameters*) self;
}


//
//   cv::barcode::BarcodeDetector::BarcodeDetector()
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_BarcodeDetector_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_BarcodeDetector_10
  (JNIEnv* env, jclass )
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::BarcodeDetector_10()";
    try {
        LOGD("%s", method_name);
        cv::barcode::BarcodeDetector* _retval_ = new cv::barcode::BarcodeDetector();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::barcode::BarcodeDetector::BarcodeDetector(string prototxt_path, string model_path)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_BarcodeDetector_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_BarcodeDetector_11
  (JNIEnv* env, jclass , jstring prototxt_path, jstring model_path)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::BarcodeDetector_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_prototxt_path = env->GetStringUTFChars(prototxt_path, 0); std::string n_prototxt_path( utf_prototxt_path ? utf_prototxt_path : "" ); env->ReleaseStringUTFChars(prototxt_path, utf_prototxt_path);
        const char* utf_model_path = env->GetStringUTFChars(model_path, 0); std::string n_model_path( utf_model_path ? utf_model_path : "" ); env->ReleaseStringUTFChars(model_path, utf_model_path);
        cv::barcode::BarcodeDetector* _retval_ = new cv::barcode::BarcodeDetector( n_prototxt_path, n_model_path );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::barcode::BarcodeDetector::decodeWithType(Mat img, Mat points, vector_string& decoded_info, vector_string& decoded_type)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_decodeWithType_10 (JNIEnv*, jclass, jlong, jlong, jlong, jobject, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_decodeWithType_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jlong points_nativeObj, jobject decoded_info_list, jobject decoded_type_list)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::decodeWithType_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        std::vector< std::string > decoded_type;
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->decodeWithType( img, points, decoded_info, decoded_type );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        Copy_vector_string_to_List(env,decoded_type,decoded_type_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::barcode::BarcodeDetector::detectAndDecodeWithType(Mat img, vector_string& decoded_info, vector_string& decoded_type, Mat& points = Mat())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_detectAndDecodeWithType_10 (JNIEnv*, jclass, jlong, jlong, jobject, jobject, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_detectAndDecodeWithType_10
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jobject decoded_info_list, jobject decoded_type_list, jlong points_nativeObj)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::detectAndDecodeWithType_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        std::vector< std::string > decoded_type;
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        Mat& points = *((Mat*)points_nativeObj);
        bool _retval_ = me->detectAndDecodeWithType( img, decoded_info, decoded_type, points );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        Copy_vector_string_to_List(env,decoded_type,decoded_type_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_detectAndDecodeWithType_11 (JNIEnv*, jclass, jlong, jlong, jobject, jobject);

JNIEXPORT jboolean JNICALL Java_org_opencv_objdetect_BarcodeDetector_detectAndDecodeWithType_11
  (JNIEnv* env, jclass , jlong self, jlong img_nativeObj, jobject decoded_info_list, jobject decoded_type_list)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::detectAndDecodeWithType_11()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > decoded_info;
        std::vector< std::string > decoded_type;
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = me->detectAndDecodeWithType( img, decoded_info, decoded_type );
        Copy_vector_string_to_List(env,decoded_info,decoded_info_list);
        Copy_vector_string_to_List(env,decoded_type,decoded_type_list);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::barcode::BarcodeDetector::getDownsamplingThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_BarcodeDetector_getDownsamplingThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_BarcodeDetector_getDownsamplingThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::getDownsamplingThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        return me->getDownsamplingThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  BarcodeDetector cv::barcode::BarcodeDetector::setDownsamplingThreshold(double thresh)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setDownsamplingThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setDownsamplingThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble thresh)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::setDownsamplingThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        cv::barcode::BarcodeDetector _retval_ = me->setDownsamplingThreshold( (double)thresh );
        return (jlong) new cv::barcode::BarcodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::barcode::BarcodeDetector::getDetectorScales(vector_float& sizes)
//

JNIEXPORT void JNICALL Java_org_opencv_objdetect_BarcodeDetector_getDetectorScales_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_BarcodeDetector_getDetectorScales_10
  (JNIEnv* env, jclass , jlong self, jlong sizes_mat_nativeObj)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::getDetectorScales_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> sizes;
        Mat& sizes_mat = *((Mat*)sizes_mat_nativeObj);
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        me->getDetectorScales( sizes );
        vector_float_to_Mat( sizes, sizes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  BarcodeDetector cv::barcode::BarcodeDetector::setDetectorScales(vector_float sizes)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setDetectorScales_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setDetectorScales_10
  (JNIEnv* env, jclass , jlong self, jlong sizes_mat_nativeObj)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::setDetectorScales_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> sizes;
        Mat& sizes_mat = *((Mat*)sizes_mat_nativeObj);
        Mat_to_vector_float( sizes_mat, sizes );
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        cv::barcode::BarcodeDetector _retval_ = me->setDetectorScales( sizes );
        return (jlong) new cv::barcode::BarcodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::barcode::BarcodeDetector::getGradientThreshold()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_BarcodeDetector_getGradientThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_objdetect_BarcodeDetector_getGradientThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::getGradientThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        return me->getGradientThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  BarcodeDetector cv::barcode::BarcodeDetector::setGradientThreshold(double thresh)
//

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setGradientThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_objdetect_BarcodeDetector_setGradientThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble thresh)
{
    using namespace cv::barcode;
    static const char method_name[] = "objdetect::setGradientThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::barcode::BarcodeDetector* me = (cv::barcode::BarcodeDetector*) self; //TODO: check for NULL
        cv::barcode::BarcodeDetector _retval_ = me->setGradientThreshold( (double)thresh );
        return (jlong) new cv::barcode::BarcodeDetector(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::barcode::BarcodeDetector::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_objdetect_BarcodeDetector_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_objdetect_BarcodeDetector_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::barcode::BarcodeDetector*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_OBJDETECT
