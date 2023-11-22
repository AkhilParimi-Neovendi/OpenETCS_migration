/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* mergedPackets/ */ mergedPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L16/ */ _L16;
  CompressedPacketData_T_Common_Types_Pkg /* _L15/ */ _L15;
  kcg_int32 /* _L14/ */ _L14;
  CompressedPacketData_T_Common_Types_Pkg /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  CompressedPacketData_T_Common_Types_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  CompressedPacketData_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  CompressedPacketData_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  CompressedPacketData_T_Common_Types_Pkg /* _L2/ */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* _L1/ */ _L1;
} outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList/ */
extern void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* ind/ */
  kcg_int32 ind,
  /* acc/ */
  CompressedPacketData_T_Common_Types_Pkg *acc,
  /* lastvalidAddress/ */
  CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* compressedPacketIn/ */
  CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merg2PacketsList_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

