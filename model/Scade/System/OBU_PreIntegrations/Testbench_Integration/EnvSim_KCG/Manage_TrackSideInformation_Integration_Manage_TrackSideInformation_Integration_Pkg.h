/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_
#define _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_

#include "kcg_types.h"
#include "countPackets_xdebugSupport_Pkg.h"
#include "checkOnErrors_xdebugSupport_Pkg.h"
#include "ContinuousTimeoutCheck_CheckEuroradioMessage.h"
#include "InformationFilter_InformationFilter_Pkg.h"
#include "CheckEuroRadioMessage_CheckEuroradioMessage.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* outputMessage/ */ outputMessage;
  kcg_bool /* ApplyServiceBrake/ */ ApplyServiceBrake;
  kcg_bool /* BadBaliseMessageToDMI/ */ BadBaliseMessageToDMI;
  MSG_Errors_T_Common_Types_Pkg /* outCheckErrors/ */ outCheckErrors;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* IF_toML/ */ IF_toML;
  /* -----------------------   local probes  ------------------------- */
  kcg_float64 /* positionM/ */ positionM;
  kcg_bool /* debug_ErrorMSG/ */ debug_ErrorMSG;
  kcg_bool /* errorBG/ */ errorBG;
  kcg_int64 /* countPackets/ */ countPackets;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_checkOnErrors_xdebugSupport_Pkg /* _L185=(xdebugSupport_Pkg::checkOnErrors#1)/ */ Context_checkOnErrors_1;
  outC_countPackets_xdebugSupport_Pkg /* _L187=(xdebugSupport_Pkg::countPackets#1)/ */ Context_countPackets_1;
  outC_ContinuousTimeoutCheck_CheckEuroradioMessage /* _L138=(CheckEuroradioMessage::ContinuousTimeoutCheck#1)/ */ Context_ContinuousTimeoutCheck_1;
  outC_InformationFilter_InformationFilter_Pkg /* _L102=(InformationFilter_Pkg::InformationFilter#3)/ */ Context_InformationFilter_3;
  outC_validateDataDirection_ValidateDataDirection_Pkg /* _L21=(ValidateDataDirection_Pkg::validateDataDirection#1)/ */ Context_validateDataDirection_1;
  outC_CheckEuroRadioMessage_CheckEuroradioMessage /* _L38=(CheckEuroradioMessage::CheckEuroRadioMessage#1)/ */ Context_CheckEuroRadioMessage_1;
  outC_CheckBGConsistency_CheckBGConsistency_Pkg /* _L14=(CheckBGConsistency_Pkg::CheckBGConsistency#1)/ */ Context_CheckBGConsistency_1;
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg /* _L8=(Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg#1)/ */ Context_Receive_TrackSide_Msg_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool every1;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* doBaliseBranch/ */ doBaliseBranch;
  kcg_bool /* doRadio/ */ doRadio;
  positionedBG_T_TrainPosition_Types_Pck /* LRBG/ */ LRBG;
  trainPosition_T_TrainPosition_Types_Pck /* trainPositionTest/ */ trainPositionTest;
  kcg_bool /* tNvContactError/ */ tNvContactError;
  MSG_Errors_T_Common_Types_Pkg /* MsgErrors/ */ MsgErrors;
  API_TrackSideInput_T_API_Msg_Pkg /* _L1/ */ _L1;
  odometry_T_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L7/ */ _L7;
  TrackSide_ForCheck_T_Common_Types_Pkg /* _L8/ */ _L8;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  morcStatus_T_RCM_Session_Types_Pkg /* _L13/ */ _L13;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  ReceivedMessage_T_Common_Types_Pkg /* _L14/ */ _L14;
  ReceivedMessage_T_Common_Types_Pkg /* _L21/ */ _L21;
  ReceivedMessage_T_Common_Types_Pkg /* _L23/ */ _L23;
  kcg_bool /* _L27/ */ _L27;
  M_MODE /* _L28/ */ _L28;
  MsgSource_T_Common_Types_Pkg /* _L33/ */ _L33;
  kcg_bool /* _L36/ */ _L36;
  MsgSource_T_Common_Types_Pkg /* _L37/ */ _L37;
  ReceivedMessage_T_Common_Types_Pkg /* _L38/ */ _L38;
  positionedBGs_T_TrainPosition_Types_Pck /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  MsgSource_T_Common_Types_Pkg /* _L52/ */ _L52;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L53/ */ _L53;
  kcg_bool /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  kcg_bool /* _L63/ */ _L63;
  ReceivedMessage_T_Common_Types_Pkg /* _L64/ */ _L64;
  ReceivedMessage_T_Common_Types_Pkg /* _L65/ */ _L65;
  positionedBGs_T_TrainPosition_Types_Pck /* _L68/ */ _L68;
  Q_NVLOCACC /* _L69/ */ _L69;
  positionedBG_T_TrainPosition_Types_Pck /* _L79/ */ _L79;
  positionedBG_T_TrainPosition_Types_Pck /* _L80/ */ _L80;
  trainPosition_T_TrainPosition_Types_Pck /* _L82/ */ _L82;
  trainPosition_T_TrainPosition_Types_Pck /* _L87/ */ _L87;
  trainPosition_T_TrainPosition_Types_Pck /* _L88/ */ _L88;
  kcg_bool /* _L93/ */ _L93;
  kcg_bool /* _L94/ */ _L94;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L109/ */ _L109;
  connection_ids_T_Handover_Pkg /* _L106/ */ _L106;
  ReceivedMessage_T_Common_Types_Pkg /* _L102/ */ _L102;
  kcg_bool /* _L114/ */ _L114;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L123/ */ _L123;
  MSG_Errors_T_Common_Types_Pkg /* _L129/ */ _L129;
  kcg_bool /* _L138/ */ _L138;
  odometry_T_Obu_BasicTypes_Pkg /* _L139/ */ _L139;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L140/ */ _L140;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L141/ */ _L141;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L142/ */ _L142;
  kcg_bool /* _L143/ */ _L143;
  kcg_bool /* _L144/ */ _L144;
  kcg_bool /* _L145/ */ _L145;
  M_VERSION /* _L150/ */ _L150;
  kcg_bool /* _L151/ */ _L151;
  filterRelatedEvents_T_Common_Types_Pkg /* _L159/ */ _L159;
  NID_C /* _L161/ */ _L161;
  NID_ERRORBG_BG_Types_Pkg /* _L160/ */ _L160;
  kcg_int64 /* _L162/ */ _L162;
  kcg_int64 /* _L163/ */ _L163;
  API_TrackSideInput_T_API_Msg_Pkg /* _L164/ */ _L164;
  odometry_T_Obu_BasicTypes_Pkg /* _L169/ */ _L169;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* _L170/ */ _L170;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L171/ */ _L171;
  kcg_float64 /* _L172/ */ _L172;
  kcg_float64 /* _L173/ */ _L173;
  kcg_float64 /* _L174/ */ _L174;
  kcg_bool /* _L186/ */ _L186;
  kcg_bool /* _L185/ */ _L185;
  kcg_int64 /* _L187/ */ _L187;
  MSG_Errors_T_Common_Types_Pkg /* _L192/ */ _L192;
  positionedBG_T_TrainPosition_Types_Pck /* _L193/ */ _L193;
  kcg_bool /* _L194/ */ _L194;
  trainPosition_T_TrainPosition_Types_Pck /* _L195/ */ _L195;
  kcg_bool /* _L197/ */ _L197;
  morcStatus_T_RCM_Session_Types_Pkg /* _L212/ */ _L212;
  morcStatus_T_RCM_Session_Types_Pkg /* _L215/ */ _L215;
  kcg_int64 /* _L211/ */ _L211;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L216/ */ _L216;
} outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Manage_TrackSideInformation_Integration_Pkg::Manage_TrackSideInformation_Integration/ */
extern void Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg(
  /* fullChecks/ */
  kcg_bool fullChecks,
  /* API_trackSide_Message/ */
  API_TrackSideInput_T_API_Msg_Pkg *API_trackSide_Message,
  /* ActualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *ActualOdometry,
  /* reset/ */
  kcg_bool reset,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* modeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeAndLevel,
  /* tNvContact/ */
  T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* intrainVersion/ */
  M_VERSION intrainVersion,
  /* lastRelevantEventTimestamp/ */
  T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* radioStatus/ */
  morcStatus_T_RCM_Session_Types_Pkg *radioStatus,
  /* inSupervisingRbcId/ */
  connection_ids_T_Handover_Pkg *inSupervisingRbcId,
  /* inAnnouncedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inAnnouncedBGs,
  /* q_nvlocacc/ */
  Q_NVLOCACC q_nvlocacc,
  /* inActiveCab/ */
  kcg_bool inActiveCab,
  /* inTrainDataValid/ */
  kcg_bool inTrainDataValid,
  /* inFilterEvents/ */
  filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_TrackSideInformation_Integration_reset_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_TrackSideInformation_Integration_init_Manage_TrackSideInformation_Integration_Pkg(
  outC_Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_TrackSideInformation_Integration_Manage_TrackSideInformation_Integration_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

