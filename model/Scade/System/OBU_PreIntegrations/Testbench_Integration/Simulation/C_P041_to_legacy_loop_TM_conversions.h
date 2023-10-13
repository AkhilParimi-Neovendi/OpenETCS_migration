/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P041_to_legacy_loop_TM_conversions_H_
#define _C_P041_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* P041_legacy_out/ */ P041_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_OBU_sectionlist_enum_T_TM /* _L1/ */ _L1;
  P41_LevelTransitionOrder_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L20/ */ _L20;
  P041_section_enum_T_TM /* _L21/ */ _L21;
  L_ACKLEVELTR /* _L24/ */ _L24;
  NID_NTC /* _L25/ */ _L25;
  M_LEVELTR /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  Q_DIR /* _L28/ */ _L28;
  Q_SCALE /* _L29/ */ _L29;
  D_LEVELTR /* _L30/ */ _L30;
} outC_C_P041_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P041_to_legacy_loop/ */
extern void C_P041_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int64 i,
  /* q_dir_in/ */
  Q_DIR q_dir_in,
  /* q_scale_in/ */
  Q_SCALE q_scale_in,
  /* d_leveltr_in/ */
  D_LEVELTR d_leveltr_in,
  /* P041_section_in/ */
  P041_OBU_sectionlist_enum_T_TM *P041_section_in,
  outC_C_P041_to_legacy_loop_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P041_to_legacy_loop_reset_TM_conversions(
  outC_C_P041_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P041_to_legacy_loop_init_TM_conversions(
  outC_C_P041_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P041_to_legacy_loop_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_to_legacy_loop_TM_conversions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

