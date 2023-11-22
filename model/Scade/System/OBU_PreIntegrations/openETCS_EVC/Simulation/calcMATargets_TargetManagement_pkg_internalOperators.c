/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcMATargets_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::calcMATargets/ */
void calcMATargets_TargetManagement_pkg_internalOperators(
  /* MA_section/ */
  MA_section_real_T_TargetManagement_types *MA_section,
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC)
{
  outC->_L98 = invalid_TargetManagement_types;
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L95, MA_section);
  outC->_L96 = outC->_L95.valid;
  outC->_L24 = SvL_TargetManagement_types;
  /* _L92= */
  if (outC->_L96) {
    outC->_L92 = outC->_L24;
  }
  else {
    outC->_L92 = outC->_L98;
  }
  outC->_L33 = EoA_TargetManagement_types;
  /* _L91= */
  if (outC->_L96) {
    outC->_L91 = outC->_L33;
  }
  else {
    outC->_L91 = outC->_L98;
  }
  outC->_L74 = LoA_TargetManagement_types;
  /* _L90= */
  if (outC->_L96) {
    outC->_L90 = outC->_L74;
  }
  else {
    outC->_L90 = outC->_L98;
  }
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L79, MA_section);
  outC->_L80 = outC->_L79.EOA.Location;
  outC->_L85 = outC->_L79.DangerPoint;
  outC->_L82 = outC->_L79.DP_valid;
  /* _L83= */
  if (outC->_L82) {
    outC->_L83 = outC->_L85;
  }
  else {
    outC->_L83 = outC->_L80;
  }
  outC->_L86 = outC->_L79.Overlap;
  outC->_L84 = outC->_L79.OL_valid;
  /* _L88= */
  if (outC->_L84) {
    outC->_L88 = outC->_L86;
  }
  else {
    outC->_L88 = outC->_L83;
  }
  outC->_L81 = outC->_L79.EOA.TargetSpeed;
  outC->MA_TargetSpeed = outC->_L81;
  outC->MA_TargetLocation = outC->_L80;
  outC->_L78 = outC->MA_TargetLocation;
  outC->_L77 = outC->MA_TargetSpeed;
  outC->_L73.targetType = outC->_L90;
  outC->_L73.distance = outC->_L78;
  outC->_L73.speed = outC->_L77;
  outC->_L71 = outC->MA_TargetLocation;
  outC->_L70 = outC->MA_TargetSpeed;
  outC->_L69 = outC->MA_TargetSpeed;
  outC->_L68 = outC->MA_TargetSpeed;
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L66,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  outC->_L35.targetType = outC->_L91;
  outC->_L35.distance = outC->_L71;
  outC->_L35.speed = outC->_L70;
  outC->_L63 = kcg_lit_float32(0.0);
  outC->_L62 = outC->_L68 > outC->_L63;
  /* _L64= */
  if (outC->_L62) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L64, &outC->_L66);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L64, &outC->_L35);
  }
  outC->_L22.targetType = outC->_L92;
  outC->_L22.distance = outC->_L88;
  outC->_L22.speed = outC->_L69;
  /* _L64= */
  if (outC->_L62) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L65, &outC->_L73);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L65, &outC->_L22);
  }
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->SvL_LoA_Target,
    &outC->_L65);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->EOA_Target, &outC->_L64);
}

#ifndef KCG_USER_DEFINED_INIT
void calcMATargets_init_TargetManagement_pkg_internalOperators(
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC)
{
  outC->_L98 = EoA_TargetManagement_types;
  outC->_L95.valid = kcg_true;
  outC->_L95.v_main = kcg_lit_float32(0.0);
  outC->_L95.EOA.Location = kcg_lit_float32(0.0);
  outC->_L95.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L95.DP_valid = kcg_true;
  outC->_L95.DangerPoint = kcg_lit_float32(0.0);
  outC->_L95.OL_valid = kcg_true;
  outC->_L95.Overlap = kcg_lit_float32(0.0);
  outC->_L95.q_calculate_release = kcg_true;
  outC->_L95.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L95.level = MA_L1_TrackAtlasTypes;
  outC->_L96 = kcg_true;
  outC->_L92 = EoA_TargetManagement_types;
  outC->_L91 = EoA_TargetManagement_types;
  outC->_L90 = EoA_TargetManagement_types;
  outC->_L88 = kcg_lit_float32(0.0);
  outC->_L86 = kcg_lit_float32(0.0);
  outC->_L85 = kcg_lit_float32(0.0);
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_lit_float32(0.0);
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_lit_float32(0.0);
  outC->_L80 = kcg_lit_float32(0.0);
  outC->_L79.valid = kcg_true;
  outC->_L79.v_main = kcg_lit_float32(0.0);
  outC->_L79.EOA.Location = kcg_lit_float32(0.0);
  outC->_L79.EOA.TargetSpeed = kcg_lit_float32(0.0);
  outC->_L79.DP_valid = kcg_true;
  outC->_L79.DangerPoint = kcg_lit_float32(0.0);
  outC->_L79.OL_valid = kcg_true;
  outC->_L79.Overlap = kcg_lit_float32(0.0);
  outC->_L79.q_calculate_release = kcg_true;
  outC->_L79.ReleaseSpeed = kcg_lit_float32(0.0);
  outC->_L79.level = MA_L1_TrackAtlasTypes;
  outC->_L77 = kcg_lit_float32(0.0);
  outC->_L78 = kcg_lit_float32(0.0);
  outC->_L74 = EoA_TargetManagement_types;
  outC->_L73.targetType = EoA_TargetManagement_types;
  outC->_L73.distance = kcg_lit_float32(0.0);
  outC->_L73.speed = kcg_lit_float32(0.0);
  outC->_L71 = kcg_lit_float32(0.0);
  outC->_L70 = kcg_lit_float32(0.0);
  outC->_L69 = kcg_lit_float32(0.0);
  outC->_L68 = kcg_lit_float32(0.0);
  outC->_L66.targetType = EoA_TargetManagement_types;
  outC->_L66.distance = kcg_lit_float32(0.0);
  outC->_L66.speed = kcg_lit_float32(0.0);
  outC->_L65.targetType = EoA_TargetManagement_types;
  outC->_L65.distance = kcg_lit_float32(0.0);
  outC->_L65.speed = kcg_lit_float32(0.0);
  outC->_L64.targetType = EoA_TargetManagement_types;
  outC->_L64.distance = kcg_lit_float32(0.0);
  outC->_L64.speed = kcg_lit_float32(0.0);
  outC->_L63 = kcg_lit_float32(0.0);
  outC->_L62 = kcg_true;
  outC->_L33 = EoA_TargetManagement_types;
  outC->_L35.targetType = EoA_TargetManagement_types;
  outC->_L35.distance = kcg_lit_float32(0.0);
  outC->_L35.speed = kcg_lit_float32(0.0);
  outC->_L24 = EoA_TargetManagement_types;
  outC->_L22.targetType = EoA_TargetManagement_types;
  outC->_L22.distance = kcg_lit_float32(0.0);
  outC->_L22.speed = kcg_lit_float32(0.0);
  outC->MA_TargetSpeed = kcg_lit_float32(0.0);
  outC->MA_TargetLocation = kcg_lit_float32(0.0);
  outC->SvL_LoA_Target.targetType = EoA_TargetManagement_types;
  outC->SvL_LoA_Target.distance = kcg_lit_float32(0.0);
  outC->SvL_LoA_Target.speed = kcg_lit_float32(0.0);
  outC->EOA_Target.targetType = EoA_TargetManagement_types;
  outC->EOA_Target.distance = kcg_lit_float32(0.0);
  outC->EOA_Target.speed = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calcMATargets_reset_TargetManagement_pkg_internalOperators(
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcMATargets_TargetManagement_pkg_internalOperators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

