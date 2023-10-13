/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetManagement_TargetManagement_pkg.h"

/* TargetManagement_pkg::TargetManagement/ */
void TargetManagement_TargetManagement_pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* MRSP_updated/ */
  kcg_bool MRSP_updated,
  /* MA/ */
  MA_section_real_T_TargetManagement_types *MA,
  /* MA_updated/ */
  kcg_bool MA_updated,
  /* trainLocations/ */
  TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  static Target_real_T_TargetManagement_types tmp;
  static Target_real_T_TargetManagement_types tmp1;
  static extractTargetsMRSPACC_TargetManagement_pkg op_call;
  static Target_real_T_TargetManagement_types _2_op_call;
  static Target_real_T_TargetManagement_types _3_op_call;
  /* MRSPTargetList/ */
  static Target_list_MRSP_real_T_TargetManagement_types last_MRSPTargetList;

  outC->_L3 = MRSP_updated;
  outC->every1 = outC->_L3;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L1, MRSP);
  if (outC->every1) {
    /* _L2=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSP#1)/ */
    extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
      &outC->_L1,
      &outC->Context_extractTargetsFromMRSP_1);
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(
      &op_call,
      &outC->Context_extractTargetsFromMRSP_1.TargetsOfMRSP);
  }
  outC->_L15 = MA_updated;
  outC->every = outC->_L15;
  kcg_copy_MA_section_real_T_TargetManagement_types(&outC->_L97, MA);
  if (outC->every) {
    /* _L12=(TargetManagement_pkg::internalOperators::calcMATargets#1)/ */
    calcMATargets_TargetManagement_pkg_internalOperators(
      &outC->_L97,
      &outC->Context_calcMATargets_1);
    kcg_copy_Target_real_T_TargetManagement_types(
      &_3_op_call,
      &outC->Context_calcMATargets_1.EOA_Target);
    kcg_copy_Target_real_T_TargetManagement_types(
      &_2_op_call,
      &outC->Context_calcMATargets_1.SvL_LoA_Target);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &last_MRSPTargetList,
    &outC->MRSPTargetList);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L14,
    (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L107,
    &last_MRSPTargetList);
  outC->_L99 = kcg_lit_int64(-1);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L98.targetList,
    &outC->_L107);
  outC->_L98.lastInsertedTargetIndex = outC->_L99;
  if (outC->every1) {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L2, &op_call);
  }
  else {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L2, &outC->_L98);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L121,
    &outC->_L2.targetList);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&outC->_L89, trainLocations);
  outC->_L90 = outC->_L89.d_maxSafeFrontEndPos;
  /* _L87=(TargetManagement_pkg::internalOperators::removeOverpassedMRSP#1)/ */
  removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
    &outC->_L121,
    outC->_L90,
    &outC->Context_removeOverpassedMRSP_1);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L87,
    &outC->Context_removeOverpassedMRSP_1.TargetsOut);
  outC->_L88 = outC->Context_removeOverpassedMRSP_1.updated;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->MRSPTargetList,
    &outC->_L87);
  outC->_L19 = MA_updated;
  outC->_L17 = MRSP_updated;
  outC->_L16 = outC->_L17 | outC->_L19 | outC->_L88;
  if (outC->every) {
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L12, &_3_op_call);
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L93, &_2_op_call);
  }
  else {
    /* _L12= */
    if (outC->init) {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp, &outC->_L14);
    }
    else {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp, &outC->_L12);
    }
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L12, &tmp);
    /* _L12= */
    if (outC->init) {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp1, &outC->_L14);
    }
    else {
      kcg_copy_Target_real_T_TargetManagement_types(&tmp1, &outC->_L93);
    }
    kcg_copy_Target_real_T_TargetManagement_types(&outC->_L93, &tmp1);
  }
  outC->_L79.updatedTargetList = outC->_L16;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L79.MRSP_targetList,
    &outC->_L87);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L79.EOA_target,
    &outC->_L12);
  kcg_copy_Target_real_T_TargetManagement_types(
    &outC->_L79.SvL_LoA_target,
    &outC->_L93);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &outC->targetCollection,
    &outC->_L79);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TargetManagement_init_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
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

  outC->_L14.targetType = EoA_TargetManagement_types;
  outC->_L14.distance = kcg_lit_float64(0.0);
  outC->_L14.speed = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L121[idx1].targetType = EoA_TargetManagement_types;
    outC->_L121[idx1].distance = kcg_lit_float64(0.0);
    outC->_L121[idx1].speed = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L107[idx2].targetType = EoA_TargetManagement_types;
    outC->_L107[idx2].distance = kcg_lit_float64(0.0);
    outC->_L107[idx2].speed = kcg_lit_float64(0.0);
  }
  outC->_L99 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L98.targetList[idx3].targetType = EoA_TargetManagement_types;
    outC->_L98.targetList[idx3].distance = kcg_lit_float64(0.0);
    outC->_L98.targetList[idx3].speed = kcg_lit_float64(0.0);
  }
  outC->_L98.lastInsertedTargetIndex = kcg_lit_int64(0);
  outC->_L97.valid = kcg_true;
  outC->_L97.v_main = kcg_lit_float64(0.0);
  outC->_L97.EOA.Location = kcg_lit_float64(0.0);
  outC->_L97.EOA.TargetSpeed = kcg_lit_float64(0.0);
  outC->_L97.DP_valid = kcg_true;
  outC->_L97.DangerPoint = kcg_lit_float64(0.0);
  outC->_L97.OL_valid = kcg_true;
  outC->_L97.Overlap = kcg_lit_float64(0.0);
  outC->_L97.q_calculate_release = kcg_true;
  outC->_L97.ReleaseSpeed = kcg_lit_float64(0.0);
  outC->_L97.level = MA_L1_TrackAtlasTypes;
  outC->_L89.trainPositionIsValid = kcg_true;
  outC->_L89.d_est_frontendPos = kcg_lit_float64(0.0);
  outC->_L89.d_minSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L89.d_maxSafeFrontEndPos = kcg_lit_float64(0.0);
  outC->_L89.d_LRBG = kcg_lit_float64(0.0);
  outC->_L89.d_accLRBG = kcg_lit_float64(0.0);
  outC->_L90 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L87[idx4].targetType = EoA_TargetManagement_types;
    outC->_L87[idx4].distance = kcg_lit_float64(0.0);
    outC->_L87[idx4].speed = kcg_lit_float64(0.0);
  }
  outC->_L88 = kcg_true;
  outC->_L79.updatedTargetList = kcg_true;
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L79.MRSP_targetList[idx5].targetType = EoA_TargetManagement_types;
    outC->_L79.MRSP_targetList[idx5].distance = kcg_lit_float64(0.0);
    outC->_L79.MRSP_targetList[idx5].speed = kcg_lit_float64(0.0);
  }
  outC->_L79.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L79.EOA_target.distance = kcg_lit_float64(0.0);
  outC->_L79.EOA_target.speed = kcg_lit_float64(0.0);
  outC->_L79.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L79.SvL_LoA_target.distance = kcg_lit_float64(0.0);
  outC->_L79.SvL_LoA_target.speed = kcg_lit_float64(0.0);
  outC->_L19 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L3 = kcg_true;
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->_L2.targetList[idx6].targetType = EoA_TargetManagement_types;
    outC->_L2.targetList[idx6].distance = kcg_lit_float64(0.0);
    outC->_L2.targetList[idx6].speed = kcg_lit_float64(0.0);
  }
  outC->_L2.lastInsertedTargetIndex = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 110; idx7++) {
    outC->_L1[idx7].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L1[idx7].MRS = kcg_lit_float64(0.0);
    outC->_L1[idx7].valid = kcg_true;
  }
  outC->every1 = kcg_true;
  outC->every = kcg_true;
  outC->_L93.targetType = EoA_TargetManagement_types;
  outC->_L93.distance = kcg_lit_float64(0.0);
  outC->_L93.speed = kcg_lit_float64(0.0);
  outC->_L12.targetType = EoA_TargetManagement_types;
  outC->_L12.distance = kcg_lit_float64(0.0);
  outC->_L12.speed = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->targetCollection.updatedTargetList = kcg_true;
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->targetCollection.MRSP_targetList[idx8].targetType =
      EoA_TargetManagement_types;
    outC->targetCollection.MRSP_targetList[idx8].distance = kcg_lit_float64(0.0);
    outC->targetCollection.MRSP_targetList[idx8].speed = kcg_lit_float64(0.0);
  }
  outC->targetCollection.EOA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.EOA_target.distance = kcg_lit_float64(0.0);
  outC->targetCollection.EOA_target.speed = kcg_lit_float64(0.0);
  outC->targetCollection.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->targetCollection.SvL_LoA_target.distance = kcg_lit_float64(0.0);
  outC->targetCollection.SvL_LoA_target.speed = kcg_lit_float64(0.0);
  /* _L87=(TargetManagement_pkg::internalOperators::removeOverpassedMRSP#1)/ */
  removeOverpassedMRSP_init_TargetManagement_pkg_internalOperators(
    &outC->Context_removeOverpassedMRSP_1);
  /* _L12=(TargetManagement_pkg::internalOperators::calcMATargets#1)/ */
  calcMATargets_init_TargetManagement_pkg_internalOperators(
    &outC->Context_calcMATargets_1);
  /* _L2=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSP#1)/ */
  extractTargetsFromMRSP_init_TargetManagement_pkg_internalOperators(
    &outC->Context_extractTargetsFromMRSP_1);
  /* MRSPTargetList/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->MRSPTargetList[idx],
      (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TargetManagement_reset_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  static kcg_size idx;

  outC->init = kcg_true;
  /* _L87=(TargetManagement_pkg::internalOperators::removeOverpassedMRSP#1)/ */
  removeOverpassedMRSP_reset_TargetManagement_pkg_internalOperators(
    &outC->Context_removeOverpassedMRSP_1);
  /* _L12=(TargetManagement_pkg::internalOperators::calcMATargets#1)/ */
  calcMATargets_reset_TargetManagement_pkg_internalOperators(
    &outC->Context_calcMATargets_1);
  /* _L2=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSP#1)/ */
  extractTargetsFromMRSP_reset_TargetManagement_pkg_internalOperators(
    &outC->Context_extractTargetsFromMRSP_1);
  /* MRSPTargetList/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->MRSPTargetList[idx],
      (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_TargetManagement_TargetManagement_pkg(
  SV_TargetManagement_TargetManagement_pkg *SV,
  outC_TargetManagement_TargetManagement_pkg *outC)
{
  kcg_copy_Target_real_T_TargetManagement_types(&SV->Context__L93, &outC->_L93);
  kcg_copy_Target_real_T_TargetManagement_types(&SV->Context__L12, &outC->_L12);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &SV->Context_MRSPTargetList,
    &outC->MRSPTargetList);
  SV->Context_init = outC->init;
}

void kcg_load_SV_TargetManagement_TargetManagement_pkg(
  outC_TargetManagement_TargetManagement_pkg *outC,
  SV_TargetManagement_TargetManagement_pkg *SV)
{
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L93, &SV->Context__L93);
  kcg_copy_Target_real_T_TargetManagement_types(&outC->_L12, &SV->Context__L12);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->MRSPTargetList,
    &SV->Context_MRSPTargetList);
  outC->init = SV->Context_init;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TargetManagement_TargetManagement_pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

