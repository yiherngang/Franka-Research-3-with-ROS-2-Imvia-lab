#define CV_CPU_SIMD_FILENAME "/home/adminlab/franka_ros2_ws/src/opencv/modules/dnn/src/layers/cpu_kernels/fast_gemm_kernels.simd.hpp"
#define CV_CPU_DISPATCH_MODE AVX
#include "opencv2/core/private/cv_cpu_include_simd_declarations.hpp"

#define CV_CPU_DISPATCH_MODE AVX2
#include "opencv2/core/private/cv_cpu_include_simd_declarations.hpp"

#define CV_CPU_DISPATCH_MODE NEON
#include "opencv2/core/private/cv_cpu_include_simd_declarations.hpp"

#define CV_CPU_DISPATCH_MODE LASX
#include "opencv2/core/private/cv_cpu_include_simd_declarations.hpp"

#define CV_CPU_DISPATCH_MODES_ALL LASX, NEON, AVX2, AVX, BASELINE

#undef CV_CPU_SIMD_FILENAME
