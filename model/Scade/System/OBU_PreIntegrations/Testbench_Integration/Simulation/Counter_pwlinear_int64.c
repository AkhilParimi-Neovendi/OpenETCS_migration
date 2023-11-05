/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int32.h"

/* pwlinear::Counter/ */
void Counter_pwlinear_int32(
  /* Incr/ */
  kcg_int32 Incr_int32,
  /* Reset/ */
  kcg_bool Reset_int32,
  outC_Counter_pwlinear_int32 *outC)
{
  outC->_L47_int32 = kcg_lit_int32(0);
  /* _L18= */
  if (outC->init) {
    outC->_L18_int32 = outC->_L47_int32;
  }
  else {
    outC->_L18_int32 = outC->_L9_int32;
  }
  outC->_L2_int32 = Incr_int32;
  outC->_L3_int32 = Reset_int32;
  /* _L4= */
  if (outC->_L3_int32) {
    outC->_L4_int32 = outC->_L47_int32;
  }
  else {
    outC->_L4_int32 = outC->_L18_int32;
  }
  outC->_L9_int32 = outC->_L4_int32 + outC->_L2_int32;
  outC->Count_int32 = outC->_L4_int32;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Counter_init_pwlinear_int32(outC_Counter_pwlinear_int32 *outC)
{
  outC->_L47_int32 = kcg_lit_int32(0);
  outC->_L18_int32 = kcg_lit_int32(0);
  outC->_L4_int32 = kcg_lit_int32(0);
  outC->_L3_int32 = kcg_true;
  outC->_L2_int32 = kcg_lit_int32(0);
  outC->_L9_int32 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->Count_int32 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_reset_pwlinear_int32(outC_Counter_pwlinear_int32 *outC)
{
  outC->init = kcg_true;
}


void kcg_save_SV_Counter_pwlinear_int32(
  SV_Counter_pwlinear_int32 *SV,
  outC_Counter_pwlinear_int32 *outC)
{
  SV->Context__L9 = outC->_L9_int32;
  SV->Context_init = outC->init;
}

void kcg_load_SV_Counter_pwlinear_int32(
  outC_Counter_pwlinear_int32 *outC,
  SV_Counter_pwlinear_int32 *SV)
{
  outC->_L9_int32 = SV->Context__L9;
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter_pwlinear_int32.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

