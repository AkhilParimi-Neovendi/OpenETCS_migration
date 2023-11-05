/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P021_to_legacy_loop_TM_conversions_H_
#define _C_P021_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P21_GradientProfile_T_Packet_Types_Pkg /* P015_legacy_out/ */ P015_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P021_OBU_sectionlist_enum_T_TM /* _L1/ */ _L1;
  P21_GradientProfile_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L20/ */ _L20;
  P021_section_enum_T_TM /* _L21/ */ _L21;
  P021_OBU_T_TM /* _L132/ */ _L132;
  Q_DIR /* _L133/ */ _L133;
  Q_SCALE /* _L134/ */ _L134;
  G_A /* _L169/ */ _L169;
  Q_GDIR /* _L168/ */ _L168;
  D_GRADIENT /* _L167/ */ _L167;
  kcg_bool /* _L166/ */ _L166;
} outC_C_P021_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P021_to_legacy_loop/ */
extern void C_P021_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* P021_in/ */
  P021_OBU_T_TM *P021_in,
  /* P021_section_in/ */
  P021_OBU_sectionlist_enum_T_TM *P021_section_in,
  outC_C_P021_to_legacy_loop_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P021_to_legacy_loop_reset_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P021_to_legacy_loop_init_TM_conversions(
  outC_C_P021_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P021_to_legacy_loop_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P021_to_legacy_loop_TM_conversions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

