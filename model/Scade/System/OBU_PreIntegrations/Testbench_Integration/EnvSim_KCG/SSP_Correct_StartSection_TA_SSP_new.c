/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Correct_StartSection_TA_SSP_new.h"

/* TA_SSP_new::SSP_Correct_StartSection/ */
void SSP_Correct_StartSection_TA_SSP_new(
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Correct_StartSection_TA_SSP_new *outC)
{
  outC->_L8 = kcg_lit_int64(0);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L3, &outC->_L1[0]);
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L7, &outC->_L3);
  if (kcg_true) {
    outC->_L7.d_static_LRBG = outC->_L8;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L5[0], &outC->_L7);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Correct_StartSection_init_TA_SSP_new(
  outC_SSP_Correct_StartSection_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L8 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.d_static_abs = kcg_lit_int64(0);
  outC->_L7.d_static_LRBG = kcg_lit_int64(0);
  outC->_L7.q_train_length_corr = kcg_true;
  outC->_L7.v_static = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L5[idx].valid = kcg_true;
    outC->_L5[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L5[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L5[idx].q_train_length_corr = kcg_true;
    outC->_L5[idx].v_static = kcg_lit_int64(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.d_static_abs = kcg_lit_int64(0);
  outC->_L3.d_static_LRBG = kcg_lit_int64(0);
  outC->_L3.q_train_length_corr = kcg_true;
  outC->_L3.v_static = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L1[idx1].valid = kcg_true;
    outC->_L1[idx1].d_static_abs = kcg_lit_int64(0);
    outC->_L1[idx1].d_static_LRBG = kcg_lit_int64(0);
    outC->_L1[idx1].q_train_length_corr = kcg_true;
    outC->_L1[idx1].v_static = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->Profile_out[idx2].valid = kcg_true;
    outC->Profile_out[idx2].d_static_abs = kcg_lit_int64(0);
    outC->Profile_out[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->Profile_out[idx2].q_train_length_corr = kcg_true;
    outC->Profile_out[idx2].v_static = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Correct_StartSection_reset_TA_SSP_new(
  outC_SSP_Correct_StartSection_TA_SSP_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Correct_StartSection_TA_SSP_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

