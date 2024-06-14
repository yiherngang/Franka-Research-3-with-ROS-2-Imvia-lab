//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_IMGCODECS

#include <string>

#include "opencv2/imgcodecs.hpp"

#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/imgcodecs/include/opencv2/imgcodecs.hpp"

#define LOG_TAG "org.opencv.imgcodecs"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_imgcodecs
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
//  Mat cv::imread(String filename, int flags = IMREAD_COLOR)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_10
  (JNIEnv* env, jclass , jstring filename, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imread_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::Mat _retval_ = cv::imread( n_filename, (int)flags );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_11
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "imgcodecs::imread_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::Mat _retval_ = cv::imread( n_filename );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::imread(String filename, Mat& dst, int flags = IMREAD_COLOR)
//

JNIEXPORT void JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_12 (JNIEnv*, jclass, jstring, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_12
  (JNIEnv* env, jclass , jstring filename, jlong dst_nativeObj, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imread_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::imread( n_filename, dst, (int)flags );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_13 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imread_13
  (JNIEnv* env, jclass , jstring filename, jlong dst_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imread_13()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::imread( n_filename, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  bool cv::imreadmulti(String filename, vector_Mat& mats, int flags = IMREAD_ANYCOLOR)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_10 (JNIEnv*, jclass, jstring, jlong, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_10
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imreadmulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats, (int)flags );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_11
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imreadmulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::imreadmulti(String filename, vector_Mat& mats, int start, int count, int flags = IMREAD_ANYCOLOR)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_12 (JNIEnv*, jclass, jstring, jlong, jint, jint, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_12
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj, jint start, jint count, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imreadmulti_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats, (int)start, (int)count, (int)flags );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_13 (JNIEnv*, jclass, jstring, jlong, jint, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imreadmulti_13
  (JNIEnv* env, jclass , jstring filename, jlong mats_mat_nativeObj, jint start, jint count)
{
    
    static const char method_name[] = "imgcodecs::imreadmulti_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        bool _retval_ = cv::imreadmulti( n_filename, mats, (int)start, (int)count );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  size_t cv::imcount(String filename, int flags = IMREAD_ANYCOLOR)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imcount_10 (JNIEnv*, jclass, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imcount_10
  (JNIEnv* env, jclass , jstring filename, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imcount_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::imcount( n_filename, (int)flags );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imcount_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imcount_11
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "imgcodecs::imcount_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::imcount( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::imwrite(String filename, Mat img, vector_int params = std::vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_10 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_10
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imwrite_10()";
    try {
        LOGD("%s", method_name);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        return cv::imwrite( n_filename, img, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwrite_11
  (JNIEnv* env, jclass , jstring filename, jlong img_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imwrite_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        Mat& img = *((Mat*)img_nativeObj);
        return cv::imwrite( n_filename, img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::imwritemulti(String filename, vector_Mat img, vector_int params = std::vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwritemulti_10 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwritemulti_10
  (JNIEnv* env, jclass , jstring filename, jlong img_mat_nativeObj, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imwritemulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> img;
        Mat& img_mat = *((Mat*)img_mat_nativeObj);
        Mat_to_vector_Mat( img_mat, img );
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::imwritemulti( n_filename, img, params );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwritemulti_11 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imwritemulti_11
  (JNIEnv* env, jclass , jstring filename, jlong img_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imwritemulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> img;
        Mat& img_mat = *((Mat*)img_mat_nativeObj);
        Mat_to_vector_Mat( img_mat, img );
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::imwritemulti( n_filename, img );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::imdecode(Mat buf, int flags)
//

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecode_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecode_10
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags)
{
    
    static const char method_name[] = "imgcodecs::imdecode_10()";
    try {
        LOGD("%s", method_name);
        Mat& buf = *((Mat*)buf_nativeObj);
        cv::Mat _retval_ = cv::imdecode( buf, (int)flags );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::imdecodemulti(Mat buf, int flags, vector_Mat& mats, Range range = Range::all())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecodemulti_10 (JNIEnv*, jclass, jlong, jint, jlong, jint, jint);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecodemulti_10
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags, jlong mats_mat_nativeObj, jint range_start, jint range_end)
{
    
    static const char method_name[] = "imgcodecs::imdecodemulti_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        Mat& buf = *((Mat*)buf_nativeObj);
        Range range(range_start, range_end);
        bool _retval_ = cv::imdecodemulti( buf, (int)flags, mats, range );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecodemulti_11 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imdecodemulti_11
  (JNIEnv* env, jclass , jlong buf_nativeObj, jint flags, jlong mats_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imdecodemulti_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> mats;
        Mat& mats_mat = *((Mat*)mats_mat_nativeObj);
        Mat& buf = *((Mat*)buf_nativeObj);
        bool _retval_ = cv::imdecodemulti( buf, (int)flags, mats );
        vector_Mat_to_Mat( mats, mats_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::imencode(String ext, Mat img, vector_uchar& buf, vector_int params = std::vector<int>())
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_10 (JNIEnv*, jclass, jstring, jlong, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_10
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj, jlong params_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imencode_10()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        std::vector<int> params;
        Mat& params_mat = *((Mat*)params_mat_nativeObj);
        Mat_to_vector_int( params_mat, params );
        const char* utf_ext = env->GetStringUTFChars(ext, 0); String n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf, params );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_11 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_imencode_11
  (JNIEnv* env, jclass , jstring ext, jlong img_nativeObj, jlong buf_mat_nativeObj)
{
    
    static const char method_name[] = "imgcodecs::imencode_11()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> buf;
        Mat& buf_mat = *((Mat*)buf_mat_nativeObj);
        const char* utf_ext = env->GetStringUTFChars(ext, 0); String n_ext( utf_ext ? utf_ext : "" ); env->ReleaseStringUTFChars(ext, utf_ext);
        Mat& img = *((Mat*)img_nativeObj);
        bool _retval_ = cv::imencode( n_ext, img, buf );
        vector_uchar_to_Mat( buf, buf_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::haveImageReader(String filename)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_haveImageReader_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_haveImageReader_10
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "imgcodecs::haveImageReader_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::haveImageReader( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::haveImageWriter(String filename)
//

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_haveImageWriter_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jboolean JNICALL Java_org_opencv_imgcodecs_Imgcodecs_haveImageWriter_10
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "imgcodecs::haveImageWriter_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        return cv::haveImageWriter( n_filename );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}




} // extern "C"

#endif // HAVE_OPENCV_IMGCODECS
