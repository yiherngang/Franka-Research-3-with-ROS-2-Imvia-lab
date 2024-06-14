/*
 *      ** File generated automatically, do not modify **
 *
 * This file includes all the headers that are available in ViSP.
 *
 */

#ifndef _visp_h_
#define _visp_h_

// File that defines which modules where included during ViSP build
// It contains the defines of the correct VISP_HAVE_MODULE_<modulename> values
#include <visp3/visp_modules.h>

// Then the list of defines is checked to include the correct headers
#ifdef VISP_HAVE_MODULE_AR
#  include <visp3/visp_ar.h>
#endif

#ifdef VISP_HAVE_MODULE_BLOB
#  include <visp3/visp_blob.h>
#endif

// Core library is always included; without no ViSP functionality available
#include <visp3/visp_core.h>

#ifdef VISP_HAVE_MODULE_DETECTION
#  include <visp3/visp_detection.h>
#endif

#ifdef VISP_HAVE_MODULE_DNN_TRACKER
#  include <visp3/visp_dnn_tracker.h>
#endif

#ifdef VISP_HAVE_MODULE_GUI
#  include <visp3/visp_gui.h>
#endif

#ifdef VISP_HAVE_MODULE_IMGPROC
#  include <visp3/visp_imgproc.h>
#endif

#ifdef VISP_HAVE_MODULE_IO
#  include <visp3/visp_io.h>
#endif

#ifdef VISP_HAVE_MODULE_JAVA
#  include <visp3/visp_java.h>
#endif

#ifdef VISP_HAVE_MODULE_JAVA_BINDINGS_GENERATOR
#  include <visp3/visp_java_bindings_generator.h>
#endif

#ifdef VISP_HAVE_MODULE_KLT
#  include <visp3/visp_klt.h>
#endif

#ifdef VISP_HAVE_MODULE_MBT
#  include <visp3/visp_mbt.h>
#endif

#ifdef VISP_HAVE_MODULE_ME
#  include <visp3/visp_me.h>
#endif

#ifdef VISP_HAVE_MODULE_ROBOT
#  include <visp3/visp_robot.h>
#endif

#ifdef VISP_HAVE_MODULE_SENSOR
#  include <visp3/visp_sensor.h>
#endif

#ifdef VISP_HAVE_MODULE_TT
#  include <visp3/visp_tt.h>
#endif

#ifdef VISP_HAVE_MODULE_TT_MI
#  include <visp3/visp_tt_mi.h>
#endif

#ifdef VISP_HAVE_MODULE_VISION
#  include <visp3/visp_vision.h>
#endif

#ifdef VISP_HAVE_MODULE_VISUAL_FEATURES
#  include <visp3/visp_visual_features.h>
#endif

#ifdef VISP_HAVE_MODULE_VS
#  include <visp3/visp_vs.h>
#endif

#endif

