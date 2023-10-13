/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData/ */
void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* acc/ */
  MetadataElement_T_Common_Types_Pkg *acc,
  /* acc1/ */
  MetadataElement_T_Common_Types_Pkg *acc1,
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static Q_DIR noname;
  static kcg_int64 _1_noname;
  static NID_PACKET _2_noname;
  static NID_PACKET _3_noname;
  static Q_DIR _4_noname;
  static kcg_int64 _5_noname;

  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L18, acc);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, acc);
  outC->_L2 = outC->_L1.endAddress;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L7, acc1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L16, &outC->_L7);
  if (kcg_true) {
    outC->_L16.endAddress = outC->_L2;
  }
  outC->_L12 = outC->_L7.endAddress;
  outC->_L15 = outC->_L2 < outC->_L12;
  /* _L14= */
  if (outC->_L15) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L14, &outC->_L7);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L14, &outC->_L16);
  }
  outC->_L10 = outC->_L7.valid;
  outC->_L4 = outC->_L1.valid;
  outC->_L13 = outC->_L4 & outC->_L10;
  /* _L17= */
  if (outC->_L13) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L14);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L18);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->metadata, &outC->_L17);
  outC->_L11 = outC->_L7.startAddress;
  _5_noname = outC->_L11;
  outC->_L9 = outC->_L7.q_dir;
  _4_noname = outC->_L9;
  outC->_L8 = outC->_L7.nid_packet;
  _3_noname = outC->_L8;
  outC->_L6 = outC->_L1.nid_packet;
  _2_noname = outC->_L6;
  outC->_L3 = outC->_L1.startAddress;
  _1_noname = outC->_L3;
  outC->_L5 = outC->_L1.q_dir;
  noname = outC->_L5;
  outC->go_on = outC->_L13;
}

#ifndef KCG_USER_DEFINED_INIT
void FindIndexOfMetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  outC->_L18.nid_packet = kcg_lit_int64(0);
  outC->_L18.q_dir = Q_DIR_Reverse;
  outC->_L18.valid = kcg_true;
  outC->_L18.startAddress = kcg_lit_int64(0);
  outC->_L18.endAddress = kcg_lit_int64(0);
  outC->_L17.nid_packet = kcg_lit_int64(0);
  outC->_L17.q_dir = Q_DIR_Reverse;
  outC->_L17.valid = kcg_true;
  outC->_L17.startAddress = kcg_lit_int64(0);
  outC->_L17.endAddress = kcg_lit_int64(0);
  outC->_L16.nid_packet = kcg_lit_int64(0);
  outC->_L16.q_dir = Q_DIR_Reverse;
  outC->_L16.valid = kcg_true;
  outC->_L16.startAddress = kcg_lit_int64(0);
  outC->_L16.endAddress = kcg_lit_int64(0);
  outC->_L15 = kcg_true;
  outC->_L14.nid_packet = kcg_lit_int64(0);
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.valid = kcg_true;
  outC->_L14.startAddress = kcg_lit_int64(0);
  outC->_L14.endAddress = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_true;
  outC->_L9 = Q_DIR_Reverse;
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7.nid_packet = kcg_lit_int64(0);
  outC->_L7.q_dir = Q_DIR_Reverse;
  outC->_L7.valid = kcg_true;
  outC->_L7.startAddress = kcg_lit_int64(0);
  outC->_L7.endAddress = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4 = kcg_true;
  outC->_L5 = Q_DIR_Reverse;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.valid = kcg_true;
  outC->_L1.startAddress = kcg_lit_int64(0);
  outC->_L1.endAddress = kcg_lit_int64(0);
  outC->metadata.nid_packet = kcg_lit_int64(0);
  outC->metadata.q_dir = Q_DIR_Reverse;
  outC->metadata.valid = kcg_true;
  outC->metadata.startAddress = kcg_lit_int64(0);
  outC->metadata.endAddress = kcg_lit_int64(0);
  outC->go_on = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

