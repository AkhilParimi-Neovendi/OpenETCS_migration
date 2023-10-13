/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Mode_Profile_Calculations_Librairies.h"

/* Librairies::Mode_Profile_Calculations/ */
void Mode_Profile_Calculations_Librairies(
  /* Selected_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Selected_Mode,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Profile_Mode/ */
  T_MA_Level_And_Mode_Types_Pkg Profile_Mode,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  outC_Mode_Profile_Calculations_Librairies *outC)
{
  /* Condition_Loc/ */
  static kcg_bool Condition_Loc_partial;
  /* Condition_Loc/ */
  static kcg_bool _1_Condition_Loc_partial;
  /* Condition_Loc/ */
  static kcg_bool _2_Condition_Loc_partial;
  /* Condition_Loc/ */
  static kcg_bool _3_Condition_Loc_partial;
  /* Condition_Loc/ */
  static kcg_bool _4_Condition_Loc_partial;
  /* Condition_Loc/ */
  static kcg_bool _5_Condition_Loc_partial;

  outC->_L66 = kcg_false;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L21, Train_Position);
  outC->_L25 = outC->_L21.estimatedFrontEndPosition;
  outC->Estimated_Front_End = outC->_L25;
  outC->_L57 = outC->Estimated_Front_End;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L37,
    Mode_Profile_On_Board);
  outC->_L42 = outC->_L37.Distance;
  outC->Loc_MP_Distance = outC->_L42;
  outC->_L58 = outC->Loc_MP_Distance;
  outC->_L38 = outC->_L37.Length_Ack;
  outC->Loc_MP_Length_Ack = outC->_L38;
  outC->_L59 = outC->Loc_MP_Length_Ack;
  /* _L35=(Librairies::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_Librairies(
    outC->_L57,
    outC->_L58,
    outC->_L59,
    &outC->Context_Position_In_Ack_Area_1);
  outC->_L35 = outC->Context_Position_In_Ack_Area_1.Position_In_Ack_Area;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L29, Train_Position);
  outC->_L30 = outC->_L29.valid;
  outC->Valid_Train_Position = outC->_L30;
  outC->_L45 = outC->Valid_Train_Position;
  outC->_L41 = outC->_L37.Mode;
  outC->Loc_MP_Mode = outC->_L41;
  outC->IfBlock2_clock = (outC->Loc_MP_Mode ==
      Profile_OS_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
      OS_Level_And_Mode_Types_Pkg);
  /* IfBlock2: */
  if (outC->IfBlock2_clock) {
    outC->_L1_then_IfBlock2 = kcg_true;
    Condition_Loc_partial = outC->_L1_then_IfBlock2;
    outC->Condition_Loc = Condition_Loc_partial;
  }
  else {
    outC->else_clock_IfBlock2 = (outC->Loc_MP_Mode ==
        Profile_LS_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
        LS_Level_And_Mode_Types_Pkg);
    /* IfBlock2:else: */
    if (outC->else_clock_IfBlock2) {
      outC->_L1_then_else_IfBlock2 = kcg_true;
      _5_Condition_Loc_partial = outC->_L1_then_else_IfBlock2;
      _1_Condition_Loc_partial = _5_Condition_Loc_partial;
    }
    else {
      outC->else_clock_else_IfBlock2 = (outC->Loc_MP_Mode ==
          Profile_SH_Level_And_Mode_Types_Pkg) & (Selected_Mode ==
          SH_Level_And_Mode_Types_Pkg);
      /* IfBlock2:else:else: */
      if (outC->else_clock_else_IfBlock2) {
        outC->_L1_then_else_else_IfBlock2 = kcg_true;
        _2_Condition_Loc_partial = outC->_L1_then_else_else_IfBlock2;
        _4_Condition_Loc_partial = _2_Condition_Loc_partial;
      }
      else {
        outC->_L1_else_else_else_IfBlock2 = kcg_false;
        _3_Condition_Loc_partial = outC->_L1_else_else_else_IfBlock2;
        _4_Condition_Loc_partial = _3_Condition_Loc_partial;
      }
      _1_Condition_Loc_partial = _4_Condition_Loc_partial;
    }
    outC->Condition_Loc = _1_Condition_Loc_partial;
  }
  outC->_L60 = outC->Condition_Loc;
  outC->_L16 = Profile_Mode;
  outC->_L43 = outC->Loc_MP_Mode;
  outC->_L12 = outC->_L43 == outC->_L16;
  outC->_L61 = outC->_L12 | outC->_L60;
  outC->_L62 = outC->_L61 & outC->_L45;
  outC->Condition_Ok = outC->_L62;
  outC->_L64 = outC->Condition_Ok;
  /* _L65= */
  if (outC->_L64) {
    outC->_L65 = outC->_L35;
  }
  else {
    outC->_L65 = outC->_L66;
  }
  outC->Estimated_front_End_In_Ack_Area = outC->_L65;
  outC->_L5 = Train_Speed;
  outC->_L40 = outC->_L37.Speed;
  outC->Loc_MP_Speed = outC->_L40;
  outC->_L53 = outC->Loc_MP_Speed;
  outC->_L9 = outC->_L53 >= outC->_L5;
  outC->_L63 = outC->_L9 & outC->_L35;
  outC->_L56 = kcg_false;
  outC->_L55 = outC->Condition_Ok;
  /* _L54= */
  if (outC->_L55) {
    outC->_L54 = outC->_L63;
  }
  else {
    outC->_L54 = outC->_L56;
  }
  outC->_L39 = outC->_L37.Length;
  outC->Loc_MP_Length = outC->_L39;
  outC->_L52 = outC->Loc_MP_Length;
  outC->_L51 = outC->Loc_MP_Distance;
  outC->_L50 = outC->Condition_Ok;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L20, Train_Position);
  outC->_L28 = outC->_L20.maxSafeFrontEndPostion;
  outC->Max_Safe_Front_End = outC->_L28;
  outC->_L49 = outC->Max_Safe_Front_End;
  outC->_L48 = kcg_false;
  /* _L36=(Librairies::Position_In_Area#1)/ */
  Position_In_Area_Librairies(
    outC->_L49,
    outC->_L51,
    outC->_L52,
    &outC->Context_Position_In_Area_1);
  outC->_L36 = outC->Context_Position_In_Area_1.Position_In_Area;
  /* _L47= */
  if (outC->_L50) {
    outC->_L47 = outC->_L36;
  }
  else {
    outC->_L47 = outC->_L48;
  }
  outC->Max_Safe_Front_In_Mode_Profile = outC->_L47;
  outC->Supervision_Condition_In_Mode_Profile = outC->_L54;
  outC->Awaited_Mode_Profile = outC->_L61;
}

#ifndef KCG_USER_DEFINED_INIT
void Mode_Profile_Calculations_init_Librairies(
  outC_Mode_Profile_Calculations_Librairies *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L66 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_lit_int64(0);
  outC->_L58 = kcg_lit_int64(0);
  outC->_L57 = kcg_lit_int64(0);
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_lit_int64(0);
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L43 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L38 = kcg_lit_int64(0);
  outC->_L39 = kcg_lit_int64(0);
  outC->_L40 = kcg_lit_int64(0);
  outC->_L41 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L42 = kcg_lit_int64(0);
  outC->_L37.Distance = kcg_lit_int64(0);
  outC->_L37.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L37.Speed = kcg_lit_int64(0);
  outC->_L37.Length = kcg_lit_int64(0);
  outC->_L37.Length_Ack = kcg_lit_int64(0);
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L20.valid = kcg_true;
  outC->_L20.timestamp = kcg_lit_int64(0);
  outC->_L20.trainPositionIsUnknown = kcg_true;
  outC->_L20.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L20.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L20.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L20.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L20.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L20.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L20.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L20.LRBG.valid = kcg_true;
  outC->_L20.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L20.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L20.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L20.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L20.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L20.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L20.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L20.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L20.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L20.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L20.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L20.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L20.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L20.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L20.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L20.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L20.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L20.LRBG.missed = kcg_true;
  outC->_L20.prvLRBG.valid = kcg_true;
  outC->_L20.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L20.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L20.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L20.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L20.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L20.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L20.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L20.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L20.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L20.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L20.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L20.prvLRBG.missed = kcg_true;
  outC->_L20.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L20.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L20.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L20.linkingIsUsedOnboard = kcg_true;
  outC->_L20.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L20.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L20.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L21.valid = kcg_true;
  outC->_L21.timestamp = kcg_lit_int64(0);
  outC->_L21.trainPositionIsUnknown = kcg_true;
  outC->_L21.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L21.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L21.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L21.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L21.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L21.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L21.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L21.LRBG.valid = kcg_true;
  outC->_L21.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L21.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L21.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L21.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L21.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L21.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L21.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L21.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L21.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L21.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L21.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L21.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L21.LRBG.missed = kcg_true;
  outC->_L21.prvLRBG.valid = kcg_true;
  outC->_L21.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L21.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L21.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L21.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L21.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L21.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L21.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L21.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L21.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int64(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int64(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int64(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int64(0);
  }
  outC->_L21.prvLRBG.missed = kcg_true;
  outC->_L21.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L21.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L21.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L21.linkingIsUsedOnboard = kcg_true;
  outC->_L21.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L21.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L21.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L25 = kcg_lit_int64(0);
  outC->_L28 = kcg_lit_int64(0);
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
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int64(0);
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.LRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int64(0);
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
  for (idx5 = 0; idx5 < 33; idx5++) {
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].valid = kcg_true;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_LRBG = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_dir = Q_DIR_Reverse;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].d_link = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_c = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].nid_bg = kcg_lit_int64(0);
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29.prvLRBG.infoFromPassing.linkedBGs[idx5].q_locacc = kcg_lit_int64(0);
  }
  outC->_L29.prvLRBG.missed = kcg_true;
  outC->_L29.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L29.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L29.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L29.linkingIsUsedOnboard = kcg_true;
  outC->_L29.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L29.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L29.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L30 = kcg_true;
  outC->_L16 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L12 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->Condition_Loc = kcg_true;
  outC->Condition_Ok = kcg_true;
  outC->Loc_MP_Length_Ack = kcg_lit_int64(0);
  outC->Loc_MP_Length = kcg_lit_int64(0);
  outC->Loc_MP_Speed = kcg_lit_int64(0);
  outC->Loc_MP_Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Loc_MP_Distance = kcg_lit_int64(0);
  outC->Max_Safe_Front_End = kcg_lit_int64(0);
  outC->Estimated_Front_End = kcg_lit_int64(0);
  outC->Valid_Train_Position = kcg_true;
  outC->IfBlock2_clock = kcg_true;
  outC->_L1_then_else_IfBlock2 = kcg_true;
  outC->else_clock_else_IfBlock2 = kcg_true;
  outC->_L1_else_else_else_IfBlock2 = kcg_true;
  outC->_L1_then_else_else_IfBlock2 = kcg_true;
  outC->else_clock_IfBlock2 = kcg_true;
  outC->_L1_then_IfBlock2 = kcg_true;
  outC->Estimated_front_End_In_Ack_Area = kcg_true;
  outC->Awaited_Mode_Profile = kcg_true;
  outC->Supervision_Condition_In_Mode_Profile = kcg_true;
  outC->Max_Safe_Front_In_Mode_Profile = kcg_true;
  /* _L36=(Librairies::Position_In_Area#1)/ */
  Position_In_Area_init_Librairies(&outC->Context_Position_In_Area_1);
  /* _L35=(Librairies::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_init_Librairies(&outC->Context_Position_In_Ack_Area_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Mode_Profile_Calculations_reset_Librairies(
  outC_Mode_Profile_Calculations_Librairies *outC)
{
  /* _L36=(Librairies::Position_In_Area#1)/ */
  Position_In_Area_reset_Librairies(&outC->Context_Position_In_Area_1);
  /* _L35=(Librairies::Position_In_Ack_Area#1)/ */
  Position_In_Ack_Area_reset_Librairies(&outC->Context_Position_In_Ack_Area_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Mode_Profile_Calculations_Librairies.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

