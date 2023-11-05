/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDM_Commands_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::SDM_Commands/ */
void SDM_Commands_SDM_Commands_Pkg(
  /* allTargets/ */
  TargetCollection_T_TargetManagement_types *allTargets,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  /* MLrequestSB/ */
  kcg_bool MLrequestSB,
  /* MLrequestEB/ */
  kcg_bool MLrequestEB,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TrainData_int/ */
  trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  kcg_copy_TargetCollection_T_TargetManagement_types(&outC->_L12, allTargets);
  outC->_L73 = outC->_L12.updatedTargetList;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L14, speeds);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L15, locations);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L28, mrdt);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L74, trainLocations);
  outC->_L99 = floiIsSB1;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L236, TrainData_int);
  /* _L11=(SDM_Commands_Pkg::CmdTrainSupervisionStatus#1)/ */
  CmdTrainSupervisionStatus_SDM_Commands_Pkg(
    outC->_L73,
    &outC->_L14,
    &outC->_L15,
    &outC->_L28,
    &outC->_L74,
    outC->_L99,
    &outC->_L236,
    &outC->Context_CmdTrainSupervisionStatus_1);
  outC->_L11 = outC->Context_CmdTrainSupervisionStatus_1.supVisStatus;
  outC->_L7 = outC->Context_CmdTrainSupervisionStatus_1.sdmType;
  outC->_L6 = outC->Context_CmdTrainSupervisionStatus_1.revokedSupervisionStatus;
  outC->_L5 =
    outC->Context_CmdTrainSupervisionStatus_1.triggeredSupervisionStatus;
  outC->_L1 = outC->Context_CmdTrainSupervisionStatus_1.revokedSB;
  outC->_L4 = outC->Context_CmdTrainSupervisionStatus_1.triggeredSB;
  outC->_L2 = outC->Context_CmdTrainSupervisionStatus_1.revokedEB;
  outC->_L3 = outC->Context_CmdTrainSupervisionStatus_1.triggeredEB;
  outC->_L9 = outC->Context_CmdTrainSupervisionStatus_1.revokedTCO;
  outC->_L8 = outC->Context_CmdTrainSupervisionStatus_1.triggeredTCO;
  outC->_L10 = outC->Context_CmdTrainSupervisionStatus_1.ebCmd;
  outC->_L221 = MLrequestEB;
  /* _L242=(SDM_Commands_Pkg::MergeMLRequests#4)/ */
  MergeMLRequests_SDM_Commands_Pkg(
    outC->_L2,
    outC->_L221,
    outC->_L3,
    &outC->Context_MergeMLRequests_4);
  outC->_L242 = outC->Context_MergeMLRequests_4.revoked;
  outC->_L243 = outC->Context_MergeMLRequests_4.triggered;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L238, trainLocations);
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L235, speeds);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&outC->_L230, NationalValues);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&outC->_L229, TrainData_int);
  outC->_L64 = kcg_true;
  /* _L72=(SDM_Commands_Pkg::CalcDriverOutput#1)/ */
  CalcDriverOutput_SDM_Commands_Pkg(
    outC->_L7,
    outC->_L11,
    &outC->_L28,
    &outC->_L14,
    &outC->_L15,
    &outC->Context_CalcDriverOutput_1);
  outC->_L72 = outC->Context_CalcDriverOutput_1.v_est;
  outC->_L22 = outC->Context_CalcDriverOutput_1.valid_v_est;
  outC->_L71 = outC->Context_CalcDriverOutput_1.v_permitted;
  outC->_L23 = outC->Context_CalcDriverOutput_1.valid_v_permitted;
  outC->_L70 = outC->Context_CalcDriverOutput_1.v_release;
  outC->_L25 = outC->Context_CalcDriverOutput_1.valid_v_release;
  outC->_L69 = outC->Context_CalcDriverOutput_1.v_mrdt;
  outC->_L26 = outC->Context_CalcDriverOutput_1.valid_v_mrdt;
  outC->_L68 = outC->Context_CalcDriverOutput_1.v_floi;
  outC->_L24 = outC->Context_CalcDriverOutput_1.valid_v_floi;
  outC->_L67 = outC->Context_CalcDriverOutput_1.targetDistance;
  outC->_L27 = outC->Context_CalcDriverOutput_1.valid_targetDistance;
  outC->_L220 = MLrequestSB;
  /* _L224=(SDM_Commands_Pkg::MergeMLRequests#2)/ */
  MergeMLRequests_SDM_Commands_Pkg(
    outC->_L1,
    outC->_L220,
    outC->_L4,
    &outC->Context_MergeMLRequests_2);
  outC->_L224 = outC->Context_MergeMLRequests_2.revoked;
  outC->_L223 = outC->Context_MergeMLRequests_2.triggered;
  outC->_L63.valid = outC->_L64;
  outC->_L63.estimatedSpeed = outC->_L72;
  outC->_L63.valid_v_est = outC->_L22;
  outC->_L63.permittedSpeed = outC->_L71;
  outC->_L63.valid_v_permitted = outC->_L23;
  outC->_L63.releaseSpeed = outC->_L70;
  outC->_L63.valid_v_release = outC->_L25;
  outC->_L63.mrdtSpeed = outC->_L69;
  outC->_L63.valid_v_mrdt = outC->_L26;
  outC->_L63.sbiSpeed = outC->_L68;
  outC->_L63.valid_v_sbi = outC->_L24;
  outC->_L63.targetDistance = outC->_L67;
  outC->_L63.valid_targetDistance = outC->_L27;
  outC->_L63.supervisionStatus = outC->_L11;
  outC->_L63.sdmType = outC->_L7;
  outC->_L63.revokedSupervisionStatus = outC->_L6;
  outC->_L63.triggeredSupervisionStatus = outC->_L5;
  outC->_L63.revokedSB = outC->_L224;
  outC->_L63.triggeredSB = outC->_L223;
  outC->_L63.revokedEB = outC->_L242;
  outC->_L63.triggeredEB = outC->_L243;
  outC->_L63.revokedTCO = outC->_L9;
  outC->_L63.triggeredTCO = outC->_L8;
  outC->_L63.ebCmd = outC->_L10;
  /* _L227=(SDM_Commands_Pkg::CalcBrakeCmd#1)/ */
  CalcBrakeCmd_SDM_Commands_Pkg(
    &outC->_L63,
    &outC->_L235,
    &outC->_L230,
    &outC->_L229,
    &outC->Context_CalcBrakeCmd_1);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->_L227,
    &outC->Context_CalcBrakeCmd_1.brakeCmd);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &outC->_L227);
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L226, locations);
  /* _L225=(SDM_Commands_Pkg::CalcDMI_output#1)/ */
  CalcDMI_output_SDM_Commands_Pkg(
    &outC->_L63,
    &outC->_L226,
    &outC->_L238,
    &outC->Context_CalcDMI_output_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->_L225,
    &outC->Context_CalcDMI_output_1.sdmToDMI);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &outC->_L225);
  /* _L97=(SDM_Commands_Pkg::CalcModeTransOutput)/ */
  CalcModeTransOutput_SDM_Commands_Pkg(
    &outC->_L74,
    &outC->_L15,
    &outC->_L14,
    &outC->_L236,
    &outC->Context_CalcModeTransOutput);
  outC->_L97 = outC->Context_CalcModeTransOutput.eoaOverpassed;
  outC->_L98 = outC->Context_CalcModeTransOutput.targetSpeedReached;
  outC->eoaOverpassed = outC->_L97;
  outC->targetSpeedReached = outC->_L98;
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->sdmCmd, &outC->_L63);
}

#ifndef KCG_USER_DEFINED_INIT
void SDM_Commands_init_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;

  outC->_L243 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L238.valid = kcg_true;
  outC->_L238.timestamp = kcg_lit_int32(0);
  outC->_L238.trainPositionIsUnknown = kcg_true;
  outC->_L238.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L238.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L238.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L238.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L238.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L238.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L238.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L238.LRBG.valid = kcg_true;
  outC->_L238.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L238.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L238.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L238.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L238.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L238.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L238.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L238.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L238.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L238.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L238.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L238.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L238.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L238.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L238.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L238.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L238.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L238.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L238.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L238.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L238.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L238.LRBG.missed = kcg_true;
  outC->_L238.prvLRBG.valid = kcg_true;
  outC->_L238.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L238.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L238.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L238.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L238.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L238.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L238.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L238.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L238.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L238.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L238.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L238.prvLRBG.missed = kcg_true;
  outC->_L238.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L238.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L238.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L238.linkingIsUsedOnboard = kcg_true;
  outC->_L238.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L238.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L238.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L236.isSB_FBAvailable = kcg_true;
  outC->_L236.isSB_CmdAvailable = kcg_true;
  outC->_L236.isTCOAvailable = kcg_true;
  outC->_L236.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L236.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L236.T_b_limit = kcg_lit_int32(0);
  outC->_L235.V_est = kcg_lit_int32(0);
  outC->_L235.V_MRSP = kcg_lit_int32(0);
  outC->_L235.V_release = kcg_lit_int32(0);
  outC->_L235.V_target = kcg_lit_int32(0);
  outC->_L235.v_p_mrdt = kcg_lit_int32(0);
  outC->_L235.v_p_dmi = kcg_lit_int32(0);
  outC->_L235.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L235.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L235.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L235.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L235.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L235.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L235.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L235.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L235.OdoStandStill = kcg_true;
  outC->_L229.isSB_FBAvailable = kcg_true;
  outC->_L229.isSB_CmdAvailable = kcg_true;
  outC->_L229.isTCOAvailable = kcg_true;
  outC->_L229.T_traction_cut_off = kcg_lit_int32(0);
  outC->_L229.offsetAntennaL1 = kcg_lit_int32(0);
  outC->_L229.T_b_limit = kcg_lit_int32(0);
  outC->_L230.valid = kcg_true;
  outC->_L230.q_dir = Q_DIR_Reverse;
  outC->_L230.d_validnv = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L230.nid_cArray[idx2].valid = kcg_true;
    outC->_L230.nid_cArray[idx2].nid_c = kcg_lit_int32(0);
  }
  outC->_L230.v_nvshunt = kcg_lit_int32(0);
  outC->_L230.v_nvstff = kcg_lit_int32(0);
  outC->_L230.v_nvonsight = kcg_lit_int32(0);
  outC->_L230.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L230.v_nvunfit = kcg_lit_int32(0);
  outC->_L230.v_nvrel = kcg_lit_int32(0);
  outC->_L230.d_nvroll = kcg_lit_int32(0);
  outC->_L230.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L230.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L230.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L230.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L230.q_nvinhsmicperm = Q_NVINHSMICPERM_No;
  outC->_L230.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L230.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L230.d_nvovtrp = kcg_lit_int32(0);
  outC->_L230.t_nvovtrp = kcg_lit_int32(0);
  outC->_L230.d_nvpotrp = kcg_lit_int32(0);
  outC->_L230.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L230.t_nvcontact = kcg_lit_int32(0);
  outC->_L230.m_nvderun = M_NVDERUN_No;
  outC->_L230.d_nvstff = kcg_lit_int32(0);
  outC->_L230.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L230.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L230.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L230.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L230.q_nvlocacc = kcg_lit_int32(0);
  outC->_L230.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L230.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L230.q_nvkint = Q_NVKINT_No_integrated_correction_factors_follow;
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L230.nvkvintsetArray[idx4].valid = kcg_true;
    outC->_L230.nvkvintsetArray[idx4].q_nvkvintset = Q_NVKVINTSET_Freight_trains;
    outC->_L230.nvkvintsetArray[idx4].a_nvp12 = kcg_lit_float32(0.0);
    outC->_L230.nvkvintsetArray[idx4].a_nvp23 = kcg_lit_float32(0.0);
    for (idx3 = 0; idx3 < 7; idx3++) {
      outC->_L230.nvkvintsetArray[idx4].nvkintArray[idx3].valid = kcg_true;
      outC->_L230.nvkvintsetArray[idx4].nvkintArray[idx3].v_nvkvint =
        kcg_lit_int32(0);
      outC->_L230.nvkvintsetArray[idx4].nvkintArray[idx3].m_nvkvint12 =
        kcg_lit_float32(0.0);
      outC->_L230.nvkvintsetArray[idx4].nvkintArray[idx3].m_nvkvint23 =
        kcg_lit_float32(0.0);
    }
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L230.nvkrintArray[idx5].valid = kcg_true;
    outC->_L230.nvkrintArray[idx5].l_nvkrint = L_NVKRINT_0m;
    outC->_L230.nvkrintArray[idx5].m_nvkrint = kcg_lit_float32(0.0);
  }
  outC->_L230.m_nvktint = kcg_lit_float32(0.0);
  outC->_L227.valid = kcg_true;
  outC->_L227.m_servicebrake_cm = brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L227.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->_L226.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L226.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L226.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L226.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L226.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L226.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L226.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L226.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L226.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L226.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L226.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L226.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L226.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L226.d_target = kcg_lit_int32(0);
  outC->_L226.d_eoa = kcg_lit_int32(0);
  outC->_L226.d_svl = kcg_lit_int32(0);
  outC->_L226.Preindication_EBD_location_valid = kcg_true;
  outC->_L226.Preindication_SBD_location_valid = kcg_true;
  outC->_L226.RSM_start_location_EBD_valid = kcg_true;
  outC->_L226.RSM_start_location_SBD_valid = kcg_true;
  outC->_L225.valid = kcg_true;
  outC->_L225.targetSpeed = kcg_lit_int32(0);
  outC->_L225.permittedSpeed = kcg_lit_int32(0);
  outC->_L225.releaseSpeed = kcg_lit_int32(0);
  outC->_L225.locationBrakeTarget = kcg_lit_int32(0);
  outC->_L225.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->_L225.interventionSpeed = kcg_lit_int32(0);
  outC->_L225.sup_status = CSM_DMI_Types_Pkg;
  outC->_L225.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->_L225.distanceIndicationPoint = kcg_lit_int32(0);
  outC->_L223 = kcg_true;
  outC->_L224 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L99 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L98 = kcg_true;
  outC->_L74.valid = kcg_true;
  outC->_L74.timestamp = kcg_lit_int32(0);
  outC->_L74.trainPositionIsUnknown = kcg_true;
  outC->_L74.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L74.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L74.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L74.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L74.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L74.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L74.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L74.LRBG.valid = kcg_true;
  outC->_L74.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L74.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L74.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L74.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L74.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L74.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L74.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].valid = kcg_true;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].nid_LRBG = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].d_link = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].nid_c = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].nid_bg = kcg_lit_int32(0);
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.LRBG.infoFromPassing.linkedBGs[idx6].q_locacc = kcg_lit_int32(0);
  }
  outC->_L74.LRBG.missed = kcg_true;
  outC->_L74.prvLRBG.valid = kcg_true;
  outC->_L74.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L74.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L74.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L74.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_LRBG = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_dir = Q_DIR_Reverse;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].d_link = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_c = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].nid_bg = kcg_lit_int32(0);
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L74.prvLRBG.infoFromPassing.linkedBGs[idx7].q_locacc = kcg_lit_int32(0);
  }
  outC->_L74.prvLRBG.missed = kcg_true;
  outC->_L74.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L74.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L74.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L74.linkingIsUsedOnboard = kcg_true;
  outC->_L74.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L74.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L74.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  outC->_L68 = kcg_lit_int32(0);
  outC->_L67 = kcg_lit_int32(0);
  outC->_L64 = kcg_true;
  outC->_L63.valid = kcg_true;
  outC->_L63.estimatedSpeed = kcg_lit_int32(0);
  outC->_L63.valid_v_est = kcg_true;
  outC->_L63.permittedSpeed = kcg_lit_int32(0);
  outC->_L63.valid_v_permitted = kcg_true;
  outC->_L63.releaseSpeed = kcg_lit_int32(0);
  outC->_L63.valid_v_release = kcg_true;
  outC->_L63.mrdtSpeed = kcg_lit_int32(0);
  outC->_L63.valid_v_mrdt = kcg_true;
  outC->_L63.sbiSpeed = kcg_lit_int32(0);
  outC->_L63.valid_v_sbi = kcg_true;
  outC->_L63.targetDistance = kcg_lit_int32(0);
  outC->_L63.valid_targetDistance = kcg_true;
  outC->_L63.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L63.sdmType = CSM_SDM_Types_Pkg;
  outC->_L63.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L63.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->_L63.revokedSB = kcg_true;
  outC->_L63.triggeredSB = kcg_true;
  outC->_L63.revokedEB = kcg_true;
  outC->_L63.triggeredEB = kcg_true;
  outC->_L63.revokedTCO = kcg_true;
  outC->_L63.triggeredTCO = kcg_true;
  outC->_L63.ebCmd = kcg_true;
  outC->_L28.targetType = EoA_TargetManagement_types;
  outC->_L28.distance = kcg_lit_int32(0);
  outC->_L28.speed = kcg_lit_int32(0);
  outC->_L28.valid = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L15.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L15.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L15.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L15.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L15.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L15.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L15.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L15.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L15.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L15.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L15.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L15.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L15.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L15.d_target = kcg_lit_int32(0);
  outC->_L15.d_eoa = kcg_lit_int32(0);
  outC->_L15.d_svl = kcg_lit_int32(0);
  outC->_L15.Preindication_EBD_location_valid = kcg_true;
  outC->_L15.Preindication_SBD_location_valid = kcg_true;
  outC->_L15.RSM_start_location_EBD_valid = kcg_true;
  outC->_L15.RSM_start_location_SBD_valid = kcg_true;
  outC->_L14.V_est = kcg_lit_int32(0);
  outC->_L14.V_MRSP = kcg_lit_int32(0);
  outC->_L14.V_release = kcg_lit_int32(0);
  outC->_L14.V_target = kcg_lit_int32(0);
  outC->_L14.v_p_mrdt = kcg_lit_int32(0);
  outC->_L14.v_p_dmi = kcg_lit_int32(0);
  outC->_L14.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L14.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L14.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L14.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L14.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L14.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L14.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L14.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L14.OdoStandStill = kcg_true;
  outC->_L12.updatedTargetList = kcg_true;
  for (idx8 = 0; idx8 < 110; idx8++) {
    outC->_L12.MRSP_targetList[idx8].targetType = EoA_TargetManagement_types;
    outC->_L12.MRSP_targetList[idx8].distance = kcg_lit_float32(0.0);
    outC->_L12.MRSP_targetList[idx8].speed = kcg_lit_float32(0.0);
  }
  outC->_L12.EOA_target.targetType = EoA_TargetManagement_types;
  outC->_L12.EOA_target.distance = kcg_lit_float32(0.0);
  outC->_L12.EOA_target.speed = kcg_lit_float32(0.0);
  outC->_L12.SvL_LoA_target.targetType = EoA_TargetManagement_types;
  outC->_L12.SvL_LoA_target.distance = kcg_lit_float32(0.0);
  outC->_L12.SvL_LoA_target.speed = kcg_lit_float32(0.0);
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L6 = Normal_Supervision_SDM_Types_Pkg;
  outC->_L7 = CSM_SDM_Types_Pkg;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = Normal_Supervision_SDM_Types_Pkg;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->eoaOverpassed = kcg_true;
  outC->targetSpeedReached = kcg_true;
  outC->sdmCmd.valid = kcg_true;
  outC->sdmCmd.estimatedSpeed = kcg_lit_int32(0);
  outC->sdmCmd.valid_v_est = kcg_true;
  outC->sdmCmd.permittedSpeed = kcg_lit_int32(0);
  outC->sdmCmd.valid_v_permitted = kcg_true;
  outC->sdmCmd.releaseSpeed = kcg_lit_int32(0);
  outC->sdmCmd.valid_v_release = kcg_true;
  outC->sdmCmd.mrdtSpeed = kcg_lit_int32(0);
  outC->sdmCmd.valid_v_mrdt = kcg_true;
  outC->sdmCmd.sbiSpeed = kcg_lit_int32(0);
  outC->sdmCmd.valid_v_sbi = kcg_true;
  outC->sdmCmd.targetDistance = kcg_lit_int32(0);
  outC->sdmCmd.valid_targetDistance = kcg_true;
  outC->sdmCmd.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCmd.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.triggeredSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCmd.revokedSB = kcg_true;
  outC->sdmCmd.triggeredSB = kcg_true;
  outC->sdmCmd.revokedEB = kcg_true;
  outC->sdmCmd.triggeredEB = kcg_true;
  outC->sdmCmd.revokedTCO = kcg_true;
  outC->sdmCmd.triggeredTCO = kcg_true;
  outC->sdmCmd.ebCmd = kcg_true;
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.permittedSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.releaseSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.locationBrakeTarget = kcg_lit_int32(0);
  outC->sdmToDMI.location_brake_curve_starting_point = kcg_lit_int32(0);
  outC->sdmToDMI.interventionSpeed = kcg_lit_int32(0);
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = kcg_lit_int32(0);
  /* _L97=(SDM_Commands_Pkg::CalcModeTransOutput)/ */
  CalcModeTransOutput_init_SDM_Commands_Pkg(&outC->Context_CalcModeTransOutput);
  /* _L225=(SDM_Commands_Pkg::CalcDMI_output#1)/ */
  CalcDMI_output_init_SDM_Commands_Pkg(&outC->Context_CalcDMI_output_1);
  /* _L227=(SDM_Commands_Pkg::CalcBrakeCmd#1)/ */
  CalcBrakeCmd_init_SDM_Commands_Pkg(&outC->Context_CalcBrakeCmd_1);
  /* _L224=(SDM_Commands_Pkg::MergeMLRequests#2)/ */
  MergeMLRequests_init_SDM_Commands_Pkg(&outC->Context_MergeMLRequests_2);
  /* _L72=(SDM_Commands_Pkg::CalcDriverOutput#1)/ */
  CalcDriverOutput_init_SDM_Commands_Pkg(&outC->Context_CalcDriverOutput_1);
  /* _L242=(SDM_Commands_Pkg::MergeMLRequests#4)/ */
  MergeMLRequests_init_SDM_Commands_Pkg(&outC->Context_MergeMLRequests_4);
  /* _L11=(SDM_Commands_Pkg::CmdTrainSupervisionStatus#1)/ */
  CmdTrainSupervisionStatus_init_SDM_Commands_Pkg(
    &outC->Context_CmdTrainSupervisionStatus_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SDM_Commands_reset_SDM_Commands_Pkg(
  outC_SDM_Commands_SDM_Commands_Pkg *outC)
{
  /* _L97=(SDM_Commands_Pkg::CalcModeTransOutput)/ */
  CalcModeTransOutput_reset_SDM_Commands_Pkg(
    &outC->Context_CalcModeTransOutput);
  /* _L225=(SDM_Commands_Pkg::CalcDMI_output#1)/ */
  CalcDMI_output_reset_SDM_Commands_Pkg(&outC->Context_CalcDMI_output_1);
  /* _L227=(SDM_Commands_Pkg::CalcBrakeCmd#1)/ */
  CalcBrakeCmd_reset_SDM_Commands_Pkg(&outC->Context_CalcBrakeCmd_1);
  /* _L224=(SDM_Commands_Pkg::MergeMLRequests#2)/ */
  MergeMLRequests_reset_SDM_Commands_Pkg(&outC->Context_MergeMLRequests_2);
  /* _L72=(SDM_Commands_Pkg::CalcDriverOutput#1)/ */
  CalcDriverOutput_reset_SDM_Commands_Pkg(&outC->Context_CalcDriverOutput_1);
  /* _L242=(SDM_Commands_Pkg::MergeMLRequests#4)/ */
  MergeMLRequests_reset_SDM_Commands_Pkg(&outC->Context_MergeMLRequests_4);
  /* _L11=(SDM_Commands_Pkg::CmdTrainSupervisionStatus#1)/ */
  CmdTrainSupervisionStatus_reset_SDM_Commands_Pkg(
    &outC->Context_CmdTrainSupervisionStatus_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SDM_Commands_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

