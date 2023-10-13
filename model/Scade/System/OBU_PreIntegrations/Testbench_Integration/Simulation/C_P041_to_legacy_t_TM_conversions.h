/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _C_P041_to_legacy_t_TM_conversions_H_
#define _C_P041_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"
#include "C_P041_to_legacy_loop_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* P041_legacy_out/ */ P041_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P041_to_legacy_loop_TM_conversions /* _L20=(TM_conversions::C_P041_to_legacy_loop#1)/ */ Context_C_P041_to_legacy_loop_1[7];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P041_OBU_T_TM /* _L1/ */ _L1;
  P041_OBU_sectionlist_enum_T_TM /* _L8/ */ _L8;
  N_ITER /* _L7/ */ _L7;
  D_LEVELTR /* _L6/ */ _L6;
  Q_SCALE /* _L5/ */ _L5;
  Q_DIR /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg /* _L20/ */ _L20;
  _47_array /* _L23/ */ _L23;
  array_int64_7 /* _L24/ */ _L24;
  _5_array /* _L25/ */ _L25;
  _8_array /* _L26/ */ _L26;
} outC_C_P041_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P041_to_legacy_t/ */
extern void C_P041_to_legacy_t_TM_conversions(
  /* P041_in/ */
  P041_OBU_T_TM *P041_in,
  outC_C_P041_to_legacy_t_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P041_to_legacy_t_reset_TM_conversions(
  outC_C_P041_to_legacy_t_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P041_to_legacy_t_init_TM_conversions(
  outC_C_P041_to_legacy_t_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P041_to_legacy_t_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P041_to_legacy_t_TM_conversions.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

