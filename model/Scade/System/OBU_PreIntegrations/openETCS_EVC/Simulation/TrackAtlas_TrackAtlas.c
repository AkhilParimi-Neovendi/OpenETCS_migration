/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrackAtlas_TrackAtlas.h"

/* TrackAtlas::TrackAtlas/ */
void TrackAtlas_TrackAtlas(
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
  outC_TrackAtlas_TrackAtlas *outC)
{
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L85, balisegroups);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, MessageIn);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L13, ModeAndLevel_in);
  outC->_L14 = TrainData_in;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L15, TrainPositionIn);
  outC->_L16 = train_length;
  outC->_L17 = SystemTime;
  outC->_L18 = preindicationLocation;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L19, odometry);
  kcg_copy_Driver2MAR_T_MA_Request(&outC->_L20, fromDriverToMA_R);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L21, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L23, packet1);
  outC->_L24 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L84, bus_in);
  kcg_copy_P203V1_OBU_T_TM_baseline2(&outC->_L25, P203V1_onboard);
  kcg_copy_P003_permanent_data_T_TM_baseline2(&outC->_L26, PermanentDataP003);
  /* _L76=(TrackAtlas::TrackAtlasETCS#1)/ */
  TrackAtlasETCS_TrackAtlas(
    &outC->_L12,
    &outC->_L13,
    outC->_L14,
    &outC->_L15,
    outC->_L16,
    outC->_L17,
    outC->_L18,
    &outC->_L19,
    &outC->_L20,
    &outC->_L21,
    &outC->_L22,
    &outC->_L23,
    outC->_L24,
    &outC->_L84,
    &outC->_L25,
    &outC->_L26,
    &outC->_L85,
    &outC->Context_TrackAtlasETCS_1);
  outC->_L76 = outC->Context_TrackAtlasETCS_1.SSP_available;
  kcg_copy_P003_OBU_T_TM(&outC->_L1, &outC->Context_TrackAtlasETCS_1.NV_raw_out);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_TrackAtlasETCS_1.To_ModeAndLevel);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(
    &outC->_L3,
    &outC->Context_TrackAtlasETCS_1.to_DMI);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->Context_TrackAtlasETCS_1.to_Supervision);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(
    &outC->_L5,
    &outC->Context_TrackAtlasETCS_1.MA_onboard_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L83,
    &outC->Context_TrackAtlasETCS_1.bus_out);
  kcg_copy__18_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->_L8,
    &outC->Context_TrackAtlasETCS_1.message147);
  outC->_L9 = outC->Context_TrackAtlasETCS_1.ces_accepted;
  outC->_L10 = outC->Context_TrackAtlasETCS_1.ces_revoked;
  outC->_L11 = outC->Context_TrackAtlasETCS_1.trip_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->bus_out,
    &outC->_L83);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L82,
    (DataForSupervision_nextGen_t_TrackAtlasTypes *)
      &NTC_values_to_supervision_TrackAtlas);
  outC->_L63 = Mode_NTC_TrackAtlas;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L59, ModeAndLevel_in);
  outC->_L62 = outC->_L59.Mode;
  outC->_L61 = outC->_L62 != outC->_L63;
  outC->_L80 = outC->_L61 & outC->_L76;
  /* _L81= */
  if (outC->_L80) {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&outC->_L81, &outC->_L4);
  }
  else {
    kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(&outC->_L81, &outC->_L82);
  }
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->_L60, &outC->_L81.MRSP);
  kcg_copy_MRSP_Profile_t_TrackAtlasTypes(&outC->MRSP, &outC->_L60);
  outC->trip_train = outC->_L11;
  outC->ces_revoked = outC->_L10;
  outC->ces_accepted = outC->_L9;
  kcg_copy__18_Radio_TrainTrack_Message_T_TM_transitional(
    &outC->message147,
    &outC->_L8);
  kcg_copy_MovementAuthority_t_TrackAtlasTypes(&outC->MA_onboard_out, &outC->_L5);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->to_Supervision,
    &outC->_L81);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&outC->to_DMI, &outC->_L3);
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(
    &outC->To_ModeAndLevel,
    &outC->_L2);
  kcg_copy_P003_OBU_T_TM(&outC->NV_raw_out, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void TrackAtlas_init_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;
  kcg_size idx66;
  kcg_size idx67;
  kcg_size idx68;
  kcg_size idx69;
  kcg_size idx70;
  kcg_size idx71;
  kcg_size idx72;
  kcg_size idx73;

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L85[idx1].valid = kcg_true;
    outC->_L85[idx1].nid_c = kcg_lit_int32(0);
    outC->_L85[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L85[idx1].q_link = Q_LINK_Unlinked;
    outC->_L85[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L85[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L85[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L85[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.valid = kcg_true;
    outC->_L85[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L85[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L85[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L85[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L85[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.valid = kcg_true;
    outC->_L85[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L85[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L85[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L85[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L85[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L85[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L85[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L85[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L85[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L85[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L85[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L85[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L85[idx1].missed = kcg_true;
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L84[idx3].Message.valid = kcg_true;
    outC->_L84[idx3].Message.nid_message = kcg_lit_int32(0);
    outC->_L84[idx3].Message.l_message = kcg_lit_int32(0);
    outC->_L84[idx3].Message.t_train = kcg_lit_int32(0);
    outC->_L84[idx3].Message.nid_engine = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field1 = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field2 = kcg_lit_int32(0);
    outC->_L84[idx3].Message.field3 = kcg_lit_int32(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L84[idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
    }
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L83[idx5].Message.valid = kcg_true;
    outC->_L83[idx5].Message.nid_message = kcg_lit_int32(0);
    outC->_L83[idx5].Message.l_message = kcg_lit_int32(0);
    outC->_L83[idx5].Message.t_train = kcg_lit_int32(0);
    outC->_L83[idx5].Message.nid_engine = kcg_lit_int32(0);
    outC->_L83[idx5].Message.field1 = kcg_lit_int32(0);
    outC->_L83[idx5].Message.field2 = kcg_lit_int32(0);
    outC->_L83[idx5].Message.field3 = kcg_lit_int32(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->_L83[idx5].OptionalPackets[idx4] = kcg_lit_int32(0);
    }
  }
  outC->_L82.freshMA = kcg_true;
  outC->_L82.MA.valid = kcg_true;
  outC->_L82.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L82.MA.q_dir = Q_DIR_Reverse;
  outC->_L82.MA.v_main = kcg_lit_int32(0);
  outC->_L82.MA.v_loa = kcg_lit_int32(0);
  outC->_L82.MA.t_loa_unlimited = kcg_true;
  outC->_L82.MA.t_loa = kcg_lit_int32(0);
  outC->_L82.MA.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 10; idx6++) {
    outC->_L82.MA.sections[idx6].valid = kcg_true;
    outC->_L82.MA.sections[idx6].q_endsection = kcg_true;
    outC->_L82.MA.sections[idx6].l_section = kcg_lit_int32(0);
    outC->_L82.MA.sections[idx6].q_sectiontimer = kcg_true;
    outC->_L82.MA.sections[idx6].t_sectiontimer = kcg_lit_int32(0);
    outC->_L82.MA.sections[idx6].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L82.MA.q_dangerpoint = kcg_true;
  outC->_L82.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L82.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L82.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L82.MA.q_overlap = kcg_true;
  outC->_L82.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L82.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L82.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L82.MA.q_endtimer = kcg_true;
  outC->_L82.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L82.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L82.freshGradientProfile = kcg_true;
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->_L82.GradientProfile[idx7].valid = kcg_true;
    outC->_L82.GradientProfile[idx7].Loc_Absolute = kcg_lit_int32(0);
    outC->_L82.GradientProfile[idx7].Loc_LRBG = kcg_lit_int32(0);
    outC->_L82.GradientProfile[idx7].Gradient = kcg_lit_int32(0);
    outC->_L82.GradientProfile[idx7].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L82.freshMRSP = kcg_true;
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->_L82.MRSP[idx8].valid = kcg_true;
    outC->_L82.MRSP[idx8].Loc_Abs = kcg_lit_int32(0);
    outC->_L82.MRSP[idx8].Loc_LRBG = kcg_lit_int32(0);
    outC->_L82.MRSP[idx8].MRS = kcg_lit_int32(0);
  }
  outC->_L81.freshMA = kcg_true;
  outC->_L81.MA.valid = kcg_true;
  outC->_L81.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L81.MA.q_dir = Q_DIR_Reverse;
  outC->_L81.MA.v_main = kcg_lit_int32(0);
  outC->_L81.MA.v_loa = kcg_lit_int32(0);
  outC->_L81.MA.t_loa_unlimited = kcg_true;
  outC->_L81.MA.t_loa = kcg_lit_int32(0);
  outC->_L81.MA.n_iter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 10; idx9++) {
    outC->_L81.MA.sections[idx9].valid = kcg_true;
    outC->_L81.MA.sections[idx9].q_endsection = kcg_true;
    outC->_L81.MA.sections[idx9].l_section = kcg_lit_int32(0);
    outC->_L81.MA.sections[idx9].q_sectiontimer = kcg_true;
    outC->_L81.MA.sections[idx9].t_sectiontimer = kcg_lit_int32(0);
    outC->_L81.MA.sections[idx9].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L81.MA.q_dangerpoint = kcg_true;
  outC->_L81.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L81.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L81.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L81.MA.q_overlap = kcg_true;
  outC->_L81.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L81.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L81.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L81.MA.q_endtimer = kcg_true;
  outC->_L81.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L81.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L81.freshGradientProfile = kcg_true;
  for (idx10 = 0; idx10 < 50; idx10++) {
    outC->_L81.GradientProfile[idx10].valid = kcg_true;
    outC->_L81.GradientProfile[idx10].Loc_Absolute = kcg_lit_int32(0);
    outC->_L81.GradientProfile[idx10].Loc_LRBG = kcg_lit_int32(0);
    outC->_L81.GradientProfile[idx10].Gradient = kcg_lit_int32(0);
    outC->_L81.GradientProfile[idx10].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L81.freshMRSP = kcg_true;
  for (idx11 = 0; idx11 < 110; idx11++) {
    outC->_L81.MRSP[idx11].valid = kcg_true;
    outC->_L81.MRSP[idx11].Loc_Abs = kcg_lit_int32(0);
    outC->_L81.MRSP[idx11].Loc_LRBG = kcg_lit_int32(0);
    outC->_L81.MRSP[idx11].MRS = kcg_lit_int32(0);
  }
  outC->_L80 = kcg_true;
  outC->_L76 = kcg_true;
  for (idx12 = 0; idx12 < 110; idx12++) {
    outC->_L60[idx12].valid = kcg_true;
    outC->_L60[idx12].Loc_Abs = kcg_lit_int32(0);
    outC->_L60[idx12].Loc_LRBG = kcg_lit_int32(0);
    outC->_L60[idx12].MRS = kcg_lit_int32(0);
  }
  outC->_L61 = kcg_true;
  outC->_L62 = M_MODE_Full_Supervision;
  outC->_L63 = M_MODE_Full_Supervision;
  outC->_L59.compatibleModeAndLevel = kcg_true;
  outC->_L59.level = M_LEVEL_Level_0;
  outC->_L59.newLevel = kcg_true;
  outC->_L59.Mode = M_MODE_Full_Supervision;
  outC->_L59.newMode = kcg_true;
  outC->_L26.q_nvlocacc = kcg_lit_int32(0);
  outC->_L26.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L25.valid = kcg_true;
  outC->_L25.nid_packet = kcg_lit_int32(0);
  outC->_L25.q_dir = Q_DIR_Reverse;
  outC->_L25.q_scale = Q_SCALE_10_cm_scale;
  outC->_L25.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L25.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L25.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L25.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L25.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L25.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L25.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L25.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L25.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L25.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L25.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L25.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L25.v_nvkvint = kcg_lit_int32(0);
  outC->_L25.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L25.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L25.n_iter_n = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 32; idx13++) {
    outC->_L25.n_iter_n_list[idx13].valid = kcg_true;
    outC->_L25.n_iter_n_list[idx13].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L25.n_iter_n_list[idx13].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L25.n_iter_n_list[idx13].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L25.n_iter_k = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 32; idx15++) {
    outC->_L25.n_iter_k_list[idx15].valid = kcg_true;
    outC->_L25.n_iter_k_list[idx15].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L25.n_iter_k_list[idx15].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L25.n_iter_k_list[idx15].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L25.n_iter_k_list[idx15].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L25.n_iter_k_list[idx15].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L25.n_iter_k_list[idx15].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L25.n_iter_k_list[idx15].n_iter_k_m = kcg_lit_int32(0);
    for (idx14 = 0; idx14 < 32; idx14++) {
      outC->_L25.n_iter_k_list[idx15].n_iter_k_m_list[idx14].valid = kcg_true;
      outC->_L25.n_iter_k_list[idx15].n_iter_k_m_list[idx14].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L25.n_iter_k_list[idx15].n_iter_k_m_list[idx14].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L25.n_iter_k_list[idx15].n_iter_k_m_list[idx14].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L25.l_nvkrint = L_NVKRINT_0m;
  outC->_L25.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L25.n_iter_l = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 32; idx16++) {
    outC->_L25.n_iter_l_list[idx16].valid = kcg_true;
    outC->_L25.n_iter_l_list[idx16].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L25.n_iter_l_list[idx16].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L25.m_nvktint = kcg_lit_float32(0.0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L23.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L23.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L23.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L23.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L23.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L23.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L23.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L23.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L23.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L23.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L23.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L23.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L23.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L23.packet1.mode = M_MODE_Full_Supervision;
  outC->_L23.packet1.level = M_LEVEL_Level_0;
  outC->_L23.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L22.valid = kcg_true;
  outC->_L22.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L22.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L22.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L22.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L22.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L22.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L22.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L22.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L22.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L22.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L22.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L22.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L22.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L22.packet0.mode = M_MODE_Full_Supervision;
  outC->_L22.packet0.level = M_LEVEL_Level_0;
  outC->_L22.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L21.nid_engine = kcg_lit_int32(0);
  outC->_L21.nid_operational = kcg_lit_int32(0);
  outC->_L21.l_train = kcg_lit_int32(0);
  outC->_L21.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L21.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L21.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L21.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L21.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L21.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L21.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L21.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L21.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L21.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L21.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L21.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L20.trackAheadFree = kcg_true;
  outC->_L20.driverSelectsStart = kcg_true;
  outC->_L19.valid = kcg_true;
  outC->_L19.timestamp = kcg_lit_int32(0);
  outC->_L19.odo.o_nominal = kcg_lit_int32(0);
  outC->_L19.odo.o_min = kcg_lit_int32(0);
  outC->_L19.odo.o_max = kcg_lit_int32(0);
  outC->_L19.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L19.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L19.speed.v_lower = kcg_lit_int32(0);
  outC->_L19.speed.v_upper = kcg_lit_int32(0);
  outC->_L19.acceleration = kcg_lit_int32(0);
  outC->_L19.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L19.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15.valid = kcg_true;
  outC->_L15.timestamp = kcg_lit_int32(0);
  outC->_L15.trainPositionIsUnknown = kcg_true;
  outC->_L15.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L15.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L15.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L15.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L15.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L15.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L15.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L15.LRBG.valid = kcg_true;
  outC->_L15.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L15.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L15.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L15.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L15.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L15.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L15.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L15.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L15.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int32(0);
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int32(0);
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int32(0);
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int32(0);
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.LRBG.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int32(0);
  }
  outC->_L15.LRBG.missed = kcg_true;
  outC->_L15.prvLRBG.valid = kcg_true;
  outC->_L15.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L15.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L15.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L15.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L15.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L15.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L15.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L15.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_LRBG = kcg_lit_int32(0);
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_dir = Q_DIR_Reverse;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].d_link = kcg_lit_int32(0);
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_c = kcg_lit_int32(0);
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].nid_bg = kcg_lit_int32(0);
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.prvLRBG.infoFromPassing.linkedBGs[idx18].q_locacc = kcg_lit_int32(0);
  }
  outC->_L15.prvLRBG.missed = kcg_true;
  outC->_L15.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L15.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L15.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L15.linkingIsUsedOnboard = kcg_true;
  outC->_L15.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L15.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L15.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L13.compatibleModeAndLevel = kcg_true;
  outC->_L13.level = M_LEVEL_Level_0;
  outC->_L13.newLevel = kcg_true;
  outC->_L13.Mode = M_MODE_Full_Supervision;
  outC->_L13.newMode = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12.radioMetadata.t_train_reference = kcg_true;
  outC->_L12.radioMetadata.nid_em = kcg_true;
  outC->_L12.radioMetadata.q_scale = kcg_true;
  outC->_L12.radioMetadata.d_sr = kcg_true;
  outC->_L12.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12.radioMetadata.d_ref = kcg_true;
  outC->_L12.radioMetadata.q_dir = kcg_true;
  outC->_L12.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12.radioMetadata.m_version = kcg_true;
  outC->_L12.BG_Common_Header.valid = kcg_true;
  outC->_L12.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L12.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L12.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L12.packets.PacketHeaders[idx19].nid_packet = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx19].startAddress = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx19].endAddress = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L12.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L12.sendingRBC.valid = kcg_true;
  outC->_L12.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.d_validnv = kcg_lit_int32(0);
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.n_iter_nid_c = kcg_lit_int32(0);
  for (idx21 = 0; idx21 < 32; idx21++) {
    outC->_L1.nid_c_list[idx21].valid = kcg_true;
    outC->_L1.nid_c_list[idx21].nid_c = kcg_lit_int32(0);
  }
  outC->_L1.v_nvshunt = kcg_lit_int32(0);
  outC->_L1.v_nvstff = kcg_lit_int32(0);
  outC->_L1.v_nvonsight = kcg_lit_int32(0);
  outC->_L1.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L1.v_nvunfit = kcg_lit_int32(0);
  outC->_L1.v_nvrel = kcg_lit_int32(0);
  outC->_L1.d_nvroll = kcg_lit_int32(0);
  outC->_L1.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L1.q_nvemrrls = Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L1.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L1.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L1.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L1.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L1.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L1.d_nvovtrp = kcg_lit_int32(0);
  outC->_L1.t_nvovtrp = kcg_lit_int32(0);
  outC->_L1.d_nvpotrp = kcg_lit_int32(0);
  outC->_L1.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L1.t_nvcontact = kcg_lit_int32(0);
  outC->_L1.m_nvderun = M_NVDERUN_No;
  outC->_L1.d_nvstff = kcg_lit_int32(0);
  outC->_L1.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L1.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L1.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L1.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L1.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L1.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L1.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L1.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L1.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L1.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L1.v_nvkvint = kcg_lit_int32(0);
  outC->_L1.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L1.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L1.n_iter_n = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 32; idx22++) {
    outC->_L1.n_iter_n_list[idx22].valid = kcg_true;
    outC->_L1.n_iter_n_list[idx22].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L1.n_iter_n_list[idx22].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->_L1.n_iter_n_list[idx22].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->_L1.n_iter_k = kcg_lit_int32(0);
  for (idx24 = 0; idx24 < 32; idx24++) {
    outC->_L1.n_iter_k_list[idx24].valid = kcg_true;
    outC->_L1.n_iter_k_list[idx24].q_nvkvintset_k = Q_NVKVINTSET_Freight_trains;
    outC->_L1.n_iter_k_list[idx24].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L1.n_iter_k_list[idx24].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L1.n_iter_k_list[idx24].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L1.n_iter_k_list[idx24].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->_L1.n_iter_k_list[idx24].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->_L1.n_iter_k_list[idx24].n_iter_k_m = kcg_lit_int32(0);
    for (idx23 = 0; idx23 < 32; idx23++) {
      outC->_L1.n_iter_k_list[idx24].n_iter_k_m_list[idx23].valid = kcg_true;
      outC->_L1.n_iter_k_list[idx24].n_iter_k_m_list[idx23].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L1.n_iter_k_list[idx24].n_iter_k_m_list[idx23].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L1.n_iter_k_list[idx24].n_iter_k_m_list[idx23].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L1.l_nvkrint = L_NVKRINT_0m;
  outC->_L1.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L1.n_iter_l = kcg_lit_int32(0);
  for (idx25 = 0; idx25 < 32; idx25++) {
    outC->_L1.n_iter_l_list[idx25].valid = kcg_true;
    outC->_L1.n_iter_l_list[idx25].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L1.n_iter_l_list[idx25].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->_L1.m_nvktint = kcg_lit_float32(0.0);
  for (idx26 = 0; idx26 < 5; idx26++) {
    outC->_L2.train_packets.P_12[idx26].valid = kcg_true;
    outC->_L2.train_packets.P_12[idx26].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_12[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.train_packets.P_12[idx26].v_main = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].v_loa = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].t_loa = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].l_section = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L2.train_packets.P_12[idx26].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].l_endsection = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L2.train_packets.P_12[idx26].t_sectiontimer = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L2.train_packets.P_12[idx26].t_endtimer = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L2.train_packets.P_12[idx26].d_dp = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].v_releasedp = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L2.train_packets.P_12[idx26].d_startol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].t_ol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].d_ol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_12[idx26].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L2.train_packets.P_135.valid = kcg_true;
  outC->_L2.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L2.train_packets.P_137.valid = kcg_true;
  outC->_L2.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L2.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L2.train_packets.P_138.valid = kcg_true;
  outC->_L2.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L2.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.train_packets.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L2.train_packets.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L2.train_packets.P_139.valid = kcg_true;
  outC->_L2.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L2.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.train_packets.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L2.train_packets.P_139.v_reverse = kcg_lit_int32(0);
  for (idx27 = 0; idx27 < 5; idx27++) {
    outC->_L2.train_packets.P_15[idx27].valid = kcg_true;
    outC->_L2.train_packets.P_15[idx27].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_15[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.train_packets.P_15[idx27].v_loa = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].t_loa = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].l_section = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L2.train_packets.P_15[idx27].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].l_endsection = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L2.train_packets.P_15[idx27].t_sectiontimer = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L2.train_packets.P_15[idx27].t_endtimer = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L2.train_packets.P_15[idx27].d_dp = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].v_releasedp = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L2.train_packets.P_15[idx27].d_startol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].t_ol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].d_ol = kcg_lit_int32(0);
    outC->_L2.train_packets.P_15[idx27].v_releaseol = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L2.train_packets.P_21[idx28].valid = kcg_true;
    outC->_L2.train_packets.P_21[idx28].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_21[idx28].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.train_packets.P_21[idx28].d_gradient = kcg_lit_int32(0);
    outC->_L2.train_packets.P_21[idx28].q_gdir = Q_GDIR_downhill;
    outC->_L2.train_packets.P_21[idx28].g_a = kcg_lit_int32(0);
  }
  outC->_L2.train_packets.P_27.valid = kcg_true;
  outC->_L2.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L2.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->_L2.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->_L2.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->_L2.train_packets.P_27.diffArray[idx29].valid = kcg_true;
    outC->_L2.train_packets.P_27.diffArray[idx29].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L2.train_packets.P_27.diffArray[idx29].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L2.train_packets.P_27.diffArray[idx29].nc_diff = kcg_lit_int32(0);
    outC->_L2.train_packets.P_27.diffArray[idx29].v_diff = kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 7; idx31++) {
    outC->_L2.train_packets.P_27.SSPArray[idx31].valid = kcg_true;
    outC->_L2.train_packets.P_27.SSPArray[idx31].d_static = kcg_lit_int32(0);
    outC->_L2.train_packets.P_27.SSPArray[idx31].v_static = kcg_lit_int32(0);
    outC->_L2.train_packets.P_27.SSPArray[idx31].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx30 = 0; idx30 < 7; idx30++) {
      outC->_L2.train_packets.P_27.SSPArray[idx31].diffArray[idx30].valid = kcg_true;
      outC->_L2.train_packets.P_27.SSPArray[idx31].diffArray[idx30].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L2.train_packets.P_27.SSPArray[idx31].diffArray[idx30].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L2.train_packets.P_27.SSPArray[idx31].diffArray[idx30].nc_diff =
        kcg_lit_int32(0);
      outC->_L2.train_packets.P_27.SSPArray[idx31].diffArray[idx30].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx32 = 0; idx32 < 7; idx32++) {
    outC->_L2.train_packets.P_41[idx32].valid = kcg_true;
    outC->_L2.train_packets.P_41[idx32].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_41[idx32].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.train_packets.P_41[idx32].d_leveltr = kcg_lit_int32(0);
    outC->_L2.train_packets.P_41[idx32].m_leveltr = M_LEVELTR_Level_0;
    outC->_L2.train_packets.P_41[idx32].nid_ntc = kcg_lit_int32(0);
    outC->_L2.train_packets.P_41[idx32].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 7; idx33++) {
    outC->_L2.train_packets.P_46[idx33].valid = kcg_true;
    outC->_L2.train_packets.P_46[idx33].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_46[idx33].m_leveltr = M_LEVELTR_Level_0;
    outC->_L2.train_packets.P_46[idx33].nid_ntc = kcg_lit_int32(0);
  }
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->_L2.train_packets.P_63[idx34].valid = kcg_true;
    outC->_L2.train_packets.P_63[idx34].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_63[idx34].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.train_packets.P_63[idx34].nid_c = kcg_lit_int32(0);
    outC->_L2.train_packets.P_63[idx34].nid_bg = kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 3; idx35++) {
    outC->_L2.train_packets.P_80[idx35].valid = kcg_true;
    outC->_L2.train_packets.P_80[idx35].q_dir = Q_DIR_Reverse;
    outC->_L2.train_packets.P_80[idx35].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.train_packets.P_80[idx35].d_mamode = kcg_lit_int32(0);
    outC->_L2.train_packets.P_80[idx35].m_mamode = M_MAMODE_On_Sight;
    outC->_L2.train_packets.P_80[idx35].v_mamode = kcg_lit_int32(0);
    outC->_L2.train_packets.P_80[idx35].l_mamode = kcg_lit_int32(0);
    outC->_L2.train_packets.P_80[idx35].l_ackmamode = kcg_lit_int32(0);
    outC->_L2.train_packets.P_80[idx35].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L2.train_packets.LRBG = kcg_lit_int32(0);
  outC->_L2.train_packets.referenceLocation = kcg_lit_int32(0);
  outC->_L2.train_messages.Mess_15 = kcg_true;
  outC->_L2.train_messages.Mess_16 = kcg_true;
  outC->_L2.train_messages.Mess_2 = kcg_true;
  outC->_L2.train_messages.Mess_27 = kcg_true;
  outC->_L2.train_messages.Mess_28 = kcg_true;
  outC->_L2.train_messages.Mess_6 = kcg_true;
  outC->_L2.p12 = kcg_true;
  outC->_L2.p15 = kcg_true;
  outC->_L2.p21 = kcg_true;
  outC->_L2.p27 = kcg_true;
  for (idx36 = 0; idx36 < 50; idx36++) {
    outC->_L3.GradientProfile[idx36].valid = kcg_true;
    outC->_L3.GradientProfile[idx36].begin_section = kcg_lit_int32(0);
    outC->_L3.GradientProfile[idx36].end_section = kcg_lit_int32(0);
    outC->_L3.GradientProfile[idx36].gradient = kcg_lit_int32(0);
  }
  outC->_L3.Gradient_profile_updated = kcg_true;
  for (idx37 = 0; idx37 < 110; idx37++) {
    outC->_L3.MRSP[idx37].valid = kcg_true;
    outC->_L3.MRSP[idx37].Loc_Abs = kcg_lit_int32(0);
    outC->_L3.MRSP[idx37].Loc_LRBG = kcg_lit_int32(0);
    outC->_L3.MRSP[idx37].MRS = kcg_lit_int32(0);
  }
  outC->_L3.MRSP_updated = kcg_true;
  outC->_L4.freshMA = kcg_true;
  outC->_L4.MA.valid = kcg_true;
  outC->_L4.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L4.MA.q_dir = Q_DIR_Reverse;
  outC->_L4.MA.v_main = kcg_lit_int32(0);
  outC->_L4.MA.v_loa = kcg_lit_int32(0);
  outC->_L4.MA.t_loa_unlimited = kcg_true;
  outC->_L4.MA.t_loa = kcg_lit_int32(0);
  outC->_L4.MA.n_iter = kcg_lit_int32(0);
  for (idx38 = 0; idx38 < 10; idx38++) {
    outC->_L4.MA.sections[idx38].valid = kcg_true;
    outC->_L4.MA.sections[idx38].q_endsection = kcg_true;
    outC->_L4.MA.sections[idx38].l_section = kcg_lit_int32(0);
    outC->_L4.MA.sections[idx38].q_sectiontimer = kcg_true;
    outC->_L4.MA.sections[idx38].t_sectiontimer = kcg_lit_int32(0);
    outC->_L4.MA.sections[idx38].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L4.MA.q_dangerpoint = kcg_true;
  outC->_L4.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L4.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L4.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L4.MA.q_overlap = kcg_true;
  outC->_L4.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L4.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L4.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L4.MA.q_endtimer = kcg_true;
  outC->_L4.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L4.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L4.freshGradientProfile = kcg_true;
  for (idx39 = 0; idx39 < 50; idx39++) {
    outC->_L4.GradientProfile[idx39].valid = kcg_true;
    outC->_L4.GradientProfile[idx39].Loc_Absolute = kcg_lit_int32(0);
    outC->_L4.GradientProfile[idx39].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4.GradientProfile[idx39].Gradient = kcg_lit_int32(0);
    outC->_L4.GradientProfile[idx39].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L4.freshMRSP = kcg_true;
  for (idx40 = 0; idx40 < 110; idx40++) {
    outC->_L4.MRSP[idx40].valid = kcg_true;
    outC->_L4.MRSP[idx40].Loc_Abs = kcg_lit_int32(0);
    outC->_L4.MRSP[idx40].Loc_LRBG = kcg_lit_int32(0);
    outC->_L4.MRSP[idx40].MRS = kcg_lit_int32(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.Level = MA_L1_TrackAtlasTypes;
  outC->_L5.q_dir = Q_DIR_Reverse;
  outC->_L5.v_main = kcg_lit_int32(0);
  outC->_L5.v_loa = kcg_lit_int32(0);
  outC->_L5.t_loa_unlimited = kcg_true;
  outC->_L5.t_loa = kcg_lit_int32(0);
  outC->_L5.n_iter = kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 10; idx41++) {
    outC->_L5.sections[idx41].valid = kcg_true;
    outC->_L5.sections[idx41].q_endsection = kcg_true;
    outC->_L5.sections[idx41].l_section = kcg_lit_int32(0);
    outC->_L5.sections[idx41].q_sectiontimer = kcg_true;
    outC->_L5.sections[idx41].t_sectiontimer = kcg_lit_int32(0);
    outC->_L5.sections[idx41].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L5.q_dangerpoint = kcg_true;
  outC->_L5.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L5.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L5.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L5.q_overlap = kcg_true;
  outC->_L5.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L5.overlap.v_release = kcg_lit_int32(0);
  outC->_L5.overlap.calc_v_release_onboard = kcg_true;
  outC->_L5.q_endtimer = kcg_true;
  outC->_L5.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L5.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L8.present = kcg_true;
  outC->_L8.header.present = kcg_true;
  outC->_L8.header.nid_message = kcg_lit_int32(0);
  outC->_L8.header.t_train = kcg_lit_int32(0);
  outC->_L8.header.nid_engine = kcg_lit_int32(0);
  outC->_L8.header.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L8.header.xT_TRAIN = kcg_lit_int32(0);
  outC->_L8.header.xNID_EM = kcg_lit_int32(0);
  outC->_L8.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L8.header.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L8.packets.p0.valid = kcg_true;
  outC->_L8.packets.p0.packet0.NID_PACKET = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.L_PACKET = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L8.packets.p0.packet0.NID_LRBG = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.D_LRBG = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L8.packets.p0.packet0.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.packets.p0.packet0.L_TRAININT = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.V_TRAIN = kcg_lit_int32(0);
  outC->_L8.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->_L8.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->_L8.packets.p0.packet0.NID_NTC = kcg_lit_int32(0);
  outC->_L8.packets.p1.valid = kcg_true;
  outC->_L8.packets.p1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L8.packets.p1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L8.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L8.packets.p1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->_L8.packets.p1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L8.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L8.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->_L8.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->_L8.packets.p1.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L8.packets.p3.valid = kcg_true;
  outC->_L8.packets.p3.number = kcg_lit_int32(0);
  for (idx43 = 0; idx43 < 1; idx43++) {
    outC->_L8.packets.p3.aNID_RADIO[idx43].valid = kcg_true;
    for (idx42 = 0; idx42 < 15; idx42++) {
      outC->_L8.packets.p3.aNID_RADIO[idx43].telephoneNumber[idx42] =
        kcg_lit_int32(0);
    }
  }
  outC->_L8.packets.p4.valid = kcg_true;
  outC->_L8.packets.p4.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L8.packets.p5.valid = kcg_true;
  outC->_L8.packets.p5.TrainRunningNumber = kcg_lit_int32(0);
  outC->_L8.packets.p9.valid = kcg_true;
  outC->_L8.packets.p9.transitionInformation = kcg_lit_int32(0);
  outC->_L8.packets.p11.valid = kcg_true;
  outC->_L8.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L8.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L8.packets.p11.l_train = kcg_lit_int32(0);
  outC->_L8.packets.p11.v_maxtrain = kcg_lit_int32(0);
  outC->_L8.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L8.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->_L8.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->_L8.packets.p11.n_axle = kcg_lit_int32(0);
  outC->_L8.packets.p11.nIter_tractionIdentity = kcg_lit_int32(0);
  for (idx44 = 0; idx44 < 4; idx44++) {
    outC->_L8.packets.p11.tractionIdentity[idx44].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L8.packets.p11.tractionIdentity[idx44].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L8.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 5; idx45++) {
    outC->_L8.packets.p11.nid_ntc[idx45] = kcg_lit_int32(0);
  }
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  for (idx47 = 0; idx47 < 5; idx47++) {
    outC->bus_out[idx47].Message.valid = kcg_true;
    outC->bus_out[idx47].Message.nid_message = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.l_message = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.t_train = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.nid_engine = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.field1 = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.field2 = kcg_lit_int32(0);
    outC->bus_out[idx47].Message.field3 = kcg_lit_int32(0);
    for (idx46 = 0; idx46 < 50; idx46++) {
      outC->bus_out[idx47].OptionalPackets[idx46] = kcg_lit_int32(0);
    }
  }
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
  for (idx49 = 0; idx49 < 1; idx49++) {
    outC->message147.packets.p3.aNID_RADIO[idx49].valid = kcg_true;
    for (idx48 = 0; idx48 < 15; idx48++) {
      outC->message147.packets.p3.aNID_RADIO[idx49].telephoneNumber[idx48] =
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
  for (idx50 = 0; idx50 < 4; idx50++) {
    outC->message147.packets.p11.tractionIdentity[idx50].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[idx50].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->message147.packets.p11.nIter_ntc = kcg_lit_int32(0);
  for (idx51 = 0; idx51 < 5; idx51++) {
    outC->message147.packets.p11.nid_ntc[idx51] = kcg_lit_int32(0);
  }
  for (idx52 = 0; idx52 < 110; idx52++) {
    outC->MRSP[idx52].valid = kcg_true;
    outC->MRSP[idx52].Loc_Abs = kcg_lit_int32(0);
    outC->MRSP[idx52].Loc_LRBG = kcg_lit_int32(0);
    outC->MRSP[idx52].MRS = kcg_lit_int32(0);
  }
  outC->MA_onboard_out.valid = kcg_true;
  outC->MA_onboard_out.Level = MA_L1_TrackAtlasTypes;
  outC->MA_onboard_out.q_dir = Q_DIR_Reverse;
  outC->MA_onboard_out.v_main = kcg_lit_int32(0);
  outC->MA_onboard_out.v_loa = kcg_lit_int32(0);
  outC->MA_onboard_out.t_loa_unlimited = kcg_true;
  outC->MA_onboard_out.t_loa = kcg_lit_int32(0);
  outC->MA_onboard_out.n_iter = kcg_lit_int32(0);
  for (idx53 = 0; idx53 < 10; idx53++) {
    outC->MA_onboard_out.sections[idx53].valid = kcg_true;
    outC->MA_onboard_out.sections[idx53].q_endsection = kcg_true;
    outC->MA_onboard_out.sections[idx53].l_section = kcg_lit_int32(0);
    outC->MA_onboard_out.sections[idx53].q_sectiontimer = kcg_true;
    outC->MA_onboard_out.sections[idx53].t_sectiontimer = kcg_lit_int32(0);
    outC->MA_onboard_out.sections[idx53].d_sectiontimerstoploc = kcg_lit_int32(0);
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
  for (idx54 = 0; idx54 < 10; idx54++) {
    outC->to_Supervision.MA.sections[idx54].valid = kcg_true;
    outC->to_Supervision.MA.sections[idx54].q_endsection = kcg_true;
    outC->to_Supervision.MA.sections[idx54].l_section = kcg_lit_int32(0);
    outC->to_Supervision.MA.sections[idx54].q_sectiontimer = kcg_true;
    outC->to_Supervision.MA.sections[idx54].t_sectiontimer = kcg_lit_int32(0);
    outC->to_Supervision.MA.sections[idx54].d_sectiontimerstoploc =
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
  for (idx55 = 0; idx55 < 50; idx55++) {
    outC->to_Supervision.GradientProfile[idx55].valid = kcg_true;
    outC->to_Supervision.GradientProfile[idx55].Loc_Absolute = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx55].Loc_LRBG = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx55].Gradient = kcg_lit_int32(0);
    outC->to_Supervision.GradientProfile[idx55].L_Gradient = kcg_lit_int32(0);
  }
  outC->to_Supervision.freshMRSP = kcg_true;
  for (idx56 = 0; idx56 < 110; idx56++) {
    outC->to_Supervision.MRSP[idx56].valid = kcg_true;
    outC->to_Supervision.MRSP[idx56].Loc_Abs = kcg_lit_int32(0);
    outC->to_Supervision.MRSP[idx56].Loc_LRBG = kcg_lit_int32(0);
    outC->to_Supervision.MRSP[idx56].MRS = kcg_lit_int32(0);
  }
  for (idx57 = 0; idx57 < 50; idx57++) {
    outC->to_DMI.GradientProfile[idx57].valid = kcg_true;
    outC->to_DMI.GradientProfile[idx57].begin_section = kcg_lit_int32(0);
    outC->to_DMI.GradientProfile[idx57].end_section = kcg_lit_int32(0);
    outC->to_DMI.GradientProfile[idx57].gradient = kcg_lit_int32(0);
  }
  outC->to_DMI.Gradient_profile_updated = kcg_true;
  for (idx58 = 0; idx58 < 110; idx58++) {
    outC->to_DMI.MRSP[idx58].valid = kcg_true;
    outC->to_DMI.MRSP[idx58].Loc_Abs = kcg_lit_int32(0);
    outC->to_DMI.MRSP[idx58].Loc_LRBG = kcg_lit_int32(0);
    outC->to_DMI.MRSP[idx58].MRS = kcg_lit_int32(0);
  }
  outC->to_DMI.MRSP_updated = kcg_true;
  for (idx59 = 0; idx59 < 5; idx59++) {
    outC->To_ModeAndLevel.train_packets.P_12[idx59].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].v_main = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].v_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].t_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].l_section = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].l_endsection = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].t_sectiontimer =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].t_endtimer = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_dp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].v_releasedp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_startol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].t_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].d_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_12[idx59].v_releaseol = kcg_lit_int32(0);
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
  for (idx60 = 0; idx60 < 5; idx60++) {
    outC->To_ModeAndLevel.train_packets.P_15[idx60].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].v_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].t_loa = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].l_section = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].l_endsection = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].t_sectiontimer =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].t_endtimer = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_dp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].v_releasedp = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_startol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].t_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].d_ol = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_15[idx60].v_releaseol = kcg_lit_int32(0);
  }
  for (idx61 = 0; idx61 < 7; idx61++) {
    outC->To_ModeAndLevel.train_packets.P_21[idx61].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_21[idx61].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_21[idx61].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_21[idx61].d_gradient = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_21[idx61].q_gdir = Q_GDIR_downhill;
    outC->To_ModeAndLevel.train_packets.P_21[idx61].g_a = kcg_lit_int32(0);
  }
  outC->To_ModeAndLevel.train_packets.P_27.valid = kcg_true;
  outC->To_ModeAndLevel.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->To_ModeAndLevel.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->To_ModeAndLevel.train_packets.P_27.d_static = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_27.v_static = kcg_lit_int32(0);
  outC->To_ModeAndLevel.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx62 = 0; idx62 < 7; idx62++) {
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx62].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx62].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx62].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx62].nc_diff =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.diffArray[idx62].v_diff =
      kcg_lit_int32(0);
  }
  for (idx64 = 0; idx64 < 7; idx64++) {
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].d_static =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].v_static =
      kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx63 = 0; idx63 < 7; idx63++) {
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].diffArray[idx63].valid =
        kcg_true;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].diffArray[idx63].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].diffArray[idx63].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].diffArray[idx63].nc_diff =
        kcg_lit_int32(0);
      outC->To_ModeAndLevel.train_packets.P_27.SSPArray[idx64].diffArray[idx63].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx65 = 0; idx65 < 7; idx65++) {
    outC->To_ModeAndLevel.train_packets.P_41[idx65].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_41[idx65].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_41[idx65].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_41[idx65].d_leveltr = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_41[idx65].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_41[idx65].nid_ntc = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_41[idx65].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx66 = 0; idx66 < 7; idx66++) {
    outC->To_ModeAndLevel.train_packets.P_46[idx66].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_46[idx66].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_46[idx66].m_leveltr = M_LEVELTR_Level_0;
    outC->To_ModeAndLevel.train_packets.P_46[idx66].nid_ntc = kcg_lit_int32(0);
  }
  for (idx67 = 0; idx67 < 7; idx67++) {
    outC->To_ModeAndLevel.train_packets.P_63[idx67].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_63[idx67].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_63[idx67].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->To_ModeAndLevel.train_packets.P_63[idx67].nid_c = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_63[idx67].nid_bg = kcg_lit_int32(0);
  }
  for (idx68 = 0; idx68 < 3; idx68++) {
    outC->To_ModeAndLevel.train_packets.P_80[idx68].valid = kcg_true;
    outC->To_ModeAndLevel.train_packets.P_80[idx68].q_dir = Q_DIR_Reverse;
    outC->To_ModeAndLevel.train_packets.P_80[idx68].q_scale = Q_SCALE_10_cm_scale;
    outC->To_ModeAndLevel.train_packets.P_80[idx68].d_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx68].m_mamode = M_MAMODE_On_Sight;
    outC->To_ModeAndLevel.train_packets.P_80[idx68].v_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx68].l_mamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx68].l_ackmamode = kcg_lit_int32(0);
    outC->To_ModeAndLevel.train_packets.P_80[idx68].q_mamode = Q_MAMODE_as_the_EOA;
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
  for (idx69 = 0; idx69 < 32; idx69++) {
    outC->NV_raw_out.nid_c_list[idx69].valid = kcg_true;
    outC->NV_raw_out.nid_c_list[idx69].nid_c = kcg_lit_int32(0);
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
  for (idx70 = 0; idx70 < 32; idx70++) {
    outC->NV_raw_out.n_iter_n_list[idx70].valid = kcg_true;
    outC->NV_raw_out.n_iter_n_list[idx70].v_nvkvint_n = kcg_lit_int32(0);
    outC->NV_raw_out.n_iter_n_list[idx70].m_nvkvint_n_12 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_n_list[idx70].m_nvkvint_n_23 = kcg_lit_float32(0.0);
  }
  outC->NV_raw_out.n_iter_k = kcg_lit_int32(0);
  for (idx72 = 0; idx72 < 32; idx72++) {
    outC->NV_raw_out.n_iter_k_list[idx72].valid = kcg_true;
    outC->NV_raw_out.n_iter_k_list[idx72].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->NV_raw_out.n_iter_k_list[idx72].a_nvp12_k = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx72].a_nvp23_k = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx72].v_nvkvint_k = kcg_lit_int32(0);
    outC->NV_raw_out.n_iter_k_list[idx72].m_nvkvint_k_12 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx72].m_nvkvint_k_23 = kcg_lit_float32(0.0);
    outC->NV_raw_out.n_iter_k_list[idx72].n_iter_k_m = kcg_lit_int32(0);
    for (idx71 = 0; idx71 < 32; idx71++) {
      outC->NV_raw_out.n_iter_k_list[idx72].n_iter_k_m_list[idx71].valid = kcg_true;
      outC->NV_raw_out.n_iter_k_list[idx72].n_iter_k_m_list[idx71].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->NV_raw_out.n_iter_k_list[idx72].n_iter_k_m_list[idx71].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->NV_raw_out.n_iter_k_list[idx72].n_iter_k_m_list[idx71].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->NV_raw_out.l_nvkrint = L_NVKRINT_0m;
  outC->NV_raw_out.m_nvkrint = kcg_lit_float32(0.0);
  outC->NV_raw_out.n_iter_l = kcg_lit_int32(0);
  for (idx73 = 0; idx73 < 32; idx73++) {
    outC->NV_raw_out.n_iter_l_list[idx73].valid = kcg_true;
    outC->NV_raw_out.n_iter_l_list[idx73].l_nvkrint_l = L_NVKRINT_0m;
    outC->NV_raw_out.n_iter_l_list[idx73].m_nvkrint_l = kcg_lit_float32(0.0);
  }
  outC->NV_raw_out.m_nvktint = kcg_lit_float32(0.0);
  /* _L76=(TrackAtlas::TrackAtlasETCS#1)/ */
  TrackAtlasETCS_init_TrackAtlas(&outC->Context_TrackAtlasETCS_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrackAtlas_reset_TrackAtlas(outC_TrackAtlas_TrackAtlas *outC)
{
  /* _L76=(TrackAtlas::TrackAtlasETCS#1)/ */
  TrackAtlasETCS_reset_TrackAtlas(&outC->Context_TrackAtlasETCS_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrackAtlas_TrackAtlas.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

