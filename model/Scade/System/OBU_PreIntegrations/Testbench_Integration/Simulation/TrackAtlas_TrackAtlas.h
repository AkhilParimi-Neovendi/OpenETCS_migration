/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _TrackAtlas_TrackAtlas_H_
#define _TrackAtlas_TrackAtlas_H_

#include "kcg_types.h"
#include "TrackAtlasETCS_TrackAtlas.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P003_OBU_T_TM /* NV_raw_out/ */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* To_ModeAndLevel/ */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* to_DMI/ */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* to_Supervision/ */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* MA_onboard_out/ */ MA_onboard_out;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP/ */ MRSP;
  Radio_TrainTrack_Message_T_TM_transitional /* message147/ */ message147;
  kcg_bool /* ces_accepted/ */ ces_accepted;
  kcg_bool /* ces_revoked/ */ ces_revoked;
  kcg_bool /* trip_train/ */ trip_train;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus_out/ */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrackAtlasETCS_TrackAtlas /* _L76=(TrackAtlas::TrackAtlasETCS#1)/ */ Context_TrackAtlasETCS_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  Radio_TrainTrack_Message_T_TM_transitional /* _L8/ */ _L8;
  MovementAuthority_t_TrackAtlasTypes /* _L5/ */ _L5;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L4/ */ _L4;
  DataForDMI_t_TrackAtlasTypes /* _L3/ */ _L3;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L2/ */ _L2;
  P003_OBU_T_TM /* _L1/ */ _L1;
  ReceivedMessage_T_Common_Types_Pkg /* _L12/ */ _L12;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L13/ */ _L13;
  FromTIU_t_TrackAtlasTypes /* _L14/ */ _L14;
  trainPosition_T_TrainPosition_Types_Pck /* _L15/ */ _L15;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L17/ */ _L17;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L18/ */ _L18;
  odometry_T_Obu_BasicTypes_Pkg /* _L19/ */ _L19;
  Driver2MAR_T_MA_Request /* _L20/ */ _L20;
  trainProperties_T_TrainPosition_Types_Pck /* _L21/ */ _L21;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L22/ */ _L22;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L23/ */ _L23;
  T_TRAIN /* _L24/ */ _L24;
  P203V1_OBU_T_TM_baseline2 /* _L25/ */ _L25;
  P003_permanent_data_T_TM_baseline2 /* _L26/ */ _L26;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L59/ */ _L59;
  M_MODE /* _L63/ */ _L63;
  M_MODE /* _L62/ */ _L62;
  kcg_bool /* _L61/ */ _L61;
  MRSP_Profile_t_TrackAtlasTypes /* _L60/ */ _L60;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L80/ */ _L80;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L81/ */ _L81;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L82/ */ _L82;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L83/ */ _L83;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L84/ */ _L84;
  positionedBGs_T_TrainPosition_Types_Pck /* _L85/ */ _L85;
} outC_TrackAtlas_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlas/ */
extern void TrackAtlas_TrackAtlas(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* ModeAndLevel_in/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeAndLevel_in,
  /* TrainData_in/ */
  FromTIU_t_TrackAtlasTypes TrainData_in,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* train_length/ */
  L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* SystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* preindicationLocation/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLocation,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* fromDriverToMA_R/ */
  Driver2MAR_T_MA_Request *fromDriverToMA_R,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* packet0/ */
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* packet1/ */
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* t_train/ */
  T_TRAIN t_train,
  /* P203V1_onboard/ */
  P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* PermanentDataP003/ */
  P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_TrackAtlas_TrackAtlas *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackAtlas_init_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_TrackAtlasETCS_TrackAtlas Context_TrackAtlasETCS_1;
} SV_TrackAtlas_TrackAtlas;

extern void kcg_save_SV_TrackAtlas_TrackAtlas(
  SV_TrackAtlas_TrackAtlas *SV,
  outC_TrackAtlas_TrackAtlas *outC);
extern void kcg_load_SV_TrackAtlas_TrackAtlas(
  outC_TrackAtlas_TrackAtlas *outC,
  SV_TrackAtlas_TrackAtlas *SV);



#endif /* _TrackAtlas_TrackAtlas_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackAtlas_TrackAtlas.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

