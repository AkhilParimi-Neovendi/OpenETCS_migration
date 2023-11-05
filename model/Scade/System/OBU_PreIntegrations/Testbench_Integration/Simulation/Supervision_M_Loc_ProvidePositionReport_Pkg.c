/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervision_M_Loc_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervision_M_Loc/ */
void Supervision_M_Loc_ProvidePositionReport_Pkg(
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* mloc/ */
  M_LOC mloc,
  /* present/ */
  kcg_bool present,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;

  outC->_L14 = mloc;
  outC->_L6 = M_LOC_Now;
  outC->_L1 = outC->_L6 == outC->_L14;
  outC->_L18 = present;
  outC->_L19 = outC->_L18 & outC->_L1;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L17, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L3, trainPos);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    &outC->_L17,
    &outC->_L3,
    &outC->Context_op_GetLRBGfromBGs_1);
  outC->_L15 = outC->Context_op_GetLRBGfromBGs_1.found;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L16,
    &outC->Context_op_GetLRBGfromBGs_1.lrbg);
  noname = outC->_L15;
  outC->_L10 = M_LOC_Every_LRBG_compliant_balise_group;
  outC->_L7 = outC->_L10 == outC->_L14;
  /* _L11=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
    &outC->_L16,
    &outC->_L3,
    &outC->Context_op_3_6_5_1_4_j_1);
  outC->_L11 = outC->Context_op_3_6_5_1_4_j_1.trigger;
  outC->_L2 = outC->_L11 & outC->_L7;
  outC->_L4 = !outC->_L11;
  outC->_L13 =
    M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group;
  outC->_L8 = outC->_L13 == outC->_L14;
  outC->_L9 = outC->_L8 & outC->_L4;
  outC->_L5 = outC->_L19 | outC->_L9 | outC->_L2;
  outC->trigger = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervision_M_Loc_init_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  for (idx1 = 0; idx1 < 41; idx1++) {
    outC->_L17[idx1].valid = kcg_true;
    outC->_L17[idx1].nid_c = kcg_lit_int32(0);
    outC->_L17[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L17[idx1].q_link = Q_LINK_Unlinked;
    outC->_L17[idx1].location.nominal = kcg_lit_int32(0);
    outC->_L17[idx1].location.d_min = kcg_lit_int32(0);
    outC->_L17[idx1].location.d_max = kcg_lit_int32(0);
    outC->_L17[idx1].seqNoOnTrack = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.valid = kcg_true;
    outC->_L17[idx1].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.d_link.nominal = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.d_link.d_min = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.d_link.d_max = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L17[idx1].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L17[idx1].infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L17[idx1].infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L17[idx1].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.valid = kcg_true;
    outC->_L17[idx1].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L17[idx1].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L17[idx1].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L17[idx1].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L17[idx1].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L17[idx1].infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L17[idx1].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L17[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
    outC->_L17[idx1].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L17[idx1].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L17[idx1].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx = 0; idx < 33; idx++) {
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].valid = kcg_true;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L17[idx1].infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
    }
    outC->_L17[idx1].missed = kcg_true;
  }
  outC->_L15 = kcg_true;
  outC->_L16.valid = kcg_true;
  outC->_L16.nid_c = kcg_lit_int32(0);
  outC->_L16.nid_bg = kcg_lit_int32(0);
  outC->_L16.q_link = Q_LINK_Unlinked;
  outC->_L16.location.nominal = kcg_lit_int32(0);
  outC->_L16.location.d_min = kcg_lit_int32(0);
  outC->_L16.location.d_max = kcg_lit_int32(0);
  outC->_L16.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.valid = kcg_true;
  outC->_L16.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L16.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L16.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L16.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L16.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L16.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L16.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L16.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L16.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(
      0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L16.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L16.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L16.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L16.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L16.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L16.missed = kcg_true;
  outC->_L14 = M_LOC_Now;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
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
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.LRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
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
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L3.prvLRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L3.prvLRBG.missed = kcg_true;
  outC->_L3.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L3.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L3.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L3.linkingIsUsedOnboard = kcg_true;
  outC->_L3.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L3.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L3.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = M_LOC_Now;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = M_LOC_Now;
  outC->_L11 = kcg_true;
  outC->_L13 = M_LOC_Now;
  outC->trigger = kcg_true;
  /* _L11=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_j_1);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_init_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  /* _L11=(ProvidePositionReport_Pkg::op_3_6_5_1_4_j#1)/ */
  op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_j_1);
  /* _L15=(ProvidePositionReport_Pkg::op_GetLRBGfromBGs#1)/ */
  op_GetLRBGfromBGs_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_GetLRBGfromBGs_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Supervision_M_Loc_ProvidePositionReport_Pkg(
  SV_Supervision_M_Loc_ProvidePositionReport_Pkg *SV,
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC)
{
  kcg_save_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
    &SV->Context_op_3_6_5_1_4_j_1,
    &outC->Context_op_3_6_5_1_4_j_1);
}

void kcg_load_SV_Supervision_M_Loc_ProvidePositionReport_Pkg(
  outC_Supervision_M_Loc_ProvidePositionReport_Pkg *outC,
  SV_Supervision_M_Loc_ProvidePositionReport_Pkg *SV)
{
  kcg_load_SV_op_3_6_5_1_4_j_ProvidePositionReport_Pkg(
    &outC->Context_op_3_6_5_1_4_j_1,
    &SV->Context_op_3_6_5_1_4_j_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervision_M_Loc_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

