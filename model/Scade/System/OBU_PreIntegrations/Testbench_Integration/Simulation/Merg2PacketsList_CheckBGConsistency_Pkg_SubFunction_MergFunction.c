/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList/ */
void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* ind/ */
  kcg_int64 ind,
  /* acc/ */
  CompressedPacketData_T_Common_Types_Pkg *acc,
  /* lastvalidAddress/ */
  CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* compressedPacketIn/ */
  CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  outC->_L16 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L15, lastvalidAddress);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L13, lastvalidAddress);
  outC->_L14 = outC->_L13[0];
  outC->_L6 = outC->_L15[0];
  outC->_L11 = ind;
  outC->_L12 = outC->_L11 - outC->_L6;
  outC->_L3 = kcg_lit_int64(0);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L2,
    compressedPacketIn);
  if ((kcg_lit_int64(0) <= outC->_L12) & (outC->_L12 < kcg_lit_int64(500))) {
    outC->_L8 = outC->_L2[outC->_L12];
  }
  else {
    outC->_L8 = outC->_L3;
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, acc);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L10, &outC->_L1);
  if ((kcg_lit_int64(0) <= outC->_L16) & (outC->_L16 < kcg_lit_int64(500))) {
    outC->_L10[outC->_L16] = outC->_L8;
  }
  outC->_L9 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, acc);
  outC->_L5 = outC->_L9 < outC->_L14;
  /* _L7= */
  if (outC->_L5) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L7, &outC->_L10);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->mergedPackets,
    &outC->_L7);
}

#ifndef KCG_USER_DEFINED_INIT
void Merg2PacketsList_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  for (idx = 0; idx < 500; idx++) {
    outC->_L1[idx] = kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L2[idx1] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L4[idx2] = kcg_lit_int64(0);
  }
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L7[idx3] = kcg_lit_int64(0);
  }
  outC->_L8 = kcg_lit_int64(0);
  outC->_L9 = kcg_lit_int64(0);
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L10[idx4] = kcg_lit_int64(0);
  }
  outC->_L11 = kcg_lit_int64(0);
  outC->_L12 = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L13[idx5] = kcg_lit_int64(0);
  }
  outC->_L14 = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L15[idx6] = kcg_lit_int64(0);
  }
  outC->_L16 = kcg_lit_int64(0);
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->mergedPackets[idx7] = kcg_lit_int64(0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

