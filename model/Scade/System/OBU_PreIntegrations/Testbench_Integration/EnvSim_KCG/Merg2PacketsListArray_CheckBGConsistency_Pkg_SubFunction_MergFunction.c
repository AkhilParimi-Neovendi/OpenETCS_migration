/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray/ */
void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* acc/ */
  CompressedPacketData_T_Common_Types_Pkg *acc,
  /* addressArray/ */
  CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* newPackets/ */
  CompressedPacketData_T_Common_Types_Pkg *newPackets,
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static CompressedPacketData_T_Common_Types_Pkg acc2;
  static kcg_size idx3;

  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L6, addressArray);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L5, acc);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, newPackets);
  /* _L3/ */
  for (idx = 0; idx < 500; idx++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L3[idx], &outC->_L6);
  }
  /* _L2/ */
  for (idx1 = 0; idx1 < 500; idx1++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L2[idx1], &outC->_L4);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, &outC->_L5);
  /* _L1= */
  for (idx3 = 0; idx3 < 500; idx3++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&acc2, &outC->_L1);
    /* _L1=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList#1)/ */
    Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      /* _L1= */(kcg_int32) idx3,
      &acc2,
      &outC->_L3[idx3],
      &outC->_L2[idx3],
      &outC->Context_Merg2PacketsList_1[idx3]);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L1,
      &outC->Context_Merg2PacketsList_1[idx3].mergedPackets);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->mergPackets,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void Merg2PacketsListArray_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
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

  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L1[idx1] = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    for (idx2 = 0; idx2 < 500; idx2++) {
      outC->_L2[idx3][idx2] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    for (idx4 = 0; idx4 < 500; idx4++) {
      outC->_L3[idx5][idx4] = kcg_lit_int32(0);
    }
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L4[idx6] = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L5[idx7] = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L6[idx8] = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->mergPackets[idx9] = kcg_lit_int32(0);
  }
  for (idx = 0; idx < 500; idx++) {
    /* _L1=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList#1)/ */
    Merg2PacketsList_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_Merg2PacketsList_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 500; idx++) {
    /* _L1=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList#1)/ */
    Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_Merg2PacketsList_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

