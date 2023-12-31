/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelTR2Level_InputManagement.h"

/* InputManagement::LevelTR2Level/ */
void LevelTR2Level_InputManagement(
  /* InLevelTR/ */
  M_LEVELTR InLevelTR,
  outC_LevelTR2Level_InputManagement *outC)
{
  outC->_L7 = M_LEVEL_Level_3;
  outC->_L6 = M_LEVEL_Level_2;
  outC->_L5 = M_LEVEL_Level_1;
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L3 = M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L1 = InLevelTR;
  /* _L2= */
  switch (outC->_L1) {
    case M_LEVELTR_Level_0 :
      outC->_L2 = outC->_L4;
      break;
    case M_LEVELTR_Level_NTC_specified_by_NID_NTC :
      outC->_L2 = outC->_L3;
      break;
    case M_LEVELTR_Level_1 :
      outC->_L2 = outC->_L5;
      break;
    case M_LEVELTR_Level_2 :
      outC->_L2 = outC->_L6;
      break;
    case M_LEVELTR_Level_3 :
      outC->_L2 = outC->_L7;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->OutLevel = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void LevelTR2Level_init_InputManagement(
  outC_LevelTR2Level_InputManagement *outC)
{
  outC->_L7 = M_LEVEL_Level_0;
  outC->_L6 = M_LEVEL_Level_0;
  outC->_L5 = M_LEVEL_Level_0;
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L3 = M_LEVEL_Level_0;
  outC->_L2 = M_LEVEL_Level_0;
  outC->_L1 = M_LEVELTR_Level_0;
  outC->OutLevel = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void LevelTR2Level_reset_InputManagement(
  outC_LevelTR2Level_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelTR2Level_InputManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

