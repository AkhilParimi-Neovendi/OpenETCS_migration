/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FallingEdge_digital.h"

/* digital::FallingEdge/ */
void FallingEdge_digital(
  /* FE_Input/ */
  kcg_bool FE_Input,
  outC_FallingEdge_digital *outC)
{
  /* _L4= */
  if (outC->init) {
    outC->_L4 = kcg_false;
  }
  else {
    outC->_L4 = outC->_L1;
  }
  outC->_L1 = FE_Input;
  outC->_L5 = !outC->_L1;
  outC->_L3 = outC->_L4 & outC->_L5;
  /* _L6= */
  if (outC->init) {
    outC->_L6 = kcg_false;
  }
  else {
    outC->_L6 = outC->_L3;
  }
  outC->FE_Output = outC->_L6;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void FallingEdge_init_digital(outC_FallingEdge_digital *outC)
{
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->FE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FallingEdge_reset_digital(outC_FallingEdge_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_FallingEdge_digital(
  SV_FallingEdge_digital *SV,
  outC_FallingEdge_digital *outC)
{
  SV->Context__L1 = outC->_L1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_FallingEdge_digital(
  outC_FallingEdge_digital *outC,
  SV_FallingEdge_digital *SV)
{
  outC->_L1 = SV->Context__L1;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FallingEdge_digital.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

