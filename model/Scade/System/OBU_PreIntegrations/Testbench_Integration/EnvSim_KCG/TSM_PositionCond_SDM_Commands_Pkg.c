/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TSM_PositionCond_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::TSM_PositionCond/ */
void TSM_PositionCond_SDM_Commands_Pkg(
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC)
{
  outC->_L82 = floiIsSB1;
  outC->_L83 = !outC->_L82;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L81, trainLocations);
  outC->_L79 = kcg_true;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L7, locations);
  outC->_L74 = outC->_L7.d_EBI_of_V_est;
  outC->_L71 = outC->_L81.maxSafeFrontEndPostion;
  outC->_L75 = outC->_L71 <= outC->_L74;
  outC->_L78 = !outC->_L75;
  outC->_L72 = outC->_L7.d_I_of_V_MRSP;
  outC->_L73 = outC->_L71 <= outC->_L72;
  outC->_L76 = !outC->_L73;
  outC->_L77 = outC->_L76 & outC->_L75;
  outC->FLOI_eq_SBI1 = outC->_L82;
  outC->_L64 = outC->FLOI_eq_SBI1;
  outC->_L57 = outC->_L81.estimatedFrontEndPosition;
  outC->_L56 = outC->_L7.d_FLOI_of_V_est;
  outC->_L62 = outC->_L56 >= outC->_L57;
  outC->_L67 = !outC->_L62;
  outC->_L69 = outC->_L67 & outC->_L64;
  outC->_L46 = outC->_L81.maxSafeFrontEndPostion;
  outC->_L59 = outC->_L46 <= outC->_L56;
  outC->_L66 = !outC->_L59;
  outC->FLOI_eq_SBI2 = outC->_L83;
  outC->_L51 = outC->FLOI_eq_SBI2;
  outC->_L68 = outC->_L51 & outC->_L66;
  outC->_L70 = outC->_L68 | outC->_L69;
  outC->_L55 = outC->_L7.d_I_of_V_MRSP;
  outC->_L61 = outC->_L55 < outC->_L57;
  outC->_L63 = outC->_L61 & outC->_L62 & outC->_L64;
  outC->_L58 = outC->_L46 > outC->_L55;
  outC->_L60 = outC->_L51 & outC->_L58 & outC->_L59;
  outC->_L65 = outC->_L60 | outC->_L63;
  outC->_L45 = outC->_L7.d_W_of_V_est;
  outC->_L48 = outC->_L45 < outC->_L46;
  outC->_L50 = outC->_L48 & outC->_L51;
  outC->_L35 = outC->_L81.estimatedFrontEndPosition;
  outC->_L47 = outC->_L35 > outC->_L45;
  outC->_L44 = outC->FLOI_eq_SBI1;
  outC->_L49 = outC->_L44 & outC->_L47;
  outC->_L54 = outC->_L49 | outC->_L50;
  outC->_L34 = outC->_L7.d_W_of_V_est;
  outC->_L41 = outC->_L34 >= outC->_L35;
  outC->_L33 = outC->_L7.d_I_of_V_MRSP;
  outC->_L40 = outC->_L33 < outC->_L35;
  outC->_L42 = outC->_L40 & outC->_L41 & outC->_L44;
  outC->_L26 = outC->_L81.maxSafeFrontEndPostion;
  outC->_L38 = outC->_L26 <= outC->_L34;
  outC->_L36 = outC->_L26 > outC->_L33;
  outC->_L31 = outC->FLOI_eq_SBI2;
  outC->_L39 = outC->_L31 & outC->_L36 & outC->_L38;
  outC->_L43 = outC->_L39 | outC->_L42;
  outC->_L25 = outC->_L7.d_P_of_V_est;
  outC->_L28 = outC->_L25 < outC->_L26;
  outC->_L30 = outC->_L28 & outC->_L31;
  outC->_L12 = outC->_L81.estimatedFrontEndPosition;
  outC->_L27 = outC->_L12 > outC->_L25;
  outC->_L19 = outC->FLOI_eq_SBI1;
  outC->_L29 = outC->_L19 & outC->_L27;
  outC->_L32 = outC->_L29 | outC->_L30;
  outC->_L11 = outC->_L7.d_I_of_V_est;
  outC->_L14 = outC->_L11 >= outC->_L12;
  outC->_L21 = !outC->_L14;
  outC->_L23 = outC->_L21 & outC->_L19;
  outC->_L10 = outC->_L81.maxSafeFrontEndPostion;
  outC->_L13 = outC->_L10 <= outC->_L11;
  outC->_L20 = !outC->_L13;
  outC->_L18 = outC->FLOI_eq_SBI2;
  outC->_L22 = outC->_L18 & outC->_L20;
  outC->_L24 = outC->_L22 | outC->_L23;
  outC->_L17 = outC->_L14 & outC->_L19;
  outC->_L15 = outC->_L18 & outC->_L13;
  outC->_L16 = outC->_L15 | outC->_L17;
  outC->_L6 = kcg_true;
  outC->_L3.t1 = outC->_L6;
  outC->_L3.t2 = outC->_L16;
  outC->_L3.t3 = outC->_L24;
  outC->_L3.t4 = outC->_L32;
  outC->_L3.t5 = outC->_L16;
  outC->_L3.t6 = outC->_L43;
  outC->_L3.t7 = outC->_L54;
  outC->_L3.t8 = outC->_L16;
  outC->_L3.t9 = outC->_L65;
  outC->_L3.t10 = outC->_L70;
  outC->_L3.t11 = outC->_L73;
  outC->_L3.t12 = outC->_L77;
  outC->_L3.t13 = outC->_L78;
  outC->_L3.t14 = outC->_L79;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&outC->triggerConds, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void TSM_PositionCond_init_SDM_Commands_Pkg(
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81.valid = kcg_true;
  outC->_L81.timestamp = kcg_lit_int32(0);
  outC->_L81.trainPositionIsUnknown = kcg_true;
  outC->_L81.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L81.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L81.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L81.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L81.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L81.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L81.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L81.LRBG.valid = kcg_true;
  outC->_L81.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L81.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L81.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L81.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L81.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L81.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L81.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L81.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L81.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L81.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L81.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L81.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L81.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L81.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L81.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L81.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L81.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L81.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L81.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L81.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L81.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L81.LRBG.missed = kcg_true;
  outC->_L81.prvLRBG.valid = kcg_true;
  outC->_L81.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L81.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L81.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L81.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L81.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L81.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L81.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L81.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L81.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L81.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L81.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L81.prvLRBG.missed = kcg_true;
  outC->_L81.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L81.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L81.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L81.linkingIsUsedOnboard = kcg_true;
  outC->_L81.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L81.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L81.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L74 = kcg_lit_int32(0);
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_lit_int32(0);
  outC->_L56 = kcg_lit_int32(0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L54 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L3.t1 = kcg_true;
  outC->_L3.t2 = kcg_true;
  outC->_L3.t3 = kcg_true;
  outC->_L3.t4 = kcg_true;
  outC->_L3.t5 = kcg_true;
  outC->_L3.t6 = kcg_true;
  outC->_L3.t7 = kcg_true;
  outC->_L3.t8 = kcg_true;
  outC->_L3.t9 = kcg_true;
  outC->_L3.t10 = kcg_true;
  outC->_L3.t11 = kcg_true;
  outC->_L3.t12 = kcg_true;
  outC->_L3.t13 = kcg_true;
  outC->_L3.t14 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L7.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L7.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L7.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L7.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L7.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L7.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L7.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L7.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L7.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L7.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L7.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L7.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L7.d_target = kcg_lit_int32(0);
  outC->_L7.d_eoa = kcg_lit_int32(0);
  outC->_L7.d_svl = kcg_lit_int32(0);
  outC->_L7.Preindication_EBD_location_valid = kcg_true;
  outC->_L7.Preindication_SBD_location_valid = kcg_true;
  outC->_L7.RSM_start_location_EBD_valid = kcg_true;
  outC->_L7.RSM_start_location_SBD_valid = kcg_true;
  outC->FLOI_eq_SBI2 = kcg_true;
  outC->FLOI_eq_SBI1 = kcg_true;
  outC->triggerConds.t1 = kcg_true;
  outC->triggerConds.t2 = kcg_true;
  outC->triggerConds.t3 = kcg_true;
  outC->triggerConds.t4 = kcg_true;
  outC->triggerConds.t5 = kcg_true;
  outC->triggerConds.t6 = kcg_true;
  outC->triggerConds.t7 = kcg_true;
  outC->triggerConds.t8 = kcg_true;
  outC->triggerConds.t9 = kcg_true;
  outC->triggerConds.t10 = kcg_true;
  outC->triggerConds.t11 = kcg_true;
  outC->triggerConds.t12 = kcg_true;
  outC->triggerConds.t13 = kcg_true;
  outC->triggerConds.t14 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TSM_PositionCond_reset_SDM_Commands_Pkg(
  outC_TSM_PositionCond_SDM_Commands_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TSM_PositionCond_SDM_Commands_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

