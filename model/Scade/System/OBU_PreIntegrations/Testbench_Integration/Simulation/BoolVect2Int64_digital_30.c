/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BoolVect2Int64_digital_30.h"

/* digital::BoolVect2Int64/ */
void BoolVect2Int64_digital_30(
  /* BV/ */
  DMI_Available_Menu_int_T_DATA *BV_30,
  outC_BoolVect2Int64_digital_30 *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;

  outC->_L3_30 = kcg_lit_int64(0);
  kcg_copy_DMI_Available_Menu_int_T_DATA(&outC->_L4_30, BV_30);
  outC->_L2_30 = outC->_L3_30;
  /* _L2= */
  for (idx = 0; idx < 30; idx++) {
    acc = outC->_L2_30;
    outC->_L9_BoolVect2IntElt_1_int64[idx] = kcg_lit_int64(2);
    outC->_L1_BoolVect2IntElt_1_int64[idx] = acc;
    outC->_L4_BoolVect2IntElt_1_int64[idx] =
      outC->_L1_BoolVect2IntElt_1_int64[idx] * outC->_L9_BoolVect2IntElt_1_int64[idx];
    outC->_L7_BoolVect2IntElt_1_int64[idx] = kcg_lit_int64(0);
    outC->_L6_BoolVect2IntElt_1_int64[idx] = kcg_lit_int64(1);
    outC->_L2_BoolVect2IntElt_1_int64[idx] = outC->_L4_30[idx];
    /* @1/_L5= */
    if (outC->_L2_BoolVect2IntElt_1_int64[idx]) {
      outC->_L5_BoolVect2IntElt_1_int64[idx] = outC->_L6_BoolVect2IntElt_1_int64[idx];
    }
    else {
      outC->_L5_BoolVect2IntElt_1_int64[idx] = outC->_L7_BoolVect2IntElt_1_int64[idx];
    }
    outC->_L8_BoolVect2IntElt_1_int64[idx] =
      outC->_L5_BoolVect2IntElt_1_int64[idx] + outC->_L4_BoolVect2IntElt_1_int64[idx];
    outC->_L2_30 = outC->_L8_BoolVect2IntElt_1_int64[idx];
  }
  outC->Out_30 = outC->_L2_30;
}

#ifndef KCG_USER_DEFINED_INIT
void BoolVect2Int64_init_digital_30(outC_BoolVect2Int64_digital_30 *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  for (idx = 0; idx < 30; idx++) {
    outC->_L4_30[idx] = kcg_true;
  }
  outC->_L3_30 = kcg_lit_int64(0);
  outC->_L2_30 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L1_BoolVect2IntElt_1_int64[idx1] = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L2_BoolVect2IntElt_1_int64[idx2] = kcg_true;
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L4_BoolVect2IntElt_1_int64[idx3] = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L5_BoolVect2IntElt_1_int64[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L6_BoolVect2IntElt_1_int64[idx5] = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L7_BoolVect2IntElt_1_int64[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L8_BoolVect2IntElt_1_int64[idx7] = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L9_BoolVect2IntElt_1_int64[idx8] = kcg_lit_int64(0);
  }
  outC->Out_30 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BoolVect2Int64_reset_digital_30(outC_BoolVect2Int64_digital_30 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: digital::BoolVect2Int64/
  @1: (digital::BoolVect2IntElt#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** BoolVect2Int64_digital_30.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

