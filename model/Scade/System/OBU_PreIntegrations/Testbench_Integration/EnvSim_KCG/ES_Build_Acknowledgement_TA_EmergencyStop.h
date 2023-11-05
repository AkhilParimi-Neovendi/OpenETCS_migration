/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _ES_Build_Acknowledgement_TA_EmergencyStop_H_
#define _ES_Build_Acknowledgement_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_TM_transitional /* message147/ */ message147;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_EMERGENCYSTOP /* q_emergencystop/ */ q_emergencystop;
  NID_EM /* _L4/ */ _L4;
  T_TRAIN /* _L5/ */ _L5;
  Radio_TrainTrack_Message_T_TM_transitional /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  Radio_TrainTrack_Header_T_TM_transitional /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  trainProperties_T_TrainPosition_Types_Pck /* _L11/ */ _L11;
  NID_ENGINE /* _L12/ */ _L12;
  Q_EMERGENCYSTOP /* _L13/ */ _L13;
  Q_EMERGENCYSTOP /* _L14/ */ _L14;
  Q_MARQSTREASON /* _L17/ */ _L17;
  NID_TEXTMESSAGE /* _L18/ */ _L18;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L26/ */ _L26;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L22/ */ _L22;
  outPackets_T_Common_Types_Pkg /* _L27/ */ _L27;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* _L28/ */ _L28;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* _L29/ */ _L29;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L30/ */ _L30;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L31/ */ _L31;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* _L32/ */ _L32;
  Q_EMERGENCYSTOP /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  Q_EMERGENCYSTOP /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  Q_EMERGENCYSTOP /* _L38/ */ _L38;
  Q_EMERGENCYSTOP /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  Q_EMERGENCYSTOP /* _L42/ */ _L42;
  Q_EMERGENCYSTOP /* _L43/ */ _L43;
} outC_ES_Build_Acknowledgement_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Build_Acknowledgement/ */
extern void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* cesAccepted/ */
  kcg_bool cesAccepted,
  /* updateEOA/ */
  kcg_bool updateEOA,
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Build_Acknowledgement_reset_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Build_Acknowledgement_init_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ES_Build_Acknowledgement_TA_EmergencyStop_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Build_Acknowledgement_TA_EmergencyStop.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

