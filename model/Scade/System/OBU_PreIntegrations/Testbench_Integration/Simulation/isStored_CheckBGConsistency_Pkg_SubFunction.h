/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _isStored_CheckBGConsistency_Pkg_SubFunction_H_
#define _isStored_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* go_on/ */ go_on;
  BG_Header_T_BG_Types_Pkg /* acc_out/ */ acc_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  NID_BG /* _L5/ */ _L5;
  NID_C /* _L6/ */ _L6;
  BG_Header_T_BG_Types_Pkg /* _L7/ */ _L7;
  NID_BG /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  NID_C /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  BG_Header_T_BG_Types_Pkg /* _L14/ */ _L14;
} outC_isStored_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::isStored/ */
extern void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* recivedBG_header/ */
  BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* storedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *storedBG,
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void isStored_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void isStored_init_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isStored_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isStored_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

