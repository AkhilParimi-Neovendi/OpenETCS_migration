/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Counter_pwlinear_int64.h"

/* pwlinear::Counter/ */
void Counter_pwlinear_int64(
  /* Incr/ */
  kcg_int64 Incr_int64,
  /* Reset/ */
  kcg_bool Reset_int64,
  outC_Counter_pwlinear_int64 *outC)
{
  outC->_L47_int64 = kcg_lit_int64(0);
  /* _L18= */
  if (outC->init) {
    outC->_L18_int64 = outC->_L47_int64;
  }
  else {
    outC->_L18_int64 = outC->_L9_int64;
  }
  outC->_L2_int64 = Incr_int64;
  outC->_L3_int64 = Reset_int64;
  /* _L4= */
  if (outC->_L3_int64) {
    outC->_L4_int64 = outC->_L47_int64;
  }
  else {
    outC->_L4_int64 = outC->_L18_int64;
  }
  outC->_L9_int64 = outC->_L4_int64 + outC->_L2_int64;
  outC->Count_int64 = outC->_L4_int64;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Counter_init_pwlinear_int64(outC_Counter_pwlinear_int64 *outC)
{
  outC->_L47_int64 = kcg_lit_int64(0);
  outC->_L18_int64 = kcg_lit_int64(0);
  outC->_L4_int64 = kcg_lit_int64(0);
  outC->_L3_int64 = kcg_true;
  outC->_L2_int64 = kcg_lit_int64(0);
  outC->_L9_int64 = kcg_lit_int64(0);
  outC->init = kcg_true;
  outC->Count_int64 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Counter_reset_pwlinear_int64(outC_Counter_pwlinear_int64 *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Counter_pwlinear_int64.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

