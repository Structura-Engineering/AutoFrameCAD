// Property of Bricsys NV. All rights reserved.
// This file is part of the BRX SDK, and its use is subject to the terms
// of the BRX SDK license agreement.
/////////////////////////////////////////////////////////////////////////
#pragma once

#include "MFC/CAcUi/CAcUiComboBox.h"

/** _ */
class BRX_IMPORTEXPORT CAcUiStringComboBox: public CAcUiComboBox
{
    DECLARE_DYNAMIC(CAcUiStringComboBox);
public:
    CAcUiStringComboBox();
    virtual ~CAcUiStringComboBox();
protected:
    DECLARE_MESSAGE_MAP()
};