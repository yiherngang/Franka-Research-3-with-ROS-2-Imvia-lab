//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_DNN

#include <string>

#include "opencv2/dnn.hpp"

#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/dnn/misc/java/src/cpp/dnn_converters.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/dnn/include/opencv2/dnn/dnn.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/dnn/include/opencv2/dnn/dict.hpp"
#include "/home/adminlab/franka_ros2_ws/src/opencv/modules/dnn/include/opencv2/dnn/utils/inference_engine.hpp"

#define LOG_TAG "org.opencv.dnn"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_dnn
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
//  vector_Target cv::dnn::getAvailableTargets(dnn_Backend be)
//

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Dnn_getAvailableTargets_10 (JNIEnv*, jclass, jint);

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Dnn_getAvailableTargets_10
  (JNIEnv* env, jclass , jint be)
{
    
    static const char method_name[] = "dnn::getAvailableTargets_10()";
    try {
        LOGD("%s", method_name);
        std::vector< cv::dnn::Target > _ret_val_vector_ = cv::dnn::getAvailableTargets( (cv::dnn::Backend)be );
        return vector_Target_to_List(env, _ret_val_vector_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromDarknet(String cfgFile, String darknetModel = String())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_10
  (JNIEnv* env, jclass , jstring cfgFile, jstring darknetModel)
{
    
    static const char method_name[] = "dnn::readNetFromDarknet_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_cfgFile = env->GetStringUTFChars(cfgFile, 0); String n_cfgFile( utf_cfgFile ? utf_cfgFile : "" ); env->ReleaseStringUTFChars(cfgFile, utf_cfgFile);
        const char* utf_darknetModel = env->GetStringUTFChars(darknetModel, 0); String n_darknetModel( utf_darknetModel ? utf_darknetModel : "" ); env->ReleaseStringUTFChars(darknetModel, utf_darknetModel);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( n_cfgFile, n_darknetModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_11
  (JNIEnv* env, jclass , jstring cfgFile)
{
    
    static const char method_name[] = "dnn::readNetFromDarknet_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_cfgFile = env->GetStringUTFChars(cfgFile, 0); String n_cfgFile( utf_cfgFile ? utf_cfgFile : "" ); env->ReleaseStringUTFChars(cfgFile, utf_cfgFile);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( n_cfgFile );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromDarknet(vector_uchar bufferCfg, vector_uchar bufferModel = std::vector<uchar>())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_12
  (JNIEnv* env, jclass , jlong bufferCfg_mat_nativeObj, jlong bufferModel_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromDarknet_12()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferCfg;
        Mat& bufferCfg_mat = *((Mat*)bufferCfg_mat_nativeObj);
        Mat_to_vector_uchar( bufferCfg_mat, bufferCfg );
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( bufferCfg, bufferModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromDarknet_13
  (JNIEnv* env, jclass , jlong bufferCfg_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromDarknet_13()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferCfg;
        Mat& bufferCfg_mat = *((Mat*)bufferCfg_mat_nativeObj);
        Mat_to_vector_uchar( bufferCfg_mat, bufferCfg );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromDarknet( bufferCfg );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromCaffe(String prototxt, String caffeModel = String())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_10
  (JNIEnv* env, jclass , jstring prototxt, jstring caffeModel)
{
    
    static const char method_name[] = "dnn::readNetFromCaffe_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        const char* utf_caffeModel = env->GetStringUTFChars(caffeModel, 0); String n_caffeModel( utf_caffeModel ? utf_caffeModel : "" ); env->ReleaseStringUTFChars(caffeModel, utf_caffeModel);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( n_prototxt, n_caffeModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_11
  (JNIEnv* env, jclass , jstring prototxt)
{
    
    static const char method_name[] = "dnn::readNetFromCaffe_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_prototxt = env->GetStringUTFChars(prototxt, 0); String n_prototxt( utf_prototxt ? utf_prototxt : "" ); env->ReleaseStringUTFChars(prototxt, utf_prototxt);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( n_prototxt );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromCaffe(vector_uchar bufferProto, vector_uchar bufferModel = std::vector<uchar>())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_12
  (JNIEnv* env, jclass , jlong bufferProto_mat_nativeObj, jlong bufferModel_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromCaffe_12()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferProto;
        Mat& bufferProto_mat = *((Mat*)bufferProto_mat_nativeObj);
        Mat_to_vector_uchar( bufferProto_mat, bufferProto );
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( bufferProto, bufferModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromCaffe_13
  (JNIEnv* env, jclass , jlong bufferProto_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromCaffe_13()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferProto;
        Mat& bufferProto_mat = *((Mat*)bufferProto_mat_nativeObj);
        Mat_to_vector_uchar( bufferProto_mat, bufferProto );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromCaffe( bufferProto );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromTensorflow(String model, String config = String())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    
    static const char method_name[] = "dnn::readNetFromTensorflow_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( n_model, n_config );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_11
  (JNIEnv* env, jclass , jstring model)
{
    
    static const char method_name[] = "dnn::readNetFromTensorflow_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromTensorflow(vector_uchar bufferModel, vector_uchar bufferConfig = std::vector<uchar>())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_12
  (JNIEnv* env, jclass , jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromTensorflow_12()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( bufferModel, bufferConfig );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_13 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTensorflow_13
  (JNIEnv* env, jclass , jlong bufferModel_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromTensorflow_13()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTensorflow( bufferModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromTFLite(String model)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTFLite_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTFLite_10
  (JNIEnv* env, jclass , jstring model)
{
    
    static const char method_name[] = "dnn::readNetFromTFLite_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTFLite( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromTFLite(vector_uchar bufferModel)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTFLite_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTFLite_11
  (JNIEnv* env, jclass , jlong bufferModel_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromTFLite_11()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTFLite( bufferModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromTorch(String model, bool isBinary = true, bool evaluate = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_10 (JNIEnv*, jclass, jstring, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_10
  (JNIEnv* env, jclass , jstring model, jboolean isBinary, jboolean evaluate)
{
    
    static const char method_name[] = "dnn::readNetFromTorch_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTorch( n_model, (bool)isBinary, (bool)evaluate );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_11 (JNIEnv*, jclass, jstring, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_11
  (JNIEnv* env, jclass , jstring model, jboolean isBinary)
{
    
    static const char method_name[] = "dnn::readNetFromTorch_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTorch( n_model, (bool)isBinary );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromTorch_12
  (JNIEnv* env, jclass , jstring model)
{
    
    static const char method_name[] = "dnn::readNetFromTorch_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromTorch( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNet(String model, String config = "", String framework = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_10 (JNIEnv*, jclass, jstring, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_10
  (JNIEnv* env, jclass , jstring model, jstring config, jstring framework)
{
    
    static const char method_name[] = "dnn::readNet_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        cv::dnn::Net _retval_ = cv::dnn::readNet( n_model, n_config, n_framework );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_11
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    
    static const char method_name[] = "dnn::readNet_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::Net _retval_ = cv::dnn::readNet( n_model, n_config );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_12
  (JNIEnv* env, jclass , jstring model)
{
    
    static const char method_name[] = "dnn::readNet_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Net _retval_ = cv::dnn::readNet( n_model );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNet(String framework, vector_uchar bufferModel, vector_uchar bufferConfig = std::vector<uchar>())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_13 (JNIEnv*, jclass, jstring, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_13
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj, jlong bufferConfig_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNet_13()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        std::vector<uchar> bufferConfig;
        Mat& bufferConfig_mat = *((Mat*)bufferConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferConfig_mat, bufferConfig );
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        cv::dnn::Net _retval_ = cv::dnn::readNet( n_framework, bufferModel, bufferConfig );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_14 (JNIEnv*, jclass, jstring, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNet_14
  (JNIEnv* env, jclass , jstring framework, jlong bufferModel_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNet_14()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModel;
        Mat& bufferModel_mat = *((Mat*)bufferModel_mat_nativeObj);
        Mat_to_vector_uchar( bufferModel_mat, bufferModel );
        const char* utf_framework = env->GetStringUTFChars(framework, 0); String n_framework( utf_framework ? utf_framework : "" ); env->ReleaseStringUTFChars(framework, utf_framework);
        cv::dnn::Net _retval_ = cv::dnn::readNet( n_framework, bufferModel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::readTorchBlob(String filename, bool isBinary = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_10 (JNIEnv*, jclass, jstring, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_10
  (JNIEnv* env, jclass , jstring filename, jboolean isBinary)
{
    
    static const char method_name[] = "dnn::readTorchBlob_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::Mat _retval_ = cv::dnn::readTorchBlob( n_filename, (bool)isBinary );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTorchBlob_11
  (JNIEnv* env, jclass , jstring filename)
{
    
    static const char method_name[] = "dnn::readTorchBlob_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_filename = env->GetStringUTFChars(filename, 0); String n_filename( utf_filename ? utf_filename : "" ); env->ReleaseStringUTFChars(filename, utf_filename);
        cv::Mat _retval_ = cv::dnn::readTorchBlob( n_filename );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromModelOptimizer(String xml, String bin = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_10
  (JNIEnv* env, jclass , jstring xml, jstring bin)
{
    
    static const char method_name[] = "dnn::readNetFromModelOptimizer_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_xml = env->GetStringUTFChars(xml, 0); String n_xml( utf_xml ? utf_xml : "" ); env->ReleaseStringUTFChars(xml, utf_xml);
        const char* utf_bin = env->GetStringUTFChars(bin, 0); String n_bin( utf_bin ? utf_bin : "" ); env->ReleaseStringUTFChars(bin, utf_bin);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromModelOptimizer( n_xml, n_bin );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_11
  (JNIEnv* env, jclass , jstring xml)
{
    
    static const char method_name[] = "dnn::readNetFromModelOptimizer_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_xml = env->GetStringUTFChars(xml, 0); String n_xml( utf_xml ? utf_xml : "" ); env->ReleaseStringUTFChars(xml, utf_xml);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromModelOptimizer( n_xml );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromModelOptimizer(vector_uchar bufferModelConfig, vector_uchar bufferWeights)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromModelOptimizer_12
  (JNIEnv* env, jclass , jlong bufferModelConfig_mat_nativeObj, jlong bufferWeights_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromModelOptimizer_12()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModelConfig;
        Mat& bufferModelConfig_mat = *((Mat*)bufferModelConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferModelConfig_mat, bufferModelConfig );
        std::vector<uchar> bufferWeights;
        Mat& bufferWeights_mat = *((Mat*)bufferWeights_mat_nativeObj);
        Mat_to_vector_uchar( bufferWeights_mat, bufferWeights );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromModelOptimizer( bufferModelConfig, bufferWeights );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromONNX(String onnxFile)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromONNX_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromONNX_10
  (JNIEnv* env, jclass , jstring onnxFile)
{
    
    static const char method_name[] = "dnn::readNetFromONNX_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_onnxFile = env->GetStringUTFChars(onnxFile, 0); String n_onnxFile( utf_onnxFile ? utf_onnxFile : "" ); env->ReleaseStringUTFChars(onnxFile, utf_onnxFile);
        cv::dnn::Net _retval_ = cv::dnn::readNetFromONNX( n_onnxFile );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Net cv::dnn::readNetFromONNX(vector_uchar buffer)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromONNX_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readNetFromONNX_11
  (JNIEnv* env, jclass , jlong buffer_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::readNetFromONNX_11()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> buffer;
        Mat& buffer_mat = *((Mat*)buffer_mat_nativeObj);
        Mat_to_vector_uchar( buffer_mat, buffer );
        cv::dnn::Net _retval_ = cv::dnn::readNetFromONNX( buffer );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::readTensorFromONNX(String path)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTensorFromONNX_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_readTensorFromONNX_10
  (JNIEnv* env, jclass , jstring path)
{
    
    static const char method_name[] = "dnn::readTensorFromONNX_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_path = env->GetStringUTFChars(path, 0); String n_path( utf_path ? utf_path : "" ); env->ReleaseStringUTFChars(path, utf_path);
        cv::Mat _retval_ = cv::dnn::readTensorFromONNX( n_path );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::blobFromImage(Mat image, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false, int ddepth = CV_32F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop, jint ddepth)
{
    
    static const char method_name[] = "dnn::blobFromImage_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop, (int)ddepth );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_11
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop)
{
    
    static const char method_name[] = "dnn::blobFromImage_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB)
{
    
    static const char method_name[] = "dnn::blobFromImage_12()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size, mean, (bool)swapRB );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_13
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    
    static const char method_name[] = "dnn::blobFromImage_13()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size, mean );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_14
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height)
{
    
    static const char method_name[] = "dnn::blobFromImage_14()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Size size((int)size_width, (int)size_height);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor, size );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_15 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_15
  (JNIEnv* env, jclass , jlong image_nativeObj, jdouble scalefactor)
{
    
    static const char method_name[] = "dnn::blobFromImage_15()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image, (double)scalefactor );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_16 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImage_16
  (JNIEnv* env, jclass , jlong image_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImage_16()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        cv::Mat _retval_ = cv::dnn::blobFromImage( image );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::blobFromImages(vector_Mat images, double scalefactor = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false, int ddepth = CV_32F)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_10
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop, jint ddepth)
{
    
    static const char method_name[] = "dnn::blobFromImages_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop, (int)ddepth );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_11
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop)
{
    
    static const char method_name[] = "dnn::blobFromImages_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size, mean, (bool)swapRB, (bool)crop );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_12
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB)
{
    
    static const char method_name[] = "dnn::blobFromImages_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size, mean, (bool)swapRB );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_13
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    
    static const char method_name[] = "dnn::blobFromImages_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size, mean );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_14 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_14
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor, jdouble size_width, jdouble size_height)
{
    
    static const char method_name[] = "dnn::blobFromImages_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Size size((int)size_width, (int)size_height);
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor, size );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_15 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_15
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jdouble scalefactor)
{
    
    static const char method_name[] = "dnn::blobFromImages_15()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        cv::Mat _retval_ = cv::dnn::blobFromImages( images, (double)scalefactor );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_16 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImages_16
  (JNIEnv* env, jclass , jlong images_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImages_16()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        cv::Mat _retval_ = cv::dnn::blobFromImages( images );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::blobFromImageWithParams(Mat image, Image2BlobParams param = Image2BlobParams())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_10
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong param_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImageWithParams_10()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        cv::Mat _retval_ = cv::dnn::blobFromImageWithParams( image, (*(cv::dnn::Image2BlobParams*)param_nativeObj) );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_11
  (JNIEnv* env, jclass , jlong image_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImageWithParams_11()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        cv::Mat _retval_ = cv::dnn::blobFromImageWithParams( image );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::blobFromImageWithParams(Mat image, Mat& blob, Image2BlobParams param = Image2BlobParams())
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_12
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong blob_nativeObj, jlong param_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImageWithParams_12()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& blob = *((Mat*)blob_nativeObj);
        cv::dnn::blobFromImageWithParams( image, blob, (*(cv::dnn::Image2BlobParams*)param_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImageWithParams_13
  (JNIEnv* env, jclass , jlong image_nativeObj, jlong blob_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImageWithParams_13()";
    try {
        LOGD("%s", method_name);
        Mat& image = *((Mat*)image_nativeObj);
        Mat& blob = *((Mat*)blob_nativeObj);
        cv::dnn::blobFromImageWithParams( image, blob );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Mat cv::dnn::blobFromImagesWithParams(vector_Mat images, Image2BlobParams param = Image2BlobParams())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_10
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong param_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImagesWithParams_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        cv::Mat _retval_ = cv::dnn::blobFromImagesWithParams( images, (*(cv::dnn::Image2BlobParams*)param_nativeObj) );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_11
  (JNIEnv* env, jclass , jlong images_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImagesWithParams_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        cv::Mat _retval_ = cv::dnn::blobFromImagesWithParams( images );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::blobFromImagesWithParams(vector_Mat images, Mat& blob, Image2BlobParams param = Image2BlobParams())
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_12
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong blob_nativeObj, jlong param_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImagesWithParams_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Mat& blob = *((Mat*)blob_nativeObj);
        cv::dnn::blobFromImagesWithParams( images, blob, (*(cv::dnn::Image2BlobParams*)param_nativeObj) );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_blobFromImagesWithParams_13
  (JNIEnv* env, jclass , jlong images_mat_nativeObj, jlong blob_nativeObj)
{
    
    static const char method_name[] = "dnn::blobFromImagesWithParams_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images;
        Mat& images_mat = *((Mat*)images_mat_nativeObj);
        Mat_to_vector_Mat( images_mat, images );
        Mat& blob = *((Mat*)blob_nativeObj);
        cv::dnn::blobFromImagesWithParams( images, blob );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::imagesFromBlob(Mat blob_, vector_Mat& images_)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_imagesFromBlob_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_imagesFromBlob_10
  (JNIEnv* env, jclass , jlong blob__nativeObj, jlong images__mat_nativeObj)
{
    
    static const char method_name[] = "dnn::imagesFromBlob_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> images_;
        Mat& images__mat = *((Mat*)images__mat_nativeObj);
        Mat& blob_ = *((Mat*)blob__nativeObj);
        cv::dnn::imagesFromBlob( blob_, images_ );
        vector_Mat_to_Mat( images_, images__mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::shrinkCaffeModel(String src, String dst, vector_String layersTypes = std::vector<String>())
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_10 (JNIEnv*, jclass, jstring, jstring, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_10
  (JNIEnv* env, jclass , jstring src, jstring dst, jobject layersTypes_list)
{
    
    static const char method_name[] = "dnn::shrinkCaffeModel_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > layersTypes;
        layersTypes = List_to_vector_String(env, layersTypes_list);
        const char* utf_src = env->GetStringUTFChars(src, 0); String n_src( utf_src ? utf_src : "" ); env->ReleaseStringUTFChars(src, utf_src);
        const char* utf_dst = env->GetStringUTFChars(dst, 0); String n_dst( utf_dst ? utf_dst : "" ); env->ReleaseStringUTFChars(dst, utf_dst);
        cv::dnn::shrinkCaffeModel( n_src, n_dst, layersTypes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_shrinkCaffeModel_11
  (JNIEnv* env, jclass , jstring src, jstring dst)
{
    
    static const char method_name[] = "dnn::shrinkCaffeModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_src = env->GetStringUTFChars(src, 0); String n_src( utf_src ? utf_src : "" ); env->ReleaseStringUTFChars(src, utf_src);
        const char* utf_dst = env->GetStringUTFChars(dst, 0); String n_dst( utf_dst ? utf_dst : "" ); env->ReleaseStringUTFChars(dst, utf_dst);
        cv::dnn::shrinkCaffeModel( n_src, n_dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::writeTextGraph(String model, String output)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_writeTextGraph_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_writeTextGraph_10
  (JNIEnv* env, jclass , jstring model, jstring output)
{
    
    static const char method_name[] = "dnn::writeTextGraph_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_output = env->GetStringUTFChars(output, 0); String n_output( utf_output ? utf_output : "" ); env->ReleaseStringUTFChars(output, utf_output);
        cv::dnn::writeTextGraph( n_model, n_output );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::NMSBoxes(vector_Rect2d bboxes, vector_float scores, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_10
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta, jint top_k)
{
    
    static const char method_name[] = "dnn::NMSBoxes_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices, (float)eta, (int)top_k );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_11 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_11
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta)
{
    
    static const char method_name[] = "dnn::NMSBoxes_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices, (float)eta );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_12 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxes_12
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::NMSBoxes_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::NMSBoxes(vector_RotatedRect bboxes, vector_float scores, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_10
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta, jint top_k)
{
    
    static const char method_name[] = "dnn::NMSBoxesRotated_10()";
    try {
        LOGD("%s", method_name);
        std::vector< RotatedRect > bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_RotatedRect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices, (float)eta, (int)top_k );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_11 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_11
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta)
{
    
    static const char method_name[] = "dnn::NMSBoxesRotated_11()";
    try {
        LOGD("%s", method_name);
        std::vector< RotatedRect > bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_RotatedRect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices, (float)eta );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_12 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesRotated_12
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::NMSBoxesRotated_12()";
    try {
        LOGD("%s", method_name);
        std::vector< RotatedRect > bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_RotatedRect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxes( bboxes, scores, (float)score_threshold, (float)nms_threshold, indices );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::NMSBoxesBatched(vector_Rect2d bboxes, vector_float scores, vector_int class_ids, float score_threshold, float nms_threshold, vector_int& indices, float eta = 1.f, int top_k = 0)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_10 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_10
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong class_ids_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta, jint top_k)
{
    
    static const char method_name[] = "dnn::NMSBoxesBatched_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> class_ids;
        Mat& class_ids_mat = *((Mat*)class_ids_mat_nativeObj);
        Mat_to_vector_int( class_ids_mat, class_ids );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxesBatched( bboxes, scores, class_ids, (float)score_threshold, (float)nms_threshold, indices, (float)eta, (int)top_k );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_11 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_11
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong class_ids_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jfloat eta)
{
    
    static const char method_name[] = "dnn::NMSBoxesBatched_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> class_ids;
        Mat& class_ids_mat = *((Mat*)class_ids_mat_nativeObj);
        Mat_to_vector_int( class_ids_mat, class_ids );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxesBatched( bboxes, scores, class_ids, (float)score_threshold, (float)nms_threshold, indices, (float)eta );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_12 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_NMSBoxesBatched_12
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong class_ids_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::NMSBoxesBatched_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect2d> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect2d( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<int> class_ids;
        Mat& class_ids_mat = *((Mat*)class_ids_mat_nativeObj);
        Mat_to_vector_int( class_ids_mat, class_ids );
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::NMSBoxesBatched( bboxes, scores, class_ids, (float)score_threshold, (float)nms_threshold, indices );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::softNMSBoxes(vector_Rect bboxes, vector_float scores, vector_float& updated_scores, float score_threshold, float nms_threshold, vector_int& indices, size_t top_k = 0, float sigma = 0.5, SoftNMSMethod method = SoftNMSMethod::SOFTNMS_GAUSSIAN)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_10 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_10
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong updated_scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jlong top_k, jfloat sigma)
{
    
    static const char method_name[] = "dnn::softNMSBoxes_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<float> updated_scores;
        Mat& updated_scores_mat = *((Mat*)updated_scores_mat_nativeObj);
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::softNMSBoxes( bboxes, scores, updated_scores, (float)score_threshold, (float)nms_threshold, indices, (size_t)top_k, (float)sigma, SoftNMSMethod::SOFTNMS_GAUSSIAN );
        vector_float_to_Mat( updated_scores, updated_scores_mat );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_12 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_12
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong updated_scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj, jlong top_k)
{
    
    static const char method_name[] = "dnn::softNMSBoxes_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<float> updated_scores;
        Mat& updated_scores_mat = *((Mat*)updated_scores_mat_nativeObj);
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::softNMSBoxes( bboxes, scores, updated_scores, (float)score_threshold, (float)nms_threshold, indices, (size_t)top_k );
        vector_float_to_Mat( updated_scores, updated_scores_mat );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_13 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jfloat, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_softNMSBoxes_13
  (JNIEnv* env, jclass , jlong bboxes_mat_nativeObj, jlong scores_mat_nativeObj, jlong updated_scores_mat_nativeObj, jfloat score_threshold, jfloat nms_threshold, jlong indices_mat_nativeObj)
{
    
    static const char method_name[] = "dnn::softNMSBoxes_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> bboxes;
        Mat& bboxes_mat = *((Mat*)bboxes_mat_nativeObj);
        Mat_to_vector_Rect( bboxes_mat, bboxes );
        std::vector<float> scores;
        Mat& scores_mat = *((Mat*)scores_mat_nativeObj);
        Mat_to_vector_float( scores_mat, scores );
        std::vector<float> updated_scores;
        Mat& updated_scores_mat = *((Mat*)updated_scores_mat_nativeObj);
        std::vector<int> indices;
        Mat& indices_mat = *((Mat*)indices_mat_nativeObj);
        cv::dnn::softNMSBoxes( bboxes, scores, updated_scores, (float)score_threshold, (float)nms_threshold, indices );
        vector_float_to_Mat( updated_scores, updated_scores_mat );
        vector_int_to_Mat( indices, indices_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  String cv::dnn::getInferenceEngineBackendType()
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineBackendType_10 (JNIEnv*, jclass);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineBackendType_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "dnn::getInferenceEngineBackendType_10()";
    try {
        LOGD("%s", method_name);
        cv::String _retval_ = cv::dnn::getInferenceEngineBackendType();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  String cv::dnn::setInferenceEngineBackendType(String newBackendType)
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_setInferenceEngineBackendType_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_setInferenceEngineBackendType_10
  (JNIEnv* env, jclass , jstring newBackendType)
{
    
    static const char method_name[] = "dnn::setInferenceEngineBackendType_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_newBackendType = env->GetStringUTFChars(newBackendType, 0); String n_newBackendType( utf_newBackendType ? utf_newBackendType : "" ); env->ReleaseStringUTFChars(newBackendType, utf_newBackendType);
        cv::String _retval_ = cv::dnn::setInferenceEngineBackendType( n_newBackendType );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void cv::dnn::resetMyriadDevice()
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_resetMyriadDevice_10 (JNIEnv*, jclass);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_resetMyriadDevice_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "dnn::resetMyriadDevice_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::resetMyriadDevice();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  String cv::dnn::getInferenceEngineVPUType()
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineVPUType_10 (JNIEnv*, jclass);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineVPUType_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "dnn::getInferenceEngineVPUType_10()";
    try {
        LOGD("%s", method_name);
        cv::String _retval_ = cv::dnn::getInferenceEngineVPUType();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  String cv::dnn::getInferenceEngineCPUType()
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineCPUType_10 (JNIEnv*, jclass);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Dnn_getInferenceEngineCPUType_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "dnn::getInferenceEngineCPUType_10()";
    try {
        LOGD("%s", method_name);
        cv::String _retval_ = cv::dnn::getInferenceEngineCPUType();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void cv::dnn::releaseHDDLPlugin()
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_releaseHDDLPlugin_10 (JNIEnv*, jclass);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Dnn_releaseHDDLPlugin_10
  (JNIEnv* env, jclass )
{
    
    static const char method_name[] = "dnn::releaseHDDLPlugin_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::releaseHDDLPlugin();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//   cv::dnn::ClassificationModel::ClassificationModel(String model, String config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::ClassificationModel_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::ClassificationModel* _retval_ = new cv::dnn::ClassificationModel( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_11
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::ClassificationModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::ClassificationModel* _retval_ = new cv::dnn::ClassificationModel( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::ClassificationModel::ClassificationModel(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_ClassificationModel_12
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::ClassificationModel_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::ClassificationModel* _retval_ = new cv::dnn::ClassificationModel( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  ClassificationModel cv::dnn::ClassificationModel::setEnableSoftmaxPostProcessing(bool enable)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_setEnableSoftmaxPostProcessing_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_ClassificationModel_setEnableSoftmaxPostProcessing_10
  (JNIEnv* env, jclass , jlong self, jboolean enable)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setEnableSoftmaxPostProcessing_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::ClassificationModel* me = (cv::dnn::ClassificationModel*) self; //TODO: check for NULL
        cv::dnn::ClassificationModel _retval_ = me->setEnableSoftmaxPostProcessing( (bool)enable );
        return (jlong) new cv::dnn::ClassificationModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::ClassificationModel::getEnableSoftmaxPostProcessing()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_ClassificationModel_getEnableSoftmaxPostProcessing_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_ClassificationModel_getEnableSoftmaxPostProcessing_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getEnableSoftmaxPostProcessing_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::ClassificationModel* me = (cv::dnn::ClassificationModel*) self; //TODO: check for NULL
        return me->getEnableSoftmaxPostProcessing();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::ClassificationModel::classify(Mat frame, int& classId, float& conf)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_ClassificationModel_classify_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_ClassificationModel_classify_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jdoubleArray classId_out, jdoubleArray conf_out)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::classify_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::ClassificationModel* me = (cv::dnn::ClassificationModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        int classId;
        float conf;
        me->classify( frame, classId, conf );
        jdouble tmp_classId[1] = {(jdouble)classId}; env->SetDoubleArrayRegion(classId_out, 0, 1, tmp_classId);
        jdouble tmp_conf[1] = {(jdouble)conf}; env->SetDoubleArrayRegion(conf_out, 0, 1, tmp_conf);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::ClassificationModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_ClassificationModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_ClassificationModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::ClassificationModel*) self;
}


//
//   cv::dnn::DetectionModel::DetectionModel(String model, String config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DetectionModel_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::DetectionModel* _retval_ = new cv::dnn::DetectionModel( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_11
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DetectionModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::DetectionModel* _retval_ = new cv::dnn::DetectionModel( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::DetectionModel::DetectionModel(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_DetectionModel_12
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DetectionModel_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DetectionModel* _retval_ = new cv::dnn::DetectionModel( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  DetectionModel cv::dnn::DetectionModel::setNmsAcrossClasses(bool value)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_setNmsAcrossClasses_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DetectionModel_setNmsAcrossClasses_10
  (JNIEnv* env, jclass , jlong self, jboolean value)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setNmsAcrossClasses_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DetectionModel* me = (cv::dnn::DetectionModel*) self; //TODO: check for NULL
        cv::dnn::DetectionModel _retval_ = me->setNmsAcrossClasses( (bool)value );
        return (jlong) new cv::dnn::DetectionModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::DetectionModel::getNmsAcrossClasses()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DetectionModel_getNmsAcrossClasses_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DetectionModel_getNmsAcrossClasses_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getNmsAcrossClasses_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::DetectionModel* me = (cv::dnn::DetectionModel*) self; //TODO: check for NULL
        return me->getNmsAcrossClasses();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::DetectionModel::detect(Mat frame, vector_int& classIds, vector_float& confidences, vector_Rect& boxes, float confThreshold = 0.5f, float nmsThreshold = 0.0f)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong classIds_mat_nativeObj, jlong confidences_mat_nativeObj, jlong boxes_mat_nativeObj, jfloat confThreshold, jfloat nmsThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detect_10()";
    try {
        LOGD("%s", method_name);
        std::vector<int> classIds;
        Mat& classIds_mat = *((Mat*)classIds_mat_nativeObj);
        std::vector<float> confidences;
        Mat& confidences_mat = *((Mat*)confidences_mat_nativeObj);
        std::vector<Rect> boxes;
        Mat& boxes_mat = *((Mat*)boxes_mat_nativeObj);
        cv::dnn::DetectionModel* me = (cv::dnn::DetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detect( frame, classIds, confidences, boxes, (float)confThreshold, (float)nmsThreshold );
        vector_int_to_Mat( classIds, classIds_mat );
        vector_float_to_Mat( confidences, confidences_mat );
        vector_Rect_to_Mat( boxes, boxes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_11
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong classIds_mat_nativeObj, jlong confidences_mat_nativeObj, jlong boxes_mat_nativeObj, jfloat confThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detect_11()";
    try {
        LOGD("%s", method_name);
        std::vector<int> classIds;
        Mat& classIds_mat = *((Mat*)classIds_mat_nativeObj);
        std::vector<float> confidences;
        Mat& confidences_mat = *((Mat*)confidences_mat_nativeObj);
        std::vector<Rect> boxes;
        Mat& boxes_mat = *((Mat*)boxes_mat_nativeObj);
        cv::dnn::DetectionModel* me = (cv::dnn::DetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detect( frame, classIds, confidences, boxes, (float)confThreshold );
        vector_int_to_Mat( classIds, classIds_mat );
        vector_float_to_Mat( confidences, confidences_mat );
        vector_Rect_to_Mat( boxes, boxes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_12 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_detect_12
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong classIds_mat_nativeObj, jlong confidences_mat_nativeObj, jlong boxes_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detect_12()";
    try {
        LOGD("%s", method_name);
        std::vector<int> classIds;
        Mat& classIds_mat = *((Mat*)classIds_mat_nativeObj);
        std::vector<float> confidences;
        Mat& confidences_mat = *((Mat*)confidences_mat_nativeObj);
        std::vector<Rect> boxes;
        Mat& boxes_mat = *((Mat*)boxes_mat_nativeObj);
        cv::dnn::DetectionModel* me = (cv::dnn::DetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detect( frame, classIds, confidences, boxes );
        vector_int_to_Mat( classIds, classIds_mat );
        vector_float_to_Mat( confidences, confidences_mat );
        vector_Rect_to_Mat( boxes, boxes_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::DetectionModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DetectionModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::DetectionModel*) self;
}


//
//   cv::dnn::DictValue::DictValue(int i)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_10 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_10
  (JNIEnv* env, jclass , jint i)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DictValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue> _retval_ = makePtr<cv::dnn::DictValue>( (int)i );
        return (jlong)(new Ptr<cv::dnn::DictValue>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::DictValue::DictValue(double p)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_11 (JNIEnv*, jclass, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_11
  (JNIEnv* env, jclass , jdouble p)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DictValue_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue> _retval_ = makePtr<cv::dnn::DictValue>( (double)p );
        return (jlong)(new Ptr<cv::dnn::DictValue>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::DictValue::DictValue(String s)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_DictValue_DictValue_12
  (JNIEnv* env, jclass , jstring s)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::DictValue_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_s = env->GetStringUTFChars(s, 0); String n_s( utf_s ? utf_s : "" ); env->ReleaseStringUTFChars(s, utf_s);
        Ptr<cv::dnn::DictValue> _retval_ = makePtr<cv::dnn::DictValue>( n_s );
        return (jlong)(new Ptr<cv::dnn::DictValue>(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::DictValue::isInt()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isInt_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isInt_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::isInt_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->isInt();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::DictValue::isString()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isString_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isString_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::isString_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->isString();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::DictValue::isReal()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isReal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_DictValue_isReal_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::isReal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->isReal();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::dnn::DictValue::getIntValue(int idx = -1)
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getIntValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->getIntValue( (int)idx );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_DictValue_getIntValue_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getIntValue_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->getIntValue();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::dnn::DictValue::getRealValue(int idx = -1)
//

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getRealValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->getRealValue( (int)idx );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_DictValue_getRealValue_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getRealValue_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        return (*me)->getRealValue();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String cv::dnn::DictValue::getStringValue(int idx = -1)
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_10
  (JNIEnv* env, jclass , jlong self, jint idx)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getStringValue_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->getStringValue( (int)idx );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_DictValue_getStringValue_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getStringValue_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::DictValue>* me = (Ptr<cv::dnn::DictValue>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->getStringValue();
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
//  static void Ptr<cv::dnn::DictValue>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_DictValue_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_DictValue_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::dnn::DictValue>*) self;
}


//
//   cv::dnn::Image2BlobParams::Image2BlobParams()
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_10
  (JNIEnv* env, jclass )
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::Image2BlobParams::Image2BlobParams(Scalar scalefactor, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, int ddepth = CV_32F, DataLayout datalayout = DNN_LAYOUT_NCHW, ImagePaddingMode mode = DNN_PMODE_NULL, Scalar borderValue = 0.0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_11 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jint, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_11
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jint ddepth, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_11()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor, size, mean, (bool)swapRB, (int)ddepth, DNN_LAYOUT_NCHW, DNN_PMODE_NULL, borderValue );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_12 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_12
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jint ddepth)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_12()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor, size, mean, (bool)swapRB, (int)ddepth, DNN_LAYOUT_NCHW, DNN_PMODE_NULL );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_15 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_15
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_15()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor, size, mean, (bool)swapRB );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_16 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_16
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_16()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor, size, mean );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_17 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_17
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_17()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        Size size((int)size_width, (int)size_height);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor, size );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_18 (JNIEnv*, jclass, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Image2BlobParams_Image2BlobParams_18
  (JNIEnv* env, jclass , jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Image2BlobParams_18()";
    try {
        LOGD("%s", method_name);
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        cv::dnn::Image2BlobParams* _retval_ = new cv::dnn::Image2BlobParams( scalefactor );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Rect cv::dnn::Image2BlobParams::blobRectToImageRect(Rect rBlob, Size size)
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_blobRectToImageRect_10 (JNIEnv*, jclass, jlong, jint, jint, jint, jint, jdouble, jdouble);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_blobRectToImageRect_10
  (JNIEnv* env, jclass , jlong self, jint rBlob_x, jint rBlob_y, jint rBlob_width, jint rBlob_height, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::blobRectToImageRect_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Rect rBlob(rBlob_x, rBlob_y, rBlob_width, rBlob_height);
        Size size((int)size_width, (int)size_height);
        Rect _retval_ = me->blobRectToImageRect( rBlob, size );
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.x, (jdouble)_retval_.y, (jdouble)_retval_.width, (jdouble)_retval_.height}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Image2BlobParams::blobRectsToImageRects(vector_Rect rBlob, vector_Rect& rImg, Size size)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_blobRectsToImageRects_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_blobRectsToImageRects_10
  (JNIEnv* env, jclass , jlong self, jlong rBlob_mat_nativeObj, jlong rImg_mat_nativeObj, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::blobRectsToImageRects_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Rect> rBlob;
        Mat& rBlob_mat = *((Mat*)rBlob_mat_nativeObj);
        Mat_to_vector_Rect( rBlob_mat, rBlob );
        std::vector<Rect> rImg;
        Mat& rImg_mat = *((Mat*)rImg_mat_nativeObj);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        me->blobRectsToImageRects( rBlob, rImg, size );
        vector_Rect_to_Mat( rImg, rImg_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Scalar Image2BlobParams::scalefactor
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1scalefactor_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1scalefactor_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1scalefactor_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar _retval_ = me->scalefactor;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1], (jdouble)_retval_.val[2], (jdouble)_retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Image2BlobParams::scalefactor
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1scalefactor_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1scalefactor_10
  (JNIEnv* env, jclass , jlong self, jdouble scalefactor_val0, jdouble scalefactor_val1, jdouble scalefactor_val2, jdouble scalefactor_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1scalefactor_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar scalefactor(scalefactor_val0, scalefactor_val1, scalefactor_val2, scalefactor_val3);
        me->scalefactor = ( scalefactor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Size Image2BlobParams::size
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1size_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1size_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1size_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Size _retval_ = me->size;//();
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
// void Image2BlobParams::size
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1size_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1size_10
  (JNIEnv* env, jclass , jlong self, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1size_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        me->size = ( size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Scalar Image2BlobParams::mean
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1mean_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1mean_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1mean_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar _retval_ = me->mean;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1], (jdouble)_retval_.val[2], (jdouble)_retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Image2BlobParams::mean
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1mean_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1mean_10
  (JNIEnv* env, jclass , jlong self, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1mean_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        me->mean = ( mean );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// bool Image2BlobParams::swapRB
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1swapRB_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1swapRB_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1swapRB_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        return me->swapRB;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Image2BlobParams::swapRB
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1swapRB_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1swapRB_10
  (JNIEnv* env, jclass , jlong self, jboolean swapRB)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1swapRB_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        me->swapRB = ( (bool)swapRB );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// int Image2BlobParams::ddepth
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1ddepth_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1ddepth_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1ddepth_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        return me->ddepth;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Image2BlobParams::ddepth
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1ddepth_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1ddepth_10
  (JNIEnv* env, jclass , jlong self, jint ddepth)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1ddepth_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        me->ddepth = ( (int)ddepth );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// Scalar Image2BlobParams::borderValue
//

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1borderValue_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdoubleArray JNICALL Java_org_opencv_dnn_Image2BlobParams_get_1borderValue_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1borderValue_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar _retval_ = me->borderValue;//();
        jdoubleArray _da_retval_ = env->NewDoubleArray(4);  jdouble _tmp_retval_[4] = {(jdouble)_retval_.val[0], (jdouble)_retval_.val[1], (jdouble)_retval_.val[2], (jdouble)_retval_.val[3]}; env->SetDoubleArrayRegion(_da_retval_, 0, 4, _tmp_retval_);
        return _da_retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Image2BlobParams::borderValue
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1borderValue_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_set_1borderValue_10
  (JNIEnv* env, jclass , jlong self, jdouble borderValue_val0, jdouble borderValue_val1, jdouble borderValue_val2, jdouble borderValue_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1borderValue_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Image2BlobParams* me = (cv::dnn::Image2BlobParams*) self; //TODO: check for NULL
        Scalar borderValue(borderValue_val0, borderValue_val1, borderValue_val2, borderValue_val3);
        me->borderValue = ( borderValue );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::Image2BlobParams::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Image2BlobParams_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::Image2BlobParams*) self;
}


//
//   cv::dnn::KeypointsModel::KeypointsModel(String model, String config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::KeypointsModel_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::KeypointsModel* _retval_ = new cv::dnn::KeypointsModel( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_11
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::KeypointsModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::KeypointsModel* _retval_ = new cv::dnn::KeypointsModel( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::KeypointsModel::KeypointsModel(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_KeypointsModel_12
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::KeypointsModel_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::KeypointsModel* _retval_ = new cv::dnn::KeypointsModel( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_Point2f cv::dnn::KeypointsModel::estimate(Mat frame, float thresh = 0.5)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_estimate_10 (JNIEnv*, jclass, jlong, jlong, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_estimate_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jfloat thresh)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::estimate_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::KeypointsModel* me = (cv::dnn::KeypointsModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        std::vector<Point2f> _ret_val_vector_ = me->estimate( frame, (float)thresh );
        Mat* _retval_ = new Mat();
        vector_Point2f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_estimate_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_KeypointsModel_estimate_11
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::estimate_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::KeypointsModel* me = (cv::dnn::KeypointsModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        std::vector<Point2f> _ret_val_vector_ = me->estimate( frame );
        Mat* _retval_ = new Mat();
        vector_Point2f_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::dnn::KeypointsModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_KeypointsModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_KeypointsModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::KeypointsModel*) self;
}


//
//  void cv::dnn::Layer::finalize(vector_Mat inputs, vector_Mat& outputs)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_finalize_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_finalize_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj, jlong outputs_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::finalize_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        std::vector<Mat> outputs;
        Mat& outputs_mat = *((Mat*)outputs_mat_nativeObj);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->finalize( inputs, outputs );
        vector_Mat_to_Mat( outputs, outputs_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Layer::run(vector_Mat inputs, vector_Mat& outputs, vector_Mat& internals)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_run_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_run_10
  (JNIEnv* env, jclass , jlong self, jlong inputs_mat_nativeObj, jlong outputs_mat_nativeObj, jlong internals_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::run_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> inputs;
        Mat& inputs_mat = *((Mat*)inputs_mat_nativeObj);
        Mat_to_vector_Mat( inputs_mat, inputs );
        std::vector<Mat> outputs;
        Mat& outputs_mat = *((Mat*)outputs_mat_nativeObj);
        std::vector<Mat> internals;
        Mat& internals_mat = *((Mat*)internals_mat_nativeObj);
        Mat_to_vector_Mat( internals_mat, internals );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->run( inputs, outputs, internals );
        vector_Mat_to_Mat( outputs, outputs_mat );
        vector_Mat_to_Mat( internals, internals_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::dnn::Layer::outputNameToIndex(String outputName)
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_outputNameToIndex_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_outputNameToIndex_10
  (JNIEnv* env, jclass , jlong self, jstring outputName)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::outputNameToIndex_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        const char* utf_outputName = env->GetStringUTFChars(outputName, 0); String n_outputName( utf_outputName ? utf_outputName : "" ); env->ReleaseStringUTFChars(outputName, utf_outputName);
        return (*me)->outputNameToIndex( n_outputName );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// vector_Mat Layer::blobs
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_get_1blobs_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Layer_get_1blobs_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1blobs_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        std::vector<Mat> _ret_val_vector_ = (*me)->blobs;//();
        Mat* _retval_ = new Mat();
        vector_Mat_to_Mat(_ret_val_vector_, *_retval_);
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// void Layer::blobs
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_set_1blobs_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_set_1blobs_10
  (JNIEnv* env, jclass , jlong self, jlong blobs_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::set_1blobs_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> blobs;
        Mat& blobs_mat = *((Mat*)blobs_mat_nativeObj);
        Mat_to_vector_Mat( blobs_mat, blobs );
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        (*me)->blobs = ( blobs );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
// String Layer::name
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1name_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1name_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1name_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->name;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// String Layer::type
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1type_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Layer_get_1type_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1type_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        cv::String _retval_ = (*me)->type;//();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
// int Layer::preferableTarget
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_get_1preferableTarget_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Layer_get_1preferableTarget_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::get_1preferableTarget_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::dnn::Layer>* me = (Ptr<cv::dnn::Layer>*) self; //TODO: check for NULL
        return (*me)->preferableTarget;//();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::dnn::Layer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Layer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::dnn::Layer>*) self;
}


//
//   cv::dnn::Model::Model(String model, String config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Model_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::Model* _retval_ = new cv::dnn::Model( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_11
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Model_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::Model* _retval_ = new cv::dnn::Model( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::Model::Model(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_Model_12
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Model_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* _retval_ = new cv::dnn::Model( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputSize(Size size)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSize_10 (JNIEnv*, jclass, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSize_10
  (JNIEnv* env, jclass , jlong self, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputSize_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        cv::dnn::Model _retval_ = me->setInputSize( size );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputSize(int width, int height)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSize_11 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSize_11
  (JNIEnv* env, jclass , jlong self, jint width, jint height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputSize_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setInputSize( (int)width, (int)height );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputMean(Scalar mean)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputMean_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputMean_10
  (JNIEnv* env, jclass , jlong self, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputMean_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        cv::dnn::Model _retval_ = me->setInputMean( mean );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputScale(Scalar scale)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputScale_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputScale_10
  (JNIEnv* env, jclass , jlong self, jdouble scale_val0, jdouble scale_val1, jdouble scale_val2, jdouble scale_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputScale_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Scalar scale(scale_val0, scale_val1, scale_val2, scale_val3);
        cv::dnn::Model _retval_ = me->setInputScale( scale );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputCrop(bool crop)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputCrop_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputCrop_10
  (JNIEnv* env, jclass , jlong self, jboolean crop)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputCrop_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setInputCrop( (bool)crop );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setInputSwapRB(bool swapRB)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSwapRB_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setInputSwapRB_10
  (JNIEnv* env, jclass , jlong self, jboolean swapRB)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputSwapRB_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setInputSwapRB( (bool)swapRB );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setOutputNames(vector_String outNames)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setOutputNames_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setOutputNames_10
  (JNIEnv* env, jclass , jlong self, jobject outNames_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setOutputNames_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > outNames;
        outNames = List_to_vector_String(env, outNames_list);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setOutputNames( outNames );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Model::setInputParams(double scale = 1.0, Size size = Size(), Scalar mean = Scalar(), bool swapRB = false, bool crop = false)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_10 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_10
  (JNIEnv* env, jclass , jlong self, jdouble scale, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB, jboolean crop)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        me->setInputParams( (double)scale, size, mean, (bool)swapRB, (bool)crop );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_11 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_11
  (JNIEnv* env, jclass , jlong self, jdouble scale, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3, jboolean swapRB)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        me->setInputParams( (double)scale, size, mean, (bool)swapRB );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_12 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_12
  (JNIEnv* env, jclass , jlong self, jdouble scale, jdouble size_width, jdouble size_height, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        me->setInputParams( (double)scale, size, mean );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_13 (JNIEnv*, jclass, jlong, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_13
  (JNIEnv* env, jclass , jlong self, jdouble scale, jdouble size_width, jdouble size_height)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_13()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Size size((int)size_width, (int)size_height);
        me->setInputParams( (double)scale, size );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_14 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_14
  (JNIEnv* env, jclass , jlong self, jdouble scale)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_14()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        me->setInputParams( (double)scale );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_15 (JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_setInputParams_15
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputParams_15()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        me->setInputParams();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Model::predict(Mat frame, vector_Mat& outs)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_predict_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_predict_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong outs_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::predict_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outs;
        Mat& outs_mat = *((Mat*)outs_mat_nativeObj);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->predict( frame, outs );
        vector_Mat_to_Mat( outs, outs_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Model cv::dnn::Model::setPreferableBackend(dnn_Backend backendId)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setPreferableBackend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setPreferableBackend_10
  (JNIEnv* env, jclass , jlong self, jint backendId)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setPreferableBackend_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setPreferableBackend( (cv::dnn::Backend)backendId );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::setPreferableTarget(dnn_Target targetId)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setPreferableTarget_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_setPreferableTarget_10
  (JNIEnv* env, jclass , jlong self, jint targetId)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setPreferableTarget_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->setPreferableTarget( (cv::dnn::Target)targetId );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Model cv::dnn::Model::enableWinograd(bool useWinograd)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_enableWinograd_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Model_enableWinograd_10
  (JNIEnv* env, jclass , jlong self, jboolean useWinograd)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::enableWinograd_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Model* me = (cv::dnn::Model*) self; //TODO: check for NULL
        cv::dnn::Model _retval_ = me->enableWinograd( (bool)useWinograd );
        return (jlong) new cv::dnn::Model(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::dnn::Model::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Model_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::Model*) self;
}


//
//   cv::dnn::Net::Net()
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_Net_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_Net_10
  (JNIEnv* env, jclass )
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::Net_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* _retval_ = new cv::dnn::Net();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Net cv::dnn::Net::readFromModelOptimizer(String xml, String bin)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_readFromModelOptimizer_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_readFromModelOptimizer_10
  (JNIEnv* env, jclass , jstring xml, jstring bin)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::readFromModelOptimizer_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_xml = env->GetStringUTFChars(xml, 0); String n_xml( utf_xml ? utf_xml : "" ); env->ReleaseStringUTFChars(xml, utf_xml);
        const char* utf_bin = env->GetStringUTFChars(bin, 0); String n_bin( utf_bin ? utf_bin : "" ); env->ReleaseStringUTFChars(bin, utf_bin);
        cv::dnn::Net _retval_ = cv::dnn::Net::readFromModelOptimizer( n_xml, n_bin );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
// static Net cv::dnn::Net::readFromModelOptimizer(vector_uchar bufferModelConfig, vector_uchar bufferWeights)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_readFromModelOptimizer_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_readFromModelOptimizer_11
  (JNIEnv* env, jclass , jlong bufferModelConfig_mat_nativeObj, jlong bufferWeights_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::readFromModelOptimizer_11()";
    try {
        LOGD("%s", method_name);
        std::vector<uchar> bufferModelConfig;
        Mat& bufferModelConfig_mat = *((Mat*)bufferModelConfig_mat_nativeObj);
        Mat_to_vector_uchar( bufferModelConfig_mat, bufferModelConfig );
        std::vector<uchar> bufferWeights;
        Mat& bufferWeights_mat = *((Mat*)bufferWeights_mat_nativeObj);
        Mat_to_vector_uchar( bufferWeights_mat, bufferWeights );
        cv::dnn::Net _retval_ = cv::dnn::Net::readFromModelOptimizer( bufferModelConfig, bufferWeights );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::dnn::Net::empty()
//

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Net_empty_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_dnn_Net_empty_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::empty_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        return me->empty();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  String cv::dnn::Net::dump()
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Net_dump_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_Net_dump_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::dump_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::String _retval_ = me->dump();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void cv::dnn::Net::dumpToFile(String path)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_dumpToFile_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_dumpToFile_10
  (JNIEnv* env, jclass , jlong self, jstring path)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::dumpToFile_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_path = env->GetStringUTFChars(path, 0); String n_path( utf_path ? utf_path : "" ); env->ReleaseStringUTFChars(path, utf_path);
        me->dumpToFile( n_path );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::dumpToPbtxt(String path)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_dumpToPbtxt_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_dumpToPbtxt_10
  (JNIEnv* env, jclass , jlong self, jstring path)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::dumpToPbtxt_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_path = env->GetStringUTFChars(path, 0); String n_path( utf_path ? utf_path : "" ); env->ReleaseStringUTFChars(path, utf_path);
        me->dumpToPbtxt( n_path );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::dnn::Net::getLayerId(String layer)
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayerId_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayerId_10
  (JNIEnv* env, jclass , jlong self, jstring layer)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayerId_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layer = env->GetStringUTFChars(layer, 0); String n_layer( utf_layer ? utf_layer : "" ); env->ReleaseStringUTFChars(layer, utf_layer);
        return me->getLayerId( n_layer );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_String cv::dnn::Net::getLayerNames()
//

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getLayerNames_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getLayerNames_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayerNames_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        std::vector< String > _ret_val_vector_ = me->getLayerNames();
        return vector_String_to_List(env, _ret_val_vector_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Layer cv::dnn::Net::getLayer(int layerId)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_10
  (JNIEnv* env, jclass , jlong self, jint layerId)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayer_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Layer> Ptr_Layer;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Ptr_Layer _retval_ = me->getLayer( (int)layerId );
        return (jlong)(new Ptr_Layer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Layer cv::dnn::Net::getLayer(String layerName)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_11 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_11
  (JNIEnv* env, jclass , jlong self, jstring layerName)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayer_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Layer> Ptr_Layer;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerName = env->GetStringUTFChars(layerName, 0); String n_layerName( utf_layerName ? utf_layerName : "" ); env->ReleaseStringUTFChars(layerName, utf_layerName);
        Ptr_Layer _retval_ = me->getLayer( n_layerName );
        return (jlong)(new Ptr_Layer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_Layer cv::dnn::Net::getLayer(LayerId layerId)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_12 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getLayer_12
  (JNIEnv* env, jclass , jlong self, jlong layerId_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayer_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::dnn::Layer> Ptr_Layer;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Ptr_Layer _retval_ = me->getLayer( (*(*(Ptr<cv::dnn::DictValue>*)layerId_nativeObj)) );
        return (jlong)(new Ptr_Layer(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Net::connect(String outPin, String inpPin)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_connect_10 (JNIEnv*, jclass, jlong, jstring, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_connect_10
  (JNIEnv* env, jclass , jlong self, jstring outPin, jstring inpPin)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::connect_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outPin = env->GetStringUTFChars(outPin, 0); String n_outPin( utf_outPin ? utf_outPin : "" ); env->ReleaseStringUTFChars(outPin, utf_outPin);
        const char* utf_inpPin = env->GetStringUTFChars(inpPin, 0); String n_inpPin( utf_inpPin ? utf_inpPin : "" ); env->ReleaseStringUTFChars(inpPin, utf_inpPin);
        me->connect( n_outPin, n_inpPin );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setInputsNames(vector_String inputBlobNames)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputsNames_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputsNames_10
  (JNIEnv* env, jclass , jlong self, jobject inputBlobNames_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputsNames_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > inputBlobNames;
        inputBlobNames = List_to_vector_String(env, inputBlobNames_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setInputsNames( inputBlobNames );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setInputShape(String inputName, MatShape shape)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputShape_10 (JNIEnv*, jclass, jlong, jstring, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInputShape_10
  (JNIEnv* env, jclass , jlong self, jstring inputName, jlong shape_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInputShape_10()";
    try {
        LOGD("%s", method_name);
        MatShape shape;
        Mat& shape_mat = *((Mat*)shape_mat_nativeObj);
        Mat_to_MatShape( shape_mat, shape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_inputName = env->GetStringUTFChars(inputName, 0); String n_inputName( utf_inputName ? utf_inputName : "" ); env->ReleaseStringUTFChars(inputName, utf_inputName);
        me->setInputShape( n_inputName, shape );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Mat cv::dnn::Net::forward(String outputName = String())
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_10
  (JNIEnv* env, jclass , jlong self, jstring outputName)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::forward_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outputName = env->GetStringUTFChars(outputName, 0); String n_outputName( utf_outputName ? utf_outputName : "" ); env->ReleaseStringUTFChars(outputName, utf_outputName);
        cv::Mat _retval_ = me->forward( n_outputName );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_11 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_forward_11
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::forward_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->forward();
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Net::forward(vector_Mat& outputBlobs, String outputName = String())
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_12 (JNIEnv*, jclass, jlong, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_12
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj, jstring outputName)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::forward_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_outputName = env->GetStringUTFChars(outputName, 0); String n_outputName( utf_outputName ? utf_outputName : "" ); env->ReleaseStringUTFChars(outputName, utf_outputName);
        me->forward( outputBlobs, n_outputName );
        vector_Mat_to_Mat( outputBlobs, outputBlobs_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_13
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::forward_13()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->forward( outputBlobs );
        vector_Mat_to_Mat( outputBlobs, outputBlobs_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::forward(vector_Mat& outputBlobs, vector_String outBlobNames)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_14 (JNIEnv*, jclass, jlong, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_forward_14
  (JNIEnv* env, jclass , jlong self, jlong outputBlobs_mat_nativeObj, jobject outBlobNames_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::forward_14()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> outputBlobs;
        Mat& outputBlobs_mat = *((Mat*)outputBlobs_mat_nativeObj);
        std::vector< String > outBlobNames;
        outBlobNames = List_to_vector_String(env, outBlobNames_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->forward( outputBlobs, outBlobNames );
        vector_Mat_to_Mat( outputBlobs, outputBlobs_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Net cv::dnn::Net::quantize(vector_Mat calibData, int inputsDtype, int outputsDtype, bool perChannel = true)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_quantize_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_quantize_10
  (JNIEnv* env, jclass , jlong self, jlong calibData_mat_nativeObj, jint inputsDtype, jint outputsDtype, jboolean perChannel)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::quantize_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> calibData;
        Mat& calibData_mat = *((Mat*)calibData_mat_nativeObj);
        Mat_to_vector_Mat( calibData_mat, calibData );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::dnn::Net _retval_ = me->quantize( calibData, (int)inputsDtype, (int)outputsDtype, (bool)perChannel );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_quantize_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_quantize_11
  (JNIEnv* env, jclass , jlong self, jlong calibData_mat_nativeObj, jint inputsDtype, jint outputsDtype)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::quantize_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> calibData;
        Mat& calibData_mat = *((Mat*)calibData_mat_nativeObj);
        Mat_to_vector_Mat( calibData_mat, calibData );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::dnn::Net _retval_ = me->quantize( calibData, (int)inputsDtype, (int)outputsDtype );
        return (jlong) new cv::dnn::Net(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Net::getInputDetails(vector_float& scales, vector_int& zeropoints)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getInputDetails_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getInputDetails_10
  (JNIEnv* env, jclass , jlong self, jlong scales_mat_nativeObj, jlong zeropoints_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getInputDetails_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> scales;
        Mat& scales_mat = *((Mat*)scales_mat_nativeObj);
        std::vector<int> zeropoints;
        Mat& zeropoints_mat = *((Mat*)zeropoints_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->getInputDetails( scales, zeropoints );
        vector_float_to_Mat( scales, scales_mat );
        vector_int_to_Mat( zeropoints, zeropoints_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::getOutputDetails(vector_float& scales, vector_int& zeropoints)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getOutputDetails_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getOutputDetails_10
  (JNIEnv* env, jclass , jlong self, jlong scales_mat_nativeObj, jlong zeropoints_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getOutputDetails_10()";
    try {
        LOGD("%s", method_name);
        std::vector<float> scales;
        Mat& scales_mat = *((Mat*)scales_mat_nativeObj);
        std::vector<int> zeropoints;
        Mat& zeropoints_mat = *((Mat*)zeropoints_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->getOutputDetails( scales, zeropoints );
        vector_float_to_Mat( scales, scales_mat );
        vector_int_to_Mat( zeropoints, zeropoints_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setHalideScheduler(String scheduler)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setHalideScheduler_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setHalideScheduler_10
  (JNIEnv* env, jclass , jlong self, jstring scheduler)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setHalideScheduler_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_scheduler = env->GetStringUTFChars(scheduler, 0); String n_scheduler( utf_scheduler ? utf_scheduler : "" ); env->ReleaseStringUTFChars(scheduler, utf_scheduler);
        me->setHalideScheduler( n_scheduler );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setPreferableBackend(int backendId)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableBackend_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableBackend_10
  (JNIEnv* env, jclass , jlong self, jint backendId)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setPreferableBackend_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setPreferableBackend( (int)backendId );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setPreferableTarget(int targetId)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableTarget_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setPreferableTarget_10
  (JNIEnv* env, jclass , jlong self, jint targetId)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setPreferableTarget_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->setPreferableTarget( (int)targetId );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setInput(Mat blob, String name = "", double scalefactor = 1.0, Scalar mean = Scalar())
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_10 (JNIEnv*, jclass, jlong, jlong, jstring, jdouble, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_10
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj, jstring name, jdouble scalefactor, jdouble mean_val0, jdouble mean_val1, jdouble mean_val2, jdouble mean_val3)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInput_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        const char* utf_name = env->GetStringUTFChars(name, 0); String n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        Scalar mean(mean_val0, mean_val1, mean_val2, mean_val3);
        me->setInput( blob, n_name, (double)scalefactor, mean );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_11 (JNIEnv*, jclass, jlong, jlong, jstring, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_11
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj, jstring name, jdouble scalefactor)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInput_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        const char* utf_name = env->GetStringUTFChars(name, 0); String n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setInput( blob, n_name, (double)scalefactor );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_12 (JNIEnv*, jclass, jlong, jlong, jstring);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_12
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj, jstring name)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInput_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        const char* utf_name = env->GetStringUTFChars(name, 0); String n_name( utf_name ? utf_name : "" ); env->ReleaseStringUTFChars(name, utf_name);
        me->setInput( blob, n_name );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_13 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setInput_13
  (JNIEnv* env, jclass , jlong self, jlong blob_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setInput_13()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        me->setInput( blob );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setParam(int layer, int numParam, Mat blob)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_10 (JNIEnv*, jclass, jlong, jint, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_10
  (JNIEnv* env, jclass , jlong self, jint layer, jint numParam, jlong blob_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setParam_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        Mat& blob = *((Mat*)blob_nativeObj);
        me->setParam( (int)layer, (int)numParam, blob );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::setParam(String layerName, int numParam, Mat blob)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_11 (JNIEnv*, jclass, jlong, jstring, jint, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_setParam_11
  (JNIEnv* env, jclass , jlong self, jstring layerName, jint numParam, jlong blob_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setParam_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerName = env->GetStringUTFChars(layerName, 0); String n_layerName( utf_layerName ? utf_layerName : "" ); env->ReleaseStringUTFChars(layerName, utf_layerName);
        Mat& blob = *((Mat*)blob_nativeObj);
        me->setParam( n_layerName, (int)numParam, blob );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  Mat cv::dnn::Net::getParam(int layer, int numParam = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_10
  (JNIEnv* env, jclass , jlong self, jint layer, jint numParam)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getParam_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->getParam( (int)layer, (int)numParam );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_11
  (JNIEnv* env, jclass , jlong self, jint layer)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getParam_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        cv::Mat _retval_ = me->getParam( (int)layer );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Mat cv::dnn::Net::getParam(String layerName, int numParam = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_12 (JNIEnv*, jclass, jlong, jstring, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_12
  (JNIEnv* env, jclass , jlong self, jstring layerName, jint numParam)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getParam_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerName = env->GetStringUTFChars(layerName, 0); String n_layerName( utf_layerName ? utf_layerName : "" ); env->ReleaseStringUTFChars(layerName, utf_layerName);
        cv::Mat _retval_ = me->getParam( n_layerName, (int)numParam );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_13 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getParam_13
  (JNIEnv* env, jclass , jlong self, jstring layerName)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getParam_13()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerName = env->GetStringUTFChars(layerName, 0); String n_layerName( utf_layerName ? utf_layerName : "" ); env->ReleaseStringUTFChars(layerName, utf_layerName);
        cv::Mat _retval_ = me->getParam( n_layerName );
        return (jlong) new cv::Mat(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_int cv::dnn::Net::getUnconnectedOutLayers()
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayers_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayers_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getUnconnectedOutLayers_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        std::vector<int> _ret_val_vector_ = me->getUnconnectedOutLayers();
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
//  vector_String cv::dnn::Net::getUnconnectedOutLayersNames()
//

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayersNames_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_Net_getUnconnectedOutLayersNames_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getUnconnectedOutLayersNames_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        std::vector< String > _ret_val_vector_ = me->getUnconnectedOutLayersNames();
        return vector_String_to_List(env, _ret_val_vector_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 cv::dnn::Net::getFLOPS(vector_MatShape netInputShapes)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_10
  (JNIEnv* env, jclass , jlong self, jobject netInputShapes_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getFLOPS_10()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        return me->getFLOPS( netInputShapes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 cv::dnn::Net::getFLOPS(MatShape netInputShape)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_11 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_11
  (JNIEnv* env, jclass , jlong self, jlong netInputShape_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getFLOPS_11()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        return me->getFLOPS( netInputShape );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 cv::dnn::Net::getFLOPS(int layerId, vector_MatShape netInputShapes)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_12 (JNIEnv*, jclass, jlong, jint, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_12
  (JNIEnv* env, jclass , jlong self, jint layerId, jobject netInputShapes_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getFLOPS_12()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        return me->getFLOPS( (int)layerId, netInputShapes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int64 cv::dnn::Net::getFLOPS(int layerId, MatShape netInputShape)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_13 (JNIEnv*, jclass, jlong, jint, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getFLOPS_13
  (JNIEnv* env, jclass , jlong self, jint layerId, jlong netInputShape_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getFLOPS_13()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        return me->getFLOPS( (int)layerId, netInputShape );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Net::getLayerTypes(vector_String& layersTypes)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getLayerTypes_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getLayerTypes_10
  (JNIEnv* env, jclass , jlong self, jobject layersTypes_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayerTypes_10()";
    try {
        LOGD("%s", method_name);
        std::vector< String > layersTypes;
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->getLayerTypes( layersTypes );
        Copy_vector_String_to_List(env,layersTypes,layersTypes_list);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int cv::dnn::Net::getLayersCount(String layerType)
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayersCount_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_Net_getLayersCount_10
  (JNIEnv* env, jclass , jlong self, jstring layerType)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getLayersCount_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        const char* utf_layerType = env->GetStringUTFChars(layerType, 0); String n_layerType( utf_layerType ? utf_layerType : "" ); env->ReleaseStringUTFChars(layerType, utf_layerType);
        return me->getLayersCount( n_layerType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::Net::getMemoryConsumption(MatShape netInputShape, size_t& weights, size_t& blobs)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_10 (JNIEnv*, jclass, jlong, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_10
  (JNIEnv* env, jclass , jlong self, jlong netInputShape_mat_nativeObj, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getMemoryConsumption_10()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( netInputShape, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);
        jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::getMemoryConsumption(int layerId, vector_MatShape netInputShapes, size_t& weights, size_t& blobs)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_11 (JNIEnv*, jclass, jlong, jint, jobject, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_11
  (JNIEnv* env, jclass , jlong self, jint layerId, jobject netInputShapes_list, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getMemoryConsumption_11()";
    try {
        LOGD("%s", method_name);
        std::vector< MatShape > netInputShapes;
        netInputShapes = List_to_vector_MatShape(env, netInputShapes_list);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( (int)layerId, netInputShapes, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);
        jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::getMemoryConsumption(int layerId, MatShape netInputShape, size_t& weights, size_t& blobs)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_12 (JNIEnv*, jclass, jlong, jint, jlong, jdoubleArray, jdoubleArray);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_getMemoryConsumption_12
  (JNIEnv* env, jclass , jlong self, jint layerId, jlong netInputShape_mat_nativeObj, jdoubleArray weights_out, jdoubleArray blobs_out)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getMemoryConsumption_12()";
    try {
        LOGD("%s", method_name);
        MatShape netInputShape;
        Mat& netInputShape_mat = *((Mat*)netInputShape_mat_nativeObj);
        Mat_to_MatShape( netInputShape_mat, netInputShape );
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        size_t weights;
        size_t blobs;
        me->getMemoryConsumption( (int)layerId, netInputShape, weights, blobs );
        jdouble tmp_weights[1] = {(jdouble)weights}; env->SetDoubleArrayRegion(weights_out, 0, 1, tmp_weights);
        jdouble tmp_blobs[1] = {(jdouble)blobs}; env->SetDoubleArrayRegion(blobs_out, 0, 1, tmp_blobs);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::enableFusion(bool fusion)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableFusion_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableFusion_10
  (JNIEnv* env, jclass , jlong self, jboolean fusion)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::enableFusion_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->enableFusion( (bool)fusion );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::Net::enableWinograd(bool useWinograd)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableWinograd_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_enableWinograd_10
  (JNIEnv* env, jclass , jlong self, jboolean useWinograd)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::enableWinograd_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        me->enableWinograd( (bool)useWinograd );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  int64 cv::dnn::Net::getPerfProfile(vector_double& timings)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getPerfProfile_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_Net_getPerfProfile_10
  (JNIEnv* env, jclass , jlong self, jlong timings_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getPerfProfile_10()";
    try {
        LOGD("%s", method_name);
        std::vector<double> timings;
        Mat& timings_mat = *((Mat*)timings_mat_nativeObj);
        cv::dnn::Net* me = (cv::dnn::Net*) self; //TODO: check for NULL
        int64 _retval_ = me->getPerfProfile( timings );
        vector_double_to_Mat( timings, timings_mat );
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
//  static void cv::dnn::Net::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_Net_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::Net*) self;
}


//
//   cv::dnn::SegmentationModel::SegmentationModel(String model, String config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_10 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_10
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::SegmentationModel_10()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); String n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::SegmentationModel* _retval_ = new cv::dnn::SegmentationModel( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_11 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_11
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::SegmentationModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); String n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::SegmentationModel* _retval_ = new cv::dnn::SegmentationModel( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::SegmentationModel::SegmentationModel(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_12 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_SegmentationModel_SegmentationModel_12
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::SegmentationModel_12()";
    try {
        LOGD("%s", method_name);
        cv::dnn::SegmentationModel* _retval_ = new cv::dnn::SegmentationModel( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::dnn::SegmentationModel::segment(Mat frame, Mat& mask)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_SegmentationModel_segment_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_SegmentationModel_segment_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong mask_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::segment_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::SegmentationModel* me = (cv::dnn::SegmentationModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        me->segment( frame, mask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::SegmentationModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_SegmentationModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_SegmentationModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::SegmentationModel*) self;
}


//
//  void cv::dnn::TextDetectionModel::detect(Mat frame, vector_vector_Point& detections, vector_float& confidences)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detect_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detect_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong detections_mat_nativeObj, jlong confidences_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detect_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::vector<Point> > detections;
        Mat& detections_mat = *((Mat*)detections_mat_nativeObj);
        std::vector<float> confidences;
        Mat& confidences_mat = *((Mat*)confidences_mat_nativeObj);
        cv::dnn::TextDetectionModel* me = (cv::dnn::TextDetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detect( frame, detections, confidences );
        vector_vector_Point_to_Mat( detections, detections_mat );
        vector_float_to_Mat( confidences, confidences_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::TextDetectionModel::detect(Mat frame, vector_vector_Point& detections)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detect_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detect_11
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong detections_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detect_11()";
    try {
        LOGD("%s", method_name);
        std::vector< std::vector<Point> > detections;
        Mat& detections_mat = *((Mat*)detections_mat_nativeObj);
        cv::dnn::TextDetectionModel* me = (cv::dnn::TextDetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detect( frame, detections );
        vector_vector_Point_to_Mat( detections, detections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::TextDetectionModel::detectTextRectangles(Mat frame, vector_RotatedRect& detections, vector_float& confidences)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong detections_mat_nativeObj, jlong confidences_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detectTextRectangles_10()";
    try {
        LOGD("%s", method_name);
        std::vector< RotatedRect > detections;
        Mat& detections_mat = *((Mat*)detections_mat_nativeObj);
        std::vector<float> confidences;
        Mat& confidences_mat = *((Mat*)confidences_mat_nativeObj);
        cv::dnn::TextDetectionModel* me = (cv::dnn::TextDetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detectTextRectangles( frame, detections, confidences );
        vector_RotatedRect_to_Mat( detections, detections_mat );
        vector_float_to_Mat( confidences, confidences_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::dnn::TextDetectionModel::detectTextRectangles(Mat frame, vector_RotatedRect& detections)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_detectTextRectangles_11
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong detections_mat_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::detectTextRectangles_11()";
    try {
        LOGD("%s", method_name);
        std::vector< RotatedRect > detections;
        Mat& detections_mat = *((Mat*)detections_mat_nativeObj);
        cv::dnn::TextDetectionModel* me = (cv::dnn::TextDetectionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->detectTextRectangles( frame, detections );
        vector_RotatedRect_to_Mat( detections, detections_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::TextDetectionModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::TextDetectionModel*) self;
}


//
//   cv::dnn::TextDetectionModel_DB::TextDetectionModel_DB(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_10
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1DB_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* _retval_ = new cv::dnn::TextDetectionModel_DB( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::TextDetectionModel_DB::TextDetectionModel_DB(string model, string config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_11
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1DB_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); std::string n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::TextDetectionModel_DB* _retval_ = new cv::dnn::TextDetectionModel_DB( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_TextDetectionModel_1DB_12
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1DB_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::TextDetectionModel_DB* _retval_ = new cv::dnn::TextDetectionModel_DB( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setBinaryThreshold(float binaryThreshold)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setBinaryThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setBinaryThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat binaryThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setBinaryThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_DB _retval_ = me->setBinaryThreshold( (float)binaryThreshold );
        return (jlong) new cv::dnn::TextDetectionModel_DB(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::dnn::TextDetectionModel_DB::getBinaryThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getBinaryThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getBinaryThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getBinaryThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        return me->getBinaryThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setPolygonThreshold(float polygonThreshold)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setPolygonThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setPolygonThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat polygonThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setPolygonThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_DB _retval_ = me->setPolygonThreshold( (float)polygonThreshold );
        return (jlong) new cv::dnn::TextDetectionModel_DB(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::dnn::TextDetectionModel_DB::getPolygonThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getPolygonThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getPolygonThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getPolygonThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        return me->getPolygonThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setUnclipRatio(double unclipRatio)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setUnclipRatio_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setUnclipRatio_10
  (JNIEnv* env, jclass , jlong self, jdouble unclipRatio)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setUnclipRatio_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_DB _retval_ = me->setUnclipRatio( (double)unclipRatio );
        return (jlong) new cv::dnn::TextDetectionModel_DB(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::dnn::TextDetectionModel_DB::getUnclipRatio()
//

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getUnclipRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getUnclipRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getUnclipRatio_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        return me->getUnclipRatio();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_DB cv::dnn::TextDetectionModel_DB::setMaxCandidates(int maxCandidates)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setMaxCandidates_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_setMaxCandidates_10
  (JNIEnv* env, jclass , jlong self, jint maxCandidates)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setMaxCandidates_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_DB _retval_ = me->setMaxCandidates( (int)maxCandidates );
        return (jlong) new cv::dnn::TextDetectionModel_DB(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::dnn::TextDetectionModel_DB::getMaxCandidates()
//

JNIEXPORT jint JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getMaxCandidates_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_getMaxCandidates_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getMaxCandidates_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_DB* me = (cv::dnn::TextDetectionModel_DB*) self; //TODO: check for NULL
        return me->getMaxCandidates();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::dnn::TextDetectionModel_DB::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_1DB_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::TextDetectionModel_DB*) self;
}


//
//   cv::dnn::TextDetectionModel_EAST::TextDetectionModel_EAST(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_10
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1EAST_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_EAST* _retval_ = new cv::dnn::TextDetectionModel_EAST( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::TextDetectionModel_EAST::TextDetectionModel_EAST(string model, string config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_11
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1EAST_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); std::string n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::TextDetectionModel_EAST* _retval_ = new cv::dnn::TextDetectionModel_EAST( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_TextDetectionModel_1EAST_12
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextDetectionModel_1EAST_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::TextDetectionModel_EAST* _retval_ = new cv::dnn::TextDetectionModel_EAST( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_EAST cv::dnn::TextDetectionModel_EAST::setConfidenceThreshold(float confThreshold)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_setConfidenceThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_setConfidenceThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat confThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setConfidenceThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_EAST* me = (cv::dnn::TextDetectionModel_EAST*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_EAST _retval_ = me->setConfidenceThreshold( (float)confThreshold );
        return (jlong) new cv::dnn::TextDetectionModel_EAST(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::dnn::TextDetectionModel_EAST::getConfidenceThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_getConfidenceThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_getConfidenceThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getConfidenceThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_EAST* me = (cv::dnn::TextDetectionModel_EAST*) self; //TODO: check for NULL
        return me->getConfidenceThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextDetectionModel_EAST cv::dnn::TextDetectionModel_EAST::setNMSThreshold(float nmsThreshold)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_setNMSThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_setNMSThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat nmsThreshold)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setNMSThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_EAST* me = (cv::dnn::TextDetectionModel_EAST*) self; //TODO: check for NULL
        cv::dnn::TextDetectionModel_EAST _retval_ = me->setNMSThreshold( (float)nmsThreshold );
        return (jlong) new cv::dnn::TextDetectionModel_EAST(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::dnn::TextDetectionModel_EAST::getNMSThreshold()
//

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_getNMSThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_getNMSThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getNMSThreshold_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextDetectionModel_EAST* me = (cv::dnn::TextDetectionModel_EAST*) self; //TODO: check for NULL
        return me->getNMSThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::dnn::TextDetectionModel_EAST::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextDetectionModel_1EAST_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::TextDetectionModel_EAST*) self;
}


//
//   cv::dnn::TextRecognitionModel::TextRecognitionModel(Net network)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_10
  (JNIEnv* env, jclass , jlong network_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextRecognitionModel_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* _retval_ = new cv::dnn::TextRecognitionModel( (*(cv::dnn::Net*)network_nativeObj) );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//   cv::dnn::TextRecognitionModel::TextRecognitionModel(string model, string config = "")
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_11 (JNIEnv*, jclass, jstring, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_11
  (JNIEnv* env, jclass , jstring model, jstring config)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextRecognitionModel_11()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        const char* utf_config = env->GetStringUTFChars(config, 0); std::string n_config( utf_config ? utf_config : "" ); env->ReleaseStringUTFChars(config, utf_config);
        cv::dnn::TextRecognitionModel* _retval_ = new cv::dnn::TextRecognitionModel( n_model, n_config );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_12 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_TextRecognitionModel_12
  (JNIEnv* env, jclass , jstring model)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::TextRecognitionModel_12()";
    try {
        LOGD("%s", method_name);
        const char* utf_model = env->GetStringUTFChars(model, 0); std::string n_model( utf_model ? utf_model : "" ); env->ReleaseStringUTFChars(model, utf_model);
        cv::dnn::TextRecognitionModel* _retval_ = new cv::dnn::TextRecognitionModel( n_model );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextRecognitionModel cv::dnn::TextRecognitionModel::setDecodeType(string decodeType)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeType_10 (JNIEnv*, jclass, jlong, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeType_10
  (JNIEnv* env, jclass , jlong self, jstring decodeType)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setDecodeType_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        const char* utf_decodeType = env->GetStringUTFChars(decodeType, 0); std::string n_decodeType( utf_decodeType ? utf_decodeType : "" ); env->ReleaseStringUTFChars(decodeType, utf_decodeType);
        cv::dnn::TextRecognitionModel _retval_ = me->setDecodeType( n_decodeType );
        return (jlong) new cv::dnn::TextRecognitionModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  string cv::dnn::TextRecognitionModel::getDecodeType()
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_TextRecognitionModel_getDecodeType_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_TextRecognitionModel_getDecodeType_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getDecodeType_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        std::string _retval_ = me->getDecodeType();
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  TextRecognitionModel cv::dnn::TextRecognitionModel::setDecodeOptsCTCPrefixBeamSearch(int beamSize, int vocPruneSize = 0)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_10 (JNIEnv*, jclass, jlong, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_10
  (JNIEnv* env, jclass , jlong self, jint beamSize, jint vocPruneSize)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setDecodeOptsCTCPrefixBeamSearch_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        cv::dnn::TextRecognitionModel _retval_ = me->setDecodeOptsCTCPrefixBeamSearch( (int)beamSize, (int)vocPruneSize );
        return (jlong) new cv::dnn::TextRecognitionModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_11 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setDecodeOptsCTCPrefixBeamSearch_11
  (JNIEnv* env, jclass , jlong self, jint beamSize)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setDecodeOptsCTCPrefixBeamSearch_11()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        cv::dnn::TextRecognitionModel _retval_ = me->setDecodeOptsCTCPrefixBeamSearch( (int)beamSize );
        return (jlong) new cv::dnn::TextRecognitionModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  TextRecognitionModel cv::dnn::TextRecognitionModel::setVocabulary(vector_string vocabulary)
//

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setVocabulary_10 (JNIEnv*, jclass, jlong, jobject);

JNIEXPORT jlong JNICALL Java_org_opencv_dnn_TextRecognitionModel_setVocabulary_10
  (JNIEnv* env, jclass , jlong self, jobject vocabulary_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::setVocabulary_10()";
    try {
        LOGD("%s", method_name);
        std::vector< std::string > vocabulary;
        vocabulary = List_to_vector_string(env, vocabulary_list);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        cv::dnn::TextRecognitionModel _retval_ = me->setVocabulary( vocabulary );
        return (jlong) new cv::dnn::TextRecognitionModel(_retval_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  vector_string cv::dnn::TextRecognitionModel::getVocabulary()
//

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_TextRecognitionModel_getVocabulary_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jobject JNICALL Java_org_opencv_dnn_TextRecognitionModel_getVocabulary_10
  (JNIEnv* env, jclass , jlong self)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::getVocabulary_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        std::vector< std::string > _ret_val_vector_ = me->getVocabulary();
        return vector_string_to_List(env, _ret_val_vector_);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  string cv::dnn::TextRecognitionModel::recognize(Mat frame)
//

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_TextRecognitionModel_recognize_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jstring JNICALL Java_org_opencv_dnn_TextRecognitionModel_recognize_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::recognize_10()";
    try {
        LOGD("%s", method_name);
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        std::string _retval_ = me->recognize( frame );
        return env->NewStringUTF(_retval_.c_str());
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return env->NewStringUTF("");
}



//
//  void cv::dnn::TextRecognitionModel::recognize(Mat frame, vector_Mat roiRects, vector_string& results)
//

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextRecognitionModel_recognize_11 (JNIEnv*, jclass, jlong, jlong, jlong, jobject);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextRecognitionModel_recognize_11
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong roiRects_mat_nativeObj, jobject results_list)
{
    using namespace cv::dnn;
    static const char method_name[] = "dnn::recognize_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> roiRects;
        Mat& roiRects_mat = *((Mat*)roiRects_mat_nativeObj);
        Mat_to_vector_Mat( roiRects_mat, roiRects );
        std::vector< std::string > results;
        cv::dnn::TextRecognitionModel* me = (cv::dnn::TextRecognitionModel*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        me->recognize( frame, roiRects, results );
        Copy_vector_string_to_List(env,results,results_list);
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void cv::dnn::TextRecognitionModel::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_dnn_TextRecognitionModel_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_dnn_TextRecognitionModel_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::dnn::TextRecognitionModel*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_DNN
