/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoveMAAbsolute_Loop_new_TA_Lib_internal.h"

/* TA_Lib_internal::MoveMAAbsolute_Loop_new/ */
void MoveMAAbsolute_Loop_new_TA_Lib_internal(
  /* i/ */
  kcg_int32 i,
  /* ProfileIn/ */
  MovementAuthoritySectionlist_t_TrackAtlasTypes *ProfileIn,
  /* pos_LRBG/ */
  L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  outC_MoveMAAbsolute_Loop_new_TA_Lib_internal *outC)
{
  outC->_L256 = pos_LRBG;
  outC->_L1 = i;
  outC->_L255 = kcg_lit_int32(0);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L6,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L6,
      (MovementAuthoritySection_t_TrackAtlasTypes *)
        &DEFAULT_MA_section_TrackAtlasTypes);
  }
  outC->_L143 = outC->_L6.valid;
  /* _L254= */
  if (outC->_L143) {
    outC->_L254 = outC->_L256;
  }
  else {
    outC->_L254 = outC->_L255;
  }
  outC->_L130 = outC->_L6.l_section;
  outC->_L10 = outC->_L130 + outC->_L254;
  kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&outC->_L9, &outC->_L6);
  if (kcg_true) {
    outC->_L9.l_section = outC->_L10;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&outC->_L7, &outC->_L2);
  if ((kcg_lit_int32(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int32(10))) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &outC->_L7[outC->_L1],
      &outC->_L9);
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &outC->ProfileOut,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void MoveMAAbsolute_Loop_new_init_TA_Lib_internal(
  outC_MoveMAAbsolute_Loop_new_TA_Lib_internal *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L256 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->_L255 = kcg_lit_int32(0);
  outC->_L254 = kcg_lit_int32(0);
  outC->_L143 = kcg_true;
  outC->_L130 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.q_endsection = kcg_true;
  outC->_L9.l_section = kcg_lit_int32(0);
  outC->_L9.q_sectiontimer = kcg_true;
  outC->_L9.t_sectiontimer = kcg_lit_int32(0);
  outC->_L9.d_sectiontimerstoploc = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L7[idx].valid = kcg_true;
    outC->_L7[idx].q_endsection = kcg_true;
    outC->_L7[idx].l_section = kcg_lit_int32(0);
    outC->_L7[idx].q_sectiontimer = kcg_true;
    outC->_L7[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L7[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L6.valid = kcg_true;
  outC->_L6.q_endsection = kcg_true;
  outC->_L6.l_section = kcg_lit_int32(0);
  outC->_L6.q_sectiontimer = kcg_true;
  outC->_L6.t_sectiontimer = kcg_lit_int32(0);
  outC->_L6.d_sectiontimerstoploc = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L2[idx1].valid = kcg_true;
    outC->_L2[idx1].q_endsection = kcg_true;
    outC->_L2[idx1].l_section = kcg_lit_int32(0);
    outC->_L2[idx1].q_sectiontimer = kcg_true;
    outC->_L2[idx1].t_sectiontimer = kcg_lit_int32(0);
    outC->_L2[idx1].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->ProfileOut[idx2].valid = kcg_true;
    outC->ProfileOut[idx2].q_endsection = kcg_true;
    outC->ProfileOut[idx2].l_section = kcg_lit_int32(0);
    outC->ProfileOut[idx2].q_sectiontimer = kcg_true;
    outC->ProfileOut[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->ProfileOut[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoveMAAbsolute_Loop_new_reset_TA_Lib_internal(
  outC_MoveMAAbsolute_Loop_new_TA_Lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoveMAAbsolute_Loop_new_TA_Lib_internal.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

