/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _getMRSFromMRSP_SDM_Types_Pkg_H_
#define _getMRSFromMRSP_SDM_Types_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_real_Type_SDM_Types_Pkg /* V_MRSP/ */ V_MRSP;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MRSP_internal_T_TargetManagement_types /* @1/_L91/ */ _L91_searchMRSP_2;
  array_float32_110 /* @1/_L90/ */ _L90_searchMRSP_2;
  array_bool_110 /* @1/_L89/ */ _L89_searchMRSP_2;
  array_bool_110 /* @1/_L88/ */ _L88_searchMRSP_2;
  array_float32_110 /* @1/_L74/ */ _L74_searchMRSP_2;
  MRSP_internal_T_TargetManagement_types /* @1/_L84/ */ _L84_searchMRSP_2;
  array_bool_110 /* @1/_L77/ */ _L77_searchMRSP_2;
  MRSP_internal_T_TargetManagement_types /* @1/_L40/ */ _L40_searchMRSP_2;
  MRSP_internal_T_TargetManagement_types /* @1/_L8/ */ _L8_searchMRSP_2;
  MRSP_internal_T_TargetManagement_types /* _L1/ */ _L1;
  L_internal_real_Type_SDM_Types_Pkg /* _L4/ */ _L4;
  MRSP_internal_section_T_TargetManagement_types /* _L5/ */ _L5;
  array_float32_110 /* _L6/ */ _L6;
  MRSP_internal_section_T_TargetManagement_types /* _L8/ */ _L8;
  V_internal_real_Type_SDM_Types_Pkg /* _L9/ */ _L9;
} outC_getMRSFromMRSP_SDM_Types_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Types_Pkg::getMRSFromMRSP/ */
extern void getMRSFromMRSP_SDM_Types_Pkg(
  /* MRSP/ */
  MRSP_internal_T_TargetManagement_types *MRSP,
  /* d_max_safe_front/ */
  L_internal_real_Type_SDM_Types_Pkg d_max_safe_front,
  outC_getMRSFromMRSP_SDM_Types_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void getMRSFromMRSP_reset_SDM_Types_Pkg(
  outC_getMRSFromMRSP_SDM_Types_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void getMRSFromMRSP_init_SDM_Types_Pkg(
  outC_getMRSFromMRSP_SDM_Types_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: SDM_Types_Pkg::getMRSFromMRSP/
  @1: (SDM_Types_Pkg::searchMRSP#2)
*/

#endif /* _getMRSFromMRSP_SDM_Types_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getMRSFromMRSP_SDM_Types_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

