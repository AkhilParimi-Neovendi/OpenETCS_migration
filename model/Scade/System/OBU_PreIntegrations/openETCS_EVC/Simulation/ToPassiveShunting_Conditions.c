/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToPassiveShunting_Conditions.h"

/* Conditions::ToPassiveShunting/ */
void ToPassiveShunting_Conditions(
  /* Train_Permitted_PS/ */
  kcg_bool Train_Permitted_PS,
  /* Continue_Shunting_Function_Active/ */
  kcg_bool Continue_Shunting_Function_Active,
  /* Desks_Closed/ */
  kcg_bool Desks_Closed,
  outC_ToPassiveShunting_Conditions *outC)
{
  outC->_L2 = Continue_Shunting_Function_Active;
  outC->_L1 = Train_Permitted_PS;
  outC->_L3 = Desks_Closed;
  outC->_L4 = outC->_L3 & outC->_L1 & outC->_L2;
  outC->Condition26 = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void ToPassiveShunting_init_Conditions(outC_ToPassiveShunting_Conditions *outC)
{
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->Condition26 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToPassiveShunting_reset_Conditions(outC_ToPassiveShunting_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToPassiveShunting_Conditions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

