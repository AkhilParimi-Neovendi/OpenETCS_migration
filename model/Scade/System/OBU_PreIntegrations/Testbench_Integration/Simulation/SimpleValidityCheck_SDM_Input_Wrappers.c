/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SimpleValidityCheck_SDM_Input_Wrappers.h"

/* SDM_Input_Wrappers::SimpleValidityCheck/ */
void SimpleValidityCheck_SDM_Input_Wrappers(
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* dataFromTrackAtlas/ */
  DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L3, TrainPosition);
  outC->_L9 = outC->_L3.trainPositionIsUnknown;
  outC->_L28 = !outC->_L9;
  _1_noname = outC->_L28;
  outC->_L27 = kcg_true;
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &outC->_L5,
    dataFromTrackAtlas);
  outC->_L11 = outC->_L5.GradientProfile[0].valid;
  noname = outC->_L11;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L14, odometry);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L18, &outC->_L14.speed);
  outC->_L20 = outC->_L18.v_lower;
  outC->_L19 = outC->_L18.v_safeNominal;
  outC->_L22 = outC->_L19 >= outC->_L20;
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = outC->_L24 <= outC->_L19;
  outC->_L16 = cabAFirst_Obu_BasicTypes_Pkg;
  outC->_L15 = outC->_L14.motionDirection;
  outC->_L17 = outC->_L15 == outC->_L16;
  outC->_L13 = outC->_L5.MA.valid;
  outC->_L12 = outC->_L5.MRSP[0].valid;
  kcg_copy_trainData_T_TIU_Types_Pkg(&outC->_L4, trainData);
  outC->_L10 = outC->_L4.valid;
  outC->_L8 = outC->_L3.valid;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L2, odometry);
  outC->_L7 = outC->_L2.valid;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L1, NationalValues);
  outC->_L6 = outC->_L1.valid;
  outC->_L25 = outC->_L6 & outC->_L7 & outC->_L8 & outC->_L27 & outC->_L10 &
    outC->_L27 & outC->_L12 & outC->_L13 & outC->_L17 & outC->_L23 & outC->_L22;
  outC->_L26 = !outC->_L25;
  outC->exception = outC->_L26;
}

#ifndef KCG_USER_DEFINED_INIT
void SimpleValidityCheck_init_SDM_Input_Wrappers(
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC)
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

  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18.v_safeNominal = kcg_lit_int32(0);
  outC->_L18.v_rawNominal = kcg_lit_int32(0);
  outC->_L18.v_lower = kcg_lit_int32(0);
  outC->_L18.v_upper = kcg_lit_int32(0);
  outC->_L17 = kcg_true;
  outC->_L16 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15 = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.valid = kcg_true;
  outC->_L14.timestamp = kcg_lit_int32(0);
  outC->_L14.odo.o_nominal = kcg_lit_int32(0);
  outC->_L14.odo.o_min = kcg_lit_int32(0);
  outC->_L14.odo.o_max = kcg_lit_int32(0);
  outC->_L14.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L14.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L14.speed.v_lower = kcg_lit_int32(0);
  outC->_L14.speed.v_upper = kcg_lit_int32(0);
  outC->_L14.acceleration = kcg_lit_int32(0);
  outC->_L14.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5.freshMA = kcg_true;
  outC->_L5.MA.valid = kcg_true;
  outC->_L5.MA.Level = MA_L1_TrackAtlasTypes;
  outC->_L5.MA.q_dir = Q_DIR_Reverse;
  outC->_L5.MA.v_main = kcg_lit_int32(0);
  outC->_L5.MA.v_loa = kcg_lit_int32(0);
  outC->_L5.MA.t_loa_unlimited = kcg_true;
  outC->_L5.MA.t_loa = kcg_lit_int32(0);
  outC->_L5.MA.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    outC->_L5.MA.sections[idx].valid = kcg_true;
    outC->_L5.MA.sections[idx].q_endsection = kcg_true;
    outC->_L5.MA.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L5.MA.sections[idx].q_sectiontimer = kcg_true;
    outC->_L5.MA.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L5.MA.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L5.MA.q_dangerpoint = kcg_true;
  outC->_L5.MA.dangerpoint.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L5.MA.dangerpoint.v_release = kcg_lit_int32(0);
  outC->_L5.MA.dangerpoint.calc_v_release_onboard = kcg_true;
  outC->_L5.MA.q_overlap = kcg_true;
  outC->_L5.MA.overlap.d_DP_or_OL = kcg_lit_int32(0);
  outC->_L5.MA.overlap.v_release = kcg_lit_int32(0);
  outC->_L5.MA.overlap.calc_v_release_onboard = kcg_true;
  outC->_L5.MA.q_endtimer = kcg_true;
  outC->_L5.MA.endtimer_t.t_endtimer = kcg_lit_int32(0);
  outC->_L5.MA.endtimer_t.d_endtimerstoploc = kcg_lit_int32(0);
  outC->_L5.freshGradientProfile = kcg_true;
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L5.GradientProfile[idx1].valid = kcg_true;
    outC->_L5.GradientProfile[idx1].Loc_Absolute = kcg_lit_int32(0);
    outC->_L5.GradientProfile[idx1].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5.GradientProfile[idx1].Gradient = kcg_lit_int32(0);
    outC->_L5.GradientProfile[idx1].L_Gradient = kcg_lit_int32(0);
  }
  outC->_L5.freshMRSP = kcg_true;
  for (idx2 = 0; idx2 < 110; idx2++) {
    outC->_L5.MRSP[idx2].valid = kcg_true;
    outC->_L5.MRSP[idx2].Loc_Abs = kcg_lit_int32(0);
    outC->_L5.MRSP[idx2].Loc_LRBG = kcg_lit_int32(0);
    outC->_L5.MRSP[idx2].MRS = kcg_lit_int32(0);
  }
  outC->_L4.valid = kcg_true;
  outC->_L4.acknowledgedByDriver = kcg_true;
  outC->_L4.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L4.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L4.trainLength = kcg_lit_int32(0);
  outC->_L4.brakePerctage = kcg_lit_int32(0);
  outC->_L4.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L4.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L4.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L4.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L4.axleNumber = kcg_lit_int32(0);
  outC->_L4.numberNationalSystems = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L4.nationSystems[idx3] = kcg_lit_int32(0);
  }
  outC->_L4.numberTractionSystems = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 4; idx4++) {
    outC->_L4.tractionSystem[idx4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L4.tractionSystem[idx4].nid_ctraction = kcg_lit_int32(0);
  }
  outC->_L3.valid = kcg_true;
  outC->_L3.timestamp = kcg_lit_int32(0);
  outC->_L3.trainPositionIsUnknown = kcg_true;
  outC->_L3.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L3.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L3.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L3.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L3.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L3.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L3.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L3.LRBG.valid = kcg_true;
  outC->_L3.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L3.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L3.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L3.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L3.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L3.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L3.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L3.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L3.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L3.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.LRBG.missed = kcg_true;
  outC->_L3.prvLRBG.valid = kcg_true;
  outC->_L3.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L3.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L3.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L3.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L3.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L3.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L3.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L3.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L3.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L3.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.prvLRBG.missed = kcg_true;
  outC->_L3.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L3.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L3.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L3.linkingIsUsedOnboard = kcg_true;
  outC->_L3.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L3.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L3.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int32(0);
  outC->_L2.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.odo.o_min = kcg_lit_int32(0);
  outC->_L2.odo.o_max = kcg_lit_int32(0);
  outC->_L2.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L2.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L2.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.acceleration = kcg_lit_int32(0);
  outC->_L2.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.valid = kcg_true;
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.d_validnv = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L1.nid_cArray[idx7].valid = kcg_true;
    outC->_L1.nid_cArray[idx7].nid_c = kcg_lit_int32(0);
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
  outC->_L1.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
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
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L1.nvkvintsetArray[idx9].valid = kcg_true;
    outC->_L1.nvkvintsetArray[idx9].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L1.nvkvintsetArray[idx9].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L1.nvkvintsetArray[idx9].a_nvp23 = kcg_lit_float32(0.0);
    for (idx8 = 0; idx8 < 7; idx8++) {
      outC->_L1.nvkvintsetArray[idx9].nvkintArray[idx8].valid = kcg_true;
      outC->_L1.nvkvintsetArray[idx9].nvkintArray[idx8].v_nvkvint = kcg_lit_int32(0);
      outC->_L1.nvkvintsetArray[idx9].nvkintArray[idx8].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L1.nvkvintsetArray[idx9].nvkintArray[idx8].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L1.nvkrintArray[idx10].valid = kcg_true;
    outC->_L1.nvkrintArray[idx10].l_nvkrint = L_NVKRINT_0m;
    outC->_L1.nvkrintArray[idx10].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L1.m_nvktint = kcg_lit_float32(0.0);
  outC->exception = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SimpleValidityCheck_reset_SDM_Input_Wrappers(
  outC_SimpleValidityCheck_SDM_Input_Wrappers *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SimpleValidityCheck_SDM_Input_Wrappers.c
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

