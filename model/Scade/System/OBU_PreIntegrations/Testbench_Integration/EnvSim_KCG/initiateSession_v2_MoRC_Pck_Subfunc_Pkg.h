/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"
#include "validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sessionCmd_T_RCM_Session_Types_Pkg /* sessionEstablishCmd/ */ sessionEstablishCmd;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg /* _L210=(MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2)/ */ Context_validate_q_sleepsession_v2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  NID_RADIO /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  NID_RBC /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  NID_RBC /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  NID_RBC /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  NID_RBC /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  NID_C /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  mobileConnectionContext_T_RCM_Types_Pkg /* IfBlock1:else:else:then:_L16/ */ _L16_then_else_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:else:then:_L14/ */ _L14_then_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  NID_C /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  NID_RBC /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L12/ */ _L12_then_else_else_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:_L7/ */ _L7_else_else_else_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  sessionStatus_T_RCM_Session_Types_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  NID_RADIO /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  NID_RBC /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  NID_C /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  sessionPhase_T_RCM_Session_Types_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  RBC_Id_T_Common_Types_Pkg /* IfBlock1:else:then:_L13/ */ _L13_then_else_IfBlock1;
  kcg_bool /* initiateSessionViaP42fromOBU/ */ initiateSessionViaP42fromOBU;
  kcg_bool /* initiateSessionFromOBU/ */ initiateSessionFromOBU;
  kcg_bool /* initiateSessionFromRBC/ */ initiateSessionFromRBC;
  NID_C /* nid_c/ */ nid_c;
  NID_RBC /* nid_rbc/ */ nid_rbc;
  NID_RADIO /* nid_radio/ */ nid_radio;
  RBC_Id_T_Common_Types_Pkg /* origin/ */ origin;
  kcg_bool /* rbc_valid/ */ rbc_valid;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L96/ */ _L96;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L97/ */ _L97;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L99/ */ _L99;
  kcg_bool /* _L106/ */ _L106;
  Q_RBC /* _L107/ */ _L107;
  NID_C /* _L108/ */ _L108;
  NID_RBC /* _L109/ */ _L109;
  kcg_bool /* _L112/ */ _L112;
  Q_RBC /* _L113/ */ _L113;
  kcg_bool /* _L114/ */ _L114;
  NID_C /* _L115/ */ _L115;
  NID_RBC /* _L116/ */ _L116;
  kcg_bool /* _L117/ */ _L117;
  kcg_bool /* _L118/ */ _L118;
  M_MODE /* _L126/ */ _L126;
  kcg_bool /* _L129/ */ _L129;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L130/ */ _L130;
  kcg_bool /* _L131/ */ _L131;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L132/ */ _L132;
  kcg_bool /* _L133/ */ _L133;
  kcg_bool /* _L134/ */ _L134;
  RBC_Id_T_Common_Types_Pkg /* _L135/ */ _L135;
  kcg_bool /* _L136/ */ _L136;
  NID_C /* _L137/ */ _L137;
  NID_RBC /* _L138/ */ _L138;
  kcg_bool /* _L139/ */ _L139;
  kcg_bool /* _L140/ */ _L140;
  kcg_bool /* _L141/ */ _L141;
  kcg_bool /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
  kcg_bool /* _L159/ */ _L159;
  kcg_bool /* _L158/ */ _L158;
  kcg_bool /* _L157/ */ _L157;
  kcg_bool /* _L156/ */ _L156;
  kcg_bool /* _L155/ */ _L155;
  kcg_bool /* _L154/ */ _L154;
  kcg_bool /* _L153/ */ _L153;
  obuEventsAndPhases_T_RCM_Session_Types_Pkg /* _L152/ */ _L152;
  kcg_bool /* _L185/ */ _L185;
  sessionStatus_T_RCM_Session_Types_Pkg /* _L184/ */ _L184;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L183/ */ _L183;
  kcg_bool /* _L182/ */ _L182;
  sessionPhase_T_RCM_Session_Types_Pkg /* _L181/ */ _L181;
  kcg_bool /* _L187/ */ _L187;
  kcg_bool /* _L188/ */ _L188;
  kcg_bool /* _L194/ */ _L194;
  kcg_bool /* _L193/ */ _L193;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L192/ */ _L192;
  kcg_bool /* _L190/ */ _L190;
  mobileRegistrationStatus_T_RCM_Types_Pkg /* _L189/ */ _L189;
  MsgSource_T_Common_Types_Pkg /* _L196/ */ _L196;
  kcg_bool /* _L197/ */ _L197;
  MsgSource_T_Common_Types_Pkg /* _L199/ */ _L199;
  MsgSource_T_Common_Types_Pkg /* _L200/ */ _L200;
  MsgSource_T_Common_Types_Pkg /* _L201/ */ _L201;
  kcg_bool /* _L202/ */ _L202;
  kcg_bool /* _L203/ */ _L203;
  kcg_bool /* _L204/ */ _L204;
  kcg_bool /* _L205/ */ _L205;
  MsgSource_T_Common_Types_Pkg /* _L206/ */ _L206;
  kcg_bool /* _L207/ */ _L207;
  kcg_bool /* _L208/ */ _L208;
  kcg_bool /* _L209/ */ _L209;
  kcg_bool /* _L210/ */ _L210;
  kcg_bool /* _L211/ */ _L211;
  kcg_bool /* _L212/ */ _L212;
  kcg_bool /* _L214/ */ _L214;
  sessionCmd_T_RCM_Session_Types_Pkg /* _L215/ */ _L215;
  kcg_bool /* _L216/ */ _L216;
  kcg_bool /* _L217/ */ _L217;
  kcg_bool /* _L218/ */ _L218;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L219/ */ _L219;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg /* _L220/ */ _L220;
  Q_RBC /* _L222/ */ _L222;
  NID_C /* _L223/ */ _L223;
  NID_RADIO /* _L224/ */ _L224;
  NID_RBC /* _L225/ */ _L225;
  RBC_Id_T_Common_Types_Pkg /* _L226/ */ _L226;
  kcg_bool /* _L227/ */ _L227;
  kcg_bool /* _L228/ */ _L228;
  mobileRegistrationContext_T_RCM_Types_Pkg /* _L229/ */ _L229;
} outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiateSession_v2/ */
extern void initiateSession_v2_MoRC_Pck_Subfunc_Pkg(
  /* mode/ */
  M_MODE mode,
  /* prevSessionTerminatedDueToLossOfSafeRadioConnection/ */
  kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* eventsAndPhases/ */
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *eventsAndPhases,
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* m38_initiationOfACommunicationSessionMsg/ */
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *m38_initiationOfACommunicationSessionMsg,
  /* registrationStatus/ */
  mobileRegistrationContext_T_RCM_Types_Pkg *registrationStatus,
  /* connectionStatus/ */
  mobileConnectionContext_T_RCM_Types_Pkg *connectionStatus,
  /* sessionStatus/ */
  sessionStatus_T_RCM_Session_Types_Pkg *sessionStatus,
  /* lastKnownRBC/ */
  sessionStatus_T_RCM_Session_Types_Pkg *lastKnownRBC,
  /* nid_radio_shortNumberStoredOnboard/ */
  NID_RADIO nid_radio_shortNumberStoredOnboard,
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void initiateSession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void initiateSession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiateSession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _initiateSession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** initiateSession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

