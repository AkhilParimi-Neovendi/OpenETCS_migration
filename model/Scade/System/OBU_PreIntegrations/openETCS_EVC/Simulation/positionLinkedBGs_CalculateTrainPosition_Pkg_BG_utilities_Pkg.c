/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.h"

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs/ */
void positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  /* passedPositionedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *passedPositionedBG,
  /* linkedBGs/ */
  LinkedBGs_T_BG_Types_Pkg *linkedBGs,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  LocWithInAcc_T_Obu_BasicTypes_Pkg acc;
  kcg_size idx2;
  LocWithInAcc_T_Obu_BasicTypes_Pkg noname;

  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L8, trainProperties);
  /* _L9/ */
  for (idx = 0; idx < 33; idx++) {
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L9[idx], &outC->_L8);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L7,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, passedPositionedBG);
  /* _L4/ */
  for (idx1 = 0; idx1 < 33; idx1++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4[idx1], &outC->_L1);
  }
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L2, linkedBGs);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&outC->_L6, &outC->_L7);
  /* _L6= */
  for (idx2 = 0; idx2 < 33; idx2++) {
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&acc, &outC->_L6);
    /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr#1)/ */
    positionLinkedBGs_itr_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &acc,
      &outC->_L4[idx2],
      &outC->_L2[idx2],
      &outC->_L9[idx2],
      &outC->Context_positionLinkedBGs_itr_1[idx2]);
    kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &outC->_L6,
      &outC->Context_positionLinkedBGs_itr_1[idx2].sumOfLinkingDistances);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L3[idx2],
      &outC->Context_positionLinkedBGs_itr_1[idx2].linkedPositionedBG);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&noname, &outC->_L6);
  kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
    &outC->linkedPositionedBGs,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void positionLinkedBGs_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
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

  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L9[idx1].nid_engine = kcg_lit_int32(0);
    outC->_L9[idx1].nid_operational = kcg_lit_int32(0);
    outC->_L9[idx1].l_train = kcg_lit_int32(0);
    outC->_L9[idx1].d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
    outC->_L9[idx1].d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
    outC->_L9[idx1].d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
    outC->_L9[idx1].d_frontend_2_rearend.nominal = kcg_lit_int32(0);
    outC->_L9[idx1].d_frontend_2_rearend.d_min = kcg_lit_int32(0);
    outC->_L9[idx1].d_frontend_2_rearend.d_max = kcg_lit_int32(0);
    outC->_L9[idx1].locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
    outC->_L9[idx1].locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
    outC->_L9[idx1].locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
    outC->_L9[idx1].centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
    outC->_L9[idx1].centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
    outC->_L9[idx1].centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  }
  outC->_L8.nid_engine = kcg_lit_int32(0);
  outC->_L8.nid_operational = kcg_lit_int32(0);
  outC->_L8.l_train = kcg_lit_int32(0);
  outC->_L8.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L8.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L8.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L8.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L8.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L8.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L8.locationAccuracy_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L8.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L8.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L8.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int32(0);
  outC->_L8.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L8.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L7.nominal = kcg_lit_int32(0);
  outC->_L7.d_min = kcg_lit_int32(0);
  outC->_L7.d_max = kcg_lit_int32(0);
  outC->_L6.nominal = kcg_lit_int32(0);
  outC->_L6.d_min = kcg_lit_int32(0);
  outC->_L6.d_max = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L4[idx3].valid = kcg_true;
    outC->_L4[idx3].nid_c = kcg_lit_int32(0);
    outC->_L4[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L4[idx3].q_link = Q_LINK_Unlinked;
    outC->_L4[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L4[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L4[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L4[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.valid = kcg_true;
    outC->_L4[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L4[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L4[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.valid = kcg_true;
    outC->_L4[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L4[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L4[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L4[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L4[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L4[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L4[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L4[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L4[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L4[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L4[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L4[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L4[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L3[idx5].valid = kcg_true;
    outC->_L3[idx5].nid_c = kcg_lit_int32(0);
    outC->_L3[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L3[idx5].q_link = Q_LINK_Unlinked;
    outC->_L3[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L3[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L3[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L3[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.valid = kcg_true;
    outC->_L3[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L3[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L3[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.valid = kcg_true;
    outC->_L3[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L3[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L3[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L3[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L3[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L3[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L3[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L3[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L3[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L3[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L3[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L3[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L3[idx5].missed = kcg_true;
  }
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L2[idx6].valid = kcg_true;
    outC->_L2[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L2[idx6].q_dir = Q_DIR_Reverse;
    outC->_L2[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2[idx6].d_link = kcg_lit_int32(0);
    outC->_L2[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2[idx6].nid_c = kcg_lit_int32(0);
    outC->_L2[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L2[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2[idx6].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L2[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_c = kcg_lit_int32(0);
  outC->_L1.nid_bg = kcg_lit_int32(0);
  outC->_L1.q_link = Q_LINK_Unlinked;
  outC->_L1.location.nominal = kcg_lit_int32(0);
  outC->_L1.location.d_min = kcg_lit_int32(0);
  outC->_L1.location.d_max = kcg_lit_int32(0);
  outC->_L1.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.valid = kcg_true;
  outC->_L1.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L1.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L1.missed = kcg_true;
  for (idx9 = 0; idx9 < 33; idx9++) {
    outC->linkedPositionedBGs[idx9].valid = kcg_true;
    outC->linkedPositionedBGs[idx9].nid_c = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].nid_bg = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].q_link = Q_LINK_Unlinked;
    outC->linkedPositionedBGs[idx9].location.nominal = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].location.d_min = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].location.d_max = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].seqNoOnTrack = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.valid = kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.d_link.nominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->linkedPositionedBGs[idx9].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.valid = kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.valid = kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int32(0);
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->linkedPositionedBGs[idx9].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx8 = 0; idx8 < 33; idx8++) {
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].valid =
        kcg_true;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].nid_LRBG =
        kcg_lit_int32(0);
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_dir =
        Q_DIR_Reverse;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_scale =
        Q_SCALE_10_cm_scale;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].d_link =
        kcg_lit_int32(0);
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].nid_c =
        kcg_lit_int32(0);
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].nid_bg =
        kcg_lit_int32(0);
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->linkedPositionedBGs[idx9].infoFromPassing.linkedBGs[idx8].q_locacc =
        kcg_lit_int32(0);
    }
    outC->linkedPositionedBGs[idx9].missed = kcg_true;
  }
  for (idx = 0; idx < 33; idx++) {
    /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr#1)/ */
    positionLinkedBGs_itr_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_positionLinkedBGs_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void positionLinkedBGs_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  outC_positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 33; idx++) {
    /* _L6=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::positionLinkedBGs_itr#1)/ */
    positionLinkedBGs_itr_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      &outC->Context_positionLinkedBGs_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** positionLinkedBGs_CalculateTrainPosition_Pkg_BG_utilities_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

