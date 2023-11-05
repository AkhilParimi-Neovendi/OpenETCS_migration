/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ClockCounter_pwlinear.h"

/* pwlinear::ClockCounter/ */
void ClockCounter_pwlinear(
  /* Reset/ */
  kcg_bool Reset,
  outC_ClockCounter_pwlinear *outC)
{
  outC->_L16 = kcg_lit_int32(0);
  outC->_L13 = Reset;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L6 = outC->_L1;
  outC->_L8 = kcg_lit_int32(1);
  outC->_L7 = outC->_L8 + outC->_L6;
  /* _L2= */
  if (outC->_L13) {
    outC->_L2 = outC->_L16;
  }
  else {
    outC->_L2 = outC->_L7;
  }
  /* _L1= */
  if (outC->init) {
    outC->_L1 = outC->_L11;
  }
  else {
    outC->_L1 = outC->_L2;
  }
  outC->Count = outC->_L1;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ClockCounter_init_pwlinear(outC_ClockCounter_pwlinear *outC)
{
  outC->_L16 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->Count = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void ClockCounter_reset_pwlinear(outC_ClockCounter_pwlinear *outC)
{
  outC->init = kcg_true;
}


void kcg_save_SV_ClockCounter_pwlinear(
  SV_ClockCounter_pwlinear *SV,
  outC_ClockCounter_pwlinear *outC)
{
  SV->Context__L1 = outC->_L1;
  SV->Context_init = outC->init;
}

void kcg_load_SV_ClockCounter_pwlinear(
  outC_ClockCounter_pwlinear *outC,
  SV_ClockCounter_pwlinear *SV)
{
  outC->_L1 = SV->Context__L1;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ClockCounter_pwlinear.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

