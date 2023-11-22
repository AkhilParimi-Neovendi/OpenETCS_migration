/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _extractTargetsFromMRSP_TargetManagement_pkg_internalOperators_H_
#define _extractTargetsFromMRSP_TargetManagement_pkg_internalOperators_H_

#include "kcg_types.h"
#include "extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  extractTargetsMRSPACC_TargetManagement_pkg /* TargetsOfMRSP/ */ TargetsOfMRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators /* _L3=(TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt#1)/ */ Context_extractTargetsFromMRSPInt_1[110];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  extractTargetsMRSPACC_TargetManagement_pkg /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
  MRSP_internal_T_TargetManagement_types /* _L7/ */ _L7;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  _184_array /* _L14/ */ _L14;
  MRSP_internal_T_TargetManagement_types /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  Target_list_MRSP_real_T_TargetManagement_types /* _L24/ */ _L24;
} outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSP/ */
extern void extractTargetsFromMRSP_TargetManagement_pkg_internalOperators(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void extractTargetsFromMRSP_reset_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void extractTargetsFromMRSP_init_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSP_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _extractTargetsFromMRSP_TargetManagement_pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractTargetsFromMRSP_TargetManagement_pkg_internalOperators.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

