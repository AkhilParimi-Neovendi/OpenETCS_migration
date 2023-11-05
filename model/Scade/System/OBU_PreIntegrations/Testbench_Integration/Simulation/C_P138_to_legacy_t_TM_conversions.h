/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P138_to_legacy_t_TM_conversions_H_
#define _C_P138_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* P138_legacy_out/ */ P138_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P138_OBU_T_TM /* _L1/ */ _L1;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg /* _L2/ */ _L2;
  L_REVERSEAREA /* _L7/ */ _L7;
  D_STARTREVERSE /* _L6/ */ _L6;
  Q_SCALE /* _L5/ */ _L5;
  Q_DIR /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
} outC_C_P138_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P138_to_legacy_t/ */
extern void C_P138_to_legacy_t_TM_conversions(
  /* P138_in/ */
  P138_OBU_T_TM *P138_in,
  outC_C_P138_to_legacy_t_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P138_to_legacy_t_reset_TM_conversions(
  outC_C_P138_to_legacy_t_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P138_to_legacy_t_init_TM_conversions(
  outC_C_P138_to_legacy_t_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P138_to_legacy_t_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P138_to_legacy_t_TM_conversions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

