/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h"

/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP/ */
void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static extractTargetsMRSPACC_TargetManagement_pkg acc;
  static kcg_size idx2;
  static kcg_int64 noname;

  /* _L24/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &outC->_L24[idx],
      (Target_real_T_TargetManagement_types *) &emptyTarget_TargetManagement_pkg);
  }
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L21, MRSP);
  outC->_L22 = outC->_L21[0].valid;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L7, MRSP);
  /* _L14/ */
  for (idx1 = 0; idx1 < 110; idx1++) {
    kcg_copy_MRSP_internal_T_TargetManagement_types(&outC->_L14[idx1], &outC->_L7);
  }
  outC->_L13 = kcg_lit_int64(-1);
  kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(
    &outC->_L12.targetList,
    &outC->_L24);
  outC->_L12.lastInsertedTargetIndex = outC->_L13;
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&outC->_L1, &outC->_L12);
  /* _L3= */
  if (outC->_L22) {
    /* _L3= */
    for (idx2 = 0; idx2 < 110; idx2++) {
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(&acc, &outC->_L1);
      /* _L3=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt#1)/ */
      extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
        /* _L3= */(kcg_int64) idx2,
        &acc,
        &outC->_L14[idx2],
        &outC->Context_extractTargetsFromMRSPInt_1[idx2]);
      kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(
        &outC->_L1,
        &outC->Context_extractTargetsFromMRSPInt_1[idx2].ACCUout);
      outC->_L3 = /* _L3= */(kcg_int64) (idx2 + 1);
      /* _L3= */
      if (!outC->Context_extractTargetsFromMRSPInt_1[idx2].endCondition) {
        break;
      }
    }
  }
  else {
    outC->_L3 = kcg_lit_int64(0);
  }
  kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(
    &outC->TargetsOfMRSP,
    &outC->_L1);
  noname = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void extractTargetsFromMRSP_init_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC)
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

  for (idx1 = 0; idx1 < 110; idx1++) {
    outC->_L24[idx1].targetType = EoA_TargetManagement_types;
    outC->_L24[idx1].distance = kcg_lit_float64(0.0);
    outC->_L24[idx1].speed = kcg_lit_float64(0.0);
  }
  outC->_L22 = kcg_true;
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L21[idx2].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L21[idx2].MRS = kcg_lit_float64(0.0);
    outC->_L21[idx2].valid = kcg_true;
  }
  for (idx4 = 0; idx4 < 110; idx4++) {
    for (idx3 = 0; idx3 < 110; idx3++) {
      outC->_L14[idx4][idx3].Loc_Abs = kcg_lit_float64(0.0);
      outC->_L14[idx4][idx3].MRS = kcg_lit_float64(0.0);
      outC->_L14[idx4][idx3].valid = kcg_true;
    }
  }
  outC->_L13 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 110; idx5++) {
    outC->_L12.targetList[idx5].targetType = EoA_TargetManagement_types;
    outC->_L12.targetList[idx5].distance = kcg_lit_float64(0.0);
    outC->_L12.targetList[idx5].speed = kcg_lit_float64(0.0);
  }
  outC->_L12.lastInsertedTargetIndex = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 110; idx6++) {
    outC->_L7[idx6].Loc_Abs = kcg_lit_float64(0.0);
    outC->_L7[idx6].MRS = kcg_lit_float64(0.0);
    outC->_L7[idx6].valid = kcg_true;
  }
  outC->_L3 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 110; idx7++) {
    outC->_L1.targetList[idx7].targetType = EoA_TargetManagement_types;
    outC->_L1.targetList[idx7].distance = kcg_lit_float64(0.0);
    outC->_L1.targetList[idx7].speed = kcg_lit_float64(0.0);
  }
  outC->_L1.lastInsertedTargetIndex = kcg_lit_int64(0);
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->TargetsOfMRSP.targetList[idx8].targetType = EoA_TargetManagement_types;
    outC->TargetsOfMRSP.targetList[idx8].distance = kcg_lit_float64(0.0);
    outC->TargetsOfMRSP.targetList[idx8].speed = kcg_lit_float64(0.0);
  }
  outC->TargetsOfMRSP.lastInsertedTargetIndex = kcg_lit_int64(0);
  for (idx = 0; idx < 110; idx++) {
    /* _L3=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt#1)/ */
    extractTargetsFromMRSPInt_init_TargetManagement_pkg_internalOperators(
      &outC->Context_extractTargetsFromMRSPInt_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void extractTargetsFromMRSP_reset_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 110; idx++) {
    /* _L3=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt#1)/ */
    extractTargetsFromMRSPInt_reset_TargetManagement_pkg_internalOperators(
      &outC->Context_extractTargetsFromMRSPInt_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

