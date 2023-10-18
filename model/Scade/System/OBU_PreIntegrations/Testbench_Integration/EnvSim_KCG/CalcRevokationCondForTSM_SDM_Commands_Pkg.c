/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokationCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokationCondForTSM/ */
void CalcRevokationCondForTSM_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC)
{
  outC->_L70 = floiIsSB1;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L69, trainLocations);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L62, mrdt);
  outC->_L68 = outC->_L62.targetType;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L2, locations);
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L1, speeds);
  /* _L60=(SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA#1)/ */
  CalcRevokCondForTSM_MRSP_LOA_SDM_Commands_Pkg(
    &outC->_L2,
    &outC->_L1,
    &outC->_L69,
    outC->_L70,
    &outC->Context_CalcRevokCondForTSM_MRSP_LOA_1);
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(
    &outC->_L60,
    &outC->Context_CalcRevokCondForTSM_MRSP_LOA_1.revokationConds);
  /* _L59=(SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL#1)/ */
  CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
    &outC->_L2,
    &outC->_L1,
    &outC->_L69,
    outC->_L70,
    &outC->Context_CalcRevokCondForTSM_EOA_SvL_1);
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(
    &outC->_L59,
    &outC->Context_CalcRevokCondForTSM_EOA_SvL_1.revokationConds);
  outC->_L63 = SvL_TargetManagement_types;
  outC->_L65 = outC->_L68 == outC->_L63;
  outC->_L66 = EoA_TargetManagement_types;
  outC->_L64 = outC->_L66 == outC->_L68;
  outC->_L61 = outC->_L64 | outC->_L65;
  /* _L67= */
  if (outC->_L61) {
    kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&outC->_L67, &outC->_L59);
  }
  else {
    kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&outC->_L67, &outC->_L60);
  }
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&outC->revokationConds, &outC->_L67);
}

#ifndef KCG_USER_DEFINED_INIT
void CalcRevokationCondForTSM_init_SDM_Commands_Pkg(
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L70 = kcg_true;
  outC->_L69.valid = kcg_true;
  outC->_L69.timestamp = kcg_lit_int64(0);
  outC->_L69.trainPositionIsUnknown = kcg_true;
  outC->_L69.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L69.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L69.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L69.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L69.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L69.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L69.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L69.LRBG.valid = kcg_true;
  outC->_L69.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L69.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L69.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L69.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L69.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L69.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L69.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L69.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L69.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L69.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L69.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L69.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L69.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L69.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L69.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L69.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L69.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L69.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L69.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L69.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L69.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L69.LRBG.missed = kcg_true;
  outC->_L69.prvLRBG.valid = kcg_true;
  outC->_L69.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L69.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L69.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L69.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L69.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L69.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L69.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L69.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L69.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L69.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L69.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L69.prvLRBG.missed = kcg_true;
  outC->_L69.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L69.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L69.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L69.linkingIsUsedOnboard = kcg_true;
  outC->_L69.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L69.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L69.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L68 = EoA_TargetManagement_types;
  outC->_L67.r0 = kcg_true;
  outC->_L67.r1 = kcg_true;
  outC->_L67.r2 = kcg_true;
  outC->_L67.r3 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L62.targetType = EoA_TargetManagement_types;
  outC->_L62.distance = kcg_lit_int64(0);
  outC->_L62.speed = kcg_lit_int64(0);
  outC->_L62.valid = kcg_true;
  outC->_L63 = EoA_TargetManagement_types;
  outC->_L64 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L66 = EoA_TargetManagement_types;
  outC->_L60.r0 = kcg_true;
  outC->_L60.r1 = kcg_true;
  outC->_L60.r2 = kcg_true;
  outC->_L60.r3 = kcg_true;
  outC->_L59.r0 = kcg_true;
  outC->_L59.r1 = kcg_true;
  outC->_L59.r2 = kcg_true;
  outC->_L59.r3 = kcg_true;
  outC->_L2.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L2.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L2.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L2.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L2.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L2.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L2.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L2.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L2.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L2.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L2.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L2.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L2.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L2.d_target = kcg_lit_int64(0);
  outC->_L2.d_eoa = kcg_lit_int64(0);
  outC->_L2.d_svl = kcg_lit_int64(0);
  outC->_L2.Preindication_EBD_location_valid = kcg_true;
  outC->_L2.Preindication_SBD_location_valid = kcg_true;
  outC->_L2.RSM_start_location_EBD_valid = kcg_true;
  outC->_L2.RSM_start_location_SBD_valid = kcg_true;
  outC->_L1.V_est = kcg_lit_int64(0);
  outC->_L1.V_MRSP = kcg_lit_int64(0);
  outC->_L1.V_release = kcg_lit_int64(0);
  outC->_L1.V_target = kcg_lit_int64(0);
  outC->_L1.v_p_mrdt = kcg_lit_int64(0);
  outC->_L1.v_p_dmi = kcg_lit_int64(0);
  outC->_L1.v_sbi_mrdt = kcg_lit_int64(0);
  outC->_L1.v_FLOI_dmi = kcg_lit_int64(0);
  outC->_L1.dV_warning_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_warning_V_target = kcg_lit_int64(0);
  outC->_L1.dV_sbi_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_sbi_V_target = kcg_lit_int64(0);
  outC->_L1.dV_ebi_V_MRSP = kcg_lit_int64(0);
  outC->_L1.dV_ebi_V_target = kcg_lit_int64(0);
  outC->_L1.OdoStandStill = kcg_true;
  outC->revokationConds.r0 = kcg_true;
  outC->revokationConds.r1 = kcg_true;
  outC->revokationConds.r2 = kcg_true;
  outC->revokationConds.r3 = kcg_true;
  /* _L59=(SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL#1)/ */
  CalcRevokCondForTSM_EOA_SvL_init_SDM_Commands_Pkg(
    &outC->Context_CalcRevokCondForTSM_EOA_SvL_1);
  /* _L60=(SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA#1)/ */
  CalcRevokCondForTSM_MRSP_LOA_init_SDM_Commands_Pkg(
    &outC->Context_CalcRevokCondForTSM_MRSP_LOA_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcRevokationCondForTSM_reset_SDM_Commands_Pkg(
  outC_CalcRevokationCondForTSM_SDM_Commands_Pkg *outC)
{
  /* _L59=(SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL#1)/ */
  CalcRevokCondForTSM_EOA_SvL_reset_SDM_Commands_Pkg(
    &outC->Context_CalcRevokCondForTSM_EOA_SvL_1);
  /* _L60=(SDM_Commands_Pkg::CalcRevokCondForTSM_MRSP_LOA#1)/ */
  CalcRevokCondForTSM_MRSP_LOA_reset_SDM_Commands_Pkg(
    &outC->Context_CalcRevokCondForTSM_MRSP_LOA_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcRevokationCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

