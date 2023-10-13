/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber/ */
void CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* start/ */
  kcg_bool start,
  /* in_arraykey/ */
  array_bool_12 *in_arraykey,
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_int64 acc;
  static kcg_size idx;
  static kcg_int64 noname;

  outC->_L19 = ASCII_offset_0_DMI_Control_Pkg;
  outC->_L18 = ASCII_offset_Backsp_DMI_Control_Pkg;
  outC->_L17 = ASCII_0_DMI_Control_Pkg;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  kcg_copy_array_bool_12(&outC->_L2, in_arraykey);
  outC->_L7 = start;
  outC->_L5 = outC->_L3;
  /* _L4= */
  if (outC->_L7) {
    /* _L4= */
    for (idx = 0; idx < 12; idx++) {
      acc = outC->_L5;
      /* _L4=(DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator#1)/ */
      CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
        acc,
        outC->_L2[idx],
        &outC->Context_CalculateNumber_iterator_1[idx]);
      outC->_L5 = outC->Context_CalculateNumber_iterator_1[idx].out_acc;
      outC->_L4 = /* _L4= */(kcg_int64) (idx + 1);
      /* _L4= */
      if (!outC->Context_CalculateNumber_iterator_1[idx].condition) {
        break;
      }
    }
  }
  else {
    outC->_L4 = kcg_lit_int64(0);
  }
  /* _L13= */
  switch (outC->_L4) {
    case kcg_lit_int64(10) :
      outC->_L13 = outC->_L18;
      break;
    case kcg_lit_int64(11) :
      outC->_L13 = outC->_L19;
      break;
    default :
      outC->_L13 = outC->_L16;
      break;
  }
  outC->_L12 = kcg_lit_int64(10);
  outC->_L11 = outC->_L4 < outC->_L12;
  /* _L10= */
  if (outC->_L11) {
    outC->_L10 = outC->_L4;
  }
  else {
    outC->_L10 = outC->_L13;
  }
  noname = outC->_L5;
  outC->_L8 = outC->_L10 + outC->_L17;
  outC->out_KeyNumber = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void CalculateNumber_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L19 = kcg_lit_int64(0);
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 12; idx1++) {
    outC->_L2[idx1] = kcg_true;
  }
  outC->out_KeyNumber = kcg_lit_int64(0);
  for (idx = 0; idx < 12; idx++) {
    /* _L4=(DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator#1)/ */
    CalculateNumber_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_CalculateNumber_iterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalculateNumber_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 12; idx++) {
    /* _L4=(DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator#1)/ */
    CalculateNumber_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
      &outC->Context_CalculateNumber_iterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

