/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToIsolate_Conditions.h"

/* Conditions::ToIsolate/ */
void ToIsolate_Conditions(
  /* ETCS_Isolation_Status/ */
  kcg_bool ETCS_Isolation_Status,
  outC_ToIsolate_Conditions *outC)
{
  outC->_L2 = ETCS_Isolation_Status;
  outC->Condition1 = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void ToIsolate_init_Conditions(outC_ToIsolate_Conditions *outC)
{
  outC->_L2 = kcg_true;
  outC->Condition1 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToIsolate_reset_Conditions(outC_ToIsolate_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToIsolate_Conditions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

