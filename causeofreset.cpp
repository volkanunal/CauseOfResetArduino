#include "causeofreset.h"

eCauseOfReset CauseOfReset(void)
{
    eCauseOfReset cor = TO_THE_DETERMINED;

    if(mLOW_POWER_RESET)
    {
        cor = LOW_POWER_RESET;
    }
    else if(mWINDOW_WATCHDOG_RESET)
    {
        cor = WINDOW_WATCHDOG_RESET;
    }
    else if(mSOFTWARE_RESET)
    {
        cor = SOFTWARE_RESET;
    }
    else if(mPOWER_ON_RESET)
    {
        cor = POWER_ON_RESET;
    }
    else if(mEXTERNAL_RESET_PIN_RESET)
    {
        cor = EXTERNAL_RESET_PIN_RESET;
    }
    else if(mBROWNOUT_RESET)
    {
        cor = BROWNOUT_RESET;
    }
    else
    {
        cor = UNKNOWN;
    }


    return cor;
}
