/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Procedure_SH_Ordered_By_Track_Procedures.h"

/* Procedures::Procedure_SH_Ordered_By_Track/ */
void Procedure_SH_Ordered_By_Track_Procedures(
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  static kcg_bool noname;

  outC->_L170 = SH_Level_And_Mode_Types_Pkg;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L169, Train_Position);
  outC->_L130 = Current_Mode;
  outC->_L131 = Driver_Ack_SH;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L134,
    Mode_Profile_On_Board);
  outC->_L51 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L72 = kcg_false;
  outC->_L86 = kcg_false;
  outC->_L98 = kcg_false;
  outC->_L66 = Current_Mode;
  /* _L95= */
  switch (outC->_L66) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L51;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L64;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L78;
      break;
    case SR_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L61;
      break;
    case SN_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L82;
      break;
    case UN_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L89;
      break;
    case PT_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L72;
      break;
    case SB_Level_And_Mode_Types_Pkg :
      outC->_L95 = outC->_L86;
      break;
    default :
      outC->_L95 = outC->_L98;
      break;
  }
  outC->Loc_Procedure_Possible = outC->_L95;
  outC->_L136 = outC->Loc_Procedure_Possible;
  outC->_L138 = Profile_SH_Level_And_Mode_Types_Pkg;
  outC->_L141 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L139 = kcg_false;
  outC->_L143 = Current_Mode;
  /* _L142= */
  switch (outC->_L143) {
    case FS_Level_And_Mode_Types_Pkg :
      outC->_L142 = outC->_L141;
      break;
    case LS_Level_And_Mode_Types_Pkg :
      outC->_L142 = outC->_L140;
      break;
    case OS_Level_And_Mode_Types_Pkg :
      outC->_L142 = outC->_L144;
      break;
    default :
      outC->_L142 = outC->_L139;
      break;
  }
  outC->Loc_Supervision_Mode = outC->_L142;
  outC->_L145 = outC->Loc_Supervision_Mode;
  outC->_L135 = Train_Speed;
  /* _L162=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_Procedures(
    outC->_L130,
    outC->_L131,
    &outC->_L134,
    outC->_L136,
    outC->_L138,
    outC->_L170,
    outC->_L145,
    &outC->_L169,
    outC->_L135,
    &outC->Context_Procedure_With_Mode_Profile_1);
  outC->_L162 = outC->Context_Procedure_With_Mode_Profile_1.Condition_15_50_70;
  outC->_L163 = outC->Context_Procedure_With_Mode_Profile_1.Condition_34_61_71;
  outC->_L164 = outC->Context_Procedure_With_Mode_Profile_1.Condition_40_51_72;
  outC->_L165 = outC->Context_Procedure_With_Mode_Profile_1.Condition_73_74;
  outC->_L166 = outC->Context_Procedure_With_Mode_Profile_1.Service_Brake_Command;
  outC->_L167 = outC->Context_Procedure_With_Mode_Profile_1.Ack_Req_To_Driver;
  noname = outC->_L165;
  outC->Service_Brake_Command = outC->_L167;
  outC->Ack_SH_Req_To_Driver = outC->_L166;
  outC->Condition61 = outC->_L163;
  outC->Condition51 = outC->_L164;
  outC->Condition50 = outC->_L162;
}

#ifndef KCG_USER_DEFINED_INIT
void Procedure_SH_Ordered_By_Track_init_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L170 = NP_Level_And_Mode_Types_Pkg;
  outC->_L169.valid = kcg_true;
  outC->_L169.timestamp = kcg_lit_int64(0);
  outC->_L169.trainPositionIsUnknown = kcg_true;
  outC->_L169.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L169.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L169.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L169.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L169.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L169.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L169.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L169.LRBG.valid = kcg_true;
  outC->_L169.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L169.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L169.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L169.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L169.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L169.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L169.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L169.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L169.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L169.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L169.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L169.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L169.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L169.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L169.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L169.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L169.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L169.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L169.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L169.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L169.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L169.LRBG.missed = kcg_true;
  outC->_L169.prvLRBG.valid = kcg_true;
  outC->_L169.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L169.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L169.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L169.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L169.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L169.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L169.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L169.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L169.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L169.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L169.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L169.prvLRBG.missed = kcg_true;
  outC->_L169.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L169.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L169.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L169.linkingIsUsedOnboard = kcg_true;
  outC->_L169.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L169.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L169.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L167 = kcg_true;
  outC->_L162 = kcg_true;
  outC->_L163 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L165 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L145 = kcg_true;
  outC->_L144 = kcg_true;
  outC->_L139 = kcg_true;
  outC->_L140 = kcg_true;
  outC->_L141 = kcg_true;
  outC->_L142 = kcg_true;
  outC->_L143 = NP_Level_And_Mode_Types_Pkg;
  outC->_L138 = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L136 = kcg_true;
  outC->_L135 = kcg_lit_int64(0);
  outC->_L134.Distance = kcg_lit_int64(0);
  outC->_L134.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L134.Speed = kcg_lit_int64(0);
  outC->_L134.Length = kcg_lit_int64(0);
  outC->_L134.Length_Ack = kcg_lit_int64(0);
  outC->_L131 = kcg_true;
  outC->_L130 = NP_Level_And_Mode_Types_Pkg;
  outC->_L51 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L66 = NP_Level_And_Mode_Types_Pkg;
  outC->_L72 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L95 = kcg_true;
  outC->_L98 = kcg_true;
  outC->Loc_Supervision_Mode = kcg_true;
  outC->Loc_Procedure_Possible = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  /* _L162=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_init_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Procedure_SH_Ordered_By_Track_reset_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  /* _L162=(Procedures::Procedure_With_Mode_Profile#1)/ */
  Procedure_With_Mode_Profile_reset_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Procedure_SH_Ordered_By_Track_Procedures(
  SV_Procedure_SH_Ordered_By_Track_Procedures *SV,
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC)
{
  kcg_save_SV_Procedure_With_Mode_Profile_Procedures(
    &SV->Context_Procedure_With_Mode_Profile_1,
    &outC->Context_Procedure_With_Mode_Profile_1);
}

void kcg_load_SV_Procedure_SH_Ordered_By_Track_Procedures(
  outC_Procedure_SH_Ordered_By_Track_Procedures *outC,
  SV_Procedure_SH_Ordered_By_Track_Procedures *SV)
{
  kcg_load_SV_Procedure_With_Mode_Profile_Procedures(
    &outC->Context_Procedure_With_Mode_Profile_1,
    &SV->Context_Procedure_With_Mode_Profile_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Procedure_SH_Ordered_By_Track_Procedures.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

