/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Procedure_Start_L1_L2_L3_Procedures_H_
#define _Procedure_Start_L1_L2_L3_Procedures_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Ack_LS_Req_To_Driver/ */ Ack_LS_Req_To_Driver;
  kcg_bool /* Ack_OS_Req_To_Driver/ */ Ack_OS_Req_To_Driver;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Ack_SR_Req_To_Driver/ */ Ack_SR_Req_To_Driver;
  kcg_bool /* Condition_8/ */ Condition_8;
  kcg_bool /* Condition_10_31/ */ Condition_10_31;
  kcg_bool /* Condition_15/ */ Condition_15;
  kcg_bool /* Condition_50/ */ Condition_50;
  kcg_bool /* Condition_70/ */ Condition_70;
  kcg_bool /* MA_Req_To_RBC/ */ MA_Req_To_RBC;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Start_L1_L2_L3 /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_state_nxt;
  kcg_bool /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_reset_act;
  kcg_bool /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_Start_L1_L2_L3 /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM_Start_L1_L2_L3:Level_1:_L2/ */ _L2_Level_1_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:Level_2_3:_L2/ */ _L2_Level_2_3_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:SR_Mode:_L1/ */ _L1_SR_Mode_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:FS_Mode:_L1/ */ _L1_FS_Mode_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:OS_Mode:_L1/ */ _L1_OS_Mode_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:SH_Mode:_L1/ */ _L1_SH_Mode_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:LS_Mode:_L1/ */ _L1_LS_Mode_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:Wait_For_OS:_L2/ */ _L2_Wait_For_OS_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:Wait_For_SH:_L2/ */ _L2_Wait_For_SH_SM_Start_L1_L2_L3;
  kcg_bool /* SM_Start_L1_L2_L3:Wait_For_LS:_L2/ */ _L2_Wait_For_LS_SM_Start_L1_L2_L3;
  SSM_ST_SM_Start_L1_L2_L3 /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_state_sel;
  SSM_TR_SM_Start_L1_L2_L3 /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_fired_strong;
  SSM_TR_SM_Start_L1_L2_L3 /* SM_Start_L1_L2_L3: */ SM_Start_L1_L2_L3_fired;
  T_MA_Level_And_Mode_Types_Pkg /* Loc_Mode_Profile/ */ Loc_Mode_Profile;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  T_MA_Level_And_Mode_Types_Pkg /* _L19/ */ _L19;
} outC_Procedure_Start_L1_L2_L3_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Start_L1_L2_L3/ */
extern void Procedure_Start_L1_L2_L3_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  outC_Procedure_Start_L1_L2_L3_Procedures *outC);

extern void Procedure_Start_L1_L2_L3_reset_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Start_L1_L2_L3_init_Procedures(
  outC_Procedure_Start_L1_L2_L3_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_Start_L1_L2_L3_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Start_L1_L2_L3_Procedures.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

