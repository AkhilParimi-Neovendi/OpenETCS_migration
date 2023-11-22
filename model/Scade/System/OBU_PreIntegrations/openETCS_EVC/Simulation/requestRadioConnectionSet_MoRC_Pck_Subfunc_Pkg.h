/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */
#ifndef _requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg_H_
#define _requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mobileConnectionCmd_T_RCM_Types_Pkg /* connectionCmd/ */ connectionCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L8/ */ _L8_Memory_1_struct;
  SSM_ST_repeat_SM /* repeat_SM: */ repeat_SM_state_nxt;
  kcg_bool /* repeat_SM: */ repeat_SM_reset_act;
  kcg_bool /* repeat_SM: */ repeat_SM_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg /* _L334=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2#2)/ */ Context_validate_q_sleepsession_v2_2;
  outC_countDownTimer_MoRC_Pck_Utils /* _L395=(MoRC_Pck::Utils::countDownTimer#1)/ */ Context_countDownTimer_1;
  outC_RisingEdge_digital /* _L380=(digital::RisingEdge#2)/ */ Context_RisingEdge_2;
  outC_RisingEdge_digital /* _L361=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else: */ else_clock_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* repeat_SM:rep_inactive:<1> */ tr_1_clock_rep_inactive_repeat_SM;
  kcg_bool /* repeat_SM:rep_inactive:<2> */ tr_2_clock_rep_inactive_repeat_SM;
  kcg_bool /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<1> */ tr_1_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
  kcg_bool /* repeat_SM:rep_repeatUntilSuccessfulOrADefinedNumberOfTimes:<2> */ tr_2_clock_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM;
  kcg_bool /* repeat_SM:rep_repeatUntilStopConditionMet:<1> */ tr_1_clock_rep_repeatUntilStopConditionMet_repeat_SM;
  kcg_bool /* repeat_SM:rep_repeatUntilStopConditionMet:<2> */ tr_2_clock_rep_repeatUntilStopConditionMet_repeat_SM;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  SSM_ST_repeat_SM /* repeat_SM: */ repeat_SM_state_sel;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/Out/ */ Out_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/M_Input/ */ M_Input_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L5/ */ _L5_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L6/ */ _L6_Memory_1_struct;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* @1/_L7/ */ _L7_Memory_1_struct;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L22/ */ _L22_then_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:then:_L14/ */ _L14_then_else_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:else:then:_L15/ */ _L15_then_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:then:_L16/ */ _L16_then_else_else_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:else:else:then:_L19/ */ _L19_then_else_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:else:then:_L21/ */ _L21_then_else_else_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:else:else:else:else:_L23/ */ _L23_else_else_else_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:else:else:else:_L22/ */ _L22_else_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:else:_L21/ */ _L21_else_else_else_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:else:else:else:_L16/ */ _L16_else_else_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:else:else:_L15/ */ _L15_else_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:else:_L24/ */ _L24_else_else_else_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:else:else:then:_L10/ */ _L10_then_else_else_else_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:else:else:else:then:_L8/ */ _L8_then_else_else_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:else:else:then:_L7/ */ _L7_then_else_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:else:then:_L6/ */ _L6_then_else_else_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:else:else:then:_L5/ */ _L5_then_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:then:_L11/ */ _L11_then_else_else_else_IfBlock1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  mobileConnetionAction_T_RCM_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  kcg_bool /* sRepeat/ */ sRepeat;
  SSM_ST_repeat_SM /* repeat_SM: */ repeat_SM_state_act;
  SSM_TR_repeat_SM /* repeat_SM: */ repeat_SM_fired_strong;
  SSM_TR_repeat_SM /* repeat_SM: */ repeat_SM_fired;
  kcg_bool /* repeatUntilSuccessfulOrADefinedNumberOfTimes/ */ repeatUntilSuccessfulOrADefinedNumberOfTimes;
  kcg_bool /* repeatUntilStopConditionMet/ */ repeatUntilStopConditionMet;
  kcg_bool /* repeatStopCondition/ */ repeatStopCondition;
  kcg_bool /* orderToTerminateSessionReceivedFromTrack/ */ orderToTerminateSessionReceivedFromTrack;
  kcg_bool /* orderToEstablishSessionWithDifferentRBCReceivedFromTrack/ */ orderToEstablishSessionWithDifferentRBCReceivedFromTrack;
  kcg_bool /* triggerRepeat/ */ triggerRepeat;
  kcg_bool /* successfullyConnected/ */ successfullyConnected;
  kcg_bool /* orderToEstablishSessionReceivedFromOBU/ */ orderToEstablishSessionReceivedFromOBU;
  kcg_bool /* considerSessionAsTerminated/ */ considerSessionAsTerminated;
  kcg_bool /* connectedAgain/ */ connectedAgain;
  kcg_bool /* connectionLost/ */ connectionLost;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_sessionManagement_mem/ */ p42_sessionManagement_mem;
  kcg_bool /* _L197/ */ _L197;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L198/ */ _L198;
  kcg_bool /* _L199/ */ _L199;
  kcg_bool /* _L200/ */ _L200;
  kcg_bool /* _L201/ */ _L201;
  kcg_bool /* _L202/ */ _L202;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L205/ */ _L205;
  kcg_bool /* _L206/ */ _L206;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L209/ */ _L209;
  kcg_bool /* _L210/ */ _L210;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L211/ */ _L211;
  kcg_bool /* _L212/ */ _L212;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L213/ */ _L213;
  kcg_bool /* _L214/ */ _L214;
  kcg_bool /* _L215/ */ _L215;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L216/ */ _L216;
  kcg_bool /* _L217/ */ _L217;
  Q_RBC /* _L348/ */ _L348;
  kcg_bool /* _L347/ */ _L347;
  NID_RBC /* _L346/ */ _L346;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L345/ */ _L345;
  kcg_bool /* _L344/ */ _L344;
  kcg_bool /* _L343/ */ _L343;
  kcg_bool /* _L342/ */ _L342;
  kcg_bool /* _L341/ */ _L341;
  Q_RBC /* _L340/ */ _L340;
  kcg_bool /* _L339/ */ _L339;
  MsgSource_T_Common_Types_Pkg /* _L338/ */ _L338;
  Q_RBC /* _L337/ */ _L337;
  kcg_bool /* _L336/ */ _L336;
  kcg_bool /* _L335/ */ _L335;
  kcg_bool /* _L334/ */ _L334;
  kcg_bool /* _L333/ */ _L333;
  MsgSource_T_Common_Types_Pkg /* _L332/ */ _L332;
  NID_C /* _L331/ */ _L331;
  kcg_bool /* _L330/ */ _L330;
  NID_RBC /* _L329/ */ _L329;
  kcg_bool /* _L328/ */ _L328;
  MsgSource_T_Common_Types_Pkg /* _L327/ */ _L327;
  NID_C /* _L326/ */ _L326;
  kcg_bool /* _L325/ */ _L325;
  MsgSource_T_Common_Types_Pkg /* _L324/ */ _L324;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L323/ */ _L323;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L322/ */ _L322;
  kcg_bool /* _L321/ */ _L321;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L320/ */ _L320;
  kcg_bool /* _L319/ */ _L319;
  kcg_bool /* _L318/ */ _L318;
  kcg_bool /* _L317/ */ _L317;
  M_MODE /* _L316/ */ _L316;
  kcg_bool /* _L349/ */ _L349;
  kcg_bool /* _L350/ */ _L350;
  kcg_bool /* _L351/ */ _L351;
  kcg_bool /* _L352/ */ _L352;
  kcg_bool /* _L353/ */ _L353;
  kcg_bool /* _L354/ */ _L354;
  kcg_bool /* _L355/ */ _L355;
  kcg_bool /* _L361/ */ _L361;
  MsgSource_T_Common_Types_Pkg /* _L368/ */ _L368;
  kcg_bool /* _L369/ */ _L369;
  kcg_bool /* _L370/ */ _L370;
  kcg_bool /* _L371/ */ _L371;
  kcg_bool /* _L372/ */ _L372;
  kcg_bool /* _L373/ */ _L373;
  kcg_bool /* _L397/ */ _L397;
  kcg_bool /* _L395/ */ _L395;
  kcg_bool /* _L396/ */ _L396;
  kcg_bool /* _L394/ */ _L394;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L393/ */ _L393;
  kcg_bool /* _L392/ */ _L392;
  kcg_bool /* _L391/ */ _L391;
  kcg_bool /* _L390/ */ _L390;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L389/ */ _L389;
  kcg_bool /* _L388/ */ _L388;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L387/ */ _L387;
  kcg_bool /* _L385/ */ _L385;
  kcg_bool /* _L384/ */ _L384;
  kcg_int32 /* _L381/ */ _L381;
  kcg_bool /* _L380/ */ _L380;
  kcg_bool /* _L399/ */ _L399;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L400/ */ _L400;
  kcg_bool /* _L401/ */ _L401;
  kcg_bool /* _L402/ */ _L402;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L403/ */ _L403;
  kcg_bool /* _L404/ */ _L404;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L405/ */ _L405;
} outC_requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/ */
extern void requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg(
  /* mode/ */
  M_MODE mode,
  /* eventsPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsPhases,
  /* p42_sessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_sessionManagement,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* registrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* connect/ */
  kcg_bool connect,
  /* disconnect/ */
  kcg_bool disconnect,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* maxTimeToMaintainCommSession/ */
  T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession,
  /* noOfRetriesToEstablishASafeRadioConnection/ */
  kcg_int32 noOfRetriesToEstablishASafeRadioConnection,
  outC_requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void requestRadioConnectionSet_reset_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void requestRadioConnectionSet_init_MoRC_Pck_Subfunc_Pkg(
  outC_requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2/
  @1: (linear::Memory#1)
*/

#endif /* _requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** requestRadioConnectionSet_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

