/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _removeOverpassedMRSPint_TargetManagement_pkg_internalOperators_H_
#define _removeOverpassedMRSPint_TargetManagement_pkg_internalOperators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Cond/ */ Cond;
  Target_list_MRSP_real_T_TargetManagement_types /* TargetsReduced/ */ TargetsReduced;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Target_list_MRSP_real_T_TargetManagement_types /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  Target_real_T_TargetManagement_types /* _L5/ */ _L5;
  TargetType_T_TargetManagement_types /* _L10/ */ _L10;
  L_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
  V_internal_real_Type_SDM_Types_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L14/ */ _L14;
  Target_list_MRSP_real_T_TargetManagement_types /* _L15/ */ _L15;
  _161_array /* _L16/ */ _L16;
  Target_list_MRSP_real_T_TargetManagement_types /* _L17/ */ _L17;
  Target_list_MRSP_real_T_TargetManagement_types /* _L19/ */ _L19;
  _137_array /* _L21/ */ _L21;
  Target_real_T_TargetManagement_types /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  TargetType_T_TargetManagement_types /* _L24/ */ _L24;
} outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::internalOperators::removeOverpassedMRSPint/ */
extern void removeOverpassedMRSPint_TargetManagement_pkg_internalOperators(
  /* Targets/ */
  Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* d_safe_max_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_safe_max_front,
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void removeOverpassedMRSPint_reset_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void removeOverpassedMRSPint_init_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _removeOverpassedMRSPint_TargetManagement_pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

