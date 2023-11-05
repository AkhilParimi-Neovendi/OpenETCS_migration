/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FlipFlopJK_digital.h"

/* digital::FlipFlopJK/ */
void FlipFlopJK_digital(
  /* Set/ */
  kcg_bool Set,
  /* Reset/ */
  kcg_bool Reset,
  /* Init/ */
  kcg_bool Init,
  outC_FlipFlopJK_digital *outC)
{
  /* Output/ */
  static kcg_bool last_Output;

  /* Output/ */
  if (outC->init) {
    last_Output = Init;
  }
  else {
    last_Output = outC->Output;
  }
  outC->_L24 = Set & Reset;
  outC->_L23 = last_Output;
  outC->_L22 = !last_Output;
  outC->_L6 = Reset;
  outC->_L20 = !outC->_L6;
  outC->_L21 = outC->_L20 & outC->_L23;
  outC->_L5 = Set;
  outC->_L18 = outC->_L5 | outC->_L21;
  /* _L10= */
  if (outC->_L24) {
    outC->_L10 = outC->_L22;
  }
  else {
    outC->_L10 = outC->_L18;
  }
  outC->Output = outC->_L10;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void FlipFlopJK_init_digital(outC_FlipFlopJK_digital *outC)
{
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L10 = kcg_true;
  outC->init = kcg_true;
  outC->Output = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FlipFlopJK_reset_digital(outC_FlipFlopJK_digital *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_FlipFlopJK_digital(
  SV_FlipFlopJK_digital *SV,
  outC_FlipFlopJK_digital *outC)
{
  SV->Context_Output = outC->Output;
  SV->Context_init = outC->init;
}

void kcg_load_SV_FlipFlopJK_digital(
  outC_FlipFlopJK_digital *outC,
  SV_FlipFlopJK_digital *SV)
{
  outC->Output = SV->Context_Output;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlipFlopJK_digital.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

