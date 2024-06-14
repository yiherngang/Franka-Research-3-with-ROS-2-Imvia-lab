//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_VIDEOIO

#include <string>

#include "opencv2/videoio.hpp"

#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/videoio/include/opencv2/videoio.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/videoio/include/opencv2/videoio/registry.hpp"

#define LOG_TAG "org.opencv.videoio"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_videoio
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
//   cv::VideoCapture::VideoCapture()
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "videoio::VideoCapture_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>();
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoCapture::VideoCapture(String filename, int apiPreference = CAP_ANY)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_11 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_11
  (JNIEnv* env, jclass , jstring filename, jint apiPreference)
{
    
    static const char method_name[] = "videoio::VideoCapture_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( n_filename, (int)apiPreference );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_12
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "videoio::VideoCapture_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( n_filename );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoCapture::VideoCapture(String filename, int apiPreference, vector_int params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_13 (JNIEnv*, jclass, jstring, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_13
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::VideoCapture_13()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( n_filename, (int)apiPreference, params );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoCapture::VideoCapture(int index, int apiPreference = CAP_ANY)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_14 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_14
  (JNIEnv* env, jclass , jint index, jint apiPreference)
{
    
    static const char method_name[] = "videoio::VideoCapture_14()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( (int)index, (int)apiPreference );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_15 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_15
  (JNIEnv* env, jclass , jint index)
{
    
    static const char method_name[] = "videoio::VideoCapture_15()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( (int)index );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoCapture::VideoCapture(int index, int apiPreference, vector_int params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_16 (JNIEnv*, jclass, jint, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoCapture_VideoCapture_16
  (JNIEnv* env, jclass , jint index, jint apiPreference, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::VideoCapture_16()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        Ptr<cv::VideoCapture> _retval_ = makePtr<cv::VideoCapture>( (int)index, (int)apiPreference, params );
        return (jlong)(new Ptr<cv::VideoCapture>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::open(String filename, int apiPreference = CAP_ANY)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_10 (JNIEnv*, jclass, jlong, jstring, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference)
{
    
    static const char method_name[] = "videoio::open_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return (*me)->open( n_filename, (int)apiPreference );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_11
  (JNIEnv* env, jclass , jlong self, jstring filename)
{
    
    static const char method_name[] = "videoio::open_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return (*me)->open( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::open(String filename, int apiPreference, vector_int params)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_12 (JNIEnv*, jclass, jlong, jstring, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_12
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::open_12()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return (*me)->open( n_filename, (int)apiPreference, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::open(int index, int apiPreference = CAP_ANY)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_13 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_13
  (JNIEnv* env, jclass , jlong self, jint index, jint apiPreference)
{
    
    static const char method_name[] = "videoio::open_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->open( (int)index, (int)apiPreference );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_14 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_14
  (JNIEnv* env, jclass , jlong self, jint index)
{
    
    static const char method_name[] = "videoio::open_14()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->open( (int)index );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::open(int index, int apiPreference, vector_int params)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_15 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_open_15
  (JNIEnv* env, jclass , jlong self, jint index, jint apiPreference, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::open_15()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->open( (int)index, (int)apiPreference, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::isOpened()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_isOpened_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_isOpened_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::isOpened_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->isOpened();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VideoCapture::release()
//

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_release_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_release_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::release_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        (*me)->release();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::VideoCapture::grab()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_grab_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_grab_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::grab_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->grab();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::retrieve(Mat& image, int flag = 0)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_10 (JNIEnv*, jclass, jlong, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jint flag)
{
    
    static const char method_name[] = "videoio::retrieve_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        return (*me)->retrieve( image, (int)flag );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_retrieve_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    
    static const char method_name[] = "videoio::retrieve_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        return (*me)->retrieve( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::read(Mat& image)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_read_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_read_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    
    static const char method_name[] = "videoio::read_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        return (*me)->read( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoCapture::set(int propId, double value)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_set_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_set_10
  (JNIEnv* env, jclass , jlong self, jint propId, jdouble value)
{
    
    static const char method_name[] = "videoio::set_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->set( (int)propId, (double)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::VideoCapture::get(int propId)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoCapture_get_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoCapture_get_10
  (JNIEnv* env, jclass , jlong self, jint propId)
{
    
    static const char method_name[] = "videoio::get_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->get( (int)propId );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String cv::VideoCapture::getBackendName()
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_VideoCapture_getBackendName_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_VideoCapture_getBackendName_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::getBackendName_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->getBackendName();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void cv::VideoCapture::setExceptionMode(bool enable)
//

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_setExceptionMode_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_setExceptionMode_10
  (JNIEnv* env, jclass , jlong self, jboolean enable)
{
    
    static const char method_name[] = "videoio::setExceptionMode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        (*me)->setExceptionMode( (bool)enable );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::VideoCapture::getExceptionMode()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_getExceptionMode_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoCapture_getExceptionMode_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::getExceptionMode_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoCapture>* me = (Ptr<cv::VideoCapture>*) self; //TODO: check for NULL
        return (*me)->getExceptionMode();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::VideoCapture>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoCapture_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::VideoCapture>*) self;
}


//
//   cv::VideoWriter::VideoWriter()
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "videoio::VideoWriter_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>();
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoWriter::VideoWriter(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_11 (JNIEnv*, jclass, jstring, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_11
  (JNIEnv* env, jclass , jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    
    static const char method_name[] = "videoio::VideoWriter_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_12 (JNIEnv*, jclass, jstring, jint, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_12
  (JNIEnv* env, jclass , jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    
    static const char method_name[] = "videoio::VideoWriter_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)fourcc, (double)fps, frameSize );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoWriter::VideoWriter(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_13 (JNIEnv*, jclass, jstring, jint, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_13
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    
    static const char method_name[] = "videoio::VideoWriter_13()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, (bool)isColor );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_14 (JNIEnv*, jclass, jstring, jint, jint, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_14
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    
    static const char method_name[] = "videoio::VideoWriter_14()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoWriter::VideoWriter(String filename, int fourcc, double fps, Size frameSize, vector_int params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_15 (JNIEnv*, jclass, jstring, jint, jdouble, jdouble, jdouble, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_15
  (JNIEnv* env, jclass , jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::VideoWriter_15()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)fourcc, (double)fps, frameSize, params );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::VideoWriter::VideoWriter(String filename, int apiPreference, int fourcc, double fps, Size frameSize, vector_int params)
//

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_16 (JNIEnv*, jclass, jstring, jint, jint, jdouble, jdouble, jdouble, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_videoio_VideoWriter_VideoWriter_16
  (JNIEnv* env, jclass , jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::VideoWriter_16()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        Ptr<cv::VideoWriter> _retval_ = makePtr<cv::VideoWriter>( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, params );
        return (jlong)(new Ptr<cv::VideoWriter>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoWriter::open(String filename, int fourcc, double fps, Size frameSize, bool isColor = true)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_10 (JNIEnv*, jclass, jlong, jstring, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_10
  (JNIEnv* env, jclass , jlong self, jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    
    static const char method_name[] = "videoio::open_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)fourcc, (double)fps, frameSize, (bool)isColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_11 (JNIEnv*, jclass, jlong, jstring, jint, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_11
  (JNIEnv* env, jclass , jlong self, jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    
    static const char method_name[] = "videoio::open_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)fourcc, (double)fps, frameSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoWriter::open(String filename, int apiPreference, int fourcc, double fps, Size frameSize, bool isColor = true)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_12 (JNIEnv*, jclass, jlong, jstring, jint, jint, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_12
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jboolean isColor)
{
    
    static const char method_name[] = "videoio::open_12()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, (bool)isColor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_13 (JNIEnv*, jclass, jlong, jstring, jint, jint, jdouble, jdouble, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_13
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height)
{
    
    static const char method_name[] = "videoio::open_13()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoWriter::open(String filename, int fourcc, double fps, Size frameSize, vector_int params)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_14 (JNIEnv*, jclass, jlong, jstring, jint, jdouble, jdouble, jdouble, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_14
  (JNIEnv* env, jclass , jlong self, jstring filename, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::open_14()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)fourcc, (double)fps, frameSize, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoWriter::open(String filename, int apiPreference, int fourcc, double fps, Size frameSize, vector_int params)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_15 (JNIEnv*, jclass, jlong, jstring, jint, jint, jdouble, jdouble, jdouble, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_open_15
  (JNIEnv* env, jclass , jlong self, jstring filename, jint apiPreference, jint fourcc, jdouble fps, jdouble frameSize_width, jdouble frameSize_height, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "videoio::open_15()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Size frameSize((int)frameSize_width, (int)frameSize_height);
        return (*me)->open( n_filename, (int)apiPreference, (int)fourcc, (double)fps, frameSize, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::VideoWriter::isOpened()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_isOpened_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_isOpened_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::isOpened_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        return (*me)->isOpened();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::VideoWriter::release()
//

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_release_10 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_release_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::release_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        (*me)->release();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::VideoWriter::write(Mat image)
//

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_write_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_write_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj)
{
    
    static const char method_name[] = "videoio::write_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        (*me)->write( image );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::VideoWriter::set(int propId, double value)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_set_10 (JNIEnv*, jclass, jlong, jint, jdouble);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_VideoWriter_set_10
  (JNIEnv* env, jclass , jlong self, jint propId, jdouble value)
{
    
    static const char method_name[] = "videoio::set_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        return (*me)->set( (int)propId, (double)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::VideoWriter::get(int propId)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoWriter_get_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_videoio_VideoWriter_get_10
  (JNIEnv* env, jclass , jlong self, jint propId)
{
    
    static const char method_name[] = "videoio::get_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        return (*me)->get( (int)propId );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static int cv::VideoWriter::fourcc(char c1, char c2, char c3, char c4)
//

JNIEXPORT jint JNICALL Java_org_opencv_videoio_VideoWriter_fourcc_10 (JNIEnv*, jclass, jchar, jchar, jchar, jchar);

JNIEXPORT jint JNICALL Java_org_opencv_videoio_VideoWriter_fourcc_10
  (JNIEnv* env, jclass , jchar c1, jchar c2, jchar c3, jchar c4)
{
    
    static const char method_name[] = "videoio::fourcc_10()";
    try {
        LOGD("%s", method_name);
        return cv::VideoWriter::fourcc( (char)c1, (char)c2, (char)c3, (char)c4 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String cv::VideoWriter::getBackendName()
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_VideoWriter_getBackendName_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_VideoWriter_getBackendName_10
  (JNIEnv* env, jclass , jlong self)
{
    
    static const char method_name[] = "videoio::getBackendName_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::VideoWriter>* me = (Ptr<cv::VideoWriter>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->getBackendName();
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
//  static void Ptr<cv::VideoWriter>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_videoio_VideoWriter_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::VideoWriter>*) self;
}


//
//  String cv::videoio_registry::getBackendName(VideoCaptureAPIs api)
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getBackendName_10 (JNIEnv*, jclass, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getBackendName_10
  (JNIEnv* env, jclass , jint api)
{
    
    static const char method_name[] = "videoio::getBackendName_10()";
    try {
        LOGD("%s", method_name);
        cv::String _retval_ = cv::videoio_registry::getBackendName( (cv::VideoCaptureAPIs)api );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  bool cv::videoio_registry::hasBackend(VideoCaptureAPIs api)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_Videoio_hasBackend_10 (JNIEnv*, jclass, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_Videoio_hasBackend_10
  (JNIEnv* env, jclass , jint api)
{
    
    static const char method_name[] = "videoio::hasBackend_10()";
    try {
        LOGD("%s", method_name);
        return cv::videoio_registry::hasBackend( (cv::VideoCaptureAPIs)api );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::videoio_registry::isBackendBuiltIn(VideoCaptureAPIs api)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_Videoio_isBackendBuiltIn_10 (JNIEnv*, jclass, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_videoio_Videoio_isBackendBuiltIn_10
  (JNIEnv* env, jclass , jint api)
{
    
    static const char method_name[] = "videoio::isBackendBuiltIn_10()";
    try {
        LOGD("%s", method_name);
        return cv::videoio_registry::isBackendBuiltIn( (cv::VideoCaptureAPIs)api );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  string cv::videoio_registry::getCameraBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getCameraBackendPluginVersion_10 (JNIEnv*, jclass, jint, jdoubleArray, jdoubleArray);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getCameraBackendPluginVersion_10
  (JNIEnv* env, jclass , jint api, jdoubleArray version_ABI_out, jdoubleArray version_API_out)
{
    
    static const char method_name[] = "videoio::getCameraBackendPluginVersion_10()";
    try {
        LOGD("%s", method_name);
        int version_ABI;
        int version_API;
        std::string _retval_ = cv::videoio_registry::getCameraBackendPluginVersion( (cv::VideoCaptureAPIs)api, version_ABI, version_API );
        jdouble tmp_version_ABI[1] = {(jdouble)version_ABI}; env->SetDoubleArrayRegion(version_ABI_out, 0, 1, tmp_version_ABI);
        jdouble tmp_version_API[1] = {(jdouble)version_API}; env->SetDoubleArrayRegion(version_API_out, 0, 1, tmp_version_API);
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  string cv::videoio_registry::getStreamBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getStreamBackendPluginVersion_10 (JNIEnv*, jclass, jint, jdoubleArray, jdoubleArray);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getStreamBackendPluginVersion_10
  (JNIEnv* env, jclass , jint api, jdoubleArray version_ABI_out, jdoubleArray version_API_out)
{
    
    static const char method_name[] = "videoio::getStreamBackendPluginVersion_10()";
    try {
        LOGD("%s", method_name);
        int version_ABI;
        int version_API;
        std::string _retval_ = cv::videoio_registry::getStreamBackendPluginVersion( (cv::VideoCaptureAPIs)api, version_ABI, version_API );
        jdouble tmp_version_ABI[1] = {(jdouble)version_ABI}; env->SetDoubleArrayRegion(version_ABI_out, 0, 1, tmp_version_ABI);
        jdouble tmp_version_API[1] = {(jdouble)version_API}; env->SetDoubleArrayRegion(version_API_out, 0, 1, tmp_version_API);
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  string cv::videoio_registry::getWriterBackendPluginVersion(VideoCaptureAPIs api, int& version_ABI, int& version_API)
//

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getWriterBackendPluginVersion_10 (JNIEnv*, jclass, jint, jdoubleArray, jdoubleArray);

JNIEXPORT jstring JNICALL Java_org_opencv_videoio_Videoio_getWriterBackendPluginVersion_10
  (JNIEnv* env, jclass , jint api, jdoubleArray version_ABI_out, jdoubleArray version_API_out)
{
    
    static const char method_name[] = "videoio::getWriterBackendPluginVersion_10()";
    try {
        LOGD("%s", method_name);
        int version_ABI;
        int version_API;
        std::string _retval_ = cv::videoio_registry::getWriterBackendPluginVersion( (cv::VideoCaptureAPIs)api, version_ABI, version_API );
        jdouble tmp_version_ABI[1] = {(jdouble)version_ABI}; env->SetDoubleArrayRegion(version_ABI_out, 0, 1, tmp_version_ABI);
        jdouble tmp_version_API[1] = {(jdouble)version_API}; env->SetDoubleArrayRegion(version_API_out, 0, 1, tmp_version_API);
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}




} // extern "C"

#endif // HAVE_OPENCV_VIDEOIO
