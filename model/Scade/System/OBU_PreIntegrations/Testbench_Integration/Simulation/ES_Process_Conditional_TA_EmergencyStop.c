/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Process_Conditional/ */
void ES_Process_Conditional_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d_ref/ */
  D_REF d_ref,
  /* q_dir/ */
  Q_DIR q_dir,
  /* d_emergencystop/ */
  D_EMERGENCYSTOP d_emergencystop,
  /* receivedMsg15/ */
  kcg_bool receivedMsg15,
  /* receivedMsg18/ */
  kcg_bool receivedMsg18,
  /* TrainPositionIn/ */
  trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* currentEOA/ */
  L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  /* cesAccepted/ */
  static kcg_bool cesAccepted_partial;
  /* updateEOA/ */
  static kcg_bool updateEOA_partial;
  /* newEOA/ */
  static L_internal_Type_Obu_BasicTypes_Pkg newEOA_partial;
  /* cesRevoked/ */
  static kcg_bool cesRevoked_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store_partial;
  /* cesAccepted/ */
  static kcg_bool _1_cesAccepted_partial;
  /* updateEOA/ */
  static kcg_bool _2_updateEOA_partial;
  /* newEOA/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_newEOA_partial;
  /* cesRevoked/ */
  static kcg_bool _4_cesRevoked_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _5_store_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _6_store_partial;
  /* cesRevoked/ */
  static kcg_bool _7_cesRevoked_partial;
  /* newEOA/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _8_newEOA_partial;
  /* updateEOA/ */
  static kcg_bool _9_updateEOA_partial;
  /* cesAccepted/ */
  static kcg_bool _10_cesAccepted_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _11_store_partial;
  /* cesRevoked/ */
  static kcg_bool _12_cesRevoked_partial;
  /* newEOA/ */
  static L_internal_Type_Obu_BasicTypes_Pkg _13_newEOA_partial;
  /* updateEOA/ */
  static kcg_bool _14_updateEOA_partial;
  /* cesAccepted/ */
  static kcg_bool _15_cesAccepted_partial;
  /* store/ */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;

  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &last_store,
    &outC->store);
  outC->IfBlock1_clock = receivedMsg15;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L4_then_IfBlock1 = q_scale;
    outC->_L5_then_IfBlock1 = d_ref;
    outC->_L6_then_IfBlock1 = q_dir;
    outC->_L7_then_IfBlock1 = d_emergencystop;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L8_then_IfBlock1,
      TrainPositionIn);
    outC->_L9_then_IfBlock1 = currentEOA;
    /* IfBlock1:then:_L1=(TA_EmergencyStop::ES_AcceptOrReject_CES#2)/ */
    ES_AcceptOrReject_CES_TA_EmergencyStop(
      outC->_L4_then_IfBlock1,
      outC->_L5_then_IfBlock1,
      outC->_L6_then_IfBlock1,
      outC->_L7_then_IfBlock1,
      &outC->_L8_then_IfBlock1,
      outC->_L9_then_IfBlock1,
      &outC->Context_ES_AcceptOrReject_CES_2);
    outC->_L1_then_IfBlock1 = outC->Context_ES_AcceptOrReject_CES_2.updateEOA;
    outC->_L2_then_IfBlock1 = outC->Context_ES_AcceptOrReject_CES_2.newEOA;
    outC->_L3_then_IfBlock1 = outC->Context_ES_AcceptOrReject_CES_2.cesAccepted;
    outC->_L11_then_IfBlock1 = kcg_false;
    outC->_L12_then_IfBlock1 = nid_em;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L13_then_IfBlock1,
      &last_store);
    /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#1)/ */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      outC->_L3_then_IfBlock1,
      outC->_L11_then_IfBlock1,
      outC->_L12_then_IfBlock1,
      &outC->_L13_then_IfBlock1,
      &outC->Context_Manage_NID_EM_Store_1);
    outC->_L15_then_IfBlock1 = outC->Context_Manage_NID_EM_Store_1.handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L10_then_IfBlock1,
      &outC->Context_Manage_NID_EM_Store_1.outStore);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store_partial,
      &outC->_L10_then_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store_partial);
  }
  else {
    outC->else_clock_IfBlock1 = receivedMsg18;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = kcg_false;
      outC->_L3_then_else_IfBlock1 = kcg_true;
      outC->_L4_then_else_IfBlock1 = nid_em;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L5_then_else_IfBlock1,
        &last_store);
      /* IfBlock1:else:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
      Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
        outC->_L2_then_else_IfBlock1,
        outC->_L3_then_else_IfBlock1,
        outC->_L4_then_else_IfBlock1,
        &outC->_L5_then_else_IfBlock1,
        &outC->Context_Manage_NID_EM_Store_2);
      outC->_L6_then_else_IfBlock1 = outC->Context_Manage_NID_EM_Store_2.handled;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L1_then_else_IfBlock1,
        &outC->Context_Manage_NID_EM_Store_2.outStore);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_11_store_partial,
        &outC->_L1_then_else_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_5_store_partial,
        &_11_store_partial);
    }
    else {
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_6_store_partial,
        &last_store);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_5_store_partial,
        &_6_store_partial);
    }
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &_5_store_partial);
  }
  outC->_L1 = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->cesActive = outC->_L1;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L14_then_IfBlock1 = kcg_false;
    cesRevoked_partial = outC->_L14_then_IfBlock1;
    newEOA_partial = outC->_L2_then_IfBlock1;
    updateEOA_partial = outC->_L1_then_IfBlock1;
    cesAccepted_partial = outC->_L15_then_IfBlock1;
    outC->cesAccepted = cesAccepted_partial;
    outC->updateEOA = updateEOA_partial;
    outC->newEOA = newEOA_partial;
    outC->cesRevoked = cesRevoked_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L10_then_else_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      outC->_L8_then_else_IfBlock1 = kcg_false;
      outC->_L7_then_else_IfBlock1 = kcg_false;
      _13_newEOA_partial = outC->_L10_then_else_IfBlock1;
      _15_cesAccepted_partial = outC->_L8_then_else_IfBlock1;
      _12_cesRevoked_partial = outC->_L6_then_else_IfBlock1;
      _14_updateEOA_partial = outC->_L7_then_else_IfBlock1;
      _1_cesAccepted_partial = _15_cesAccepted_partial;
      _2_updateEOA_partial = _14_updateEOA_partial;
      _3_newEOA_partial = _13_newEOA_partial;
      _4_cesRevoked_partial = _12_cesRevoked_partial;
    }
    else {
      outC->_L6_else_else_IfBlock1 = kcg_false;
      _7_cesRevoked_partial = outC->_L6_else_else_IfBlock1;
      outC->_L5_else_else_IfBlock1 = kcg_false;
      _10_cesAccepted_partial = outC->_L5_else_else_IfBlock1;
      outC->_L4_else_else_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      outC->_L3_else_else_IfBlock1 = kcg_false;
      _9_updateEOA_partial = outC->_L3_else_else_IfBlock1;
      _8_newEOA_partial = outC->_L4_else_else_IfBlock1;
      _1_cesAccepted_partial = _10_cesAccepted_partial;
      _2_updateEOA_partial = _9_updateEOA_partial;
      _3_newEOA_partial = _8_newEOA_partial;
      _4_cesRevoked_partial = _7_cesRevoked_partial;
    }
    outC->cesAccepted = _1_cesAccepted_partial;
    outC->updateEOA = _2_updateEOA_partial;
    outC->newEOA = _3_newEOA_partial;
    outC->cesRevoked = _4_cesRevoked_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Conditional_init_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L1 = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L10_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1 = kcg_true;
  outC->_L7_then_else_IfBlock1 = kcg_true;
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L5_then_else_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L5_then_else_IfBlock1.items[idx].nid_em = kcg_lit_int32(0);
    outC->_L5_then_else_IfBlock1.items[idx].valid = kcg_true;
  }
  outC->_L4_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_else_IfBlock1 = kcg_true;
  outC->_L2_then_else_IfBlock1 = kcg_true;
  outC->_L1_then_else_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 8; idx1++) {
    outC->_L1_then_else_IfBlock1.items[idx1].nid_em = kcg_lit_int32(0);
    outC->_L1_then_else_IfBlock1.items[idx1].valid = kcg_true;
  }
  outC->_L6_else_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_IfBlock1 = kcg_true;
  outC->_L3_else_else_IfBlock1 = kcg_true;
  outC->_L4_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L3_then_IfBlock1 = kcg_true;
  outC->_L2_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1 = kcg_true;
  outC->_L4_then_IfBlock1 = Q_SCALE_10_cm_scale;
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = Q_DIR_Reverse;
  outC->_L7_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.valid = kcg_true;
  outC->_L8_then_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L8_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L8_then_IfBlock1.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.valid = kcg_true;
  outC->_L8_then_IfBlock1.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L8_then_IfBlock1.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8_then_IfBlock1.LRBG.missed = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L8_then_IfBlock1.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].valid =
      kcg_true;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int32(0);
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L8_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L8_then_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L8_then_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L8_then_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L8_then_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L8_then_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L8_then_IfBlock1.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 8; idx4++) {
    outC->_L10_then_IfBlock1.items[idx4].nid_em = kcg_lit_int32(0);
    outC->_L10_then_IfBlock1.items[idx4].valid = kcg_true;
  }
  outC->_L11_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1.nfree = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L13_then_IfBlock1.items[idx5].nid_em = kcg_lit_int32(0);
    outC->_L13_then_IfBlock1.items[idx5].valid = kcg_true;
  }
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->_L15_then_IfBlock1 = kcg_true;
  outC->cesRevoked = kcg_true;
  outC->cesActive = kcg_true;
  outC->newEOA = kcg_lit_int32(0);
  outC->updateEOA = kcg_true;
  outC->cesAccepted = kcg_true;
  /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#1)/ */
  Manage_NID_EM_Store_init_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_1);
  /* IfBlock1:then:_L1=(TA_EmergencyStop::ES_AcceptOrReject_CES#2)/ */
  ES_AcceptOrReject_CES_init_TA_EmergencyStop(
    &outC->Context_ES_AcceptOrReject_CES_2);
  /* IfBlock1:else:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
  Manage_NID_EM_Store_init_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_2);
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
      &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  /* IfBlock1:then:_L15=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#1)/ */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_1);
  /* IfBlock1:then:_L1=(TA_EmergencyStop::ES_AcceptOrReject_CES#2)/ */
  ES_AcceptOrReject_CES_reset_TA_EmergencyStop(
    &outC->Context_ES_AcceptOrReject_CES_2);
  /* IfBlock1:else:then:_L6=(TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store#2)/ */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
    &outC->Context_Manage_NID_EM_Store_2);
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
      &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ES_Process_Conditional_TA_EmergencyStop(
  SV_ES_Process_Conditional_TA_EmergencyStop *SV,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &SV->Context_store,
    &outC->store);
}

void kcg_load_SV_ES_Process_Conditional_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC,
  SV_ES_Process_Conditional_TA_EmergencyStop *SV)
{
  kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
    &outC->store,
    &SV->Context_store);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Process_Conditional_TA_EmergencyStop.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

