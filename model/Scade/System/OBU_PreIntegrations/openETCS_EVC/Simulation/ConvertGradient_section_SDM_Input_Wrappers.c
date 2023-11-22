/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertGradient_section_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::ConvertGradient_section/ */
void ConvertGradient_section_SDM_Input_Wrappers(
  /* Gradient_section_ext/ */
  Gradient_section_t_TrackAtlasTypes *Gradient_section_ext,
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC)
{
  L_internal_Type_Obu_BasicTypes_Pkg noname;
  L_internal_Type_Obu_BasicTypes_Pkg _1_noname;

  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L9, Gradient_section_ext);
  outC->_L5 = outC->_L9.Gradient;
  outC->_L11 = /* _L11= */(kcg_float32) outC->_L5;
  outC->_L10 = outC->_L9.L_Gradient;
  _1_noname = outC->_L10;
  outC->_L4 = outC->_L9.Loc_LRBG;
  noname = outC->_L4;
  outC->_L3 = outC->_L9.Loc_Absolute;
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_SDM_Types_Pkg(
    outC->_L3,
    &outC->Context_TransformL_intToL_real_1);
  outC->_L7 = outC->Context_TransformL_intToL_real_1.loc_real;
  outC->_L2 = outC->_L9.valid;
  outC->_L6.location = outC->_L7;
  outC->_L6.gradient = outC->_L11;
  outC->_L6.valid = outC->_L2;
  kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(
    &outC->Gradient_section_int,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertGradient_section_init_SDM_Input_Wrappers(
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC)
{
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.Loc_Absolute = kcg_lit_int32(0);
  outC->_L9.Loc_LRBG = kcg_lit_int32(0);
  outC->_L9.Gradient = kcg_lit_int32(0);
  outC->_L9.L_Gradient = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_float32(0.0);
  outC->_L6.location = kcg_lit_float32(0.0);
  outC->_L6.gradient = kcg_lit_float32(0.0);
  outC->_L6.valid = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->Gradient_section_int.location = kcg_lit_float32(0.0);
  outC->Gradient_section_int.gradient = kcg_lit_float32(0.0);
  outC->Gradient_section_int.valid = kcg_true;
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_init_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertGradient_section_reset_SDM_Input_Wrappers(
  outC_ConvertGradient_section_SDM_Input_Wrappers *outC)
{
  /* _L7=(SDM_Types_Pkg::TransformL_intToL_real#1)/ */
  TransformL_intToL_real_reset_SDM_Types_Pkg(
    &outC->Context_TransformL_intToL_real_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertGradient_section_SDM_Input_Wrappers.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

