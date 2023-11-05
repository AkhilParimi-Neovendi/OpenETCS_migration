/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_
#define _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_

#include "kcg_types.h"
#include "CheckModeExceptions_InformationFilter_Pkg.h"
#include "MapModeToColumn_InformationFilter_Pkg.h"
#include "MapPacketIdToRow_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outPacketAccept/ */ outPacketAccept;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckModeExceptions_InformationFilter_Pkg /* _L263=(InformationFilter_Pkg::CheckModeExceptions#1)/ */ Context_CheckModeExceptions_1;
  outC_MapModeToColumn_InformationFilter_Pkg /* _L262=(InformationFilter_Pkg::MapModeToColumn#1)/ */ Context_MapModeToColumn_1;
  outC_MapPacketIdToRow_InformationFilter_Pkg /* _L261=(InformationFilter_Pkg::MapPacketIdToRow#1)/ */ Context_MapPacketIdToRow_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ModeDecisionTableType_DataDictionary_Pkg /* _L249/ */ _L249;
  ModeDecisionTableActionKind_DataDictionary_Pkg /* _L256/ */ _L256;
  M_MODE /* _L259/ */ _L259;
  kcg_int32 /* _L261/ */ _L261;
  kcg_int32 /* _L262/ */ _L262;
  kcg_bool /* _L263/ */ _L263;
  kcg_int32 /* _L268/ */ _L268;
} outC_ModeFilter_InformationFilter_Pkg_ThirdFilter;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::ThirdFilter::ModeFilter/ */
extern void ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* inOperationModus/ */
  M_MODE inOperationModus,
  /* inPacketId/ */
  kcg_int32 inPacketId,
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ModeFilter_init_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ModeFilter_InformationFilter_Pkg_ThirdFilter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModeFilter_InformationFilter_Pkg_ThirdFilter.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

