// All included firmware files are
// INTEL CORPORATION PROPRIETARY INFORMATION
// Copyright(c) 2019 Intel Corporation. All Rights Reserved
const int fw_D4XX_FW_Image_version[4] = {5,16,0,1};
#ifndef _MSC_VER
__asm__(
    "#version 51e37fd01132c500bb4e4af408a41f42391289a5\n"
#ifdef __APPLE__
    ".const_data\n"
#define _ "_"
#else
    ".section .rodata\n"
#define _ ""
#endif
    ".global "_"fw_D4XX_FW_Image_data\n"
    _"fw_D4XX_FW_Image_data:\n"
    ".incbin \"/home/adminlab/franka_ros2_ws/build/librealsense2/common/fw/D4XX_FW_Image-5.16.0.1.bin\"\n"
    ".global "_"fw_D4XX_FW_Image_size\n"
    _"fw_D4XX_FW_Image_size:\n"
    "1:\n"
    ".int 1b - "_"fw_D4XX_FW_Image_data\n"
    ".previous"
);
#undef _
#endif
