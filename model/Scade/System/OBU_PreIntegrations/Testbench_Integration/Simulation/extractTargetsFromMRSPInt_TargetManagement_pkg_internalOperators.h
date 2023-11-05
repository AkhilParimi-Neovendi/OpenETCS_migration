/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators_H_
#define _extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* endCondition/ */ endCondition;
  extractTargetsMRSPACC_TargetManagement_pkg /* ACCUout/ */ ACCUout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_internal_section_T_TargetManagement_types /* _L14/ */ _L14;
  MRSP_internal_section_T_TargetManagement_types /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L30/ */ _L30;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L31/ */ _L31;
  Target_list_MRSP_real_T_TargetManagement_types /* _L33/ */ _L33;
  kcg_int32 /* _L32/ */ _L32;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  Target_list_MRSP_real_T_TargetManagement_types /* _L36/ */ _L36;
  MRSP_internal_T_TargetManagement_types /* _L3/ */ _L3;
  extractTargetsMRSPACC_TargetManagement_pkg /* _L53/ */ _L53;
  Target_real_T_TargetManagement_types /* _L62/ */ _L62;
  TargetType_T_TargetManagement_types /* _L63/ */ _L63;
  MRSP_internal_section_T_TargetManagement_types /* _L64/ */ _L64;
  kcg_bool /* _L67/ */ _L67;
  L_internal_real_Type_SDM_Types_Pkg /* _L81/ */ _L81;
  V_internal_real_Type_SDM_Types_Pkg /* _L80/ */ _L80;
  kcg_bool /* _L79/ */ _L79;
  L_internal_real_Type_SDM_Types_Pkg /* _L82/ */ _L82;
  V_internal_real_Type_SDM_Types_Pkg /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
} outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::internalOperators::extractTargetsFromMRSPInt/ */
extern void extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators(
  /* index/ */
  kcg_int32 index,
  /* ACCU/ */
  extractTargetsMRSPACC_TargetManagement_pkg *ACCU,
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void extractTargetsFromMRSPInt_reset_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void extractTargetsFromMRSPInt_init_TargetManagement_pkg_internalOperators(
  outC_extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractTargetsFromMRSPInt_TargetManagement_pkg_internalOperators.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

