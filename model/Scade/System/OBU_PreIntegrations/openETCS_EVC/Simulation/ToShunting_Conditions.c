/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ToShunting_Conditions.h"

/* Conditions::ToShunting/ */
void ToShunting_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg Current_Mode,
  /* Desk_Open/ */
  kcg_bool Desk_Open,
  /* Driver_Ack_SH/ */
  kcg_bool Driver_Ack_SH,
  /* Driver_Req_SH/ */
  kcg_bool Driver_Req_SH,
  /* Mode_Profile_On_Board/ */
  T_Mode_Profile_Level_And_Mode_Types_Pkg *Mode_Profile_On_Board,
  /* On_Going_Mission/ */
  kcg_bool On_Going_Mission,
  /* Shunting_Granted_By_RBC/ */
  kcg_bool Shunting_Granted_By_RBC,
  /* Stop_Shunting_Stored/ */
  kcg_bool Stop_Shunting_Stored,
  /* Train_Position/ */
  trainPosition_T_TrainPosition_Types_Pck *Train_Position,
  /* Train_Speed/ */
  Speed_T_Obu_BasicTypes_Pkg Train_Speed,
  /* Train_Standstill/ */
  kcg_bool Train_Standstill,
  outC_ToShunting_Conditions *outC)
{
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L472, Train_Position);
  outC->_L458 = Current_Level;
  outC->_L460 = Current_Mode;
  outC->_L459 = Driver_Req_SH;
  outC->_L468 = On_Going_Mission;
  outC->_L461 = Shunting_Granted_By_RBC;
  outC->_L462 = Train_Standstill;
  /* _L449=(Procedures::Procedure_SH_Initiated_By_Driver#1)/ */
  Procedure_SH_Initiated_By_Procedures(
    outC->_L458,
    outC->_L460,
    outC->_L459,
    outC->_L468,
    outC->_L461,
    outC->_L462,
    &outC->Context_Procedure_SH_Initiated_By_Driver_1);
  outC->_L449 = outC->Context_Procedure_SH_Initiated_By_Driver_1.Condition5;
  outC->_L450 = outC->Context_Procedure_SH_Initiated_By_Driver_1.Condition6;
  outC->_L471 =
    outC->Context_Procedure_SH_Initiated_By_Driver_1.Clean_BG_List_SH_Area;
  outC->_L467 =
    outC->Context_Procedure_SH_Initiated_By_Driver_1.End_Of_Mission_Procedure_Req;
  outC->_L451 =
    outC->Context_Procedure_SH_Initiated_By_Driver_1.Request_For_SH_To_RBC;
  outC->_L452 =
    outC->Context_Procedure_SH_Initiated_By_Driver_1.SH_Refused_By_RBC_To_DMI;
  outC->Clean_BG_List_SH_Area = outC->_L471;
  outC->_L469 = Train_Speed;
  outC->End_Of_Mission_Procedure_Req = outC->_L467;
  outC->_L466 = Current_Mode;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L465,
    Mode_Profile_On_Board);
  outC->_L463 = Driver_Ack_SH;
  /* _L454=(Procedures::Procedure_SH_Ordered_By_Track#1)/ */
  Procedure_SH_Ordered_By_Track_Procedures(
    outC->_L466,
    outC->_L463,
    &outC->_L465,
    &outC->_L472,
    outC->_L469,
    &outC->Context_Procedure_SH_Ordered_By_Track_1);
  outC->_L454 = outC->Context_Procedure_SH_Ordered_By_Track_1.Condition50;
  outC->_L453 = outC->Context_Procedure_SH_Ordered_By_Track_1.Condition51;
  outC->_L455 = outC->Context_Procedure_SH_Ordered_By_Track_1.Condition61;
  outC->_L456 =
    outC->Context_Procedure_SH_Ordered_By_Track_1.Ack_SH_Req_To_Driver;
  outC->_L457 =
    outC->Context_Procedure_SH_Ordered_By_Track_1.Service_Brake_Command;
  outC->Service_Brake_Command = outC->_L457;
  outC->Ack_SH_Req_To_Driver = outC->_L456;
  outC->Condition61 = outC->_L455;
  outC->Condition51 = outC->_L453;
  outC->Condition50 = outC->_L454;
  outC->SH_refused_By_RBC_To_DMI = outC->_L452;
  outC->Request_For_SH_To_RBC = outC->_L451;
  outC->Condition6 = outC->_L450;
  outC->Condition5 = outC->_L449;
  outC->_L349 = Stop_Shunting_Stored;
  outC->_L77 = !outC->_L349;
  outC->_L348 = Desk_Open;
  outC->_L80 = outC->_L348 & outC->_L77;
  outC->Condition23 = outC->_L80;
}

#ifndef KCG_USER_DEFINED_INIT
void ToShunting_init_Conditions(outC_ToShunting_Conditions *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L472.valid = kcg_true;
  outC->_L472.timestamp = kcg_lit_int32(0);
  outC->_L472.trainPositionIsUnknown = kcg_true;
  outC->_L472.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L472.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L472.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L472.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L472.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L472.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L472.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L472.LRBG.valid = kcg_true;
  outC->_L472.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L472.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L472.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L472.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L472.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L472.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L472.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L472.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L472.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L472.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L472.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L472.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L472.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L472.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L472.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L472.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L472.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L472.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L472.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L472.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L472.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L472.LRBG.missed = kcg_true;
  outC->_L472.prvLRBG.valid = kcg_true;
  outC->_L472.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L472.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L472.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L472.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L472.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L472.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L472.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L472.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L472.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L472.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L472.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L472.prvLRBG.missed = kcg_true;
  outC->_L472.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L472.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L472.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L472.linkingIsUsedOnboard = kcg_true;
  outC->_L472.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L472.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L472.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L471 = kcg_true;
  outC->_L469 = kcg_lit_int32(0);
  outC->_L468 = kcg_true;
  outC->_L467 = kcg_true;
  outC->_L466 = NP_Level_And_Mode_Types_Pkg;
  outC->_L465.Distance = kcg_lit_int32(0);
  outC->_L465.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L465.Speed = kcg_lit_int32(0);
  outC->_L465.Length = kcg_lit_int32(0);
  outC->_L465.Length_Ack = kcg_lit_int32(0);
  outC->_L463 = kcg_true;
  outC->_L462 = kcg_true;
  outC->_L461 = kcg_true;
  outC->_L460 = NP_Level_And_Mode_Types_Pkg;
  outC->_L459 = kcg_true;
  outC->_L458 = M_LEVEL_Level_0;
  outC->_L453 = kcg_true;
  outC->_L454 = kcg_true;
  outC->_L455 = kcg_true;
  outC->_L456 = kcg_true;
  outC->_L457 = kcg_true;
  outC->_L449 = kcg_true;
  outC->_L450 = kcg_true;
  outC->_L451 = kcg_true;
  outC->_L452 = kcg_true;
  outC->_L349 = kcg_true;
  outC->_L348 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L80 = kcg_true;
  outC->SH_refused_By_RBC_To_DMI = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Condition61 = kcg_true;
  outC->Condition51 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition23 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  /* _L454=(Procedures::Procedure_SH_Ordered_By_Track#1)/ */
  Procedure_SH_Ordered_By_Track_init_Procedures(
    &outC->Context_Procedure_SH_Ordered_By_Track_1);
  /* _L449=(Procedures::Procedure_SH_Initiated_By_Driver#1)/ */
  Procedure_SH_Initiated_By_init_Procedures(
    &outC->Context_Procedure_SH_Initiated_By_Driver_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ToShunting_reset_Conditions(outC_ToShunting_Conditions *outC)
{
  /* _L454=(Procedures::Procedure_SH_Ordered_By_Track#1)/ */
  Procedure_SH_Ordered_By_Track_reset_Procedures(
    &outC->Context_Procedure_SH_Ordered_By_Track_1);
  /* _L449=(Procedures::Procedure_SH_Initiated_By_Driver#1)/ */
  Procedure_SH_Initiated_By_reset_Procedures(
    &outC->Context_Procedure_SH_Initiated_By_Driver_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToShunting_Conditions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

