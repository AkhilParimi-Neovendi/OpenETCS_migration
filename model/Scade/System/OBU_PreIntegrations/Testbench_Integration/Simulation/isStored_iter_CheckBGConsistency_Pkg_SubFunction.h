/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_
#define _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* index/ */ index;
  kcg_bool /* isStored/ */ isStored;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isStored_CheckBGConsistency_Pkg_SubFunction /* _L11=(CheckBGConsistency_Pkg::SubFunction::isStored#1)/ */ Context_isStored_1[41];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_Header_T_BG_Types_Pkg /* _L9/ */ _L9;
  kcg_int64 /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  BG_Header_T_BG_Types_Pkg /* _L14/ */ _L14;
  positionedBGs_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  positionedBGs_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  positionedBG_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  kcg_int64 /* _L27/ */ _L27;
} outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::isStored_iter/ */
extern void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* bgHeader/ */
  BG_Header_T_BG_Types_Pkg *bgHeader,
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isStored_iter_init_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isStored_iter_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

