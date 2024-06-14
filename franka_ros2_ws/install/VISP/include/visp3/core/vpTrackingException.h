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
 * Exceptions that can be emitted by the vpTracking class and its derivatives.
 */

/*!
 * \file vpTrackingException.h
 *  \brief error that can be emitted by the vpTracker class and its derivatives
 */

#ifndef _vpTrackingException_H_
#define _vpTrackingException_H_

#include <iostream>
#include <string>
#include <visp3/core/vpConfig.h>
#include <visp3/core/vpException.h>

BEGIN_VISP_NAMESPACE

/*!
 * \class vpTrackingException
 * \ingroup group_core_debug
 * \brief Error that can be emitted by the vpTracker class and its derivatives.
*/
class VISP_EXPORT vpTrackingException : public vpException
{
public:
  /*!
   * \brief Lists the possible error than can be emitted while calling
   * vpTracking member
   */
  enum errorTrackingCodeEnum
  {
    featureLostError, //!< Tracker lost feature
    // Moving edges
    notEnoughPointError, //!< Not enough point to track
    initializationError, //!< Tracker initialization error
    fatalError //!< Tracker fatal error
  };

public:
  /*!
   * Constructor.
   */
  vpTrackingException(int id, const char *format, ...)
  {
    this->code = id;
    va_list args;
    va_start(args, format);
    setMessage(format, args);
    va_end(args);
  }

  /*!
   * Constructor.
   */
  vpTrackingException(int id, const std::string &msg) : vpException(id, msg) { }

  /*!
   * Constructor.
   */
  explicit vpTrackingException(int id) : vpException(id) { }
};
END_VISP_NAMESPACE
#endif
