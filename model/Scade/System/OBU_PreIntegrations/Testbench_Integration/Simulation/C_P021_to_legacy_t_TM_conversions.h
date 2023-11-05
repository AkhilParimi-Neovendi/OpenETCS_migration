/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P021_to_legacy_t_TM_conversions_H_
#define _C_P021_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"
#include "C_P021_to_legacy_loop_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P21_GradientProfiles_T_Packet_Types_Pkg /* P021_legacy_out/ */ P021_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P021_to_legacy_loop_TM_conversions /* _L20=(TM_conversions::C_P021_to_legacy_loop#1)/ */ Context_C_P021_to_legacy_loop_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_T_TM /* _L1/ */ _L1;
  P21_GradientProfiles_T_Packet_Types_Pkg /* _L20/ */ _L20;
  _49_array /* _L23/ */ _L23;
  _88_array /* _L26/ */ _L26;
  P021_OBU_sectionlist_enum_T_TM /* _L45/ */ _L45;
} outC_C_P021_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P021_to_legacy_t/ */
extern void C_P021_to_legacy_t_TM_conversions(
  /* P021_in/ */
  P021_OBU_T_TM *P021_in,
  outC_C_P021_to_legacy_t_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P021_to_legacy_t_reset_TM_conversions(
  outC_C_P021_to_legacy_t_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P021_to_legacy_t_init_TM_conversions(
  outC_C_P021_to_legacy_t_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P021_to_legacy_t_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_to_legacy_t_TM_conversions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

