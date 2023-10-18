/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new.h"

/* TA_MA_new::MA_Convert_P15_to_DistanceProfile_loop/ */
void MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new(
  /* i/ */
  kcg_int64 i,
  /* ProfileAccu/ */
  AccuDistanceProfileMA_TA_MA_new *ProfileAccu,
  /* SectionsIn/ */
  P015_OBU_sectionlist_enum_T_TM *SectionsIn,
  /* n_iter/ */
  N_ITER n_iter,
  /* q_scale/ */
  Q_SCALE q_scale,
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC)
{
  kcg_copy_AccuDistanceProfileMA_TA_MA_new(&outC->_L125, ProfileAccu);
  outC->_L286 = outC->_L125.d_endsection;
  outC->_L249 = kcg_lit_int64(0);
  outC->_L261 = kcg_lit_int64(1);
  outC->_L144 = i;
  outC->_L260 = outC->_L144 - outC->_L261;
  kcg_copy_AccuDistanceProfileMA_TA_MA_new(&outC->_L142, ProfileAccu);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L265,
    &outC->_L142.sections);
  if ((kcg_lit_int64(0) <= outC->_L260) & (outC->_L260 < kcg_lit_int64(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L252,
      &outC->_L265[outC->_L260]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L252,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA_new);
  }
  outC->_L256 = outC->_L252.l_section;
  outC->_L139 = q_scale;
  outC->_L134 = i;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&outC->_L121, SectionsIn);
  if ((kcg_lit_int64(0) <= outC->_L134) & (outC->_L134 < kcg_lit_int64(32))) {
    kcg_copy_P015_section_enum_T_TM(&outC->_L227, &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &outC->_L227,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  outC->_L239 = outC->_L227.l_section;
  /* _L241=(TA_Lib_internal::Normalize_Distance_d_internal_t#1)/ */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L239,
    &outC->Context_Normalize_Distance_d_internal_t_1);
  outC->_L241 = outC->Context_Normalize_Distance_d_internal_t_1.d_internal;
  outC->_L257 = outC->_L241 + outC->_L256;
  outC->_L243 = outC->_L227.valid;
  /* section_d= */
  if (outC->_L243) {
    outC->section_d = outC->_L257;
  }
  else {
    outC->section_d = outC->_L249;
  }
  outC->_L282 = outC->section_d;
  outC->_L280 = i;
  outC->_L279 = n_iter;
  outC->_L281 = outC->_L279 == outC->_L280;
  /* _L289= */
  if (outC->_L281) {
    outC->_L289 = outC->_L282;
  }
  else {
    outC->_L289 = outC->_L286;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L285,
    &outC->_L125.sections);
  outC->_L244 = outC->_L227.q_sectiontimer;
  /* _L259=(TM_conversions::CAST_Q_SECTIONTIMER_to_bool#1)/ */
  CAST_Q_SECTIONTIMER_to_bool_TM_conversions(
    outC->_L244,
    &outC->Context_CAST_Q_SECTIONTIMER_to_bool_1);
  outC->_L259 = outC->Context_CAST_Q_SECTIONTIMER_to_bool_1.q_sectiontimer_bool;
  outC->_L264 = outC->_L243 & outC->_L259;
  outC->_L263 = kcg_lit_int64(0);
  outC->_L245 = outC->_L227.t_sectiontimer;
  /* _L262= */
  if (outC->_L243) {
    outC->_L262 = outC->_L245;
  }
  else {
    outC->_L262 = outC->_L263;
  }
  outC->_L255 = outC->_L252.d_sectiontimerstoploc;
  outC->_L240 = outC->_L227.d_sectiontimerstoploc;
  /* _L242=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L240,
    &outC->Context_Normalize_Distance_d_internal_t_2);
  outC->_L242 = outC->Context_Normalize_Distance_d_internal_t_2.d_internal;
  outC->_L258 = outC->_L242 + outC->_L255;
  /* _L248= */
  if (outC->_L243) {
    outC->_L248 = outC->_L258;
  }
  else {
    outC->_L248 = outC->_L249;
  }
  outC->_L238.valid = outC->_L243;
  outC->_L238.q_endsection = outC->_L281;
  outC->_L238.l_section = outC->section_d;
  outC->_L238.q_sectiontimer = outC->_L264;
  outC->_L238.t_sectiontimer = outC->_L262;
  outC->_L238.d_sectiontimerstoploc = outC->_L248;
  outC->_L131 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L133,
    &outC->_L285);
  if ((kcg_lit_int64(0) <= outC->_L131) & (outC->_L131 < kcg_lit_int64(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L238);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->_L275.sections,
    &outC->_L133);
  outC->_L275.d_endsection = outC->_L289;
  kcg_copy_AccuDistanceProfileMA_TA_MA_new(&outC->SpeedtProfile, &outC->_L275);
}

#ifndef KCG_USER_DEFINED_INIT
void MA_Convert_P15_to_DistanceProfile_loop_init_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L289 = kcg_lit_int64(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L285[idx].valid = kcg_true;
    outC->_L285[idx].q_endsection = kcg_true;
    outC->_L285[idx].l_section = kcg_lit_int64(0);
    outC->_L285[idx].q_sectiontimer = kcg_true;
    outC->_L285[idx].t_sectiontimer = kcg_lit_int64(0);
    outC->_L285[idx].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L286 = kcg_lit_int64(0);
  outC->_L282 = kcg_lit_int64(0);
  outC->_L281 = kcg_true;
  outC->_L280 = kcg_lit_int64(0);
  outC->_L279 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L275.sections[idx1].valid = kcg_true;
    outC->_L275.sections[idx1].q_endsection = kcg_true;
    outC->_L275.sections[idx1].l_section = kcg_lit_int64(0);
    outC->_L275.sections[idx1].q_sectiontimer = kcg_true;
    outC->_L275.sections[idx1].t_sectiontimer = kcg_lit_int64(0);
    outC->_L275.sections[idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L275.d_endsection = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L265[idx2].valid = kcg_true;
    outC->_L265[idx2].q_endsection = kcg_true;
    outC->_L265[idx2].l_section = kcg_lit_int64(0);
    outC->_L265[idx2].q_sectiontimer = kcg_true;
    outC->_L265[idx2].t_sectiontimer = kcg_lit_int64(0);
    outC->_L265[idx2].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L264 = kcg_true;
  outC->_L263 = kcg_lit_int64(0);
  outC->_L262 = kcg_lit_int64(0);
  outC->_L261 = kcg_lit_int64(0);
  outC->_L260 = kcg_lit_int64(0);
  outC->_L259 = kcg_true;
  outC->_L258 = kcg_lit_int64(0);
  outC->_L257 = kcg_lit_int64(0);
  outC->_L255 = kcg_lit_int64(0);
  outC->_L256 = kcg_lit_int64(0);
  outC->_L252.valid = kcg_true;
  outC->_L252.q_endsection = kcg_true;
  outC->_L252.l_section = kcg_lit_int64(0);
  outC->_L252.q_sectiontimer = kcg_true;
  outC->_L252.t_sectiontimer = kcg_lit_int64(0);
  outC->_L252.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L249 = kcg_lit_int64(0);
  outC->_L248 = kcg_lit_int64(0);
  outC->_L245 = kcg_lit_int64(0);
  outC->_L244 = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L243 = kcg_true;
  outC->_L242 = kcg_lit_int64(0);
  outC->_L241 = kcg_lit_int64(0);
  outC->_L240 = kcg_lit_int64(0);
  outC->_L239 = kcg_lit_int64(0);
  outC->_L238.valid = kcg_true;
  outC->_L238.q_endsection = kcg_true;
  outC->_L238.l_section = kcg_lit_int64(0);
  outC->_L238.q_sectiontimer = kcg_true;
  outC->_L238.t_sectiontimer = kcg_lit_int64(0);
  outC->_L238.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L227.valid = kcg_true;
  outC->_L227.l_section = kcg_lit_int64(0);
  outC->_L227.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L227.t_sectiontimer = kcg_lit_int64(0);
  outC->_L227.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L144 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L142.sections[idx3].valid = kcg_true;
    outC->_L142.sections[idx3].q_endsection = kcg_true;
    outC->_L142.sections[idx3].l_section = kcg_lit_int64(0);
    outC->_L142.sections[idx3].q_sectiontimer = kcg_true;
    outC->_L142.sections[idx3].t_sectiontimer = kcg_lit_int64(0);
    outC->_L142.sections[idx3].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L142.d_endsection = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 32; idx4++) {
    outC->_L121[idx4].valid = kcg_true;
    outC->_L121[idx4].l_section = kcg_lit_int64(0);
    outC->_L121[idx4].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L121[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L121[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->_L125.sections[idx5].valid = kcg_true;
    outC->_L125.sections[idx5].q_endsection = kcg_true;
    outC->_L125.sections[idx5].l_section = kcg_lit_int64(0);
    outC->_L125.sections[idx5].q_sectiontimer = kcg_true;
    outC->_L125.sections[idx5].t_sectiontimer = kcg_lit_int64(0);
    outC->_L125.sections[idx5].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L125.d_endsection = kcg_lit_int64(0);
  outC->_L131 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L133[idx6].valid = kcg_true;
    outC->_L133[idx6].q_endsection = kcg_true;
    outC->_L133[idx6].l_section = kcg_lit_int64(0);
    outC->_L133[idx6].q_sectiontimer = kcg_true;
    outC->_L133[idx6].t_sectiontimer = kcg_lit_int64(0);
    outC->_L133[idx6].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L134 = kcg_lit_int64(0);
  outC->_L139 = Q_SCALE_10_cm_scale;
  outC->section_d = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 10; idx7++) {
    outC->SpeedtProfile.sections[idx7].valid = kcg_true;
    outC->SpeedtProfile.sections[idx7].q_endsection = kcg_true;
    outC->SpeedtProfile.sections[idx7].l_section = kcg_lit_int64(0);
    outC->SpeedtProfile.sections[idx7].q_sectiontimer = kcg_true;
    outC->SpeedtProfile.sections[idx7].t_sectiontimer = kcg_lit_int64(0);
    outC->SpeedtProfile.sections[idx7].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->SpeedtProfile.d_endsection = kcg_lit_int64(0);
  /* _L242=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_init_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_2);
  /* _L259=(TM_conversions::CAST_Q_SECTIONTIMER_to_bool#1)/ */
  CAST_Q_SECTIONTIMER_to_bool_init_TM_conversions(
    &outC->Context_CAST_Q_SECTIONTIMER_to_bool_1);
  /* _L241=(TA_Lib_internal::Normalize_Distance_d_internal_t#1)/ */
  Normalize_Distance_d_internal_t_init_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MA_Convert_P15_to_DistanceProfile_loop_reset_TA_MA_new(
  outC_MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new *outC)
{
  /* _L242=(TA_Lib_internal::Normalize_Distance_d_internal_t#2)/ */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_2);
  /* _L259=(TM_conversions::CAST_Q_SECTIONTIMER_to_bool#1)/ */
  CAST_Q_SECTIONTIMER_to_bool_reset_TM_conversions(
    &outC->Context_CAST_Q_SECTIONTIMER_to_bool_1);
  /* _L241=(TA_Lib_internal::Normalize_Distance_d_internal_t#1)/ */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(
    &outC->Context_Normalize_Distance_d_internal_t_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MA_Convert_P15_to_DistanceProfile_loop_TA_MA_new.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

