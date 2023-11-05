/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Manage_EmergencyStop_TA_EmergencyStop_H_
#define _Manage_EmergencyStop_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"
#include "Send_M147_TM_radio_messages.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* rejectNewMA/ */ rejectNewMA;
  Radio_TrainTrack_Message_T_TM_transitional /* message147/ */ message147;
  kcg_bool /* tripTrain/ */ tripTrain;
  kcg_bool /* cesAccepted/ */ cesAccepted;
  kcg_bool /* updateEOA/ */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* newEOA/ */ newEOA;
  kcg_bool /* cesRevoked/ */ cesRevoked;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus_out/ */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Process_Unconditional_TA_EmergencyStop /* _L57=(TA_EmergencyStop::ES_Process_Unconditional#1)/ */ Context_ES_Process_Unconditional_1;
  outC_Send_M147_TM_radio_messages /* _L111=(TM_radio_messages::Send_M147#2)/ */ Context_Send_M147_2;
  outC_C_legacy_P001_TM_conversions_TrainToTrack /* _L110=(TM_conversions_TrainToTrack::C_legacy_P001#1)/ */ Context_C_legacy_P001_1;
  outC_C_legacy_P000_TM_conversions_TrainToTrack /* _L114=(TM_conversions_TrainToTrack::C_legacy_P000#1)/ */ Context_C_legacy_P000_1;
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop /* _L116=(TA_EmergencyStop::ES_Build_AcknowledgementNew#1)/ */ Context_ES_Build_AcknowledgementNew_1;
  outC_ES_Build_Acknowledgement_TA_EmergencyStop /* _L60=(TA_EmergencyStop::ES_Build_Acknowledgement#2)/ */ Context_ES_Build_Acknowledgement_2;
  outC_ES_Process_Conditional_TA_EmergencyStop /* _L78=(TA_EmergencyStop::ES_Process_Conditional#1)/ */ Context_ES_Process_Conditional_1;
  outC_ES_ExtractMsgParams_TA_EmergencyStop /* _L46=(TA_EmergencyStop::ES_ExtractMsgParams#3)/ */ Context_ES_ExtractMsgParams_3;
  outC_ES_ReceiveAndControl_TA_EmergencyStop /* _L35=(TA_EmergencyStop::ES_ReceiveAndControl#1)/ */ Context_ES_ReceiveAndControl_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* receivedMsg16/ */ receivedMsg16;
  kcg_bool /* receivedMsg15/ */ receivedMsg15;
  kcg_bool /* receivedMsg18/ */ receivedMsg18;
  kcg_bool /* receivedESMsg/ */ receivedESMsg;
  kcg_bool /* sendMsg147/ */ sendMsg147;
  NID_EM /* nid_em/ */ nid_em;
  kcg_bool /* uesActive/ */ uesActive;
  kcg_bool /* cesActive/ */ cesActive;
  kcg_bool /* triggerCES/ */ triggerCES;
  L_internal_Type_Obu_BasicTypes_Pkg /* cesEOA/ */ cesEOA;
  Q_SCALE /* q_scale/ */ q_scale;
  D_REF /* d_ref/ */ d_ref;
  Q_DIR /* q_dir/ */ q_dir;
  D_EMERGENCYSTOP /* d_emergencystop/ */ d_emergencystop;
  kcg_bool /* revokeCES/ */ revokeCES;
  kcg_bool /* cesUpdateEOA/ */ cesUpdateEOA;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  NID_EM /* _L46/ */ _L46;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L52/ */ _L52;
  ReceivedMessage_T_Common_Types_Pkg /* _L53/ */ _L53;
  kcg_bool /* _L57/ */ _L57;
  NID_EM /* _L59/ */ _L59;
  Radio_TrainTrack_Message_T_TM_transitional /* _L60/ */ _L60;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L62/ */ _L62;
  NID_EM /* _L63/ */ _L63;
  kcg_bool /* _L64/ */ _L64;
  kcg_bool /* _L65/ */ _L65;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L67/ */ _L67;
  T_TRAIN /* _L68/ */ _L68;
  trainProperties_T_TrainPosition_Types_Pck /* _L69/ */ _L69;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L70/ */ _L70;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L79/ */ _L79;
  kcg_bool /* _L78/ */ _L78;
  NID_EM /* _L82/ */ _L82;
  Q_SCALE /* _L83/ */ _L83;
  D_EMERGENCYSTOP /* _L84/ */ _L84;
  Q_DIR /* _L85/ */ _L85;
  D_REF /* _L86/ */ _L86;
  Q_DIR /* _L87/ */ _L87;
  Q_SCALE /* _L88/ */ _L88;
  D_REF /* _L89/ */ _L89;
  D_EMERGENCYSTOP /* _L90/ */ _L90;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L92/ */ _L92;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  trainPosition_T_TrainPosition_Types_Pck /* _L95/ */ _L95;
  kcg_bool /* _L97/ */ _L97;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  kcg_bool /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L104/ */ _L104;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L105/ */ _L105;
  kcg_bool /* _L107/ */ _L107;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L115/ */ _L115;
  P000_TM_TrainToTrack /* _L114/ */ _L114;
  T_TRAIN /* _L113/ */ _L113;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L112/ */ _L112;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L111/ */ _L111;
  P001_TM_TrainToTrack /* _L110/ */ _L110;
  M_VERSION /* _L109/ */ _L109;
  M_147_T_TM_radio_messages /* _L116/ */ _L116;
  NID_EM /* _L124/ */ _L124;
  trainProperties_T_TrainPosition_Types_Pck /* _L122/ */ _L122;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L119/ */ _L119;
  T_TRAIN /* _L118/ */ _L118;
  kcg_bool /* _L117/ */ _L117;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L125/ */ _L125;
  kcg_int32 /* _L126/ */ _L126;
} outC_Manage_EmergencyStop_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::Manage_EmergencyStop/ */
extern void Manage_EmergencyStop_TA_EmergencyStop(
  /* messageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* currentEOA/ */
  L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_EmergencyStop_init_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ES_Process_Conditional_TA_EmergencyStop Context_ES_Process_Conditional_1;
  SV_Send_M147_TM_radio_messages Context_Send_M147_2;
  SV_ES_Process_Unconditional_TA_EmergencyStop Context_ES_Process_Unconditional_1;
} SV_Manage_EmergencyStop_TA_EmergencyStop;

extern void kcg_save_SV_Manage_EmergencyStop_TA_EmergencyStop(
  SV_Manage_EmergencyStop_TA_EmergencyStop *SV,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);
extern void kcg_load_SV_Manage_EmergencyStop_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC,
  SV_Manage_EmergencyStop_TA_EmergencyStop *SV);



#endif /* _Manage_EmergencyStop_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_EmergencyStop_TA_EmergencyStop.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

