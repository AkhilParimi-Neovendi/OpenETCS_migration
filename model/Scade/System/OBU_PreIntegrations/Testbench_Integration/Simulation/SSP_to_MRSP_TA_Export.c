/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_to_MRSP_TA_Export.h"

/* TA_Export::SSP_to_MRSP/ */
void SSP_to_MRSP_TA_Export(
  /* i/ */
  kcg_int64 i,
  /* MRSP_init/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP_init,
  /* SSP/ */
  StaticSpeedProfile_t_TrackAtlasTypes *SSP,
  outC_SSP_to_MRSP_TA_Export *outC)
{
  static kcg_bool noname;

  outC->_L8 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L3, SSP);
  if ((kcg_lit_int64(0) <= outC->_L8) & (outC->_L8 < kcg_lit_int64(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L7,
      &outC->_L3[outC->_L8]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L7,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L17 = outC->_L7.q_train_length_corr;
  noname = outC->_L17;
  outC->_L14 = outC->_L7.valid;
  outC->_L15 = outC->_L7.d_static_abs;
  outC->_L16 = outC->_L7.d_static_LRBG;
  outC->_L18 = outC->_L7.v_static;
  outC->_L19.valid = outC->_L14;
  outC->_L19.Loc_Abs = outC->_L15;
  outC->_L19.Loc_LRBG = outC->_L16;
  outC->_L19.MRS = outC->_L18;
  outC->_L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L5, MRSP_init);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L4, &outC->_L5);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L4[outC->_L1], &outC->_L19);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L4);
  outC->cont = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void SSP_to_MRSP_init_TA_Export(outC_SSP_to_MRSP_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L19.valid = kcg_true;
  outC->_L19.Loc_Abs = kcg_lit_int64(0);
  outC->_L19.Loc_LRBG = kcg_lit_int64(0);
  outC->_L19.MRS = kcg_lit_int64(0);
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_lit_int64(0);
  outC->_L16 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.d_static_abs = kcg_lit_int64(0);
  outC->_L7.d_static_LRBG = kcg_lit_int64(0);
  outC->_L7.q_train_length_corr = kcg_true;
  outC->_L7.v_static = kcg_lit_int64(0);
  for (idx = 0; idx < 110; idx++) {
    outC->_L5[idx].valid = kcg_true;
    outC->_L5[idx].Loc_Abs = kcg_lit_int64(0);
    outC->_L5[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L5[idx].MRS = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L4[idx1].valid = kcg_true;
    outC->_L4[idx1].Loc_Abs = kcg_lit_int64(0);
    outC->_L4[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L4[idx1].MRS = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->_L3[idx2].valid = kcg_true;
    outC->_L3[idx2].d_static_abs = kcg_lit_int64(0);
    outC->_L3[idx2].d_static_LRBG = kcg_lit_int64(0);
    outC->_L3[idx2].q_train_length_corr = kcg_true;
    outC->_L3[idx2].v_static = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->MRSP[idx3].valid = kcg_true;
    outC->MRSP[idx3].Loc_Abs = kcg_lit_int64(0);
    outC->MRSP[idx3].Loc_LRBG = kcg_lit_int64(0);
    outC->MRSP[idx3].MRS = kcg_lit_int64(0);
  }
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SSP_to_MRSP_reset_TA_Export(outC_SSP_to_MRSP_TA_Export *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SSP_to_MRSP_TA_Export.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

