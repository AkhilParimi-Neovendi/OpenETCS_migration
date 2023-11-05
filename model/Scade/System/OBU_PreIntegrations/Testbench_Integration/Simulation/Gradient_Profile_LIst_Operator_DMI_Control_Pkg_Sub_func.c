/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::Gradient_Profile_LIst_Operator/ */
void Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func(
  /* Index/ */
  kcg_int32 Index,
  /* Gradient_information_from_Track_Atlas/ */
  DMI_gradientProfileElement_T_DMI_Types_Pkg *Gradient_information_from_Track_Atlas,
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int32 noname;

  kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg(
    &outC->_L1,
    Gradient_information_from_Track_Atlas);
  outC->_L18 = outC->_L1.valid;
  outC->_1_continue = outC->_L18;
  outC->_L25 = kcg_lit_float32(100.0);
  outC->_L16 = outC->_L1.end_section;
  outC->_L23 = /* _L23= */(kcg_float32) outC->_L16;
  outC->_L29 = outC->_L23 / outC->_L25;
  outC->_L22 = kcg_lit_float32(100.0);
  outC->_L17 = outC->_L1.begin_section;
  outC->_L21 = /* _L21= */(kcg_float32) outC->_L17;
  outC->_L28 = outC->_L21 / outC->_L22;
  outC->_L27 = Index;
  noname = outC->_L27;
  outC->Gradient_Visible_Flag = outC->_L18;
  outC->_L15 = outC->_L1.gradient;
  outC->_L26 = /* _L26= */(kcg_float32) outC->_L15;
  outC->Gradient_Value_Section = outC->_L26;
  outC->Gradient_End_Section = outC->_L29;
  outC->Gradient_Begin_Section = outC->_L28;
}

#ifndef KCG_USER_DEFINED_INIT
void Gradient_Profile_LIst_Operator_init_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L29 = kcg_lit_float32(0.0);
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L23 = kcg_lit_float32(0.0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_lit_float32(0.0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.begin_section = kcg_lit_int32(0);
  outC->_L1.end_section = kcg_lit_int32(0);
  outC->_L1.gradient = kcg_lit_int32(0);
  outC->Gradient_Value_Section = kcg_lit_float32(0.0);
  outC->Gradient_End_Section = kcg_lit_float32(0.0);
  outC->Gradient_Begin_Section = kcg_lit_float32(0.0);
  outC->Gradient_Visible_Flag = kcg_true;
  outC->_1_continue = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Gradient_Profile_LIst_Operator_reset_DMI_Control_Pkg_Sub_func(
  outC_Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Gradient_Profile_LIst_Operator_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

