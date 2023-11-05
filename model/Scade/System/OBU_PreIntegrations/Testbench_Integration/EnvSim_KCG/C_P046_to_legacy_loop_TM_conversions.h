/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P046_to_legacy_loop_TM_conversions_H_
#define _C_P046_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg /* P046_legacy_out/ */ P046_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P046_OBU_sectionlist_enum_T_TM /* _L1/ */ _L1;
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L20/ */ _L20;
  P046_section_enum_T_TM /* _L21/ */ _L21;
  NID_NTC /* _L25/ */ _L25;
  M_LEVELTR /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  Q_DIR /* _L28/ */ _L28;
} outC_C_P046_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P046_to_legacy_loop/ */
extern void C_P046_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* q_dir_in/ */
  Q_DIR q_dir_in,
  /* P046_section_in/ */
  P046_OBU_sectionlist_enum_T_TM *P046_section_in,
  outC_C_P046_to_legacy_loop_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P046_to_legacy_loop_reset_TM_conversions(
  outC_C_P046_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P046_to_legacy_loop_init_TM_conversions(
  outC_C_P046_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P046_to_legacy_loop_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P046_to_legacy_loop_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

