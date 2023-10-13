/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress/ */
void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metaData_In/ */
  MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* distance/ */
  kcg_int64 distance,
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, metaData_In);
  outC->_L3 = outC->_L1.startAddress;
  outC->_L2 = outC->_L1.endAddress;
  outC->_L12 = outC->_L2 - outC->_L3;
  outC->_L8 = distance;
  outC->_L11 = kcg_lit_int64(1);
  outC->_L9 = outC->_L11 + outC->_L8;
  outC->_L13 = outC->_L9 + outC->_L12;
  outC->_L6 = outC->_L1.nid_packet;
  outC->_L5 = outC->_L1.q_dir;
  outC->_L4 = outC->_L1.valid;
  outC->_L7.nid_packet = outC->_L6;
  outC->_L7.q_dir = outC->_L5;
  outC->_L7.valid = outC->_L4;
  outC->_L7.startAddress = outC->_L9;
  outC->_L7.endAddress = outC->_L13;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->metaData_Out, &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void ShiftAddress_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  outC->_L13 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
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
  outC->metaData_Out.nid_packet = kcg_lit_int64(0);
  outC->metaData_Out.q_dir = Q_DIR_Reverse;
  outC->metaData_Out.valid = kcg_true;
  outC->metaData_Out.startAddress = kcg_lit_int64(0);
  outC->metaData_Out.endAddress = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

