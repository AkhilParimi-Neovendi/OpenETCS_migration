/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _removeOverpassedMRSP_TargetManagement_pkg_internalOperators_H_
#define _removeOverpassedMRSP_TargetManagement_pkg_internalOperators_H_

#include "kcg_types.h"
#include "removeOverpassedMRSPint_TargetManagement_pkg_internalOperators.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Target_list_MRSP_real_T_TargetManagement_types /* TargetsOut/ */ TargetsOut;
  kcg_bool /* updated/ */ updated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_removeOverpassedMRSPint_TargetManagement_pkg_internalOperators /* _L6=(TargetManagement_pkg::internalOperators::removeOverpassedMRSPint#1)/ */ Context_removeOverpassedMRSPint_1[110];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_real_Type_SDM_Types_Pkg /* _L3/ */ _L3;
  Target_list_MRSP_real_T_TargetManagement_types /* _L4/ */ _L4;
  kcg_int32 /* _L6/ */ _L6;
  array_float32_110 /* _L7/ */ _L7;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  L_internal_real_Type_SDM_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L12/ */ _L12;
  Target_list_MRSP_real_T_TargetManagement_types /* _L11/ */ _L11;
  TargetType_T_TargetManagement_types /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  TargetType_T_TargetManagement_types /* _L22/ */ _L22;
} outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators;

/* ===========  node initialization and cycle functions  =========== */
/* TargetManagement_pkg::internalOperators::removeOverpassedMRSP/ */
extern void removeOverpassedMRSP_TargetManagement_pkg_internalOperators(
  /* Targets/ */
  Target_list_MRSP_real_T_TargetManagement_types *Targets,
  /* d_max_safe_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void removeOverpassedMRSP_reset_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void removeOverpassedMRSP_init_TargetManagement_pkg_internalOperators(
  outC_removeOverpassedMRSP_TargetManagement_pkg_internalOperators *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _removeOverpassedMRSP_TargetManagement_pkg_internalOperators_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** removeOverpassedMRSP_TargetManagement_pkg_internalOperators.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

