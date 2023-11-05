/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_OnSight_Procedures.h"

/* Procedures::Procedure_OnSight/ */
void Procedure_OnSight_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_OS/ */
  kcg_bool Driver_Ack_OS,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_OnSight_Procedures *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;

  outC->_L530 = LS_Level_And_Mode_Types_Pkg;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L531,
    Mode_Profile_On_Board);
  outC->_L532 = Profile_LS_Level_And_Mode_Types_Pkg;
  outC->_L534 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L533, Train_Position);
  /* _L527=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_Librairies(
    outC->_L530,
    &outC->_L531,
    outC->_L532,
    outC->_L534,
    &outC->_L533,
    &outC->Context_Mode_Profile_Calculations_1);
  outC->_L527 =
    outC->Context_Mode_Profile_Calculations_1.Max_Safe_Front_In_Mode_Profile;
  outC->_L528 =
    outC->Context_Mode_Profile_Calculations_1.Supervision_Condition_In_Mode_Profile;
  outC->_L529 = outC->Context_Mode_Profile_Calculations_1.Awaited_Mode_Profile;
  outC->_L537 =
    outC->Context_Mode_Profile_Calculations_1.Estimated_front_End_In_Ack_Area;
  outC->_L539 = !outC->_L537;
  outC->_L538 = OS_Level_And_Mode_Types_Pkg;
  _2_noname = outC->_L529;
  _1_noname = outC->_L528;
  noname = outC->_L527;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L526, Train_Position);
  outC->_L477 = Current_Mode;
  outC->_L424 = Driver_Ack_OS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L438,
    Mode_Profile_On_Board);
  outC->_L468 = kcg_true;
  outC->_L449 = kcg_true;
  outC->_L452 = kcg_true;
  outC->_L471 = kcg_true;
  outC->_L474 = kcg_true;
  outC->_L440 = kcg_false;
  outC->_L457 = kcg_false;
  outC->_L445 = kcg_false;
  outC->_L446 = Current_Mode;
  /* _L455= */
  switch (outC->_L446) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L468;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L449;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L452;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L471;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L474;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L440;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L455 = outC->_L457;
      break;
    default :
      outC->_L455 = outC->_L445;
      break;
  }
  outC->Loc_Procedure_Possible = outC->_L455;
  outC->_L480 = outC->Loc_Procedure_Possible;
  outC->_L439 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L482 = kcg_true;
  outC->_L486 = kcg_true;
  outC->_L483 = kcg_false;
  outC->_L489 = Current_Mode;
  /* _L484= */
  switch (outC->_L489) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L484 = outC->_L482;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L484 = outC->_L486;
      break;
    default :
      outC->_L484 = outC->_L483;
      break;
  }
  outC->Loc_Supervision_Mode = outC->_L484;
  outC->_L491 = outC->Loc_Supervision_Mode;
  outC->_L479 = Train_Speed;
  /* _L519=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_Procedures(
    outC->_L477,
    outC->_L424,
    &outC->_L438,
    outC->_L480,
    outC->_L439,
    outC->_L538,
    outC->_L491,
    &outC->_L526,
    outC->_L479,
    &outC->Context_Procedure_With_Mode_Profile_1);
  outC->_L519 = outC->Context_Procedure_With_Mode_Profile_1.Condition_15_50_70;
  outC->_L520 = outC->Context_Procedure_With_Mode_Profile_1.Condition_34_61_71;
  outC->_L521 = outC->Context_Procedure_With_Mode_Profile_1.Condition_40_51_72;
  outC->_L522 = outC->Context_Procedure_With_Mode_Profile_1.Condition_73_74;
  outC->_L523 = outC->Context_Procedure_With_Mode_Profile_1.Service_Brake_Command;
  outC->_L524 = outC->Context_Procedure_With_Mode_Profile_1.Ack_Req_To_Driver;
  outC->Loc_Condition_73 = outC->_L522;
  outC->_L502 = outC->Loc_Condition_73;
  outC->Service_Brake_Command = outC->_L523;
  outC->Ack_OS_Req_To_Driver = outC->_L524;
  outC->_L80 = outC->_L539 & outC->_L502;
  outC->Condition73 = outC->_L80;
  outC->Condition40 = outC->_L521;
  outC->Condition34 = outC->_L520;
  outC->Condition15 = outC->_L519;
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_OnSight_init_Procedures(outC_Procedure_OnSight_Procedures *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L539 = kcg_true;
  outC->_L538 = NP_Level_And_Mode_Types_Pkg;
  outC->_L537 = kcg_true;
  outC->_L534 = kcg_lit_int32(0);
  outC->_L533.valid = kcg_true;
  outC->_L533.timestamp = kcg_lit_int32(0);
  outC->_L533.trainPositionIsUnknown = kcg_true;
  outC->_L533.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L533.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L533.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L533.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L533.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L533.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L533.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L533.LRBG.valid = kcg_true;
  outC->_L533.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L533.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L533.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L533.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L533.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L533.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L533.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L533.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L533.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L533.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L533.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L533.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L533.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L533.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L533.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L533.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L533.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L533.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L533.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L533.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L533.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L533.LRBG.missed = kcg_true;
  outC->_L533.prvLRBG.valid = kcg_true;
  outC->_L533.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L533.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L533.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L533.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L533.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L533.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L533.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L533.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L533.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L533.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L533.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L533.prvLRBG.missed = kcg_true;
  outC->_L533.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L533.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L533.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L533.linkingIsUsedOnboard = kcg_true;
  outC->_L533.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L533.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L533.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L532 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L531.Distance = kcg_lit_int32(0);
  outC->_L531.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L531.Speed = kcg_lit_int32(0);
  outC->_L531.Length = kcg_lit_int32(0);
  outC->_L531.Length_Ack = kcg_lit_int32(0);
  outC->_L530 = NP_Level_And_Mode_Types_Pkg;
  outC->_L527 = kcg_true;
  outC->_L528 = kcg_true;
  outC->_L529 = kcg_true;
  outC->_L526.valid = kcg_true;
  outC->_L526.timestamp = kcg_lit_int32(0);
  outC->_L526.trainPositionIsUnknown = kcg_true;
  outC->_L526.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L526.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L526.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L526.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L526.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L526.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L526.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L526.LRBG.valid = kcg_true;
  outC->_L526.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L526.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L526.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L526.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L526.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L526.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L526.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L526.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L526.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L526.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L526.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L526.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L526.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L526.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L526.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L526.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L526.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L526.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L526.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L526.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L526.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L526.LRBG.missed = kcg_true;
  outC->_L526.prvLRBG.valid = kcg_true;
  outC->_L526.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L526.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L526.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L526.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L526.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L526.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L526.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L526.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L526.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L526.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L526.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L526.prvLRBG.missed = kcg_true;
  outC->_L526.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L526.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L526.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L526.linkingIsUsedOnboard = kcg_true;
  outC->_L526.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L526.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L526.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L524 = kcg_true;
  outC->_L519 = kcg_true;
  outC->_L520 = kcg_true;
  outC->_L521 = kcg_true;
  outC->_L522 = kcg_true;
  outC->_L523 = kcg_true;
  outC->_L502 = kcg_true;
  outC->_L491 = kcg_true;
  outC->_L482 = kcg_true;
  outC->_L483 = kcg_true;
  outC->_L484 = kcg_true;
  outC->_L486 = kcg_true;
  outC->_L489 = NP_Level_And_Mode_Types_Pkg;
  outC->_L480 = kcg_true;
  outC->_L479 = kcg_lit_int32(0);
  outC->_L477 = NP_Level_And_Mode_Types_Pkg;
  outC->_L440 = kcg_true;
  outC->_L445 = kcg_true;
  outC->_L446 = NP_Level_And_Mode_Types_Pkg;
  outC->_L449 = kcg_true;
  outC->_L452 = kcg_true;
  outC->_L455 = kcg_true;
  outC->_L457 = kcg_true;
  outC->_L468 = kcg_true;
  outC->_L471 = kcg_true;
  outC->_L474 = kcg_true;
  outC->_L439 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L438.Distance = kcg_lit_int32(0);
  outC->_L438.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L438.Speed = kcg_lit_int32(0);
  outC->_L438.Length = kcg_lit_int32(0);
  outC->_L438.Length_Ack = kcg_lit_int32(0);
  outC->_L424 = kcg_true;
  outC->_L80 = kcg_true;
  outC->Loc_Supervision_Mode = kcg_true;
  outC->Loc_Condition_73 = kcg_true;
  outC->Loc_Procedure_Possible = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Condition73 = kcg_true;
  outC->Condition40 = kcg_true;
  outC->Condition34 = kcg_true;
  outC->Condition15 = kcg_true;
  /* _L519=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_init_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
  /* _L527=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_init_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_OnSight_reset_Procedures(outC_Procedure_OnSight_Procedures *outC)
{
  /* _L519=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_reset_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
  /* _L527=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_reset_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Procedure_OnSight_Procedures(
  SV_Procedure_OnSight_Procedures *SV,
  outC_Procedure_OnSight_Procedures *outC)
{
  kcg_save_SV_Procedure_With_Mode_Profile_Procedures(
    &SV->Context_Procedure_With_Mode_Profile_1,
    &outC->Context_Procedure_With_Mode_Profile_1);
}

void kcg_load_SV_Procedure_OnSight_Procedures(
  outC_Procedure_OnSight_Procedures *outC,
  SV_Procedure_OnSight_Procedures *SV)
{
  kcg_load_SV_Procedure_With_Mode_Profile_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1,
    &SV->Context_Procedure_With_Mode_Profile_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_OnSight_Procedures.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

