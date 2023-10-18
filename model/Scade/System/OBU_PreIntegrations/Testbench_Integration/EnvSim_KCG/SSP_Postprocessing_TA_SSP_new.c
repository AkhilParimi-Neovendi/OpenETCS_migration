/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Postprocessing_TA_SSP_new.h"

/* TA_SSP_new::SSP_Postprocessing/ */
void SSP_Postprocessing_TA_SSP_new(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* pos_prvLRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* there_is_prvLRBG/ */
  kcg_bool there_is_prvLRBG,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  outC->_L10 = train_length;
  outC->_L9 = there_is_prvLRBG;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L8, Profile_in);
  /* _L1= */
  if (outC->init) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
      &outC->_L1,
      (StaticSpeedProfile_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, &outC->_L4);
  }
  outC->_L7 = pos_LRBG;
  outC->_L6 = pos_prvLRBG;
  /* _L2=(TA_SSP_new::SSP_Position_SSP_with_BGs#1)/ */
  SSP_Position_SSP_with_BGs_TA_SSP_new(
    &outC->_L8,
    outC->_L7,
    outC->_L6,
    outC->_L9,
    outC->_L10,
    &outC->_L1,
    &outC->Context_SSP_Position_SSP_with_BGs_1);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_SSP_Position_SSP_with_BGs_1.ProfileOut);
  outC->_L3 = outC->Context_SSP_Position_SSP_with_BGs_1.available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->Context_SSP_Position_SSP_with_BGs_1.ProfileLoopOut);
  outC->available = outC->_L3;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L2);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Postprocessing_init_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  for (idx = 0; idx < 50; idx++) {
    outC->_L8[idx].valid = kcg_true;
    outC->_L8[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L8[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L8[idx].q_train_length_corr = kcg_true;
    outC->_L8[idx].v_static = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L1[idx1].valid = kcg_true;
    outC->_L1[idx1].d_static_abs = kcg_lit_int64(0);
    outC->_L1[idx1].d_static_LRBG = kcg_lit_int64(0);
    outC->_L1[idx1].q_train_length_corr = kcg_true;
    outC->_L1[idx1].v_static = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_true;
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].d_static_abs = kcg_lit_int64(0);
    outC->_L2[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->_L2[idx2].q_train_length_corr = kcg_true;
    outC->_L2[idx2].v_static = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->_L4[idx3].valid = kcg_true;
    outC->_L4[idx3].d_static_abs = kcg_lit_int64(0);
    outC->_L4[idx3].d_static_LRBG = kcg_lit_int64(0);
    outC->_L4[idx3].q_train_length_corr = kcg_true;
    outC->_L4[idx3].v_static = kcg_lit_int64(0);
  }
  outC->init = kcg_true;
  for (idx4 = 0; idx4 < 50; idx4++) {
    outC->SSP[idx4].valid = kcg_true;
    outC->SSP[idx4].d_static_abs = kcg_lit_int64(0);
    outC->SSP[idx4].d_static_LRBG = kcg_lit_int64(0);
    outC->SSP[idx4].q_train_length_corr = kcg_true;
    outC->SSP[idx4].v_static = kcg_lit_int64(0);
  }
  outC->available = kcg_true;
  /* _L2=(TA_SSP_new::SSP_Position_SSP_with_BGs#1)/ */
  SSP_Position_SSP_with_BGs_init_TA_SSP_new(
    &outC->Context_SSP_Position_SSP_with_BGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Postprocessing_reset_TA_SSP_new(
  outC_SSP_Postprocessing_TA_SSP_new *outC)
{
  outC->init = kcg_true;
  /* _L2=(TA_SSP_new::SSP_Position_SSP_with_BGs#1)/ */
  SSP_Position_SSP_with_BGs_reset_TA_SSP_new(
    &outC->Context_SSP_Position_SSP_with_BGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Postprocessing_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

