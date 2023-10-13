/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVectElt_digital_int64.h"

/* digital::Int2BoolVectElt/ */
void Int2BoolVectElt_digital_int64(
  /* Acc/ */
  kcg_int64 Acc_int64,
  outC_Int2BoolVectElt_digital_int64 *outC)
{
  outC->_L13_int64 = kcg_lit_int64(1);
  outC->_L9_int64 = kcg_lit_int64(2);
  outC->_L1_int64 = Acc_int64;
  outC->_L11_int64 = outC->_L1_int64 % outC->_L9_int64;
  outC->_L12_int64 = outC->_L11_int64 == outC->_L13_int64;
  outC->bi_int64 = outC->_L12_int64;
  outC->_L10_int64 = outC->_L1_int64 / outC->_L9_int64;
  outC->AccOut_int64 = outC->_L10_int64;
}

#ifndef KCG_USER_DEFINED_INIT
void Int2BoolVectElt_init_digital_int64(
  outC_Int2BoolVectElt_digital_int64 *outC)
{
  outC->_L13_int64 = kcg_lit_int64(0);
  outC->_L12_int64 = kcg_true;
  outC->_L11_int64 = kcg_lit_int64(0);
  outC->_L10_int64 = kcg_lit_int64(0);
  outC->_L9_int64 = kcg_lit_int64(0);
  outC->_L1_int64 = kcg_lit_int64(0);
  outC->bi_int64 = kcg_true;
  outC->AccOut_int64 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int2BoolVectElt_reset_digital_int64(
  outC_Int2BoolVectElt_digital_int64 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int2BoolVectElt_digital_int64.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

