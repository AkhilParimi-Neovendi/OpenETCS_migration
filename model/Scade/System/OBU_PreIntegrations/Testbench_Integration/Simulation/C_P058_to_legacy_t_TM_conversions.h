/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _C_P058_to_legacy_t_TM_conversions_H_
#define _C_P058_to_legacy_t_TM_conversions_H_

#include "kcg_types.h"
#include "C_P058_to_legacy_loop_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P58_PositionReportParameters_T_Packet_Types_Pkg /* P058_legacy_out/ */ P058_legacy_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P058_to_legacy_loop_TM_conversions /* _L20=(TM_conversions::C_P058_to_legacy_loop#1)/ */ Context_C_P058_to_legacy_loop_1[2];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P058_OBU_T_TM /* _L1/ */ _L1;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L2/ */ _L2;
  P058_OBU_sectionlist_enum_T_TM /* _L10/ */ _L10;
  N_ITER /* _L9/ */ _L9;
  M_LOC /* _L8/ */ _L8;
  D_CYCLOC /* _L7/ */ _L7;
  T_CYCLOC /* _L6/ */ _L6;
  Q_SCALE /* _L5/ */ _L5;
  Q_DIR /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  IterPacket58List_T_Packet_Types_Pkg /* _L20/ */ _L20;
  _99_array /* _L22/ */ _L22;
} outC_C_P058_to_legacy_t_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::C_P058_to_legacy_t/ */
extern void C_P058_to_legacy_t_TM_conversions(
  /* P058_in/ */
  P058_OBU_T_TM *P058_in,
  outC_C_P058_to_legacy_t_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void C_P058_to_legacy_t_reset_TM_conversions(
  outC_C_P058_to_legacy_t_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void C_P058_to_legacy_t_init_TM_conversions(
  outC_C_P058_to_legacy_t_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _C_P058_to_legacy_t_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P058_to_legacy_t_TM_conversions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

