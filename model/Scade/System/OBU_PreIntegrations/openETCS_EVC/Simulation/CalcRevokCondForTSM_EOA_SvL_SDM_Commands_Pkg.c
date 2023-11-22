/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcRevokCondForTSM_EOA_SvL/ */
void CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg(
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC)
{
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L51, speeds);
  outC->_L74 = outC->_L51.OdoStandStill;
  outC->_L72 = floiIsSB1;
  outC->_L73 = !outC->_L72;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L71, trainLocations);
  outC->_L37 = outC->_L71.estimatedFrontEndPosition;
  outC->_L34 = outC->_L71.maxSafeFrontEndPostion;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L29, locations);
  outC->_L33 = outC->_L29.d_I_of_V_est;
  outC->FLOI_eq_SBI2 = outC->_L73;
  outC->_L24 = outC->FLOI_eq_SBI2;
  outC->_L15 = outC->_L71.maxSafeFrontEndPostion;
  outC->_L23 = outC->_L29.d_P_of_V_est;
  outC->_L1 = outC->_L23 >= outC->_L15;
  outC->_L30 = outC->_L1 & outC->_L24;
  outC->_L22 = outC->_L37 <= outC->_L23;
  outC->FLOI_eq_SBI1 = outC->_L72;
  outC->_L8 = outC->FLOI_eq_SBI1;
  outC->_L11 = outC->_L8 & outC->_L22;
  outC->_L20 = outC->_L11 | outC->_L30;
  outC->_L2 = outC->_L51.V_MRSP;
  outC->_L21 = outC->_L51.V_est;
  outC->_L26 = outC->_L21 <= outC->_L2;
  outC->_L7 = outC->_L51.V_release;
  outC->_L31 = outC->_L21 <= outC->_L7;
  outC->_L16 = !outC->_L31;
  outC->_L9 = outC->_L16 & outC->_L26;
  outC->_L32 = outC->_L9 & outC->_L20;
  outC->_L4 = outC->_L33 >= outC->_L37;
  outC->_L12 = outC->_L4 & outC->_L8;
  outC->_L3 = outC->_L34 <= outC->_L33;
  outC->_L19 = outC->FLOI_eq_SBI2;
  outC->_L6 = outC->_L19 & outC->_L3;
  outC->_L25 = outC->_L6 | outC->_L12;
  outC->_L10 = outC->_L9 & outC->_L25;
  outC->_L17.r0 = outC->_L74;
  outC->_L17.r1 = outC->_L31;
  outC->_L17.r2 = outC->_L10;
  outC->_L17.r3 = outC->_L32;
  kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(&outC->revokationConds, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void CalcRevokCondForTSM_EOA_SvL_init_SDM_Commands_Pkg(
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71.valid = kcg_true;
  outC->_L71.timestamp = kcg_lit_int32(0);
  outC->_L71.trainPositionIsUnknown = kcg_true;
  outC->_L71.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L71.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L71.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L71.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L71.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L71.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L71.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L71.LRBG.valid = kcg_true;
  outC->_L71.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L71.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L71.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L71.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L71.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L71.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L71.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L71.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L71.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L71.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L71.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L71.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L71.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L71.LRBG.missed = kcg_true;
  outC->_L71.prvLRBG.valid = kcg_true;
  outC->_L71.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L71.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L71.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L71.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L71.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L71.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L71.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L71.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L71.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L71.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L71.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L71.prvLRBG.missed = kcg_true;
  outC->_L71.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L71.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L71.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L71.linkingIsUsedOnboard = kcg_true;
  outC->_L71.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L71.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L71.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L51.V_est = kcg_lit_int32(0);
  outC->_L51.V_MRSP = kcg_lit_int32(0);
  outC->_L51.V_release = kcg_lit_int32(0);
  outC->_L51.V_target = kcg_lit_int32(0);
  outC->_L51.v_p_mrdt = kcg_lit_int32(0);
  outC->_L51.v_p_dmi = kcg_lit_int32(0);
  outC->_L51.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L51.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L51.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L51.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L51.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L51.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L51.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L51.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L51.OdoStandStill = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L17.r0 = kcg_true;
  outC->_L17.r1 = kcg_true;
  outC->_L17.r2 = kcg_true;
  outC->_L17.r3 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L29.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L29.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L29.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L29.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L29.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L29.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L29.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L29.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L29.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L29.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L29.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L29.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L29.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L29.d_target = kcg_lit_int32(0);
  outC->_L29.d_eoa = kcg_lit_int32(0);
  outC->_L29.d_svl = kcg_lit_int32(0);
  outC->_L29.Preindication_EBD_location_valid = kcg_true;
  outC->_L29.Preindication_SBD_location_valid = kcg_true;
  outC->_L29.RSM_start_location_EBD_valid = kcg_true;
  outC->_L29.RSM_start_location_SBD_valid = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L37 = kcg_lit_int32(0);
  outC->FLOI_eq_SBI1 = kcg_true;
  outC->FLOI_eq_SBI2 = kcg_true;
  outC->revokationConds.r0 = kcg_true;
  outC->revokationConds.r1 = kcg_true;
  outC->revokationConds.r2 = kcg_true;
  outC->revokationConds.r3 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcRevokCondForTSM_EOA_SvL_reset_SDM_Commands_Pkg(
  outC_CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcRevokCondForTSM_EOA_SvL_SDM_Commands_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

