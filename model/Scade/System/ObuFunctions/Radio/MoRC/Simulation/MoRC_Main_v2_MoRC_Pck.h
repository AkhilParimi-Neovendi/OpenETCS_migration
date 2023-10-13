/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */
#ifndef _MoRC_Main_v2_MoRC_Pck_H_
#define _MoRC_Main_v2_MoRC_Pck_H_

#include "kcg_types.h"
#include "genMsgToRBC_MoRC_Pck_Coder_Pkg.h"
#include "dec_p42_RCM_Utils_Pkg_decoders.h"
#include "dec_m39_RCM_Utils_Pkg_decoders.h"
#include "dec_m38_RCM_Utils_Pkg_decoders.h"
#include "dec_m32_RCM_Utils_Pkg_decoders.h"
#include "safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg.h"
#include "initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* p42_sessionManagementReceived_p/ */ p42_sessionManagementReceived_p;
  kcg_bool /* m32_SystemVersionReceived_p/ */ m32_SystemVersionReceived_p;
  kcg_bool /* m38_initiationOfACommunicationSessionMsgReceived_p/ */ m38_initiationOfACommunicationSessionMsgReceived_p;
  kcg_bool /* m39_AckOfTerminationOfACommunicationSessionReceived_p/ */ m39_AckOfTerminationOfACommunicationSessionReceived_p;
  /* ----------------------- local memories  ------------------------- */
  mobileConnectionContext_T_RCM_Types_Pkg /* connectionStatus_l/ */ connectionStatus_l;
  mobileRegistrationContext_T_RCM_Types_Pkg /* registrationStatus_l/ */ registrationStatus_l;
  sessionStatus_T_RCM_Session_Types_Pkg /* sessionStatus_l/ */ sessionStatus_l;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */ Context_safeRadioConnectionIndication_v2_1;
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */ Context_genMsgToRBC_4;
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */ Context_genMsgToRBC_3;
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */ Context_genMsgToRBC_2;
  outC_genMsgToRBC_MoRC_Pck_Coder_Pkg /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */ Context_genMsgToRBC_1;
  outC_registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */ Context_registeringToTheRadioNetwork_v2_1;
  outC_connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */ Context_connectingToTheRBC_v2_1;
  outC_requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */ Context_requestRadioConnectionSetupFromOBU_v2_1;
  outC_sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */ Context_sessionSequencer_v2_1;
  outC_initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */ Context_initiateTerminatingSession_v2_1;
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */ Context_initiateSession_v2_1;
  outC_dec_m32_RCM_Utils_Pkg_decoders /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */ Context_dec_m32_1;
  outC_dec_m38_RCM_Utils_Pkg_decoders /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */ Context_dec_m38_1;
  outC_dec_m39_RCM_Utils_Pkg_decoders /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */ Context_dec_m39_1;
  outC_dec_p42_RCM_Utils_Pkg_decoders /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */ Context_dec_p42_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* ifMessageToRBC:else: */ else_clock_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:else:else:else: */ else_clock_else_else_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:else:else: */ else_clock_else_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC: */ ifMessageToRBC_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_ENGINE /* ifMessageToRBC:then:_L11/ */ _L11_then_ifMessageToRBC;
  morc_configData_T_RCM_Session_Types_Pkg /* ifMessageToRBC:then:_L12/ */ _L12_then_ifMessageToRBC;
  kcg_int32 /* ifMessageToRBC:then:_L10/ */ _L10_then_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:then:_L9/ */ _L9_then_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:then:_L6/ */ _L6_then_ifMessageToRBC;
  T_TRAIN /* ifMessageToRBC:then:_L7/ */ _L7_then_ifMessageToRBC;
  NID_MESSAGE /* ifMessageToRBC:then:_L8/ */ _L8_then_ifMessageToRBC;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* ifMessageToRBC:else:else:then:_L19/ */ _L19_then_else_else_ifMessageToRBC;
  morc_configData_T_RCM_Session_Types_Pkg /* ifMessageToRBC:else:else:then:_L17/ */ _L17_then_else_else_ifMessageToRBC;
  NID_ENGINE /* ifMessageToRBC:else:else:then:_L18/ */ _L18_then_else_else_ifMessageToRBC;
  kcg_int32 /* ifMessageToRBC:else:else:then:_L16/ */ _L16_then_else_else_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:else:else:then:_L15/ */ _L15_then_else_else_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:else:else:then:_L10/ */ _L10_then_else_else_ifMessageToRBC;
  T_TRAIN /* ifMessageToRBC:else:else:then:_L11/ */ _L11_then_else_else_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:else:else:then:_L12/ */ _L12_then_else_else_ifMessageToRBC;
  NID_MESSAGE /* ifMessageToRBC:else:else:then:_L1/ */ _L1_then_else_else_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:else:else:else:else:_L1/ */ _L1_else_else_else_else_ifMessageToRBC;
  T_TRAIN /* ifMessageToRBC:else:else:else:then:_L2/ */ _L2_then_else_else_else_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:else:else:else:then:_L1/ */ _L1_then_else_else_else_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:else:else:else:then:_L5/ */ _L5_then_else_else_else_ifMessageToRBC;
  NID_MESSAGE /* ifMessageToRBC:else:else:else:then:_L6/ */ _L6_then_else_else_else_ifMessageToRBC;
  kcg_int32 /* ifMessageToRBC:else:else:else:then:_L7/ */ _L7_then_else_else_else_ifMessageToRBC;
  morc_configData_T_RCM_Session_Types_Pkg /* ifMessageToRBC:else:else:else:then:_L9/ */ _L9_then_else_else_else_ifMessageToRBC;
  NID_ENGINE /* ifMessageToRBC:else:else:else:then:_L8/ */ _L8_then_else_else_else_ifMessageToRBC;
  NID_MESSAGE /* ifMessageToRBC:else:then:_L4/ */ _L4_then_else_ifMessageToRBC;
  T_TRAIN /* ifMessageToRBC:else:then:_L3/ */ _L3_then_else_ifMessageToRBC;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* ifMessageToRBC:else:then:_L2/ */ _L2_then_else_ifMessageToRBC;
  kcg_bool /* ifMessageToRBC:else:then:_L5/ */ _L5_then_else_ifMessageToRBC;
  kcg_int32 /* ifMessageToRBC:else:then:_L6/ */ _L6_then_else_ifMessageToRBC;
  morc_configData_T_RCM_Session_Types_Pkg /* ifMessageToRBC:else:then:_L8/ */ _L8_then_else_ifMessageToRBC;
  NID_ENGINE /* ifMessageToRBC:else:then:_L7/ */ _L7_then_else_ifMessageToRBC;
  kcg_bool /* sNotReady/ */ sNotReady;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* p42_sessionManagement/ */ p42_sessionManagement;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m38_initiationOfACommunicationSessionMsg/ */ m38_initiationOfACommunicationSessionMsg;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* m39_AckOfTerminationOfACommunicationSession/ */ m39_AckOfTerminationOfACommunicationSession;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* m32_SystemVersion/ */ m32_SystemVersion;
  kcg_bool /* m154_noCompatibleVersionSupported/ */ m154_noCompatibleVersionSupported;
  kcg_bool /* m159_sessionEstablished/ */ m159_sessionEstablished;
  kcg_bool /* m156_terminationOfACommunicationSession/ */ m156_terminationOfACommunicationSession;
  kcg_bool /* m155_initiationOfACommunicationSession/ */ m155_initiationOfACommunicationSession;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L1/ */ _L1;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L10/ */ _L10;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L9/ */ _L9;
  mobileConnectionCmd_T_RCM_Types_Pkg /* _L8/ */ _L8;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L14/ */ _L14;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L23/ */ _L23;
  mobileRegistrationCmd_T_RCM_Types_Pkg /* _L22/ */ _L22;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L26/ */ _L26;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L27/ */ _L27;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L28/ */ _L28;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L33/ */ _L33;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L34/ */ _L34;
  M_MODE /* _L36/ */ _L36;
  M_MODE /* _L37/ */ _L37;
  M_LEVEL /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L41/ */ _L41;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L42/ */ _L42;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L43/ */ _L43;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L45/ */ _L45;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L46/ */ _L46;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L47/ */ _L47;
  kcg_bool /* _L50/ */ _L50;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L52/ */ _L52;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L51/ */ _L51;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L55/ */ _L55;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L64/ */ _L64;
  kcg_bool /* _L63/ */ _L63;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L60/ */ _L60;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L57/ */ _L57;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L56/ */ _L56;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L65/ */ _L65;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L75/ */ _L75;
  M_MODE /* _L76/ */ _L76;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L77/ */ _L77;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L82/ */ _L82;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L83/ */ _L83;
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg /* _L84/ */ _L84;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L86/ */ _L86;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L90/ */ _L90;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L91/ */ _L91;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L92/ */ _L92;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L93/ */ _L93;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* _L94/ */ _L94;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L95/ */ _L95;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L96/ */ _L96;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L101/ */ _L101;
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg /* _L102/ */ _L102;
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L103/ */ _L103;
  msgFromTrack_T_RCM_MsgTypes_Pkg /* _L104/ */ _L104;
  morc_configData_T_RCM_Session_Types_Pkg /* _L105/ */ _L105;
  NID_RADIO /* _L106/ */ _L106;
  morc_configData_T_RCM_Session_Types_Pkg /* _L107/ */ _L107;
  kcg_int32 /* _L108/ */ _L108;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L110/ */ _L110;
  morc_configData_T_RCM_Session_Types_Pkg /* _L113/ */ _L113;
  kcg_int32 /* _L112/ */ _L112;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L111/ */ _L111;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L116/ */ _L116;
  morc_configData_T_RCM_Session_Types_Pkg /* _L115/ */ _L115;
  kcg_int32 /* _L114/ */ _L114;
  morc_configData_T_RCM_Session_Types_Pkg /* _L118/ */ _L118;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* _L117/ */ _L117;
  morc_configData_T_RCM_Session_Types_Pkg /* _L120/ */ _L120;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L119/ */ _L119;
  morcStatus_T_RCM_Session_Types_Pkg /* _L121/ */ _L121;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L122/ */ _L122;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L123/ */ _L123;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L124/ */ _L124;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L126/ */ _L126;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L127/ */ _L127;
  mobileConnectionContext_T_RCM_Types_Pkg /* _L128/ */ _L128;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L129/ */ _L129;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L130/ */ _L130;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L131/ */ _L131;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L132/ */ _L132;
  kcg_bool /* _L133/ */ _L133;
  kcg_bool /* _L134/ */ _L134;
  kcg_bool /* _L135/ */ _L135;
  kcg_bool /* _L136/ */ _L136;
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg /* _L137/ */ _L137;
  kcg_bool /* _L138/ */ _L138;
  kcg_bool /* _L139/ */ _L139;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L141/ */ _L141;
  kcg_bool /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
  kcg_bool /* _L145/ */ _L145;
} outC_MoRC_Main_v2_MoRC_Pck;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::MoRC_Main_v2/ */
extern void MoRC_Main_v2_MoRC_Pck(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MoRC_Main_v2_reset_MoRC_Pck(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MoRC_Main_v2_init_MoRC_Pck(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC_MoRC_Main_v2_MoRC_Pck Ctxt_MoRC_Main_v2_MoRC_Pck;

/* msg_in/ */
extern msgFromTrack_T_RCM_MsgTypes_Pkg msg_in;
/* eventsAndPhases/ */
extern obuEventsAndPhases_T_RCM_Session_Types_Pkg eventsAndPhases;
/* atPowerUpRadioNetworkID/ */
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg atPowerUpRadioNetworkID;
/* newRadioNetworkIDFromDriver/ */
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg newRadioNetworkIDFromDriver;
/* mode/ */
extern M_MODE mode;
/* level/ */
extern M_LEVEL level;
/* mobileRegistrationContext/ */
extern mobileRegistrationContext_T_RCM_Types_Pkg mobileRegistrationContext;
/* mobileConnectionContext/ */
extern mobileConnectionContext_T_RCM_Types_Pkg mobileConnectionContext;
/* currentTime/ */
extern T_internal_Type_Obu_BasicTypes_Pkg currentTime;
/* reset/ */
extern kcg_bool reset;
/* t_train/ */
extern T_TRAIN t_train;
/* configData/ */
extern morc_configData_T_RCM_Session_Types_Pkg configData;

/* msgToRBC/ */
extern msgToTrack_T_RCM_MsgTypes_Pkg msgToRBC;
/* msgToTrackTriggers/ */
extern msgToTrackTriggers_T_RCM_MsgTypes_Pkg msgToTrackTriggers;
/* sendAPositionReport/ */
extern kcg_bool sendAPositionReport;
/* rejectOrderToContactRBC_or_RIU/ */
extern kcg_bool rejectOrderToContactRBC_or_RIU;
/* infomDriverNoCompatibleVersionSupported/ */
extern kcg_bool infomDriverNoCompatibleVersionSupported;
/* status/ */
extern morcStatus_T_RCM_Session_Types_Pkg status;
/* safeRadioIndication/ */
extern safeRadioConnectionIndication_T_RCM_Session_Types_Pkg safeRadioIndication;
/* mobileConnectionCmd/ */
extern mobileConnectionCmd_T_RCM_Types_Pkg mobileConnectionCmd;
/* mobileRegistrationCmd/ */
extern mobileRegistrationCmd_T_RCM_Types_Pkg mobileRegistrationCmd;
/* memorizeTheLastRadioNetworkID/ */
extern kcg_bool memorizeTheLastRadioNetworkID;
/* lastReceivedRadioNetworkID/ */
extern P45_RadioNetworkRegistration_T_Packet_Types_Pkg lastReceivedRadioNetworkID;
/* notReady/ */
extern kcg_bool notReady;



#endif /* _MoRC_Main_v2_MoRC_Pck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoRC_Main_v2_MoRC_Pck.h
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

