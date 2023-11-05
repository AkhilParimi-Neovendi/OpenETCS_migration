/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet1/ */
void Build_Packet1_ProvidePositionReport_Pkg(
  /* packet0/ */
  Position_Report_TrainToTrack *packet0,
  /* prvDirTrain/ */
  Q_DIRTRAIN prvDirTrain,
  /* trainPos/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC)
{
  /* in_dirtrain/ */
  static Q_DIRTRAIN in_dirtrain_partial;
  /* in_dlrbg/ */
  static Q_DLRBG in_dlrbg_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG in_dirlrbg_partial;
  /* in_dirtrain/ */
  static Q_DIRTRAIN _1_in_dirtrain_partial;
  /* in_dlrbg/ */
  static Q_DLRBG _2_in_dlrbg_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG _3_in_dirlrbg_partial;
  /* in_dirtrain/ */
  static Q_DIRTRAIN _4_in_dirtrain_partial;
  /* in_dlrbg/ */
  static Q_DLRBG _5_in_dlrbg_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG _6_in_dirlrbg_partial;
  /* in_dirtrain/ */
  static Q_DIRTRAIN _7_in_dirtrain_partial;
  /* in_dlrbg/ */
  static Q_DLRBG _8_in_dlrbg_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG _9_in_dirlrbg_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG _10_in_dirlrbg_partial;
  /* in_dlrbg/ */
  static Q_DLRBG _11_in_dlrbg_partial;
  /* in_dirtrain/ */
  static Q_DIRTRAIN _12_in_dirtrain_partial;
  /* in_dirlrbg/ */
  static Q_DIRLRBG _13_in_dirlrbg_partial;
  /* in_dlrbg/ */
  static Q_DLRBG _14_in_dlrbg_partial;
  /* in_dirtrain/ */
  static Q_DIRTRAIN _15_in_dirtrain_partial;
  static Q_DLRBG noname;
  static Q_DIRTRAIN _16_noname;
  static Q_DIRLRBG _17_noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L35, trainPos);
  outC->_L42 = outC->_L35.trainOrientationToLRBG;
  outC->_L41 = kcg_true;
  kcg_copy_Position_Report_TrainToTrack(&outC->_L39, packet0);
  outC->_L14 = outC->_L39.NID_PACKET;
  outC->_L15 = outC->_L39.L_PACKET;
  outC->_L16 = outC->_L39.qscale;
  outC->_L17 = outC->_L39.NID_LRBG;
  outC->_L12 = prvDirTrain;
  /* _L3=(ProvidePositionReport_Pkg::op_cond_3_4_2_3_3#1)/ */
  op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
    &outC->_L39,
    &outC->_L35,
    outC->_L12,
    &outC->Context_op_cond_3_4_2_3_3_1);
  outC->_L3 = outC->Context_op_cond_3_4_2_3_3_1.nidPrvLrbg;
  outC->_L4 = outC->Context_op_cond_3_4_2_3_3_1.cond_3_4_2_3_3_2;
  outC->_L5 = outC->Context_op_cond_3_4_2_3_3_1.cond_3_4_2_3_3_3;
  outC->_L6 = outC->Context_op_cond_3_4_2_3_3_1.cond_3_4_2_3_3_4;
  outC->_L18 = outC->_L39.D_LRBG;
  outC->dirLRBG = outC->_L42;
  outC->cond_3_4_2_3_3_2 = outC->_L4;
  outC->IfBlock1_clock = (outC->cond_3_4_2_3_3_2 == kcg_true) &
    (outC->dirLRBG == Q_DIRLRBG_Reverse);
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->else_clock_IfBlock1 = (outC->cond_3_4_2_3_3_2 == kcg_true) &
      (outC->dirLRBG == Q_DIRLRBG_Nominal);
  }
  outC->cond_3_4_2_3_3_4 = outC->_L6;
  outC->cond_3_4_2_3_3_3 = outC->_L5;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L3_then_IfBlock1 = Q_DIRLRBG_Reverse;
    in_dirlrbg_partial = outC->_L3_then_IfBlock1;
    outC->in_dirlrbg = in_dirlrbg_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = Q_DIRLRBG_Nominal;
      _13_in_dirlrbg_partial = outC->_L1_then_else_IfBlock1;
      _3_in_dirlrbg_partial = _13_in_dirlrbg_partial;
    }
    else {
      outC->else_clock_else_IfBlock1 = ((outC->cond_3_4_2_3_3_2 == kcg_true) &
          (outC->dirLRBG == Q_DIRLRBG_Unknown)) | (outC->cond_3_4_2_3_3_3 ==
          kcg_true) | (outC->cond_3_4_2_3_3_4 == kcg_true);
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L2_then_else_else_IfBlock1 = Q_DIRLRBG_Unknown;
        _6_in_dirlrbg_partial = outC->_L2_then_else_else_IfBlock1;
        _10_in_dirlrbg_partial = _6_in_dirlrbg_partial;
      }
      else {
        _9_in_dirlrbg_partial = Q_DIRLRBG_Unknown;
        _10_in_dirlrbg_partial = _9_in_dirlrbg_partial;
      }
      _3_in_dirlrbg_partial = _10_in_dirlrbg_partial;
    }
    outC->in_dirlrbg = _3_in_dirlrbg_partial;
  }
  outC->_L1 = outC->in_dirlrbg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L2_then_IfBlock1 = Q_DLRBG_Reverse;
    in_dlrbg_partial = outC->_L2_then_IfBlock1;
    outC->in_dlrbg = in_dlrbg_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L3_then_else_IfBlock1 = Q_DLRBG_Nominal;
      _14_in_dlrbg_partial = outC->_L3_then_else_IfBlock1;
      _2_in_dlrbg_partial = _14_in_dlrbg_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L1_then_else_else_IfBlock1 = Q_DLRBG_Unknown;
        _5_in_dlrbg_partial = outC->_L1_then_else_else_IfBlock1;
        _11_in_dlrbg_partial = _5_in_dlrbg_partial;
      }
      else {
        _8_in_dlrbg_partial = Q_DLRBG_Unknown;
        _11_in_dlrbg_partial = _8_in_dlrbg_partial;
      }
      _2_in_dlrbg_partial = _11_in_dlrbg_partial;
    }
    outC->in_dlrbg = _2_in_dlrbg_partial;
  }
  outC->_L7 = outC->in_dlrbg;
  outC->_L21 = outC->_L39.L_DOUBTOVER;
  outC->_L22 = outC->_L39.L_DOUBTUNDER;
  outC->_L23 = outC->_L39.length;
  outC->_L24 = outC->_L39.L_TRAININT;
  outC->_L25 = outC->_L39.V_TRAIN;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = Q_DIRTRAIN_Reverse;
    in_dirtrain_partial = outC->_L1_then_IfBlock1;
    outC->in_dirtrain = in_dirtrain_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = Q_DIRTRAIN_Nominal;
      _15_in_dirtrain_partial = outC->_L2_then_else_IfBlock1;
      _1_in_dirtrain_partial = _15_in_dirtrain_partial;
    }
    else {
      /* IfBlock1:else:else: */
      if (outC->else_clock_else_IfBlock1) {
        outC->_L3_then_else_else_IfBlock1 = Q_DIRTRAIN_Unknown;
        _4_in_dirtrain_partial = outC->_L3_then_else_else_IfBlock1;
        _12_in_dirtrain_partial = _4_in_dirtrain_partial;
      }
      else {
        _7_in_dirtrain_partial = Q_DIRTRAIN_Unknown;
        _12_in_dirtrain_partial = _7_in_dirtrain_partial;
      }
      _1_in_dirtrain_partial = _12_in_dirtrain_partial;
    }
    outC->in_dirtrain = _1_in_dirtrain_partial;
  }
  outC->_L33 = outC->in_dirtrain;
  outC->_L27 = outC->_L39.mode;
  outC->_L28 = outC->_L39.level;
  outC->_L29 = outC->_L39.NID_NTC;
  outC->_L34.NID_PACKET = outC->_L14;
  outC->_L34.L_PACKET = outC->_L15;
  outC->_L34.qscale = outC->_L16;
  outC->_L34.NID_LRBG = outC->_L17;
  outC->_L34.NID_PRVLRBG = outC->_L3;
  outC->_L34.D_LRBG = outC->_L18;
  outC->_L34.dirlrbg = outC->_L1;
  outC->_L34.dlrbg = outC->_L7;
  outC->_L34.L_DOUBTOVER = outC->_L21;
  outC->_L34.L_DOUBTUNDER = outC->_L22;
  outC->_L34.length = outC->_L23;
  outC->_L34.L_TRAININT = outC->_L24;
  outC->_L34.V_TRAIN = outC->_L25;
  outC->_L34.dirtrain = outC->_L33;
  outC->_L34.mode = outC->_L27;
  outC->_L34.level = outC->_L28;
  outC->_L34.NID_NTC = outC->_L29;
  outC->_L40.valid = outC->_L41;
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &outC->_L40.packet1,
    &outC->_L34);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L40);
  outC->_L19 = outC->_L39.dirlrbg;
  _17_noname = outC->_L19;
  outC->_L26 = outC->_L39.dirtrain;
  _16_noname = outC->_L26;
  outC->_L20 = outC->_L39.dlrbg;
  noname = outC->_L20;
}

#ifndef KCG_USER_DEFINED_INIT
void Build_Packet1_init_ProvidePositionReport_Pkg(
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L42 = Q_DIRLRBG_Reverse;
  outC->_L41 = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->_L40.packet1.L_PACKET = kcg_lit_int32(0);
  outC->_L40.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L40.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->_L40.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L40.packet1.D_LRBG = kcg_lit_int32(0);
  outC->_L40.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L40.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L40.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L40.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L40.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L40.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->_L40.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->_L40.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L40.packet1.mode = M_MODE_Full_Supervision;
  outC->_L40.packet1.level = M_LEVEL_Level_0;
  outC->_L40.packet1.NID_NTC = kcg_lit_int32(0);
  outC->_L39.NID_PACKET = kcg_lit_int32(0);
  outC->_L39.L_PACKET = kcg_lit_int32(0);
  outC->_L39.qscale = Q_SCALE_10_cm_scale;
  outC->_L39.NID_LRBG = kcg_lit_int32(0);
  outC->_L39.D_LRBG = kcg_lit_int32(0);
  outC->_L39.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L39.dlrbg = Q_DLRBG_Reverse;
  outC->_L39.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L39.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L39.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L39.L_TRAININT = kcg_lit_int32(0);
  outC->_L39.V_TRAIN = kcg_lit_int32(0);
  outC->_L39.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L39.mode = M_MODE_Full_Supervision;
  outC->_L39.level = M_LEVEL_Level_0;
  outC->_L39.NID_NTC = kcg_lit_int32(0);
  outC->_L1 = Q_DIRLRBG_Reverse;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L7 = Q_DLRBG_Reverse;
  outC->_L12 = Q_DIRTRAIN_Reverse;
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = M_LEVEL_Level_0;
  outC->_L27 = M_MODE_Full_Supervision;
  outC->_L26 = Q_DIRTRAIN_Reverse;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = Q_LENGTH_No_train_integrity_information_available;
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L20 = Q_DLRBG_Reverse;
  outC->_L19 = Q_DIRLRBG_Reverse;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = Q_SCALE_10_cm_scale;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_lit_int32(0);
  outC->_L33 = Q_DIRTRAIN_Reverse;
  outC->_L34.NID_PACKET = kcg_lit_int32(0);
  outC->_L34.L_PACKET = kcg_lit_int32(0);
  outC->_L34.qscale = Q_SCALE_10_cm_scale;
  outC->_L34.NID_LRBG = kcg_lit_int32(0);
  outC->_L34.NID_PRVLRBG = kcg_lit_int32(0);
  outC->_L34.D_LRBG = kcg_lit_int32(0);
  outC->_L34.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L34.dlrbg = Q_DLRBG_Reverse;
  outC->_L34.L_DOUBTOVER = kcg_lit_int32(0);
  outC->_L34.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->_L34.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L34.L_TRAININT = kcg_lit_int32(0);
  outC->_L34.V_TRAIN = kcg_lit_int32(0);
  outC->_L34.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L34.mode = M_MODE_Full_Supervision;
  outC->_L34.level = M_LEVEL_Level_0;
  outC->_L34.NID_NTC = kcg_lit_int32(0);
  outC->_L35.valid = kcg_true;
  outC->_L35.timestamp = kcg_lit_int32(0);
  outC->_L35.trainPositionIsUnknown = kcg_true;
  outC->_L35.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L35.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L35.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L35.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L35.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L35.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L35.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L35.LRBG.valid = kcg_true;
  outC->_L35.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L35.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L35.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L35.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L35.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L35.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L35.LRBG.missed = kcg_true;
  outC->_L35.prvLRBG.valid = kcg_true;
  outC->_L35.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L35.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L35.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L35.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L35.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L35.prvLRBG.missed = kcg_true;
  outC->_L35.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L35.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L35.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L35.linkingIsUsedOnboard = kcg_true;
  outC->_L35.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L35.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L35.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->cond_3_4_2_3_3_2 = kcg_true;
  outC->cond_3_4_2_3_3_3 = kcg_true;
  outC->cond_3_4_2_3_3_4 = kcg_true;
  outC->in_dirlrbg = Q_DIRLRBG_Reverse;
  outC->dirLRBG = Q_DIRLRBG_Reverse;
  outC->in_dlrbg = Q_DLRBG_Reverse;
  outC->in_dirtrain = Q_DIRTRAIN_Reverse;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L2_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L3_then_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->else_clock_else_IfBlock1 = kcg_true;
  outC->_L3_then_else_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L2_then_else_else_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L1_then_else_else_IfBlock1 = Q_DLRBG_Reverse;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock1 = Q_DLRBG_Reverse;
  outC->_L1_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.L_PACKET = kcg_lit_int32(0);
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.NID_PRVLRBG = kcg_lit_int32(0);
  outC->packet1.packet1.D_LRBG = kcg_lit_int32(0);
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = kcg_lit_int32(0);
  outC->packet1.packet1.L_DOUBTUNDER = kcg_lit_int32(0);
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = kcg_lit_int32(0);
  outC->packet1.packet1.V_TRAIN = kcg_lit_int32(0);
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = kcg_lit_int32(0);
  /* _L3=(ProvidePositionReport_Pkg::op_cond_3_4_2_3_3#1)/ */
  op_cond_3_4_2_3_3_init_ProvidePositionReport_Pkg(
    &outC->Context_op_cond_3_4_2_3_3_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packet1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet1_ProvidePositionReport_Pkg *outC)
{
  /* _L3=(ProvidePositionReport_Pkg::op_cond_3_4_2_3_3#1)/ */
  op_cond_3_4_2_3_3_reset_ProvidePositionReport_Pkg(
    &outC->Context_op_cond_3_4_2_3_3_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Build_Packet1_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

