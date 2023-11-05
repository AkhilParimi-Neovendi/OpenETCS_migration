/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVectElt_digital_int32.h"

/* digital::Int2BoolVectElt/ */
void Int2BoolVectElt_digital_int32(
  /* Acc/ */
  kcg_int32 Acc_int32,
  outC_Int2BoolVectElt_digital_int32 *outC)
{
  outC->_L13_int32 = kcg_lit_int32(1);
  outC->_L9_int32 = kcg_lit_int32(2);
  outC->_L1_int32 = Acc_int32;
  outC->_L11_int32 = outC->_L1_int32 % outC->_L9_int32;
  outC->_L12_int32 = outC->_L11_int32 == outC->_L13_int32;
  outC->bi_int32 = outC->_L12_int32;
  outC->_L10_int32 = outC->_L1_int32 / outC->_L9_int32;
  outC->AccOut_int32 = outC->_L10_int32;
}

#ifndef KCG_USER_DEFINED_INIT
void Int2BoolVectElt_init_digital_int32(
  outC_Int2BoolVectElt_digital_int32 *outC)
{
  outC->_L13_int32 = kcg_lit_int32(0);
  outC->_L12_int32 = kcg_true;
  outC->_L11_int32 = kcg_lit_int32(0);
  outC->_L10_int32 = kcg_lit_int32(0);
  outC->_L9_int32 = kcg_lit_int32(0);
  outC->_L1_int32 = kcg_lit_int32(0);
  outC->bi_int32 = kcg_true;
  outC->AccOut_int32 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int2BoolVectElt_reset_digital_int32(
  outC_Int2BoolVectElt_digital_int32 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int2BoolVectElt_digital_int32.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

