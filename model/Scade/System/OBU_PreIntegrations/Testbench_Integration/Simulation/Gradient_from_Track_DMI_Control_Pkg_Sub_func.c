/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_from_Track_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Gradient_from_Track/ */
void Gradient_from_Track_DMI_Control_Pkg_Sub_func(
  /* Track_Atlas_Gradient/ */
  DMI_gradientProfileArray_T_DMI_Types_Pkg *Track_Atlas_Gradient,
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;
  static kcg_int64 noname;

  kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(
    &outC->_L12,
    Track_Atlas_Gradient);
  outC->_L29 = kcg_true;
  /* _L24= */
  if (outC->_L29) {
    /* _L24= */
    for (idx = 0; idx < 32; idx++) {
      /* _L24=(DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator#1)/ */
      Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
        /* _L24= */(kcg_int64) idx,
        &outC->_L12[idx],
        &outC->Context_Gradient_Profile_LIst_Operator_1[idx]);
      outC->_L31[idx] =
        outC->Context_Gradient_Profile_LIst_Operator_1[idx].Gradient_Visible_Flag;
      outC->_L28[idx] =
        outC->Context_Gradient_Profile_LIst_Operator_1[idx].Gradient_Begin_Section;
      outC->_L25[idx] =
        outC->Context_Gradient_Profile_LIst_Operator_1[idx].Gradient_End_Section;
      outC->_L26[idx] =
        outC->Context_Gradient_Profile_LIst_Operator_1[idx].Gradient_Value_Section;
      outC->_L24 = /* _L24= */(kcg_int64) (idx + 1);
      /* _L24= */
      if (!outC->Context_Gradient_Profile_LIst_Operator_1[idx]._1_continue) {
        break;
      }
    }
  }
  else {
    outC->_L24 = kcg_lit_int64(0);
  }
#ifdef KCG_MAPW_CPY

  /* _L24= */
  for (idx = /* _L24= */(kcg_size) outC->_L24; idx < 32; idx++) {
    outC->_L31[idx] = kcg_false;
    outC->_L28[idx] = kcg_lit_float64(0.0);
    outC->_L25[idx] = kcg_lit_float64(0.0);
    outC->_L26[idx] = kcg_lit_float64(0.0);
  }
#endif /* KCG_MAPW_CPY */

  kcg_copy_array_bool_32(&outC->Gradient_Visible_Flag, &outC->_L31);
  noname = outC->_L24;
  kcg_copy_array_float64_32(&outC->Gradient_Value, &outC->_L26);
  kcg_copy_array_float64_32(&outC->Gradient_Begin, &outC->_L28);
  kcg_copy_array_float64_32(&outC->Gradient_End, &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void Gradient_from_Track_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
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
  static kcg_size idx9;

  for (idx1 = 0; idx1 < 32; idx1++) {
    outC->_L31[idx1] = kcg_true;
  }
  outC->_L29 = kcg_true;
  for (idx2 = 0; idx2 < 32; idx2++) {
    outC->_L28[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 32; idx3++) {
    outC->_L26[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L25[idx4] = kcg_lit_float64(0.0);
  }
  outC->_L24 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 32; idx5++) {
    outC->_L12[idx5].valid = kcg_true;
    outC->_L12[idx5].begin_section = kcg_lit_int64(0);
    outC->_L12[idx5].end_section = kcg_lit_int64(0);
    outC->_L12[idx5].gradient = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->Gradient_Visible_Flag[idx6] = kcg_true;
  }
  for (idx7 = 0; idx7 < 32; idx7++) {
    outC->Gradient_Value[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 32; idx8++) {
    outC->Gradient_Begin[idx8] = kcg_lit_float64(0.0);
  }
  for (idx9 = 0; idx9 < 32; idx9++) {
    outC->Gradient_End[idx9] = kcg_lit_float64(0.0);
  }
  for (idx = 0; idx < 32; idx++) {
    /* _L24=(DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator#1)/ */
    Gradient_Profile_LIst_Operator_init_DMI_Control_Pkg_Sub_func(
      &outC->Context_Gradient_Profile_LIst_Operator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gradient_from_Track_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_from_Track_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 32; idx++) {
    /* _L24=(DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator#1)/ */
    Gradient_Profile_LIst_Operator_reset_DMI_Control_Pkg_Sub_func(
      &outC->Context_Gradient_Profile_LIst_Operator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Gradient_from_Track_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

