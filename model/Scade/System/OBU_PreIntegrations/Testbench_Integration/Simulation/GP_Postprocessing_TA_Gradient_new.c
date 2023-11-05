/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient_new.h"

/* TA_Gradient_new::GP_Postprocessing/ */
void GP_Postprocessing_TA_Gradient_new(
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  outC->_L6 = pos_prvLRBG;
  outC->_L9 = there_is_prvLRBG;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L8, Profile_in);
  /* _L1= */
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L1,
      (GradientProfile_t_TrackAtlasTypes *) &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, &outC->_L4);
  }
  outC->_L7 = pos_LRBG;
  /* _L2=(TA_Gradient_new::GP_Position_GP_with_BGs#1)/ */
  GP_Position_GP_with_BGs_TA_Gradient_new(
    &outC->_L8,
    outC->_L7,
    outC->_L6,
    outC->_L9,
    &outC->_L1,
    &outC->Context_GP_Position_GP_with_BGs_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_GP_Position_GP_with_BGs_1.ProfileOut);
  outC->_L3 = outC->Context_GP_Position_GP_with_BGs_1.available;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->Context_GP_Position_GP_with_BGs_1.ProfileLoopOut);
  outC->available = outC->_L3;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L2);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void GP_Postprocessing_init_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L6 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L8[idx].valid = kcg_true;
    outC->_L8[idx].Loc_Absolute = kcg_lit_int32(0);
    outC->_L8[idx].Loc_LRBG = kcg_lit_int32(0);
    outC->_L8[idx].Gradient = kcg_lit_int32(0);
    outC->_L8[idx].L_Gradient = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L1[idx1].valid = kcg_true;
    outC->_L1[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L1[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L1[idx1].Gradient = kcg_lit_int32(0);
    outC->_L1[idx1].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].Loc_Absolute = kcg_lit_int32(0);
    outC->_L2[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L2[idx2].Gradient = kcg_lit_int32(0);
    outC->_L2[idx2].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L7 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L4[idx3].valid = kcg_true;
    outC->_L4[idx3].Loc_Absolute = kcg_lit_int32(0);
    outC->_L4[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4[idx3].Gradient = kcg_lit_int32(0);
    outC->_L4[idx3].L_Gradient = kcg_lit_int32(0);
  }
  outC->init = kcg_true;
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->GP[idx4].valid = kcg_true;
    outC->GP[idx4].Loc_Absolute = kcg_lit_int32(0);
    outC->GP[idx4].Loc_LRBG = kcg_lit_int32(0);
    outC->GP[idx4].Gradient = kcg_lit_int32(0);
    outC->GP[idx4].L_Gradient = kcg_lit_int32(0);
  }
  outC->available = kcg_true;
  /* _L2=(TA_Gradient_new::GP_Position_GP_with_BGs#1)/ */
  GP_Position_GP_with_BGs_init_TA_Gradient_new(
    &outC->Context_GP_Position_GP_with_BGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GP_Postprocessing_reset_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  outC->init = kcg_true;
  /* _L2=(TA_Gradient_new::GP_Position_GP_with_BGs#1)/ */
  GP_Position_GP_with_BGs_reset_TA_Gradient_new(
    &outC->Context_GP_Position_GP_with_BGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_GP_Postprocessing_TA_Gradient_new(
  SV_GP_Postprocessing_TA_Gradient_new *SV,
  outC_GP_Postprocessing_TA_Gradient_new *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&SV->Context__L4, &outC->_L4);
  SV->Context_init = outC->init;
}

void kcg_load_SV_GP_Postprocessing_TA_Gradient_new(
  outC_GP_Postprocessing_TA_Gradient_new *outC,
  SV_GP_Postprocessing_TA_Gradient_new *SV)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L4, &SV->Context__L4);
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** GP_Postprocessing_TA_Gradient_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

