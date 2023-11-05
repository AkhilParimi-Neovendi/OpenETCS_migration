/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "calcDistances_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::calcDistances/ */
void calcDistances_manage_DMI_Output_Pkg(
  /* inTrainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  outC_calcDistances_manage_DMI_Output_Pkg *outC)
{
  /* ouDistanceKP_Balise/ */
  static L_internal_Type_Obu_BasicTypes_Pkg ouDistanceKP_Balise_partial;
  /* ouDistanceKP_Balise/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _1_ouDistanceKP_Balise_partial;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L2, inTrainPosition);
  outC->_L9 = outC->_L2.LRBG.valid;
  outC->_L5 = outC->_L2.noCoordinateSystemHasBeenAssigned;
  outC->_L6 = !outC->_L5;
  outC->_L4 = outC->_L2.trainPositionIsUnknown;
  outC->_L7 = !outC->_L4;
  outC->_L3 = outC->_L2.valid;
  outC->_L8 = outC->_L3 & outC->_L7 & outC->_L6 & outC->_L9;
  outC->doCalc = outC->_L8;
  outC->IfBlock1_clock = outC->doCalc;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_lit_int32(-1);
    ouDistanceKP_Balise_partial = outC->_L1_then_IfBlock1;
    outC->ouDistanceKP_Balise = ouDistanceKP_Balise_partial;
  }
  else {
    outC->_L1_else_IfBlock1 = kcg_lit_int32(-1);
    _1_ouDistanceKP_Balise_partial = outC->_L1_else_IfBlock1;
    outC->ouDistanceKP_Balise = _1_ouDistanceKP_Balise_partial;
  }
  outC->_L1 = kcg_lit_int32(-1);
  outC->outDistance_ToTSA = outC->_L1;
  outC->outLocationKP_Balise_Track = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void calcDistances_init_manage_DMI_Output_Pkg(
  outC_calcDistances_manage_DMI_Output_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2.valid = kcg_true;
  outC->_L2.timestamp = kcg_lit_int32(0);
  outC->_L2.trainPositionIsUnknown = kcg_true;
  outC->_L2.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L2.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L2.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L2.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L2.LRBG.valid = kcg_true;
  outC->_L2.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.LRBG.missed = kcg_true;
  outC->_L2.prvLRBG.valid = kcg_true;
  outC->_L2.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.prvLRBG.missed = kcg_true;
  outC->_L2.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L2.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L2.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L2.linkingIsUsedOnboard = kcg_true;
  outC->_L2.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L2.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L2.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->doCalc = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->outDistance_ToTSA = kcg_lit_int32(0);
  outC->ouDistanceKP_Balise = kcg_lit_int32(0);
  outC->outLocationKP_Balise_Track = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void calcDistances_reset_manage_DMI_Output_Pkg(
  outC_calcDistances_manage_DMI_Output_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** calcDistances_manage_DMI_Output_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

