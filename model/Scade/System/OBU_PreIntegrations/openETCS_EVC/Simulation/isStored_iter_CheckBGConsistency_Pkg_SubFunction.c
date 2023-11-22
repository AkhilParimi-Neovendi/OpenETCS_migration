/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored_iter/ */
void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* storedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* bgHeader/ */
  BG_Header_T_BG_Types_Pkg *bgHeader,
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC)
{
  BG_Header_T_BG_Types_Pkg acc;
  kcg_size idx;
  BG_Header_T_BG_Types_Pkg noname;

  outC->_L27 = kcg_lit_int32(1);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, bgHeader);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L15, storedBGs);
  outC->_L13 = kcg_true;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9, &outC->_L14);
  /* _L11= */
  if (outC->_L13) {
    /* _L11= */
    for (idx = 0; idx < 41; idx++) {
      kcg_copy_BG_Header_T_BG_Types_Pkg(&acc, &outC->_L9);
      /* _L11=(CheckBGConsistency_Pkg::SubFunction::isStored#1)/ */
      isStored_CheckBGConsistency_Pkg_SubFunction(
        &acc,
        &outC->_L15[idx],
        &outC->Context_isStored_1[idx]);
      kcg_copy_BG_Header_T_BG_Types_Pkg(
        &outC->_L9,
        &outC->Context_isStored_1[idx].acc_out);
      outC->_L11 = /* _L11= */(kcg_int32) (idx + 1);
      /* _L11= */
      if (!outC->Context_isStored_1[idx].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L11 = kcg_lit_int32(0);
  }
  outC->_L26 = outC->_L11 - outC->_L27;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, storedBGs);
  if ((kcg_lit_int32(0) <= outC->_L26) & (outC->_L26 < kcg_lit_int32(41))) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L24,
      &outC->_L21[outC->_L26]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L24,
      (positionedBG_T_TrainPosition_Types_Pck *) &cNoStoredBG_CheckBGConsistency_Pkg);
  }
  outC->_L25 = outC->_L24.valid;
  outC->isStored = outC->_L25;
  outC->index = outC->_L26;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&noname, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void isStored_iter_init_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L24.valid = kcg_true;
  outC->_L24.nid_c = kcg_lit_int32(0);
  outC->_L24.nid_bg = kcg_lit_int32(0);
  outC->_L24.q_link = Q_LINK_Unlinked;
  outC->_L24.location.nominal = kcg_lit_int32(0);
  outC->_L24.location.d_min = kcg_lit_int32(0);
  outC->_L24.location.d_max = kcg_lit_int32(0);
  outC->_L24.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.valid = kcg_true;
  outC->_L24.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L24.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L24.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L24.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L24.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L24.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L24.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L24.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L24.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L24.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L24.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L24.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L24.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L24.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L24.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L24.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L24.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L24.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L24.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L24.missed = kcg_true;
  for (idx3 = 0; idx3 < 41; idx3++) {
    outC->_L21[idx3].valid = kcg_true;
    outC->_L21[idx3].nid_c = kcg_lit_int32(0);
    outC->_L21[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L21[idx3].q_link = Q_LINK_Unlinked;
    outC->_L21[idx3].location.nominal = kcg_lit_int32(0);
    outC->_L21[idx3].location.d_min = kcg_lit_int32(0);
    outC->_L21[idx3].location.d_max = kcg_lit_int32(0);
    outC->_L21[idx3].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.valid = kcg_true;
    outC->_L21[idx3].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L21[idx3].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L21[idx3].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21[idx3].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21[idx3].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.valid = kcg_true;
    outC->_L21[idx3].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L21[idx3].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L21[idx3].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L21[idx3].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L21[idx3].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L21[idx3].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L21[idx3].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L21[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L21[idx3].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L21[idx3].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L21[idx3].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx2 = 0; idx2 < 33; idx2++) {
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].valid = kcg_true;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L21[idx3].infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
    }
    outC->_L21[idx3].missed = kcg_true;
  }
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L15[idx5].valid = kcg_true;
    outC->_L15[idx5].nid_c = kcg_lit_int32(0);
    outC->_L15[idx5].nid_bg = kcg_lit_int32(0);
    outC->_L15[idx5].q_link = Q_LINK_Unlinked;
    outC->_L15[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L15[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L15[idx5].location.d_max = kcg_lit_int32(0);
    outC->_L15[idx5].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.valid = kcg_true;
    outC->_L15[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L15[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L15[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.valid = kcg_true;
    outC->_L15[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L15[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L15[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L15[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L15[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L15[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L15[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L15[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L15[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L15[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L15[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L15[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
    }
    outC->_L15[idx5].missed = kcg_true;
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.q_media = Q_MEDIA_Balise;
  outC->_L14.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.m_mcount = kcg_lit_int32(0);
  outC->_L14.nid_c = kcg_lit_int32(0);
  outC->_L14.nid_bg = kcg_lit_int32(0);
  outC->_L14.q_link = Q_LINK_Unlinked;
  outC->_L14.bgPosition.valid = kcg_true;
  outC->_L14.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L14.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L14.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L14.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L14.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L14.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L14.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L14.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L14.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L14.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L14.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L14.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L14.q_nvlocacc = kcg_lit_int32(0);
  outC->_L14.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L14.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.q_media = Q_MEDIA_Balise;
  outC->_L9.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.m_mcount = kcg_lit_int32(0);
  outC->_L9.nid_c = kcg_lit_int32(0);
  outC->_L9.nid_bg = kcg_lit_int32(0);
  outC->_L9.q_link = Q_LINK_Unlinked;
  outC->_L9.bgPosition.valid = kcg_true;
  outC->_L9.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L9.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L9.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L9.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L9.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L9.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L9.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->isStored = kcg_true;
  outC->index = kcg_lit_int32(0);
  for (idx = 0; idx < 41; idx++) {
    /* _L11=(CheckBGConsistency_Pkg::SubFunction::isStored#1)/ */
    isStored_init_CheckBGConsistency_Pkg_SubFunction(
      &outC->Context_isStored_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 41; idx++) {
    /* _L11=(CheckBGConsistency_Pkg::SubFunction::isStored#1)/ */
    isStored_reset_CheckBGConsistency_Pkg_SubFunction(
      &outC->Context_isStored_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

