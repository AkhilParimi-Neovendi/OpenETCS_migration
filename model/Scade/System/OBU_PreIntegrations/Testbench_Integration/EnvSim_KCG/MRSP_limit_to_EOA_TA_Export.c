/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_limit_to_EOA_TA_Export.h"

/* TA_Export::MRSP_limit_to_EOA/ */
void MRSP_limit_to_EOA_TA_Export(
  /* i/ */
  kcg_int64 i,
  /* MRSP/ */
  MRSP_Profile_t_TrackAtlasTypes *MRSP,
  /* EoA/ */
  L_internal_Type_Obu_BasicTypes_Pkg EoA,
  outC_MRSP_limit_to_EOA_TA_Export *outC)
{
  outC->_L1 = i;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L3, MRSP);
  if ((kcg_lit_int64(0) <= outC->_L1) & (outC->_L1 < kcg_lit_int64(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L226, &outC->_L3[outC->_L1]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L226,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  outC->_L4 = EoA;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L231, &outC->_L226);
  if (kcg_true) {
    outC->_L231.Loc_Abs = outC->_L4;
  }
  outC->_L227 = outC->_L226.Loc_Abs;
  outC->_L229 = outC->_L227 > outC->_L4;
  /* _L230= */
  if (outC->_L229) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L230, &outC->_L231);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L230, &outC->_L226);
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->MRSP_section0, &outC->_L230);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L233, &outC->MRSP_section0);
  outC->_L237 = outC->_L233.MRS;
  outC->_L241 = END_OF_SSP_encoding_TA_Export;
  outC->_L238 = END_OF_SSP_TA_Export;
  outC->_L239 = outC->_L238 == outC->_L237;
  outC->_L235 = outC->_L233.Loc_Abs;
  outC->_L236 = outC->_L4 == outC->_L235;
  outC->_L240 = outC->_L236 | outC->_L239;
  /* _L242= */
  if (outC->_L240) {
    outC->_L242 = outC->_L241;
  }
  else {
    outC->_L242 = outC->_L237;
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L244, &outC->MRSP_section0);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L245, &outC->_L244);
  if (kcg_true) {
    outC->_L245.MRS = outC->_L242;
  }
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->MRSP_section1, &outC->_L245);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L257, &outC->MRSP_section1);
  kcg_copy_MRSP_section_t_TrackAtlasTypes(
    &outC->_L255,
    (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  outC->_L253 = END_OF_SSP_encoding_TA_Export;
  outC->_L251 = kcg_lit_int64(1);
  outC->_L248 = i;
  outC->_L250 = outC->_L248 - outC->_L251;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L247, MRSP);
  if ((kcg_lit_int64(0) <= outC->_L250) & (outC->_L250 < kcg_lit_int64(110))) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L249,
      &outC->_L247[outC->_L250]);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(
      &outC->_L249,
      (MRSP_section_t_TrackAtlasTypes *) &DEFAULT_MRSP_section_TA_Export);
  }
  outC->_L252 = outC->_L249.Loc_Abs;
  outC->_L254 = outC->_L252 == outC->_L253;
  /* _L256= */
  if (outC->_L254) {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L256, &outC->_L255);
  }
  else {
    kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->_L256, &outC->_L257);
  }
  outC->_L225 = kcg_true;
  outC->cont = outC->_L225;
  kcg_copy_MRSP_section_t_TrackAtlasTypes(&outC->limited, &outC->_L256);
}

#ifndef KCG_USER_DEFINED_INIT
void MRSP_limit_to_EOA_init_TA_Export(outC_MRSP_limit_to_EOA_TA_Export *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L257.valid = kcg_true;
  outC->_L257.Loc_Abs = kcg_lit_int64(0);
  outC->_L257.Loc_LRBG = kcg_lit_int64(0);
  outC->_L257.MRS = kcg_lit_int64(0);
  outC->_L256.valid = kcg_true;
  outC->_L256.Loc_Abs = kcg_lit_int64(0);
  outC->_L256.Loc_LRBG = kcg_lit_int64(0);
  outC->_L256.MRS = kcg_lit_int64(0);
  outC->_L255.valid = kcg_true;
  outC->_L255.Loc_Abs = kcg_lit_int64(0);
  outC->_L255.Loc_LRBG = kcg_lit_int64(0);
  outC->_L255.MRS = kcg_lit_int64(0);
  outC->_L254 = kcg_true;
  outC->_L253 = kcg_lit_int64(0);
  outC->_L252 = kcg_lit_int64(0);
  outC->_L251 = kcg_lit_int64(0);
  outC->_L250 = kcg_lit_int64(0);
  for (idx = 0; idx < 110; idx++) {
    outC->_L247[idx].valid = kcg_true;
    outC->_L247[idx].Loc_Abs = kcg_lit_int64(0);
    outC->_L247[idx].Loc_LRBG = kcg_lit_int64(0);
    outC->_L247[idx].MRS = kcg_lit_int64(0);
  }
  outC->_L248 = kcg_lit_int64(0);
  outC->_L249.valid = kcg_true;
  outC->_L249.Loc_Abs = kcg_lit_int64(0);
  outC->_L249.Loc_LRBG = kcg_lit_int64(0);
  outC->_L249.MRS = kcg_lit_int64(0);
  outC->_L245.valid = kcg_true;
  outC->_L245.Loc_Abs = kcg_lit_int64(0);
  outC->_L245.Loc_LRBG = kcg_lit_int64(0);
  outC->_L245.MRS = kcg_lit_int64(0);
  outC->_L244.valid = kcg_true;
  outC->_L244.Loc_Abs = kcg_lit_int64(0);
  outC->_L244.Loc_LRBG = kcg_lit_int64(0);
  outC->_L244.MRS = kcg_lit_int64(0);
  outC->_L242 = kcg_lit_int64(0);
  outC->_L241 = kcg_lit_int64(0);
  outC->_L240 = kcg_true;
  outC->_L239 = kcg_true;
  outC->_L238 = kcg_lit_int64(0);
  outC->_L237 = kcg_lit_int64(0);
  outC->_L236 = kcg_true;
  outC->_L235 = kcg_lit_int64(0);
  outC->_L233.valid = kcg_true;
  outC->_L233.Loc_Abs = kcg_lit_int64(0);
  outC->_L233.Loc_LRBG = kcg_lit_int64(0);
  outC->_L233.MRS = kcg_lit_int64(0);
  outC->_L231.valid = kcg_true;
  outC->_L231.Loc_Abs = kcg_lit_int64(0);
  outC->_L231.Loc_LRBG = kcg_lit_int64(0);
  outC->_L231.MRS = kcg_lit_int64(0);
  outC->_L230.valid = kcg_true;
  outC->_L230.Loc_Abs = kcg_lit_int64(0);
  outC->_L230.Loc_LRBG = kcg_lit_int64(0);
  outC->_L230.MRS = kcg_lit_int64(0);
  outC->_L229 = kcg_true;
  outC->_L227 = kcg_lit_int64(0);
  outC->_L226.valid = kcg_true;
  outC->_L226.Loc_Abs = kcg_lit_int64(0);
  outC->_L226.Loc_LRBG = kcg_lit_int64(0);
  outC->_L226.MRS = kcg_lit_int64(0);
  outC->_L225 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L3[idx1].valid = kcg_true;
    outC->_L3[idx1].Loc_Abs = kcg_lit_int64(0);
    outC->_L3[idx1].Loc_LRBG = kcg_lit_int64(0);
    outC->_L3[idx1].MRS = kcg_lit_int64(0);
  }
  outC->_L1 = kcg_lit_int64(0);
  outC->MRSP_section1.valid = kcg_true;
  outC->MRSP_section1.Loc_Abs = kcg_lit_int64(0);
  outC->MRSP_section1.Loc_LRBG = kcg_lit_int64(0);
  outC->MRSP_section1.MRS = kcg_lit_int64(0);
  outC->MRSP_section0.valid = kcg_true;
  outC->MRSP_section0.Loc_Abs = kcg_lit_int64(0);
  outC->MRSP_section0.Loc_LRBG = kcg_lit_int64(0);
  outC->MRSP_section0.MRS = kcg_lit_int64(0);
  outC->limited.valid = kcg_true;
  outC->limited.Loc_Abs = kcg_lit_int64(0);
  outC->limited.Loc_LRBG = kcg_lit_int64(0);
  outC->limited.MRS = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MRSP_limit_to_EOA_reset_TA_Export(outC_MRSP_limit_to_EOA_TA_Export *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSP_limit_to_EOA_TA_Export.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

