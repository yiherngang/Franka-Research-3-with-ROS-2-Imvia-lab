/*
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
 * Windows 32 display base class
 */


#ifndef vpDisplayWin32_hh
#define vpDisplayWin32_hh

#include <visp3/core/vpConfig.h>
#include <visp3/core/vpDisplay.h>

#if (defined(VISP_HAVE_GDI) || defined(VISP_HAVE_D3D9))

#include <string>

#include <visp3/core/vpImage.h>
// Include WinSock2.h before windows.h to ensure that winsock.h is not
// included by windows.h since winsock.h and winsock2.h are incompatible
#include <WinSock2.h>
#include <visp3/core/vpImagePoint.h>
#include <visp3/core/vpRect.h>
#include <visp3/gui/vpWin32Renderer.h>
#include <visp3/gui/vpWin32Window.h>
#include <windows.h>

BEGIN_VISP_NAMESPACE

#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*!
 * Used to pass parameters to the window's thread.
*/
struct threadParam
{
  //! Pointer to the display associated with the window.
  vpDisplayWin32 *vpDisp;

  //! X position of the window.
  int x;

  //! Y position of the window.
  int y;

  //! Width of the window's client area.
  unsigned int w;

  //! Height of the window's client area.
  unsigned int h;

  //! Title of the window.
  std::string title;
};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

/*!
 * \class vpDisplayWin32
 *
 * \brief Base abstract class for Windows 32 displays.
 * Implements the window creation in a separate thread
 * and the associated event handling functions for
 * Windows 32 displays.
 * Uses calls to a renderer to do some display.
 * (i.e. all display methods are implemented in the renderer)
*/
class VISP_EXPORT vpDisplayWin32 : public vpDisplay
{
protected:
  //! Maximum delay for window initialization
  static const int MAX_INIT_DELAY;

  //! Handle of the window's thread.
  HANDLE hThread;

  //! Id of the window's thread.
  DWORD threadId;

  //! Initialization status.
  bool iStatus;

  //! The window.
  vpWin32Window window;

  //!
  RECT roi;

  //! Function used to launch the window in a thread.
  friend void vpCreateWindow(threadParam *param);

public:
  explicit vpDisplayWin32(vpWin32Renderer *rend = nullptr);

  vpDisplayWin32(vpImage<vpRGBa> &I, int winx = -1, int winy = -1, const std::string &title = "");

  vpDisplayWin32(vpImage<unsigned char> &I, int winx = -1, int winy = -1, const std::string &title = "");

  virtual ~vpDisplayWin32() vp_override;

  void clearDisplay(const vpColor &color = vpColor::white) vp_override;
  void closeDisplay() vp_override;
  void displayImage(const vpImage<vpRGBa> &I) vp_override;
  void displayImage(const vpImage<unsigned char> &I) vp_override;

  void displayImageROI(const vpImage<unsigned char> &I, const vpImagePoint &iP, unsigned int width,
                       unsigned int height) vp_override;
  void displayImageROI(const vpImage<vpRGBa> &I, const vpImagePoint &iP, unsigned int width, unsigned int height) vp_override;

  void flushDisplay() vp_override;
  void flushDisplayROI(const vpImagePoint &iP, unsigned int width, unsigned int height) vp_override;

  void getImage(vpImage<vpRGBa> &I) vp_override;
  unsigned int getScreenHeight() vp_override;
  void getScreenSize(unsigned int &width, unsigned int &height) vp_override;
  unsigned int getScreenWidth() vp_override;

  void init(vpImage<unsigned char> &I, int winx = -1, int winy = -1, const std::string &title = "") vp_override;
  void init(vpImage<vpRGBa> &I, int winx = -1, int winy = -1, const std::string &title = "") vp_override;
  void init(unsigned int width, unsigned int height, int winx = -1, int winy = -1, const std::string &title = "") vp_override;

  void setFont(const std::string &fontname) vp_override;
  void setDownScalingFactor(unsigned int scale)
  {
    window.setScale(scale);
    m_scale = scale;
  }
  void setDownScalingFactor(vpScaleType scaleType) { m_scaleType = scaleType; }
  void setTitle(const std::string &windowtitle) vp_override;
  void setWindowPosition(int winx, int winy) vp_override;

protected:
  void displayArrow(const vpImagePoint &ip1, const vpImagePoint &ip2, const vpColor &color = vpColor::white,
                    unsigned int w = 4, unsigned int h = 2, unsigned int thickness = 1) vp_override;

  void displayCircle(const vpImagePoint &center, unsigned int radius, const vpColor &color, bool fill = false,
                     unsigned int thickness = 1) vp_override;

  void displayCross(const vpImagePoint &ip, unsigned int size, const vpColor &color, unsigned int thickness = 1) vp_override;

  void displayDotLine(const vpImagePoint &ip1, const vpImagePoint &ip2, const vpColor &color,
                      unsigned int thickness = 1) vp_override;

  void displayLine(const vpImagePoint &ip1, const vpImagePoint &ip2, const vpColor &color, unsigned int thickness = 1) vp_override;

  void displayPoint(const vpImagePoint &ip, const vpColor &color, unsigned int thickness = 1) vp_override;

  void displayRectangle(const vpImagePoint &topLeft, unsigned int width, unsigned int height, const vpColor &color,
                        bool fill = false, unsigned int thickness = 1) vp_override;
  void displayRectangle(const vpImagePoint &topLeft, const vpImagePoint &bottomRight, const vpColor &color,
                        bool fill = false, unsigned int thickness = 1) vp_override;
  void displayRectangle(const vpRect &rectangle, const vpColor &color, bool fill = false, unsigned int thickness = 1) vp_override;

  void displayText(const vpImagePoint &ip, const std::string &text, const vpColor &color = vpColor::green) vp_override;

  bool getClick(bool blocking = true) vp_override;
  bool getClick(vpImagePoint &ip, bool blocking = true) vp_override;
  bool getClick(vpImagePoint &ip, vpMouseButton::vpMouseButtonType &button, bool blocking = true) vp_override;
  bool getClickUp(vpImagePoint &ip, vpMouseButton::vpMouseButtonType &button, bool blocking = true) vp_override;

  bool getKeyboardEvent(bool blocking = true) vp_override;
  bool getKeyboardEvent(std::string &key, bool blocking) vp_override;
  bool getPointerMotionEvent(vpImagePoint &ip) vp_override;
  bool getPointerPosition(vpImagePoint &ip) vp_override;

  void waitForInit();
};

END_VISP_NAMESPACE
#endif
#endif
