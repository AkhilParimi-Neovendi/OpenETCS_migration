/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "op_findBG_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::op_findBG/ */
void op_findBG_ProvidePositionReport_Pkg(
  /* acc/ */
  kcg_bool acc,
  /* Input_BG/ */
  positionedBG_T_TrainPosition_Types_Pck *Input_BG,
  /* Input_BG_IDToCheck/ */
  NID_BG Input_BG_IDToCheck,
  outC_op_findBG_ProvidePositionReport_Pkg *outC)
{
  outC->_L3 = Input_BG_IDToCheck;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L2, Input_BG);
  outC->_L4 = outC->_L2.nid_bg;
  outC->_L6 = outC->_L4 != outC->_L3;
  outC->_L5 = outC->_L2.valid;
  outC->_L7 = outC->_L5 & outC->_L6;
  outC->_L8 = !outC->_L7;
  outC->_L1 = acc;
  outC->_L9 = outC->_L1 | outC->_L8;
  outC->cond = outC->_L7;
  outC->fd = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void op_findBG_init_ProvidePositionReport_Pkg(
  outC_op_findBG_ProvidePositionReport_Pkg *outC)
{
  static kcg_size idx;

  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_c = kcg_lit_int32(0);
  outC->_L2.nid_bg = kcg_lit_int32(0);
  outC->_L2.q_link = Q_LINK_Unlinked;
  outC->_L2.location.nominal = kcg_lit_int32(0);
  outC->_L2.location.d_min = kcg_lit_int32(0);
  outC->_L2.location.d_max = kcg_lit_int32(0);
  outC->_L2.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.valid = kcg_true;
  outC->_L2.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L2.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L2.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L2.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L2.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L2.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L2.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L2.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L2.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L2.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L2.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L2.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L2.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L2.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L2.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L2.missed = kcg_true;
  outC->_L1 = kcg_true;
  outC->fd = kcg_true;
  outC->cond = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void op_findBG_reset_ProvidePositionReport_Pkg(
  outC_op_findBG_ProvidePositionReport_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_findBG_ProvidePositionReport_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

