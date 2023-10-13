/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVect_digital_int64_30.h"

/* digital::Int2BoolVect/ */
void Int2BoolVect_digital_int64_30(
  /* In/ */
  kcg_int64 In_int64_30,
  outC_Int2BoolVect_digital_int64_30 *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int64 noname;

  outC->_L1_int64_30 = In_int64_30;
  outC->Acc_int64_30 = outC->_L1_int64_30;
  /* Acc= */
  for (idx = 0; idx < 30; idx++) {
    acc = outC->Acc_int64_30;
    /* Acc=(digital::Int2BoolVectElt#1)/ */
    Int2BoolVectElt_digital_int64(acc, &outC->Context_Int2BoolVectElt_1[idx]);
    outC->Acc_int64_30 = outC->Context_Int2BoolVectElt_1[idx].AccOut_int64;
    outC->_L4_int64_30[idx] = outC->Context_Int2BoolVectElt_1[idx].bi_int64;
  }
  noname = outC->Acc_int64_30;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L5_int64_30[idx1] = outC->_L4_int64_30[29 - idx1];
  }
  kcg_copy_DMI_Available_Menu_int_T_DATA(&outC->BV_int64_30, &outC->_L5_int64_30);
}

#ifndef KCG_USER_DEFINED_INIT
void Int2BoolVect_init_digital_int64_30(
  outC_Int2BoolVect_digital_int64_30 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L5_int64_30[idx1] = kcg_true;
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L4_int64_30[idx2] = kcg_true;
  }
  outC->_L1_int64_30 = kcg_lit_int64(0);
  outC->Acc_int64_30 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->BV_int64_30[idx3] = kcg_true;
  }
  for (idx = 0; idx < 30; idx++) {
    /* Acc=(digital::Int2BoolVectElt#1)/ */
    Int2BoolVectElt_init_digital_int64(&outC->Context_Int2BoolVectElt_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Int2BoolVect_reset_digital_int64_30(
  outC_Int2BoolVect_digital_int64_30 *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* Acc=(digital::Int2BoolVectElt#1)/ */
    Int2BoolVectElt_reset_digital_int64(&outC->Context_Int2BoolVectElt_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Int2BoolVect_digital_int64_30.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

