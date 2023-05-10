// Copyright (C) Menhirs NV. All rights reserved.
// License to copy and modify this file for usage in conjunction
// with Autodesk ARX API is explicitely expressed here, as long as the
// copyright statement remains unchanged !
// Please copy this file to your Autodesk ARX API or project folder(s).

// this header profides following features :
// provides name mangling for ARX <= 2009 vs. ARX >= 2010 vs. BRX 12/13
// ("subWorldDraw" vs. "worldDraw"); it wraps both "old" and "new" naming convention to
// the correct one, depending on ARX/BRX build version

// You must have "BRX_APP" defined for BRX builds (without BRX_APP, it is an ARX build)!


#ifdef BRX_APP  // BRX builds
  #include "brx_version.h"
#else           // ARX builds
  #include "arx_version.h"
#endif // BRX_APP