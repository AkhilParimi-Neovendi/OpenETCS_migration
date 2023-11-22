/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage/ */
void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inPositionedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_size idx;
  kcg_size idx1;
  positionedBG_T_TrainPosition_Types_Pck acc;
  kcg_size idx2;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  outC->_L3 = outC->_L1.Radio_Common_Header.nid_lrbg;
  /* _L9=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_TM(outC->_L3, &outC->Context_Decode_NID_LRBG_1);
  outC->_L9 = outC->Context_Decode_NID_LRBG_1.NID_C_out;
  outC->_L10 = outC->Context_Decode_NID_LRBG_1.NID_BG_out;
  /* _L12/ */
  for (idx = 0; idx < 41; idx++) {
    outC->_L12[idx] = outC->_L9;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L8,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cEmptyLRBG_ValidateDataDirection_Pkg);
  /* _L6/ */
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L6[idx1] = outC->_L10;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, inPositionedBGs);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L5, &outC->_L8);
  /* _L5= */
  for (idx2 = 0; idx2 < 41; idx2++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&acc, &outC->_L5);
    /* _L5=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator#1)/ */
    getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &acc,
      outC->_L12[idx2],
      outC->_L6[idx2],
      &outC->_L2[idx2],
      &outC->Context_getLRBGForRadioMessageIterator_1[idx2]);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5,
      &outC->Context_getLRBGForRadioMessageIterator_1[idx2].LRBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->outLRBG, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void getLRBGForRadioMessage_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
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

  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L12[idx1] = kcg_lit_int32(0);
  }
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L8.valid = kcg_true;
  outC->_L8.nid_c = kcg_lit_int32(0);
  outC->_L8.nid_bg = kcg_lit_int32(0);
  outC->_L8.q_link = Q_LINK_Unlinked;
  outC->_L8.location.nominal = kcg_lit_int32(0);
  outC->_L8.location.d_min = kcg_lit_int32(0);
  outC->_L8.location.d_max = kcg_lit_int32(0);
  outC->_L8.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.valid = kcg_true;
  outC->_L8.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L8.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L8.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L8.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L8.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L8.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L8.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L8.missed = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L6[idx3] = kcg_lit_int32(0);
  }
  outC->_L5.valid = kcg_true;
  outC->_L5.nid_c = kcg_lit_int32(0);
  outC->_L5.nid_bg = kcg_lit_int32(0);
  outC->_L5.q_link = Q_LINK_Unlinked;
  outC->_L5.location.nominal = kcg_lit_int32(0);
  outC->_L5.location.d_min = kcg_lit_int32(0);
  outC->_L5.location.d_max = kcg_lit_int32(0);
  outC->_L5.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.valid = kcg_true;
  outC->_L5.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L5.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L5.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L5.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L5.missed = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L2[idx6].valid = kcg_true;
    outC->_L2[idx6].nid_c = kcg_lit_int32(0);
    outC->_L2[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L2[idx6].q_link = Q_LINK_Unlinked;
    outC->_L2[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L2[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L2[idx6].location.d_max = kcg_lit_int32(0);
    outC->_L2[idx6].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.valid = kcg_true;
    outC->_L2[idx6].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L2[idx6].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx6].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx6].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2[idx6].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.valid = kcg_true;
    outC->_L2[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L2[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L2[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L2[idx6].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L2[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L2[idx6].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L2[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L2[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L2[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L2[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L2[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].valid = kcg_true;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int32(0);
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_scale = Q_SCALE_10_cm_scale;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int32(0);
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int32(0);
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int32(0);
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L2[idx6].infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int32(0);
    }
    outC->_L2[idx6].missed = kcg_true;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L1.packets.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L1.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->outLRBG.valid = kcg_true;
  outC->outLRBG.nid_c = kcg_lit_int32(0);
  outC->outLRBG.nid_bg = kcg_lit_int32(0);
  outC->outLRBG.q_link = Q_LINK_Unlinked;
  outC->outLRBG.location.nominal = kcg_lit_int32(0);
  outC->outLRBG.location.d_min = kcg_lit_int32(0);
  outC->outLRBG.location.d_max = kcg_lit_int32(0);
  outC->outLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.valid = kcg_true;
  outC->outLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->outLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->outLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->outLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->outLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->outLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->outLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->outLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.valid = kcg_true;
  outC->outLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->outLRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->outLRBG.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->outLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->outLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->outLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].valid = kcg_true;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].nid_LRBG = kcg_lit_int32(0);
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_dir = Q_DIR_Reverse;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].d_link = kcg_lit_int32(0);
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->outLRBG.infoFromPassing.linkedBGs[idx9].q_locacc = kcg_lit_int32(0);
  }
  outC->outLRBG.missed = kcg_true;
  for (idx = 0; idx < 41; idx++) {
    /* _L5=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator#1)/ */
    getLRBGForRadioMessageIte_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_getLRBGForRadioMessageIterator_1[idx]);
  }
  /* _L9=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_init_TM(&outC->Context_Decode_NID_LRBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L5=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator#1)/ */
    getLRBGForRadioMessageIte_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_getLRBGForRadioMessageIterator_1[idx]);
  }
  /* _L9=(TM::Decode_NID_LRBG#1)/ */
  Decode_NID_LRBG_reset_TM(&outC->Context_Decode_NID_LRBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

