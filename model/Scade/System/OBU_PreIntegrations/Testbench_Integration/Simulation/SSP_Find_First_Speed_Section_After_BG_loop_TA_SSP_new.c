/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new.h"

/* TA_SSP_new::SSP_Find_First_Speed_Section_After_BG_loop/ */
void SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  kcg_int64 Acc,
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC)
{
  static kcg_int64 noname;

  outC->_L14 = kcg_lit_int64(1);
  outC->_L5 = i;
  outC->_L13 = outC->_L5 - outC->_L14;
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = outC->_L13 < outC->_L16;
  /* _L17= */
  if (outC->_L15) {
    outC->_L17 = outC->_L16;
  }
  else {
    outC->_L17 = outC->_L13;
  }
  outC->_L12 = kcg_lit_int64(0);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L7, Profile_in);
  if ((kcg_lit_int64(0) <= outC->_L5) & (outC->_L5 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L9,
      &outC->_L7[outC->_L5]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L9,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L10 = outC->_L9.d_static_LRBG;
  outC->_L11 = outC->_L10 < outC->_L12;
  outC->_L6 = Acc;
  noname = outC->_L6;
  outC->Pointer = outC->_L17;
  outC->cont = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_Find_First_Speed_Section_After_BG_loop_init_TA_SSP_new(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC)
{
  static kcg_size idx;

  outC->_L17 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.d_static_abs = kcg_lit_int64(0);
  outC->_L9.d_static_LRBG = kcg_lit_int64(0);
  outC->_L9.q_train_length_corr = kcg_true;
  outC->_L9.v_static = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].d_static_abs = kcg_lit_int64(0);
    outC->_L7[idx].d_static_LRBG = kcg_lit_int64(0);
    outC->_L7[idx].q_train_length_corr = kcg_true;
    outC->_L7[idx].v_static = kcg_lit_int64(0);
  }
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->Pointer = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_Find_First_Speed_Section_After_BG_loop_reset_TA_SSP_new(
  outC_SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_Find_First_Speed_Section_After_BG_loop_TA_SSP_new.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

