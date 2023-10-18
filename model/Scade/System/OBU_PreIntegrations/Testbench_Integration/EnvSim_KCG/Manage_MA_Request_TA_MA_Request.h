/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Manage_MA_Request_TA_MA_Request_H_
#define _Manage_MA_Request_TA_MA_Request_H_

#include "kcg_types.h"
#include "MA_Request_Supervision_TA_MA_Request.h"
#include "Build_MA_request_TA_MA_Request.h"
#include "Receive_MA_RequestParameters_TA_MA_Request.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus_out/ */ bus_out;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* exception/ */ exception;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* triggerMA/ */ triggerMA;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Build_MA_request_TA_MA_Request /* _L32=(TA_MA_Request::Build_MA_request#1)/ */ Context_Build_MA_request_1;
  outC_MA_Request_Supervision_TA_MA_Request /* _L11=(TA_MA_Request::MA_Request_Supervision#1)/ */ Context_MA_Request_Supervision_1;
  outC_Receive_MA_RequestParameters_TA_MA_Request /* _L6=(TA_MA_Request::Receive_MA_RequestParameters#1)/ */ Context_Receive_MA_RequestParameters_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainPosition_T_TrainPosition_Types_Pck /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  ReceivedMessage_T_Common_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  odometry_T_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  kcg_bool /* _L21/ */ _L21;
  trainProperties_T_TrainPosition_Types_Pck /* _L24/ */ _L24;
  kcg_bool /* _L26/ */ _L26;
  MovementAuthority_t_TrackAtlasTypes /* _L18/ */ _L18;
  Driver2MAR_T_TA_MA_Request /* _L27/ */ _L27;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L28/ */ _L28;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L29/ */ _L29;
  T_TRAIN /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L32/ */ _L32;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L33/ */ _L33;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L34/ */ _L34;
} outC_Manage_MA_Request_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::Manage_MA_Request/ */
extern void Manage_MA_Request_TA_MA_Request(
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* message_in/ */
  ReceivedMessage_T_Common_Types_Pkg *message_in,
  /* preindicationLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* MAs/ */
  MovementAuthority_t_TrackAtlasTypes *MAs,
  /* fromDriver/ */
  Driver2MAR_T_TA_MA_Request *fromDriver,
  /* trackDescrDeleted/ */
  kcg_bool trackDescrDeleted,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* t_train/ */
  T_TRAIN t_train,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* modeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *modeLevel,
  outC_Manage_MA_Request_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_MA_Request_reset_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_MA_Request_init_TA_MA_Request(
  outC_Manage_MA_Request_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Manage_MA_Request_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Manage_MA_Request_TA_MA_Request.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

