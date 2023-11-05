/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMode_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckMode/ */
void CheckMode_CheckBGConsistency_Pkg_SubFunction(
  /* currentMode/ */
  M_MODE currentMode,
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L52 = M_MODE_Full_Supervision;
  outC->_L34 = currentMode;
  outC->_L51 = outC->_L34 == outC->_L52;
  outC->_L48 = M_MODE_Limited_Supervision;
  outC->_L46 = outC->_L34 == outC->_L48;
  outC->_L49 = M_MODE_On_Sight;
  outC->_L50 = outC->_L34 == outC->_L49;
  outC->_L33 = M_MODE_Post_Trip;
  outC->_L19 = outC->_L34 == outC->_L33;
  outC->_L31 = M_MODE_Post_Trip;
  outC->_L35 = outC->_L34 == outC->_L31;
  outC->_L23 = M_MODE_National_System;
  outC->_L25 = outC->_L34 == outC->_L23;
  outC->_L24 = M_MODE_Reversing;
  outC->_L20 = outC->_L34 == outC->_L24;
  outC->_L28 = M_MODE_Unfitted;
  outC->_L32 = outC->_L34 == outC->_L28;
  outC->_L29 = M_MODE_Non_Leading;
  outC->_L14 = outC->_L34 == outC->_L29;
  outC->_L26 = M_MODE_Trip;
  outC->_L37 = outC->_L34 == outC->_L26;
  outC->_L16 = M_MODE_Sleeping;
  outC->_L27 = outC->_L34 == outC->_L16;
  outC->_L36 = M_MODE_Staff_Responsible;
  outC->_L21 = outC->_L34 == outC->_L36;
  outC->_L17 = M_MODE_Shunting;
  outC->_L18 = outC->_L34 == outC->_L17;
  outC->_L30 = M_MODE_Stand_By;
  outC->_L15 = outC->_L34 == outC->_L30;
  outC->_L22 = outC->_L15 | outC->_L18 | outC->_L21 | outC->_L27 | outC->_L37 |
    outC->_L14 | outC->_L32 | outC->_L20 | outC->_L25 | outC->_L35 |
    outC->_L19 | outC->_L50 | outC->_L46 | outC->_L51;
  outC->bgConsistansyIsActive = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckMode_init_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L46 = kcg_true;
  outC->_L48 = M_MODE_Full_Supervision;
  outC->_L49 = M_MODE_Full_Supervision;
  outC->_L50 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L52 = M_MODE_Full_Supervision;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = M_MODE_Full_Supervision;
  outC->_L17 = M_MODE_Full_Supervision;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = M_MODE_Full_Supervision;
  outC->_L24 = M_MODE_Full_Supervision;
  outC->_L25 = kcg_true;
  outC->_L26 = M_MODE_Full_Supervision;
  outC->_L27 = kcg_true;
  outC->_L28 = M_MODE_Full_Supervision;
  outC->_L29 = M_MODE_Full_Supervision;
  outC->_L30 = M_MODE_Full_Supervision;
  outC->_L31 = M_MODE_Full_Supervision;
  outC->_L32 = kcg_true;
  outC->_L33 = M_MODE_Full_Supervision;
  outC->_L34 = M_MODE_Full_Supervision;
  outC->_L35 = kcg_true;
  outC->_L36 = M_MODE_Full_Supervision;
  outC->_L37 = kcg_true;
  outC->bgConsistansyIsActive = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckMode_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMode_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

