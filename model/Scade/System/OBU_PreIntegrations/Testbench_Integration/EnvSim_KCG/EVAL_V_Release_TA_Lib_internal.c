/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVAL_V_Release_TA_Lib_internal.h"

/* TA_Lib_internal::EVAL_V_Release/ */
void EVAL_V_Release_TA_Lib_internal(
  /* V_in/ */
  kcg_int64 V_in,
  /* V_NV_in/ */
  kcg_int64 V_NV_in,
  outC_EVAL_V_Release_TA_Lib_internal *outC)
{
  outC->_L8 = kcg_lit_int64(126) * kcg_lit_int64(5);
  outC->_L7 = V_in;
  outC->_L9 = outC->_L7 == outC->_L8;
  outC->calc_onboard = outC->_L9;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L6 = V_in;
  outC->_L5 = V_NV_in;
  outC->_L3 = kcg_lit_int64(127) * kcg_lit_int64(5);
  outC->_L1 = V_in;
  outC->_L2 = outC->_L1 == outC->_L3;
  /* _L4= */
  if (outC->_L2) {
    outC->_L4 = outC->_L5;
  }
  else {
    outC->_L4 = outC->_L6;
  }
  /* _L10= */
  if (outC->_L9) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L4;
  }
  outC->V_out = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void EVAL_V_Release_init_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC)
{
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_lit_int64(0);
  outC->calc_onboard = kcg_true;
  outC->V_out = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EVAL_V_Release_reset_TA_Lib_internal(
  outC_EVAL_V_Release_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVAL_V_Release_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

