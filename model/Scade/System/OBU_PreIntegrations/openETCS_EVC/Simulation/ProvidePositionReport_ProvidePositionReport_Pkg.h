/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _ProvidePositionReport_ProvidePositionReport_Pkg_H_
#define _ProvidePositionReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"
#include "Build_Packets0_1_ProvidePositionReport_Pkg.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"
#include "AddBGToFIFO_ProvidePositionReport_Pkg.h"
#include "PosReport_Supervision_ProvidePositionReport_Pkg.h"
#include "Build_PosReport_ProvidePositionReport_Pkg.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"
#include "ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* out_reportedBGs/ */ out_reportedBGs;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* packet0/ */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* packet1/ */ packet1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* posReport/ */ posReport;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  odometry_T_Obu_BasicTypes_Pkg /* odometry/ */ mem_odometry;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* modeLevelStatus/ */ mem_modeLevelStatus;
  ReportedBGList_T_ProvidePositionReport_Pkg /* reportedBGs/ */ mem_reportedBGs;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AddBGToFIFO_ProvidePositionReport_Pkg /* _L332=(ProvidePositionReport_Pkg::AddBGToFIFO)/ */ Context_AddBGToFIFO;
  outC_nextGen_Msg136_radioOutput_Pkg /* _L348=(radioOutput_Pkg::nextGen_Msg136#1)/ */ Context_nextGen_Msg136_1;
  outC_AggregatePackets_ProvidePositionReport_Pkg /* _L333=(ProvidePositionReport_Pkg::AggregatePackets#1)/ */ Context_AggregatePackets_1;
  outC_Build_PosReport_ProvidePositionReport_Pkg /* _L297=(ProvidePositionReport_Pkg::Build_PosReport#1)/ */ Context_Build_PosReport_1;
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg /* _L279=(ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager#1)/ */ Context_ErrorManager_1;
  outC_Build_Packets0_1_ProvidePositionReport_Pkg /* _L346=(ProvidePositionReport_Pkg::Build_Packets0_1#1)/ */ Context_Build_Packets0_1_1;
  outC_PosReport_Supervision_ProvidePositionReport_Pkg /* _L312=(ProvidePositionReport_Pkg::PosReport_Supervision#1)/ */ Context_PosReport_Supervision_1;
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg /* _L328=(ProvidePositionReport_Pkg::ReceiveReportParameters#1)/ */ Context_ReceiveReportParameters_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBGs_T_TrainPosition_Types_Pck /* _L4/ */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* _L5/ */ _L5;
  trainProperties_T_TrainPosition_Types_Pck /* _L6/ */ _L6;
  LocationBasedEvents_T_ProvidePositionReport_Pkg /* _L10/ */ _L10;
  ReceivedMessage_T_Common_Types_Pkg /* _L11/ */ _L11;
  SystemTime_T_ProvidePositionReport_Pkg /* _L12/ */ _L12;
  TrainToTrackStatus_T_BG_Types_Pkg /* _L13/ */ _L13;
  RBC_Communication_T_ProvidePositionReport_Pkg /* _L15/ */ _L15;
  Q_DIRTRAIN /* _L277/ */ _L277;
  _138_array /* _L279/ */ _L279;
  kcg_bool /* _L281/ */ _L281;
  kcg_bool /* _L282/ */ _L282;
  kcg_bool /* _L283/ */ _L283;
  kcg_bool /* _L284/ */ _L284;
  kcg_bool /* _L285/ */ _L285;
  kcg_bool /* _L286/ */ _L286;
  kcg_bool /* _L287/ */ _L287;
  kcg_bool /* _L288/ */ _L288;
  kcg_bool /* _L289/ */ _L289;
  odometry_T_Obu_BasicTypes_Pkg /* _L290/ */ _L290;
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg /* _L291/ */ _L291;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L297/ */ _L297;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L296/ */ _L296;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L295/ */ _L295;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L294/ */ _L294;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L293/ */ _L293;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L303/ */ _L303;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L302/ */ _L302;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L301/ */ _L301;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* _L300/ */ _L300;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L299/ */ _L299;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* _L307/ */ _L307;
  kcg_bool /* _L312/ */ _L312;
  kcg_bool /* _L314/ */ _L314;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L328/ */ _L328;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L329/ */ _L329;
  ReportedBGList_T_ProvidePositionReport_Pkg /* _L332/ */ _L332;
  outPackets_T_Common_Types_Pkg /* _L333/ */ _L333;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* _L340/ */ _L340;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L343/ */ _L343;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L346/ */ _L346;
  T_TRAIN /* _L347/ */ _L347;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L348/ */ _L348;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L349/ */ _L349;
  T_TRAIN /* _L350/ */ _L350;
  M_VERSION /* _L351/ */ _L351;
} outC_ProvidePositionReport_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ProvidePositionReport/ */
extern void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* trackInfo/ */
  LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* rcbComm/ */
  RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* train2trackStatus/ */
  TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  /* BG_LinkingConsistencyError/ */
  kcg_bool BG_LinkingConsistencyError,
  /* LinkedBG_MessageConsistencyError/ */
  kcg_bool LinkedBG_MessageConsistencyError,
  /* UnlinkedBG_MessageConsistencyError/ */
  kcg_bool UnlinkedBG_MessageConsistencyError,
  /* RadioMessageConsistencyError/ */
  kcg_bool RadioMessageConsistencyError,
  /* RadioSequenceError/ */
  kcg_bool RadioSequenceError,
  /* RadioSafeRadioConnectionError/ */
  kcg_bool RadioSafeRadioConnectionError,
  /* SafetyCriticalFailure/ */
  kcg_bool SafetyCriticalFailure,
  /* DoubleLinkingError/ */
  kcg_bool DoubleLinkingError,
  /* DoubleRepositioningError/ */
  kcg_bool DoubleRepositioningError,
  /* modeLevelStatus/ */
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  /* t_train/ */
  T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ProvidePositionReport_init_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ProvidePositionReport_ProvidePositionReport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ProvidePositionReport_ProvidePositionReport_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

