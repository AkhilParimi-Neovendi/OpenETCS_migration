/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _SoM_NTC_SN_SoMProcedure_Pkg_H_
#define _SoM_NTC_SN_SoMProcedure_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* start_ack_to_TIU/ */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_state_nxt;
  kcg_bool /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_reset_act;
  kcg_bool /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Level_NTC_and_Mode_SN:State1:<1> */ tr_1_clock_State1_Level_NTC_and_Mode_SN;
  SSM_ST_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_state_sel;
  SSM_ST_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Level_NTC_and_Mode_SN:Level_NTC_andMode_SN:_L1/ */ _L1_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN;
  kcg_bool /* requestProposeModeSN_to_Level_and_Mode_Management/ */ requestProposeModeSN_to_Level_and_Mode_Management;
  SSM_TR_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_fired_strong;
  SSM_TR_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Level_NTC_and_Mode_SN_fired;
  kcg_bool /* N_MODE_SN/ */ N_MODE_SN;
  kcg_bool /* _L1/ */ _L1;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L3/ */ _L3;
  M_MODE /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  M_MODE /* _L6/ */ _L6;
} outC_SoM_NTC_SN_SoMProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_NTC_SN/ */
extern void SoM_NTC_SN_SoMProcedure_Pkg(
  /* Status_Mode_Change_from_Level_and_Mode_Management/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);

extern void SoM_NTC_SN_reset_SoMProcedure_Pkg(
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SoM_NTC_SN_init_SoMProcedure_Pkg(
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Level_NTC_and_Mode_SN: */ Context_Level_NTC_and_Mode_SN_reset_nxt;
  kcg_bool /* Level_NTC_and_Mode_SN: */ Context_Level_NTC_and_Mode_SN_reset_act;
  SSM_ST_Level_NTC_and_Mode_SN /* Level_NTC_and_Mode_SN: */ Context_Level_NTC_and_Mode_SN_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_SoM_NTC_SN_SoMProcedure_Pkg;

extern void kcg_save_SV_SoM_NTC_SN_SoMProcedure_Pkg(
  SV_SoM_NTC_SN_SoMProcedure_Pkg *SV,
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC);
extern void kcg_load_SV_SoM_NTC_SN_SoMProcedure_Pkg(
  outC_SoM_NTC_SN_SoMProcedure_Pkg *outC,
  SV_SoM_NTC_SN_SoMProcedure_Pkg *SV);



#endif /* _SoM_NTC_SN_SoMProcedure_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SoM_NTC_SN_SoMProcedure_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

