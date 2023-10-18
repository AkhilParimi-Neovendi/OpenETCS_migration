/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _RequestAck_Acknowledgement_H_
#define _RequestAck_Acknowledgement_H_

#include "kcg_types.h"
#include "Position_In_Ack_Area_Acknowledgement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* needsAckFromDriver/ */ needsAckFromDriver;
  kcg_bool /* service_brake/ */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _118_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Position_In_Ack_Area_Acknowledgement /* _L22=(Acknowledgement::Position_In_Ack_Area#1)/ */ Context_Position_In_Ack_Area_1;
  /* ------------------ clocks of observable data -------------------- */
  _118_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:Waiting:_L2/ */ _L2_Waiting_SM1;
  kcg_bool /* SM1:Waiting:_L1/ */ _L1_Waiting_SM1;
  kcg_bool /* SM1:LaunchRequest:_L13/ */ _L13_LaunchRequest_SM1;
  kcg_bool /* SM1:LaunchRequest:_L12/ */ _L12_LaunchRequest_SM1;
  kcg_bool /* SM1:LaunchRequest:_L11/ */ _L11_LaunchRequest_SM1;
  kcg_bool /* SM1:LaunchRequest:_L10/ */ _L10_LaunchRequest_SM1;
  kcg_bool /* SM1:AckReceived:_L2/ */ _L2_AckReceived_SM1;
  kcg_bool /* SM1:AckReceived:_L1/ */ _L1_AckReceived_SM1;
  _118_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _119_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _119_SSM_TR_SM1 /* SM1: */ SM1_fired;
  Location_T_Obu_BasicTypes_Pkg /* Loc_MaxSafeFrontEnd/ */ Loc_MaxSafeFrontEnd;
  M_POSITION /* Loc_Position/ */ Loc_Position;
  kcg_bool /* Loc_Immediate/ */ Loc_Immediate;
  Location_T_Obu_BasicTypes_Pkg /* Loc_AckLength/ */ Loc_AckLength;
  kcg_bool /* Loc_PositionInAckArea/ */ Loc_PositionInAckArea;
  kcg_bool /* Loc_isSet/ */ Loc_isSet;
  trainPosition_T_TrainPosition_Types_Pck /* _L14/ */ _L14;
  Location_T_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  M_LEVEL /* _L17/ */ _L17;
  M_POSITION /* _L18/ */ _L18;
  T_TransitionType_Level_And_Mode_Types_Pkg /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  Location_T_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  T_LevelTransition_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L22/ */ _L22;
  M_POSITION /* _L23/ */ _L23;
  Location_T_Obu_BasicTypes_Pkg /* _L24/ */ _L24;
  Location_T_Obu_BasicTypes_Pkg /* _L25/ */ _L25;
  kcg_bool /* _L29/ */ _L29;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  NID_LRBG /* _L27/ */ _L27;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L26/ */ _L26;
} outC_RequestAck_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::RequestAck/ */
extern void RequestAck_Acknowledgement(
  /* isAckNeeded/ */
  kcg_bool isAckNeeded,
  /* selected_level_transition/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* levelAck/ */
  kcg_bool levelAck,
  /* IsNewLevel/ */
  kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RequestAck_reset_Acknowledgement(
  outC_RequestAck_Acknowledgement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RequestAck_init_Acknowledgement(
  outC_RequestAck_Acknowledgement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RequestAck_Acknowledgement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RequestAck_Acknowledgement.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

