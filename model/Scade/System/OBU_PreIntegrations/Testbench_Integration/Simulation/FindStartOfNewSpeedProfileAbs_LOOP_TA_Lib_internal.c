/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/ */
void FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
  /* i/ */
  kcg_int32 i,
  /* Acc/ */
  kcg_int32 Acc,
  /* distance_in/ */
  L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* Profile_in/ */
  StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC)
{
  static kcg_int32 noname;

  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L3 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L2, Profile_in);
  if ((kcg_lit_int32(0) <= outC->_L3) & (outC->_L3 < kcg_lit_int32(50))) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L2[outC->_L3]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L26 = outC->_L4.v_static;
  outC->A_Input_Abs_1_int32 = outC->_L26;
  outC->_L5_Abs_1_int32 = outC->A_Input_Abs_1_int32;
  outC->_L3_Abs_1_int32 = - outC->_L5_Abs_1_int32;
  outC->_L1_Abs_1_int32 = outC->_L8_Abs_1_int32 <= outC->_L5_Abs_1_int32;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int32) {
    outC->_L2_Abs_1_int32 = outC->_L5_Abs_1_int32;
  }
  else {
    outC->_L2_Abs_1_int32 = outC->_L3_Abs_1_int32;
  }
  outC->A_Output_Abs_1_int32 = outC->_L2_Abs_1_int32;
  outC->_L27 = kcg_true;
  outC->_L24 = kcg_lit_int32(-1);
  outC->_L23 = kcg_lit_int32(0);
  /* _L21= */
  if (outC->_L27) {
    outC->_L21 = outC->_L23;
  }
  else {
    outC->_L21 = outC->_L24;
  }
  outC->_L7 = i;
  outC->_L25 = outC->_L7 + outC->_L21;
  outC->_L22 = kcg_lit_int32(635);
  outC->_L20 = outC->A_Output_Abs_1_int32;
  outC->_L19 = outC->_L20 != outC->_L22;
  outC->_L1 = distance_in;
  outC->_L5 = outC->_L4.d_static_abs;
  outC->_L6 = outC->_L5 < outC->_L1;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L15 = outC->_L12 == outC->_L5;
  outC->_L14 = i;
  outC->_L13 = outC->_L14 > outC->_L12;
  outC->_L16 = outC->_L13 & outC->_L15;
  outC->_L17 = !outC->_L16;
  outC->_L18 = outC->_L17 & outC->_L6 & outC->_L19;
  outC->_L8 = Acc;
  noname = outC->_L8;
  outC->relevant_section = outC->_L25;
  outC->cont = outC->_L18;
}

#ifndef KCG_USER_DEFINED_INIT
void FindStartOfNewSpeedProfileAbs_LOOP_init_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC)
{
  static kcg_size idx;

  outC->_L27 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.d_static_abs = kcg_lit_int32(0);
  outC->_L4.d_static_LRBG = kcg_lit_int32(0);
  outC->_L4.q_train_length_corr = kcg_true;
  outC->_L4.v_static = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L2[idx].valid = kcg_true;
    outC->_L2[idx].d_static_abs = kcg_lit_int32(0);
    outC->_L2[idx].d_static_LRBG = kcg_lit_int32(0);
    outC->_L2[idx].q_train_length_corr = kcg_true;
    outC->_L2[idx].v_static = kcg_lit_int32(0);
  }
  outC->_L1 = kcg_lit_int32(0);
  outC->_L1_Abs_1_int32 = kcg_true;
  outC->_L2_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L3_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L5_Abs_1_int32 = kcg_lit_int32(0);
  outC->_L8_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Input_Abs_1_int32 = kcg_lit_int32(0);
  outC->A_Output_Abs_1_int32 = kcg_lit_int32(0);
  outC->relevant_section = kcg_lit_int32(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindStartOfNewSpeedProfileAbs_LOOP_reset_TA_Lib_internal(
  outC_FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

