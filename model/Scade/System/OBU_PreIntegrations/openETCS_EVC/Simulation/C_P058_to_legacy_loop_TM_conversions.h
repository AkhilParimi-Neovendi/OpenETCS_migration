/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _C_P058_to_legacy_loop_TM_conversions_H_
#define _C_P058_to_legacy_loop_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  IterPacket58_T_Packet_Types_Pkg /* P058_legacy_iter_out/ */ P058_legacy_iter_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_OBU_sectionlist_enum_T_TM /* _L1/ */ _L1;
  IterPacket58_T_Packet_Types_Pkg /* _L2/ */ _L2;
  Q_LGTLOC /* _L5/ */ _L5;
  D_LOC /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L20/ */ _L20;
  P058_section_enum_T_TM /* _L21/ */ _L21;
} outC_C_P058_to_legacy_loop_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P058_to_legacy_loop/ */
extern void C_P058_to_legacy_loop_TM_conversions(
  /* i/ */
  kcg_int32 i,
  /* P058_in/ */
  P058_OBU_sectionlist_enum_T_TM *P058_in,
  outC_C_P058_to_legacy_loop_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P058_to_legacy_loop_reset_TM_conversions(
  outC_C_P058_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P058_to_legacy_loop_init_TM_conversions(
  outC_C_P058_to_legacy_loop_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P058_to_legacy_loop_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_to_legacy_loop_TM_conversions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

