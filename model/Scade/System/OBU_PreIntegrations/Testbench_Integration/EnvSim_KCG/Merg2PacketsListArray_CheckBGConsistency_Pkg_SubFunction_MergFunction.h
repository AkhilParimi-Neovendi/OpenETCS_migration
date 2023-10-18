/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* mergPackets/ */ mergPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction /* _L1=(CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList#1)/ */ Context_Merg2PacketsList_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* _L6/ */ _L6;
  CompressedPacketData_T_Common_Types_Pkg /* _L5/ */ _L5;
  CompressedPacketData_T_Common_Types_Pkg /* _L4/ */ _L4;
  array_int64_500_500 /* _L3/ */ _L3;
  array_int64_500_500 /* _L2/ */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* _L1/ */ _L1;
} outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray/ */
extern void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* acc/ */
  CompressedPacketData_T_Common_Types_Pkg *acc,
  /* addressArray/ */
  CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* newPackets/ */
  CompressedPacketData_T_Common_Types_Pkg *newPackets,
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merg2PacketsListArray_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

