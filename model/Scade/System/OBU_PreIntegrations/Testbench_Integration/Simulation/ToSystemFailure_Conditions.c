/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSystemFailure_Conditions.h"

/* Conditions::ToSystemFailure/ */
void ToSystemFailure_Conditions(
  /* Safety_Failure_Occured/ */
  kcg_bool Safety_Failure_Occured,
  outC_ToSystemFailure_Conditions *outC)
{
  outC->_L1 = Safety_Failure_Occured;
  outC->Condition13 = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void ToSystemFailure_init_Conditions(outC_ToSystemFailure_Conditions *outC)
{
  outC->_L1 = kcg_true;
  outC->Condition13 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToSystemFailure_reset_Conditions(outC_ToSystemFailure_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToSystemFailure_Conditions.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

