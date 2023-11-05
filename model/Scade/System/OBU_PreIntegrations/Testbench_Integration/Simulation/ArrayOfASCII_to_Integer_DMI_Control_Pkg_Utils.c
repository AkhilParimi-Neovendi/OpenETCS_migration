/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer/ */
void ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
  /* TrainRunningNumber/ */
  array_int32_9 *TrainRunningNumber,
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L10 = MAXTextLength_DMI_Control_Pkg + kcg_lit_int32(1);
  kcg_copy_array_int32_9(&outC->_L1, TrainRunningNumber);
  /* _L5=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
    &outC->_L1,
    &outC->Context_FindIndexEmptyLoc_1);
  outC->_L5 = outC->Context_FindIndexEmptyLoc_1.index;
  outC->_L6 = outC->Context_FindIndexEmptyLoc_1.DigitFull;
  /* _L9= */
  if (outC->_L6) {
    outC->_L9 = outC->_L10;
  }
  else {
    outC->_L9 = outC->_L5;
  }
  outC->_L4 = kcg_lit_int32(0);
  /* _L7/ */
  for (idx = 0; idx < 9; idx++) {
    outC->_L7[idx] = outC->_L9;
  }
  outC->_L8 = kcg_true;
  outC->_L3 = outC->_L4;
  /* _L2= */
  if (outC->_L8) {
    /* _L2= */
    for (idx1 = 0; idx1 < 9; idx1++) {
      acc = outC->_L3;
      /* _L2=(DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator#1)/ */
      ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
        /* _L2= */(kcg_int32) idx1,
        acc,
        outC->_L1[idx1],
        outC->_L7[idx1],
        &outC->Context_ASCII_to_INTEGER_iterator_1[idx1]);
      outC->_L3 = outC->Context_ASCII_to_INTEGER_iterator_1[idx1].outInt;
      outC->_L2 = /* _L2= */(kcg_int32) (idx1 + 1);
      /* _L2= */
      if (!outC->Context_ASCII_to_INTEGER_iterator_1[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L2 = kcg_lit_int32(0);
  }
  noname = outC->_L2;
  outC->Output1 = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L7[idx1] = kcg_lit_int32(0);
  }
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L1[idx2] = kcg_lit_int32(0);
  }
  outC->Output1 = kcg_lit_int32(0);
  for (idx = 0; idx < 9; idx++) {
    /* _L2=(DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator#1)/ */
    ASCII_to_INTEGER_iterator_init_DMI_Control_Pkg_Utils(
      &outC->Context_ASCII_to_INTEGER_iterator_1[idx]);
  }
  /* _L5=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
    &outC->Context_FindIndexEmptyLoc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    /* _L2=(DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator#1)/ */
    ASCII_to_INTEGER_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->Context_ASCII_to_INTEGER_iterator_1[idx]);
  }
  /* _L5=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
    &outC->Context_FindIndexEmptyLoc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

