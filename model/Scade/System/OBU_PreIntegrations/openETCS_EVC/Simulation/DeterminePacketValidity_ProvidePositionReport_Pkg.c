/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DeterminePacketValidity_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::DeterminePacketValidity/ */
void DeterminePacketValidity_ProvidePositionReport_Pkg(
  /* lrbg/ */
  positionedBG_T_TrainPosition_Types_Pck *lrbg,
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L15, lrbg);
  outC->_L8 = outC->_L15.valid;
  outC->_L4 = N_TOTAL_1_balise_in_the_group;
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->_L11, &outC->_L15.infoFromPassing);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L5, &outC->_L11.BG_Header);
  outC->_L9 = outC->_L5.n_total;
  outC->_L10 = outC->_L9 == outC->_L4;
  outC->_L12 = outC->_L5.noCoordinateSystemHasBeenAssigned;
  outC->_L6 = outC->_L12 & outC->_L10 & outC->_L8;
  outC->_L13 = !outC->_L6;
  outC->_L14 = outC->_L13 & outC->_L8;
  outC->sendPacket1 = outC->_L6;
  outC->sendPacket0 = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void DeterminePacketValidity_init_ProvidePositionReport_Pkg(
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L15.valid = kcg_true;
  outC->_L15.nid_c = kcg_lit_int32(0);
  outC->_L15.nid_bg = kcg_lit_int32(0);
  outC->_L15.q_link = Q_LINK_Unlinked;
  outC->_L15.location.nominal = kcg_lit_int32(0);
  outC->_L15.location.d_min = kcg_lit_int32(0);
  outC->_L15.location.d_max = kcg_lit_int32(0);
  outC->_L15.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.valid = kcg_true;
  outC->_L15.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L15.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L15.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L15.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L15.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L15.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L15.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L15.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L15.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L15.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L15.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L15.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L15.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L15.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L15.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L15.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L15.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L15.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L15.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L15.missed = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L4 = N_TOTAL_1_balise_in_the_group;
  outC->_L5.valid = kcg_true;
  outC->_L5.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.q_media = Q_MEDIA_Balise;
  outC->_L5.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L5.m_mcount = kcg_lit_int32(0);
  outC->_L5.nid_c = kcg_lit_int32(0);
  outC->_L5.nid_bg = kcg_lit_int32(0);
  outC->_L5.q_link = Q_LINK_Unlinked;
  outC->_L5.bgPosition.valid = kcg_true;
  outC->_L5.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L5.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L5.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L5.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L5.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L5.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L5.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L5.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L5.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L5.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L5.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L5.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L5.q_nvlocacc = kcg_lit_int32(0);
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L6 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = N_TOTAL_1_balise_in_the_group;
  outC->_L10 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.BG_Header.valid = kcg_true;
  outC->_L11.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L11.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L11.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L11.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L11.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L11.BG_Header.bgPosition.valid = kcg_true;
  outC->_L11.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L11.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L11.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L11.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L11.linkedBGs[idx1].valid = kcg_true;
    outC->_L11.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L11.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L11.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L11.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L11.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L11.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L11.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L11.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L11.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L11.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L12 = kcg_true;
  outC->sendPacket1 = kcg_true;
  outC->sendPacket0 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void DeterminePacketValidity_reset_ProvidePositionReport_Pkg(
  outC_DeterminePacketValidity_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DeterminePacketValidity_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

