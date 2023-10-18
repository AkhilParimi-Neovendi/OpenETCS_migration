/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RisingEdge_digital.h"

/* digital::RisingEdge/ */
void RisingEdge_digital(
  /* RE_Input/ */
  kcg_bool RE_Input,
  outC_RisingEdge_digital *outC)
{
  /* _L3= */
  if (outC->init) {
    outC->_L3 = kcg_false;
  }
  else {
    outC->_L3 = outC->_L1;
  }
  outC->_L1 = RE_Input;
  outC->_L8 = !outC->_L3;
  outC->_L6 = outC->_L8 & outC->_L1;
  /* _L9= */
  if (outC->init) {
    outC->_L9 = kcg_false;
  }
  else {
    outC->_L9 = outC->_L6;
  }
  outC->RE_Output = outC->_L9;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void RisingEdge_init_digital(outC_RisingEdge_digital *outC)
{
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L1 = kcg_true;
  outC->init = kcg_true;
  outC->RE_Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void RisingEdge_reset_digital(outC_RisingEdge_digital *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RisingEdge_digital.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

