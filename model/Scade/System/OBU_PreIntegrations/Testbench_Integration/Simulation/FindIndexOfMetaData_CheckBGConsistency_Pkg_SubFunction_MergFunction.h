/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* go_on/ */ go_on;
  MetadataElement_T_Common_Types_Pkg /* metadata/ */ metadata;
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
  NID_PACKET /* _L8/ */ _L8;
  Q_DIR /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  MetadataElement_T_Common_Types_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  MetadataElement_T_Common_Types_Pkg /* _L16/ */ _L16;
  MetadataElement_T_Common_Types_Pkg /* _L17/ */ _L17;
  MetadataElement_T_Common_Types_Pkg /* _L18/ */ _L18;
} outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData/ */
extern void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* acc/ */
  MetadataElement_T_Common_Types_Pkg *acc,
  /* acc1/ */
  MetadataElement_T_Common_Types_Pkg *acc1,
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexOfMetaData_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

