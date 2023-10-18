/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_
#define _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management/ */ request_MA_FS_SR_OS_LS_SH_to_MA_L2_Management;
  kcg_bool /* request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management/ */ request_Mode_Change_SB_to_FS_to_Level_and_Mode_Management;
  kcg_bool /* start_ack_to_TIU/ */ start_ack_to_TIU;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _126_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* SM1:State1:<1> */ tr_1_clock_State1_SM1;
  kcg_bool /* SM1:Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH:<1> */ tr_1_clock_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1;
  _126_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _126_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:FS_Mode:_L2/ */ _L2_FS_Mode_SM1;
  kcg_bool /* requestModeChange_SB_FS_to_Mode_and_Level_Management/ */ requestModeChange_SB_FS_to_Mode_and_Level_Management;
  kcg_bool /* requestMA_SoM_L2_3_FS_SR_OS_LS_SH/ */ requestMA_SoM_L2_3_FS_SR_OS_LS_SH;
  _127_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _127_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* acknowledge_MA_L2_FS_from_MA_L2_Management/ */ acknowledge_MA_L2_FS_from_MA_L2_Management;
  kcg_bool /* M_Mode_FS/ */ M_Mode_FS;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L4/ */ _L4;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L9/ */ _L9;
  M_MODE /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  M_MODE /* _L12/ */ _L12;
} outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN/ */
extern void SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg(
  /* Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management/ */
  kcg_bool Status_MA_FS_SR_OS_LS_SH_from_MA_L2_Management,
  /* Status_Mode_Change_from_Level_and_Mode_Management/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *Status_Mode_Change_from_Level_and_Mode_Management,
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);

extern void SoM_SR_FS_OS_LS_SH_SN_UN_reset_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SoM_SR_FS_OS_LS_SH_SN_UN_init_SoMProcedure_Pkg(
  outC_SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SoM_SR_FS_OS_LS_SH_SN_UN_SoMProcedure_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

