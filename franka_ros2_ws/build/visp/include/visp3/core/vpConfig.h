/****************************************************************************
 *
 * ViSP, open source Visual Servoing Platform software.
 * Copyright (C) 2005 - 2023 by Inria. All rights reserved.
 *
 * This software is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * See the file LICENSE.txt at the root directory of this source
 * distribution for additional information about the GNU GPL.
 *
 * For using ViSP with software that can not be combined with the GNU
 * GPL, please contact Inria about acquiring a ViSP Professional
 * Edition License.
 *
 * See https://visp.inria.fr for more information.
 *
 * This software was developed at:
 * Inria Rennes - Bretagne Atlantique
 * Campus Universitaire de Beaulieu
 * 35042 Rennes Cedex
 * France
 *
 * If you have questions regarding the use of this file, please contact
 * Inria at visp@inria.fr
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 * Description:
 * ViSP configuration.
 *
*****************************************************************************/

#ifndef _vpConfig_h_
#define _vpConfig_h_

// To get access to EXIT_SUCCESS and EXIT_FAILURE
#include <cstdlib>

#if defined _MSC_VER && _MSC_VER >= 1200
#pragma warning( disable: 4100 4127 4251 4275 4351 4514 4668 4710 4820 )
#if _MSC_VER >= 1400 // 1400 = MSVC 8 2005
#pragma warning( disable: 4548 )
#endif
#if _MSC_VER > 1500 // 1500 = MSVC 9 2008
#pragma warning( disable: 4986 )
#endif
#ifdef WINRT
#pragma warning(disable:4447)
#endif

// 4100 : undocumented ("unreferenced formal parameter")
// 4127 : conditional expression is constant
// 4251 : 'identifier' : class 'type' needs to have dll-interface to be used by clients of class 'type2', ie. disable warnings related to inline functions
// 4275 : non – DLL-interface classkey 'identifier' used as base for DLL-interface classkey 'identifier'
// 4351 : new behavior: elements of array will be default initialized
// 4447 : Disable warning 'main' signature found without threading model
// 4514 : 'function' : unreferenced inline function has been removed
// 4548 : expression before comma has no effect
// 4668 : 'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'
// 4710 : 'function' : function not inlined
// 4820 : 'bytes' bytes padding added after construct 'member_name'
// 4986 : undocumented

#ifndef NOMINMAX
#define NOMINMAX
#endif
#endif

#if defined _MSC_VER && (_MSC_VER == 1500)
// Visual Studio 9 2008 specific stuff
// Fix running 64-bit OpenMP Debug Builds compiled with Visual Studio 2008 SP1
// See discussion on https://gforge.inria.fr/forum/message.php?msg_id=149273&group_id=397
// and the proposed fix: http://www.johanseland.com/2010/08/running-64-bit-openmp-debug-builds.html
#  define _BIND_TO_CURRENT_OPENMP_VERSION 1
#endif

#if defined(__MINGW__) || defined(__MINGW32__) || defined(__MINGW64__)
// Work around to fix build issues that may occur with Mingw:
// error: 'DBL_EPSILON' was not declared in this scope
// error: 'FLT_EPSILON' was not declared in this scope

#  include <float.h>

#  ifndef DBL_EPSILON
#    define DBL_EPSILON __DBL_EPSILON__
#  endif
#  ifndef FLT_EPSILON
#    define FLT_EPSILON __FLT_EPSILON__
#  endif
#endif

#include <visp3/visp_modules.h>

// ViSP major version.
#define VISP_VERSION_MAJOR 3

// ViSP minor version.
#define VISP_VERSION_MINOR 6

// ViSP patch version.
#define VISP_VERSION_PATCH 1

// ViSP version with dots "3.6.1".
#define VISP_VERSION 3.6.1

// ViSP version as an integer
#define VP_VERSION_INT(a, b, c) (a<<16 | b<<8 | c)
#define VISP_VERSION_INT VP_VERSION_INT(VISP_VERSION_MAJOR, \
                                        VISP_VERSION_MINOR, \
                                        VISP_VERSION_PATCH)

// Defined if the user wants to protect the classes in a dedicated visp namespace
/* #undef ENABLE_VISP_NAMESPACE */
#define VISP_NAMESPACE_NAME visp
#ifdef ENABLE_VISP_NAMESPACE
#define VISP_NAMESPACE_ADDRESSING visp::
#define BEGIN_VISP_NAMESPACE namespace visp {
#define END_VISP_NAMESPACE }
// Create an empty namespace to ensure that "using VISP_NAMESPACE_NAME;" does not raise an error
namespace VISP_NAMESPACE_NAME {}

// Create an alias for compatibility with older versions of ViSP
namespace vp = VISP_NAMESPACE_NAME;
#else
#define VISP_NAMESPACE_ADDRESSING
#define BEGIN_VISP_NAMESPACE
#define END_VISP_NAMESPACE
#endif

// Enable debug and trace printings
/* #undef VP_TRACE */
/* #undef VP_DEBUG */
/* #undef VP_DEBUG_MODE */

// ViSP library is either compiled static or shared
// Used to set declspec(import, export) in headers if required under Windows
#define VISP_BUILD_SHARED_LIBS

// Defined if deprecated functionalities are requested to build
#define VISP_BUILD_DEPRECATED_FUNCTIONS

// Defined if MSVC is the compiler
/* #undef VISP_USE_MSVC */

// Defined if Clipper is build and available.
#define VISP_HAVE_CLIPPER

// Defined if AprilTag is build and available.
#define VISP_HAVE_APRILTAG

// Defined if AprilTag big family (41h12, 48h12, 49h12, 52h13) known to produce long build time issue
// with gcc < 5.5 in RelWithDebInfo and Visual Studio 12 2013 in Release are available
/* #undef VISP_HAVE_APRILTAG_BIG_FAMILY */

// Defined if X11 library available.
#define VISP_HAVE_X11

// Always define pugixml for compatibility.
#define VISP_HAVE_PUGIXML

// Defined if basisu_miniz is used internally
#define VISP_HAVE_MINIZ

// Defined if XML2 library available.
#define VISP_HAVE_XML2

// Defined if pthread library available (deprecated).
#define VISP_HAVE_PTHREAD

// Defined if std::thread available.
#define VISP_HAVE_THREADS

// Defined if YARP available.
/* #undef VISP_HAVE_YARP */

// Defined if OpenCV available.
#define VISP_HAVE_OPENCV

// Defined if OpenCV nonfree module available. Only with OpenCV < 3.0.0
/* #undef VISP_HAVE_OPENCV_NONFREE */

// Defined if OpenCV xfeatures2d module available. Only since OpenCV >= 3.0.0
/* #undef VISP_HAVE_OPENCV_XFEATURES2D */

// OpenCV version in hexadecimal (for example 2.1.0 gives 0x020100).
#ifdef VISP_HAVE_OPENCV
#  define VISP_HAVE_OPENCV_VERSION (4<<16 | 10<<8 | 0)
#  include <opencv2/opencv_modules.hpp>
#endif

// For compat with previous releases
#if defined(HAVE_OPENCV_OBJDETECT)
#define VISP_HAVE_OPENCV_OBJDETECT
#endif

// Defined if gtk+-2.0 library available
/* #undef VISP_HAVE_GTK */

// Defined if GDI (Graphics Device Interface) library available
/* #undef VISP_HAVE_GDI */

// Defined if Direct3D9 library available
/* #undef VISP_HAVE_D3D9 */

// Defined if one of the display device is available
#if defined(VISP_HAVE_X11) || defined(VISP_HAVE_GDI) || defined(HAVE_OPENCV_HIGHGUI) || defined(VISP_HAVE_D3D9) || defined(VISP_HAVE_GTK)
#  define VISP_HAVE_DISPLAY
#endif

// Defined if Catch2 library available
#define VISP_HAVE_CATCH2

// Defined if simdlib library available
#define VISP_HAVE_SIMDLIB

// Defined if stb_image library available
#define VISP_HAVE_STBIMAGE

// Defined if tinyexr library available
#define VISP_HAVE_TINYEXR

// Defined if Eigen3 library available
#define VISP_HAVE_EIGEN3

// Defined if Intel MKL library available
/* #undef VISP_HAVE_MKL */
#ifdef VISP_HAVE_MKL
#define VISP_HAVE_LAPACK_MKL
#endif

// Defined if OpenBLAS library available
/* #undef VISP_HAVE_OPENBLAS */
#ifdef VISP_HAVE_OPENBLAS
#define VISP_HAVE_LAPACK_OPENBLAS
#endif

// Defined if Atlas library available
/* #undef VISP_HAVE_ATLAS */
#ifdef VISP_HAVE_ATLAS
#define VISP_HAVE_LAPACK_ATLAS
#endif

// Defined if Netlib library available (-lblas -llapack)
#define VISP_HAVE_NETLIB
#ifdef VISP_HAVE_NETLIB
#define VISP_HAVE_LAPACK_NETLIB
#endif

// Defined if GSL library available (-lgsl -lgslcblas)
/* #undef VISP_HAVE_GSL */
#ifdef VISP_HAVE_GSL
#define VISP_HAVE_LAPACK_GSL
#endif

// Defined if lapack/blas libraries are available (MKL, OpenBLAS, Atlas, Netlib or built-in)
#define VISP_HAVE_LAPACK
// To keep compat with previous versions
#ifdef VISP_HAVE_NETLIB
#  define VISP_HAVE_LAPACK_C
#endif

// Defined if clapack built-in
/* #undef VISP_HAVE_LAPACK_BUILT_IN */

// Defined the path to the Rubik-Regular.ttf used by vpFont
#define VISP_RUBIK_REGULAR_FONT_RESOURCES "/home/adminlab/franka_ros2_ws/build/visp/data/font/Rubik-Regular.ttf;/usr/local/share/visp-3.6.1/data/font/Rubik-Regular.ttf"

// Defined the path to the basic scenes used by the simulator
#define VISP_SCENES_DIR "/home/adminlab/franka_ros2_ws/build/visp/data/wireframe-simulator;/usr/local/share/visp-3.6.1/data/wireframe-simulator"

// Defined the path to the robot's arms 3D model used by the robot simulators
#define VISP_ROBOT_ARMS_DIR "/home/adminlab/franka_ros2_ws/build/visp/data/robot-simulator;/usr/local/share/visp-3.6.1/data/robot-simulator"

// Defined if Ogre3d is available.
#define VISP_HAVE_OGRE

// Defined if Ogre3d plugins.cfg is available.
#define VISP_HAVE_OGRE_PLUGINS_PATH "/home/adminlab/franka_ros2_ws/build/visp/data/ogre-simulator;/usr/local/lib/visp/data/ogre-simulator"

// Defined if Ogre3d resources.cfg is available.
#define VISP_HAVE_OGRE_RESOURCES_PATH "/home/adminlab/franka_ros2_ws/build/visp/data/ogre-simulator;/usr/local/share/visp-3.6.1/data/ogre-simulator"

// Defined if OIS (Object Oriented Input System) library available.
/* #undef VISP_HAVE_OIS */

// Defined if Coin3D and one of the GUI (SoXt, SoWin, SoQt + Qt)
// libraries are available.
/* #undef VISP_HAVE_COIN3D_AND_GUI */
// provided for compat with previous releases
#ifdef VISP_HAVE_COIN3D_AND_GUI
#  define VISP_HAVE_COIN_AND_GUI
#endif

// Defined if Coin3D library available.
/* #undef VISP_HAVE_COIN3D */
// provided for compat with previous releases
#ifdef VISP_HAVE_COIN3D
#  define VISP_HAVE_COIN
#endif

// Defined if OpenGL library available.
#define VISP_HAVE_OPENGL

// Defined if Qt library available (either Qt-3 or Qt-4).
/* #undef VISP_HAVE_QT */

// Defined if SoQt library available.
/* #undef VISP_HAVE_SOQT */

// Defined if SoWin library available.
/* #undef VISP_HAVE_SOWIN */

// Defined if SoXt library available.
/* #undef VISP_HAVE_SOXT */

// Defined if libjpeg library available.
#define VISP_HAVE_JPEG
#ifdef VISP_HAVE_JPEG
#  define VISP_HAVE_LIBJPEG
#endif

// Defined if libpng library available.
#define VISP_HAVE_PNG
#ifdef VISP_HAVE_PNG
#  define VISP_HAVE_LIBPNG
#endif

// Defined if libfreenect, libusb-1.0 and libpthread libraries available.
/* #undef VISP_HAVE_LIBFREENECT_AND_DEPENDENCIES */

// Defined if libfreenect library available.
/* #undef VISP_HAVE_LIBFREENECT */

// Defined if libfreenect library in an old version package for
// ubuntu 10.04 lucid is available.
// This is a workaround useful to initialise vpKinect depending on the
// libfreenect version
//#ifdef VISP_HAVE_LIBFREENECT_OLD
//  Freenect::Freenect<vpKinect> freenect;
//  vpKinect & kinect = freenect.createDevice(0);
//#else
//  Freenect::Freenect freenect;
//  vpKinect & kinect = freenect.createDevice<vpKinect>(0);
//#endif
/* #undef VISP_HAVE_LIBFREENECT_OLD */

// Defined if libusb-1.0 library available.
#define VISP_HAVE_LIBUSB_1

// Defined if librealSense library is available.
/* #undef VISP_HAVE_REALSENSE */

// Defined if librealSense2 library is available.
#define VISP_HAVE_REALSENSE2

// Defined if libStructure library is available.
/* #undef VISP_HAVE_OCCIPITAL_STRUCTURE */

// Defined if raw1394 and dc1394-2.x libraries available.
#define VISP_HAVE_DC1394
#if defined(VISP_BUILD_DEPRECATED_FUNCTIONS) && defined(VISP_HAVE_DC1394)
#  define VISP_HAVE_DC1394_2
#endif

// Defined if dc1394_camera_enumerate() is available in dc1394-2.x.
// dc1394_camera_enumerate() was introduced after libdc1394-2.0.0-rc7.
#define VISP_HAVE_DC1394_CAMERA_ENUMERATE
#if defined(VISP_BUILD_DEPRECATED_FUNCTIONS) && defined(VISP_HAVE_DC1394_CAMERA_ENUMERATE)
#  define VISP_HAVE_DC1394_2_CAMERA_ENUMERATE
#endif

// Defined if dc1394_find_cameras() is available in dc1394-2.x
// dc1394_find_cameras() is still present until libdc1394-2.0.0-rc7.
// This function was suppress and replace by dc1394_camera_enumerate()
// in more recent releases.
/* #undef VISP_HAVE_DC1394_FIND_CAMERAS */
#if defined(VISP_BUILD_DEPRECATED_FUNCTIONS) && defined(VISP_HAVE_DC1394_FIND_CAMERAS)
#  define VISP_HAVE_DC1394_2_FIND_CAMERAS
#endif

// Defined if CMU 1394 Digital Camera SDK available.
/* #undef VISP_HAVE_CMU1394 */

// Defined if Video For Linux Two available.
#define VISP_HAVE_V4L2

// Defined if DirectShow library is available (only under Windows).
/* #undef VISP_HAVE_DIRECTSHOW */

// Defined if FLIR FlyCapture SDK available.
/* #undef VISP_HAVE_FLYCAPTURE */

// Defined if Basler Pylon SDK available.
/* #undef VISP_HAVE_PYLON */

// Defined if IDS uEye SDK available.
/* #undef VISP_HAVE_UEYE */

// Defined if Comedi (linux control and measurement cdevice interface) available.
/* #undef VISP_HAVE_COMEDI */

// Defined if ATIDAQ-C is build and available.
/* #undef VISP_HAVE_ATIDAQ */

// Defined if IIT force-torque SDK is available.
/* #undef VISP_HAVE_FT_IIT_SDK */

// Defined if Qualisys SDK is available for mocap.
/* #undef VISP_HAVE_QUALISYS */

// Defined if Vicon SDK is available for mocap.
/* #undef VISP_HAVE_VICON */

// Defined if Irisa's Afma4 robot available.
/* #undef VISP_HAVE_AFMA4 */

// Defined if Irisa's Afma6 robot available.
/* #undef VISP_HAVE_AFMA6 */

// Defined if Irisa's Afma6 data files (camera intrinsic/extrinsic parameters) are available
/* #undef VISP_HAVE_AFMA6_DATA */
#define VISP_AFMA6_DATA_PATH ""

// Defined if Biclops pan-tilt head available.
/* #undef VISP_HAVE_BICLOPS */
/* #undef VISP_HAVE_BICLOPS_AND_GET_HOMED_STATE_FUNCTION */

// Defined if Rapa Pololu Maestro 3rd party library available.
#define VISP_HAVE_POLOLU

// Defined if Irisa's Ptu-46 pan-tilt head available.
/* #undef VISP_HAVE_PTU46 */

// Defined if Flir PTU SDK is available to control Flir PTU robot.
/* #undef VISP_HAVE_FLIR_PTU_SDK */

// Defined if Irisa's Viper S650 robot available.
/* #undef VISP_HAVE_VIPER650 */

// Defined if Inria's Viper650 data files (camera intrinsic/extrinsic parameters) are available
/* #undef VISP_HAVE_VIPER650_DATA */
#define VISP_VIPER650_DATA_PATH ""

// Defined if Irisa's Viper S850 robot available.
/* #undef VISP_HAVE_VIPER850 */

// Defined if Inria's Viper850 data files (camera intrinsic/extrinsic parameters) are available
/* #undef VISP_HAVE_VIPER850_DATA */
#define VISP_VIPER850_DATA_PATH ""

// Defined if Universal Robot RTDE C++ interface is available
/* #undef VISP_HAVE_UR_RTDE */

// Defined if MAVSDK is available
/* #undef VISP_HAVE_MAVSDK */

// MAVSDK version in hexadecimal (for example 1.4.12 gives 0x010412).
#ifdef VISP_HAVE_MAVSDK
#  define VISP_HAVE_MAVSDK_VERSION 
#endif

// Defined if libfranka from Franka Emika available to control Panda robot.
#define VISP_HAVE_FRANKA

// libfranka version in hexadecimal (for example 0.5.0 gives 0x000500).
#ifdef VISP_HAVE_FRANKA
#  define VISP_HAVE_FRANKA_VERSION (0<<16 | 13<<8 | 2)
#endif

// Defined if Kinova Jaco SDK is available to control Kinova robot.
/* #undef VISP_HAVE_JACOSDK */

// Defined if the Aria library and (pthread, rt, dl libraries under Unix) is found.
// These libraries are used to control Pioneer mobile robots.
/* #undef VISP_HAVE_PIONEER */

// Defined if the Parrot ARSDK is found.
// This library is used to control Bebop2 drone.
/* #undef VISP_HAVE_ARSDK */
// Defined if the Parrot ARSDK is found but also ffmpeg to get camera stream.
/* #undef VISP_HAVE_FFMPEG */

// Defined if Haption Virtuose SDK available.
/* #undef VISP_HAVE_VIRTUOSE */

// Defined if qbdevice api from qb-robotics available.
#define VISP_HAVE_QBDEVICE

// Defined if takktile2 api from Right Hand Robotics available.
#define VISP_HAVE_TAKKTILE2

// Defined if linux/parport.h is available for parallel port usage.
#define VISP_HAVE_PARPORT

// Defined if libzbar is available for bar code detection
#define VISP_HAVE_ZBAR

// Defined if Point Cloud Library is available
#define VISP_HAVE_PCL

// Defined if required PCL components are found
#if defined(VISP_HAVE_PCL)
#define VISP_HAVE_PCL_COMMON
#define VISP_HAVE_PCL_FILTERS
#define VISP_HAVE_PCL_IO
#define VISP_HAVE_PCL_SEGMENTATION
#define VISP_HAVE_PCL_VISUALIZATION
#endif

// Defined if libdmtx is available for bar code detection
/* #undef VISP_HAVE_DMTX */

// Defined if Doxygen documentation tool is found
/* #undef VISP_HAVE_DOXYGEN */

// Defined if we want to compute interaction matrices by combining
// other interaction matrices
/* #undef VISP_MOMENTS_COMBINE_MATRICES */

// Defined if we want to use openmp
#define VISP_HAVE_OPENMP

// Defined if nlohmann json parser is found
#define VISP_HAVE_NLOHMANN_JSON

// Define c++ standard values also available in __cplusplus when gcc is used
#define VISP_CXX_STANDARD_98 199711L
#define VISP_CXX_STANDARD_11 201103L
#define VISP_CXX_STANDARD_14 201402L
#define VISP_CXX_STANDARD_17 201703L

#define VISP_CXX_STANDARD 201703L

// Defined if isnan macro is available
#define VISP_HAVE_FUNC_ISNAN

// Defined if std::isnan function is available
#define VISP_HAVE_FUNC_STD_ISNAN

// Defined if _isnan (Microsoft version) is available
/* #undef VISP_HAVE_FUNC__ISNAN */

// Defined if isinf macro is available
#define VISP_HAVE_FUNC_ISINF

// Defined if std::isinf function is available
#define VISP_HAVE_FUNC_STD_ISINF

// Defined if isfinite macro is available
#define VISP_HAVE_FUNC_ISFINITE

// Defined if std::isfinite function is available
#define VISP_HAVE_FUNC_STD_ISFINITE

// Defined if _finite (Microsoft version) function is available
/* #undef VISP_HAVE_FUNC__FINITE */

// Defined if round function is available
#define VISP_HAVE_FUNC_ROUND

// Defined if std::round function is available
#define VISP_HAVE_FUNC_STD_ROUND

// Defined if erfc function is available
#define VISP_HAVE_FUNC_ERFC

// Defined if std::erfc function is available
#define VISP_HAVE_FUNC_STD_ERFC

// Defined if strtof function is available
#define VISP_HAVE_FUNC_STRTOF

// Defined if log1p function is available
#define VISP_HAVE_FUNC_LOG1P

// Defined if inet_ntop function is available
#define VISP_HAVE_FUNC_INET_NTOP

// Defined if xrandr program available
#define VISP_HAVE_XRANDR

// Defined if TensorRT available
/* #undef VISP_HAVE_TENSORRT */

// Defined if ViSP dataset found
/* #undef VISP_HAVE_DATASET */
#ifdef VISP_HAVE_DATASET
#  define VISP_HAVE_DATASET_VERSION 
#endif

// Defined if Bayer conversion has to be skipped
/* #undef VISP_SKIP_BAYER_CONVERSION */

// Defined if nullptr is available
#define VISP_HAVE_NULLPTR

// Emulate nullptr when not available when cxx98 is enabled
// Note that on ubuntu 12.04 __cplusplus is equal to 1 that's why in the next line we consider __cplusplus <= 199711L
// and not __cplusplus == 199711L
#if (!defined(VISP_HAVE_NULLPTR)) && (__cplusplus <= 199711L)
#include <visp3/core/vpNullptrEmulated.h>
#endif

// Macro to be able to add override keyword
#ifndef vp_override
  #if (__cplusplus >= 201103L) || (defined(_MSC_VER) && _MSC_VER >= 1600)
    #define vp_override override
  #else
    #define vp_override
  #endif
#endif

// Handle portable symbol export.
// Defining manually which symbol should be exported is required
// under Windows whether MinGW or MSVC is used.
//
// The headers then have to be able to work in two different modes:
// - dllexport when one is building the library,
// - dllimport for clients using the library.
//
// On Linux, set the visibility accordingly. If C++ symbol visibility
// is handled by the compiler, see: http://gcc.gnu.org/wiki/Visibility
# if defined(_WIN32) || defined(__CYGWIN__)
// On Microsoft Windows, use dllimport and dllexport to tag symbols.
#  define VISP_DLLIMPORT __declspec(dllimport)
#  define VISP_DLLEXPORT __declspec(dllexport)
#  define VISP_DLLLOCAL
# else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#   define VISP_DLLIMPORT __attribute__ ((visibility("default")))
#   define VISP_DLLEXPORT __attribute__ ((visibility("default")))
#   define VISP_DLLLOCAL  __attribute__ ((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#   define VISP_DLLIMPORT
#   define VISP_DLLEXPORT
#   define VISP_DLLLOCAL
#  endif // __GNUC__ >= 4
# endif // defined(_WIN32) || defined(__CYGWIN__)

// Under Windows, for shared libraries (DLL) we need to define export on
// compilation or import on use (like a third party project).
// We exploit here the fact that cmake auto set xxx_EXPORTS (with S) on
// compilation.
#if defined(VISP_BUILD_SHARED_LIBS)
// Depending on whether one is building or using the
// library define VISP_EXPORT to import or export.
#  ifdef visp_EXPORTS
#    define VISP_EXPORT VISP_DLLEXPORT
#  else
#    define VISP_EXPORT VISP_DLLIMPORT
#  endif
#  define VISP_LOCAL VISP_DLLLOCAL
#else
// If one is using the library statically, get rid of
// extra information.
#  define VISP_EXPORT
#  define VISP_LOCAL
#endif

// Add the material to produce a warning when deprecated functions are used
#ifndef vp_deprecated
#  if !defined(_WIN32) && (defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))) // UNIX
#    define vp_deprecated __attribute__((deprecated))
#  else
#    define vp_deprecated __declspec(deprecated)
#  endif
#endif

#endif
