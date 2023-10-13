/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _MoRC_HO_MoRC_HO_Pkg_H_
#define _MoRC_HO_MoRC_HO_Pkg_H_

#include "kcg_types.h"
#include "dec_p45_RCM_Utils_Pkg_decoders.h"
#include "mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"
#include "MoRC_Main_v2_MoRC_Pck.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* radioStatus_1/ */ radioStatus_1;
  morcStatus_T_RCM_Session_Types_Pkg /* radioStatus_2/ */ radioStatus_2;
  mobileConnectionCmd_T_RCM_Types_Pkg /* mobileConnectionCmd_1/ */ mobileConnectionCmd_1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* mobileConnectionCmd_2/ */ mobileConnectionCmd_2;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* mobileRegistrationCmd_1/ */ mobileRegistrationCmd_1;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* mobileRegistrationCmd_2/ */ mobileRegistrationCmd_2;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* safeRadioIndication/ */ safeRadioIndication;
  connection_ids_T_Handover_Pkg /* supervisingRBC/ */ supervisingRBC;
  kcg_bool /* bufferInformationFromAcceptingRBC/ */ bufferInformationFromAcceptingRBC;
  kcg_bool /* trainPassesA_RBC_RBC_border_WithItsFrontEnd/ */ trainPassesA_RBC_RBC_border_WithItsFrontEnd;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* msgBus_2_RBC_1/ */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* msgBus_2_RBC_2/ */ msgBus_2_RBC_2;
  kcg_bool /* triggerPositionReport/ */ triggerPositionReport;
  kcg_bool /* triggerTrainData/ */ triggerTrainData;
  kcg_bool /* rejectOrderToContactRBC_or_RIU/ */ rejectOrderToContactRBC_or_RIU;
  kcg_bool /* infomDriverNoCompatibleVersionSupported/ */ infomDriverNoCompatibleVersionSupported;
  kcg_bool /* memorizeTheLastRadioNetworkID/ */ memorizeTheLastRadioNetworkID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* lastReceivedRadioNetworkID/ */ lastReceivedRadioNetworkID;
  kcg_bool /* ready/ */ ready;
  /* -----------------------   local probes  ------------------------- */
  M_MODE /* mode_p/ */ mode_p;
  M_LEVEL /* level_p/ */ level_p;
  mobileRegistrationContext_T_RCM_Types_Pkg /* mobileRegistrationContext_1_p/ */ mobileRegistrationContext_1_p;
  mobileConnectionContext_T_RCM_Types_Pkg /* mobileConnectionContext_1_p/ */ mobileConnectionContext_1_p;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* eventsAndPhases_p/ */ eventsAndPhases_p;
  kcg_bool /* p42_sessionManagementReceived_p/ */ p42_sessionManagementReceived_p;
  kcg_bool /* m39_AckOfTerminationOfACommunicationSessionReceived_p/ */ m39_AckOfTerminationOfACommunicationSessionReceived_p;
  kcg_bool /* m38_initiationOfACommunicationSessionMsgReceived_p/ */ m38_initiationOfACommunicationSessionMsgReceived_p;
  kcg_bool /* m32_SystemVersionReceived_p/ */ m32_SystemVersionReceived_p;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_sessionManagement_p/ */ p42_sessionManagement_p;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* m32_SystemVersion_p/ */ m32_SystemVersion_p;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m38_initiationOfACommunicationSessionMsg_p/ */ m38_initiationOfACommunicationSessionMsg_p;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m39_AckOfTerminationOfACommunicationSession_p/ */ m39_AckOfTerminationOfACommunicationSession_p;
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg /* p45_networkRegistration_p/ */ p45_networkRegistration_p;
  kcg_bool /* p45_networkRegistrationReceived_p/ */ p45_networkRegistrationReceived_p;
  /* ----------------------- local memories  ------------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatus_1/ */ morcStatus_1;
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatus_2/ */ morcStatus_2;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg /* _L114=(Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out#1)/ */ Context_mobileBusRouter_out_1;
  outC_MoRC_Main_v2_MoRC_Pck /* _L1=(MoRC_Pck::MoRC_Main_v2#1)/ */ Context_MoRC_Main_v2_1;
  outC_MoRC_Main_v2_MoRC_Pck /* _L11=(MoRC_Pck::MoRC_Main_v2#2)/ */ Context_MoRC_Main_v2_2;
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg /* _L21=(Handover_Pkg::handoverUtils_Pkg::processHandingOver#1)/ */ Context_processHandingOver_1;
  outC_dec_p42_RCM_Utils_Pkg_decoders /* _L172=(RCM_Utils_Pkg::decoders::dec_p42#1)/ */ Context_dec_p42_1;
  outC_dec_m32_RCM_Utils_Pkg_decoders /* _L177=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */ Context_dec_m32_1;
  outC_dec_m38_RCM_Utils_Pkg_decoders /* _L174=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */ Context_dec_m38_1;
  outC_dec_m39_RCM_Utils_Pkg_decoders /* _L173=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */ Context_dec_m39_1;
  outC_dec_p45_RCM_Utils_Pkg_decoders /* _L184=(RCM_Utils_Pkg::decoders::dec_p45#1)/ */ Context_dec_p45_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* sNotReady/ */ sNotReady;
  kcg_bool /* sendPositionReport_2_handingOverRBC/ */ sendPositionReport_2_handingOverRBC;
  kcg_bool /* sendPositionReport_2_acceptingRBC/ */ sendPositionReport_2_acceptingRBC;
  kcg_bool /* sendTrainData_2_acceptingRBC/ */ sendTrainData_2_acceptingRBC;
  kcg_bool /* useInformationFromAcceptingRBC/ */ useInformationFromAcceptingRBC;
  kcg_bool /* handingOverRBC_is_RBC_1/ */ handingOverRBC_is_RBC_1;
  kcg_bool /* sendPositionReportToRBC_1/ */ sendPositionReportToRBC_1;
  kcg_bool /* sendPositionReportToRBC_2/ */ sendPositionReportToRBC_2;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* morcMsgTriggersToRBC_1/ */ morcMsgTriggersToRBC_1;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* morcMsgTriggersToRBC_2/ */ morcMsgTriggersToRBC_2;
  kcg_bool /* _L10/ */ _L10;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L9/ */ _L9;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L8/ */ _L8;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L7/ */ _L7;
  morcStatus_T_RCM_Session_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L2/ */ _L2;
  msgToTrack_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L20/ */ _L20;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L19/ */ _L19;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L18/ */ _L18;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L17/ */ _L17;
  morcStatus_T_RCM_Session_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L12/ */ _L12;
  msgToTrack_T_RCM_MsgTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  connection_ids_T_Handover_Pkg /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L22/ */ _L22;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L21/ */ _L21;
  M_MODE /* _L35/ */ _L35;
  M_LEVEL /* _L36/ */ _L36;
  M_MODE /* _L37/ */ _L37;
  M_LEVEL /* _L38/ */ _L38;
  M_MODE /* _L39/ */ _L39;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L40/ */ _L40;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L41/ */ _L41;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L42/ */ _L42;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L43/ */ _L43;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L44/ */ _L44;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L45/ */ _L45;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L46/ */ _L46;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L47/ */ _L47;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L48/ */ _L48;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L49/ */ _L49;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  T_TRAIN /* _L52/ */ _L52;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L54/ */ _L54;
  T_TRAIN /* _L55/ */ _L55;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L58/ */ _L58;
  trainPosition_T_TrainPosition_Types_Pck /* _L59/ */ _L59;
  positionedBGs_T_TrainPosition_Types_Pck /* _L60/ */ _L60;
  morcStatus_T_RCM_Session_Types_Pkg /* _L61/ */ _L61;
  morcStatus_T_RCM_Session_Types_Pkg /* _L62/ */ _L62;
  abilityToHandleCommunicationSessions_Handover_Pkg /* _L63/ */ _L63;
  trainProperties_T_TrainPosition_Types_Pck /* _L64/ */ _L64;
  morc_configData_T_RCM_Session_Types_Pkg /* _L65/ */ _L65;
  morc_configData_T_RCM_Session_Types_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L68/ */ _L68;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L70/ */ _L70;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L94/ */ _L94;
  kcg_bool /* _L95/ */ _L95;
  kcg_bool /* _L96/ */ _L96;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L97/ */ _L97;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L110/ */ _L110;
  kcg_bool /* _L109/ */ _L109;
  kcg_bool /* _L107/ */ _L107;
  abilityToHandleCommunicationSessions_Handover_Pkg /* _L106/ */ _L106;
  kcg_bool /* _L105/ */ _L105;
  kcg_bool /* _L102/ */ _L102;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L115/ */ _L115;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L114/ */ _L114;
  T_TRAIN /* _L116/ */ _L116;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L117/ */ _L117;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L118/ */ _L118;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L119/ */ _L119;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L120/ */ _L120;
  morc_configData_T_RCM_Session_Types_Pkg /* _L136/ */ _L136;
  NID_ENGINE /* _L159/ */ _L159;
  P003_TM_TrainToTrack /* _L160/ */ _L160;
  M_VERSION /* _L161/ */ _L161;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* _L177/ */ _L177;
  kcg_bool /* _L176/ */ _L176;
  kcg_bool /* _L175/ */ _L175;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L174/ */ _L174;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L173/ */ _L173;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L172/ */ _L172;
  kcg_bool /* _L171/ */ _L171;
  kcg_bool /* _L170/ */ _L170;
  kcg_bool /* _L169/ */ _L169;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L178/ */ _L178;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L183/ */ _L183;
  M_MODE /* _L182/ */ _L182;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L181/ */ _L181;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L180/ */ _L180;
  M_LEVEL /* _L179/ */ _L179;
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg /* _L184/ */ _L184;
  kcg_bool /* _L185/ */ _L185;
} outC_MoRC_HO_MoRC_HO_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_HO_Pkg::MoRC_HO/ */
extern void MoRC_HO_MoRC_HO_Pkg(
  /* mode/ */
  M_MODE mode,
  /* level/ */
  M_LEVEL level,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* atPowerUpRadioNetworkID/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *atPowerUpRadioNetworkID,
  /* newRadioNetworkIDFromDriver/ */
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *newRadioNetworkIDFromDriver,
  /* mobileRegistrationContext_1/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_1,
  /* mobileRegistrationContext_2/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *mobileRegistrationContext_2,
  /* mobileConnectionContext_1/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_1,
  /* mobileConnectionContext_2/ */
  mobileConnectionContext_T_RCM_Types_Pkg *mobileConnectionContext_2,
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* msgBusToRBC_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* BGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* t_train/ */
  T_TRAIN t_train,
  /* t_train_global/ */
  T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  /* reset/ */
  kcg_bool reset,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* configData/ */
  morc_configData_T_RCM_Session_Types_Pkg *configData,
  /* onboardPhoneNumbers_b/ */
  P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* m_version/ */
  M_VERSION m_version,
  outC_MoRC_HO_MoRC_HO_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoRC_HO_reset_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoRC_HO_init_MoRC_HO_Pkg(outC_MoRC_HO_MoRC_HO_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatus_2/ */ Context_morcStatus_2;
  morcStatus_T_RCM_Session_Types_Pkg /* morcStatus_1/ */ Context_morcStatus_1;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_processHandingOver_Handover_Pkg_handoverUtils_Pkg Context_processHandingOver_1;
  SV_MoRC_Main_v2_MoRC_Pck Context_MoRC_Main_v2_2;
  SV_MoRC_Main_v2_MoRC_Pck Context_MoRC_Main_v2_1;
  SV_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg Context_mobileBusRouter_out_1;
} SV_MoRC_HO_MoRC_HO_Pkg;

extern void kcg_save_SV_MoRC_HO_MoRC_HO_Pkg(
  SV_MoRC_HO_MoRC_HO_Pkg *SV,
  outC_MoRC_HO_MoRC_HO_Pkg *outC);
extern void kcg_load_SV_MoRC_HO_MoRC_HO_Pkg(
  outC_MoRC_HO_MoRC_HO_Pkg *outC,
  SV_MoRC_HO_MoRC_HO_Pkg *SV);



#endif /* _MoRC_HO_MoRC_HO_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoRC_HO_MoRC_HO_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

