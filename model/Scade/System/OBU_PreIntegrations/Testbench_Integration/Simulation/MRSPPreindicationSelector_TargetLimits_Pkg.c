/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector/ */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* EBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* SBDcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* GUIcurve/ */
  ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* guiCurveEnabled/ */
  kcg_bool guiCurveEnabled,
  /* isEoA/ */
  kcg_bool isEoA,
  /* T/ */
  T_trac_t_TargetLimits_Pkg *T,
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static MRSP_internal_section_T_TargetManagement_types acc;
  static kcg_size idx4;
  static kcg_int64 noname;

  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_false;
  outC->_L39.Loc_Abs = outC->_L41;
  outC->_L39.MRS = outC->_L41;
  outC->_L39.valid = outC->_L40;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L11, MRSP);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L12, EBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L68, SBDcurve);
  outC->_L77 = isEoA;
  /* _L69= */
  if (outC->_L77) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L69, &outC->_L68);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L69, &outC->_L12);
  }
  /* _L18/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L18[idx], &outC->_L69);
  }
  outC->_L15 = guiCurveEnabled;
  /* _L26/ */
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L26[idx1] = outC->_L15;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&outC->_L16, GUIcurve);
  /* _L27/ */
  for (idx2 = 0; idx2 < 110; idx2++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      &outC->_L27[idx2],
      &outC->_L16);
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L76, T);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L17, T);
  outC->_L74 = outC->_L17.bs1;
  outC->_L83 = kcg_lit_float64(0.0);
  outC->_L73 = kcg_lit_float64(0.0);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L81, T);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L70, &outC->_L81);
  if (kcg_true) {
    outC->_L70.berem = outC->_L73;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L71, &outC->_L70);
  if (kcg_true) {
    outC->_L71.Traction = outC->_L83;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L72, &outC->_L71);
  if (kcg_true) {
    outC->_L72.bs2 = outC->_L74;
  }
  /* _L75= */
  if (outC->_L77) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L75, &outC->_L72);
  }
  else {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L75, &outC->_L76);
  }
  /* _L28/ */
  for (idx3 = 0; idx3 < 110; idx3++) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&outC->_L28[idx3], &outC->_L75);
  }
  outC->_L4 = kcg_true;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->_L1,
    &outC->_L39);
  /* _L3= */
  if (outC->_L4) {
    /* _L3= */
    for (idx4 = 0; idx4 < 110; idx4++) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &outC->_L1);
      /* _L3=(TargetLimits_Pkg::MRSPPreindicationIterator#1)/ */
      MRSPPreindicationIterator_TargetLimits_Pkg(
        /* _L3= */(kcg_int64) idx4,
        &acc,
        &outC->_L11[idx4],
        &outC->_L18[idx4],
        outC->_L26[idx4],
        &outC->_L27[idx4],
        &outC->_L28[idx4],
        &outC->Context_MRSPPreindicationIterator_1[idx4]);
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(
        &outC->_L1,
        &outC->Context_MRSPPreindicationIterator_1[idx4].MRSP_preindication_next);
      outC->_L3 = /* _L3= */(kcg_int64) (idx4 + 1);
      /* _L3= */
      if (!outC->Context_MRSPPreindicationIterator_1[idx4].goOn) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int64(0);
  }
  outC->_L10 = outC->_L1.valid;
  outC->valid = outC->_L10;
  outC->_L8 = outC->_L1.Loc_Abs;
  outC->_L9 = outC->_L1.MRS;
  outC->_L84 = T_preindication_SDM_Types_Pkg;
  outC->_L85 = outC->_L84 * outC->_L9;
  outC->_L86 = outC->_L85 + outC->_L8;
  outC->D_I_V_MRSP = outC->_L86;
  outC->D_preindication = outC->_L8;
  noname = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void MRSPPreindicationSelector_init_TargetLimits_Pkg(
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;

  outC->_L86 = kcg_lit_float64(0.0);
  outC->_L84 = kcg_lit_float64(0.0);
  outC->_L85 = kcg_lit_float64(0.0);
  outC->_L83 = kcg_lit_float64(0.0);
  outC->_L81.Traction = kcg_lit_float64(0.0);
  outC->_L81.berem = kcg_lit_float64(0.0);
  outC->_L81.bs = kcg_lit_float64(0.0);
  outC->_L81.bs1 = kcg_lit_float64(0.0);
  outC->_L81.bs2 = kcg_lit_float64(0.0);
  outC->_L81.inhComp = kcg_true;
  outC->_L81.indication = kcg_lit_float64(0.0);
  outC->_L77 = kcg_true;
  outC->_L76.Traction = kcg_lit_float64(0.0);
  outC->_L76.berem = kcg_lit_float64(0.0);
  outC->_L76.bs = kcg_lit_float64(0.0);
  outC->_L76.bs1 = kcg_lit_float64(0.0);
  outC->_L76.bs2 = kcg_lit_float64(0.0);
  outC->_L76.inhComp = kcg_true;
  outC->_L76.indication = kcg_lit_float64(0.0);
  outC->_L75.Traction = kcg_lit_float64(0.0);
  outC->_L75.berem = kcg_lit_float64(0.0);
  outC->_L75.bs = kcg_lit_float64(0.0);
  outC->_L75.bs1 = kcg_lit_float64(0.0);
  outC->_L75.bs2 = kcg_lit_float64(0.0);
  outC->_L75.inhComp = kcg_true;
  outC->_L75.indication = kcg_lit_float64(0.0);
  outC->_L74 = kcg_lit_float64(0.0);
  outC->_L73 = kcg_lit_float64(0.0);
  outC->_L72.Traction = kcg_lit_float64(0.0);
  outC->_L72.berem = kcg_lit_float64(0.0);
  outC->_L72.bs = kcg_lit_float64(0.0);
  outC->_L72.bs1 = kcg_lit_float64(0.0);
  outC->_L72.bs2 = kcg_lit_float64(0.0);
  outC->_L72.inhComp = kcg_true;
  outC->_L72.indication = kcg_lit_float64(0.0);
  outC->_L71.Traction = kcg_lit_float64(0.0);
  outC->_L71.berem = kcg_lit_float64(0.0);
  outC->_L71.bs = kcg_lit_float64(0.0);
  outC->_L71.bs1 = kcg_lit_float64(0.0);
  outC->_L71.bs2 = kcg_lit_float64(0.0);
  outC->_L71.inhComp = kcg_true;
  outC->_L71.indication = kcg_lit_float64(0.0);
  outC->_L70.Traction = kcg_lit_float64(0.0);
  outC->_L70.berem = kcg_lit_float64(0.0);
  outC->_L70.bs = kcg_lit_float64(0.0);
  outC->_L70.bs1 = kcg_lit_float64(0.0);
  outC->_L70.bs2 = kcg_lit_float64(0.0);
  outC->_L70.inhComp = kcg_true;
  outC->_L70.indication = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 114; idx1++) {
    outC->_L69.distances[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 114; idx2++) {
    outC->_L69.speeds[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 114; idx3++) {
    outC->_L69.accelerations[idx3] = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 114; idx4++) {
    outC->_L69.valid[idx4] = kcg_true;
  }
  for (idx5 = 0; idx5 < 114; idx5++) {
    outC->_L68.distances[idx5] = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 114; idx6++) {
    outC->_L68.speeds[idx6] = kcg_lit_float64(0.0);
  }
  for (idx7 = 0; idx7 < 114; idx7++) {
    outC->_L68.accelerations[idx7] = kcg_lit_float64(0.0);
  }
  for (idx8 = 0; idx8 < 114; idx8++) {
    outC->_L68.valid[idx8] = kcg_true;
  }
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_true;
  outC->_L39.Loc_Abs = kcg_lit_float64(0.0);
  outC->_L39.MRS = kcg_lit_float64(0.0);
  outC->_L39.valid = kcg_true;
  for (idx9 = 0; idx9 < 110; idx9++) {
    outC->_L28[idx9].Traction = kcg_lit_float64(0.0);
    outC->_L28[idx9].berem = kcg_lit_float64(0.0);
    outC->_L28[idx9].bs = kcg_lit_float64(0.0);
    outC->_L28[idx9].bs1 = kcg_lit_float64(0.0);
    outC->_L28[idx9].bs2 = kcg_lit_float64(0.0);
    outC->_L28[idx9].inhComp = kcg_true;
    outC->_L28[idx9].indication = kcg_lit_float64(0.0);
  }
  for (idx14 = 0; idx14 < 110; idx14++) {
    for (idx10 = 0; idx10 < 114; idx10++) {
      outC->_L27[idx14].distances[idx10] = kcg_lit_float64(0.0);
    }
    for (idx11 = 0; idx11 < 114; idx11++) {
      outC->_L27[idx14].speeds[idx11] = kcg_lit_float64(0.0);
    }
    for (idx12 = 0; idx12 < 114; idx12++) {
      outC->_L27[idx14].accelerations[idx12] = kcg_lit_float64(0.0);
    }
    for (idx13 = 0; idx13 < 114; idx13++) {
      outC->_L27[idx14].valid[idx13] = kcg_true;
    }
  }
  for (idx15 = 0; idx15 < 110; idx15++) {
    outC->_L26[idx15] = kcg_true;
  }
  for (idx20 = 0; idx20 < 110; idx20++) {
    for (idx16 = 0; idx16 < 114; idx16++) {
      outC->_L18[idx20].distances[idx16] = kcg_lit_float64(0.0);
    }
    for (idx17 = 0; idx17 < 114; idx17++) {
      outC->_L18[idx20].speeds[idx17] = kcg_lit_float64(0.0);
    }
    for (idx18 = 0; idx18 < 114; idx18++) {
      outC->_L18[idx20].accelerations[idx18] = kcg_lit_float64(0.0);
    }
    for (idx19 = 0; idx19 < 114; idx19++) {
      outC->_L18[idx20].valid[idx19] = kcg_true;
    }
  }
  outC->_L17.Traction = kcg_lit_float64(0.0);
  outC->_L17.berem = kcg_lit_float64(0.0);
  outC->_L17.bs = kcg_lit_float64(0.0);
  outC->_L17.bs1 = kcg_lit_float64(0.0);
  outC->_L17.bs2 = kcg_lit_float64(0.0);
  outC->_L17.inhComp = kcg_true;
  outC->_L17.indication = kcg_lit_float64(0.0);
  for (idx21 = 0; idx21 < 114; idx21++) {
    outC->_L16.distances[idx21] = kcg_lit_float64(0.0);
  }
  for (idx22 = 0; idx22 < 114; idx22++) {
    outC->_L16.speeds[idx22] = kcg_lit_float64(0.0);
  }
  for (idx23 = 0; idx23 < 114; idx23++) {
    outC->_L16.accelerations[idx23] = kcg_lit_float64(0.0);
  }
  for (idx24 = 0; idx24 < 114; idx24++) {
    outC->_L16.valid[idx24] = kcg_true;
  }
  outC->_L15 = kcg_true;
  for (idx25 = 0; idx25 < 114; idx25++) {
    outC->_L12.distances[idx25] = kcg_lit_float64(0.0);
  }
  for (idx26 = 0; idx26 < 114; idx26++) {
    outC->_L12.speeds[idx26] = kcg_lit_float64(0.0);
  }
  for (idx27 = 0; idx27 < 114; idx27++) {
    outC->_L12.accelerations[idx27] = kcg_lit_float64(0.0);
  }
  for (idx28 = 0; idx28 < 114; idx28++) {
    outC->_L12.valid[idx28] = kcg_true;
  }
  for (idx29 = 0; idx29 < 110; idx29++) {
    outC->_L11[idx29].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L11[idx29].MRS = kcg_lit_float64(0.0);
    outC->_L11[idx29].valid = kcg_true;
  }
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L1.Loc_Abs = kcg_lit_float64(0.0);
  outC->_L1.MRS = kcg_lit_float64(0.0);
  outC->_L1.valid = kcg_true;
  outC->valid = kcg_true;
  outC->D_I_V_MRSP = kcg_lit_float64(0.0);
  outC->D_preindication = kcg_lit_float64(0.0);
  for (idx = 0; idx < 110; idx++) {
    /* _L3=(TargetLimits_Pkg::MRSPPreindicationIterator#1)/ */
    MRSPPreindicationIterator_init_TargetLimits_Pkg(
      &outC->Context_MRSPPreindicationIterator_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MRSPPreindicationSelector_reset_TargetLimits_Pkg(
  outC_MRSPPreindicationSelector_TargetLimits_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 110; idx++) {
    /* _L3=(TargetLimits_Pkg::MRSPPreindicationIterator#1)/ */
    MRSPPreindicationIterator_reset_TargetLimits_Pkg(
      &outC->Context_MRSPPreindicationIterator_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

