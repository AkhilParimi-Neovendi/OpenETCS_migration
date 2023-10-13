/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator/ */
void ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* index/ */
  kcg_int64 index,
  /* in_digit_display/ */
  kcg_int64 in_digit_display,
  /* Calc_index/ */
  kcg_int64 Calc_index,
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L10 = ASCII_space_DMI_Control_Pkg;
  outC->_L9 = kcg_lit_int64(1);
  outC->_L3 = Calc_index;
  outC->_L8 = outC->_L3 - outC->_L9;
  outC->_L1 = in_digit_display;
  outC->_L2 = index;
  outC->_L4 = outC->_L2 == outC->_L8;
  /* _L6= */
  if (outC->_L4) {
    outC->_L6 = outC->_L10;
  }
  else {
    outC->_L6 = outC->_L1;
  }
  outC->_L5 = !outC->_L4;
  outC->out_array = outC->_L6;
  outC->condition = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void ReplaceDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->out_array = kcg_lit_int64(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ReplaceDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

