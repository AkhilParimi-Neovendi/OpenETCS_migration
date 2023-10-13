/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_3_8_2_3_a_TA_MA_Request.h"

/* TA_MA_Request::op_3_8_2_3_a/ */
void op_3_8_2_3_a_TA_MA_Request(
  /* t_mar/ */
  T_MAR t_mar,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* preindicationLoc/ */
  L_internal_Type_Obu_BasicTypes_Pkg preindicationLoc,
  outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  /* preindicationLoc/ */
  static L_internal_Type_Obu_BasicTypes_Pkg last_preindicationLoc;

  last_preindicationLoc = outC->mem_preindicationLoc;
  outC->mem_preindicationLoc = preindicationLoc;
  outC->_L38 = last_preindicationLoc;
  outC->_L37 = preindicationLoc;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L1, trainPosition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L5,
    &outC->_L1.trainPosition);
  outC->_L29 = outC->_L5.nominal;
  outC->_L7 = outC->_L5.d_max;
  outC->_L30 = outC->_L7 + outC->_L29;
  outC->_L8 = outC->_L37 - outC->_L30;
  outC->_L10 = /* _L10= */(kcg_float64) outC->_L8;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L4, odometry);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&outC->_L9, &outC->_L4.speed);
  outC->_L19 = outC->_L9.v_upper;
  outC->_L11 = /* _L11= */(kcg_float64) outC->_L19;
  outC->_L27 = kcg_lit_float64(-1.0);
  /* _L20=(XCP_numeric::DIV_real#1)/ */
  DIV_real_XCP_numeric(
    outC->_L10,
    outC->_L11,
    outC->_L27,
    &outC->Context_DIV_real_1);
  outC->_L20 = outC->Context_DIV_real_1.Result;
  outC->_L21 = outC->Context_DIV_real_1.Exception;
  outC->_L2 = t_mar;
  outC->_L17 = /* _L17= */(kcg_float64) outC->_L2;
  outC->_L31 = outC->_L17 >= outC->_L20;
  outC->_L33 = outC->_L38 != outC->_L37;
  /* _L34=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L33, &outC->Context_RisingEdge_1);
  outC->_L34 = outC->Context_RisingEdge_1.RE_Output;
  outC->_L35 = !outC->_L34;
  outC->_L36 = outC->_L35 & outC->_L31;
  outC->exception = outC->_L21;
  outC->triggerMA = outC->_L36;
}

#ifndef KCG_USER_DEFINED_INIT
void op_3_8_2_3_a_init_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_lit_int64(0);
  outC->_L29 = kcg_lit_int64(0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_true;
  outC->_L19 = kcg_lit_int64(0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9.v_safeNominal = kcg_lit_int64(0);
  outC->_L9.v_rawNominal = kcg_lit_int64(0);
  outC->_L9.v_lower = kcg_lit_int64(0);
  outC->_L9.v_upper = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L5.nominal = kcg_lit_int64(0);
  outC->_L5.d_min = kcg_lit_int64(0);
  outC->_L5.d_max = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.timestamp = kcg_lit_int64(0);
  outC->_L1.trainPositionIsUnknown = kcg_true;
  outC->_L1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L1.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L1.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L1.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L1.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L1.LRBG.valid = kcg_true;
  outC->_L1.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.LRBG.missed = kcg_true;
  outC->_L1.prvLRBG.valid = kcg_true;
  outC->_L1.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L1.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L1.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L1.prvLRBG.missed = kcg_true;
  outC->_L1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L1.linkingIsUsedOnboard = kcg_true;
  outC->_L1.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L1.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L1.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.timestamp = kcg_lit_int64(0);
  outC->_L4.odo.o_nominal = kcg_lit_int64(0);
  outC->_L4.odo.o_min = kcg_lit_int64(0);
  outC->_L4.odo.o_max = kcg_lit_int64(0);
  outC->_L4.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L4.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L4.speed.v_lower = kcg_lit_int64(0);
  outC->_L4.speed.v_upper = kcg_lit_int64(0);
  outC->_L4.acceleration = kcg_lit_int64(0);
  outC->_L4.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->triggerMA = kcg_true;
  outC->exception = kcg_true;
  /* _L34=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L20=(XCP_numeric::DIV_real#1)/ */
  DIV_real_init_XCP_numeric(&outC->Context_DIV_real_1);
  outC->mem_preindicationLoc = cLocation_TA_MA_Request;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_3_8_2_3_a_reset_TA_MA_Request(outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  /* _L34=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L20=(XCP_numeric::DIV_real#1)/ */
  DIV_real_reset_XCP_numeric(&outC->Context_DIV_real_1);
  outC->mem_preindicationLoc = cLocation_TA_MA_Request;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_op_3_8_2_3_a_TA_MA_Request(
  SV_op_3_8_2_3_a_TA_MA_Request *SV,
  outC_op_3_8_2_3_a_TA_MA_Request *outC)
{
  kcg_save_SV_RisingEdge_digital(
    &SV->Context_RisingEdge_1,
    &outC->Context_RisingEdge_1);
  SV->Context_mem_preindicationLoc = outC->mem_preindicationLoc;
}

void kcg_load_SV_op_3_8_2_3_a_TA_MA_Request(
  outC_op_3_8_2_3_a_TA_MA_Request *outC,
  SV_op_3_8_2_3_a_TA_MA_Request *SV)
{
  kcg_load_SV_RisingEdge_digital(
    &outC->Context_RisingEdge_1,
    &SV->Context_RisingEdge_1);
  outC->mem_preindicationLoc = SV->Context_mem_preindicationLoc;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_3_8_2_3_a_TA_MA_Request.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

