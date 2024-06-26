// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "AcGe/AcGeLinearEnt3d.h"

/** _ */
class BRX_IMPORTEXPORT AcGeRay3d: public AcGeLinearEnt3d
{
public:
    AcGeRay3d();
    AcGeRay3d(const AcGeRay3d&);
    AcGeRay3d(const AcGePoint3d&,const AcGePoint3d&);
    AcGeRay3d(const AcGePoint3d&,const AcGeVector3d&);

    AcGeRay3d& set(const AcGePoint3d&,const AcGePoint3d&);
    AcGeRay3d& set(const AcGePoint3d&,const AcGeVector3d&);

    AcGeRay3d& operator=(const AcGeRay3d&);
};
