/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P015_to_legacy_loop_TM_conversions_H_
#define _C_P015_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P15_Level23MovementAuthority_T_Packet_Types_Pkg /* P015_legacy_out/ */ P015_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P015_OBU_sectionlist_enum_T_TM /* _L1/ */ _L1;
  P15_Level23MovementAuthority_T_Packet_Types_Pkg /* _L2/ */ _L2;
  kcg_int64 /* _L20/ */ _L20;
  P015_section_enum_T_TM /* _L21/ */ _L21;
  kcg_bool /* _L85/ */ _L85;
  L_SECTION /* _L86/ */ _L86;
  Q_SECTIONTIMER /* _L87/ */ _L87;
  T_SECTIONTIMER /* _L88/ */ _L88;
  D_SECTIONTIMERSTOPLOC /* _L89/ */ _L89;
  P015_OBU_T_TM /* _L132/ */ _L132;
  Q_DIR /* _L133/ */ _L133;
  Q_SCALE /* _L134/ */ _L134;
  V_LOA /* _L135/ */ _L135;
  T_LOA /* _L136/ */ _L136;
  P015_OBU_T_TM /* _L137/ */ _L137;
  L_ENDSECTION /* _L138/ */ _L138;
  Q_SECTIONTIMER /* _L139/ */ _L139;
  T_SECTIONTIMER /* _L140/ */ _L140;
  D_SECTIONTIMERSTOPLOC /* _L142/ */ _L142;
  Q_ENDTIMER /* _L143/ */ _L143;
  T_ENDTIMER /* _L144/ */ _L144;
  D_ENDTIMERSTARTLOC /* _L145/ */ _L145;
  Q_DANGERPOINT /* _L146/ */ _L146;
  D_DP /* _L147/ */ _L147;
  V_RELEASEDP /* _L149/ */ _L149;
  Q_OVERLAP /* _L150/ */ _L150;
  D_STARTOL /* _L151/ */ _L151;
  T_OL /* _L152/ */ _L152;
  D_OL /* _L153/ */ _L153;
  V_RELEASEOL /* _L154/ */ _L154;
  kcg_bool /* _L155/ */ _L155;
  kcg_bool /* _L156/ */ _L156;
  kcg_int64 /* _L157/ */ _L157;
  kcg_bool /* _L158/ */ _L158;
  kcg_int64 /* _L159/ */ _L159;
} outC_C_P015_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P015_to_legacy_loop/ */
extern void C_P015_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int64 i,
  /* P015_in/ */
  P015_OBU_T_TM *P015_in,
  /* P015_section_in/ */
  P015_OBU_sectionlist_enum_T_TM *P015_section_in,
  outC_C_P015_to_legacy_loop_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P015_to_legacy_loop_reset_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P015_to_legacy_loop_init_TM_conversions(
  outC_C_P015_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P015_to_legacy_loop_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P015_to_legacy_loop_TM_conversions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

