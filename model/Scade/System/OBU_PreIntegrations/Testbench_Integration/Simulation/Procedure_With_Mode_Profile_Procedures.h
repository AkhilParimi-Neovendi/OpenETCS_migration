/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Procedure_With_Mode_Profile_Procedures_H_
#define _Procedure_With_Mode_Profile_Procedures_H_

#include "kcg_types.h"
#include "Mode_Profile_Calculations_Librairies.h"
#include "Counter_pwlinear_int32.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition_15_50_70/ */ Condition_15_50_70;
  kcg_bool /* Condition_34_61_71/ */ Condition_34_61_71;
  kcg_bool /* Condition_40_51_72/ */ Condition_40_51_72;
  kcg_bool /* Condition_73_74/ */ Condition_73_74;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  kcg_bool /* Ack_Req_To_Driver/ */ Ack_Req_To_Driver;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_reset_nxt_Futher_location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_reset_act_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_state_nxt_Futher_location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_reset_nxt_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_reset_act_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_state_nxt_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_state_nxt;
  kcg_bool /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_reset_act;
  kcg_bool /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_reset_nxt;
  kcg_int32 /* Loc_Timer/ */ Loc_Timer;
  kcg_bool /* Loc_Confirmation/ */ Loc_Confirmation;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int32 /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1=(pwlinear::Counter#8)/ */ Context_Counter_8;
  outC_Mode_Profile_Calculations_Librairies /* _L97=(Librairies::Mode_Profile_Calculations#1)/ */ Context_Mode_Profile_Calculations_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ _2_SM_Futher_Location_clock_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ _3_SM_Current_Location_clock_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<2> */ tr_2_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Req_Current_Location:<1> */ tr_1_clock_Req_Current_Location_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1:else: */ else_clock_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1: */ IfBlock1_clock_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_fired_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_TR_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_fired_strong_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_state_act_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ SM_Futher_Location_state_sel_Futher_location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location:Switch_Mode_Confirmed:_L1/ */ _L1_Switch_Mode_Confirmed_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside;
  SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_fired_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_TR_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_fired_strong_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_state_act_Current_Location_SM_Mode_Profile_By_Trackside;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ SM_Current_Location_state_sel_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Ack_Not_Received:_L1/ */ _L1_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Ack_Not_Received:_L2/ */ _L2_Ack_Not_Received_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Mode_Confirmed:_L1/ */ _L1_Switch_Mode_Confirmed_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1:then:_L1/ */ _L1_then_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_int32 /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L1/ */ _L1_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_int32 /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L2/ */ _L2_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L4/ */ _L4_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location:Switch_Autorized_Waiting_Ack:_L6/ */ _L6_Switch_Autorized_Waiting_Ack_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside;
  kcg_bool /* Loc_Ack_Req_To_Driver/ */ Loc_Ack_Req_To_Driver;
  SSM_ST_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_state_sel;
  SSM_TR_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_fired_strong;
  SSM_TR_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ SM_Mode_Profile_By_Trackside_fired;
  kcg_bool /* Loc_Supervision_Condition_Covered/ */ Loc_Supervision_Condition_Covered;
  kcg_bool /* Loc_Mode_Profile_Condition/ */ Loc_Mode_Profile_Condition;
  kcg_bool /* Loc_Mode_Available/ */ Loc_Mode_Available;
  kcg_bool /* _L81/ */ _L81;
  T_Mode_Profile_Level_And_Mode_Types_Pkg /* _L70/ */ _L70;
  Speed_T_Obu_BasicTypes_Pkg /* _L64/ */ _L64;
  T_MA_Level_And_Mode_Types_Pkg /* _L96/ */ _L96;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L97/ */ _L97;
  T_Mode_Level_And_Mode_Types_Pkg /* _L101/ */ _L101;
  trainPosition_T_TrainPosition_Types_Pck /* _L102/ */ _L102;
  kcg_bool /* _L103/ */ _L103;
} outC_Procedure_With_Mode_Profile_Procedures;

/* ===========  node initialization and cycle functions  =========== */
/* Procedures::Procedure_With_Mode_Profile/ */
extern void Procedure_With_Mode_Profile_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_Mode_Profile/ */
  kcg_bool Driver_Ack_Mode_Profile,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Procedure_Possible/ */
  kcg_bool Procedure_Possible,
  /* Profile_Mode/ */
  T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Selected_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Supervision_Modes/ */
  kcg_bool Supervision_Modes,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_With_Mode_Profile_Procedures *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Procedure_With_Mode_Profile_reset_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Procedure_With_Mode_Profile_init_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Loc_Confirmation/ */ Context_Loc_Confirmation;
  kcg_int32 /* Loc_Timer/ */ Context_Loc_Timer;
  kcg_bool /* SM_Mode_Profile_By_Trackside: */ Context_SM_Mode_Profile_By_Trackside_reset_nxt;
  kcg_bool /* SM_Mode_Profile_By_Trackside: */ Context_SM_Mode_Profile_By_Trackside_reset_act;
  SSM_ST_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside: */ Context_SM_Mode_Profile_By_Trackside_state_nxt;
  SSM_ST_SM_Current_Location_Current_Location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ Context_SM_Current_Location_state_nxt;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ Context_SM_Current_Location_reset_act;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Current_Location:SM_Current_Location: */ Context_SM_Current_Location_reset_nxt;
  SSM_ST_SM_Futher_Location_Futher_location_SM_Mode_Profile_By_Trackside /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ Context_SM_Futher_Location_state_nxt;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ Context_SM_Futher_Location_reset_act;
  kcg_bool /* SM_Mode_Profile_By_Trackside:Futher_location:SM_Futher_Location: */ Context_SM_Futher_Location_reset_nxt;
  kcg_bool _1_Context_init;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_Counter_pwlinear_int32 Context_Counter_8;
} SV_Procedure_With_Mode_Profile_Procedures;

extern void kcg_save_SV_Procedure_With_Mode_Profile_Procedures(
  SV_Procedure_With_Mode_Profile_Procedures *SV,
  outC_Procedure_With_Mode_Profile_Procedures *outC);
extern void kcg_load_SV_Procedure_With_Mode_Profile_Procedures(
  outC_Procedure_With_Mode_Profile_Procedures *outC,
  SV_Procedure_With_Mode_Profile_Procedures *SV);



#endif /* _Procedure_With_Mode_Profile_Procedures_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_With_Mode_Profile_Procedures.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

