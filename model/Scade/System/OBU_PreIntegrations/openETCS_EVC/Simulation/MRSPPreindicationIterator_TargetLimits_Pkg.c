/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationIterator/ */
void MRSPPreindicationIterator_TargetLimits_Pkg(
  /* i/ */
  kcg_int32 i,
  /* MRSP_preindication_mix/ */
  MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_mix,
  /* MRSP_sect_n/ */
  MRSP_internal_section_T_TargetManagement_types *MRSP_sect_n,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC)
{
  L_internal_real_Type_SDM_Types_Pkg op_call;
  kcg_bool _1_op_call;

  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->_L7,
    MRSP_sect_n);
  outC->_L6 = outC->_L7.valid;
  outC->every = outC->_L6;
  outC->_L5 = outC->_L7.MRS;
  outC->V_MRSPn = outC->_L5;
  outC->_L39 = outC->V_MRSPn;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L84, EBDcurve);
  outC->_L87 = guiCurveEnabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L88, GUIcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L89, T);
  if (outC->every) {
    /* _L90=(TargetLimits_Pkg::d_I_MRSP#1)/ */
    d_I_MRSP_TargetLimits_Pkg(
      outC->_L39,
      &outC->_L84,
      outC->_L87,
      &outC->_L88,
      &outC->_L89,
      &outC->Context_d_I_MRSP_1);
    _1_op_call = outC->Context_d_I_MRSP_1.valid;
    op_call = outC->Context_d_I_MRSP_1.D_I;
  }
  outC->_L4 = outC->_L7.Loc_Abs;
  outC->D_start = outC->_L4;
  outC->_L47 = outC->D_start;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->_L8,
    MRSP_preindication_mix);
  outC->_L19 = outC->_L8.Loc_Abs;
  outC->D_I_1 = outC->_L19;
  outC->_L46 = outC->D_I_1;
  outC->_L45 = outC->_L46 < outC->_L47;
  if (outC->every) {
    outC->_L90 = _1_op_call;
  }
  else {
    outC->_L90 = kcg_false;
  }
  outC->currentlyValid = outC->_L90;
  outC->_L124 = outC->currentlyValid;
  outC->_L123 = !outC->_L124;
  outC->_L125 = outC->_L123 | outC->_L45;
  outC->_L21 = outC->_L8.valid;
  outC->lastIsValid = outC->_L21;
  outC->_L43 = outC->lastIsValid;
  outC->_L44 = outC->_L43 & outC->_L125;
  outC->simpleCaseFulfilled = outC->_L44;
  outC->_L59 = outC->simpleCaseFulfilled;
  outC->_L79 = outC->currentlyValid;
  outC->_L83 = !outC->_L79;
  outC->_L73 = outC->D_start;
  if (outC->every) {
    outC->_L22 = op_call;
  }
  else {
    outC->_L22 = kcg_lit_float32(0.0);
  }
  outC->D_I = outC->_L22;
  outC->_L71 = outC->D_I;
  outC->_L72 = outC->_L71 < outC->_L73;
  outC->_L42 = outC->lastIsValid;
  outC->_L70 = !outC->_L45;
  outC->_L33 = outC->_L70 & outC->_L42 & outC->_L72;
  outC->cornerCaseFulfilled = outC->_L33;
  outC->_L63 = outC->cornerCaseFulfilled;
  outC->_L108 = MRSPMaxSections_TrackAtlasTypes - kcg_lit_int32(1);
  outC->_L107 = i;
  outC->_L110 = outC->_L107 == outC->_L108;
  outC->_L102 = outC->currentlyValid;
  outC->_L111 = outC->_L102 & outC->_L110;
  outC->finalCaseFulfilled = outC->_L111;
  outC->_L98 = outC->finalCaseFulfilled;
  outC->_L62 = outC->_L98 | outC->_L63 | outC->_L83 | outC->_L59;
  outC->finalize = outC->_L62;
  outC->_L118 = outC->finalize;
  outC->_L117 = !outC->_L118;
  outC->_L114 = outC->cornerCaseFulfilled;
  outC->_L115 = outC->finalCaseFulfilled;
  outC->_L116 = outC->_L115 | outC->_L114 | outC->_L117;
  outC->_L113 = outC->cornerCaseFulfilled;
  outC->_L104 = outC->D_I;
  outC->_L53 = outC->D_start;
  /* _L103= */
  if (outC->_L113) {
    outC->_L103 = outC->_L53;
  }
  else {
    outC->_L103 = outC->_L104;
  }
  outC->_L99 = outC->finalCaseFulfilled;
  outC->_L97 = outC->simpleCaseFulfilled;
  outC->_L96 = outC->cornerCaseFulfilled;
  outC->_L82 = outC->finalize;
  outC->_L49 = !outC->_L82;
  outC->_L76 = outC->currentlyValid;
  outC->_L78 = outC->_L76 & outC->_L49;
  outC->_L65 = outC->finalize;
  outC->_L57 = outC->D_I;
  outC->_L25 = T_preindication_SDM_Types_Pkg;
  outC->_L20 = outC->_L8.MRS;
  outC->V_MRSPn_1 = outC->_L20;
  outC->_L50 = outC->V_MRSPn_1;
  outC->_L51 = outC->V_MRSPn;
  /* _L35= */
  if (outC->_L116) {
    outC->_L35 = outC->_L51;
  }
  else {
    outC->_L35 = outC->_L50;
  }
  outC->_L26 = outC->_L35 * outC->_L25;
  outC->_L52 = outC->D_I_1;
  /* _L28= */
  if (outC->_L116) {
    outC->_L28 = outC->_L103;
  }
  else {
    outC->_L28 = outC->_L52;
  }
  outC->_L27 = outC->_L28 - outC->_L26;
  /* _L54= */
  if (outC->_L65) {
    outC->_L54 = outC->_L27;
  }
  else {
    outC->_L54 = outC->_L57;
  }
  outC->_L48 = outC->_L97 | outC->_L96 | outC->_L99 | outC->_L76;
  outC->goOn = outC->_L78;
  outC->_L29.Loc_Abs = outC->_L54;
  outC->_L29.MRS = outC->_L35;
  outC->_L29.valid = outC->_L48;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->MRSP_preindication_next,
    &outC->_L29);
}

#ifndef KCG_USER_DEFINED_INIT
void MRSPPreindicationIterator_init_TargetLimits_Pkg(
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L125 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L117 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L116 = kcg_true;
  outC->_L114 = kcg_true;
  outC->_L115 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L108 = kcg_lit_int32(0);
  outC->_L107 = kcg_lit_int32(0);
  outC->_L104 = kcg_lit_float32(0.0);
  outC->_L103 = kcg_lit_float32(0.0);
  outC->_L102 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L96 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L89.Traction = kcg_lit_float32(0.0);
  outC->_L89.berem = kcg_lit_float32(0.0);
  outC->_L89.bs = kcg_lit_float32(0.0);
  outC->_L89.bs1 = kcg_lit_float32(0.0);
  outC->_L89.bs2 = kcg_lit_float32(0.0);
  outC->_L89.inhComp = kcg_true;
  outC->_L89.indication = kcg_lit_float32(0.0);
  for (idx = 0; idx < 114; idx++) {
    outC->_L88.distances[idx] = kcg_lit_float32(0.0);
  }
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L88.speeds[idx1] = kcg_lit_float32(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L88.accelerations[idx2] = kcg_lit_float32(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L88.valid[idx3] = kcg_true;
  }
  outC->_L87 = kcg_true;
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L84.distances[idx4] = kcg_lit_float32(0.0);
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L84.speeds[idx5] = kcg_lit_float32(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L84.accelerations[idx6] = kcg_lit_float32(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L84.valid[idx7] = kcg_true;
  }
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L73 = kcg_lit_float32(0.0);
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_lit_float32(0.0);
  outC->_L70 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L57 = kcg_lit_float32(0.0);
  outC->_L54 = kcg_lit_float32(0.0);
  outC->_L53 = kcg_lit_float32(0.0);
  outC->_L52 = kcg_lit_float32(0.0);
  outC->_L51 = kcg_lit_float32(0.0);
  outC->_L50 = kcg_lit_float32(0.0);
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_lit_float32(0.0);
  outC->_L46 = kcg_lit_float32(0.0);
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L39 = kcg_lit_float32(0.0);
  outC->_L35 = kcg_lit_float32(0.0);
  outC->_L33 = kcg_true;
  outC->_L29.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L29.MRS = kcg_lit_float32(0.0);
  outC->_L29.valid = kcg_true;
  outC->_L28 = kcg_lit_float32(0.0);
  outC->_L27 = kcg_lit_float32(0.0);
  outC->_L26 = kcg_lit_float32(0.0);
  outC->_L25 = kcg_lit_float32(0.0);
  outC->_L22 = kcg_lit_float32(0.0);
  outC->_L19 = kcg_lit_float32(0.0);
  outC->_L20 = kcg_lit_float32(0.0);
  outC->_L21 = kcg_true;
  outC->_L8.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L8.MRS = kcg_lit_float32(0.0);
  outC->_L8.valid = kcg_true;
  outC->_L7.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L7.MRS = kcg_lit_float32(0.0);
  outC->_L7.valid = kcg_true;
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L5 = kcg_lit_float32(0.0);
  outC->_L6 = kcg_true;
  outC->finalCaseFulfilled = kcg_true;
  outC->currentlyValid = kcg_true;
  outC->finalize = kcg_true;
  outC->cornerCaseFulfilled = kcg_true;
  outC->simpleCaseFulfilled = kcg_true;
  outC->D_start = kcg_lit_float32(0.0);
  outC->lastIsValid = kcg_true;
  outC->D_I_1 = kcg_lit_float32(0.0);
  outC->V_MRSPn_1 = kcg_lit_float32(0.0);
  outC->V_MRSPn = kcg_lit_float32(0.0);
  outC->D_I = kcg_lit_float32(0.0);
  outC->every = kcg_true;
  outC->MRSP_preindication_next.Loc_Abs = kcg_lit_float32(0.0);
  outC->MRSP_preindication_next.MRS = kcg_lit_float32(0.0);
  outC->MRSP_preindication_next.valid = kcg_true;
  outC->goOn = kcg_true;
  /* _L90=(TargetLimits_Pkg::d_I_MRSP#1)/ */
  d_I_MRSP_init_TargetLimits_Pkg(&outC->Context_d_I_MRSP_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MRSPPreindicationIterator_reset_TargetLimits_Pkg(
  outC_MRSPPreindicationIterator_TargetLimits_Pkg *outC)
{
  /* _L90=(TargetLimits_Pkg::d_I_MRSP#1)/ */
  d_I_MRSP_reset_TargetLimits_Pkg(&outC->Context_d_I_MRSP_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSPPreindicationIterator_TargetLimits_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

