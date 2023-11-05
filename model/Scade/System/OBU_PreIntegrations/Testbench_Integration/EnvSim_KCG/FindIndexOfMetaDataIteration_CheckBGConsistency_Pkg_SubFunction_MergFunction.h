/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* index/ */ index;
  kcg_int32 /* endAddress/ */ endAddress;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction /* _L7=(CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData#1)/ */ Context_FindIndexOfMetaData_1[29];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  MetadataElement_T_Common_Types_Pkg /* _L12/ */ _L12;
  MetadataElement_T_Common_Types_Pkg /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  _84_array /* _L19/ */ _L19;
} outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration/ */
extern void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* metadata/ */
  Metadata_T_Common_Types_Pkg *metadata,
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexOfMetaDataIteration_init_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

