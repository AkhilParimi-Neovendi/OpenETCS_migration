/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlasETCS_TrackAtlas.h"

/* TrackAtlas::TrackAtlasETCS/ */
void TrackAtlasETCS_TrackAtlas(
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
  outC_TrackAtlasETCS_TrackAtlas *outC)
{
  static kcg_size idx;
  static MRSP_Profile_t_TrackAtlasTypes acc;
  static kcg_size idx1;
  static kcg_bool noname;
  static kcg_bool _2_noname;
  static FromTIU_t_TrackAtlasTypes _3_noname;
  static MRSP_Profile_t_TrackAtlasTypes _4_noname;
  static kcg_int32 _5_noname;

  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L152, balisegroups);
  /* _L99= */
  if (outC->init) {
    outC->_L99 = kcg_lit_int32(0);
  }
  else {
    outC->_L99 = outC->_L94;
  }
  outC->_L104 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L24, MessageIn);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, MessageIn);
  /* _L20=(TA_Storage::StoreRaw_NV#1)/ */
  StoreRaw_NV_TA_Storage(&outC->_L23, &outC->Context_StoreRaw_NV_1);
  outC->_L20 = outC->Context_StoreRaw_NV_1.vald_NV;
  outC->_L22 = outC->Context_StoreRaw_NV_1.new_NV;
  kcg_copy_P003V1_OBU_T_TM_baseline2(
    &outC->_L21,
    &outC->Context_StoreRaw_NV_1.NV_onboard_out);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L25, TrainPositionIn);
  outC->_L95 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L96, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L97, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L98, packet1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L137, bus_in);
  /* _L87=(TA_EmergencyStop::Manage_EmergencyStop#1)/ */
  Manage_EmergencyStop_TA_EmergencyStop(
    &outC->_L24,
    outC->_L95,
    &outC->_L96,
    &outC->_L97,
    &outC->_L98,
    &outC->_L25,
    outC->_L99,
    &outC->_L137,
    &outC->Context_Manage_EmergencyStop_1);
  outC->_L87 = outC->Context_Manage_EmergencyStop_1.rejectNewMA;
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->_L88,
    &outC->Context_Manage_EmergencyStop_1.message147);
  outC->_L89 = outC->Context_Manage_EmergencyStop_1.tripTrain;
  outC->_L90 = outC->Context_Manage_EmergencyStop_1.cesAccepted;
  outC->_L91 = outC->Context_Manage_EmergencyStop_1.updateEOA;
  outC->_L92 = outC->Context_Manage_EmergencyStop_1.newEOA;
  outC->_L93 = outC->Context_Manage_EmergencyStop_1.cesRevoked;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L134,
    &outC->Context_Manage_EmergencyStop_1.bus_out);
  /* _L16=(TA_MA_new::Build_MA_L23#1)/ */
  Build_MA_L23_TA_MA_new(
    outC->_L104,
    &outC->_L24,
    &outC->_L21,
    &outC->_L25,
    outC->_L87,
    outC->_L91,
    outC->_L92,
    &outC->_L152,
    &outC->Context_Build_MA_L23_1);
  outC->_L16 = outC->Context_Build_MA_L23_1.updated;
  outC->_L17 = outC->Context_Build_MA_L23_1.available;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MovementAuthority_Local,
    &outC->Context_Build_MA_L23_1.MA_absolute);
  outC->_L94 = outC->Context_Build_MA_L23_1.currentEOA;
  outC->EoA = outC->_L94;
  outC->_L151 = outC->EoA;
  outC->_L142 = outC->EoA;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L140, ModeAndLevel_in);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L74, TrainPositionIn);
  outC->_L73 = SystemTime;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L75, MessageIn);
  outC->_L65 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L68, odometry);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L76,
    &outC->MovementAuthority_Local);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L70, fromDriverToMA_R);
  outC->_L72 = kcg_false;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L71, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L64, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L69, packet1);
  outC->_L66 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus1, &outC->_L134);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L139, &outC->bus1);
  /* _L67=(TA_MA_Request::Manage_MA_Request#1)/ */
  Manage_MA_Request_TA_MA_Request(
    &outC->_L74,
    outC->_L73,
    &outC->_L75,
    outC->_L65,
    &outC->_L68,
    &outC->_L76,
    &outC->_L70,
    outC->_L72,
    &outC->_L71,
    &outC->_L64,
    &outC->_L69,
    outC->_L66,
    &outC->_L139,
    &outC->_L140,
    &outC->Context_Manage_MA_Request_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L67,
    &outC->Context_Manage_MA_Request_1.bus_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_L67);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L120,
    (MRSP_Profile_t_TrackAtlasTypes *) &DEFAULT_MRSP_Profile_TA_MRSP);
  outC->_L123 = TrainData_in;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L26, ModeAndLevel_in);
  outC->_L30 = train_length;
  /* _L32=(TA_MRSP_new::Build_MRSP#1)/ */
  Build_MRSP_TA_MRSP_new(
    &outC->_L24,
    outC->_L123,
    &outC->_L26,
    outC->_L30,
    &outC->_L25,
    &outC->_L152,
    &outC->Context_Build_MRSP_1);
  outC->_L32 = outC->Context_Build_MRSP_1.newMRSP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L19,
    &outC->Context_Build_MRSP_1.MRSP);
  outC->_L100 = outC->Context_Build_MRSP_1.SSP_available;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->_L105,
    &outC->Context_Build_MRSP_1.SSP);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->SSP, &outC->_L105);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L115, &outC->SSP);
  /* _L122/ */
  for (idx = 0; idx < 110; idx++) {
    kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L122[idx], &outC->_L115);
  }
  outC->_L121 = kcg_true;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L119, &outC->_L120);
  /* _L118= */
  if (outC->_L121) {
    /* _L118= */
    for (idx1 = 0; idx1 < 110; idx1++) {
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&acc, &outC->_L119);
      /* _L118=(TA_Export::SSP_to_MRSP#1)/ */
      SSP_to_MRSP_TA_Export(
        /* _L118= */(kcg_int32) idx1,
        &acc,
        &outC->_L122[idx1],
        &outC->Context_SSP_to_MRSP_1[idx1]);
      kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
        &outC->_L119,
        &outC->Context_SSP_to_MRSP_1[idx1].MRSP);
      outC->_L118 = /* _L118= */(kcg_int32) (idx1 + 1);
      /* _L118= */
      if (!outC->Context_SSP_to_MRSP_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L118 = kcg_lit_int32(0);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP_export, &outC->_L119);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L129, &outC->MRSP_export);
  /* _L150=(TA_Export::MRSP_to_DMI#1)/ */
  MRSP_to_DMI_TA_Export(
    outC->_L151,
    &outC->_L129,
    &outC->Context_MRSP_to_DMI_1);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(
    &outC->_L150,
    &outC->Context_MRSP_to_DMI_1.MRSP_to_DMI);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP_to_DMI, &outC->_L150);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L131, &outC->MRSP_to_DMI);
  _5_noname = outC->_L118;
  outC->valid_SSP = outC->_L100;
  outC->_L114 = outC->valid_SSP;
  outC->valid_MA = outC->_L17;
  outC->_L113 = outC->valid_MA;
  /* _L101=(TA_Gradient_new::Build_GradientProfile#1)/ */
  Build_GradientProfile_TA_Gradient_new(
    outC->_L104,
    &outC->_L24,
    &outC->_L25,
    &outC->_L152,
    &outC->Context_Build_GradientProfile_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L101,
    &outC->Context_Build_GradientProfile_1.GP);
  outC->_L102 = outC->Context_Build_GradientProfile_1.updated;
  outC->_L103 = outC->Context_Build_GradientProfile_1.available;
  outC->valid_GP = outC->_L103;
  outC->_L112 = outC->valid_GP;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&_4_noname, &outC->_L19);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L111, &outC->MRSP_export);
  outC->SSP_available = outC->_L100;
  outC->trip_train = outC->_L89;
  outC->ces_revoked = outC->_L93;
  outC->ces_accepted = outC->_L90;
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->_L88);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L79, MessageIn);
  outC->_L80 = kcg_false;
  /* _L77=(TA_Export::TA_to_ML#1)/ */
  TA_to_ML_TA_Export(
    &outC->_L79,
    outC->_L80,
    outC->_L112,
    outC->_L113,
    outC->_L114,
    &outC->Context_TA_to_ML_1);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L77,
    &outC->Context_TA_to_ML_1.Data_to_From_Track_Packets_at_ML);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L78,
    &outC->Context_TA_to_ML_1.Data_to_From_Track_Messages_at_ML);
  outC->_L85 = outC->Context_TA_to_ML_1.P_12_to_Input_MA_SSP_Gradient_at_ML;
  outC->_L84 = outC->Context_TA_to_ML_1.P_15_to_Input_MA_SSP_Gradient_at_ML;
  outC->_L83 = outC->Context_TA_to_ML_1.P_21_to_Input_MA_SSP_Gradient_at_ML;
  outC->_L82 = outC->Context_TA_to_ML_1.P_27_to_Input_MA_SSP_Gradient_at_ML;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L86.train_packets,
    &outC->_L77);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L86.train_messages,
    &outC->_L78);
  outC->_L86.p12 = outC->_L85;
  outC->_L86.p15 = outC->_L84;
  outC->_L86.p21 = outC->_L83;
  outC->_L86.p27 = outC->_L82;
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    &outC->_L86);
  kcg_copy_P003_permanent_data_T_TM_baseline2(&outC->_L52, PermanentDataP003);
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L51, P203V1_onboard);
  /* _L50=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU#1)/ */
  C_P003V1_OBU_P003_OBU_TM_conversions_baseline2(
    &outC->_L21,
    &outC->_L51,
    &outC->_L52,
    &outC->Context_C_P003V1_OBU_P003_OBU_1);
  kcg_copy_P003_OBU_T_TM(
    &outC->_L50,
    &outC->Context_C_P003V1_OBU_P003_OBU_1.P003_onbaord_out);
  /* _L31=(TA_Export::GradientProfile_to_DMI#1)/ */
  GradientProfile_to_DMI_TA_Export(
    outC->_L142,
    &outC->_L101,
    &outC->Context_GradientProfile_to_DMI_1);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L31,
    &outC->Context_GradientProfile_to_DMI_1.Gradient_Profile_for_DMI_out);
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->_L35.GradientProfile,
    &outC->_L31);
  outC->_L35.Gradient_profile_updated = outC->_L102;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L35.MRSP, &outC->_L131);
  outC->_L35.MRSP_updated = outC->_L32;
  outC->_L34.freshMA = outC->_L16;
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L34.MA,
    &outC->MovementAuthority_Local);
  outC->_L34.freshGradientProfile = outC->_L102;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L34.GradientProfile,
    &outC->_L101);
  outC->_L34.freshMRSP = outC->_L32;
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L34.MRSP, &outC->_L111);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L34);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->MA_onboard_out,
    &outC->MovementAuthority_Local);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->_L50);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->_L35);
  outC->_L27 = TrainData_in;
  _3_noname = outC->_L27;
  _2_noname = outC->_L22;
  noname = outC->_L20;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlasETCS_init_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
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
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;
  static kcg_size idx80;
  static kcg_size idx81;
  static kcg_size idx82;
  static kcg_size idx83;
  static kcg_size idx84;
  static kcg_size idx85;
  static kcg_size idx86;
  static kcg_size idx87;
  static kcg_size idx88;
  static kcg_size idx89;
  static kcg_size idx90;
  static kcg_size idx91;
  static kcg_size idx92;
  static kcg_size idx93;
  static kcg_size idx94;
  static kcg_size idx95;
  static kcg_size idx96;
  static kcg_size idx97;
  static kcg_size idx98;
  static kcg_size idx99;
  static kcg_size idx100;
  static kcg_size idx101;
  static kcg_size idx102;
  static kcg_size idx103;
  static kcg_size idx104;
  static kcg_size idx105;
  static kcg_size idx106;
  static kcg_size idx107;
  static kcg_size idx108;

  for (idx2 = 0; idx2 < 41; idx2++) {
    outC->_L152[idx2].valid = kcg_true;
    outC->_L152[idx2].nid_c = kcg_lit_int32(0);
    outC->_L152[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L152[idx2].q_link = Q_LINK_Unlinked;
    outC->_L152[idx2].location.nominal = kcg_lit_int32(0);
    outC->_L152[idx2].location.d_min = kcg_lit_int32(0);
    outC->_L152[idx2].location.d_max = kcg_lit_int32(0);
    outC->_L152[idx2].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.valid = kcg_true;
    outC->_L152[idx2].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L152[idx2].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L152[idx2].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L152[idx2].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L152[idx2].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.valid = kcg_true;
    outC->_L152[idx2].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L152[idx2].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L152[idx2].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L152[idx2].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L152[idx2].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L152[idx2].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L152[idx2].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L152[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L152[idx2].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L152[idx2].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L152[idx2].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx1 = 0; idx1 < 33; idx1++) {
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].valid = kcg_true;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L152[idx2].infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
    }
    outC->_L152[idx2].missed = kcg_true;
  }
  outC->_L151 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 110; idx3++) {
    outC->_L150[idx3].valid = kcg_true;
    outC->_L150[idx3].Loc_Abs = kcg_lit_int32(0);
    outC->_L150[idx3].Loc_LRBG = kcg_lit_int32(0);
    outC->_L150[idx3].MRS = kcg_lit_int32(0);
  }
  outC->_L142 = kcg_lit_int32(0);
  outC->_L140.compatibleModeAndLevel = kcg_true;
  outC->_L140.level = M_LEVEL_Level_0;
  outC->_L140.newLevel = kcg_true;
  outC->_L140.Mode = M_MODE_Full_Supervision;
  outC->_L140.newMode = kcg_true;
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L67[idx5].Message.valid = kcg_true;
    outC->_L67[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L67[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L67[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L67[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L67[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L67[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L67[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L67[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  for (idx7 = 0; idx7 < 5; idx7++) {
    outC->_L139[idx7].Message.valid = kcg_true;
    outC->_L139[idx7].Message.nid_message = kcg_lit_int32(0);
    outC->_L139[idx7].Message.l_message = kcg_lit_int32(0);
    outC->_L139[idx7].Message.t_train = kcg_lit_int32(0);
    outC->_L139[idx7].Message.nid_engine = kcg_lit_int32(0);
    outC->_L139[idx7].Message.field1 = kcg_lit_int32(0);
    outC->_L139[idx7].Message.field2 = kcg_lit_int32(0);
    outC->_L139[idx7].Message.field3 = kcg_lit_int32(0);
    for (idx6 = 0; idx6 < 50; idx6++) {
      outC->_L139[idx7].OptionalPackets[idx6] = kcg_lit_int32(0);
    }
  }
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L137[idx9].Message.valid = kcg_true;
    outC->_L137[idx9].Message.nid_message = kcg_lit_int32(0);
    outC->_L137[idx9].Message.l_message = kcg_lit_int32(0);
    outC->_L137[idx9].Message.t_train = kcg_lit_int32(0);
    outC->_L137[idx9].Message.nid_engine = kcg_lit_int32(0);
    outC->_L137[idx9].Message.field1 = kcg_lit_int32(0);
    outC->_L137[idx9].Message.field2 = kcg_lit_int32(0);
    outC->_L137[idx9].Message.field3 = kcg_lit_int32(0);
    for (idx8 = 0; idx8 < 50; idx8++) {
      outC->_L137[idx9].OptionalPackets[idx8] = kcg_lit_int32(0);
    }
  }
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L134[idx11].Message.valid = kcg_true;
    outC->_L134[idx11].Message.nid_message = kcg_lit_int32(0);
    outC->_L134[idx11].Message.l_message = kcg_lit_int32(0);
    outC->_L134[idx11].Message.t_train = kcg_lit_int32(0);
    outC->_L134[idx11].Message.nid_engine = kcg_lit_int32(0);
    outC->_L134[idx11].Message.field1 = kcg_lit_int32(0);
    outC->_L134[idx11].Message.field2 = kcg_lit_int32(0);
    outC->_L134[idx11].Message.field3 = kcg_lit_int32(0);
    for (idx10 = 0; idx10 < 50; idx10++) {
      outC->_L134[idx11].OptionalPackets[idx10] = kcg_lit_int32(0);
    }
  }
  for (idx12 = 0; idx12 < 110; idx12++) {
    outC->_L131[idx12].valid = kcg_true;
    outC->_L131[idx12].Loc_Abs = kcg_lit_int32(0);
    outC->_L131[idx12].Loc_LRBG = kcg_lit_int32(0);
    outC->_L131[idx12].MRS = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 110; idx13++) {
    outC->_L129[idx13].valid = kcg_true;
    outC->_L129[idx13].Loc_Abs = kcg_lit_int32(0);
    outC->_L129[idx13].Loc_LRBG = kcg_lit_int32(0);
    outC->_L129[idx13].MRS = kcg_lit_int32(0);
  }
  outC->_L118 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 110; idx14++) {
    outC->_L119[idx14].valid = kcg_true;
    outC->_L119[idx14].Loc_Abs = kcg_lit_int32(0);
    outC->_L119[idx14].Loc_LRBG = kcg_lit_int32(0);
    outC->_L119[idx14].MRS = kcg_lit_int32(0);
  }
  outC->_L30 = kcg_lit_int32(0);
  outC->_L123 = kcg_true;
  for (idx16 = 0; idx16 < 110; idx16++) {
    for (idx15 = 0; idx15 < 50; idx15++) {
      outC->_L122[idx16][idx15].valid = kcg_true;
      outC->_L122[idx16][idx15].d_static_abs = kcg_lit_int32(0);
      outC->_L122[idx16][idx15].d_static_LRBG = kcg_lit_int32(0);
      outC->_L122[idx16][idx15].q_train_length_corr = kcg_true;
      outC->_L122[idx16][idx15].v_static = kcg_lit_int32(0);
    }
  }
  outC->_L121 = kcg_true;
  for (idx17 = 0; idx17 < 110; idx17++) {
    outC->_L120[idx17].valid = kcg_true;
    outC->_L120[idx17].Loc_Abs = kcg_lit_int32(0);
    outC->_L120[idx17].Loc_LRBG = kcg_lit_int32(0);
    outC->_L120[idx17].MRS = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 50; idx18++) {
    outC->_L115[idx18].valid = kcg_true;
    outC->_L115[idx18].d_static_abs = kcg_lit_int32(0);
    outC->_L115[idx18].d_static_LRBG = kcg_lit_int32(0);
    outC->_L115[idx18].q_train_length_corr = kcg_true;
    outC->_L115[idx18].v_static = kcg_lit_int32(0);
  }
  outC->_L114 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L112 = kcg_true;
  for (idx19 = 0; idx19 < 110; idx19++) {
    outC->_L111[idx19].valid = kcg_true;
    outC->_L111[idx19].Loc_Abs = kcg_lit_int32(0);
    outC->_L111[idx19].Loc_LRBG = kcg_lit_int32(0);
    outC->_L111[idx19].MRS = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 50; idx20++) {
    outC->_L105[idx20].valid = kcg_true;
    outC->_L105[idx20].d_static_abs = kcg_lit_int32(0);
    outC->_L105[idx20].d_static_LRBG = kcg_lit_int32(0);
    outC->_L105[idx20].q_train_length_corr = kcg_true;
    outC->_L105[idx20].v_static = kcg_lit_int32(0);
  }
  outC->_L104 = kcg_true;
  for (idx21 = 0; idx21 < 50; idx21++) {
    outC->_L101[idx21].valid = kcg_true;
    outC->_L101[idx21].Loc_Absolute = kcg_lit_int32(0);
    outC->_L101[idx21].Loc_LRBG = kcg_lit_int32(0);
    outC->_L101[idx21].Gradient = kcg_lit_int32(0);
    outC->_L101[idx21].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L102 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L99 = kcg_lit_int32(0);
  outC->_L98.valid = kcg_true;
  outC->_L98.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L98.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L98.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L98.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L98.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L98.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L98.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L98.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L98.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L98.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L98.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L98.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L98.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L98.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L98.packet1.mode = M_MODE_Full_Supervision;
  outC->_L98.packet1.level = M_LEVEL_Level_0;
  outC->_L98.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L97.valid = kcg_true;
  outC->_L97.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L97.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L97.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L97.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L97.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L97.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L97.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L97.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L97.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L97.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L97.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L97.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L97.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L97.packet0.mode = M_MODE_Full_Supervision;
  outC->_L97.packet0.level = M_LEVEL_Level_0;
  outC->_L97.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L96.nid_engine = kcg_lit_int32(0);
  outC->_L96.nid_operational = kcg_lit_int32(0);
  outC->_L96.l_train = kcg_lit_int32(0);
  outC->_L96.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L96.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L96.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L96.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L96.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L96.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L96.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L96.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L96.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L96.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L96.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L96.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L95 = kcg_lit_int32(0);
  outC->_L87 = kcg_true;
  outC->_L88.present = kcg_true;
  outC->_L88.header.present = kcg_true;
  outC->_L88.header.nid_message = kcg_lit_int32(0);
  outC->_L88.header.t_train = kcg_lit_int32(0);
  outC->_L88.header.nid_engine = kcg_lit_int32(0);
  outC->_L88.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L88.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L88.header.xNID_EM = kcg_lit_int32(0);
  outC->_L88.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L88.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L88.packets.p0.valid = kcg_true;
  outC->_L88.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L88.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L88.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L88.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L88.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L88.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L88.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L88.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L88.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L88.packets.p1.valid = kcg_true;
  outC->_L88.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L88.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L88.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L88.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L88.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L88.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L88.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L88.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L88.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L88.packets.p3.valid = kcg_true;
  outC->_L88.packets.p3.number = kcg_lit_int32(0);
  for (idx23 = 0; idx23 < 1; idx23++) {
    outC->_L88.packets.p3.aNID_RADIO[idx23].valid = kcg_true;
    for (idx22 = 0; idx22 < 15; idx22++) {
      outC->_L88.packets.p3.aNID_RADIO[idx23].telephoneNumber[idx22] =
        kcg_lit_int32(0);
    }
  }
  outC->_L88.packets.p4.valid = kcg_true;
  outC->_L88.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L88.packets.p5.valid = kcg_true;
  outC->_L88.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L88.packets.p9.valid = kcg_true;
  outC->_L88.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L88.packets.p11.valid = kcg_true;
  outC->_L88.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L88.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L88.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L88.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L88.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L88.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L88.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L88.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L88.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 4; idx24++) {
    outC->_L88.packets.p11.tractionIdentity[idx24].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L88.packets.p11.tractionIdentity[idx24].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L88.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 5; idx25++) {
    outC->_L88.packets.p11.nid_ntc[idx25] = kcg_lit_int32(0);
  }
  outC->_L89 = kcg_true;
  outC->_L90 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L92 = kcg_lit_int32(0);
  outC->_L93 = kcg_true;
  for (idx26 = 0; idx26 < 5; idx26++) {
    outC->_L86.train_packets.P_12[idx26].valid = kcg_true;
    outC->_L86.train_packets.P_12[idx26].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_12[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.train_packets.P_12[idx26].v_main = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].v_loa = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].t_loa = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].l_section = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L86.train_packets.P_12[idx26].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].l_endsection = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L86.train_packets.P_12[idx26].t_sectiontimer = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L86.train_packets.P_12[idx26].t_endtimer = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L86.train_packets.P_12[idx26].d_dp = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].v_releasedp = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L86.train_packets.P_12[idx26].d_startol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].t_ol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].d_ol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_12[idx26].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L86.train_packets.P_135.valid = kcg_true;
  outC->_L86.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L86.train_packets.P_137.valid = kcg_true;
  outC->_L86.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L86.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L86.train_packets.P_138.valid = kcg_true;
  outC->_L86.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L86.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L86.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L86.train_packets.P_139.valid = kcg_true;
  outC->_L86.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L86.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L86.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L86.train_packets.P_15[idx27].valid = kcg_true;
    outC->_L86.train_packets.P_15[idx27].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_15[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.train_packets.P_15[idx27].v_loa = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].t_loa = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].l_section = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L86.train_packets.P_15[idx27].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].l_endsection = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L86.train_packets.P_15[idx27].t_sectiontimer = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L86.train_packets.P_15[idx27].t_endtimer = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L86.train_packets.P_15[idx27].d_dp = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].v_releasedp = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L86.train_packets.P_15[idx27].d_startol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].t_ol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].d_ol = kcg_lit_int32(0);
    outC->_L86.train_packets.P_15[idx27].v_releaseol = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L86.train_packets.P_21[idx28].valid = kcg_true;
    outC->_L86.train_packets.P_21[idx28].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_21[idx28].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.train_packets.P_21[idx28].d_gradient = kcg_lit_int32(0);
    outC->_L86.train_packets.P_21[idx28].q_gdir = Q_GDIR_downhill;
    outC->_L86.train_packets.P_21[idx28].g_a = kcg_lit_int32(0);
  }
  outC->_L86.train_packets.P_27.valid = kcg_true;
  outC->_L86.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L86.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L86.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L86.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L86.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->_L86.train_packets.P_27.diffArray[idx29].valid = kcg_true;
    outC->_L86.train_packets.P_27.diffArray[idx29].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L86.train_packets.P_27.diffArray[idx29].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L86.train_packets.P_27.diffArray[idx29].nc_diff = kcg_lit_int32(0);
    outC->_L86.train_packets.P_27.diffArray[idx29].v_diff = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 7; idx31++) {
    outC->_L86.train_packets.P_27.SSPArray[idx31].valid = kcg_true;
    outC->_L86.train_packets.P_27.SSPArray[idx31].d_static = kcg_lit_int32(0);
    outC->_L86.train_packets.P_27.SSPArray[idx31].v_static = kcg_lit_int32(0);
    outC->_L86.train_packets.P_27.SSPArray[idx31].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx30 = 0; idx30 < 7; idx30++) {
      outC->_L86.train_packets.P_27.SSPArray[idx31].diffArray[idx30].valid = kcg_true;
      outC->_L86.train_packets.P_27.SSPArray[idx31].diffArray[idx30].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L86.train_packets.P_27.SSPArray[idx31].diffArray[idx30].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L86.train_packets.P_27.SSPArray[idx31].diffArray[idx30].nc_diff =
        kcg_lit_int32(0);
      outC->_L86.train_packets.P_27.SSPArray[idx31].diffArray[idx30].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx32 = 0; idx32 < 7; idx32++) {
    outC->_L86.train_packets.P_41[idx32].valid = kcg_true;
    outC->_L86.train_packets.P_41[idx32].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_41[idx32].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.train_packets.P_41[idx32].d_leveltr = kcg_lit_int32(0);
    outC->_L86.train_packets.P_41[idx32].m_leveltr = M_LEVELTR_Level_0;
    outC->_L86.train_packets.P_41[idx32].nid_ntc = kcg_lit_int32(0);
    outC->_L86.train_packets.P_41[idx32].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 7; idx33++) {
    outC->_L86.train_packets.P_46[idx33].valid = kcg_true;
    outC->_L86.train_packets.P_46[idx33].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_46[idx33].m_leveltr = M_LEVELTR_Level_0;
    outC->_L86.train_packets.P_46[idx33].nid_ntc = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L86.train_packets.P_63[idx34].valid = kcg_true;
    outC->_L86.train_packets.P_63[idx34].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_63[idx34].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L86.train_packets.P_63[idx34].nid_c = kcg_lit_int32(0);
    outC->_L86.train_packets.P_63[idx34].nid_bg = kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 3; idx35++) {
    outC->_L86.train_packets.P_80[idx35].valid = kcg_true;
    outC->_L86.train_packets.P_80[idx35].q_dir = Q_DIR_Reverse;
    outC->_L86.train_packets.P_80[idx35].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86.train_packets.P_80[idx35].d_mamode = kcg_lit_int32(0);
    outC->_L86.train_packets.P_80[idx35].m_mamode = M_MAMODE_On_Sight;
    outC->_L86.train_packets.P_80[idx35].v_mamode = kcg_lit_int32(0);
    outC->_L86.train_packets.P_80[idx35].l_mamode = kcg_lit_int32(0);
    outC->_L86.train_packets.P_80[idx35].l_ackmamode = kcg_lit_int32(0);
    outC->_L86.train_packets.P_80[idx35].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L86.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L86.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L86.train_messages.Mess_15 = kcg_true;
  outC->_L86.train_messages.Mess_16 = kcg_true;
  outC->_L86.train_messages.Mess_2 = kcg_true;
  outC->_L86.train_messages.Mess_27 = kcg_true;
  outC->_L86.train_messages.Mess_28 = kcg_true;
  outC->_L86.train_messages.Mess_6 = kcg_true;
  outC->_L86.p12 = kcg_true;
  outC->_L86.p15 = kcg_true;
  outC->_L86.p21 = kcg_true;
  outC->_L86.p27 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79.valid = kcg_true;
  outC->_L79.source = msrc_undefined_Common_Types_Pkg;
  outC->_L79.radioMetadata.t_train_reference = kcg_true;
  outC->_L79.radioMetadata.nid_em = kcg_true;
  outC->_L79.radioMetadata.q_scale = kcg_true;
  outC->_L79.radioMetadata.d_sr = kcg_true;
  outC->_L79.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L79.radioMetadata.d_ref = kcg_true;
  outC->_L79.radioMetadata.q_dir = kcg_true;
  outC->_L79.radioMetadata.d_emergencystop = kcg_true;
  outC->_L79.radioMetadata.m_version = kcg_true;
  outC->_L79.BG_Common_Header.valid = kcg_true;
  outC->_L79.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L79.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L79.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L79.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L79.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L79.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L79.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L79.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L79.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L79.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L79.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L79.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L79.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L79.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L79.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L79.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L79.packets.PacketHeaders[idx36].nid_packet = kcg_lit_int32(0);
    outC->_L79.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->_L79.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->_L79.packets.PacketHeaders[idx36].startAddress = kcg_lit_int32(0);
    outC->_L79.packets.PacketHeaders[idx36].endAddress = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L79.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->_L79.sendingRBC.valid = kcg_true;
  outC->_L79.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L79.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L79.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 5; idx38++) {
    outC->_L77.P_12[idx38].valid = kcg_true;
    outC->_L77.P_12[idx38].q_dir = Q_DIR_Reverse;
    outC->_L77.P_12[idx38].q_scale = Q_SCALE_10_cm_scale;
    outC->_L77.P_12[idx38].v_main = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].v_loa = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].t_loa = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].l_section = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L77.P_12[idx38].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].l_endsection = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L77.P_12[idx38].t_sectiontimer = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L77.P_12[idx38].t_endtimer = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L77.P_12[idx38].d_dp = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].v_releasedp = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L77.P_12[idx38].d_startol = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].t_ol = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].d_ol = kcg_lit_int32(0);
    outC->_L77.P_12[idx38].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L77.P_135.valid = kcg_true;
  outC->_L77.P_135.q_dir = Q_DIR_Reverse;
  outC->_L77.P_137.valid = kcg_true;
  outC->_L77.P_137.q_dir = Q_DIR_Reverse;
  outC->_L77.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L77.P_138.valid = kcg_true;
  outC->_L77.P_138.q_dir = Q_DIR_Reverse;
  outC->_L77.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L77.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L77.P_139.valid = kcg_true;
  outC->_L77.P_139.q_dir = Q_DIR_Reverse;
  outC->_L77.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L77.P_139.v_reverse = kcg_lit_int32(0);
  for (idx39 = 0; idx39 < 5; idx39++) {
    outC->_L77.P_15[idx39].valid = kcg_true;
    outC->_L77.P_15[idx39].q_dir = Q_DIR_Reverse;
    outC->_L77.P_15[idx39].q_scale = Q_SCALE_10_cm_scale;
    outC->_L77.P_15[idx39].v_loa = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].t_loa = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].l_section = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L77.P_15[idx39].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].l_endsection = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L77.P_15[idx39].t_sectiontimer = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L77.P_15[idx39].t_endtimer = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L77.P_15[idx39].d_dp = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].v_releasedp = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L77.P_15[idx39].d_startol = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].t_ol = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].d_ol = kcg_lit_int32(0);
    outC->_L77.P_15[idx39].v_releaseol = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 7; idx40++) {
    outC->_L77.P_21[idx40].valid = kcg_true;
    outC->_L77.P_21[idx40].q_dir = Q_DIR_Reverse;
    outC->_L77.P_21[idx40].q_scale = Q_SCALE_10_cm_scale;
    outC->_L77.P_21[idx40].d_gradient = kcg_lit_int32(0);
    outC->_L77.P_21[idx40].q_gdir = Q_GDIR_downhill;
    outC->_L77.P_21[idx40].g_a = kcg_lit_int32(0);
  }
  outC->_L77.P_27.valid = kcg_true;
  outC->_L77.P_27.q_dir = Q_DIR_Reverse;
  outC->_L77.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L77.P_27.d_static = kcg_lit_int32(0);
  outC->_L77.P_27.v_static = kcg_lit_int32(0);
  outC->_L77.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx41 = 0; idx41 < 7; idx41++) {
    outC->_L77.P_27.diffArray[idx41].valid = kcg_true;
    outC->_L77.P_27.diffArray[idx41].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L77.P_27.diffArray[idx41].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L77.P_27.diffArray[idx41].nc_diff = kcg_lit_int32(0);
    outC->_L77.P_27.diffArray[idx41].v_diff = kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 7; idx43++) {
    outC->_L77.P_27.SSPArray[idx43].valid = kcg_true;
    outC->_L77.P_27.SSPArray[idx43].d_static = kcg_lit_int32(0);
    outC->_L77.P_27.SSPArray[idx43].v_static = kcg_lit_int32(0);
    outC->_L77.P_27.SSPArray[idx43].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx42 = 0; idx42 < 7; idx42++) {
      outC->_L77.P_27.SSPArray[idx43].diffArray[idx42].valid = kcg_true;
      outC->_L77.P_27.SSPArray[idx43].diffArray[idx42].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L77.P_27.SSPArray[idx43].diffArray[idx42].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L77.P_27.SSPArray[idx43].diffArray[idx42].nc_diff = kcg_lit_int32(0);
      outC->_L77.P_27.SSPArray[idx43].diffArray[idx42].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx44 = 0; idx44 < 7; idx44++) {
    outC->_L77.P_41[idx44].valid = kcg_true;
    outC->_L77.P_41[idx44].q_dir = Q_DIR_Reverse;
    outC->_L77.P_41[idx44].q_scale = Q_SCALE_10_cm_scale;
    outC->_L77.P_41[idx44].d_leveltr = kcg_lit_int32(0);
    outC->_L77.P_41[idx44].m_leveltr = M_LEVELTR_Level_0;
    outC->_L77.P_41[idx44].nid_ntc = kcg_lit_int32(0);
    outC->_L77.P_41[idx44].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 7; idx45++) {
    outC->_L77.P_46[idx45].valid = kcg_true;
    outC->_L77.P_46[idx45].q_dir = Q_DIR_Reverse;
    outC->_L77.P_46[idx45].m_leveltr = M_LEVELTR_Level_0;
    outC->_L77.P_46[idx45].nid_ntc = kcg_lit_int32(0);
  }
  for (idx46 = 0; idx46 < 7; idx46++) {
    outC->_L77.P_63[idx46].valid = kcg_true;
    outC->_L77.P_63[idx46].q_dir = Q_DIR_Reverse;
    outC->_L77.P_63[idx46].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L77.P_63[idx46].nid_c = kcg_lit_int32(0);
    outC->_L77.P_63[idx46].nid_bg = kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 3; idx47++) {
    outC->_L77.P_80[idx47].valid = kcg_true;
    outC->_L77.P_80[idx47].q_dir = Q_DIR_Reverse;
    outC->_L77.P_80[idx47].q_scale = Q_SCALE_10_cm_scale;
    outC->_L77.P_80[idx47].d_mamode = kcg_lit_int32(0);
    outC->_L77.P_80[idx47].m_mamode = M_MAMODE_On_Sight;
    outC->_L77.P_80[idx47].v_mamode = kcg_lit_int32(0);
    outC->_L77.P_80[idx47].l_mamode = kcg_lit_int32(0);
    outC->_L77.P_80[idx47].l_ackmamode = kcg_lit_int32(0);
    outC->_L77.P_80[idx47].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L77.LRBG = kcg_lit_int32(0);
  outC->_L77.referenceLocation = kcg_lit_int32(0);
  outC->_L78.Mess_15 = kcg_true;
  outC->_L78.Mess_16 = kcg_true;
  outC->_L78.Mess_2 = kcg_true;
  outC->_L78.Mess_27 = kcg_true;
  outC->_L78.Mess_28 = kcg_true;
  outC->_L78.Mess_6 = kcg_true;
  outC->_L76.valid = kcg_true;
  outC->_L76.Level = MA_L1_TrackAtlasTypes;
  outC->_L76.q_dir = Q_DIR_Reverse;
  outC->_L76.v_main = kcg_lit_int32(0);
  outC->_L76.v_loa = kcg_lit_int32(0);
  outC->_L76.t_loa_unlimited = kcg_true;
  outC->_L76.t_loa = kcg_lit_int32(0);
  outC->_L76.n_iter = kcg_lit_int32(0);
  for (idx48 = 0; idx48 < 10; idx48++) {
    outC->_L76.sections[idx48].valid = kcg_true;
    outC->_L76.sections[idx48].q_endsection = kcg_true;
    outC->_L76.sections[idx48].l_section = kcg_lit_int32(0);
    outC->_L76.sections[idx48].q_sectiontimer = kcg_true;
    outC->_L76.sections[idx48].t_sectiontimer = kcg_lit_int32(0);
    outC->_L76.sections[idx48].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L76.q_dangerpoint = kcg_true;
  outC->_L76.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L76.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L76.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L76.q_overlap = kcg_true;
  outC->_L76.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L76.overlap.v_release = kcg_lit_int32(0);
  outC->_L76.overlap.calc_v_release_onboard = kcg_true;
  outC->_L76.q_endtimer = kcg_true;
  outC->_L76.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L76.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L74.valid = kcg_true;
  outC->_L74.timestamp = kcg_lit_int32(0);
  outC->_L74.trainPositionIsUnknown = kcg_true;
  outC->_L74.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L74.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L74.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L74.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L74.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L74.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L74.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L74.LRBG.valid = kcg_true;
  outC->_L74.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L74.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L74.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L74.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L74.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L74.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx49 = 0; idx49 < 33; idx49++) {
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].valid = kcg_true;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].nid_LRBG = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_dir = Q_DIR_Reverse;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].d_link = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].nid_c = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].nid_bg = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx49].q_locacc = kcg_lit_int32(0);
  }
  outC->_L74.LRBG.missed = kcg_true;
  outC->_L74.prvLRBG.valid = kcg_true;
  outC->_L74.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L74.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx50 = 0; idx50 < 33; idx50++) {
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].valid = kcg_true;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].nid_LRBG = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_dir = Q_DIR_Reverse;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].d_link = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].nid_c = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].nid_bg = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx50].q_locacc = kcg_lit_int32(0);
  }
  outC->_L74.prvLRBG.missed = kcg_true;
  outC->_L74.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L74.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L74.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L74.linkingIsUsedOnboard = kcg_true;
  outC->_L74.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L74.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L74.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L75.valid = kcg_true;
  outC->_L75.source = msrc_undefined_Common_Types_Pkg;
  outC->_L75.radioMetadata.t_train_reference = kcg_true;
  outC->_L75.radioMetadata.nid_em = kcg_true;
  outC->_L75.radioMetadata.q_scale = kcg_true;
  outC->_L75.radioMetadata.d_sr = kcg_true;
  outC->_L75.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L75.radioMetadata.d_ref = kcg_true;
  outC->_L75.radioMetadata.q_dir = kcg_true;
  outC->_L75.radioMetadata.d_emergencystop = kcg_true;
  outC->_L75.radioMetadata.m_version = kcg_true;
  outC->_L75.BG_Common_Header.valid = kcg_true;
  outC->_L75.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L75.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L75.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L75.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L75.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L75.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L75.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L75.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L75.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L75.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L75.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L75.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L75.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L75.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L75.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L75.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L75.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx51 = 0; idx51 < 30; idx51++) {
    outC->_L75.packets.PacketHeaders[idx51].nid_packet = kcg_lit_int32(0);
    outC->_L75.packets.PacketHeaders[idx51].q_dir = Q_DIR_Reverse;
    outC->_L75.packets.PacketHeaders[idx51].valid = kcg_true;
    outC->_L75.packets.PacketHeaders[idx51].startAddress = kcg_lit_int32(0);
    outC->_L75.packets.PacketHeaders[idx51].endAddress = kcg_lit_int32(0);
  }
  for (idx52 = 0; idx52 < 500; idx52++) {
    outC->_L75.packets.PacketData[idx52] = kcg_lit_int32(0);
  }
  outC->_L75.sendingRBC.valid = kcg_true;
  outC->_L75.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L75.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L75.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L64.valid = kcg_true;
  outC->_L64.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L64.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L64.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L64.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L64.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L64.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L64.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L64.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L64.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L64.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L64.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L64.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L64.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L64.packet0.mode = M_MODE_Full_Supervision;
  outC->_L64.packet0.level = M_LEVEL_Level_0;
  outC->_L64.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L65 = kcg_lit_int32(0);
  outC->_L66 = kcg_lit_int32(0);
  outC->_L68.valid = kcg_true;
  outC->_L68.timestamp = kcg_lit_int32(0);
  outC->_L68.odo.o_nominal = kcg_lit_int32(0);
  outC->_L68.odo.o_min = kcg_lit_int32(0);
  outC->_L68.odo.o_max = kcg_lit_int32(0);
  outC->_L68.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L68.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L68.speed.v_lower = kcg_lit_int32(0);
  outC->_L68.speed.v_upper = kcg_lit_int32(0);
  outC->_L68.acceleration = kcg_lit_int32(0);
  outC->_L68.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L69.valid = kcg_true;
  outC->_L69.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L69.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L69.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L69.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L69.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L69.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L69.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L69.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L69.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L69.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L69.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L69.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L69.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L69.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L69.packet1.mode = M_MODE_Full_Supervision;
  outC->_L69.packet1.level = M_LEVEL_Level_0;
  outC->_L69.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L70.trackAheadFree = kcg_true;
  outC->_L70.driverSelectsStart = kcg_true;
  outC->_L71.nid_engine = kcg_lit_int32(0);
  outC->_L71.nid_operational = kcg_lit_int32(0);
  outC->_L71.l_train = kcg_lit_int32(0);
  outC->_L71.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L71.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L71.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L71.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L71.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L71.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L71.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L71.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L71.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L71.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L71.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L71.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L72 = kcg_true;
  outC->_L73 = kcg_lit_int32(0);
  outC->_L52.q_nvlocacc = kcg_lit_int32(0);
  outC->_L52.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L51.valid = kcg_true;
  outC->_L51.nid_packet = kcg_lit_int32(0);
  outC->_L51.q_dir = Q_DIR_Reverse;
  outC->_L51.q_scale = Q_SCALE_10_cm_scale;
  outC->_L51.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L51.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L51.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L51.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L51.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L51.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L51.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L51.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L51.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L51.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L51.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L51.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L51.v_nvkvint = kcg_lit_int32(0);
  outC->_L51.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L51.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L51.n_iter_n = kcg_lit_int32(0);
  for (idx53 = 0; idx53 < 32; idx53++) {
    outC->_L51.n_iter_n_list[idx53].valid = kcg_true;
    outC->_L51.n_iter_n_list[idx53].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L51.n_iter_n_list[idx53].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L51.n_iter_n_list[idx53].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L51.n_iter_k = kcg_lit_int32(0);
  for (idx55 = 0; idx55 < 32; idx55++) {
    outC->_L51.n_iter_k_list[idx55].valid = kcg_true;
    outC->_L51.n_iter_k_list[idx55].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L51.n_iter_k_list[idx55].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L51.n_iter_k_list[idx55].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L51.n_iter_k_list[idx55].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L51.n_iter_k_list[idx55].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L51.n_iter_k_list[idx55].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L51.n_iter_k_list[idx55].n_iter_k_m = kcg_lit_int32(0);
    for (idx54 = 0; idx54 < 32; idx54++) {
      outC->_L51.n_iter_k_list[idx55].n_iter_k_m_list[idx54].valid = kcg_true;
      outC->_L51.n_iter_k_list[idx55].n_iter_k_m_list[idx54].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L51.n_iter_k_list[idx55].n_iter_k_m_list[idx54].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L51.n_iter_k_list[idx55].n_iter_k_m_list[idx54].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L51.l_nvkrint = L_NVKRINT_0m;
  outC->_L51.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L51.n_iter_l = kcg_lit_int32(0);
  for (idx56 = 0; idx56 < 32; idx56++) {
    outC->_L51.n_iter_l_list[idx56].valid = kcg_true;
    outC->_L51.n_iter_l_list[idx56].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L51.n_iter_l_list[idx56].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L51.m_nvktint = kcg_lit_float32(0.0);
  outC->_L50.valid = kcg_true;
  outC->_L50.nid_packet = kcg_lit_int32(0);
  outC->_L50.q_dir = Q_DIR_Reverse;
  outC->_L50.q_scale = Q_SCALE_10_cm_scale;
  outC->_L50.d_validnv = kcg_lit_int32(0);
  outC->_L50.nid_c = kcg_lit_int32(0);
  outC->_L50.n_iter_nid_c = kcg_lit_int32(0);
  for (idx57 = 0; idx57 < 32; idx57++) {
    outC->_L50.nid_c_list[idx57].valid = kcg_true;
    outC->_L50.nid_c_list[idx57].nid_c = kcg_lit_int32(0);
  }
  outC->_L50.v_nvshunt = kcg_lit_int32(0);
  outC->_L50.v_nvstff = kcg_lit_int32(0);
  outC->_L50.v_nvonsight = kcg_lit_int32(0);
  outC->_L50.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L50.v_nvunfit = kcg_lit_int32(0);
  outC->_L50.v_nvrel = kcg_lit_int32(0);
  outC->_L50.d_nvroll = kcg_lit_int32(0);
  outC->_L50.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L50.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L50.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L50.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L50.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L50.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L50.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L50.d_nvovtrp = kcg_lit_int32(0);
  outC->_L50.t_nvovtrp = kcg_lit_int32(0);
  outC->_L50.d_nvpotrp = kcg_lit_int32(0);
  outC->_L50.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L50.t_nvcontact = kcg_lit_int32(0);
  outC->_L50.m_nvderun = M_NVDERUN_No;
  outC->_L50.d_nvstff = kcg_lit_int32(0);
  outC->_L50.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L50.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L50.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L50.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L50.q_nvlocacc = kcg_lit_int32(0);
  outC->_L50.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L50.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L50.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L50.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L50.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L50.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L50.v_nvkvint = kcg_lit_int32(0);
  outC->_L50.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L50.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L50.n_iter_n = kcg_lit_int32(0);
  for (idx58 = 0; idx58 < 32; idx58++) {
    outC->_L50.n_iter_n_list[idx58].valid = kcg_true;
    outC->_L50.n_iter_n_list[idx58].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L50.n_iter_n_list[idx58].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_n_list[idx58].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L50.n_iter_k = kcg_lit_int32(0);
  for (idx60 = 0; idx60 < 32; idx60++) {
    outC->_L50.n_iter_k_list[idx60].valid = kcg_true;
    outC->_L50.n_iter_k_list[idx60].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L50.n_iter_k_list[idx60].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx60].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx60].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L50.n_iter_k_list[idx60].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx60].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L50.n_iter_k_list[idx60].n_iter_k_m = kcg_lit_int32(0);
    for (idx59 = 0; idx59 < 32; idx59++) {
      outC->_L50.n_iter_k_list[idx60].n_iter_k_m_list[idx59].valid = kcg_true;
      outC->_L50.n_iter_k_list[idx60].n_iter_k_m_list[idx59].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L50.n_iter_k_list[idx60].n_iter_k_m_list[idx59].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L50.n_iter_k_list[idx60].n_iter_k_m_list[idx59].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L50.l_nvkrint = L_NVKRINT_0m;
  outC->_L50.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L50.n_iter_l = kcg_lit_int32(0);
  for (idx61 = 0; idx61 < 32; idx61++) {
    outC->_L50.n_iter_l_list[idx61].valid = kcg_true;
    outC->_L50.n_iter_l_list[idx61].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L50.n_iter_l_list[idx61].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L50.m_nvktint = kcg_lit_float32(0.0);
  for (idx62 = 0; idx62 < 50; idx62++) {
    outC->_L35.GradientProfile[idx62].valid = kcg_true;
    outC->_L35.GradientProfile[idx62].begin_section = kcg_lit_int32(0);
    outC->_L35.GradientProfile[idx62].end_section = kcg_lit_int32(0);
    outC->_L35.GradientProfile[idx62].gradient = kcg_lit_int32(0);
  }
  outC->_L35.Gradient_profile_updated = kcg_true;
  for (idx63 = 0; idx63 < 110; idx63++) {
    outC->_L35.MRSP[idx63].valid = kcg_true;
    outC->_L35.MRSP[idx63].Loc_Abs = kcg_lit_int32(0);
    outC->_L35.MRSP[idx63].Loc_LRBG = kcg_lit_int32(0);
    outC->_L35.MRSP[idx63].MRS = kcg_lit_int32(0);
  }
  outC->_L35.MRSP_updated = kcg_true;
  outC->_L34.freshMA = kcg_true;
  outC->_L34.MA.valid = kcg_true;
  outC->_L34.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L34.MA.q_dir = Q_DIR_Reverse;
  outC->_L34.MA.v_main = kcg_lit_int32(0);
  outC->_L34.MA.v_loa = kcg_lit_int32(0);
  outC->_L34.MA.t_loa_unlimited = kcg_true;
  outC->_L34.MA.t_loa = kcg_lit_int32(0);
  outC->_L34.MA.n_iter = kcg_lit_int32(0);
  for (idx64 = 0; idx64 < 10; idx64++) {
    outC->_L34.MA.sections[idx64].valid = kcg_true;
    outC->_L34.MA.sections[idx64].q_endsection = kcg_true;
    outC->_L34.MA.sections[idx64].l_section = kcg_lit_int32(0);
    outC->_L34.MA.sections[idx64].q_sectiontimer = kcg_true;
    outC->_L34.MA.sections[idx64].t_sectiontimer = kcg_lit_int32(0);
    outC->_L34.MA.sections[idx64].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L34.MA.q_dangerpoint = kcg_true;
  outC->_L34.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L34.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L34.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L34.MA.q_overlap = kcg_true;
  outC->_L34.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L34.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L34.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L34.MA.q_endtimer = kcg_true;
  outC->_L34.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L34.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L34.freshGradientProfile = kcg_true;
  for (idx65 = 0; idx65 < 50; idx65++) {
    outC->_L34.GradientProfile[idx65].valid = kcg_true;
    outC->_L34.GradientProfile[idx65].Loc_Absolute = kcg_lit_int32(0);
    outC->_L34.GradientProfile[idx65].Loc_LRBG = kcg_lit_int32(0);
    outC->_L34.GradientProfile[idx65].Gradient = kcg_lit_int32(0);
    outC->_L34.GradientProfile[idx65].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L34.freshMRSP = kcg_true;
  for (idx66 = 0; idx66 < 110; idx66++) {
    outC->_L34.MRSP[idx66].valid = kcg_true;
    outC->_L34.MRSP[idx66].Loc_Abs = kcg_lit_int32(0);
    outC->_L34.MRSP[idx66].Loc_LRBG = kcg_lit_int32(0);
    outC->_L34.MRSP[idx66].MRS = kcg_lit_int32(0);
  }
  outC->_L32 = kcg_true;
  for (idx67 = 0; idx67 < 50; idx67++) {
    outC->_L31[idx67].valid = kcg_true;
    outC->_L31[idx67].begin_section = kcg_lit_int32(0);
    outC->_L31[idx67].end_section = kcg_lit_int32(0);
    outC->_L31[idx67].gradient = kcg_lit_int32(0);
  }
  outC->_L27 = kcg_true;
  outC->_L26.compatibleModeAndLevel = kcg_true;
  outC->_L26.level = M_LEVEL_Level_0;
  outC->_L26.newLevel = kcg_true;
  outC->_L26.Mode = M_MODE_Full_Supervision;
  outC->_L26.newMode = kcg_true;
  outC->_L25.valid = kcg_true;
  outC->_L25.timestamp = kcg_lit_int32(0);
  outC->_L25.trainPositionIsUnknown = kcg_true;
  outC->_L25.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L25.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L25.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L25.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L25.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L25.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L25.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L25.LRBG.valid = kcg_true;
  outC->_L25.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L25.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L25.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L25.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L25.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L25.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L25.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L25.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L25.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L25.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L25.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L25.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L25.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L25.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L25.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L25.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L25.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx68 = 0; idx68 < 33; idx68++) {
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].valid = kcg_true;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].nid_LRBG = kcg_lit_int32(0);
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_dir = Q_DIR_Reverse;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_scale = Q_SCALE_10_cm_scale;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].d_link = kcg_lit_int32(0);
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].nid_c = kcg_lit_int32(0);
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].nid_bg = kcg_lit_int32(0);
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L25.LRBG.infoFromPassing.linkedBGs[idx68].q_locacc = kcg_lit_int32(0);
  }
  outC->_L25.LRBG.missed = kcg_true;
  outC->_L25.prvLRBG.valid = kcg_true;
  outC->_L25.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L25.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L25.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L25.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L25.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L25.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L25.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L25.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L25.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L25.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx69 = 0; idx69 < 33; idx69++) {
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].valid = kcg_true;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].nid_LRBG = kcg_lit_int32(0);
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_dir = Q_DIR_Reverse;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].d_link = kcg_lit_int32(0);
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].nid_c = kcg_lit_int32(0);
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].nid_bg = kcg_lit_int32(0);
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L25.prvLRBG.infoFromPassing.linkedBGs[idx69].q_locacc = kcg_lit_int32(0);
  }
  outC->_L25.prvLRBG.missed = kcg_true;
  outC->_L25.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L25.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L25.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L25.linkingIsUsedOnboard = kcg_true;
  outC->_L25.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L25.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L25.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.source = msrc_undefined_Common_Types_Pkg;
  outC->_L24.radioMetadata.t_train_reference = kcg_true;
  outC->_L24.radioMetadata.nid_em = kcg_true;
  outC->_L24.radioMetadata.q_scale = kcg_true;
  outC->_L24.radioMetadata.d_sr = kcg_true;
  outC->_L24.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L24.radioMetadata.d_ref = kcg_true;
  outC->_L24.radioMetadata.q_dir = kcg_true;
  outC->_L24.radioMetadata.d_emergencystop = kcg_true;
  outC->_L24.radioMetadata.m_version = kcg_true;
  outC->_L24.BG_Common_Header.valid = kcg_true;
  outC->_L24.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L24.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L24.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L24.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L24.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L24.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L24.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L24.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L24.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L24.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx70 = 0; idx70 < 30; idx70++) {
    outC->_L24.packets.PacketHeaders[idx70].nid_packet = kcg_lit_int32(0);
    outC->_L24.packets.PacketHeaders[idx70].q_dir = Q_DIR_Reverse;
    outC->_L24.packets.PacketHeaders[idx70].valid = kcg_true;
    outC->_L24.packets.PacketHeaders[idx70].startAddress = kcg_lit_int32(0);
    outC->_L24.packets.PacketHeaders[idx70].endAddress = kcg_lit_int32(0);
  }
  for (idx71 = 0; idx71 < 500; idx71++) {
    outC->_L24.packets.PacketData[idx71] = kcg_lit_int32(0);
  }
  outC->_L24.sendingRBC.valid = kcg_true;
  outC->_L24.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L24.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L24.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.source = msrc_undefined_Common_Types_Pkg;
  outC->_L23.radioMetadata.t_train_reference = kcg_true;
  outC->_L23.radioMetadata.nid_em = kcg_true;
  outC->_L23.radioMetadata.q_scale = kcg_true;
  outC->_L23.radioMetadata.d_sr = kcg_true;
  outC->_L23.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L23.radioMetadata.d_ref = kcg_true;
  outC->_L23.radioMetadata.q_dir = kcg_true;
  outC->_L23.radioMetadata.d_emergencystop = kcg_true;
  outC->_L23.radioMetadata.m_version = kcg_true;
  outC->_L23.BG_Common_Header.valid = kcg_true;
  outC->_L23.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L23.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L23.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L23.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L23.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L23.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L23.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L23.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L23.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L23.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L23.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L23.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L23.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx72 = 0; idx72 < 30; idx72++) {
    outC->_L23.packets.PacketHeaders[idx72].nid_packet = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx72].q_dir = Q_DIR_Reverse;
    outC->_L23.packets.PacketHeaders[idx72].valid = kcg_true;
    outC->_L23.packets.PacketHeaders[idx72].startAddress = kcg_lit_int32(0);
    outC->_L23.packets.PacketHeaders[idx72].endAddress = kcg_lit_int32(0);
  }
  for (idx73 = 0; idx73 < 500; idx73++) {
    outC->_L23.packets.PacketData[idx73] = kcg_lit_int32(0);
  }
  outC->_L23.sendingRBC.valid = kcg_true;
  outC->_L23.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L23.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L23.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L20 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.q_dir = Q_DIR_Reverse;
  outC->_L21.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.d_validnv = kcg_lit_int32(0);
  outC->_L21.n_iter = kcg_lit_int32(0);
  for (idx74 = 0; idx74 < 32; idx74++) {
    outC->_L21.SECTIONS[idx74].valid = kcg_true;
    outC->_L21.SECTIONS[idx74].nid_c = kcg_lit_int32(0);
  }
  outC->_L21.v_nvshunt = kcg_lit_int32(0);
  outC->_L21.v_nvstff = kcg_lit_int32(0);
  outC->_L21.v_nvonsight = kcg_lit_int32(0);
  outC->_L21.v_nvunfit = kcg_lit_int32(0);
  outC->_L21.v_nvrel = kcg_lit_int32(0);
  outC->_L21.d_nvroll = kcg_lit_int32(0);
  outC->_L21.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L21.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L21.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L21.v_nvsopovtrp = kcg_lit_int32(0);
  outC->_L21.d_nvovtrp = kcg_lit_int32(0);
  outC->_L21.t_nvovtrp = kcg_lit_int32(0);
  outC->_L21.d_nvpotrp = kcg_lit_int32(0);
  outC->_L21.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L21.t_nvcontact = kcg_lit_int32(0);
  outC->_L21.m_nvderun = M_NVDERUN_No;
  outC->_L21.d_nvstff = kcg_lit_int32(0);
  outC->_L21.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L22 = kcg_true;
  for (idx75 = 0; idx75 < 110; idx75++) {
    outC->_L19[idx75].valid = kcg_true;
    outC->_L19[idx75].Loc_Abs = kcg_lit_int32(0);
    outC->_L19[idx75].Loc_LRBG = kcg_lit_int32(0);
    outC->_L19[idx75].MRS = kcg_lit_int32(0);
  }
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->EoA = kcg_lit_int32(0);
  for (idx77 = 0; idx77 < 5; idx77++) {
    outC->bus1[idx77].Message.valid = kcg_true;
    outC->bus1[idx77].Message.nid_message = kcg_lit_int32(0);
    outC->bus1[idx77].Message.l_message = kcg_lit_int32(0);
    outC->bus1[idx77].Message.t_train = kcg_lit_int32(0);
    outC->bus1[idx77].Message.nid_engine = kcg_lit_int32(0);
    outC->bus1[idx77].Message.field1 = kcg_lit_int32(0);
    outC->bus1[idx77].Message.field2 = kcg_lit_int32(0);
    outC->bus1[idx77].Message.field3 = kcg_lit_int32(0);
    for (idx76 = 0; idx76 < 50; idx76++) {
      outC->bus1[idx77].OptionalPackets[idx76] = kcg_lit_int32(0);
    }
  }
  for (idx78 = 0; idx78 < 110; idx78++) {
    outC->MRSP_to_DMI[idx78].valid = kcg_true;
    outC->MRSP_to_DMI[idx78].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP_to_DMI[idx78].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP_to_DMI[idx78].MRS = kcg_lit_int32(0);
  }
  for (idx79 = 0; idx79 < 110; idx79++) {
    outC->MRSP_export[idx79].valid = kcg_true;
    outC->MRSP_export[idx79].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP_export[idx79].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP_export[idx79].MRS = kcg_lit_int32(0);
  }
  for (idx80 = 0; idx80 < 50; idx80++) {
    outC->SSP[idx80].valid = kcg_true;
    outC->SSP[idx80].d_static_abs = kcg_lit_int32(0);
    outC->SSP[idx80].d_static_LRBG = kcg_lit_int32(0);
    outC->SSP[idx80].q_train_length_corr = kcg_true;
    outC->SSP[idx80].v_static = kcg_lit_int32(0);
  }
  outC->valid_GP = kcg_true;
  outC->valid_SSP = kcg_true;
  outC->valid_MA = kcg_true;
  outC->MovementAuthority_Local.valid = kcg_true;
  outC->MovementAuthority_Local.Level = MA_L1_TrackAtlasTypes;
  outC->MovementAuthority_Local.q_dir = Q_DIR_Reverse;
  outC->MovementAuthority_Local.v_main = kcg_lit_int32(0);
  outC->MovementAuthority_Local.v_loa = kcg_lit_int32(0);
  outC->MovementAuthority_Local.t_loa_unlimited = kcg_true;
  outC->MovementAuthority_Local.t_loa = kcg_lit_int32(0);
  outC->MovementAuthority_Local.n_iter = kcg_lit_int32(0);
  for (idx81 = 0; idx81 < 10; idx81++) {
    outC->MovementAuthority_Local.sections[idx81].valid = kcg_true;
    outC->MovementAuthority_Local.sections[idx81].q_endsection = kcg_true;
    outC->MovementAuthority_Local.sections[idx81].l_section = kcg_lit_int32(0);
    outC->MovementAuthority_Local.sections[idx81].q_sectiontimer = kcg_true;
    outC->MovementAuthority_Local.sections[idx81].t_sectiontimer = kcg_lit_int32(0);
    outC->MovementAuthority_Local.sections[idx81].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->MovementAuthority_Local.q_dangerpoint = kcg_true;
  outC->MovementAuthority_Local.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MovementAuthority_Local.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MovementAuthority_Local.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MovementAuthority_Local.q_overlap = kcg_true;
  outC->MovementAuthority_Local.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MovementAuthority_Local.overlap.v_release = kcg_lit_int32(0);
  outC->MovementAuthority_Local.overlap.calc_v_release_onboard = kcg_true;
  outC->MovementAuthority_Local.q_endtimer = kcg_true;
  outC->MovementAuthority_Local.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MovementAuthority_Local.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L94 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->trip_train = kcg_true;
  outC->ces_revoked = kcg_true;
  outC->ces_accepted = kcg_true;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = kcg_lit_int32(0);
  outC->message147.header.t_train = kcg_lit_int32(0);
  outC->message147.header.nid_engine = kcg_lit_int32(0);
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = kcg_lit_int32(0);
  outC->message147.header.xNID_EM = kcg_lit_int32(0);
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = kcg_lit_int32(0);
  for (idx83 = 0; idx83 < 1; idx83++) {
    outC->message147.packets.p3.aNID_RADIO[idx83].valid = kcg_true;
    for (idx82 = 0; idx82 < 15; idx82++) {
      outC->message147.packets.p3.aNID_RADIO[idx83].telephoneNumber[idx82] =
        kcg_lit_int32(0);
    }
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = kcg_lit_int32(0);
  outC->message147.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = kcg_lit_int32(0);
  outC->message147.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx84 = 0; idx84 < 4; idx84++) {
    outC->message147.packets.p11.tractionIdentity[idx84].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[idx84].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->message147.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx85 = 0; idx85 < 5; idx85++) {
    outC->message147.packets.p11.nid_ntc[idx85] = kcg_lit_int32(0);
  }
  for (idx87 = 0; idx87 < 5; idx87++) {
    outC->bus_out[idx87].Message.valid = kcg_true;
    outC->bus_out[idx87].Message.nid_message = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.l_message = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.t_train = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.nid_engine = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.field1 = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.field2 = kcg_lit_int32(0);
    outC->bus_out[idx87].Message.field3 = kcg_lit_int32(0);
    for (idx86 = 0; idx86 < 50; idx86++) {
      outC->bus_out[idx87].OptionalPackets[idx86] = kcg_lit_int32(0);
    }
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = kcg_lit_int32(0);
  outC->MA_onboard_out.v_loa = kcg_lit_int32(0);
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = kcg_lit_int32(0);
  outC->MA_onboard_out.n_iter = kcg_lit_int32(0);
  for (idx88 = 0; idx88 < 10; idx88++) {
    outC->MA_onboard_out.sections[idx88].valid = kcg_true;
    outC->MA_onboard_out.sections[idx88].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[idx88].l_section = kcg_lit_int32(0);
    outC->MA_onboard_out.sections[idx88].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[idx88].t_sectiontimer = kcg_lit_int32(0);
    outC->MA_onboard_out.sections[idx88].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->MA_onboard_out.q_dangerpoint = kcg_true;
  outC->MA_onboard_out.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_onboard_out.dangerpoint.v_release = kcg_lit_int32(0);
  outC->MA_onboard_out.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_overlap = kcg_true;
  outC->MA_onboard_out.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->MA_onboard_out.overlap.v_release = kcg_lit_int32(0);
  outC->MA_onboard_out.overlap.calc_v_release_onboard = kcg_true;
  outC->MA_onboard_out.q_endtimer = kcg_true;
  outC->MA_onboard_out.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->MA_onboard_out.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->to_Supervision.freshMA = kcg_true;
  outC->to_Supervision.MA.valid = kcg_true;
  outC->to_Supervision.MA.Level = MA_L1_TrackAtlasTypes;
  outC->to_Supervision.MA.q_dir = Q_DIR_Reverse;
  outC->to_Supervision.MA.v_main = kcg_lit_int32(0);
  outC->to_Supervision.MA.v_loa = kcg_lit_int32(0);
  outC->to_Supervision.MA.t_loa_unlimited = kcg_true;
  outC->to_Supervision.MA.t_loa = kcg_lit_int32(0);
  outC->to_Supervision.MA.n_iter = kcg_lit_int32(0);
  for (idx89 = 0; idx89 < 10; idx89++) {
    outC->to_Supervision.MA.sections[idx89].valid = kcg_true;
    outC->to_Supervision.MA.sections[idx89].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[idx89].l_section = kcg_lit_int32(0);
    outC->to_Supervision.MA.sections[idx89].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[idx89].t_sectiontimer = kcg_lit_int32(0);
    outC->to_Supervision.MA.sections[idx89].d_sectiontimerstoploc =
      kcg_lit_int32(0);
  }
  outC->to_Supervision.MA.q_dangerpoint = kcg_true;
  outC->to_Supervision.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->to_Supervision.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->to_Supervision.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_overlap = kcg_true;
  outC->to_Supervision.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->to_Supervision.MA.overlap.v_release = kcg_lit_int32(0);
  outC->to_Supervision.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->to_Supervision.MA.q_endtimer = kcg_true;
  outC->to_Supervision.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->to_Supervision.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->to_Supervision.freshGradientProfile = kcg_true;
  for (idx90 = 0; idx90 < 50; idx90++) {
    outC->to_Supervision.GradientProfile[idx90].valid = kcg_true;
    outC->to_Supervision.GradientProfile[idx90].Loc_Absolute = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx90].Loc_LRBG = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx90].Gradient = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx90].L_Gradient = kcg_lit_int32(0);
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (idx91 = 0; idx91 < 110; idx91++) {
    outC->to_Supervision.MRSP[idx91].valid = kcg_true;
    outC->to_Supervision.MRSP[idx91].Loc_Abs = kcg_lit_int32(0);
    outC->to_Supervision.MRSP[idx91].Loc_LRBG = kcg_lit_int32(0);
    outC->to_Supervision.MRSP[idx91].MRS = kcg_lit_int32(0);
  }
  for (idx92 = 0; idx92 < 50; idx92++) {
    outC->to_DMI.GradientProfile[idx92].valid = kcg_true;
    outC->to_DMI.GradientProfile[idx92].begin_section = kcg_lit_int32(0);
    outC->to_DMI.GradientProfile[idx92].end_section = kcg_lit_int32(0);
    outC->to_DMI.GradientProfile[idx92].gradient = kcg_lit_int32(0);
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (idx93 = 0; idx93 < 110; idx93++) {
    outC->to_DMI.MRSP[idx93].valid = kcg_true;
    outC->to_DMI.MRSP[idx93].Loc_Abs = kcg_lit_int32(0);
    outC->to_DMI.MRSP[idx93].Loc_LRBG = kcg_lit_int32(0);
    outC->to_DMI.MRSP[idx93].MRS = kcg_lit_int32(0);
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (idx94 = 0; idx94 < 5; idx94++) {
    outC->To_ModeAndLevel.train_packets.P_12[idx94].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].v_main = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].v_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].t_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].l_section = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].l_endsection = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].t_sectiontimer =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].t_endtimer = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_dp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].v_releasedp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_startol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].t_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].d_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx94].v_releaseol = kcg_lit_int32(0);
  }
  outC->To_ModeAndLevel.train_packets.P_135.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->To_ModeAndLevel.train_packets.P_138.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_139.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx95 = 0; idx95 < 5; idx95++) {
    outC->To_ModeAndLevel.train_packets.P_15[idx95].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].v_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].t_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].l_section = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].l_endsection = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].t_sectiontimer =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].t_endtimer = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_dp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].v_releasedp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_startol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].t_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].d_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx95].v_releaseol = kcg_lit_int32(0);
  }
  for (idx96 = 0; idx96 < 7; idx96++) {
    outC->To_ModeAndLevel.train_packets.P_21[idx96].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[idx96].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[idx96].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[idx96].d_gradient = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_21[idx96].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[idx96].g_a = kcg_lit_int32(0);
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx97 = 0; idx97 < 7; idx97++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx97].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx97].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx97].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx97].nc_diff =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx97].v_diff =
      kcg_lit_int32(0);
  }
  for (idx99 = 0; idx99 < 7; idx99++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].d_static =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].v_static =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx98 = 0; idx98 < 7; idx98++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].diffArray[idx98].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].diffArray[idx98].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].diffArray[idx98].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].diffArray[idx98].nc_diff =
        kcg_lit_int32(0);
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx99].diffArray[idx98].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx100 = 0; idx100 < 7; idx100++) {
    outC->To_ModeAndLevel.train_packets.P_41[idx100].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[idx100].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[idx100].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[idx100].d_leveltr = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_41[idx100].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[idx100].nid_ntc = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_41[idx100].l_ackleveltr =
      kcg_lit_int32(0);
  }
  for (idx101 = 0; idx101 < 7; idx101++) {
    outC->To_ModeAndLevel.train_packets.P_46[idx101].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[idx101].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[idx101].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[idx101].nid_ntc = kcg_lit_int32(0);
  }
  for (idx102 = 0; idx102 < 7; idx102++) {
    outC->To_ModeAndLevel.train_packets.P_63[idx102].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[idx102].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[idx102].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->To_ModeAndLevel.train_packets.P_63[idx102].nid_c = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_63[idx102].nid_bg = kcg_lit_int32(0);
  }
  for (idx103 = 0; idx103 < 3; idx103++) {
    outC->To_ModeAndLevel.train_packets.P_80[idx103].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[idx103].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[idx103].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[idx103].d_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx103].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[idx103].v_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx103].l_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx103].l_ackmamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx103].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->To_ModeAndLevel.train_packets.LRBG = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_messages.Mess_15 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_16 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_2 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_27 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_28 = kcg_true;
  outC->To_ModeAndLevel.train_messages.Mess_6 = kcg_true;
  outC->To_ModeAndLevel.p12 = kcg_true;
  outC->To_ModeAndLevel.p15 = kcg_true;
  outC->To_ModeAndLevel.p21 = kcg_true;
  outC->To_ModeAndLevel.p27 = kcg_true;
  outC->NV_raw_out.valid = kcg_true;
  outC->NV_raw_out.nid_packet = kcg_lit_int32(0);
  outC->NV_raw_out.q_dir = Q_DIR_Reverse;
  outC->NV_raw_out.q_scale = Q_SCALE_10_cm_scale;
  outC->NV_raw_out.d_validnv = kcg_lit_int32(0);
  outC->NV_raw_out.nid_c = kcg_lit_int32(0);
  outC->NV_raw_out.n_iter_nid_c = kcg_lit_int32(0);
  for (idx104 = 0; idx104 < 32; idx104++) {
    outC->NV_raw_out.nid_c_list[idx104].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[idx104].nid_c = kcg_lit_int32(0);
  }
  outC->NV_raw_out.v_nvshunt = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvstff = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvonsight = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvlimsuperv = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvunfit = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvrel = kcg_lit_int32(0);
  outC->NV_raw_out.d_nvroll = kcg_lit_int32(0);
  outC->NV_raw_out.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->NV_raw_out.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->NV_raw_out.q_nvguiperm = Q_NVGUIPERM_No;
  outC->NV_raw_out.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->NV_raw_out.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->NV_raw_out.v_nvallowovtrp = kcg_lit_int32(0);
  outC->NV_raw_out.v_nvsupovtrp = kcg_lit_int32(0);
  outC->NV_raw_out.d_nvovtrp = kcg_lit_int32(0);
  outC->NV_raw_out.t_nvovtrp = kcg_lit_int32(0);
  outC->NV_raw_out.d_nvpotrp = kcg_lit_int32(0);
  outC->NV_raw_out.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->NV_raw_out.t_nvcontact = kcg_lit_int32(0);
  outC->NV_raw_out.m_nvderun = M_NVDERUN_No;
  outC->NV_raw_out.d_nvstff = kcg_lit_int32(0);
  outC->NV_raw_out.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->NV_raw_out.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->NV_raw_out.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->NV_raw_out.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->NV_raw_out.q_nvlocacc = kcg_lit_int32(0);
  outC->NV_raw_out.m_nvavadh = kcg_lit_float32(0.0);
  outC->NV_raw_out.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->NV_raw_out.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->NV_raw_out.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->NV_raw_out.a_nvp12 = kcg_lit_float32(0.0);
  outC->NV_raw_out.a_nvp23 = kcg_lit_float32(0.0);
  outC->NV_raw_out.v_nvkvint = kcg_lit_int32(0);
  outC->NV_raw_out.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->NV_raw_out.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->NV_raw_out.n_iter_n = kcg_lit_int32(0);
  for (idx105 = 0; idx105 < 32; idx105++) {
    outC->NV_raw_out.n_iter_n_list[idx105].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[idx105].v_nvkvint_n = kcg_lit_int32(0);
    outC->NV_raw_out.n_iter_n_list[idx105].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_n_list[idx105].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->NV_raw_out.n_iter_k = kcg_lit_int32(0);
  for (idx107 = 0; idx107 < 32; idx107++) {
    outC->NV_raw_out.n_iter_k_list[idx107].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[idx107].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[idx107].a_nvp12_k = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx107].a_nvp23_k = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx107].v_nvkvint_k = kcg_lit_int32(0);
    outC->NV_raw_out.n_iter_k_list[idx107].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx107].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx107].n_iter_k_m = kcg_lit_int32(0);
    for (idx106 = 0; idx106 < 32; idx106++) {
      outC->NV_raw_out.n_iter_k_list[idx107].n_iter_k_m_list[idx106].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[idx107].n_iter_k_m_list[idx106].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->NV_raw_out.n_iter_k_list[idx107].n_iter_k_m_list[idx106].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->NV_raw_out.n_iter_k_list[idx107].n_iter_k_m_list[idx106].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = kcg_lit_float32(0.0);
  outC->NV_raw_out.n_iter_l = kcg_lit_int32(0);
  for (idx108 = 0; idx108 < 32; idx108++) {
    outC->NV_raw_out.n_iter_l_list[idx108].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[idx108].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[idx108].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->NV_raw_out.m_nvktint = kcg_lit_float32(0.0);
  outC->SSP_available = kcg_true;
  /* _L31=(TA_Export::GradientProfile_to_DMI#1)/ */
  GradientProfile_to_DMI_init_TA_Export(
    &outC->Context_GradientProfile_to_DMI_1);
  /* _L50=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU#1)/ */
  C_P003V1_OBU_P003_OBU_init_TM_conversions_baseline2(
    &outC->Context_C_P003V1_OBU_P003_OBU_1);
  /* _L77=(TA_Export::TA_to_ML#1)/ */
  TA_to_ML_init_TA_Export(&outC->Context_TA_to_ML_1);
  /* _L101=(TA_Gradient_new::Build_GradientProfile#1)/ */
  Build_GradientProfile_init_TA_Gradient_new(
    &outC->Context_Build_GradientProfile_1);
  /* _L150=(TA_Export::MRSP_to_DMI#1)/ */
  MRSP_to_DMI_init_TA_Export(&outC->Context_MRSP_to_DMI_1);
  for (idx = 0; idx < 110; idx++) {
    /* _L118=(TA_Export::SSP_to_MRSP#1)/ */
    SSP_to_MRSP_init_TA_Export(&outC->Context_SSP_to_MRSP_1[idx]);
  }
  /* _L32=(TA_MRSP_new::Build_MRSP#1)/ */
  Build_MRSP_init_TA_MRSP_new(&outC->Context_Build_MRSP_1);
  /* _L67=(TA_MA_Request::Manage_MA_Request#1)/ */
  Manage_MA_Request_init_TA_MA_Request(&outC->Context_Manage_MA_Request_1);
  /* _L16=(TA_MA_new::Build_MA_L23#1)/ */
  Build_MA_L23_init_TA_MA_new(&outC->Context_Build_MA_L23_1);
  /* _L87=(TA_EmergencyStop::Manage_EmergencyStop#1)/ */
  Manage_EmergencyStop_init_TA_EmergencyStop(
    &outC->Context_Manage_EmergencyStop_1);
  /* _L20=(TA_Storage::StoreRaw_NV#1)/ */
  StoreRaw_NV_init_TA_Storage(&outC->Context_StoreRaw_NV_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlasETCS_reset_TrackAtlas(outC_TrackAtlasETCS_TrackAtlas *outC)
{
  static kcg_size idx;

  outC->init = kcg_true;
  /* _L31=(TA_Export::GradientProfile_to_DMI#1)/ */
  GradientProfile_to_DMI_reset_TA_Export(
    &outC->Context_GradientProfile_to_DMI_1);
  /* _L50=(TM_conversions_baseline2::C_P003V1_OBU_P003_OBU#1)/ */
  C_P003V1_OBU_P003_OBU_reset_TM_conversions_baseline2(
    &outC->Context_C_P003V1_OBU_P003_OBU_1);
  /* _L77=(TA_Export::TA_to_ML#1)/ */
  TA_to_ML_reset_TA_Export(&outC->Context_TA_to_ML_1);
  /* _L101=(TA_Gradient_new::Build_GradientProfile#1)/ */
  Build_GradientProfile_reset_TA_Gradient_new(
    &outC->Context_Build_GradientProfile_1);
  /* _L150=(TA_Export::MRSP_to_DMI#1)/ */
  MRSP_to_DMI_reset_TA_Export(&outC->Context_MRSP_to_DMI_1);
  for (idx = 0; idx < 110; idx++) {
    /* _L118=(TA_Export::SSP_to_MRSP#1)/ */
    SSP_to_MRSP_reset_TA_Export(&outC->Context_SSP_to_MRSP_1[idx]);
  }
  /* _L32=(TA_MRSP_new::Build_MRSP#1)/ */
  Build_MRSP_reset_TA_MRSP_new(&outC->Context_Build_MRSP_1);
  /* _L67=(TA_MA_Request::Manage_MA_Request#1)/ */
  Manage_MA_Request_reset_TA_MA_Request(&outC->Context_Manage_MA_Request_1);
  /* _L16=(TA_MA_new::Build_MA_L23#1)/ */
  Build_MA_L23_reset_TA_MA_new(&outC->Context_Build_MA_L23_1);
  /* _L87=(TA_EmergencyStop::Manage_EmergencyStop#1)/ */
  Manage_EmergencyStop_reset_TA_EmergencyStop(
    &outC->Context_Manage_EmergencyStop_1);
  /* _L20=(TA_Storage::StoreRaw_NV#1)/ */
  StoreRaw_NV_reset_TA_Storage(&outC->Context_StoreRaw_NV_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackAtlasETCS_TrackAtlas.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

