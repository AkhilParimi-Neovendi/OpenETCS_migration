/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendDynamic_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendDynamic/ */
void sendDynamic_manage_DMI_Output_Pkg(
  /* inSystemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* inOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* inSpeedSupervision/ */
  speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* inModeAndLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* inNationalValues/ */
  nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* inMoRC_status/ */
  morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* inMovementAuthority/ */
  movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* inNTC/ */
  NID_NTC inNTC,
  outC_sendDynamic_manage_DMI_Output_Pkg *outC)
{
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&outC->_L80, inMoRC_status);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->_L6, inSpeedSupervision);
  outC->_L17 = outC->_L6.interventionSpeed;
  /* _L79=(manage_DMI_Output_Pkg::convert_cm_s_km_h#5)/ */
  convert_cm_s_km_h_manage_DMI_Output_Pkg(
    outC->_L17,
    &outC->Context_convert_cm_s_km_h_5);
  outC->_L79 = outC->Context_convert_cm_s_km_h_5.km_h;
  outC->_L15 = outC->_L6.releaseSpeed;
  /* _L78=(manage_DMI_Output_Pkg::convert_cm_s_km_h#4)/ */
  convert_cm_s_km_h_manage_DMI_Output_Pkg(
    outC->_L15,
    &outC->Context_convert_cm_s_km_h_4);
  outC->_L78 = outC->Context_convert_cm_s_km_h_4.km_h;
  outC->_L13 = outC->_L6.permittedSpeed;
  /* _L77=(manage_DMI_Output_Pkg::convert_cm_s_km_h#3)/ */
  convert_cm_s_km_h_manage_DMI_Output_Pkg(
    outC->_L13,
    &outC->Context_convert_cm_s_km_h_3);
  outC->_L77 = outC->Context_convert_cm_s_km_h_3.km_h;
  outC->_L11 = outC->_L6.targetSpeed;
  /* _L76=(manage_DMI_Output_Pkg::convert_cm_s_km_h#2)/ */
  convert_cm_s_km_h_manage_DMI_Output_Pkg(
    outC->_L11,
    &outC->Context_convert_cm_s_km_h_2);
  outC->_L76 = outC->Context_convert_cm_s_km_h_2.km_h;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L4, inOdometry);
  outC->_L9 = outC->_L4.speed.v_safeNominal;
  /* _L75=(manage_DMI_Output_Pkg::convert_cm_s_km_h#1)/ */
  convert_cm_s_km_h_manage_DMI_Output_Pkg(
    outC->_L9,
    &outC->Context_convert_cm_s_km_h_1);
  outC->_L75 = outC->Context_convert_cm_s_km_h_1.km_h;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L74,
    inSpeedSupervision);
  outC->_L73 = outC->_L74.distanceIndicationPoint;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L49, inTrainPosition);
  /* _L46=(manage_DMI_Output_Pkg::calcDistances#1)/ */
  calcDistances_manage_DMI_Output_Pkg(
    &outC->_L49,
    &outC->Context_calcDistances_1);
  outC->_L46 = outC->Context_calcDistances_1.outLocationKP_Balise_Track;
  outC->_L47 = outC->Context_calcDistances_1.ouDistanceKP_Balise;
  outC->_L48 = outC->Context_calcDistances_1.outDistance_ToTSA;
  outC->_L45 = inNTC;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L7, inModeAndLevel);
  outC->_L19 = outC->_L7.level;
  outC->_L43.level = outC->_L19;
  outC->_L43.nid_stm = outC->_L45;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L23,
    inSpeedSupervision);
  outC->_L36 = outC->_L23.supervisionDisplay;
  /* _L35=(manage_DMI_Output_Pkg::mapMoRCtoRadio_CS#1)/ */
  mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(
    &outC->_L80,
    &outC->Context_mapMoRCtoRadio_CS_1);
  outC->_L35 = outC->Context_mapMoRCtoRadio_CS_1.outBMI_CS;
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
    &outC->_L24,
    inMovementAuthority);
  outC->_L26 = outC->_L24.v_LOA;
  outC->_L25 = outC->_L24.location_LOA;
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&outC->_L8, inNationalValues);
  outC->_L22 = outC->_L8.nid_c_valid;
  outC->_L21 = outC->_L23.sup_status;
  outC->_L20 = outC->_L8.nid_c;
  outC->_L18 = outC->_L7.Mode;
  outC->_L16 = outC->_L6.location_brake_curve_starting_point;
  outC->_L12 = outC->_L6.locationBrakeTarget;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, inTrainPosition);
  outC->_L10 = outC->_L5.estimatedFrontEndPosition;
  outC->_L3 = inSystemTime;
  outC->_L2 = kcg_true;
  outC->_L1.valid = outC->_L2;
  outC->_L1.system_clock = outC->_L3;
  outC->_L1.v_train = outC->_L75;
  outC->_L1.location_front_train = outC->_L10;
  outC->_L1.location_brake_target = outC->_L12;
  outC->_L1.v_target = outC->_L76;
  outC->_L1.v_permitted = outC->_L77;
  outC->_L1.v_release = outC->_L78;
  outC->_L1.location_brake_curve_starting_point = outC->_L16;
  outC->_L1.v_intervention = outC->_L79;
  outC->_L1.mode = outC->_L18;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&outC->_L1.level, &outC->_L43);
  outC->_L1.nid_c = outC->_L20;
  outC->_L1.nid_c_valid = outC->_L22;
  outC->_L1.m_warning = outC->_L36;
  outC->_L1.sup_status = outC->_L21;
  outC->_L1.location_LOA = outC->_L25;
  outC->_L1.v_LOA = outC->_L26;
  outC->_L1.location_KP_Balise_Track = outC->_L46;
  outC->_L1.distance_KP_Balise = outC->_L47;
  outC->_L1.distance_to_TSA = outC->_L48;
  outC->_L1.radioConnectionStatus = outC->_L35;
  outC->_L1.distanceIndicationPoint = outC->_L73;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &outC->packetDynamic,
    &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void sendDynamic_init_manage_DMI_Output_Pkg(
  outC_sendDynamic_manage_DMI_Output_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  outC->_L80.registration.valid = kcg_true;
  outC->_L80.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L80.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L80.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L80.registration.nid_mn = kcg_lit_int32(0);
  outC->_L80.connection.valid = kcg_true;
  outC->_L80.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L80.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L80.connection.nid_radio = kcg_lit_int64(0);
  outC->_L80.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L80.connection.connectionLost = kcg_true;
  outC->_L80.connection.isInRadioHole = kcg_true;
  outC->_L80.session.valid = kcg_true;
  outC->_L80.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L80.session.nid_c = kcg_lit_int32(0);
  outC->_L80.session.nid_rbc = kcg_lit_int32(0);
  outC->_L80.session.nid_radio = kcg_lit_int64(0);
  outC->_L79 = kcg_lit_int32(0);
  outC->_L78 = kcg_lit_int32(0);
  outC->_L77 = kcg_lit_int32(0);
  outC->_L76 = kcg_lit_int32(0);
  outC->_L75 = kcg_lit_int32(0);
  outC->_L73 = kcg_lit_int32(0);
  outC->_L74.valid = kcg_true;
  outC->_L74.targetSpeed = kcg_lit_int32(0);
  outC->_L74.permittedSpeed = kcg_lit_int32(0);
  outC->_L74.releaseSpeed = kcg_lit_int32(0);
  outC->_L74.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L74.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L74.interventionSpeed = kcg_lit_int32(0);
  outC->_L74.sup_status = CSM_DMI_Types_Pkg;
  outC->_L74.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L74.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L49.valid = kcg_true;
  outC->_L49.timestamp = kcg_lit_int32(0);
  outC->_L49.trainPositionIsUnknown = kcg_true;
  outC->_L49.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L49.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L49.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L49.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L49.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L49.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L49.LRBG.valid = kcg_true;
  outC->_L49.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L49.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L49.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L49.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L49.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L49.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L49.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L49.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L49.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L49.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L49.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L49.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L49.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L49.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L49.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L49.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L49.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L49.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L49.LRBG.missed = kcg_true;
  outC->_L49.prvLRBG.valid = kcg_true;
  outC->_L49.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L49.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L49.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L49.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L49.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L49.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L49.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L49.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L49.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L49.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L49.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L49.prvLRBG.missed = kcg_true;
  outC->_L49.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L49.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L49.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L49.linkingIsUsedOnboard = kcg_true;
  outC->_L49.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L49.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L49.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L48 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L43.level = M_LEVEL_Level_0;
  outC->_L43.nid_stm = kcg_lit_int32(0);
  outC->_L36 = supDis_normal_DMI_Types_Pkg;
  outC->_L35 = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24.valid = kcg_true;
  outC->_L24.location_LOA = kcg_lit_int32(0);
  outC->_L24.v_LOA = kcg_lit_int32(0);
  outC->_L23.valid = kcg_true;
  outC->_L23.targetSpeed = kcg_lit_int32(0);
  outC->_L23.permittedSpeed = kcg_lit_int32(0);
  outC->_L23.releaseSpeed = kcg_lit_int32(0);
  outC->_L23.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L23.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L23.interventionSpeed = kcg_lit_int32(0);
  outC->_L23.sup_status = CSM_DMI_Types_Pkg;
  outC->_L23.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L23.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L21 = CSM_DMI_Types_Pkg;
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = M_LEVEL_Level_0;
  outC->_L18 = M_MODE_Full_Supervision;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_c = kcg_lit_int32(0);
  outC->_L8.nid_c_valid = kcg_true;
  outC->_L7.compatibleModeAndLevel = kcg_true;
  outC->_L7.level = M_LEVEL_Level_0;
  outC->_L7.newLevel = kcg_true;
  outC->_L7.Mode = M_MODE_Full_Supervision;
  outC->_L7.newMode = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.targetSpeed = kcg_lit_int32(0);
  outC->_L6.permittedSpeed = kcg_lit_int32(0);
  outC->_L6.releaseSpeed = kcg_lit_int32(0);
  outC->_L6.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L6.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L6.interventionSpeed = kcg_lit_int32(0);
  outC->_L6.sup_status = CSM_DMI_Types_Pkg;
  outC->_L6.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L6.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int32(0);
  outC->_L5.trainPositionIsUnknown = kcg_true;
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L5.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L5.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L5.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L5.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L5.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L5.LRBG.valid = kcg_true;
  outC->_L5.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.LRBG.missed = kcg_true;
  outC->_L5.prvLRBG.valid = kcg_true;
  outC->_L5.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.prvLRBG.missed = kcg_true;
  outC->_L5.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L5.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L5.linkingIsUsedOnboard = kcg_true;
  outC->_L5.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L5.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L5.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.timestamp = kcg_lit_int32(0);
  outC->_L4.odo.o_nominal = kcg_lit_int32(0);
  outC->_L4.odo.o_min = kcg_lit_int32(0);
  outC->_L4.odo.o_max = kcg_lit_int32(0);
  outC->_L4.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L4.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L4.speed.v_lower = kcg_lit_int32(0);
  outC->_L4.speed.v_upper = kcg_lit_int32(0);
  outC->_L4.acceleration = kcg_lit_int32(0);
  outC->_L4.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.system_clock = kcg_lit_int32(0);
  outC->_L1.v_train = kcg_lit_int32(0);
  outC->_L1.location_front_train = kcg_lit_int32(0);
  outC->_L1.location_brake_target = kcg_lit_int32(0);
  outC->_L1.v_target = kcg_lit_int32(0);
  outC->_L1.v_permitted = kcg_lit_int32(0);
  outC->_L1.v_release = kcg_lit_int32(0);
  outC->_L1.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L1.v_intervention = kcg_lit_int32(0);
  outC->_L1.mode = M_MODE_Full_Supervision;
  outC->_L1.level.level = M_LEVEL_Level_0;
  outC->_L1.level.nid_stm = kcg_lit_int32(0);
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_c_valid = kcg_true;
  outC->_L1.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->_L1.sup_status = CSM_DMI_Types_Pkg;
  outC->_L1.location_LOA = kcg_lit_int32(0);
  outC->_L1.v_LOA = kcg_lit_int32(0);
  outC->_L1.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->_L1.distance_KP_Balise = kcg_lit_int32(0);
  outC->_L1.distance_to_TSA = kcg_lit_int32(0);
  outC->_L1.radioConnectionStatus = conn_unknown_API_RadioCommunication_Pkg;
  outC->_L1.distanceIndicationPoint = kcg_lit_int32(0);
  outC->packetDynamic.valid = kcg_true;
  outC->packetDynamic.system_clock = kcg_lit_int32(0);
  outC->packetDynamic.v_train = kcg_lit_int32(0);
  outC->packetDynamic.location_front_train = kcg_lit_int32(0);
  outC->packetDynamic.location_brake_target = kcg_lit_int32(0);
  outC->packetDynamic.v_target = kcg_lit_int32(0);
  outC->packetDynamic.v_permitted = kcg_lit_int32(0);
  outC->packetDynamic.v_release = kcg_lit_int32(0);
  outC->packetDynamic.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->packetDynamic.v_intervention = kcg_lit_int32(0);
  outC->packetDynamic.mode = M_MODE_Full_Supervision;
  outC->packetDynamic.level.level = M_LEVEL_Level_0;
  outC->packetDynamic.level.nid_stm = kcg_lit_int32(0);
  outC->packetDynamic.nid_c = kcg_lit_int32(0);
  outC->packetDynamic.nid_c_valid = kcg_true;
  outC->packetDynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->packetDynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->packetDynamic.location_LOA = kcg_lit_int32(0);
  outC->packetDynamic.v_LOA = kcg_lit_int32(0);
  outC->packetDynamic.location_KP_Balise_Track = kcg_lit_int32(0);
  outC->packetDynamic.distance_KP_Balise = kcg_lit_int32(0);
  outC->packetDynamic.distance_to_TSA = kcg_lit_int32(0);
  outC->packetDynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->packetDynamic.distanceIndicationPoint = kcg_lit_int32(0);
  /* _L35=(manage_DMI_Output_Pkg::mapMoRCtoRadio_CS#1)/ */
  mapMoRCtoRadio_CS_init_manage_DMI_Output_Pkg(
    &outC->Context_mapMoRCtoRadio_CS_1);
  /* _L46=(manage_DMI_Output_Pkg::calcDistances#1)/ */
  calcDistances_init_manage_DMI_Output_Pkg(&outC->Context_calcDistances_1);
  /* _L75=(manage_DMI_Output_Pkg::convert_cm_s_km_h#1)/ */
  convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_1);
  /* _L76=(manage_DMI_Output_Pkg::convert_cm_s_km_h#2)/ */
  convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_2);
  /* _L77=(manage_DMI_Output_Pkg::convert_cm_s_km_h#3)/ */
  convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_3);
  /* _L78=(manage_DMI_Output_Pkg::convert_cm_s_km_h#4)/ */
  convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_4);
  /* _L79=(manage_DMI_Output_Pkg::convert_cm_s_km_h#5)/ */
  convert_cm_s_km_h_init_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_5);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendDynamic_reset_manage_DMI_Output_Pkg(
  outC_sendDynamic_manage_DMI_Output_Pkg *outC)
{
  /* _L35=(manage_DMI_Output_Pkg::mapMoRCtoRadio_CS#1)/ */
  mapMoRCtoRadio_CS_reset_manage_DMI_Output_Pkg(
    &outC->Context_mapMoRCtoRadio_CS_1);
  /* _L46=(manage_DMI_Output_Pkg::calcDistances#1)/ */
  calcDistances_reset_manage_DMI_Output_Pkg(&outC->Context_calcDistances_1);
  /* _L75=(manage_DMI_Output_Pkg::convert_cm_s_km_h#1)/ */
  convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_1);
  /* _L76=(manage_DMI_Output_Pkg::convert_cm_s_km_h#2)/ */
  convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_2);
  /* _L77=(manage_DMI_Output_Pkg::convert_cm_s_km_h#3)/ */
  convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_3);
  /* _L78=(manage_DMI_Output_Pkg::convert_cm_s_km_h#4)/ */
  convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_4);
  /* _L79=(manage_DMI_Output_Pkg::convert_cm_s_km_h#5)/ */
  convert_cm_s_km_h_reset_manage_DMI_Output_Pkg(
    &outC->Context_convert_cm_s_km_h_5);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendDynamic_manage_DMI_Output_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

