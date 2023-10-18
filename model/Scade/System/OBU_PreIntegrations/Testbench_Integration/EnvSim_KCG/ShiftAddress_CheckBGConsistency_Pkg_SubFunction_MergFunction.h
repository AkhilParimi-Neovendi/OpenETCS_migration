/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* metaData_Out/ */ metaData_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* _L1/ */ _L1;
  NID_PACKET /* _L6/ */ _L6;
  Q_DIR /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  MetadataElement_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
} outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress/ */
extern void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metaData_In/ */
  MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* distance/ */
  kcg_int64 distance,
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ShiftAddress_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

