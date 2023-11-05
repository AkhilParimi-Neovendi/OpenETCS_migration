/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket/ */
void validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* inMetadataElement/ */
  MetadataElement_T_Common_Types_Pkg *inMetadataElement,
  /* inTrainRunningDirection/ */
  Q_DIRTRAIN inTrainRunningDirection,
  /* LRBGKnown/ */
  kcg_bool LRBGKnown,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* coordinateSystemAssigned/ */
  kcg_bool coordinateSystemAssigned,
  outC_validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  /* outMetadataElement/ */
  static MetadataElement_T_Common_Types_Pkg outMetadataElement_partial;
  /* outMetadataElement/ */
  static MetadataElement_T_Common_Types_Pkg _1_outMetadataElement_partial;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L36, trainPosition);
  outC->_L35 = outC->_L36.trainPositionIsUnknown;
  outC->_L34 = !outC->_L35;
  outC->trainPositionKnown = outC->_L34;
  outC->IfBlock1_clock = (*inMetadataElement).nid_packet != kcg_lit_int32(44);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L32_then_IfBlock1 = LRBGKnown;
    outC->_L31_then_IfBlock1 = LRBGKnown;
    outC->_L30_then_IfBlock1 = coordinateSystemAssigned;
    outC->_L29_then_IfBlock1 = coordinateSystemAssigned;
    outC->_L2_then_IfBlock1 = outC->trainPositionKnown;
    outC->_L6_then_IfBlock1 = inTrainRunningDirection;
    outC->_L16_then_IfBlock1 = Q_DIRTRAIN_Reverse;
    outC->_L23_then_IfBlock1 = outC->_L16_then_IfBlock1 == outC->_L6_then_IfBlock1;
    outC->_L10_then_IfBlock1 = Q_DIR_Reverse;
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L5_then_IfBlock1,
      inMetadataElement);
    outC->_L12_then_IfBlock1 = outC->_L5_then_IfBlock1.q_dir;
    outC->_L22_then_IfBlock1 = outC->_L12_then_IfBlock1 == outC->_L10_then_IfBlock1;
    outC->_L28_then_IfBlock1 = outC->_L22_then_IfBlock1 &
      outC->_L23_then_IfBlock1 & outC->_L2_then_IfBlock1 &
      outC->_L30_then_IfBlock1 & outC->_L32_then_IfBlock1;
    outC->_L27_then_IfBlock1 = inTrainRunningDirection;
    outC->_L21_then_IfBlock1 = outC->trainPositionKnown;
    outC->_L18_then_IfBlock1 = Q_DIRTRAIN_Nominal;
    outC->_L3_then_IfBlock1 = outC->_L18_then_IfBlock1 == outC->_L27_then_IfBlock1;
    outC->_L7_then_IfBlock1 = Q_DIR_Nominal;
    outC->_L1_then_IfBlock1 = outC->_L12_then_IfBlock1 == outC->_L7_then_IfBlock1;
    outC->_L25_then_IfBlock1 = outC->_L1_then_IfBlock1 &
      outC->_L3_then_IfBlock1 & outC->_L21_then_IfBlock1 &
      outC->_L29_then_IfBlock1 & outC->_L31_then_IfBlock1;
    outC->_L24_then_IfBlock1 = Q_DIR_Both_directions;
    outC->_L8_then_IfBlock1 = outC->_L12_then_IfBlock1 == outC->_L24_then_IfBlock1;
    outC->_L20_then_IfBlock1 = outC->_L25_then_IfBlock1 |
      outC->_L28_then_IfBlock1 | outC->_L8_then_IfBlock1;
    outC->_L13_then_IfBlock1 = outC->_L5_then_IfBlock1.valid;
    outC->_L19_then_IfBlock1 = outC->_L13_then_IfBlock1 & outC->_L20_then_IfBlock1;
    outC->_L11_then_IfBlock1 = outC->_L5_then_IfBlock1.nid_packet;
    outC->_L14_then_IfBlock1 = outC->_L5_then_IfBlock1.startAddress;
    outC->_L15_then_IfBlock1 = outC->_L5_then_IfBlock1.endAddress;
    outC->_L9_then_IfBlock1.nid_packet = outC->_L11_then_IfBlock1;
    outC->_L9_then_IfBlock1.q_dir = outC->_L12_then_IfBlock1;
    outC->_L9_then_IfBlock1.valid = outC->_L19_then_IfBlock1;
    outC->_L9_then_IfBlock1.startAddress = outC->_L14_then_IfBlock1;
    outC->_L9_then_IfBlock1.endAddress = outC->_L15_then_IfBlock1;
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outMetadataElement_partial,
      &outC->_L9_then_IfBlock1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->outMetadataElement,
      &outMetadataElement_partial);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      inMetadataElement);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_1_outMetadataElement_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->outMetadataElement,
      &_1_outMetadataElement_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void validateDataDirectionForSinglePacket_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L36.valid = kcg_true;
  outC->_L36.timestamp = kcg_lit_int32(0);
  outC->_L36.trainPositionIsUnknown = kcg_true;
  outC->_L36.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L36.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L36.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L36.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L36.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L36.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L36.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L36.LRBG.valid = kcg_true;
  outC->_L36.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L36.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L36.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L36.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L36.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L36.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L36.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L36.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L36.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L36.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L36.LRBG.missed = kcg_true;
  outC->_L36.prvLRBG.valid = kcg_true;
  outC->_L36.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L36.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L36.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L36.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L36.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L36.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L36.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L36.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L36.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L36.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L36.prvLRBG.missed = kcg_true;
  outC->_L36.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L36.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L36.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L36.linkingIsUsedOnboard = kcg_true;
  outC->_L36.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L36.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L36.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->trainPositionKnown = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L1_else_IfBlock1.endAddress = kcg_lit_int32(0);
  outC->_L28_then_IfBlock1 = kcg_true;
  outC->_L27_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L25_then_IfBlock1 = kcg_true;
  outC->_L24_then_IfBlock1 = Q_DIR_Reverse;
  outC->_L23_then_IfBlock1 = kcg_true;
  outC->_L22_then_IfBlock1 = kcg_true;
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L20_then_IfBlock1 = kcg_true;
  outC->_L19_then_IfBlock1 = kcg_true;
  outC->_L18_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L11_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1 = Q_DIR_Reverse;
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L14_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1 = Q_DIR_Reverse;
  outC->_L9_then_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.endAddress = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = Q_DIR_Reverse;
  outC->_L6_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L5_then_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L5_then_IfBlock1.valid = kcg_true;
  outC->_L5_then_IfBlock1.startAddress = kcg_lit_int32(0);
  outC->_L5_then_IfBlock1.endAddress = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L29_then_IfBlock1 = kcg_true;
  outC->_L30_then_IfBlock1 = kcg_true;
  outC->_L31_then_IfBlock1 = kcg_true;
  outC->_L32_then_IfBlock1 = kcg_true;
  outC->outMetadataElement.nid_packet = kcg_lit_int32(0);
  outC->outMetadataElement.q_dir = Q_DIR_Reverse;
  outC->outMetadataElement.valid = kcg_true;
  outC->outMetadataElement.startAddress = kcg_lit_int32(0);
  outC->outMetadataElement.endAddress = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void validateDataDirectionForSinglePacket_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

