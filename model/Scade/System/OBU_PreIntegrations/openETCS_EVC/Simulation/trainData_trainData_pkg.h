/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _trainData_trainData_pkg_H_
#define _trainData_trainData_pkg_H_

#include "kcg_types.h"
#include "checkRBCSystemVersion_trainData_pkg.h"
#include "checkAcknowledgmentGeneral_trainData_pkg.h"
#include "checkRadioMessages_trainData_pkg.h"
#include "trainDataStorage_trainData_pkg.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"
#include "sendValidTrainDataRBC_trainData_pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainData_T_TIU_Types_Pkg /* actualTrainData/ */ actualTrainData;
  trainData_Trigger_T_trainData_Types_pkg /* triggerFromTrainData/ */ triggerFromTrainData;
  trainDataStatus_T_trainData_Types_pkg /* updatedStatus/ */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* outMessageBus/ */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  trainDataStatus_T_trainData_Types_pkg /* trainDataStatus/ */ trainDataStatus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_sendAcknowledgementRBC_trainData_pkg /* IfBlock1:then:_L2=(trainData_pkg::sendAcknowledgementRBC#1)/ */ Context_sendAcknowledgementRBC_1;
  outC_sendValidTrainDataRBC_trainData_pkg /* IfBlock1:else:else:then:_L2=(trainData_pkg::sendValidTrainDataRBC#1)/ */ Context_sendValidTrainDataRBC_1;
  outC_trainDataStorage_trainData_pkg /* _L31=(trainData_pkg::trainDataStorage#1)/ */ Context_trainDataStorage_1;
  outC_checkAcknowledgmentGeneral_trainData_pkg /* _L54=(trainData_pkg::checkAcknowledgmentGeneral#1)/ */ Context_checkAcknowledgmentGeneral_1;
  outC_checkRadioMessages_trainData_pkg /* _L42=(trainData_pkg::checkRadioMessages#1)/ */ Context_checkRadioMessages_1;
  outC_checkRBCSystemVersion_trainData_pkg /* _L68=(trainData_pkg::checkRBCSystemVersion#1)/ */ Context_checkRBCSystemVersion_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool every;
  kcg_bool every1;
  kcg_bool every2;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_VERSION /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  NID_ENGINE /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_VERSION /* IfBlock1:else:else:then:_L14/ */ _L14_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L13/ */ _L13_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:then:_L12/ */ _L12_then_else_else_IfBlock1;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  trainData_T_TIU_Types_Pkg /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:else:then:_L2/ */ _L2_then_else_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  NID_ENGINE /* IfBlock1:else:else:then:_L7/ */ _L7_then_else_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:else:else:_L4/ */ _L4_else_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  trainDataStatus_T_trainData_Types_pkg /* IfBlock1:else:then:_L7/ */ _L7_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_bool /* ackReceived/ */ ackReceived;
  kcg_bool /* sendValidateToRBC/ */ sendValidateToRBC;
  trainData_T_TIU_Types_Pkg /* trainData/ */ trainData;
  trainDataStatus_T_trainData_Types_pkg /* statusForOutput/ */ statusForOutput;
  kcg_bool /* ackRequested/ */ ackRequested;
  trainDataStatus_T_trainData_Types_pkg /* statusAfterCheck/ */ statusAfterCheck;
  ReceivedMessage_T_Common_Types_Pkg /* _L4/ */ _L4;
  trainDataStatus_T_trainData_Types_pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  trainData_Events_T_trainData_Types_pkg /* _L28/ */ _L28;
  trainData_Trigger_T_trainData_Types_pkg /* _L29/ */ _L29;
  trainData_T_TIU_Types_Pkg /* _L31/ */ _L31;
  trainDataStatus_T_trainData_Types_pkg /* _L30/ */ _L30;
  kcg_bool /* _L32/ */ _L32;
  trainData_T_TIU_Types_Pkg /* _L33/ */ _L33;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L34/ */ _L34;
  trainDataStatus_T_trainData_Types_pkg /* _L36/ */ _L36;
  trainData_Events_T_trainData_Types_pkg /* _L37/ */ _L37;
  trainData_T_TIU_Types_Pkg /* _L38/ */ _L38;
  trainDataStatus_T_trainData_Types_pkg /* _L39/ */ _L39;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* _L40/ */ _L40;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L42/ */ _L42;
  trainDataStatus_T_trainData_Types_pkg /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  trainDataStatus_T_trainData_Types_pkg /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L49/ */ _L49;
  ReceivedMessage_T_Common_Types_Pkg /* _L56/ */ _L56;
  kcg_bool /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L52/ */ _L52;
  trainDataStatus_T_trainData_Types_pkg /* _L51/ */ _L51;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L57/ */ _L57;
  kcg_bool /* _L58/ */ _L58;
  kcg_bool /* _L59/ */ _L59;
  kcg_bool /* _L60/ */ _L60;
  ReceivedMessage_T_Common_Types_Pkg /* _L63/ */ _L63;
  trainDataStatus_T_trainData_Types_pkg /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L66/ */ _L66;
  trainDataStatus_T_trainData_Types_pkg /* _L68/ */ _L68;
  kcg_bool /* _L70/ */ _L70;
} outC_trainData_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::trainData/ */
extern void trainData_trainData_pkg(
  /* reset/ */
  kcg_bool reset,
  /* trainDatafromTIU/ */
  trainData_T_TIU_Types_Pkg *trainDatafromTIU,
  /* trainDatafromDriver/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *trainDatafromDriver,
  /* trainDataAckfromDriver/ */
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *trainDataAckfromDriver,
  /* trackMessages/ */
  ReceivedMessage_T_Common_Types_Pkg *trackMessages,
  /* eventsForTrainData/ */
  trainData_Events_T_trainData_Types_pkg *eventsForTrainData,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* p0_positionReport/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* p1_positionReport/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* inMessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *inMessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  /* t_train/ */
  T_TRAIN t_train,
  outC_trainData_trainData_pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void trainData_reset_trainData_pkg(outC_trainData_trainData_pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void trainData_init_trainData_pkg(outC_trainData_trainData_pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _trainData_trainData_pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** trainData_trainData_pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

