/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EitherEdge_digital.h"

/* digital::EitherEdge/ */
void EitherEdge_digital(
  /* EE_Input/ */
  kcg_bool EE_Input,
  outC_EitherEdge_digital *outC)
{
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_false;
  }
  else {
    outC->_L4 = outC->_L1;
  }
  outC->_L1 = EE_Input;
  outC->_L3 = outC->_L4 ^ outC->_L1;
  /* _L5= */
  if (outC->init) {
    outC->_L5 = kcg_false;
  }
  else {
    outC->_L5 = outC->_L3;
  }
  outC->EE_Output = outC->_L5;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void EitherEdge_init_digital(outC_EitherEdge_digital *outC)
{
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->EE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EitherEdge_reset_digital(outC_EitherEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EitherEdge_digital.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

