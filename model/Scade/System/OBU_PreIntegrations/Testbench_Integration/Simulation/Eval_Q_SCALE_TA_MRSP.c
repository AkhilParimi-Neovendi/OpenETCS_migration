/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Eval_Q_SCALE_TA_MRSP.h"

/* TA_MRSP::Eval_Q_SCALE/ */
void Eval_Q_SCALE_TA_MRSP(
  /* q_scale_in/ */
  Q_SCALE q_scale_in,
  /* d_in/ */
  kcg_int64 d_in,
  outC_Eval_Q_SCALE_TA_MRSP *outC)
{
  outC->_L2 = d_in;
  outC->_L12 = kcg_lit_int64(100);
  outC->_L11 = kcg_lit_int64(10) * kcg_lit_int64(100);
  outC->_L4 = ENUM_Q_SCALE_10m_QSCALE_TM;
  outC->_L1 = q_scale_in;
  outC->_L9 = outC->_L1 == outC->_L4;
  /* _L10= */
  if (outC->_L9) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L12;
  }
  outC->_L8 = kcg_lit_int64(10);
  outC->_L3 = ENUM_Q_SCALE_10cm_QSCALE_TM;
  outC->_L6 = outC->_L1 == outC->_L3;
  /* _L7= */
  if (outC->_L6) {
    outC->_L7 = outC->_L8;
  }
  else {
    outC->_L7 = outC->_L10;
  }
  outC->_L14 = outC->_L7 * outC->_L2;
  outC->d_out = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void Eval_Q_SCALE_init_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC)
{
  outC->_L14 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L4 = Q_SCALE_10_cm_scale;
  outC->_L3 = Q_SCALE_10_cm_scale;
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = Q_SCALE_10_cm_scale;
  outC->d_out = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Eval_Q_SCALE_reset_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_Q_SCALE_TA_MRSP.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

