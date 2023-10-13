/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelAndMode.h"

/* CheckLevelAndMode/ */
void CheckLevelAndMode(
  /* Level/ */
  M_LEVEL Level,
  /* Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Mode,
  outC_CheckLevelAndMode *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = (Level == M_LEVEL_Level_1) | (Level == M_LEVEL_Level_2) |
    (Level == M_LEVEL_Level_3);
  outC->_L6 = Level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L5 = Level == M_LEVEL_Level_0;
  outC->_L2 = Mode;
  /* _L4= */
  switch (outC->_L2) {
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L5;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L6;
      break;
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    case RV_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L4 = outC->_L7;
      break;
    default :
      outC->_L4 = outC->_L8;
      break;
  }
  outC->Level_Mode_Compatible = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void CheckLevelAndMode_init(outC_CheckLevelAndMode *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L2 = NP_Level_And_Mode_Types_Pkg;
  outC->Level_Mode_Compatible = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CheckLevelAndMode_reset(outC_CheckLevelAndMode *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckLevelAndMode.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

