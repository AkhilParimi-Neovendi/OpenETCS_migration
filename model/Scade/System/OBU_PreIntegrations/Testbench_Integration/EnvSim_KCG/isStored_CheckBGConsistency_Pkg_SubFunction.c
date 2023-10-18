/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::isStored/ */
void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* recivedBG_header/ */
  BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* storedBG/ */
  positionedBG_T_TrainPosition_Types_Pck *storedBG,
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, recivedBG_header);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, storedBG);
  outC->_L6 = outC->_L4.nid_c;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L7, recivedBG_header);
  outC->_L12 = outC->_L7.nid_c;
  outC->_L11 = outC->_L12 != outC->_L6;
  outC->_L9 = outC->_L7.nid_bg;
  outC->_L5 = outC->_L4.nid_bg;
  outC->_L10 = outC->_L5 != outC->_L9;
  outC->_L13 = outC->_L10 | outC->_L11;
  outC->go_on = outC->_L13;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->acc_out, &outC->_L14);
}

#ifndef KCG_USER_DEFINED_INIT
void isStored_init_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC)
{
  static kcg_size idx;

  outC->_L14.valid = kcg_true;
  outC->_L14.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L14.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14.q_media = Q_MEDIA_Balise;
  outC->_L14.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L14.m_mcount = kcg_lit_int64(0);
  outC->_L14.nid_c = kcg_lit_int64(0);
  outC->_L14.nid_bg = kcg_lit_int64(0);
  outC->_L14.q_link = Q_LINK_Unlinked;
  outC->_L14.bgPosition.valid = kcg_true;
  outC->_L14.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L14.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L14.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L14.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L14.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L14.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L14.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L14.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L14.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L14.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L14.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L14.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L14.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L14.q_nvlocacc = kcg_lit_int64(0);
  outC->_L14.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L14.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L14.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int64(0);
  outC->_L7.valid = kcg_true;
  outC->_L7.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L7.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L7.q_media = Q_MEDIA_Balise;
  outC->_L7.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L7.m_mcount = kcg_lit_int64(0);
  outC->_L7.nid_c = kcg_lit_int64(0);
  outC->_L7.nid_bg = kcg_lit_int64(0);
  outC->_L7.q_link = Q_LINK_Unlinked;
  outC->_L7.bgPosition.valid = kcg_true;
  outC->_L7.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L7.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L7.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L7.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L7.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L7.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L7.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L7.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L7.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L7.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L7.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L7.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L7.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L7.q_nvlocacc = kcg_lit_int64(0);
  outC->_L7.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L7.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L7.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4.valid = kcg_true;
  outC->_L4.nid_c = kcg_lit_int64(0);
  outC->_L4.nid_bg = kcg_lit_int64(0);
  outC->_L4.q_link = Q_LINK_Unlinked;
  outC->_L4.location.nominal = kcg_lit_int64(0);
  outC->_L4.location.d_min = kcg_lit_int64(0);
  outC->_L4.location.d_max = kcg_lit_int64(0);
  outC->_L4.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.valid = kcg_true;
  outC->_L4.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L4.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L4.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L4.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L4.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L4.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L4.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L4.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L4.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L4.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L4.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L4.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L4.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L4.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L4.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L4.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L4.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L4.missed = kcg_true;
  outC->acc_out.valid = kcg_true;
  outC->acc_out.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->acc_out.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->acc_out.q_media = Q_MEDIA_Balise;
  outC->acc_out.n_total = N_TOTAL_1_balise_in_the_group;
  outC->acc_out.m_mcount = kcg_lit_int64(0);
  outC->acc_out.nid_c = kcg_lit_int64(0);
  outC->acc_out.nid_bg = kcg_lit_int64(0);
  outC->acc_out.q_link = Q_LINK_Unlinked;
  outC->acc_out.bgPosition.valid = kcg_true;
  outC->acc_out.bgPosition.timestamp = kcg_lit_int64(0);
  outC->acc_out.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->acc_out.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->acc_out.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->acc_out.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->acc_out.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->acc_out.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->acc_out.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->acc_out.bgPosition.acceleration = kcg_lit_int64(0);
  outC->acc_out.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->acc_out.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->acc_out.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->acc_out.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->acc_out.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->acc_out.q_nvlocacc = kcg_lit_int64(0);
  outC->acc_out.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->acc_out.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->acc_out.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->go_on = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void isStored_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** isStored_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

