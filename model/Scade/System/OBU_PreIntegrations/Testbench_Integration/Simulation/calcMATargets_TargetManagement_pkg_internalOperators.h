/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _calcMATargets_TargetManagement_pkg_internalOperators_H_
#define _calcMATargets_TargetManagement_pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Target_real_T_TargetManagement_types /* EOA_Target/ */ EOA_Target;
  Target_real_T_TargetManagement_types /* SvL_LoA_Target/ */ SvL_LoA_Target;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* MA_TargetLocation/ */ MA_TargetLocation;
  V_internal_real_Type_SDM_Types_Pkg /* MA_TargetSpeed/ */ MA_TargetSpeed;
  Target_real_T_TargetManagement_types /* _L22/ */ _L22;
  TargetType_T_TargetManagement_types /* _L24/ */ _L24;
  Target_real_T_TargetManagement_types /* _L35/ */ _L35;
  TargetType_T_TargetManagement_types /* _L33/ */ _L33;
  kcg_bool /* _L62/ */ _L62;
  kcg_float64 /* _L63/ */ _L63;
  Target_real_T_TargetManagement_types /* _L64/ */ _L64;
  Target_real_T_TargetManagement_types /* _L65/ */ _L65;
  Target_real_T_TargetManagement_types /* _L66/ */ _L66;
  V_internal_real_Type_SDM_Types_Pkg /* _L68/ */ _L68;
  V_internal_real_Type_SDM_Types_Pkg /* _L69/ */ _L69;
  V_internal_real_Type_SDM_Types_Pkg /* _L70/ */ _L70;
  L_internal_real_Type_SDM_Types_Pkg /* _L71/ */ _L71;
  Target_real_T_TargetManagement_types /* _L73/ */ _L73;
  TargetType_T_TargetManagement_types /* _L74/ */ _L74;
  L_internal_real_Type_SDM_Types_Pkg /* _L78/ */ _L78;
  V_internal_real_Type_SDM_Types_Pkg /* _L77/ */ _L77;
  MA_section_real_T_TargetManagement_types /* _L79/ */ _L79;
  L_internal_real_Type_SDM_Types_Pkg /* _L80/ */ _L80;
  V_internal_real_Type_SDM_Types_Pkg /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  L_internal_real_Type_SDM_Types_Pkg /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  L_internal_real_Type_SDM_Types_Pkg /* _L85/ */ _L85;
  L_internal_real_Type_SDM_Types_Pkg /* _L86/ */ _L86;
  L_internal_real_Type_SDM_Types_Pkg /* _L88/ */ _L88;
  TargetType_T_TargetManagement_types /* _L90/ */ _L90;
  TargetType_T_TargetManagement_types /* _L91/ */ _L91;
  TargetType_T_TargetManagement_types /* _L92/ */ _L92;
  kcg_bool /* _L96/ */ _L96;
  MA_section_real_T_TargetManagement_types /* _L95/ */ _L95;
  TargetType_T_TargetManagement_types /* _L98/ */ _L98;
} outC_calcMATargets_TargetManagement_pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::internalOperators::calcMATargets/ */
extern void calcMATargets_TargetManagement_pkg_internalOperators(
  /* MA_section/ */
  MA_section_real_T_TargetManagement_types *MA_section,
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void calcMATargets_reset_TargetManagement_pkg_internalOperators(
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void calcMATargets_init_TargetManagement_pkg_internalOperators(
  outC_calcMATargets_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _calcMATargets_TargetManagement_pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcMATargets_TargetManagement_pkg_internalOperators.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

