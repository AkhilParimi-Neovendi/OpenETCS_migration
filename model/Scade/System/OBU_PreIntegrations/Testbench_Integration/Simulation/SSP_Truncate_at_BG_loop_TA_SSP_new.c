/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Truncate_at_BG_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Truncate_at_BG_loop/ */
void SSP_Truncate_at_BG_loop_TA_SSP_new(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Acc,
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* Pointer/ */
  kcg_int32 Pointer,
  outC_SSP_Truncate_at_BG_loop_TA_SSP_new *outC)
{
  outC->_L4 = Pointer;
  outC->_L6 = i;
  outC->_L7 = outC->_L6 + outC->_L4;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, Profile_in);
  if ((kcg_lit_int32(0) <= outC->_L7) & (outC->_L7 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L8,
      &outC->_L3[outC->_L7]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L8,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L9 = outC->_L8.valid;
  outC->_L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, Acc);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L2);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L5[outC->_L1],
      &outC->_L8);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
  outC->cont = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Truncate_at_BG_loop_init_TA_SSP_new(
  outC_SSP_Truncate_at_BG_loop_TA_SSP_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L9 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.d_static_abs = kcg_lit_int32(0);
  outC->_L8.d_static_LRBG = kcg_lit_int32(0);
  outC->_L8.q_train_length_corr = kcg_true;
  outC->_L8.v_static = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L5[idx].valid = kcg_true;
    outC->_L5[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L5[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L5[idx].q_train_length_corr = kcg_true;
    outC->_L5[idx].v_static = kcg_lit_int32(0);
  }
  outC->_L4 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L3[idx1].valid = kcg_true;
    outC->_L3[idx1].d_static_abs = kcg_lit_int32(0);
    outC->_L3[idx1].d_static_LRBG = kcg_lit_int32(0);
    outC->_L3[idx1].q_train_length_corr = kcg_true;
    outC->_L3[idx1].v_static = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L2[idx2].valid = kcg_true;
    outC->_L2[idx2].d_static_abs = kcg_lit_int32(0);
    outC->_L2[idx2].d_static_LRBG = kcg_lit_int32(0);
    outC->_L2[idx2].q_train_length_corr = kcg_true;
    outC->_L2[idx2].v_static = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 50; idx3++) {
    outC->Profile_out[idx3].valid = kcg_true;
    outC->Profile_out[idx3].d_static_abs = kcg_lit_int32(0);
    outC->Profile_out[idx3].d_static_LRBG = kcg_lit_int32(0);
    outC->Profile_out[idx3].q_train_length_corr = kcg_true;
    outC->Profile_out[idx3].v_static = kcg_lit_int32(0);
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Truncate_at_BG_loop_reset_TA_SSP_new(
  outC_SSP_Truncate_at_BG_loop_TA_SSP_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Truncate_at_BG_loop_TA_SSP_new.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

