/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Procedure_StartOfMission_Procedures_H_
#define _Procedure_StartOfMission_Procedures_H_

#include "kcg_types.h"
#include "Procedure_Start_L1_L2_L3_Procedures.h"
#include "SH_Initiated_By_Driver_On_Procedures.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Ack_LS_Req_To_Driver/ */ Ack_LS_Req_To_Driver;
  kcg_bool /* Ack_OS_Req_To_Driver/ */ Ack_OS_Req_To_Driver;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Ack_SN_Req_To_Driver/ */ Ack_SN_Req_To_Driver;
  kcg_bool /* Ack_SR_Req_To_Driver/ */ Ack_SR_Req_To_Driver;
  kcg_bool /* Ack_UN_Req_To_Driver/ */ Ack_UN_Req_To_Driver;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* Condition_5/ */ Condition_5;
  kcg_bool /* Condition_6/ */ Condition_6;
  kcg_bool /* Condition_8/ */ Condition_8;
  kcg_bool /* Condition_10/ */ Condition_10;
  kcg_bool /* Condition_15/ */ Condition_15;
  kcg_bool /* Condition_46/ */ Condition_46;
  kcg_bool /* Condition_50/ */ Condition_50;
  kcg_bool /* Condition_58/ */ Condition_58;
  kcg_bool /* Condition_60/ */ Condition_60;
  kcg_bool /* Condition_70/ */ Condition_70;
  kcg_bool /* EB_Requested/ */ EB_Requested;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* MA_Req_To_RBC/ */ MA_Req_To_RBC;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_reset_nxt_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_reset_act_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_state_nxt_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure: */ SM_StartOfMissionProcedure_state_nxt;
  kcg_bool /* SM_StartOfMissionProcedure: */ SM_StartOfMissionProcedure_reset_act;
  kcg_bool /* SM_StartOfMissionProcedure: */ _1_SM_StartOfMissionProcedure_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SH_Initiated_By_Driver_On_Procedures /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */ Context_SH_Initiated_By_Driver_On_1;
  outC_Procedure_Start_L1_L2_L3_Procedures /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */ Context_Procedure_Start_L1_L2_L3_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ _2_SM_SoM_On_clock_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure: */ _3_SM_StartOfMissionProcedure_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_fired_Procedure_On_SM_StartOfMissionProcedure;
  SSM_TR_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_fired_strong_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_state_act_Procedure_On_SM_StartOfMissionProcedure;
  SSM_ST_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On: */ SM_SoM_On_state_sel_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L10/ */ _L10_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L9/ */ _L9_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L8/ */ _L8_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L7/ */ _L7_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L6/ */ _L6_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L5/ */ _L5_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L4/ */ _L4_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L3/ */ _L3_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L2/ */ _L2_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L1/ */ _L1_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  M_LEVEL /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L11/ */ _L11_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L12/ */ _L12_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L13/ */ _L13_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L14/ */ _L14_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L16/ */ _L16_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L17/ */ _L17_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L18/ */ _L18_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L19/ */ _L19_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Waiting_Driver_Selection:_L20/ */ _L20_Waiting_Driver_Selection_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:UN_Mode:_L1/ */ _L1_UN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:SN_Mode:_L1/ */ _L1_SN_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Level_NTC:_L1/ */ _L1_Level_NTC_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Level_0:_L1/ */ _L1_Level_0_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L15/ */ _L15_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L16/ */ _L16_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L17/ */ _L17_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L18/ */ _L18_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L19/ */ _L19_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L20/ */ _L20_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L14/ */ _L14_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L12/ */ _L12_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  M_LEVEL /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L11/ */ _L11_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:Procedure_SH_Initiated_By_Driver:_L21/ */ _L21_Procedure_SH_Initiated_By_Driver_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:Procedure_On:SM_SoM_On:NL_Mode:_L2/ */ _L2_NL_Mode_SM_SoM_On_Procedure_On_SM_StartOfMissionProcedure;
  kcg_bool /* SM_StartOfMissionProcedure:EB_Requested:_L1/ */ _L1_EB_Requested_SM_StartOfMissionProcedure;
  SSM_ST_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure: */ _4_SM_StartOfMissionProcedure_state_sel;
  SSM_TR_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure: */ SM_StartOfMissionProcedure_fired_strong;
  SSM_TR_SM_StartOfMissionProcedure /* SM_StartOfMissionProcedure: */ _5_SM_StartOfMissionProcedure_fired;
} outC_Procedure_StartOfMission_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_StartOfMission/ */
extern void Procedure_StartOfMission_Procedures(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SN/ */
  kcg_bool Driver_Ack_SN,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Ack_UN/ */
  kcg_bool Driver_Ack_UN,
  /* Driver_Req_NL/ */
  kcg_bool Driver_Req_NL,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Permitted_NL/ */
  kcg_bool Train_Permitted_NL,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Valid_Train_Data_Stored/ */
  kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_StartOfMission_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_StartOfMission_reset_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_StartOfMission_init_Procedures(
  outC_Procedure_StartOfMission_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_StartOfMission_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_StartOfMission_Procedures.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

