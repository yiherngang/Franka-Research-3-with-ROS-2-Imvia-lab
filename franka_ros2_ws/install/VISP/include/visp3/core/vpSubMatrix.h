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
 * Mask on a vpMatrix.
 */

/*!
 * \file vpSubMatrix.h
 *
 * \brief Definition of the vpSubMatrix class
 */

#ifndef _vpSubMatrix_h_
#define _vpSubMatrix_h_

#include <visp3/core/vpConfig.h>
#include <visp3/core/vpMatrix.h>

BEGIN_VISP_NAMESPACE
/*!
 * \class vpSubMatrix
 * \ingroup group_core_matrices
 * \brief Definition of the vpSubMatrix class that provides a mask on a vpMatrix.
 * All properties of vpMatrix are available with a vpSubMatrix.
 *
 *
 * \sa vpMatrix vpColVector vpRowVector
*/
class VISP_EXPORT vpSubMatrix : public vpMatrix
{

public:
  //! Default constructor
  vpSubMatrix();
  //! Constructor
  vpSubMatrix(vpMatrix &m, const unsigned int &row, const unsigned int &col, const unsigned int &nrows,
              const unsigned int &ncols);
  //! Destructor
  virtual ~vpSubMatrix() vp_override;

  //! Initialisation of vpMatrix
  void init(vpMatrix &m, const unsigned int &row, const unsigned int &col, const unsigned int &nrows,
            const unsigned int &ncols);

  //! Check is parent vpRowVector has changed since initialization
  void checkParentStatus() const;

  //! Operation such as subA = subB
  vpSubMatrix &operator=(const vpSubMatrix &B);
  //! Operation such as subA = B
  vpSubMatrix &operator=(const vpMatrix &B);
  //! Operation such as subA = x
  vpSubMatrix &operator=(const double &x);

protected:
  unsigned int pRowNum;
  unsigned int pColNum;
  vpMatrix *parent;

private:
  //! Eye method unavailable
  void eye(unsigned int n);
  //! Eye method unavailable
  void eye(unsigned int m, unsigned int n);
  //! Copy constructor unavailable
  vpSubMatrix(const vpSubMatrix &m /* m */);
};
END_VISP_NAMESPACE
#endif
