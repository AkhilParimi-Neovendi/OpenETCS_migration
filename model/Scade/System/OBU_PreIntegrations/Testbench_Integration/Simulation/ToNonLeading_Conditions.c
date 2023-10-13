/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNonLeading_Conditions.h"

/* Conditions::ToNonLeading/ */
void ToNonLeading_Conditions(
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Driver_Req_NL/ */
  kcg_bool Driver_Req_NL,
  outC_ToNonLeading_Conditions *outC)
{
  outC->_L11 = Train_Permitted_NL;
  outC->_L4 = Train_Standstill;
  outC->_L5 = Driver_Req_NL;
  outC->_L6 = outC->_L5 & outC->_L4 & outC->_L11;
  outC->Condition46 = outC->_L6;
}

#ifndef KCG_USER_DEFINED_INIT
void ToNonLeading_init_Conditions(outC_ToNonLeading_Conditions *outC)
{
  outC->_L11 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->Condition46 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToNonLeading_reset_Conditions(outC_ToNonLeading_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToNonLeading_Conditions.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

