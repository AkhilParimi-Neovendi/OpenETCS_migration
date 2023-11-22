/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData/ */
void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* ind/ */
  kcg_int32 ind,
  /* acc/ */
  Metadata_T_Common_Types_Pkg *acc,
  /* metadata_in/ */
  Metadata_T_Common_Types_Pkg *metadata_in,
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* metadata_out/ */
  Metadata_T_Common_Types_Pkg metadata_out_partial;
  /* metadata_out/ */
  Metadata_T_Common_Types_Pkg _1_metadata_out_partial;

  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L18, metadata_in);
  outC->_L21 = outC->_L18[0].q_dir;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L22, acc);
  outC->_L19 = outC->_L22[0].q_dir;
  outC->_L20 = outC->_L19 == outC->_L21;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L14, metadata_in);
  outC->_L16 = outC->_L14[0].nid_packet;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12, acc);
  outC->_L11 = outC->_L12[0].nid_packet;
  outC->_L17 = outC->_L11 == outC->_L16;
  outC->_L23 = outC->_L17 & outC->_L20;
  outC->dup = outC->_L23;
  outC->IfBlock1_clock = outC->dup;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1_then_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &metadata_out_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->metadata_out,
      &metadata_out_partial);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L18_else_IfBlock1,
      (MetadataElement_T_Common_Types_Pkg *)
        &cMetaDataElement_CheckBGConsistency_Pkg);
    outC->_L13_else_IfBlock1 = ind;
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L14_else_IfBlock1, metadata_in);
    if ((kcg_lit_int32(0) <= outC->_L13_else_IfBlock1) &
      (outC->_L13_else_IfBlock1 < kcg_lit_int32(30))) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L11_else_IfBlock1,
        &outC->_L14_else_IfBlock1[outC->_L13_else_IfBlock1]);
    }
    else {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L11_else_IfBlock1,
        &outC->_L18_else_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L19_else_IfBlock1, acc);
    /* IfBlock1:else:_L15=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#3)/ */
    FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->_L19_else_IfBlock1,
      &outC->Context_FindIndexOfMetaDataIteration_3);
    outC->_L15_else_IfBlock1 = outC->Context_FindIndexOfMetaDataIteration_3.index;
    outC->_L20_else_IfBlock1 =
      outC->Context_FindIndexOfMetaDataIteration_3.endAddress;
    /* IfBlock1:else:_L26=(CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress#1)/ */
    ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->_L11_else_IfBlock1,
      outC->_L20_else_IfBlock1,
      &outC->Context_ShiftAddress_1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L26_else_IfBlock1,
      &outC->Context_ShiftAddress_1.metaData_Out);
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L12_else_IfBlock1, acc);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L16_else_IfBlock1,
      &outC->_L12_else_IfBlock1);
    if ((kcg_lit_int32(0) <= outC->_L15_else_IfBlock1) &
      (outC->_L15_else_IfBlock1 < kcg_lit_int32(30))) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L16_else_IfBlock1[outC->_L15_else_IfBlock1],
        &outC->_L26_else_IfBlock1);
    }
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &_1_metadata_out_partial,
      &outC->_L16_else_IfBlock1);
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->metadata_out,
      &_1_metadata_out_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void Merg2MetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;

  outC->_L23 = kcg_true;
  for (idx = 0; idx < 30; idx++) {
    outC->_L18[idx].nid_packet = kcg_lit_int32(0);
    outC->_L18[idx].q_dir = Q_DIR_Reverse;
    outC->_L18[idx].valid = kcg_true;
    outC->_L18[idx].startAddress = kcg_lit_int32(0);
    outC->_L18[idx].endAddress = kcg_lit_int32(0);
  }
  outC->_L19 = Q_DIR_Reverse;
  outC->_L20 = kcg_true;
  outC->_L21 = Q_DIR_Reverse;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L22[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L22[idx1].q_dir = Q_DIR_Reverse;
    outC->_L22[idx1].valid = kcg_true;
    outC->_L22[idx1].startAddress = kcg_lit_int32(0);
    outC->_L22[idx1].endAddress = kcg_lit_int32(0);
  }
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L14[idx2].nid_packet = kcg_lit_int32(0);
    outC->_L14[idx2].q_dir = Q_DIR_Reverse;
    outC->_L14[idx2].valid = kcg_true;
    outC->_L14[idx2].startAddress = kcg_lit_int32(0);
    outC->_L14[idx2].endAddress = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L12[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L12[idx3].q_dir = Q_DIR_Reverse;
    outC->_L12[idx3].valid = kcg_true;
    outC->_L12[idx3].startAddress = kcg_lit_int32(0);
    outC->_L12[idx3].endAddress = kcg_lit_int32(0);
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->dup = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L19_else_IfBlock1[idx4].nid_packet = kcg_lit_int32(0);
    outC->_L19_else_IfBlock1[idx4].q_dir = Q_DIR_Reverse;
    outC->_L19_else_IfBlock1[idx4].valid = kcg_true;
    outC->_L19_else_IfBlock1[idx4].startAddress = kcg_lit_int32(0);
    outC->_L19_else_IfBlock1[idx4].endAddress = kcg_lit_int32(0);
  }
  outC->_L18_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L18_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L18_else_IfBlock1.valid = kcg_true;
  outC->_L18_else_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L18_else_IfBlock1.endAddress = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L16_else_IfBlock1[idx5].nid_packet = kcg_lit_int32(0);
    outC->_L16_else_IfBlock1[idx5].q_dir = Q_DIR_Reverse;
    outC->_L16_else_IfBlock1[idx5].valid = kcg_true;
    outC->_L16_else_IfBlock1[idx5].startAddress = kcg_lit_int32(0);
    outC->_L16_else_IfBlock1[idx5].endAddress = kcg_lit_int32(0);
  }
  outC->_L15_else_IfBlock1 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L14_else_IfBlock1[idx6].nid_packet = kcg_lit_int32(0);
    outC->_L14_else_IfBlock1[idx6].q_dir = Q_DIR_Reverse;
    outC->_L14_else_IfBlock1[idx6].valid = kcg_true;
    outC->_L14_else_IfBlock1[idx6].startAddress = kcg_lit_int32(0);
    outC->_L14_else_IfBlock1[idx6].endAddress = kcg_lit_int32(0);
  }
  outC->_L13_else_IfBlock1 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L12_else_IfBlock1[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L12_else_IfBlock1[idx7].q_dir = Q_DIR_Reverse;
    outC->_L12_else_IfBlock1[idx7].valid = kcg_true;
    outC->_L12_else_IfBlock1[idx7].startAddress = kcg_lit_int32(0);
    outC->_L12_else_IfBlock1[idx7].endAddress = kcg_lit_int32(0);
  }
  outC->_L11_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L11_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L11_else_IfBlock1.valid = kcg_true;
  outC->_L11_else_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L11_else_IfBlock1.endAddress = kcg_lit_int32(0);
  outC->_L20_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L26_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L26_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L26_else_IfBlock1.valid = kcg_true;
  outC->_L26_else_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L26_else_IfBlock1.endAddress = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L1_then_IfBlock1[idx8].nid_packet = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx8].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1[idx8].valid = kcg_true;
    outC->_L1_then_IfBlock1[idx8].startAddress = kcg_lit_int32(0);
    outC->_L1_then_IfBlock1[idx8].endAddress = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->metadata_out[idx9].nid_packet = kcg_lit_int32(0);
    outC->metadata_out[idx9].q_dir = Q_DIR_Reverse;
    outC->metadata_out[idx9].valid = kcg_true;
    outC->metadata_out[idx9].startAddress = kcg_lit_int32(0);
    outC->metadata_out[idx9].endAddress = kcg_lit_int32(0);
  }
  /* IfBlock1:else:_L26=(CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress#1)/ */
  ShiftAddress_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_ShiftAddress_1);
  /* IfBlock1:else:_L15=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#3)/ */
  FindIndexOfMetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_FindIndexOfMetaDataIteration_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  /* IfBlock1:else:_L26=(CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress#1)/ */
  ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_ShiftAddress_1);
  /* IfBlock1:else:_L15=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration#3)/ */
  FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_FindIndexOfMetaDataIteration_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

