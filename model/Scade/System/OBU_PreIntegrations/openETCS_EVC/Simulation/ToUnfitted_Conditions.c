/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToUnfitted_Conditions.h"

/* Conditions::ToUnfitted/ */
void ToUnfitted_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  outC_ToUnfitted_Conditions *outC)
{
  /* Current_Level/ */
  M_LEVEL last_Current_Level;

  last_Current_Level = outC->mem_Current_Level;
  outC->mem_Current_Level = Current_Level;
  outC->_L456 = last_Current_Level;
  outC->_L441 = Current_Level;
  outC->_L450 = outC->_L441 != outC->_L456;
  outC->_L455 = M_LEVEL_Level_0;
  outC->_L439 = Current_Level;
  outC->_L454 = outC->_L439 == outC->_L455;
  outC->_L451 = outC->_L454 & outC->_L450;
  outC->Condition21 = outC->_L451;
}

#ifndef KCG_USER_DEFINED_INIT
void ToUnfitted_init_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->_L456 = M_LEVEL_Level_0;
  outC->_L455 = M_LEVEL_Level_0;
  outC->_L454 = kcg_true;
  outC->_L439 = M_LEVEL_Level_0;
  outC->_L441 = M_LEVEL_Level_0;
  outC->_L450 = kcg_true;
  outC->_L451 = kcg_true;
  outC->Condition21 = kcg_true;
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToUnfitted_reset_Conditions(outC_ToUnfitted_Conditions *outC)
{
  outC->mem_Current_Level = M_LEVEL_Level_0;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToUnfitted_Conditions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

