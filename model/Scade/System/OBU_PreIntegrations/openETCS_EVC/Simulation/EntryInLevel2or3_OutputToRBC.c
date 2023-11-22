/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EntryInLevel2or3_OutputToRBC.h"

/* OutputToRBC::EntryInLevel2or3/ */
void EntryInLevel2or3_OutputToRBC(
  /* last_level/ */
  M_LEVEL last_level,
  /* new_level/ */
  M_LEVEL new_level,
  outC_EntryInLevel2or3_OutputToRBC *outC)
{
  outC->_L7 = last_level == M_LEVEL_Level_NTC_specified_by_NID_NTC;
  outC->_L6 = last_level == M_LEVEL_Level_1;
  outC->_L1 = last_level == M_LEVEL_Level_0;
  outC->_L2 = outC->_L1 | outC->_L6 | outC->_L7;
  outC->_L9 = new_level == M_LEVEL_Level_3;
  outC->_L5 = new_level == M_LEVEL_Level_2;
  outC->_L3 = outC->_L5 | outC->_L9;
  outC->_L10 = new_level;
  outC->_L4 = last_level;
  outC->_L8 = outC->_L4 != outC->_L10;
  outC->_L11 = outC->_L8 & outC->_L3 & outC->_L2;
  outC->PositionReportNeeded = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void EntryInLevel2or3_init_OutputToRBC(outC_EntryInLevel2or3_OutputToRBC *outC)
{
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = M_LEVEL_Level_0;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = M_LEVEL_Level_0;
  outC->_L11 = kcg_true;
  outC->PositionReportNeeded = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EntryInLevel2or3_reset_OutputToRBC(outC_EntryInLevel2or3_OutputToRBC *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EntryInLevel2or3_OutputToRBC.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

