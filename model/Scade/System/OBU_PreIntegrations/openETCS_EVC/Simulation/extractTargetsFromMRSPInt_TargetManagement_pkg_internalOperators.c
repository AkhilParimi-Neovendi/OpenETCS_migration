/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt/ */
void extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
  /* index/ */
  kcg_int32 index,
  /* ACCU/ */
  extractTargetsMRSPACC_TargetManagement_pkg *ACCU,
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC)
{
  L_internal_real_Type_SDM_Types_Pkg noname;

  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &outC->_L64,
    (MRSP_internal_section_T_TargetManagement_types *)
      &emptyMRSPSection_TargetManagement_pkg);
  outC->_L18 = kcg_lit_int32(1);
  outC->_L17 = index;
  outC->_L16 = outC->_L17 + outC->_L18;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L3, MRSP);
  if ((kcg_lit_int32(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int32(110))) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L15,
      &outC->_L3[outC->_L16]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L15,
      &outC->_L64);
  }
  outC->_L83 = outC->_L15.MRS;
  if ((kcg_lit_int32(0) <= outC->_L17) & (outC->_L17 < kcg_lit_int32(110))) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L14,
      &outC->_L3[outC->_L17]);
  }
  else {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(
      &outC->_L14,
      &outC->_L64);
  }
  outC->_L80 = outC->_L14.MRS;
  outC->_L85 = outC->_L80 > outC->_L83;
  outC->_L81 = outC->_L14.Loc_Abs;
  noname = outC->_L81;
  outC->_L82 = outC->_L15.Loc_Abs;
  outC->_L84 = outC->_L15.valid;
  outC->_L79 = outC->_L14.valid;
  outC->_L67 = outC->_L85 & outC->_L79 & outC->_L84;
  outC->_L63 = MRSP_TargetManagement_types;
  outC->_L62.targetType = outC->_L63;
  outC->_L62.distance = outC->_L82;
  outC->_L62.speed = outC->_L83;
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L31, ACCU);
  outC->_L32 = outC->_L31.lastInsertedTargetIndex;
  outC->_L35 = kcg_lit_int32(1);
  outC->_L34 = outC->_L35 + outC->_L32;
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L33,
    &outC->_L31.targetList);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L36,
    &outC->_L33);
  if ((kcg_lit_int32(0) <= outC->_L34) & (outC->_L34 < kcg_lit_int32(110))) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L36[outC->_L34],
      &outC->_L62);
  }
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L53.targetList,
    &outC->_L36);
  outC->_L53.lastInsertedTargetIndex = outC->_L34;
  outC->endCondition = outC->_L84;
  /* _L30= */
  if (outC->_L67) {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L30, &outC->_L53);
  }
  else {
    kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L30, &outC->_L31);
  }
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(
    &outC->ACCUout,
    &outC->_L30);
}

#ifndef KCG_USER_DEFINED_INIT
void extractTargetsFromMRSPInt_init_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;

  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_lit_float32(0.0);
  outC->_L82 = kcg_lit_float32(0.0);
  outC->_L79 = kcg_true;
  outC->_L80 = kcg_lit_float32(0.0);
  outC->_L81 = kcg_lit_float32(0.0);
  outC->_L67 = kcg_true;
  outC->_L64.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L64.MRS = kcg_lit_float32(0.0);
  outC->_L64.valid = kcg_true;
  outC->_L63 = EoA_TargetManagement_types;
  outC->_L62.targetType = EoA_TargetManagement_types;
  outC->_L62.distance = kcg_lit_float32(0.0);
  outC->_L62.speed = kcg_lit_float32(0.0);
  for (idx = 0; idx < 110; idx++) {
    outC->_L53.targetList[idx].targetType = EoA_TargetManagement_types;
    outC->_L53.targetList[idx].distance = kcg_lit_float32(0.0);
    outC->_L53.targetList[idx].speed = kcg_lit_float32(0.0);
  }
  outC->_L53.lastInsertedTargetIndex = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L3[idx1].Loc_Abs = kcg_lit_float32(0.0);
    outC->_L3[idx1].MRS = kcg_lit_float32(0.0);
    outC->_L3[idx1].valid = kcg_true;
  }
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L36[idx2].targetType = EoA_TargetManagement_types;
    outC->_L36[idx2].distance = kcg_lit_float32(0.0);
    outC->_L36[idx2].speed = kcg_lit_float32(0.0);
  }
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L33[idx3].targetType = EoA_TargetManagement_types;
    outC->_L33[idx3].distance = kcg_lit_float32(0.0);
    outC->_L33[idx3].speed = kcg_lit_float32(0.0);
  }
  for (idx4 = 0; idx4 < 110; idx4++) {
    outC->_L31.targetList[idx4].targetType = EoA_TargetManagement_types;
    outC->_L31.targetList[idx4].distance = kcg_lit_float32(0.0);
    outC->_L31.targetList[idx4].speed = kcg_lit_float32(0.0);
  }
  outC->_L31.lastInsertedTargetIndex = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L30.targetList[idx5].targetType = EoA_TargetManagement_types;
    outC->_L30.targetList[idx5].distance = kcg_lit_float32(0.0);
    outC->_L30.targetList[idx5].speed = kcg_lit_float32(0.0);
  }
  outC->_L30.lastInsertedTargetIndex = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L15.MRS = kcg_lit_float32(0.0);
  outC->_L15.valid = kcg_true;
  outC->_L14.Loc_Abs = kcg_lit_float32(0.0);
  outC->_L14.MRS = kcg_lit_float32(0.0);
  outC->_L14.valid = kcg_true;
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->ACCUout.targetList[idx6].targetType = EoA_TargetManagement_types;
    outC->ACCUout.targetList[idx6].distance = kcg_lit_float32(0.0);
    outC->ACCUout.targetList[idx6].speed = kcg_lit_float32(0.0);
  }
  outC->ACCUout.lastInsertedTargetIndex = kcg_lit_int32(0);
  outC->endCondition = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void extractTargetsFromMRSPInt_reset_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

