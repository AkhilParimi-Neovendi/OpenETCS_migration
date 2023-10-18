/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration/ */
void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metadata/ */
  Metadata_T_Common_Types_Pkg *metadata,
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static MetadataElement_T_Common_Types_Pkg acc;
  static kcg_size idx;

  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, metadata);
  kcg_copy__84_array(&outC->_L19, (_84_array *) &outC->_L1[1]);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L1[0]);
  outC->_L8 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L12, &outC->_L17);
  /* _L7= */
  if (outC->_L8) {
    /* _L7= */
    for (idx = 0; idx < 29; idx++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&acc, &outC->_L12);
      /* _L7=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData#1)/ */
      FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &acc,
        &outC->_L19[idx],
        &outC->Context_FindIndexOfMetaData_1[idx]);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L12,
        &outC->Context_FindIndexOfMetaData_1[idx].metadata);
      outC->_L7 = /* _L7= */(kcg_int64) (idx + 1);
      /* _L7= */
      if (!outC->Context_FindIndexOfMetaData_1[idx].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L7 = kcg_lit_int64(0);
  }
  outC->_L18 = outC->_L12.endAddress;
  outC->endAddress = outC->_L18;
  outC->index = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void FindIndexOfMetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  for (idx1 = 0; idx1 < 29; idx1++) {
    outC->_L19[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L19[idx1].q_dir = Q_DIR_Reverse;
    outC->_L19[idx1].valid = kcg_true;
    outC->_L19[idx1].startAddress = kcg_lit_int64(0);
    outC->_L19[idx1].endAddress = kcg_lit_int64(0);
  }
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17.nid_packet = kcg_lit_int64(0);
  outC->_L17.q_dir = Q_DIR_Reverse;
  outC->_L17.valid = kcg_true;
  outC->_L17.startAddress = kcg_lit_int64(0);
  outC->_L17.endAddress = kcg_lit_int64(0);
  outC->_L12.nid_packet = kcg_lit_int64(0);
  outC->_L12.q_dir = Q_DIR_Reverse;
  outC->_L12.valid = kcg_true;
  outC->_L12.startAddress = kcg_lit_int64(0);
  outC->_L12.endAddress = kcg_lit_int64(0);
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L1[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L1[idx2].q_dir = Q_DIR_Reverse;
    outC->_L1[idx2].valid = kcg_true;
    outC->_L1[idx2].startAddress = kcg_lit_int64(0);
    outC->_L1[idx2].endAddress = kcg_lit_int64(0);
  }
  outC->endAddress = kcg_lit_int64(0);
  outC->index = kcg_lit_int64(0);
  for (idx = 0; idx < 29; idx++) {
    /* _L7=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData#1)/ */
    FindIndexOfMetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_FindIndexOfMetaData_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 29; idx++) {
    /* _L7=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData#1)/ */
    FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_FindIndexOfMetaData_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

