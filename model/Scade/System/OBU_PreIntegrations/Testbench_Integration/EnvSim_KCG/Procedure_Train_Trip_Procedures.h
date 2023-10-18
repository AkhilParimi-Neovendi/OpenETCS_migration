/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Procedure_Train_Trip_Procedures_H_
#define _Procedure_Train_Trip_Procedures_H_

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
  kcg_bool /* Ack_SR_Req_To_Driver/ */ Ack_SR_Req_To_Driver;
  kcg_bool /* Ack_TR_Req_To_Driver/ */ Ack_TR_Req_To_Driver;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* Condition_Trip/ */ Condition_Trip;
  kcg_bool /* Condition_5/ */ Condition_5;
  kcg_bool /* Condition_6/ */ Condition_6;
  kcg_bool /* Condition_7/ */ Condition_7;
  kcg_bool /* Condition_8/ */ Condition_8;
  kcg_bool /* Condition_31/ */ Condition_31;
  kcg_bool /* Condition_15/ */ Condition_15;
  kcg_bool /* Condition_50/ */ Condition_50;
  kcg_bool /* Condition_62/ */ Condition_62;
  kcg_bool /* Condition_63/ */ Condition_63;
  kcg_bool /* Condition_68/ */ Condition_68;
  kcg_bool /* Condition_70/ */ Condition_70;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* MA_Req_To_RBC/ */ MA_Req_To_RBC;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM_Train_Trip /* SM_Train_Trip: */ SM_Train_Trip_state_nxt;
  kcg_bool /* SM_Train_Trip: */ SM_Train_Trip_reset_act;
  kcg_bool /* SM_Train_Trip: */ SM_Train_Trip_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Procedure_Start_L1_L2_L3_Procedures /* SM_Train_Trip:Waiting_Driver_Selection:_L1=(Procedures::Procedure_Start_L1_L2_L3#1)/ */ Context_Procedure_Start_L1_L2_L3_1;
  outC_SH_Initiated_By_Driver_On_Procedures /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15=(Procedures::SH_Initiated_By_Driver_On#1)/ */ Context_SH_Initiated_By_Driver_On_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_Train_Trip /* SM_Train_Trip: */ SM_Train_Trip_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM_Train_Trip:Trip_Mode:_L1/ */ _L1_Trip_Mode_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Trip_Mode_Waiting_Ack:_L4/ */ _L4_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Trip_Mode_Waiting_Ack:_L3/ */ _L3_Trip_Mode_Waiting_Ack_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Post_Trip_Mode:_L1/ */ _L1_Post_Trip_Mode_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:SH_Mode:_L1/ */ _L1_SH_Mode_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:UN_Mode:_L1/ */ _L1_UN_Mode_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:SN_Mode:_L1/ */ _L1_SN_Mode_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L20/ */ _L20_Waiting_Driver_Selection_SM_Train_Trip;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* SM_Train_Trip:Waiting_Driver_Selection:_L19/ */ _L19_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L18/ */ _L18_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L17/ */ _L17_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L16/ */ _L16_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L14/ */ _L14_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L13/ */ _L13_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L12/ */ _L12_Waiting_Driver_Selection_SM_Train_Trip;
  M_LEVEL /* SM_Train_Trip:Waiting_Driver_Selection:_L11/ */ _L11_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L1/ */ _L1_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L2/ */ _L2_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L3/ */ _L3_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L4/ */ _L4_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L5/ */ _L5_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L6/ */ _L6_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L7/ */ _L7_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L8/ */ _L8_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L9/ */ _L9_Waiting_Driver_Selection_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Waiting_Driver_Selection:_L10/ */ _L10_Waiting_Driver_Selection_SM_Train_Trip;
  M_LEVEL /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L11/ */ _L11_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L12/ */ _L12_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L13/ */ _L13_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L14/ */ _L14_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L20/ */ _L20_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L19/ */ _L19_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L18/ */ _L18_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L17/ */ _L17_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L16/ */ _L16_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  kcg_bool /* SM_Train_Trip:Procedure_SH_Initiated_By_Driver:_L15/ */ _L15_Procedure_SH_Initiated_By_Driver_SM_Train_Trip;
  SSM_ST_SM_Train_Trip /* SM_Train_Trip: */ SM_Train_Trip_state_sel;
  SSM_TR_SM_Train_Trip /* SM_Train_Trip: */ SM_Train_Trip_fired_strong;
  SSM_TR_SM_Train_Trip /* SM_Train_Trip: */ SM_Train_Trip_fired;
  kcg_bool /* Loc_Procedure_Possible/ */ Loc_Procedure_Possible;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L13/ */ _L13;
  T_Mode_Level_And_Mode_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
} outC_Procedure_Train_Trip_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_Train_Trip/ */
extern void Procedure_Train_Trip_Procedures(
  /* Condition_To_Trip/ */
  kcg_bool Condition_To_Trip,
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Ack_SR/ */
  kcg_bool Driver_Ack_SR,
  /* Driver_Ack_TR/ */
  kcg_bool Driver_Ack_TR,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Driver_Req_Start/ */
  kcg_bool Driver_Req_Start,
  /* MA_SSP_Gradiant_Available/ */
  kcg_bool MA_SSP_Gradiant_Available,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* RCB_Ack_And_EB_Revocked/ */
  kcg_bool RCB_Ack_And_EB_Revocked,
  /* RBC_Authorizes_SR/ */
  kcg_bool RBC_Authorizes_SR,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  /* Valid_Train_Data_Stored/ */
  kcg_bool Valid_Train_Data_Stored,
  outC_Procedure_Train_Trip_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_Train_Trip_reset_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_Train_Trip_init_Procedures(
  outC_Procedure_Train_Trip_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Procedure_Train_Trip_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_Train_Trip_Procedures.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

