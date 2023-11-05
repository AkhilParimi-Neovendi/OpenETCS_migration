/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToSleeping_Conditions.h"

/* Conditions::ToSleeping/ */
void ToSleeping_Conditions(
  /* All_Desks_Closed/ */
  kcg_bool All_Desks_Closed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Train_Req_SL/ */
  kcg_bool Train_Req_SL,
  outC_ToSleeping_Conditions *outC)
{
  outC->_L11 = All_Desks_Closed;
  outC->_L4 = Train_Standstill;
  outC->_L5 = Train_Req_SL;
  outC->_L6 = outC->_L5 & outC->_L4 & outC->_L11;
  outC->Condition14 = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void ToSleeping_init_Conditions(outC_ToSleeping_Conditions *outC)
{
  outC->_L11 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->Condition14 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToSleeping_reset_Conditions(outC_ToSleeping_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToSleeping_Conditions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

