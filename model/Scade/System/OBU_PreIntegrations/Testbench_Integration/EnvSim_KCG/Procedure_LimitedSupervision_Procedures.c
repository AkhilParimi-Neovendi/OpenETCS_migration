/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_LimitedSupervision_Procedures.h"

/* Procedures::Procedure_LimitedSupervision/ */
void Procedure_LimitedSupervision_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_LS/ */
  kcg_bool Driver_Ack_LS,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static kcg_bool _2_noname;

  outC->_L511 = OS_Level_And_Mode_Types_Pkg;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L503,
    Mode_Profile_On_Board);
  outC->_L508 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L501 = Train_Speed;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L502, Train_Position);
  /* _L504=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_Librairies(
    outC->_L511,
    &outC->_L503,
    outC->_L508,
    outC->_L501,
    &outC->_L502,
    &outC->Context_Mode_Profile_Calculations_1);
  outC->_L504 =
    outC->Context_Mode_Profile_Calculations_1.Max_Safe_Front_In_Mode_Profile;
  outC->_L505 =
    outC->Context_Mode_Profile_Calculations_1.Supervision_Condition_In_Mode_Profile;
  outC->_L506 = outC->Context_Mode_Profile_Calculations_1.Awaited_Mode_Profile;
  outC->_L507 =
    outC->Context_Mode_Profile_Calculations_1.Estimated_front_End_In_Ack_Area;
  outC->_L515 = !outC->_L507;
  outC->_L514 = LS_Level_And_Mode_Types_Pkg;
  outC->_L442 = Current_Mode;
  outC->_L477 = Driver_Ack_LS;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L448,
    Mode_Profile_On_Board);
  outC->_L475 = kcg_true;
  outC->_L435 = kcg_true;
  outC->_L454 = kcg_true;
  outC->_L452 = kcg_true;
  outC->_L465 = kcg_true;
  outC->_L466 = kcg_false;
  outC->_L444 = kcg_false;
  outC->_L470 = kcg_false;
  outC->_L446 = Current_Mode;
  /* _L471= */
  switch (outC->_L446) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L475;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L435;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L454;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L452;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L465;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L466;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L471 = outC->_L444;
      break;
    default :
      outC->_L471 = outC->_L470;
      break;
  }
  outC->Loc_Procedure_Possible = outC->_L471;
  outC->_L455 = outC->Loc_Procedure_Possible;
  outC->_L464 = Profile_LS_Level_And_Mode_Types_Pkg;
  outC->_L467 = kcg_true;
  outC->_L476 = kcg_true;
  outC->_L445 = kcg_false;
  outC->_L449 = Current_Mode;
  /* _L461= */
  switch (outC->_L449) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L461 = outC->_L467;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L461 = outC->_L476;
      break;
    default :
      outC->_L461 = outC->_L445;
      break;
  }
  outC->Loc_Supervision_Mode = outC->_L461;
  outC->_L436 = outC->Loc_Supervision_Mode;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L513, Train_Position);
  outC->_L473 = Train_Speed;
  /* _L495=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_Procedures(
    outC->_L442,
    outC->_L477,
    &outC->_L448,
    outC->_L455,
    outC->_L464,
    outC->_L514,
    outC->_L436,
    &outC->_L513,
    outC->_L473,
    &outC->Context_Procedure_With_Mode_Profile_1);
  outC->_L495 = outC->Context_Procedure_With_Mode_Profile_1.Condition_15_50_70;
  outC->_L496 = outC->Context_Procedure_With_Mode_Profile_1.Condition_34_61_71;
  outC->_L497 = outC->Context_Procedure_With_Mode_Profile_1.Condition_40_51_72;
  outC->_L498 = outC->Context_Procedure_With_Mode_Profile_1.Condition_73_74;
  outC->_L499 = outC->Context_Procedure_With_Mode_Profile_1.Service_Brake_Command;
  outC->_L500 = outC->Context_Procedure_With_Mode_Profile_1.Ack_Req_To_Driver;
  outC->Loc_Condition_74 = outC->_L498;
  outC->_L510 = outC->Loc_Condition_74;
  outC->_L509 = outC->_L515 & outC->_L510;
  _2_noname = outC->_L505;
  _1_noname = outC->_L506;
  noname = outC->_L504;
  outC->Condition72 = outC->_L497;
  outC->Condition74 = outC->_L509;
  outC->Condition71 = outC->_L496;
  outC->Condition70 = outC->_L495;
  outC->Service_Brake_Command = outC->_L499;
  outC->Ack_LS_Req_To_Driver = outC->_L500;
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_LimitedSupervision_init_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  outC->_L515 = kcg_true;
  outC->_L514 = NP_Level_And_Mode_Types_Pkg;
  outC->_L513.valid = kcg_true;
  outC->_L513.timestamp = kcg_lit_int32(0);
  outC->_L513.trainPositionIsUnknown = kcg_true;
  outC->_L513.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L513.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L513.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L513.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L513.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L513.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L513.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L513.LRBG.valid = kcg_true;
  outC->_L513.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L513.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L513.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L513.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L513.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L513.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L513.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L513.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L513.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L513.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L513.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L513.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L513.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L513.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L513.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L513.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L513.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L513.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L513.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L513.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L513.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L513.LRBG.missed = kcg_true;
  outC->_L513.prvLRBG.valid = kcg_true;
  outC->_L513.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L513.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L513.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L513.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L513.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L513.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L513.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L513.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L513.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L513.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L513.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L513.prvLRBG.missed = kcg_true;
  outC->_L513.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L513.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L513.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L513.linkingIsUsedOnboard = kcg_true;
  outC->_L513.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L513.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L513.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L501 = kcg_lit_int32(0);
  outC->_L502.valid = kcg_true;
  outC->_L502.timestamp = kcg_lit_int32(0);
  outC->_L502.trainPositionIsUnknown = kcg_true;
  outC->_L502.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L502.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L502.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L502.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L502.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L502.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L502.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L502.LRBG.valid = kcg_true;
  outC->_L502.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L502.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L502.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L502.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L502.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L502.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L502.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L502.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L502.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L502.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L502.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L502.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L502.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L502.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L502.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L502.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L502.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L502.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L502.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L502.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int32(0);
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int32(0);
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int32(0);
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int32(0);
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L502.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int32(0);
  }
  outC->_L502.LRBG.missed = kcg_true;
  outC->_L502.prvLRBG.valid = kcg_true;
  outC->_L502.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L502.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L502.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L502.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L502.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L502.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L502.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L502.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L502.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L502.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L502.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L502.prvLRBG.missed = kcg_true;
  outC->_L502.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L502.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L502.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L502.linkingIsUsedOnboard = kcg_true;
  outC->_L502.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L502.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L502.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L503.Distance = kcg_lit_int32(0);
  outC->_L503.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L503.Speed = kcg_lit_int32(0);
  outC->_L503.Length = kcg_lit_int32(0);
  outC->_L503.Length_Ack = kcg_lit_int32(0);
  outC->_L507 = kcg_true;
  outC->_L506 = kcg_true;
  outC->_L505 = kcg_true;
  outC->_L504 = kcg_true;
  outC->_L508 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L509 = kcg_true;
  outC->_L510 = kcg_true;
  outC->_L511 = NP_Level_And_Mode_Types_Pkg;
  outC->_L500 = kcg_true;
  outC->_L495 = kcg_true;
  outC->_L496 = kcg_true;
  outC->_L497 = kcg_true;
  outC->_L498 = kcg_true;
  outC->_L499 = kcg_true;
  outC->_L477 = kcg_true;
  outC->_L435 = kcg_true;
  outC->_L436 = kcg_true;
  outC->_L442 = NP_Level_And_Mode_Types_Pkg;
  outC->_L444 = kcg_true;
  outC->_L445 = kcg_true;
  outC->_L446 = NP_Level_And_Mode_Types_Pkg;
  outC->_L448.Distance = kcg_lit_int32(0);
  outC->_L448.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L448.Speed = kcg_lit_int32(0);
  outC->_L448.Length = kcg_lit_int32(0);
  outC->_L448.Length_Ack = kcg_lit_int32(0);
  outC->_L449 = NP_Level_And_Mode_Types_Pkg;
  outC->_L452 = kcg_true;
  outC->_L454 = kcg_true;
  outC->_L455 = kcg_true;
  outC->_L461 = kcg_true;
  outC->_L464 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L465 = kcg_true;
  outC->_L466 = kcg_true;
  outC->_L467 = kcg_true;
  outC->_L470 = kcg_true;
  outC->_L471 = kcg_true;
  outC->_L473 = kcg_lit_int32(0);
  outC->_L475 = kcg_true;
  outC->_L476 = kcg_true;
  outC->Loc_Condition_74 = kcg_true;
  outC->Loc_Procedure_Possible = kcg_true;
  outC->Loc_Supervision_Mode = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->Condition74 = kcg_true;
  outC->Condition72 = kcg_true;
  outC->Condition71 = kcg_true;
  outC->Condition70 = kcg_true;
  /* _L495=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_init_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
  /* _L504=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_init_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_LimitedSupervision_reset_Procedures(
  outC_Procedure_LimitedSupervision_Procedures *outC)
{
  /* _L495=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_reset_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
  /* _L504=(Librairies::Mode_Profile_Calculations#1)/ */
  Mode_Profile_Calculations_reset_Librairies(
    &outC->Context_Mode_Profile_Calculations_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_LimitedSupervision_Procedures.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

