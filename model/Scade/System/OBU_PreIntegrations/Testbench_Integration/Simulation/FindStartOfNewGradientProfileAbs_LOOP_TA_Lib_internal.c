/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP/ */
void FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal(
  /* i/ */
  kcg_int64 i,
  /* Acc/ */
  kcg_int64 Acc,
  /* distance_in/ */
  L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* Profile_in/ */
  GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal *outC)
{
  static kcg_int64 noname;

  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L3 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, Profile_in);
  if ((kcg_lit_int64(0) <= outC->_L3) & (outC->_L3 < kcg_lit_int64(50))) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L4, &outC->_L2[outC->_L3]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L4,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L26 = outC->_L4.Gradient;
  outC->A_Input_Abs_1_int64 = outC->_L26;
  outC->_L5_Abs_1_int64 = outC->A_Input_Abs_1_int64;
  outC->_L3_Abs_1_int64 = - outC->_L5_Abs_1_int64;
  outC->_L1_Abs_1_int64 = outC->_L8_Abs_1_int64 <= outC->_L5_Abs_1_int64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int64) {
    outC->_L2_Abs_1_int64 = outC->_L5_Abs_1_int64;
  }
  else {
    outC->_L2_Abs_1_int64 = outC->_L3_Abs_1_int64;
  }
  outC->A_Output_Abs_1_int64 = outC->_L2_Abs_1_int64;
  outC->_L27 = kcg_true;
  outC->_L24 = kcg_lit_int64(-1);
  outC->_L23 = kcg_lit_int64(0);
  /* _L21= */
  if (outC->_L27) {
    outC->_L21 = outC->_L23;
  }
  else {
    outC->_L21 = outC->_L24;
  }
  outC->_L7 = i;
  outC->_L25 = outC->_L7 + outC->_L21;
  outC->_L22 = kcg_lit_int64(255);
  outC->_L20 = outC->A_Output_Abs_1_int64;
  outC->_L19 = outC->_L20 != outC->_L22;
  outC->_L1 = distance_in;
  outC->_L5 = outC->_L4.Loc_Absolute;
  outC->_L6 = outC->_L5 < outC->_L1;
  outC->_L12 = kcg_lit_int64(0);
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
void FindStartOfNewGradientProfileAbs_LOOP_init_TA_Lib_internal(
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal *outC)
{
  static kcg_size idx;

  outC->_L27 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_lit_int64(0);
  outC->_L21 = kcg_lit_int64(0);
  outC->_L22 = kcg_lit_int64(0);
  outC->_L23 = kcg_lit_int64(0);
  outC->_L24 = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L26 = kcg_lit_int64(0);
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.Loc_Absolute = kcg_lit_int64(0);
  outC->_L4.Loc_LRBG = kcg_lit_int64(0);
  outC->_L4.Gradient = kcg_lit_int64(0);
  outC->_L4.L_Gradient = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L2[idx].valid = kcg_true;
    outC->_L2[idx].Loc_Absolute = kcg_lit_int64(0);
    outC->_L2[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L2[idx].Gradient = kcg_lit_int64(0);
    outC->_L2[idx].L_Gradient = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->_L1_Abs_1_int64 = kcg_true;
  outC->_L2_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L3_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L5_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Input_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Output_Abs_1_int64 = kcg_lit_int64(0);
  outC->relevant_section = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindStartOfNewGradientProfileAbs_LOOP_reset_TA_Lib_internal(
  outC_FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

