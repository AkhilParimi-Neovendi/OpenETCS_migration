/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator/ */
void AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* Index/ */
  kcg_int64 Index,
  /* KeyNumber/ */
  kcg_int64 KeyNumber,
  /* in_digit_display/ */
  kcg_int64 in_digit_display,
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int64 noname;

  outC->_L9 = ASCII_space_DMI_Control_Pkg;
  outC->_L8 = Index;
  noname = outC->_L8;
  outC->_L1 = in_digit_display;
  outC->_L3 = outC->_L1 == outC->_L9;
  outC->_L7 = !outC->_L3;
  outC->condition = outC->_L7;
  outC->_L6 = in_digit_display;
  outC->_L2 = KeyNumber;
  /* _L5= */
  if (outC->_L3) {
    outC->_L5 = outC->_L2;
  }
  else {
    outC->_L5 = outC->_L6;
  }
  outC->out_digit_display = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void AddDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L1 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int64(0);
  outC->out_digit_display = kcg_lit_int64(0);
  outC->condition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AddDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

