/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Merge_New_P27V1_to_Profile_loop/ */
void SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new(
  /* i/ */
  kcg_int32 i,
  /* SP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *SP,
  /* First_Section_To_Replace/ */
  kcg_int32 First_Section_To_Replace,
  /* new_SP_received/ */
  StaticSpeedProfile_t_TrackAtlasTypes *new_SP_received,
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC)
{
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L20, SP);
  outC->_L11 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L6, new_SP_received);
  if ((kcg_lit_int32(0) <= outC->_L11) & (outC->_L11 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L15,
      &outC->_L6[outC->_L11]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L15,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L4 = First_Section_To_Replace;
  outC->_L5 = i;
  outC->_L7 = outC->_L5 + outC->_L4;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L19, &outC->_L20);
  if ((kcg_lit_int32(0) <= outC->_L7) & (outC->_L7 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L19[outC->_L7],
      &outC->_L15);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Merge_New_P27V1_to_Profile_loop_init_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  for (idx = 0; idx < 50; idx++) {
    outC->_L20[idx].valid = kcg_true;
    outC->_L20[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L20[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L20[idx].q_train_length_corr = kcg_true;
    outC->_L20[idx].v_static = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L19[idx1].valid = kcg_true;
    outC->_L19[idx1].d_static_abs = kcg_lit_int32(0);
    outC->_L19[idx1].d_static_LRBG = kcg_lit_int32(0);
    outC->_L19[idx1].q_train_length_corr = kcg_true;
    outC->_L19[idx1].v_static = kcg_lit_int32(0);
  }
  outC->_L15.valid = kcg_true;
  outC->_L15.d_static_abs = kcg_lit_int32(0);
  outC->_L15.d_static_LRBG = kcg_lit_int32(0);
  outC->_L15.q_train_length_corr = kcg_true;
  outC->_L15.v_static = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L6[idx2].valid = kcg_true;
    outC->_L6[idx2].d_static_abs = kcg_lit_int32(0);
    outC->_L6[idx2].d_static_LRBG = kcg_lit_int32(0);
    outC->_L6[idx2].q_train_length_corr = kcg_true;
    outC->_L6[idx2].v_static = kcg_lit_int32(0);
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->SSP[idx3].valid = kcg_true;
    outC->SSP[idx3].d_static_abs = kcg_lit_int32(0);
    outC->SSP[idx3].d_static_LRBG = kcg_lit_int32(0);
    outC->SSP[idx3].q_train_length_corr = kcg_true;
    outC->SSP[idx3].v_static = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Merge_New_P27V1_to_Profile_loop_reset_TA_SSP_new(
  outC_SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Merge_New_P27V1_to_Profile_loop_TA_SSP_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

