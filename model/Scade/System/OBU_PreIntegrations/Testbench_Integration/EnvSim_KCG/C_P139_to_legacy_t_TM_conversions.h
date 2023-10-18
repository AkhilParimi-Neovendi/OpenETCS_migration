/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _C_P139_to_legacy_t_TM_conversions_H_
#define _C_P139_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* P139_legacy_out/ */ P139_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P139_OBU_T_TM /* _L1/ */ _L1;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg /* _L2/ */ _L2;
  V_REVERSE /* _L7/ */ _L7;
  D_REVERSE /* _L6/ */ _L6;
  Q_SCALE /* _L5/ */ _L5;
  Q_DIR /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
} outC_C_P139_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P139_to_legacy_t/ */
extern void C_P139_to_legacy_t_TM_conversions(
  /* P139_in/ */
  P139_OBU_T_TM *P139_in,
  outC_C_P139_to_legacy_t_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P139_to_legacy_t_reset_TM_conversions(
  outC_C_P139_to_legacy_t_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P139_to_legacy_t_init_TM_conversions(
  outC_C_P139_to_legacy_t_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P139_to_legacy_t_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P139_to_legacy_t_TM_conversions.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

