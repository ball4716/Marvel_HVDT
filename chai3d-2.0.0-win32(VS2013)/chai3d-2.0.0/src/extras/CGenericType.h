//===========================================================================
/*
    This file is part of the CHAI 3D visualization and haptics libraries.
    Copyright (C) 2003-2009 by CHAI 3D. All rights reserved.

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License("GPL") version 2
    as published by the Free Software Foundation.

    For using the CHAI 3D libraries with software that can not be combined
    with the GNU GPL, and for taking advantage of the additional benefits
    of our support services, please contact CHAI 3D about acquiring a
    Professional Edition License.

    \author    <http://www.chai3d.org>
    \author    Francois Conti
    \version   2.0.0 $Rev: 251 $
*/
//===========================================================================

//---------------------------------------------------------------------------
#ifndef CGenericTypeH
#define CGenericTypeH
//---------------------------------------------------------------------------

//===========================================================================
/*!
    \file       CGenericType.h

    \brief  
    <b> Extras </b> \n 
	General Abstract Type.
*/
//===========================================================================

//===========================================================================
/*!
    \class      cGenericType
    \ingroup    extras  

    \brief      
    Definition of an abstract type.
*/
//===========================================================================
class cGenericType
{
  public:

    //-----------------------------------------------------------------------
    // CONSTRUCTOR & DESTRUCTOR:
    //-----------------------------------------------------------------------

    //! Constructor of cGenericType.
    cGenericType(){};

    //! Destructor of cGenericType.
    virtual ~cGenericType(){};
};

//---------------------------------------------------------------------------
#endif
//---------------------------------------------------------------------------

