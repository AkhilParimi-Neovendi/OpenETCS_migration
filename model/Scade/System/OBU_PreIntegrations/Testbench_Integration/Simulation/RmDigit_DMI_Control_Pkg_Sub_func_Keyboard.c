/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit/ */
void RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int32 noname;

  kcg_copy_array_int32_9(&outC->_L12, in_digit_display);
  outC->_L20 = kcg_lit_int32(1);
  outC->_L17 = kcg_lit_int32(0);
  kcg_copy_array_int32_9(&outC->_L13, in_digit_display);
  /* _L7=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
    &outC->_L13,
    &outC->Context_FindIndexEmptyLoc_1);
  outC->_L7 = outC->Context_FindIndexEmptyLoc_1.index;
  outC->_L18 = outC->Context_FindIndexEmptyLoc_1.DigitFull;
  /* _L19= */
  if (outC->_L18) {
    outC->_L19 = outC->_L17;
  }
  else {
    outC->_L19 = outC->_L20;
  }
  outC->_L16 = outC->_L7 - outC->_L19;
  /* _L11/ */
  for (idx = 0; idx < 9; idx++) {
    outC->_L11[idx] = outC->_L16;
  }
  outC->_L21 = ASCII_space_DMI_Control_Pkg;
  outC->_L15 = kcg_true;
  /* _L10= */
  if (outC->_L15) {
    /* _L10= */
    for (idx1 = 0; idx1 < 9; idx1++) {
      /* _L10=(DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator#1)/ */
      ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        /* _L10= */(kcg_int32) idx1,
        outC->_L12[idx1],
        outC->_L11[idx1],
        &outC->Context_ReplaceDigit_iterator_1[idx1]);
      outC->_L9[idx1] = outC->Context_ReplaceDigit_iterator_1[idx1].out_array;
      outC->_L10 = /* _L10= */(kcg_int32) (idx1 + 1);
      /* _L10= */
      if (!outC->Context_ReplaceDigit_iterator_1[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L10 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L10= */
  for (idx1 = /* _L10= */(kcg_size) outC->_L10; idx1 < 9; idx1++) {
    outC->_L9[idx1] = outC->_L21;
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_array_int32_9(&outC->out_digit_display, &outC->_L9);
  noname = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void RmDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L10 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L9[idx1] = kcg_lit_int32(0);
  }
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_true;
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L13[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L12[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->_L11[idx4] = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 9; idx5++) {
    outC->out_digit_display[idx5] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 9; idx++) {
    /* _L10=(DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator#1)/ */
    ReplaceDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_ReplaceDigit_iterator_1[idx]);
  }
  /* _L7=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
    &outC->Context_FindIndexEmptyLoc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RmDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    /* _L10=(DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator#1)/ */
    ReplaceDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_ReplaceDigit_iterator_1[idx]);
  }
  /* _L7=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */
  FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
    &outC->Context_FindIndexEmptyLoc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

