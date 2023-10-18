/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToNoPower_Conditions.h"

/* Conditions::ToNoPower/ */
void ToNoPower_Conditions(
  /* OnBoard_Powered/ */
  kcg_bool OnBoard_Powered,
  outC_ToNoPower_Conditions *outC)
{
  outC->_L1 = OnBoard_Powered;
  outC->_L2 = !outC->_L1;
  outC->Condition29 = outC->_L2;
}

#ifndef KCG_USER_DEFINED_INIT
void ToNoPower_init_Conditions(outC_ToNoPower_Conditions *outC)
{
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->Condition29 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToNoPower_reset_Conditions(outC_ToNoPower_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToNoPower_Conditions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

