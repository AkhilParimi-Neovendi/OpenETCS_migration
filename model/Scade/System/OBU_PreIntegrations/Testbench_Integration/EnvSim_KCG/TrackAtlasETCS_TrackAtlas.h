/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _TrackAtlasETCS_TrackAtlas_H_
#define _TrackAtlasETCS_TrackAtlas_H_

#include "kcg_types.h"
#include "Manage_MA_Request_TA_MA_Request.h"
#include "MRSP_to_DMI_TA_Export.h"
#include "SSP_to_MRSP_TA_Export.h"
#include "Build_GradientProfile_TA_Gradient_new.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"
#include "TA_to_ML_TA_Export.h"
#include "C_P003V1_OBU_P003_OBU_TM_conversions_baseline2.h"
#include "GradientProfile_to_DMI_TA_Export.h"
#include "StoreRaw_NV_TA_Storage.h"
#include "Build_MRSP_TA_MRSP_new.h"
#include "Build_MA_L23_TA_MA_new.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SSP_available/ */ SSP_available;
  P003_OBU_T_TM /* NV_raw_out/ */ NV_raw_out;
  DataForModeAndLevel_t_TrackAtlasTypes /* To_ModeAndLevel/ */ To_ModeAndLevel;
  DataForDMI_t_TrackAtlasTypes /* to_DMI/ */ to_DMI;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* to_Supervision/ */ to_Supervision;
  MovementAuthority_t_TrackAtlasTypes /* MA_onboard_out/ */ MA_onboard_out;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus_out/ */ bus_out;
  Radio_TrainTrack_Message_T_TM_transitional /* message147/ */ message147;
  kcg_bool /* ces_accepted/ */ ces_accepted;
  kcg_bool /* ces_revoked/ */ ces_revoked;
  kcg_bool /* trip_train/ */ trip_train;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L94/ */ _L94;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_GradientProfile_to_DMI_TA_Export /* _L31=(TA_Export::GradientProfile_to_DMI#1)/ */ Context_GradientProfile_to_DMI_1;
  outC_C_P003V1_OBU_P003_OBU_TM_conversions_baseline2 /* _L50=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU#1)/ */ Context_C_P003V1_OBU_P003_OBU_1;
  outC_TA_to_ML_TA_Export /* _L77=(TA_Export::TA_to_ML#1)/ */ Context_TA_to_ML_1;
  outC_Build_GradientProfile_TA_Gradient_new /* _L101=(TA_Gradient_new::Build_GradientProfile#1)/ */ Context_Build_GradientProfile_1;
  outC_MRSP_to_DMI_TA_Export /* _L150=(TA_Export::MRSP_to_DMI#1)/ */ Context_MRSP_to_DMI_1;
  outC_SSP_to_MRSP_TA_Export /* _L118=(TA_Export::SSP_to_MRSP#1)/ */ Context_SSP_to_MRSP_1[110];
  outC_Build_MRSP_TA_MRSP_new /* _L32=(TA_MRSP_new::Build_MRSP#1)/ */ Context_Build_MRSP_1;
  outC_Manage_MA_Request_TA_MA_Request /* _L67=(TA_MA_Request::Manage_MA_Request#1)/ */ Context_Manage_MA_Request_1;
  outC_Build_MA_L23_TA_MA_new /* _L16=(TA_MA_new::Build_MA_L23#1)/ */ Context_Build_MA_L23_1;
  outC_Manage_EmergencyStop_TA_EmergencyStop /* _L87=(TA_EmergencyStop::Manage_EmergencyStop#1)/ */ Context_Manage_EmergencyStop_1;
  outC_StoreRaw_NV_TA_Storage /* _L20=(TA_Storage::StoreRaw_NV#1)/ */ Context_StoreRaw_NV_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* MovementAuthority_Local/ */ MovementAuthority_Local;
  kcg_bool /* valid_MA/ */ valid_MA;
  kcg_bool /* valid_SSP/ */ valid_SSP;
  kcg_bool /* valid_GP/ */ valid_GP;
  StaticSpeedProfile_t_TrackAtlasTypes /* SSP/ */ SSP;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP_export/ */ MRSP_export;
  MRSP_Profile_t_TrackAtlasTypes /* MRSP_to_DMI/ */ MRSP_to_DMI;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* bus1/ */ bus1;
  L_internal_Type_Obu_BasicTypes_Pkg /* EoA/ */ EoA;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  MRSP_Profile_t_TrackAtlasTypes /* _L19/ */ _L19;
  kcg_bool /* _L22/ */ _L22;
  P003V1_OBU_T_TM_baseline2 /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  ReceivedMessage_T_Common_Types_Pkg /* _L23/ */ _L23;
  ReceivedMessage_T_Common_Types_Pkg /* _L24/ */ _L24;
  trainPosition_T_TrainPosition_Types_Pck /* _L25/ */ _L25;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  FromTIU_t_TrackAtlasTypes /* _L27/ */ _L27;
  GradientProfile_for_DMI_t_TrackAtlasTypes /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  DataForSupervision_nextGen_t_TrackAtlasTypes /* _L34/ */ _L34;
  DataForDMI_t_TrackAtlasTypes /* _L35/ */ _L35;
  P003_OBU_T_TM /* _L50/ */ _L50;
  P203V1_OBU_T_TM_baseline2 /* _L51/ */ _L51;
  P003_permanent_data_T_TM_baseline2 /* _L52/ */ _L52;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L73/ */ _L73;
  kcg_bool /* _L72/ */ _L72;
  trainProperties_T_TrainPosition_Types_Pck /* _L71/ */ _L71;
  Driver2MAR_T_MA_Request /* _L70/ */ _L70;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L69/ */ _L69;
  odometry_T_Obu_BasicTypes_Pkg /* _L68/ */ _L68;
  T_TRAIN /* _L66/ */ _L66;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L65/ */ _L65;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L64/ */ _L64;
  ReceivedMessage_T_Common_Types_Pkg /* _L75/ */ _L75;
  trainPosition_T_TrainPosition_Types_Pck /* _L74/ */ _L74;
  MovementAuthority_t_TrackAtlasTypes /* _L76/ */ _L76;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L78/ */ _L78;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L77/ */ _L77;
  ReceivedMessage_T_Common_Types_Pkg /* _L79/ */ _L79;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  DataForModeAndLevel_t_TrackAtlasTypes /* _L86/ */ _L86;
  kcg_bool /* _L93/ */ _L93;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L92/ */ _L92;
  kcg_bool /* _L91/ */ _L91;
  kcg_bool /* _L90/ */ _L90;
  kcg_bool /* _L89/ */ _L89;
  Radio_TrainTrack_Message_T_TM_transitional /* _L88/ */ _L88;
  kcg_bool /* _L87/ */ _L87;
  T_TRAIN /* _L95/ */ _L95;
  trainProperties_T_TrainPosition_Types_Pck /* _L96/ */ _L96;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* _L97/ */ _L97;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* _L98/ */ _L98;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L99/ */ _L99;
  kcg_bool /* _L100/ */ _L100;
  kcg_bool /* _L103/ */ _L103;
  kcg_bool /* _L102/ */ _L102;
  GradientProfile_t_TrackAtlasTypes /* _L101/ */ _L101;
  kcg_bool /* _L104/ */ _L104;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L105/ */ _L105;
  MRSP_Profile_t_TrackAtlasTypes /* _L111/ */ _L111;
  kcg_bool /* _L112/ */ _L112;
  kcg_bool /* _L113/ */ _L113;
  kcg_bool /* _L114/ */ _L114;
  StaticSpeedProfile_t_TrackAtlasTypes /* _L115/ */ _L115;
  MRSP_Profile_t_TrackAtlasTypes /* _L120/ */ _L120;
  kcg_bool /* _L121/ */ _L121;
  _74_array /* _L122/ */ _L122;
  FromTIU_t_TrackAtlasTypes /* _L123/ */ _L123;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L30/ */ _L30;
  MRSP_Profile_t_TrackAtlasTypes /* _L119/ */ _L119;
  kcg_int32 /* _L118/ */ _L118;
  MRSP_Profile_t_TrackAtlasTypes /* _L129/ */ _L129;
  MRSP_Profile_t_TrackAtlasTypes /* _L131/ */ _L131;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L134/ */ _L134;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L137/ */ _L137;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L139/ */ _L139;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* _L67/ */ _L67;
  T_Mode_Level_Level_And_Mode_Types_Pkg /* _L140/ */ _L140;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L142/ */ _L142;
  MRSP_Profile_t_TrackAtlasTypes /* _L150/ */ _L150;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L151/ */ _L151;
  positionedBGs_T_TrainPosition_Types_Pck /* _L152/ */ _L152;
} outC_TrackAtlasETCS_TrackAtlas;

/* ===========  node initialization and cycle functions  =========== */
/* TrackAtlas::TrackAtlasETCS/ */
extern void TrackAtlasETCS_TrackAtlas(
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
  /* bus_in/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  /* P203V1_onboard/ */
  P203V1_OBU_T_TM_baseline2 *P203V1_onboard,
  /* PermanentDataP003/ */
  P003_permanent_data_T_TM_baseline2 *PermanentDataP003,
  /* balisegroups/ */
  positionedBGs_T_TrainPosition_Types_Pck *balisegroups,
  outC_TrackAtlasETCS_TrackAtlas *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrackAtlasETCS_reset_TrackAtlas(
  outC_TrackAtlasETCS_TrackAtlas *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrackAtlasETCS_init_TrackAtlas(
  outC_TrackAtlasETCS_TrackAtlas *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrackAtlasETCS_TrackAtlas_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackAtlasETCS_TrackAtlas.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

