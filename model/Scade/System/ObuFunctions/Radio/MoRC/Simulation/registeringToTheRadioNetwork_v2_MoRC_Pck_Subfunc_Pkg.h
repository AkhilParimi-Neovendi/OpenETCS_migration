/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */
#ifndef _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"
#include "Read_P045_TM.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* memorizeTheLastRadioNetworkID/ */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* lastReceivedRadioNetworkID/ */ lastReceivedRadioNetworkID;
  kcg_bool /* rejectOrderToContactRBC_or_RIU/ */ rejectOrderToContactRBC_or_RIU;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* mobileRegistrationCmd/ */ mobileRegistrationCmd;
  mobileRegistrationContext_T_RCM_Types_Pkg /* mobileRegistrationStatus/ */ mobileRegistrationStatus;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* p45_registrationOrderReceived_p/ */ p45_registrationOrderReceived_p;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L8/ */ _L8_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L8/ */ _L8_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L8/ */ _L8_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L8/ */ _L8_Memory_5_struct;
  kcg_bool /* @5/_L2/ */ _L2_FlipFlopSet_1;
  SSM_ST_Register_SM /* Register_SM: */ Register_SM_state_nxt;
  kcg_bool /* Register_SM: */ Register_SM_reset_act;
  kcg_bool /* Register_SM: */ Register_SM_reset_nxt;
  kcg_bool /* resetDelayedOrderFlag/ */ resetDelayedOrderFlag;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L324=(digital::RisingEdge#8)/ */ Context_RisingEdge_8;
  outC_FallingEdge_digital /* _L255=(digital::FallingEdge#1)/ */ Context_FallingEdge_1;
  outC_RisingEdge_digital /* _L180=(digital::RisingEdge#6)/ */ Context_RisingEdge_6;
  outC_RisingEdge_digital /* _L181=(digital::RisingEdge#7)/ */ Context_RisingEdge_7;
  outC_Read_P045_TM /* _L148=(TM::Read_P045#1)/ */ Context_Read_P045_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Register_SM:Unregistered:<1> */ tr_1_clock_Unregistered_Register_SM;
  kcg_bool /* Register_SM:Registering:<1> */ tr_1_clock_Registering_Register_SM;
  kcg_bool /* Register_SM:Registered:<1> */ tr_1_clock_Registered_Register_SM;
  kcg_bool /* Register_SM:Reregistering:<1> */ tr_1_clock_Reregistering_Register_SM;
  SSM_ST_Register_SM /* Register_SM: */ Register_SM_state_sel;
  SSM_ST_Register_SM /* Register_SM: */ Register_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/Out/ */ Out_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/InitVal/ */ InitVal_Memory_1_struct;
  kcg_bool /* @1/MemCond/ */ MemCond_Memory_1_struct;
  kcg_bool /* @1/Reset/ */ Reset_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/M_Input/ */ M_Input_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L9/ */ _L9_Memory_1_struct;
  kcg_bool /* @1/_L1/ */ _L1_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L2/ */ _L2_Memory_1_struct;
  kcg_bool /* @1/_L3/ */ _L3_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L5/ */ _L5_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L6/ */ _L6_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @1/_L7/ */ _L7_Memory_1_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/Out/ */ Out_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/InitVal/ */ InitVal_Memory_2_struct;
  kcg_bool /* @2/MemCond/ */ MemCond_Memory_2_struct;
  kcg_bool /* @2/Reset/ */ Reset_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/M_Input/ */ M_Input_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L9/ */ _L9_Memory_2_struct;
  kcg_bool /* @2/_L1/ */ _L1_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L2/ */ _L2_Memory_2_struct;
  kcg_bool /* @2/_L3/ */ _L3_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L5/ */ _L5_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L6/ */ _L6_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @2/_L7/ */ _L7_Memory_2_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/Out/ */ Out_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/InitVal/ */ InitVal_Memory_4_struct;
  kcg_bool /* @3/MemCond/ */ MemCond_Memory_4_struct;
  kcg_bool /* @3/Reset/ */ Reset_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/M_Input/ */ M_Input_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L9/ */ _L9_Memory_4_struct;
  kcg_bool /* @3/_L1/ */ _L1_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L2/ */ _L2_Memory_4_struct;
  kcg_bool /* @3/_L3/ */ _L3_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L5/ */ _L5_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L6/ */ _L6_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @3/_L7/ */ _L7_Memory_4_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/Out/ */ Out_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/InitVal/ */ InitVal_Memory_5_struct;
  kcg_bool /* @4/MemCond/ */ MemCond_Memory_5_struct;
  kcg_bool /* @4/Reset/ */ Reset_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/M_Input/ */ M_Input_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L9/ */ _L9_Memory_5_struct;
  kcg_bool /* @4/_L1/ */ _L1_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L2/ */ _L2_Memory_5_struct;
  kcg_bool /* @4/_L3/ */ _L3_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L5/ */ _L5_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L6/ */ _L6_Memory_5_struct;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* @4/_L7/ */ _L7_Memory_5_struct;
  kcg_bool /* @5/FFS_Output/ */ FFS_Output_FlipFlopSet_1;
  kcg_bool /* @5/Init/ */ Init_FlipFlopSet_1;
  kcg_bool /* @5/Reset/ */ Reset_FlipFlopSet_1;
  kcg_bool /* @5/Set/ */ Set_FlipFlopSet_1;
  kcg_bool /* @5/_L13/ */ _L13_FlipFlopSet_1;
  kcg_bool /* @5/_L12/ */ _L12_FlipFlopSet_1;
  kcg_bool /* @5/_L11/ */ _L11_FlipFlopSet_1;
  kcg_bool /* @5/_L6/ */ _L6_FlipFlopSet_1;
  kcg_bool /* @5/_L5/ */ _L5_FlipFlopSet_1;
  kcg_bool /* @5/_L4/ */ _L4_FlipFlopSet_1;
  kcg_bool /* @5/_L10/ */ _L10_FlipFlopSet_1;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* Register_SM:Unregistered:_L2/ */ _L2_Unregistered_Register_SM;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* Register_SM:Registering:_L3/ */ _L3_Registering_Register_SM;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* Register_SM:Registered:_L1/ */ _L1_Registered_Register_SM;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* Register_SM:Reregistering:_L1/ */ _L1_Reregistering_Register_SM;
  kcg_bool /* sResetDelayedOrderFlag/ */ sResetDelayedOrderFlag;
  kcg_bool /* sUnregister/ */ sUnregister;
  kcg_bool /* sRegister/ */ sRegister;
  SSM_TR_Register_SM /* Register_SM: */ Register_SM_fired_strong;
  SSM_TR_Register_SM /* Register_SM: */ Register_SM_fired;
  kcg_bool /* triggerRegistrationOfMobile/ */ triggerRegistrationOfMobile;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* lastReceivedRadioNetworkID_loc/ */ lastReceivedRadioNetworkID_loc;
  kcg_bool /* orderRegistrationImmediately/ */ orderRegistrationImmediately;
  kcg_bool /* orderRegistrationDelayed/ */ orderRegistrationDelayed;
  kcg_bool /* safeRadioConnectionReleased/ */ safeRadioConnectionReleased;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* registrationStatusFromMobile/ */ registrationStatusFromMobile;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* registrationStatus/ */ registrationStatus;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L132/ */ _L132;
  kcg_bool /* _L148/ */ _L148;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L149/ */ _L149;
  CompressedPackets_T_Common_Types_Pkg /* _L147/ */ _L147;
  kcg_bool /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L153/ */ _L153;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L164/ */ _L164;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L163/ */ _L163;
  kcg_bool /* _L165/ */ _L165;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L131/ */ _L131;
  kcg_bool /* _L175/ */ _L175;
  kcg_bool /* _L174/ */ _L174;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L173/ */ _L173;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L176/ */ _L176;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L178/ */ _L178;
  kcg_bool /* _L177/ */ _L177;
  kcg_bool /* _L180/ */ _L180;
  kcg_bool /* _L181/ */ _L181;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L182/ */ _L182;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L183/ */ _L183;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L184/ */ _L184;
  kcg_bool /* _L185/ */ _L185;
  M_LEVEL /* _L199/ */ _L199;
  kcg_bool /* _L198/ */ _L198;
  kcg_bool /* _L197/ */ _L197;
  kcg_bool /* _L196/ */ _L196;
  kcg_bool /* _L195/ */ _L195;
  M_LEVEL /* _L194/ */ _L194;
  M_LEVEL /* _L193/ */ _L193;
  kcg_bool /* _L200/ */ _L200;
  kcg_bool /* _L211/ */ _L211;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L212/ */ _L212;
  kcg_bool /* _L213/ */ _L213;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L214/ */ _L214;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L218/ */ _L218;
  kcg_bool /* _L219/ */ _L219;
  kcg_bool /* _L220/ */ _L220;
  kcg_bool /* _L221/ */ _L221;
  kcg_bool /* _L222/ */ _L222;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  NID_MN /* _L225/ */ _L225;
  NID_MN /* _L228/ */ _L228;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L229/ */ _L229;
  kcg_bool /* _L230/ */ _L230;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L232/ */ _L232;
  kcg_bool /* _L237/ */ _L237;
  kcg_bool /* _L240/ */ _L240;
  kcg_bool /* _L241/ */ _L241;
  kcg_bool /* _L242/ */ _L242;
  kcg_bool /* _L243/ */ _L243;
  kcg_bool /* _L244/ */ _L244;
  kcg_bool /* _L245/ */ _L245;
  kcg_bool /* _L247/ */ _L247;
  kcg_bool /* _L249/ */ _L249;
  kcg_bool /* _L252/ */ _L252;
  kcg_bool /* _L253/ */ _L253;
  kcg_bool /* _L254/ */ _L254;
  kcg_bool /* _L255/ */ _L255;
  kcg_bool /* _L256/ */ _L256;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L289/ */ _L289;
  kcg_bool /* _L290/ */ _L290;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L291/ */ _L291;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L292/ */ _L292;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L293/ */ _L293;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L294/ */ _L294;
  kcg_bool /* _L295/ */ _L295;
  kcg_bool /* _L296/ */ _L296;
  kcg_bool /* _L297/ */ _L297;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L299/ */ _L299;
  kcg_bool /* _L300/ */ _L300;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L302/ */ _L302;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L303/ */ _L303;
  kcg_bool /* _L304/ */ _L304;
  kcg_bool /* _L305/ */ _L305;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L306/ */ _L306;
  kcg_bool /* _L307/ */ _L307;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L308/ */ _L308;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L309/ */ _L309;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L310/ */ _L310;
  kcg_bool /* _L311/ */ _L311;
  kcg_bool /* _L312/ */ _L312;
  kcg_bool /* _L313/ */ _L313;
  kcg_bool /* _L314/ */ _L314;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L315/ */ _L315;
  kcg_bool /* _L316/ */ _L316;
  mobileRegistrationAction_T_RCM_Types_Pkg /* _L317/ */ _L317;
  mobileRegistrationAction_T_RCM_Types_Pkg /* _L318/ */ _L318;
  mobileRegistrationAction_T_RCM_Types_Pkg /* _L319/ */ _L319;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L320/ */ _L320;
  NID_MN /* _L321/ */ _L321;
  kcg_bool /* _L324/ */ _L324;
  mobileHealthStatus_T_RCM_Types_Pkg /* _L325/ */ _L325;
  mobileHealthStatus_T_RCM_Types_Pkg /* _L326/ */ _L326;
  kcg_bool /* _L327/ */ _L327;
  kcg_bool /* _L328/ */ _L328;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L331/ */ _L331;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L332/ */ _L332;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L333/ */ _L333;
  kcg_bool /* _L334/ */ _L334;
  kcg_bool /* _L335/ */ _L335;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L343/ */ _L343;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L345/ */ _L345;
  kcg_int32 /* _L346/ */ _L346;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L347/ */ _L347;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L349/ */ _L349;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L353/ */ _L353;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L354/ */ _L354;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L355/ */ _L355;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L357/ */ _L357;
  kcg_bool /* _L358/ */ _L358;
  kcg_bool /* _L359/ */ _L359;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L360/ */ _L360;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L363/ */ _L363;
  mobileConnectionStatus_T_RCM_Types_Pkg /* _L364/ */ _L364;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L365/ */ _L365;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L366/ */ _L366;
  kcg_bool /* _L367/ */ _L367;
  kcg_bool /* _L369/ */ _L369;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L368/ */ _L368;
} outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/ */
extern void registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
  /* atPowerUpRadioNetworkID/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *_1_atPowerUpRadioNetworkID,
  /* newRadioNetworkIDFromDriver/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *_2_newRadioNetworkIDFromDriver,
  /* p45_registrationOrder/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_registrationOrder,
  /* level/ */
  M_LEVEL level3,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *_4_eventsAndPhases,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* mobileRegistrationContext/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *_5_mobileRegistrationContext,
  /* reset/ */
  kcg_bool reset6,
  /* RadioNetworkID_Default/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *RadioNetworkID_Default,
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2/
  @1: (linear::Memory#1)
  @2: (linear::Memory#2)
  @3: (linear::Memory#4)
  @4: (linear::Memory#5)
  @5: (digital::FlipFlopSet#1)
*/

#endif /* _registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

