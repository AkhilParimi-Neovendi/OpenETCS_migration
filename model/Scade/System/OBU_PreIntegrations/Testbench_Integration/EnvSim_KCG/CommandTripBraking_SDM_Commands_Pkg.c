/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CommandTripBraking_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CommandTripBraking/ */
void CommandTripBraking_SDM_Commands_Pkg(
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CommandTripBraking_SDM_Commands_Pkg *outC)
{
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L41, locations);
  outC->_L43 = outC->_L41.d_svl;
  outC->I2_Min_1_int64 = outC->_L43;
  outC->_L22_Min_1_int64 = outC->I2_Min_1_int64;
  outC->_L42 = outC->_L41.d_eoa;
  outC->I1_Min_1_int64 = outC->_L42;
  outC->_L21_Min_1_int64 = outC->I1_Min_1_int64;
  outC->_L25_Min_1_int64 = outC->_L21_Min_1_int64 <= outC->_L22_Min_1_int64;
  /* @1/_L24= */
  if (outC->_L25_Min_1_int64) {
    outC->_L24_Min_1_int64 = outC->_L21_Min_1_int64;
  }
  else {
    outC->_L24_Min_1_int64 = outC->_L22_Min_1_int64;
  }
  outC->Mi_Output_Min_1_int64 = outC->_L24_Min_1_int64;
  outC->_L46 = kcg_lit_int64(0);
  outC->_L44 = outC->Mi_Output_Min_1_int64;
  outC->_L45 = outC->_L44 > outC->_L46;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L39, TrainData_int);
  outC->_L32 = outC->_L39.offsetAntennaL1;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L29, trainLocations);
  outC->_L30 = outC->_L29.minSafeFrontEndPosition;
  outC->_L10 = outC->_L30 - outC->_L32;
  outC->_L9 = outC->_L10 > outC->_L44;
  outC->_L27 = outC->_L9 & outC->_L45;
  outC->eb = outC->_L27;
}

#ifndef KCG_USER_DEFINED_INIT
void CommandTripBraking_init_SDM_Commands_Pkg(
  outC_CommandTripBraking_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L46 = kcg_lit_int64(0);
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_lit_int64(0);
  outC->_L43 = kcg_lit_int64(0);
  outC->_L42 = kcg_lit_int64(0);
  outC->_L41.SBD_preindication_location = kcg_lit_int64(0);
  outC->_L41.EBD_preindication_location = kcg_lit_int64(0);
  outC->_L41.EBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L41.SBD_RSM_start_location = kcg_lit_int64(0);
  outC->_L41.d_I_of_V_est = kcg_lit_int64(0);
  outC->_L41.d_I_of_V_MRSP = kcg_lit_int64(0);
  outC->_L41.d_P_of_V_est = kcg_lit_int64(0);
  outC->_L41.d_W_of_V_est = kcg_lit_int64(0);
  outC->_L41.d_FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L41.d_EBI_of_V_est = kcg_lit_int64(0);
  outC->_L41.FLOI_of_V_est = kcg_lit_int64(0);
  outC->_L41.SBI1_of_V_est = kcg_lit_int64(0);
  outC->_L41.SBI2_of_V_est = kcg_lit_int64(0);
  outC->_L41.d_target = kcg_lit_int64(0);
  outC->_L41.d_eoa = kcg_lit_int64(0);
  outC->_L41.d_svl = kcg_lit_int64(0);
  outC->_L41.Preindication_EBD_location_valid = kcg_true;
  outC->_L41.Preindication_SBD_location_valid = kcg_true;
  outC->_L41.RSM_start_location_EBD_valid = kcg_true;
  outC->_L41.RSM_start_location_SBD_valid = kcg_true;
  outC->_L39.isSB_FBAvailable = kcg_true;
  outC->_L39.isSB_CmdAvailable = kcg_true;
  outC->_L39.isTCOAvailable = kcg_true;
  outC->_L39.T_traction_cut_off = kcg_lit_int64(0);
  outC->_L39.offsetAntennaL1 = kcg_lit_int64(0);
  outC->_L39.T_b_limit = kcg_lit_int64(0);
  outC->_L32 = kcg_lit_int64(0);
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29.valid = kcg_true;
  outC->_L29.timestamp = kcg_lit_int64(0);
  outC->_L29.trainPositionIsUnknown = kcg_true;
  outC->_L29.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L29.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L29.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L29.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L29.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L29.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L29.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L29.LRBG.valid = kcg_true;
  outC->_L29.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L29.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L29.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L29.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L29.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L29.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L29.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L29.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L29.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L29.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L29.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L29.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L29.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L29.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L29.LRBG.missed = kcg_true;
  outC->_L29.prvLRBG.valid = kcg_true;
  outC->_L29.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L29.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L29.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L29.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L29.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L29.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L29.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L29.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L29.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L29.prvLRBG.missed = kcg_true;
  outC->_L29.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L29.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L29.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L29.linkingIsUsedOnboard = kcg_true;
  outC->_L29.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L29.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L29.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L27 = kcg_true;
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L21_Min_1_int64 = kcg_lit_int64(0);
  outC->_L22_Min_1_int64 = kcg_lit_int64(0);
  outC->_L24_Min_1_int64 = kcg_lit_int64(0);
  outC->_L25_Min_1_int64 = kcg_true;
  outC->I1_Min_1_int64 = kcg_lit_int64(0);
  outC->I2_Min_1_int64 = kcg_lit_int64(0);
  outC->Mi_Output_Min_1_int64 = kcg_lit_int64(0);
  outC->eb = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CommandTripBraking_reset_SDM_Commands_Pkg(
  outC_CommandTripBraking_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: SDM_Commands_Pkg::CommandTripBraking/
  @1: (math::Min#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CommandTripBraking_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

