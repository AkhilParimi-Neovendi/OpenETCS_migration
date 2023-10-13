/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_DOUBTUNDER_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_DOUBTUNDER/ */
void op_DOUBTUNDER_ProvidePositionReport_Pkg(
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC)
{
  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L5, trainPos);
  outC->_L6 = outC->_L5.estimatedFrontEndPosition;
  outC->_L8 = outC->_L5.maxSafeFrontEndPostion;
  outC->_L11 = outC->_L8 - outC->_L6;
  outC->A_Input_Abs_1_int64 = outC->_L11;
  outC->_L5_Abs_1_int64 = outC->A_Input_Abs_1_int64;
  outC->_L3_Abs_1_int64 = - outC->_L5_Abs_1_int64;
  outC->_L1_Abs_1_int64 = outC->_L8_Abs_1_int64 <= outC->_L5_Abs_1_int64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_int64) {
    outC->_L2_Abs_1_int64 = outC->_L5_Abs_1_int64;
  }
  else {
    outC->_L2_Abs_1_int64 = outC->_L3_Abs_1_int64;
  }
  outC->A_Output_Abs_1_int64 = outC->_L2_Abs_1_int64;
  outC->_L10 = outC->A_Output_Abs_1_int64;
  outC->l_doubtunder = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void op_DOUBTUNDER_init_ProvidePositionReport_Pkg(
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L5.valid = kcg_true;
  outC->_L5.timestamp = kcg_lit_int64(0);
  outC->_L5.trainPositionIsUnknown = kcg_true;
  outC->_L5.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L5.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L5.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L5.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L5.LRBG.valid = kcg_true;
  outC->_L5.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.LRBG.missed = kcg_true;
  outC->_L5.prvLRBG.valid = kcg_true;
  outC->_L5.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L5.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L5.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L5.prvLRBG.missed = kcg_true;
  outC->_L5.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L5.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L5.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L5.linkingIsUsedOnboard = kcg_true;
  outC->_L5.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L5.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L5.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L1_Abs_1_int64 = kcg_true;
  outC->_L2_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L3_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L5_Abs_1_int64 = kcg_lit_int64(0);
  outC->_L8_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Input_Abs_1_int64 = kcg_lit_int64(0);
  outC->A_Output_Abs_1_int64 = kcg_lit_int64(0);
  outC->l_doubtunder = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_DOUBTUNDER_reset_ProvidePositionReport_Pkg(
  outC_op_DOUBTUNDER_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: ProvidePositionReport_Pkg::op_DOUBTUNDER/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_DOUBTUNDER_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

