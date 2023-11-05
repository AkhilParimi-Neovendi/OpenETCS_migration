/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveSSPSectionsAbsolute_Loop_new/ */
void MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  StaticSpeedProfile_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
  outC->_L258 = pos_LRBG;
  outC->_L257 = kcg_lit_int32(0);
  outC->_L1 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L6,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L6,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L256, &outC->_L6);
  if (kcg_true) {
    outC->_L256.d_static_LRBG = outC->_L257;
  }
  outC->_L255 = kcg_lit_int32(0);
  outC->_L143 = outC->_L6.valid;
  /* _L254= */
  if (outC->_L143) {
    outC->_L254 = outC->_L258;
  }
  else {
    outC->_L254 = outC->_L255;
  }
  outC->_L130 = outC->_L6.d_static_abs;
  outC->_L10 = outC->_L130 + outC->_L254;
  kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&outC->_L9, &outC->_L256);
  if (kcg_true) {
    outC->_L9.d_static_abs = outC->_L10;
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L7, &outC->_L2);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L7[outC->_L1],
      &outC->_L9);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->ProfileOut, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveSSPSectionsAbsolute_Loop_new_init_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L258 = kcg_lit_int32(0);
  outC->_L257 = kcg_lit_int32(0);
  outC->_L256.valid = kcg_true;
  outC->_L256.d_static_abs = kcg_lit_int32(0);
  outC->_L256.d_static_LRBG = kcg_lit_int32(0);
  outC->_L256.q_train_length_corr = kcg_true;
  outC->_L256.v_static = kcg_lit_int32(0);
  outC->_L255 = kcg_lit_int32(0);
  outC->_L254 = kcg_lit_int32(0);
  outC->_L143 = kcg_true;
  outC->_L130 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.d_static_abs = kcg_lit_int32(0);
  outC->_L9.d_static_LRBG = kcg_lit_int32(0);
  outC->_L9.q_train_length_corr = kcg_true;
  outC->_L9.v_static = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L7[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L7[idx].q_train_length_corr = kcg_true;
    outC->_L7[idx].v_static = kcg_lit_int32(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.d_static_abs = kcg_lit_int32(0);
  outC->_L6.d_static_LRBG = kcg_lit_int32(0);
  outC->_L6.q_train_length_corr = kcg_true;
  outC->_L6.v_static = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].d_static_abs = kcg_lit_int32(0);
    outC->_L2[idx1].d_static_LRBG = kcg_lit_int32(0);
    outC->_L2[idx1].q_train_length_corr = kcg_true;
    outC->_L2[idx1].v_static = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 50; idx2++) {
    outC->ProfileOut[idx2].valid = kcg_true;
    outC->ProfileOut[idx2].d_static_abs = kcg_lit_int32(0);
    outC->ProfileOut[idx2].d_static_LRBG = kcg_lit_int32(0);
    outC->ProfileOut[idx2].q_train_length_corr = kcg_true;
    outC->ProfileOut[idx2].v_static = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveSSPSectionsAbsolute_Loop_new_reset_TA_Lib_internal(
  outC_MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveSSPSectionsAbsolute_Loop_new_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

