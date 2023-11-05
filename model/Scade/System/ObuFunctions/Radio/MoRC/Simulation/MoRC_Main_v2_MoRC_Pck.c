/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/ObuFunctions/Radio/MoRC/Simulation/config.txt
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Main_v2_MoRC_Pck.h"

/* MoRC_Pck::MoRC_Main_v2/ */
void MoRC_Main_v2_MoRC_Pck(void)
{
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _1_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _2_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _3_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _4_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _5_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _6_msgToRBC_partial;
  /* msgToRBC/ */
  static msgToTrack_T_RCM_MsgTypes_Pkg _7_msgToRBC_partial;
  /* sessionStatus_l/ */
  static sessionStatus_T_RCM_Session_Types_Pkg last_sessionStatus_l;
  /* registrationStatus_l/ */
  static mobileRegistrationContext_T_RCM_Types_Pkg last_registrationStatus_l;
  /* connectionStatus_l/ */
  static mobileConnectionContext_T_RCM_Types_Pkg last_connectionStatus_l;

  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &last_sessionStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &last_registrationStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &last_connectionStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L90,
    &msg_in);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L90,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_p42_2);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L99,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_p42_2.p42_sessionManagement);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L142 = Ctxt_MoRC_Main_v2_MoRC_Pck._L99.valid;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagementReceived_p =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L142;
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L90,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m39_1);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L96,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m39_1.m39_acknowledgementOfTerminationOfACommunicationSession);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L145 = Ctxt_MoRC_Main_v2_MoRC_Pck._L96.valid;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSessionReceived_p =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L145;
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L90,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m38_1);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L95,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m38_1.m38_initiationOfComSession);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L144 = Ctxt_MoRC_Main_v2_MoRC_Pck._L95.valid;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsgReceived_p =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L144;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L100 = kcg_true;
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L90,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L100,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m32_1);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L94,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m32_1.m32_RBC_or_RIU_System_Version);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L143 = Ctxt_MoRC_Main_v2_MoRC_Pck._L94.valid;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersionReceived_p =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L143;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L36 = mode;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L82 = kcg_false;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L33,
    &eventsAndPhases);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L99);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L91,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L95);
  kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L101,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L52,
    &last_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L51,
    &last_connectionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L27,
    &last_sessionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L83,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L105,
    &configData);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L106 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L105.nid_radio_shortNumberStoredOnboard;
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
    Ctxt_MoRC_Main_v2_MoRC_Pck._L36,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L82,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L33,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L91,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L101,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L52,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L51,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L27,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L83,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L106,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateSession_v2_1);
  kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L1,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateSession_v2_1.sessionEstablishCmd);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L92,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L96);
  kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L103,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L94);
  kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L102,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L65,
    &last_connectionStatus_l);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L93,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement);
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L75,
    &eventsAndPhases);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L76 = mode;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L77,
    &last_sessionStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L78 = currentTime;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L79 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L113,
    &configData);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L111 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L113.maxWaitingTimeUntilTerminationOrderReceived;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L112 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L113.noOfRetriesUntilTerminationOrderIsReceived;
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L93,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L75,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L76,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L77,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L78,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L79,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L111,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L112,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L72 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1.initiateTermination;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L73 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1.sendAPositionReport;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L66 = currentTime;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L67 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L107,
    &configData);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L108 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L107.noOfRetriesOfSendingTerminationMessage;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L110 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L107.maxWaitingTimeForAckMessageReceived;
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L1,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L92,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L103,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L102,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L65,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L72,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L66,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L67,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L108,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L110,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1);
  kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L56,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.p42_SessionManagement_out);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L57 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.send_m155_initiationOfACommunicationSession;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L58 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.send_m156_TerminationOfCommunicationSession;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L59 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.send_m159_sessionEstablishedReport;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L60 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.send_m154_noCompatibleVersionSupported;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L61 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.requestSafeRadioConnectionSetup;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L62 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.infomDriverNoCompatibleVersionSupported;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L63 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.requestReleaseOfSafeRadioConnection;
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L64,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.sessionStatus);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L125 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1.notReady;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m159_sessionEstablished =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L59;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L141 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.m159_sessionEstablished;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m156_terminationOfACommunicationSession =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L58;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L140 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.m156_terminationOfACommunicationSession;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m155_initiationOfACommunicationSession =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L57;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L139 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.m155_initiationOfACommunicationSession;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m154_noCompatibleVersionSupported =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L60;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L138 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.m154_noCompatibleVersionSupported;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m155_initiationOfACommunicationSession =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L139;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m156_terminationOfACommunicationSession =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L140;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m159_sessionEstablished =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L141;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m154_noCompatibleVersionSupported =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L138;
  kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
    &msgToTrackTriggers,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L137);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L64);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L130,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L132,
    &last_sessionStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L135 =
    !kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L132,
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L130);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L46,
    &atPowerUpRadioNetworkID);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L47,
    &newRadioNetworkIDFromDriver);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L104,
    &msg_in);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L39 = level;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L45,
    &eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L30,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L37 = mode;
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L34,
    &eventsAndPhases);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L28,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L26,
    &last_registrationStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L14,
    &last_connectionStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L55 = currentTime;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L31 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L115,
    &configData);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L116 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L115.maxTimeToMaintainCommSession;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L114 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L115.noOfTriesToEstablishASafeRadioConnection;
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_MoRC_Pck_Subfunc_Pkg(
    Ctxt_MoRC_Main_v2_MoRC_Pck._L37,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L34,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L56,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L28,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L26,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L14,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L61,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L63,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L55,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L31,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L116,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L114,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_requestRadioConnectionSetupFromOBU_v2_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L2,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_requestRadioConnectionSetupFromOBU_v2_1.connectionCmd);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L43,
    &mobileConnectionContext);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L41,
    &last_registrationStatus_l);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L2,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L43,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L41,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1);
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L8,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1.mobileConnectionCmd);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L9,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1.connectionStatus);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L10 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L42,
    &mobileRegistrationContext);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L40 = reset;
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L118,
    &configData);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L117,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L118.radioNetworkID_Default);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L46,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L47,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L104,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L39,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L45,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L30,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L9,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L42,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L40,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L117,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L19 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1.memorizeTheLastRadioNetworkID;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L21,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1.lastReceivedRadioNetworkID);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L20 =
    Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1.rejectOrderToContactRBC_or_RIU;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L22,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1.mobileRegistrationCmd);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L23,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1.mobileRegistrationStatus);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L23);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L131,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L129,
    &last_registrationStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L134 =
    !kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L129,
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L131);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L9);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L128,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L127,
    &last_connectionStatus_l);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L133 =
    !kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L127,
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L128);
  Ctxt_MoRC_Main_v2_MoRC_Pck.sNotReady = Ctxt_MoRC_Main_v2_MoRC_Pck._L125;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L126 = Ctxt_MoRC_Main_v2_MoRC_Pck.sNotReady;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L136 = Ctxt_MoRC_Main_v2_MoRC_Pck._L126 |
    Ctxt_MoRC_Main_v2_MoRC_Pck._L133 | Ctxt_MoRC_Main_v2_MoRC_Pck._L134 |
    Ctxt_MoRC_Main_v2_MoRC_Pck._L135;
  notReady = Ctxt_MoRC_Main_v2_MoRC_Pck._L136;
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L124,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L123,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L122,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L124);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L122);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L123);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
    &status,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L121);
  kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L120,
    &configData);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L119 =
    Ctxt_MoRC_Main_v2_MoRC_Pck._L120.connectionStatusTimerInterval;
  Ctxt_MoRC_Main_v2_MoRC_Pck.ifMessageToRBC_clock =
    Ctxt_MoRC_Main_v2_MoRC_Pck.m155_initiationOfACommunicationSession;
  /* ifMessageToRBC: */
  if (Ctxt_MoRC_Main_v2_MoRC_Pck.ifMessageToRBC_clock) {
    kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC,
      &configData);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_ifMessageToRBC =
      Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.nid_engine;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_ifMessageToRBC = kcg_lit_int32(0);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_ifMessageToRBC = kcg_true;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_ifMessageToRBC =
      co155_Initiation_of_a_communication_session_Id_Pkg;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_ifMessageToRBC = t_train;
    /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
    genMsgToRBC_MoRC_Pck_Coder_Pkg(
      Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_ifMessageToRBC,
      Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_ifMessageToRBC,
      Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_ifMessageToRBC,
      Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_ifMessageToRBC,
      Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_ifMessageToRBC,
      &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_4);
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC,
      &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_4.radioMessage);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
      &msgToRBC_partial,
      &Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC);
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&msgToRBC, &msgToRBC_partial);
  }
  else {
    Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_ifMessageToRBC =
      Ctxt_MoRC_Main_v2_MoRC_Pck.m156_terminationOfACommunicationSession;
    /* ifMessageToRBC:else: */
    if (Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_ifMessageToRBC) {
      kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
        &Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC,
        &configData);
      Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_ifMessageToRBC =
        Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.nid_engine;
      Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_ifMessageToRBC = kcg_lit_int32(0);
      Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_ifMessageToRBC = kcg_true;
      Ctxt_MoRC_Main_v2_MoRC_Pck._L4_then_else_ifMessageToRBC =
        co156_Termination_of_a_communication_session_Id_Pkg;
      Ctxt_MoRC_Main_v2_MoRC_Pck._L3_then_else_ifMessageToRBC = t_train;
      /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
      genMsgToRBC_MoRC_Pck_Coder_Pkg(
        Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_ifMessageToRBC,
        Ctxt_MoRC_Main_v2_MoRC_Pck._L4_then_else_ifMessageToRBC,
        Ctxt_MoRC_Main_v2_MoRC_Pck._L3_then_else_ifMessageToRBC,
        Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_ifMessageToRBC,
        Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_ifMessageToRBC,
        &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_3);
      kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
        &Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC,
        &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_3.radioMessage);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_7_msgToRBC_partial,
        &Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC);
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_1_msgToRBC_partial,
        &_7_msgToRBC_partial);
    }
    else {
      Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_ifMessageToRBC =
        Ctxt_MoRC_Main_v2_MoRC_Pck.m159_sessionEstablished;
      /* ifMessageToRBC:else:else: */
      if (Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_ifMessageToRBC) {
        kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC,
          &configData);
        kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC,
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers);
        Ctxt_MoRC_Main_v2_MoRC_Pck._L18_then_else_else_ifMessageToRBC =
          Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.nid_engine;
        Ctxt_MoRC_Main_v2_MoRC_Pck._L16_then_else_else_ifMessageToRBC =
          kcg_lit_int32(0);
        Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_else_else_ifMessageToRBC = kcg_true;
        Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_ifMessageToRBC =
          co159_Session_established_Id_Pkg;
        Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_else_else_ifMessageToRBC = t_train;
        /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
        genMsgToRBC_MoRC_Pck_Coder_Pkg(
          Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_else_else_ifMessageToRBC,
          Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_ifMessageToRBC,
          Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_else_else_ifMessageToRBC,
          Ctxt_MoRC_Main_v2_MoRC_Pck._L16_then_else_else_ifMessageToRBC,
          Ctxt_MoRC_Main_v2_MoRC_Pck._L18_then_else_else_ifMessageToRBC,
          &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_2);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC,
          &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_2.radioMessage);
        kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC,
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC);
        if (kcg_true) {
          kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p3,
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_2_msgToRBC_partial,
          &Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC);
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_6_msgToRBC_partial,
          &_2_msgToRBC_partial);
      }
      else {
        Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_else_ifMessageToRBC =
          Ctxt_MoRC_Main_v2_MoRC_Pck.m154_noCompatibleVersionSupported;
        /* ifMessageToRBC:else:else:else: */
        if (Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_else_ifMessageToRBC) {
          kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC,
            &configData);
          Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_else_else_ifMessageToRBC =
            Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.nid_engine;
          Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_else_else_ifMessageToRBC =
            kcg_lit_int32(0);
          Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_else_else_ifMessageToRBC =
            co154_No_Compatible_Version_Support_Id_Pkg;
          Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_else_else_ifMessageToRBC = kcg_true;
          Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_else_else_ifMessageToRBC = t_train;
          /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
          genMsgToRBC_MoRC_Pck_Coder_Pkg(
            Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_else_else_ifMessageToRBC,
            Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_else_else_ifMessageToRBC,
            Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_else_else_ifMessageToRBC,
            Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_else_else_ifMessageToRBC,
            Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_else_else_ifMessageToRBC,
            &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_1);
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC,
            &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_1.radioMessage);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_5_msgToRBC_partial,
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_3_msgToRBC_partial,
            &_5_msgToRBC_partial);
        }
        else {
          kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC,
            (Radio_TrainTrack_Message_T_Radio_Types_Pkg *) &cNoMessageToRBC_MoRC_Pck);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_4_msgToRBC_partial,
            &Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC);
          kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
            &_3_msgToRBC_partial,
            &_4_msgToRBC_partial);
        }
        kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
          &_6_msgToRBC_partial,
          &_3_msgToRBC_partial);
      }
      kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(
        &_1_msgToRBC_partial,
        &_6_msgToRBC_partial);
    }
    kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg(&msgToRBC, &_1_msgToRBC_partial);
  }
  kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L86,
    &eventsAndPhases);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L87 = currentTime;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L88 = reset;
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L8,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L9,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L86,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L87,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L88,
    Ctxt_MoRC_Main_v2_MoRC_Pck._L119,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_safeRadioConnectionIndication_v2_1);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L84,
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_safeRadioConnectionIndication_v2_1.indication);
  kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
    &safeRadioIndication,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L84);
  sendAPositionReport = Ctxt_MoRC_Main_v2_MoRC_Pck._L73;
  infomDriverNoCompatibleVersionSupported = Ctxt_MoRC_Main_v2_MoRC_Pck._L62;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L50 = Ctxt_MoRC_Main_v2_MoRC_Pck._L10 |
    Ctxt_MoRC_Main_v2_MoRC_Pck._L20;
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &lastReceivedRadioNetworkID,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L21);
  memorizeTheLastRadioNetworkID = Ctxt_MoRC_Main_v2_MoRC_Pck._L19;
  kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(
    &mobileRegistrationCmd,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L22);
  rejectOrderToContactRBC_or_RIU = Ctxt_MoRC_Main_v2_MoRC_Pck._L50;
  kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(
    &mobileConnectionCmd,
    &Ctxt_MoRC_Main_v2_MoRC_Pck._L8);
}

#ifndef KCG_USER_DEFINED_INIT
void MoRC_Main_v2_init_MoRC_Pck(void)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;

  Ctxt_MoRC_Main_v2_MoRC_Pck._L145 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L144 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L143 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L142 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L141 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L140 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L139 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L138 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m155_initiationOfACommunicationSession =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m156_terminationOfACommunicationSession =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m159_sessionEstablished = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L137.m154_noCompatibleVersionSupported = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L136 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L135 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L134 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L133 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L132.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L132.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L132.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L132.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L132.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L131.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L131.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L131.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L131.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L131.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L130.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L130.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L130.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L130.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L130.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L129.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L129.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L129.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L129.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L129.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L128.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L127.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L126 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L125 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L124.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L124.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L124.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L124.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L124.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L123.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L123.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L123.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L123.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L123.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L122.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.registration.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.settingUpConnectionHasFailed =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.connection.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L121.session.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L119 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 1; idx1++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L120.onboardPhoneNumbers.aNID_RADIO[idx1].valid =
      kcg_true;
    for (idx = 0; idx < 15; idx++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L120.onboardPhoneNumbers.aNID_RADIO[idx1].telephoneNumber[idx] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L120.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L117.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L117.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L117.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 1; idx3++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L118.onboardPhoneNumbers.aNID_RADIO[idx3].valid =
      kcg_true;
    for (idx2 = 0; idx2 < 15; idx2++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L118.onboardPhoneNumbers.aNID_RADIO[idx3].telephoneNumber[idx2] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L118.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L114 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 1; idx5++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L115.onboardPhoneNumbers.aNID_RADIO[idx5].valid =
      kcg_true;
    for (idx4 = 0; idx4 < 15; idx4++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L115.onboardPhoneNumbers.aNID_RADIO[idx5].telephoneNumber[idx4] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L115.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L116 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L111 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L112 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 1; idx7++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L113.onboardPhoneNumbers.aNID_RADIO[idx7].valid =
      kcg_true;
    for (idx6 = 0; idx6 < 15; idx6++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L113.onboardPhoneNumbers.aNID_RADIO[idx7].telephoneNumber[idx6] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L113.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L110 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L108 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 1; idx9++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L107.onboardPhoneNumbers.aNID_RADIO[idx9].valid =
      kcg_true;
    for (idx8 = 0; idx8 < 15; idx8++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L107.onboardPhoneNumbers.aNID_RADIO[idx9].telephoneNumber[idx8] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L107.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L106 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.radioNetworkID_Default.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.radioNetworkID_Default.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.onboardPhoneNumbers.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.onboardPhoneNumbers.number = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 1; idx11++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L105.onboardPhoneNumbers.aNID_RADIO[idx11].valid =
      kcg_true;
    for (idx10 = 0; idx10 < 15; idx10++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L105.onboardPhoneNumbers.aNID_RADIO[idx11].telephoneNumber[idx10] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.nid_engine = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.maxTimeToMaintainCommSession = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L105.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.source = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.t_train_reference = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.nid_em = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.q_scale = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.d_sr = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.t_sh_rqst = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.d_ref = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.q_dir = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.d_emergencystop = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.radioMetadata.m_version = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.q_media = Q_MEDIA_Balise;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.q_link = Q_LINK_Unlinked;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.t_train = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.nid_lrbg = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketHeaders[idx12].valid = kcg_true;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L104.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.sendingRBC.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.sendingRBC.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.sendingRBC.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L104.sendingRBC.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L103.lrbg = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.versionSupported = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L102.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L101.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L100 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L99.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L96.lrbg = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L95.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.versionSupported = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L94.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L93.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L92.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L91.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.source = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.t_train_reference = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.nid_em = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.q_scale = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.d_sr = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.t_sh_rqst = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.d_ref = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.q_dir = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.d_emergencystop = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.radioMetadata.m_version = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.q_media = Q_MEDIA_Balise;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.q_link = Q_LINK_Unlinked;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.t_train = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketHeaders[idx14].q_dir =
      Q_DIR_Reverse;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketHeaders[idx14].valid = kcg_true;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L90.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.sendingRBC.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.sendingRBC.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.sendingRBC.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L90.sendingRBC.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L88 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L87 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.atPowerUp = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.atPowerDown = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.atStartOfMission = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.modeChangeHasToBeReportedToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainFrontPassesA_RBC_RBC_border = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.startOfMissionProcedureIsGoingOn = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.endOfMissionIsExecuted = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.errorConditionRequiringTerminationDetected =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.trainExitedFromAnRBCArea = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.isInCommunicationSessionWithAnRIU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L86.level_1_isLeft = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L84.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L84.indicator =
    srci_noConnection_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L83.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L83.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L83.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L83.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L83.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L82 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L79 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L78 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L77.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L77.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L77.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L77.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L77.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L76 = M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.atPowerUp = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.atPowerDown = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.atStartOfMission = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.modeChangeHasToBeReportedToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainFrontPassesA_RBC_RBC_border = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.startOfMissionProcedureIsGoingOn = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.endOfMissionIsExecuted = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.errorConditionRequiringTerminationDetected =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.trainExitedFromAnRBCArea = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.isInCommunicationSessionWithAnRIU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L75.level_1_isLeft = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L72 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L73 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L67 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L66 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L65.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L56.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L57 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L58 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L59 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L60 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L61 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L62 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L63 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L64.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L64.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L64.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L64.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L64.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L55 = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L51.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L52.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L52.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L52.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L52.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L52.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L50 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L47.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L47.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L47.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L46.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L46.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L46.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.atPowerUp = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.atPowerDown = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.atStartOfMission = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.modeChangeHasToBeReportedToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainFrontPassesA_RBC_RBC_border = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.startOfMissionProcedureIsGoingOn = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.endOfMissionIsExecuted = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.errorConditionRequiringTerminationDetected =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.trainExitedFromAnRBCArea = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.isInCommunicationSessionWithAnRIU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L45.level_1_isLeft = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L43.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L42.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L42.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L42.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L42.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L42.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L41.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L41.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L41.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L41.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L41.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L40 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L39 = M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L37 = M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L36 = M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.atPowerUp = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.atPowerDown = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.atStartOfMission = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.modeChangeHasToBeReportedToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainFrontPassesA_RBC_RBC_border = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.startOfMissionProcedureIsGoingOn = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.endOfMissionIsExecuted = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.errorConditionRequiringTerminationDetected =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.trainExitedFromAnRBCArea = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.isInCommunicationSessionWithAnRIU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L34.level_1_isLeft = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.atPowerUp = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.atPowerDown = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.atStartOfMission = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.modeChangeHasToBeReportedToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.driverHasManuallyChangedLevel_to_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainFrontPassesStartOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainFrontReachesEndOfAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainFrontInsideInAnAnnouncedRadioHole =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainFrontPassesALevelTransitionBorder =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainFrontPassesA_RBC_RBC_border = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.startOfMissionProcedureCompleted_in_level_2_or_3 =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.isPartOfAnOngoingStartOfMissionProcedure =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.startOfMissionProcedureIsGoingOn = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.endOfMissionIsExecuted = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.triggerDecisionThatNoRadioNetworkIDAvailable =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.errorConditionRequiringTerminationDetected =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainIsRejectedByRBC_duringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.driverClosesTheDeskduringStartOfMission =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.trainExitedFromAnRBCArea = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.isInCommunicationSessionWithAnRIU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L33.level_1_isLeft = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L31 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L30.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L30.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L30.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L30.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L30.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L28.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L28.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L28.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L28.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L28.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L27.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L27.phase = sp_terminated_RCM_Session_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L27.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L27.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L27.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L26.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L26.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L26.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L26.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L26.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L19 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L20 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L21.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L21.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L21.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L22.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L22.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L22.action = mra_nop_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L22.network_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L23.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L23.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L23.healthStatus = mhs_nok_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L23.status = mrs_unregistered_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L23.nid_mn = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L14.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8.action = mca_nop_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.status = mcs_disconnected_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.settingUpConnectionHasFailed = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.connectionLost = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9.isInRadioHole = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L10 = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2.mobileDeviceNo = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2.action = mca_nop_RCM_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.initiatedByOBU = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.initiatedByRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.q_rbc = Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.nid_rbc = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.m38.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.msgSrc = msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.q_rbc =
    Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1.p42.origin.device_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSessionReceived_p =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsgReceived_p =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersionReceived_p = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagementReceived_p = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m155_initiationOfACommunicationSession = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m156_terminationOfACommunicationSession = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m159_sessionEstablished = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m154_noCompatibleVersionSupported = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.versionSupported = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.origin.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.origin.rbc_id = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.origin.device_id = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m32_SystemVersion.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.origin.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.origin.nid_c =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.origin.rbc_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.origin.device_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m39_AckOfTerminationOfACommunicationSession.lrbg =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.origin.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.origin.nid_c =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.origin.rbc_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.m38_initiationOfACommunicationSessionMsg.origin.device_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.msgSrc =
    msrc_undefined_Common_Types_Pkg;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.q_dir = Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.q_rbc =
    Q_RBC_Terminate_communication_session;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.nid_c = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.nid_RBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.nid_radio = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.origin.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.origin.nid_c = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.origin.rbc_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.p42_sessionManagement.origin.device_id =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.ifMessageToRBC_clock = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck.sNotReady = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.onboardPhoneNumbers.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 1; idx17++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx17].valid =
      kcg_true;
    for (idx16 = 0; idx16 < 15; idx16++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx17].telephoneNumber[idx16] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.present = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p3.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 1; idx19++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx19].valid =
      kcg_true;
    for (idx18 = 0; idx18 < 15; idx18++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx19].telephoneNumber[idx18] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p4.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p5.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p9.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx20 = 0; idx20 < 4; idx20++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.tractionIdentity[idx20].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.tractionIdentity[idx20].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_ifMessageToRBC.packets.p11.nid_ntc[idx21] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L3_then_else_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L4_then_else_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_else_else_else_ifMessageToRBC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 1; idx23++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx23].valid =
      kcg_true;
    for (idx22 = 0; idx22 < 15; idx22++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx23].telephoneNumber[idx22] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_else_else_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_else_else_else_ifMessageToRBC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_else_else_else_ifMessageToRBC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L5_then_else_else_else_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p3.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 1; idx25++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx25].valid =
      kcg_true;
    for (idx24 = 0; idx24 < 15; idx24++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx25].telephoneNumber[idx24] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p4.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p5.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p9.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 4; idx26++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx26].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx26].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx27] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L2_then_else_else_else_ifMessageToRBC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p3.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx29 = 0; idx29 < 1; idx29++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx29].valid =
      kcg_true;
    for (idx28 = 0; idx28 < 15; idx28++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx29].telephoneNumber[idx28] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p4.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p5.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p9.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx30 = 0; idx30 < 4; idx30++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx30].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx30].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 5; idx31++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L1_else_else_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx31] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_else_else_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L1_then_else_else_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p3.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx33 = 0; idx33 < 1; idx33++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx33].valid =
      kcg_true;
    for (idx32 = 0; idx32 < 15; idx32++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx33].telephoneNumber[idx32] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p4.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p5.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p9.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx34 = 0; idx34 < 4; idx34++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx34].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx34].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx35 = 0; idx35 < 5; idx35++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx35] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_else_else_ifMessageToRBC = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_else_else_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.present =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p3.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx37 = 0; idx37 < 1; idx37++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx37].valid =
      kcg_true;
    for (idx36 = 0; idx36 < 15; idx36++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p3.aNID_RADIO[idx37].telephoneNumber[idx36] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p4.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p5.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p9.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 4; idx38++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx38].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.tractionIdentity[idx38].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx39 = 0; idx39 < 5; idx39++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L15_then_else_else_ifMessageToRBC.packets.p11.nid_ntc[idx39] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L16_then_else_else_ifMessageToRBC = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L18_then_else_else_ifMessageToRBC = kcg_lit_int32(
      0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 1; idx41++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx41].valid =
      kcg_true;
    for (idx40 = 0; idx40 < 15; idx40++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx41].telephoneNumber[idx40] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L17_then_else_else_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC.number =
    kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC.aNID_RADIO[idx43].valid =
      kcg_true;
    for (idx42 = 0; idx42 < 15; idx42++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L19_then_else_else_ifMessageToRBC.aNID_RADIO[idx43].telephoneNumber[idx42] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck.else_clock_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L8_then_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L7_then_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.present = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.present = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.nid_message =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.t_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.xT_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.xNID_EM =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.header.xNID_TEXTMESSAGE =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p0.packet0.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.NID_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.L_PACKET =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.qscale =
    Q_SCALE_10_cm_scale;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.NID_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.NID_PRVLRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.D_LRBG =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.dirlrbg =
    Q_DIRLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.dlrbg =
    Q_DLRBG_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.L_DOUBTOVER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.L_DOUBTUNDER =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.L_TRAININT =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.V_TRAIN =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.dirtrain =
    Q_DIRTRAIN_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.mode =
    M_MODE_Full_Supervision;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.level =
    M_LEVEL_Level_0;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p1.packet1.NID_NTC =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p3.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p3.number =
    kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 1; idx45++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p3.aNID_RADIO[idx45].valid =
      kcg_true;
    for (idx44 = 0; idx44 < 15; idx44++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p3.aNID_RADIO[idx45].telephoneNumber[idx44] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p4.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p5.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p5.TrainRunningNumber =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p9.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p9.transitionInformation =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.valid = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.nc_cdtrain =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.l_train =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.v_maxtrain =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.m_axleloadcat =
    M_AXLELOADCAT_A;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.m_airtight =
    M_AIRTIGHT_Not_fitted;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.n_axle =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.nIter_tractionIdentity =
    kcg_lit_int32(0);
  for (idx46 = 0; idx46 < 4; idx46++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.tractionIdentity[idx46].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.tractionIdentity[idx46].nid_ctraction =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.nIter_ntc =
    kcg_lit_int32(0);
  for (idx47 = 0; idx47 < 5; idx47++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L6_then_ifMessageToRBC.packets.p11.nid_ntc[idx47] =
      kcg_lit_int32(0);
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L9_then_ifMessageToRBC = kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L10_then_ifMessageToRBC = kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.radioNetworkID_Default.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.radioNetworkID_Default.q_dir =
    Q_DIR_Reverse;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.radioNetworkID_Default.nid_mn =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.nid_radio_shortNumberStoredOnboard =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.noOfRetriesOfSendingTerminationMessage =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.maxWaitingTimeForAckMessageReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.maxWaitingTimeUntilTerminationOrderReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.noOfRetriesUntilTerminationOrderIsReceived =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.connectionStatusTimerInterval =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.onboardPhoneNumbers.valid =
    kcg_true;
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.onboardPhoneNumbers.number =
    kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 1; idx49++) {
    Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx49].valid =
      kcg_true;
    for (idx48 = 0; idx48 < 15; idx48++) {
      Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.onboardPhoneNumbers.aNID_RADIO[idx49].telephoneNumber[idx48] =
        kcg_lit_int32(0);
    }
  }
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.nid_engine =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.maxTimeToMaintainCommSession =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L12_then_ifMessageToRBC.noOfTriesToEstablishASafeRadioConnection =
    kcg_lit_int32(0);
  Ctxt_MoRC_Main_v2_MoRC_Pck._L11_then_ifMessageToRBC = kcg_lit_int32(0);
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_safeRadioConnectionIndication_v2_1);
  /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_4);
  /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_3);
  /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_2);
  /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
  genMsgToRBC_init_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_1);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1);
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_requestRadioConnectionSetupFromOBU_v2_1);
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1);
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1);
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateSession_v2_1);
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_init_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m32_1);
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_init_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m38_1);
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_init_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m39_1);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_init_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_p42_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l,
    (mobileConnectionContext_T_RCM_Types_Pkg *)
      &cNoConnectionContext_RCM_Types_Pkg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l,
    (mobileRegistrationContext_T_RCM_Types_Pkg *)
      &cNoMobileRegistrationContext_RCM_Types_Pkg);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MoRC_Main_v2_reset_MoRC_Pck(void)
{
  /* _L84=(MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2#1)/ */
  safeRadioConnectionIndication_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_safeRadioConnectionIndication_v2_1);
  /* ifMessageToRBC:then:_L6=(MoRC_Pck::Coder_Pkg::genMsgToRBC#4)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_4);
  /* ifMessageToRBC:else:then:_L2=(MoRC_Pck::Coder_Pkg::genMsgToRBC#3)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_3);
  /* ifMessageToRBC:else:else:then:_L12=(MoRC_Pck::Coder_Pkg::genMsgToRBC#2)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_2);
  /* ifMessageToRBC:else:else:else:then:_L1=(MoRC_Pck::Coder_Pkg::genMsgToRBC#1)/ */
  genMsgToRBC_reset_MoRC_Pck_Coder_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_genMsgToRBC_1);
  /* _L19=(MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2#1)/ */
  registeringToTheRadioNetwork_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_registeringToTheRadioNetwork_v2_1);
  /* _L8=(MoRC_Pck::Subfunc_Pkg::connectingToTheRBC_v2#1)/ */
  connectingToTheRBC_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_connectingToTheRBC_v2_1);
  /* _L2=(MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2#1)/ */
  requestRadioConnectionSetupFromOBU_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_requestRadioConnectionSetupFromOBU_v2_1);
  /* _L56=(MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2#1)/ */
  sessionSequencer_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_sessionSequencer_v2_1);
  /* _L72=(MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2#1)/ */
  initiateTerminatingSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateTerminatingSession_v2_1);
  /* _L1=(MoRC_Pck::Subfunc_Pkg::initiateSession_v2#1)/ */
  initiateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_initiateSession_v2_1);
  /* _L94=(RCM_Utils_Pkg::decoders::dec_m32#1)/ */
  dec_m32_reset_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m32_1);
  /* _L95=(RCM_Utils_Pkg::decoders::dec_m38#1)/ */
  dec_m38_reset_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m38_1);
  /* _L96=(RCM_Utils_Pkg::decoders::dec_m39#1)/ */
  dec_m39_reset_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_m39_1);
  /* _L99=(RCM_Utils_Pkg::decoders::dec_p42#2)/ */
  dec_p42_reset_RCM_Utils_Pkg_decoders(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.Context_dec_p42_2);
  kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.connectionStatus_l,
    (mobileConnectionContext_T_RCM_Types_Pkg *)
      &cNoConnectionContext_RCM_Types_Pkg);
  kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.registrationStatus_l,
    (mobileRegistrationContext_T_RCM_Types_Pkg *)
      &cNoMobileRegistrationContext_RCM_Types_Pkg);
  kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
    &Ctxt_MoRC_Main_v2_MoRC_Pck.sessionStatus_l,
    (sessionStatus_T_RCM_Session_Types_Pkg *)
      &cNoSessionStatus_RCM_Session_Types_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MoRC_Main_v2_MoRC_Pck.c
** Generation date: 2023-09-01T13:21:48
*************************************************************$ */

