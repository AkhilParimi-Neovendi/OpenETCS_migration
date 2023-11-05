/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc/ */
void FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  static kcg_bool acc;
  static kcg_size idx;

  outC->_L18 = kcg_false;
  kcg_copy_array_int32_9(&outC->_L7, in_digit_display);
  outC->_L4 = kcg_true;
  outC->_L17 = outC->_L18;
  /* _L15= */
  if (outC->_L4) {
    /* _L15= */
    for (idx = 0; idx < 9; idx++) {
      acc = outC->_L17;
      /* _L15=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator#1)/ */
      FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
        /* _L15= */(kcg_int32) idx,
        acc,
        outC->_L7[idx],
        &outC->Context_FindIndexEmptyLoc_iterator_1[idx]);
      outC->_L17 = outC->Context_FindIndexEmptyLoc_iterator_1[idx].accout;
      outC->_L15 = /* _L15= */(kcg_int32) (idx + 1);
      /* _L15= */
      if (!outC->Context_FindIndexEmptyLoc_iterator_1[idx].condition) {
        break;
      }
    }
  }
  else {
    outC->_L15 = kcg_lit_int32(0);
  }
  outC->DigitFull = outC->_L17;
  outC->index = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L7[idx1] = kcg_lit_int32(0);
  }
  outC->DigitFull = kcg_true;
  outC->index = kcg_lit_int32(0);
  for (idx = 0; idx < 9; idx++) {
    /* _L15=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator#1)/ */
    FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(
      &outC->Context_FindIndexEmptyLoc_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    /* _L15=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator#1)/ */
    FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(
      &outC->Context_FindIndexEmptyLoc_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexEmptyLoc_DMI_Control_Pkg_Utils.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

