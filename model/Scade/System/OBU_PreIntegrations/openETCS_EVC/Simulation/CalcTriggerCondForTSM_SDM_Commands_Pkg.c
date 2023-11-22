/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcTriggerCondForTSM_SDM_Commands_Pkg.h"

/* SDM_Commands_Pkg::CalcTriggerCondForTSM/ */
void CalcTriggerCondForTSM_SDM_Commands_Pkg(
  /* speeds/ */
  Speeds_T_SDM_Types_Pkg *speeds,
  /* locations/ */
  SDM_Locations_T_SDM_Types_Pkg *locations,
  /* mrdt/ */
  Target_T_TargetManagement_types *mrdt,
  /* trainLocations/ */
  trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* floiIsSB1/ */
  kcg_bool floiIsSB1,
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC)
{
  kcg_size idx;

  outC->_L482 = floiIsSB1;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L481, trainLocations);
  kcg_copy_Target_T_TargetManagement_types(&outC->_L4, mrdt);
  outC->_L480 = outC->_L4.targetType;
  kcg_copy_Speeds_T_SDM_Types_Pkg(&outC->_L1, speeds);
  /* _L11=(SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA#1)/ */
  TSM_EstSpeedCond_MRSP_LOA_SDM_Commands_Pkg(
    &outC->_L1,
    &outC->Context_TSM_EstSpeedCond_MRSP_LOA_1);
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(
    &outC->_L11,
    &outC->Context_TSM_EstSpeedCond_MRSP_LOA_1.triggerConds);
  /* _L10=(SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL#1)/ */
  TSM_EstSpeedCond_EOA_SvL_SDM_Commands_Pkg(
    &outC->_L1,
    &outC->Context_TSM_EstSpeedCond_EOA_SvL_1);
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(
    &outC->_L10,
    &outC->Context_TSM_EstSpeedCond_EOA_SvL_1.triggerConds);
  outC->_L9 = SvL_TargetManagement_types;
  outC->_L5 = outC->_L480 == outC->_L9;
  outC->_L8 = EoA_TargetManagement_types;
  outC->_L6 = outC->_L8 == outC->_L480;
  outC->_L7 = outC->_L6 | outC->_L5;
  /* _L3= */
  if (outC->_L7) {
    kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&outC->_L3, &outC->_L10);
  }
  else {
    kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&outC->_L3, &outC->_L11);
  }
  outC->_L409 = outC->_L3.t1;
  outC->_L410 = outC->_L3.t2;
  outC->_L411 = outC->_L3.t3;
  outC->_L412 = outC->_L3.t4;
  outC->_L413 = outC->_L3.t5;
  outC->_L414 = outC->_L3.t6;
  outC->_L415 = outC->_L3.t7;
  outC->_L416 = outC->_L3.t8;
  outC->_L417 = outC->_L3.t9;
  outC->_L418 = outC->_L3.t10;
  outC->_L419 = outC->_L3.t11;
  outC->_L420 = outC->_L3.t12;
  outC->_L421 = outC->_L3.t13;
  outC->_L422 = outC->_L3.t14;
  outC->_L479[0] = outC->_L409;
  outC->_L479[1] = outC->_L410;
  outC->_L479[2] = outC->_L411;
  outC->_L479[3] = outC->_L412;
  outC->_L479[4] = outC->_L413;
  outC->_L479[5] = outC->_L414;
  outC->_L479[6] = outC->_L415;
  outC->_L479[7] = outC->_L416;
  outC->_L479[8] = outC->_L417;
  outC->_L479[9] = outC->_L418;
  outC->_L479[10] = outC->_L419;
  outC->_L479[11] = outC->_L420;
  outC->_L479[12] = outC->_L421;
  outC->_L479[13] = outC->_L422;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&outC->_L2, locations);
  /* _L12=(SDM_Commands_Pkg::TSM_PositionCond#1)/ */
  TSM_PositionCond_SDM_Commands_Pkg(
    &outC->_L2,
    &outC->_L481,
    outC->_L482,
    &outC->Context_TSM_PositionCond_1);
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(
    &outC->_L12,
    &outC->Context_TSM_PositionCond_1.triggerConds);
  outC->_L239 = outC->_L12.t1;
  outC->_L240 = outC->_L12.t2;
  outC->_L241 = outC->_L12.t3;
  outC->_L242 = outC->_L12.t4;
  outC->_L243 = outC->_L12.t5;
  outC->_L244 = outC->_L12.t6;
  outC->_L245 = outC->_L12.t7;
  outC->_L246 = outC->_L12.t8;
  outC->_L247 = outC->_L12.t9;
  outC->_L248 = outC->_L12.t10;
  outC->_L249 = outC->_L12.t11;
  outC->_L250 = outC->_L12.t12;
  outC->_L251 = outC->_L12.t13;
  outC->_L252 = outC->_L12.t14;
  outC->_L365[0] = outC->_L239;
  outC->_L365[1] = outC->_L240;
  outC->_L365[2] = outC->_L241;
  outC->_L365[3] = outC->_L242;
  outC->_L365[4] = outC->_L243;
  outC->_L365[5] = outC->_L244;
  outC->_L365[6] = outC->_L245;
  outC->_L365[7] = outC->_L246;
  outC->_L365[8] = outC->_L247;
  outC->_L365[9] = outC->_L248;
  outC->_L365[10] = outC->_L249;
  outC->_L365[11] = outC->_L250;
  outC->_L365[12] = outC->_L251;
  outC->_L365[13] = outC->_L252;
  /* _L13= */
  for (idx = 0; idx < 14; idx++) {
    outC->_L13[idx] = outC->_L479[idx] & outC->_L365[idx];
  }
  outC->_L211 = outC->_L13[0];
  outC->_L212 = outC->_L13[1];
  outC->_L213 = outC->_L13[2];
  outC->_L214 = outC->_L13[3];
  outC->_L215 = outC->_L13[4];
  outC->_L216 = outC->_L13[5];
  outC->_L217 = outC->_L13[6];
  outC->_L218 = outC->_L13[7];
  outC->_L219 = outC->_L13[8];
  outC->_L220 = outC->_L13[9];
  outC->_L221 = outC->_L13[10];
  outC->_L222 = outC->_L13[11];
  outC->_L223 = outC->_L13[12];
  outC->_L224 = outC->_L13[13];
  outC->_L196.t1 = outC->_L211;
  outC->_L196.t2 = outC->_L212;
  outC->_L196.t3 = outC->_L213;
  outC->_L196.t4 = outC->_L214;
  outC->_L196.t5 = outC->_L215;
  outC->_L196.t6 = outC->_L216;
  outC->_L196.t7 = outC->_L217;
  outC->_L196.t8 = outC->_L218;
  outC->_L196.t9 = outC->_L219;
  outC->_L196.t10 = outC->_L220;
  outC->_L196.t11 = outC->_L221;
  outC->_L196.t12 = outC->_L222;
  outC->_L196.t13 = outC->_L223;
  outC->_L196.t14 = outC->_L224;
  kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(&outC->triggerConds, &outC->_L196);
}

#ifndef KCG_USER_DEFINED_INIT
void CalcTriggerCondForTSM_init_SDM_Commands_Pkg(
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L482 = kcg_true;
  outC->_L481.valid = kcg_true;
  outC->_L481.timestamp = kcg_lit_int32(0);
  outC->_L481.trainPositionIsUnknown = kcg_true;
  outC->_L481.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L481.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L481.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L481.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L481.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L481.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L481.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L481.LRBG.valid = kcg_true;
  outC->_L481.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L481.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L481.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L481.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L481.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L481.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L481.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L481.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L481.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L481.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L481.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L481.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L481.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L481.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L481.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L481.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L481.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L481.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L481.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L481.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int32(0);
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int32(0);
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int32(0);
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int32(0);
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L481.LRBG.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int32(0);
  }
  outC->_L481.LRBG.missed = kcg_true;
  outC->_L481.prvLRBG.valid = kcg_true;
  outC->_L481.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L481.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L481.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L481.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L481.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L481.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L481.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L481.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L481.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L481.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int32(0);
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int32(0);
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int32(0);
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int32(0);
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L481.prvLRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int32(0);
  }
  outC->_L481.prvLRBG.missed = kcg_true;
  outC->_L481.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L481.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L481.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L481.linkingIsUsedOnboard = kcg_true;
  outC->_L481.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L481.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L481.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L480 = EoA_TargetManagement_types;
  for (idx2 = 0; idx2 < 14; idx2++) {
    outC->_L479[idx2] = kcg_true;
  }
  outC->_L409 = kcg_true;
  outC->_L410 = kcg_true;
  outC->_L411 = kcg_true;
  outC->_L412 = kcg_true;
  outC->_L413 = kcg_true;
  outC->_L414 = kcg_true;
  outC->_L415 = kcg_true;
  outC->_L416 = kcg_true;
  outC->_L417 = kcg_true;
  outC->_L418 = kcg_true;
  outC->_L419 = kcg_true;
  outC->_L420 = kcg_true;
  outC->_L421 = kcg_true;
  outC->_L422 = kcg_true;
  for (idx3 = 0; idx3 < 14; idx3++) {
    outC->_L365[idx3] = kcg_true;
  }
  outC->_L239 = kcg_true;
  outC->_L240 = kcg_true;
  outC->_L241 = kcg_true;
  outC->_L242 = kcg_true;
  outC->_L243 = kcg_true;
  outC->_L244 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L246 = kcg_true;
  outC->_L247 = kcg_true;
  outC->_L248 = kcg_true;
  outC->_L249 = kcg_true;
  outC->_L250 = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L211 = kcg_true;
  outC->_L212 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L218 = kcg_true;
  outC->_L219 = kcg_true;
  outC->_L220 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L222 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L224 = kcg_true;
  outC->_L196.t1 = kcg_true;
  outC->_L196.t2 = kcg_true;
  outC->_L196.t3 = kcg_true;
  outC->_L196.t4 = kcg_true;
  outC->_L196.t5 = kcg_true;
  outC->_L196.t6 = kcg_true;
  outC->_L196.t7 = kcg_true;
  outC->_L196.t8 = kcg_true;
  outC->_L196.t9 = kcg_true;
  outC->_L196.t10 = kcg_true;
  outC->_L196.t11 = kcg_true;
  outC->_L196.t12 = kcg_true;
  outC->_L196.t13 = kcg_true;
  outC->_L196.t14 = kcg_true;
  for (idx4 = 0; idx4 < 14; idx4++) {
    outC->_L13[idx4] = kcg_true;
  }
  outC->_L12.t1 = kcg_true;
  outC->_L12.t2 = kcg_true;
  outC->_L12.t3 = kcg_true;
  outC->_L12.t4 = kcg_true;
  outC->_L12.t5 = kcg_true;
  outC->_L12.t6 = kcg_true;
  outC->_L12.t7 = kcg_true;
  outC->_L12.t8 = kcg_true;
  outC->_L12.t9 = kcg_true;
  outC->_L12.t10 = kcg_true;
  outC->_L12.t11 = kcg_true;
  outC->_L12.t12 = kcg_true;
  outC->_L12.t13 = kcg_true;
  outC->_L12.t14 = kcg_true;
  outC->_L11.t1 = kcg_true;
  outC->_L11.t2 = kcg_true;
  outC->_L11.t3 = kcg_true;
  outC->_L11.t4 = kcg_true;
  outC->_L11.t5 = kcg_true;
  outC->_L11.t6 = kcg_true;
  outC->_L11.t7 = kcg_true;
  outC->_L11.t8 = kcg_true;
  outC->_L11.t9 = kcg_true;
  outC->_L11.t10 = kcg_true;
  outC->_L11.t11 = kcg_true;
  outC->_L11.t12 = kcg_true;
  outC->_L11.t13 = kcg_true;
  outC->_L11.t14 = kcg_true;
  outC->_L10.t1 = kcg_true;
  outC->_L10.t2 = kcg_true;
  outC->_L10.t3 = kcg_true;
  outC->_L10.t4 = kcg_true;
  outC->_L10.t5 = kcg_true;
  outC->_L10.t6 = kcg_true;
  outC->_L10.t7 = kcg_true;
  outC->_L10.t8 = kcg_true;
  outC->_L10.t9 = kcg_true;
  outC->_L10.t10 = kcg_true;
  outC->_L10.t11 = kcg_true;
  outC->_L10.t12 = kcg_true;
  outC->_L10.t13 = kcg_true;
  outC->_L10.t14 = kcg_true;
  outC->_L9 = EoA_TargetManagement_types;
  outC->_L8 = EoA_TargetManagement_types;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4.targetType = EoA_TargetManagement_types;
  outC->_L4.distance = kcg_lit_int32(0);
  outC->_L4.speed = kcg_lit_int32(0);
  outC->_L4.valid = kcg_true;
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
  outC->_L2.SBD_preindication_location = kcg_lit_int32(0);
  outC->_L2.EBD_preindication_location = kcg_lit_int32(0);
  outC->_L2.EBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L2.SBD_RSM_start_location = kcg_lit_int32(0);
  outC->_L2.d_I_of_V_est = kcg_lit_int32(0);
  outC->_L2.d_I_of_V_MRSP = kcg_lit_int32(0);
  outC->_L2.d_P_of_V_est = kcg_lit_int32(0);
  outC->_L2.d_W_of_V_est = kcg_lit_int32(0);
  outC->_L2.d_FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L2.d_EBI_of_V_est = kcg_lit_int32(0);
  outC->_L2.FLOI_of_V_est = kcg_lit_int32(0);
  outC->_L2.SBI1_of_V_est = kcg_lit_int32(0);
  outC->_L2.SBI2_of_V_est = kcg_lit_int32(0);
  outC->_L2.d_target = kcg_lit_int32(0);
  outC->_L2.d_eoa = kcg_lit_int32(0);
  outC->_L2.d_svl = kcg_lit_int32(0);
  outC->_L2.Preindication_EBD_location_valid = kcg_true;
  outC->_L2.Preindication_SBD_location_valid = kcg_true;
  outC->_L2.RSM_start_location_EBD_valid = kcg_true;
  outC->_L2.RSM_start_location_SBD_valid = kcg_true;
  outC->_L1.V_est = kcg_lit_int32(0);
  outC->_L1.V_MRSP = kcg_lit_int32(0);
  outC->_L1.V_release = kcg_lit_int32(0);
  outC->_L1.V_target = kcg_lit_int32(0);
  outC->_L1.v_p_mrdt = kcg_lit_int32(0);
  outC->_L1.v_p_dmi = kcg_lit_int32(0);
  outC->_L1.v_sbi_mrdt = kcg_lit_int32(0);
  outC->_L1.v_FLOI_dmi = kcg_lit_int32(0);
  outC->_L1.dV_warning_V_MRSP = kcg_lit_int32(0);
  outC->_L1.dV_warning_V_target = kcg_lit_int32(0);
  outC->_L1.dV_sbi_V_MRSP = kcg_lit_int32(0);
  outC->_L1.dV_sbi_V_target = kcg_lit_int32(0);
  outC->_L1.dV_ebi_V_MRSP = kcg_lit_int32(0);
  outC->_L1.dV_ebi_V_target = kcg_lit_int32(0);
  outC->_L1.OdoStandStill = kcg_true;
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
  /* _L12=(SDM_Commands_Pkg::TSM_PositionCond#1)/ */
  TSM_PositionCond_init_SDM_Commands_Pkg(&outC->Context_TSM_PositionCond_1);
  /* _L10=(SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL#1)/ */
  TSM_EstSpeedCond_EOA_SvL_init_SDM_Commands_Pkg(
    &outC->Context_TSM_EstSpeedCond_EOA_SvL_1);
  /* _L11=(SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA#1)/ */
  TSM_EstSpeedCond_MRSP_LOA_init_SDM_Commands_Pkg(
    &outC->Context_TSM_EstSpeedCond_MRSP_LOA_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcTriggerCondForTSM_reset_SDM_Commands_Pkg(
  outC_CalcTriggerCondForTSM_SDM_Commands_Pkg *outC)
{
  /* _L12=(SDM_Commands_Pkg::TSM_PositionCond#1)/ */
  TSM_PositionCond_reset_SDM_Commands_Pkg(&outC->Context_TSM_PositionCond_1);
  /* _L10=(SDM_Commands_Pkg::TSM_EstSpeedCond_EOA_SvL#1)/ */
  TSM_EstSpeedCond_EOA_SvL_reset_SDM_Commands_Pkg(
    &outC->Context_TSM_EstSpeedCond_EOA_SvL_1);
  /* _L11=(SDM_Commands_Pkg::TSM_EstSpeedCond_MRSP_LOA#1)/ */
  TSM_EstSpeedCond_MRSP_LOA_reset_SDM_Commands_Pkg(
    &outC->Context_TSM_EstSpeedCond_MRSP_LOA_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalcTriggerCondForTSM_SDM_Commands_Pkg.c
** Generation date: 2023-11-06T13:54:29
*************************************************************$ */

