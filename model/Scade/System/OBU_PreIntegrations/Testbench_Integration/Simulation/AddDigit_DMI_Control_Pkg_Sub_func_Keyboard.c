/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit/ */
void AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  /* KeyNumber/ */
  kcg_int32 KeyNumber,
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L15 = ASCII_space_DMI_Control_Pkg;
  outC->_L3 = KeyNumber;
  /* _L4/ */
  for (idx = 0; idx < 9; idx++) {
    outC->_L4[idx] = outC->_L3;
  }
  kcg_copy_array_int32_9(&outC->_L2, in_digit_display);
  outC->_L14 = kcg_true;
  /* _L13= */
  if (outC->_L14) {
    /* _L13= */
    for (idx1 = 0; idx1 < 9; idx1++) {
      /* _L13=(DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator#1)/ */
      AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        /* _L13= */(kcg_int32) idx1,
        outC->_L4[idx1],
        outC->_L2[idx1],
        &outC->Context_AddDigit_iterator_1[idx1]);
      outC->_L12[idx1] = outC->Context_AddDigit_iterator_1[idx1].out_digit_display;
      outC->_L13 = /* _L13= */(kcg_int32) (idx1 + 1);
      /* _L13= */
      if (!outC->Context_AddDigit_iterator_1[idx1].condition) {
        break;
      }
    }
  }
  else {
    outC->_L13 = kcg_lit_int32(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L13= */
  for (idx1 = /* _L13= */(kcg_size) outC->_L13; idx1 < 9; idx1++) {
    outC->_L12[idx1] = outC->_L15;
  }
#endif /* KCG_MAPW_CPY */

  noname = outC->_L13;
  kcg_copy_array_int32_9(&outC->out_digit_display, &outC->_L12);
}

#ifndef KCG_USER_DEFINED_INIT
void AddDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->_L12[idx1] = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 9; idx2++) {
    outC->_L4[idx2] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 9; idx3++) {
    outC->_L2[idx3] = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 9; idx4++) {
    outC->out_digit_display[idx4] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 9; idx++) {
    /* _L13=(DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator#1)/ */
    AddDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_AddDigit_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AddDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 9; idx++) {
    /* _L13=(DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator#1)/ */
    AddDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_AddDigit_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

