/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_PosRepParam_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Supervise_PosRepParam/ */
void Supervise_PosRepParam_ProvidePositionReport_Pkg(
  /* posRepParam/ */
  P58_PositionReportParameters_T_Packet_Types_Pkg *posRepParam,
  /* present/ */
  kcg_bool present,
  /* systemTime/ */
  SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* posBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool op_call;

  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L1,
    posRepParam);
  outC->_L9 = outC->_L1.t_cycloc;
  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = outC->_L18 != outC->_L9;
  outC->every = outC->_L17;
  outC->_L2 = present;
  outC->_L3 = systemTime;
  if (outC->every) {
    /* _L11=(ProvidePositionReport_Pkg::Supervision_T_Cycloc#1)/ */
    Supervision_T_Cycloc_ProvidePositionReport_Pkg(
      outC->_L2,
      outC->_L9,
      outC->_L3,
      &outC->Context_Supervision_T_Cycloc_1);
    op_call = outC->Context_Supervision_T_Cycloc_1.trigger;
  }
  outC->_L16 = kcg_false;
  outC->_L15 = outC->_L1.m_loc;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L4, trainPos);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L5, posBGs);
  /* _L14=(ProvidePositionReport_Pkg::Supervision_M_Loc#1)/ */
  Supervision_M_Loc_ProvidePositionReport_Pkg(
    &outC->_L4,
    &outC->_L5,
    outC->_L15,
    outC->_L2,
    &outC->Context_Supervision_M_Loc_1);
  outC->_L14 = outC->Context_Supervision_M_Loc_1.trigger;
  outC->_L8 = outC->_L1.d_cycloc;
  /* _L13=(ProvidePositionReport_Pkg::Supervision_D_Cycloc#1)/ */
  Supervision_D_Cycloc_ProvidePositionReport_Pkg(
    outC->_L8,
    &outC->Context_Supervision_D_Cycloc_1);
  outC->_L13 = outC->Context_Supervision_D_Cycloc_1.trigger;
  outC->_L7 = outC->_L1.n_iter;
  kcg_copy_IterPacket58List_T_Packet_Types_Pkg(
    &outC->_L6,
    &outC->_L1.iterPacket58List);
  /* _L12=(ProvidePositionReport_Pkg::Supervision_N_Iter#1)/ */
  Supervision_N_Iter_ProvidePositionReport_Pkg(
    outC->_L7,
    &outC->_L6,
    &outC->Context_Supervision_N_Iter_1);
  outC->_L12 = outC->Context_Supervision_N_Iter_1.trigger;
  if (outC->every) {
    outC->_L11 = op_call;
  }
  else {
    outC->_L11 = outC->_L16;
  }
  outC->_L10 = outC->_L14 | outC->_L13 | outC->_L12 | outC->_L11;
  outC->trigger = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Supervise_PosRepParam_init_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L18 = kcg_lit_int64(0);
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = M_LOC_Now;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L6[idx].d_loc = kcg_lit_int64(0);
    outC->_L6[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int64(0);
  outC->_L1.q_dir = Q_DIR_Reverse;
  outC->_L1.l_packet = kcg_lit_int64(0);
  outC->_L1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.t_cycloc = kcg_lit_int64(0);
  outC->_L1.d_cycloc = kcg_lit_int64(0);
  outC->_L1.m_loc = M_LOC_Now;
  outC->_L1.n_iter = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L1.iterPacket58List[idx1].d_loc = kcg_lit_int64(0);
    outC->_L1.iterPacket58List[idx1].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.timestamp = kcg_lit_int64(0);
  outC->_L4.trainPositionIsUnknown = kcg_true;
  outC->_L4.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L4.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L4.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L4.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L4.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L4.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L4.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L4.LRBG.valid = kcg_true;
  outC->_L4.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L4.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L4.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L4.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L4.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L4.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L4.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L4.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L4.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L4.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L4.LRBG.missed = kcg_true;
  outC->_L4.prvLRBG.valid = kcg_true;
  outC->_L4.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L4.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L4.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L4.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L4.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L4.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L4.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L4.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L4.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L4.prvLRBG.missed = kcg_true;
  outC->_L4.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L4.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L4.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L4.linkingIsUsedOnboard = kcg_true;
  outC->_L4.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L4.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L4.maxSafeRearEndPosition = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 41; idx5++) {
    outC->_L5[idx5].valid = kcg_true;
    outC->_L5[idx5].nid_c = kcg_lit_int64(0);
    outC->_L5[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L5[idx5].q_link = Q_LINK_Unlinked;
    outC->_L5[idx5].location.nominal = kcg_lit_int64(0);
    outC->_L5[idx5].location.d_min = kcg_lit_int64(0);
    outC->_L5[idx5].location.d_max = kcg_lit_int64(0);
    outC->_L5[idx5].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.valid = kcg_true;
    outC->_L5[idx5].infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
    outC->_L5[idx5].infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L5[idx5].infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L5[idx5].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L5[idx5].infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L5[idx5].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L5[idx5].infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L5[idx5].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L5[idx5].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L5[idx5].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L5[idx5].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx4 = 0; idx4 < 33; idx4++) {
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].valid = kcg_true;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L5[idx5].infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
    }
    outC->_L5[idx5].missed = kcg_true;
  }
  outC->every = kcg_true;
  outC->trigger = kcg_true;
  /* _L12=(ProvidePositionReport_Pkg::Supervision_N_Iter#1)/ */
  Supervision_N_Iter_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_N_Iter_1);
  /* _L13=(ProvidePositionReport_Pkg::Supervision_D_Cycloc#1)/ */
  Supervision_D_Cycloc_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_D_Cycloc_1);
  /* _L14=(ProvidePositionReport_Pkg::Supervision_M_Loc#1)/ */
  Supervision_M_Loc_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_M_Loc_1);
  /* _L11=(ProvidePositionReport_Pkg::Supervision_T_Cycloc#1)/ */
  Supervision_T_Cycloc_init_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_T_Cycloc_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_PosRepParam_reset_ProvidePositionReport_Pkg(
  outC_Supervise_PosRepParam_ProvidePositionReport_Pkg *outC)
{
  /* _L12=(ProvidePositionReport_Pkg::Supervision_N_Iter#1)/ */
  Supervision_N_Iter_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_N_Iter_1);
  /* _L13=(ProvidePositionReport_Pkg::Supervision_D_Cycloc#1)/ */
  Supervision_D_Cycloc_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_D_Cycloc_1);
  /* _L14=(ProvidePositionReport_Pkg::Supervision_M_Loc#1)/ */
  Supervision_M_Loc_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_M_Loc_1);
  /* _L11=(ProvidePositionReport_Pkg::Supervision_T_Cycloc#1)/ */
  Supervision_T_Cycloc_reset_ProvidePositionReport_Pkg(
    &outC->Context_Supervision_T_Cycloc_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Supervise_PosRepParam_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

