/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::mobileCtrlCmdRouter_out/ */
void mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* additionalSessionCmdsFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *additionalSessionCmdsFromTrack_in,
  /* p42_sessionCmd_for_acceptingRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_acceptingRBC_in,
  /* p42_sessionCmd_for_handingOverRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p42_sessionCmd_for_handingOverRBC_in,
  /* p45_radioNetworkRegistrationOrder_for_handingOverRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder_for_handingOverRBC_in,
  /* p45_radioNetworkRegistrationOrder_for_acceptingRBC_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *_1_p45_radioNetworkRegistrationOrder_for_acceptingRBC_in,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* p45_radioNetworkRegistrationOrder_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _2_p45_radioNetworkRegistrationOrder_1_partial;
  /* p42_sessionCmd_for_RBC_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_RBC_1_partial;
  /* additionalSessionCmdsFromTrack_for_RBC_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _3_additionalSessionCmdsFromTrack_for_RBC_1_partial;
  /* p45_radioNetworkRegistrationOrder_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _4_p45_radioNetworkRegistrationOrder_2_partial;
  /* p42_sessionCmd_for_RBC_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg p42_sessionCmd_for_RBC_2_partial;
  /* additionalSessionCmdsFromTrack_for_RBC_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _5_additionalSessionCmdsFromTrack_for_RBC_2_partial;
  /* p45_radioNetworkRegistrationOrder_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _6_p45_radioNetworkRegistrationOrder_1_partial;
  /* p42_sessionCmd_for_RBC_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _7_p42_sessionCmd_for_RBC_1_partial;
  /* additionalSessionCmdsFromTrack_for_RBC_1/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _8_additionalSessionCmdsFromTrack_for_RBC_1_partial;
  /* p45_radioNetworkRegistrationOrder_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _9_p45_radioNetworkRegistrationOrder_2_partial;
  /* p42_sessionCmd_for_RBC_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _10_p42_sessionCmd_for_RBC_2_partial;
  /* additionalSessionCmdsFromTrack_for_RBC_2/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg _11_additionalSessionCmdsFromTrack_for_RBC_2_partial;

  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_5_additionalSessionCmdsFromTrack_for_RBC_2_partial,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p42_sessionCmd_for_RBC_2_partial,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_4_p45_radioNetworkRegistrationOrder_2_partial,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L14_then_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L16_then_IfBlock1,
      _1_p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    outC->_L17_then_IfBlock1 = outC->_L16_then_IfBlock1.valid;
    /* IfBlock1:then:_L18= */
    if (outC->_L17_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L18_then_IfBlock1,
        &outC->_L16_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L18_then_IfBlock1,
        &outC->_L14_then_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L15_then_IfBlock1,
      additionalSessionCmdsFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_3_additionalSessionCmdsFromTrack_for_RBC_1_partial,
      &outC->_L15_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_2_p45_radioNetworkRegistrationOrder_1_partial,
      &outC->_L18_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L9_then_IfBlock1,
      p42_sessionCmd_for_acceptingRBC_in);
    outC->_L13_then_IfBlock1 = outC->_L9_then_IfBlock1.valid;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L11_then_IfBlock1,
      p42_sessionCmd_for_handingOverRBC_in);
    /* IfBlock1:then:_L12= */
    if (outC->_L13_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L12_then_IfBlock1,
        &outC->_L9_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L12_then_IfBlock1,
        &outC->_L11_then_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &p42_sessionCmd_for_RBC_1_partial,
      &outC->_L12_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_1,
      &_2_p45_radioNetworkRegistrationOrder_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_RBC_1,
      &p42_sessionCmd_for_RBC_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->additionalSessionCmdsFromTrack_for_RBC_1,
      &_3_additionalSessionCmdsFromTrack_for_RBC_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_1_p45_radioNetworkRegistrationOrder_2,
      &_4_p45_radioNetworkRegistrationOrder_2_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_RBC_2,
      &p42_sessionCmd_for_RBC_2_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_2_additionalSessionCmdsFromTrack_for_RBC_2,
      &_5_additionalSessionCmdsFromTrack_for_RBC_2_partial);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L66_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L62_else_IfBlock1,
      _1_p45_radioNetworkRegistrationOrder_for_acceptingRBC_in);
    outC->_L18_else_IfBlock1 = handingOverMobile_is_mobile_1;
    /* IfBlock1:else:_L63= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L63_else_IfBlock1,
        &outC->_L62_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L63_else_IfBlock1,
        &outC->_L66_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L44_else_IfBlock1,
      p45_radioNetworkRegistrationOrder_for_handingOverRBC_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L61_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* IfBlock1:else:_L47= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L47_else_IfBlock1,
        &outC->_L61_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L47_else_IfBlock1,
        &outC->_L44_else_IfBlock1);
    }
    outC->_L69_else_IfBlock1 = outC->_L47_else_IfBlock1.valid;
    /* IfBlock1:else:_L70= */
    if (outC->_L69_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L70_else_IfBlock1,
        &outC->_L47_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L70_else_IfBlock1,
        &outC->_L63_else_IfBlock1);
    }
    /* IfBlock1:else:_L64= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L64_else_IfBlock1,
        &outC->_L66_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L64_else_IfBlock1,
        &outC->_L62_else_IfBlock1);
    }
    /* IfBlock1:else:_L46= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L46_else_IfBlock1,
        &outC->_L44_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L46_else_IfBlock1,
        &outC->_L61_else_IfBlock1);
    }
    outC->_L67_else_IfBlock1 = outC->_L46_else_IfBlock1.valid;
    /* IfBlock1:else:_L68= */
    if (outC->_L67_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L68_else_IfBlock1,
        &outC->_L46_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L68_else_IfBlock1,
        &outC->_L64_else_IfBlock1);
    }
    outC->_L49_else_IfBlock1 = useInformationFromAcceptingRBC;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L58_else_IfBlock1,
      additionalSessionCmdsFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L51_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* IfBlock1:else:_L52= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L52_else_IfBlock1,
        &outC->_L51_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L52_else_IfBlock1,
        &outC->_L58_else_IfBlock1);
    }
    /* IfBlock1:else:_L50= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L50_else_IfBlock1,
        &outC->_L58_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L50_else_IfBlock1,
        &outC->_L51_else_IfBlock1);
    }
    /* IfBlock1:else:_L60= */
    if (outC->_L49_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L60_else_IfBlock1,
        &outC->_L50_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L60_else_IfBlock1,
        &outC->_L52_else_IfBlock1);
    }
    /* IfBlock1:else:_L59= */
    if (outC->_L49_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L59_else_IfBlock1,
        &outC->_L52_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L59_else_IfBlock1,
        &outC->_L50_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_11_additionalSessionCmdsFromTrack_for_RBC_2_partial,
      &outC->_L60_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_8_additionalSessionCmdsFromTrack_for_RBC_1_partial,
      &outC->_L59_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_9_p45_radioNetworkRegistrationOrder_2_partial,
      &outC->_L70_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_6_p45_radioNetworkRegistrationOrder_1_partial,
      &outC->_L68_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L43_else_IfBlock1,
      p42_sessionCmd_for_handingOverRBC_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L39_else_IfBlock1,
      p42_sessionCmd_for_acceptingRBC_in);
    /* IfBlock1:else:_L41= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L41_else_IfBlock1,
        &outC->_L43_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L41_else_IfBlock1,
        &outC->_L39_else_IfBlock1);
    }
    /* IfBlock1:else:_L40= */
    if (outC->_L18_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L40_else_IfBlock1,
        &outC->_L39_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L40_else_IfBlock1,
        &outC->_L43_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_10_p42_sessionCmd_for_RBC_2_partial,
      &outC->_L40_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_7_p42_sessionCmd_for_RBC_1_partial,
      &outC->_L41_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p45_radioNetworkRegistrationOrder_1,
      &_6_p45_radioNetworkRegistrationOrder_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_RBC_1,
      &_7_p42_sessionCmd_for_RBC_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->additionalSessionCmdsFromTrack_for_RBC_1,
      &_8_additionalSessionCmdsFromTrack_for_RBC_1_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_1_p45_radioNetworkRegistrationOrder_2,
      &_9_p45_radioNetworkRegistrationOrder_2_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->p42_sessionCmd_for_RBC_2,
      &_10_p42_sessionCmd_for_RBC_2_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_2_additionalSessionCmdsFromTrack_for_RBC_2,
      &_11_additionalSessionCmdsFromTrack_for_RBC_2_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void mobileCtrlCmdRouter_out_init_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;
  kcg_size idx15;
  kcg_size idx16;
  kcg_size idx17;
  kcg_size idx18;
  kcg_size idx19;
  kcg_size idx20;
  kcg_size idx21;
  kcg_size idx22;
  kcg_size idx23;
  kcg_size idx24;
  kcg_size idx25;
  kcg_size idx26;
  kcg_size idx27;
  kcg_size idx28;
  kcg_size idx29;
  kcg_size idx30;
  kcg_size idx31;
  kcg_size idx32;
  kcg_size idx33;
  kcg_size idx34;
  kcg_size idx35;
  kcg_size idx36;
  kcg_size idx37;
  kcg_size idx38;
  kcg_size idx39;
  kcg_size idx40;
  kcg_size idx41;
  kcg_size idx42;
  kcg_size idx43;
  kcg_size idx44;
  kcg_size idx45;
  kcg_size idx46;
  kcg_size idx47;
  kcg_size idx48;
  kcg_size idx49;
  kcg_size idx50;
  kcg_size idx51;
  kcg_size idx52;
  kcg_size idx53;
  kcg_size idx54;
  kcg_size idx55;
  kcg_size idx56;
  kcg_size idx57;
  kcg_size idx58;
  kcg_size idx59;
  kcg_size idx60;
  kcg_size idx61;
  kcg_size idx62;
  kcg_size idx63;
  kcg_size idx64;
  kcg_size idx65;

  outC->IfBlock1_clock = kcg_true;
  outC->_L18_else_IfBlock1 = kcg_true;
  outC->_L39_else_IfBlock1.valid = kcg_true;
  outC->_L39_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L39_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L39_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L39_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L39_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L39_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L39_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L39_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L39_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L39_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L39_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L39_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L39_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L39_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L39_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L39_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L39_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx = 0; idx < 30; idx++) {
    outC->_L39_else_IfBlock1.packets.PacketHeaders[idx].nid_packet =
      kcg_lit_int32(0);
    outC->_L39_else_IfBlock1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L39_else_IfBlock1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L39_else_IfBlock1.packets.PacketHeaders[idx].startAddress =
      kcg_lit_int32(0);
    outC->_L39_else_IfBlock1.packets.PacketHeaders[idx].endAddress =
      kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L39_else_IfBlock1.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L39_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L39_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L39_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.valid = kcg_true;
  outC->_L40_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L40_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L40_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L40_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L40_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L40_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L40_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L40_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L40_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L40_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L40_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L40_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L40_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L40_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L40_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L40_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L40_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L40_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L40_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L40_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L40_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L40_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L40_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L40_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L40_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L40_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.valid = kcg_true;
  outC->_L41_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L41_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L41_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L41_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L41_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L41_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L41_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L41_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L41_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L41_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L41_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L41_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L41_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L41_else_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L41_else_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L41_else_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L41_else_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L41_else_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L41_else_IfBlock1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L41_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L41_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L41_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.valid = kcg_true;
  outC->_L43_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L43_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L43_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L43_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L43_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L43_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L43_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L43_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L43_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L43_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L43_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L43_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L43_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L43_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L43_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L43_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L43_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L43_else_IfBlock1.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->_L43_else_IfBlock1.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L43_else_IfBlock1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L43_else_IfBlock1.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->_L43_else_IfBlock1.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L43_else_IfBlock1.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L43_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L43_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L43_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.valid = kcg_true;
  outC->_L44_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L44_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L44_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L44_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L44_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L44_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L44_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L44_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L44_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L44_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L44_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L44_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L44_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L44_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L44_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L44_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L44_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L44_else_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->_L44_else_IfBlock1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L44_else_IfBlock1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L44_else_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->_L44_else_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L44_else_IfBlock1.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L44_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L44_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L44_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.valid = kcg_true;
  outC->_L46_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L46_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L46_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L46_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L46_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L46_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L46_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L46_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L46_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L46_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L46_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L46_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L46_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L46_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L46_else_IfBlock1.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L46_else_IfBlock1.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L46_else_IfBlock1.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L46_else_IfBlock1.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L46_else_IfBlock1.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L46_else_IfBlock1.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L46_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L46_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L46_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.valid = kcg_true;
  outC->_L47_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L47_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L47_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L47_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L47_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L47_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L47_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L47_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L47_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L47_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L47_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L47_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L47_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L47_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L47_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L47_else_IfBlock1.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L47_else_IfBlock1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L47_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L47_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L47_else_IfBlock1.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L47_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L47_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L47_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.valid = kcg_true;
  outC->_L50_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L50_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L50_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L50_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L50_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L50_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L50_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L50_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L50_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L50_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L50_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L50_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L50_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L50_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L50_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L50_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L50_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L50_else_IfBlock1.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L50_else_IfBlock1.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L50_else_IfBlock1.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L50_else_IfBlock1.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L50_else_IfBlock1.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L50_else_IfBlock1.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L50_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L50_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L50_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.valid = kcg_true;
  outC->_L51_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L51_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L51_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L51_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L51_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L51_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L51_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L51_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L51_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L51_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L51_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L51_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L51_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L51_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L51_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L51_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L51_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L51_else_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L51_else_IfBlock1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L51_else_IfBlock1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L51_else_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L51_else_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L51_else_IfBlock1.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L51_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L51_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L51_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.valid = kcg_true;
  outC->_L52_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L52_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L52_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L52_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L52_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L52_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L52_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L52_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L52_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L52_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L52_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L52_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L52_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L52_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L52_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L52_else_IfBlock1.packets.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->_L52_else_IfBlock1.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L52_else_IfBlock1.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L52_else_IfBlock1.packets.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->_L52_else_IfBlock1.packets.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L52_else_IfBlock1.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L52_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L52_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L52_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.valid = kcg_true;
  outC->_L58_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L58_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L58_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L58_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L58_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L58_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L58_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L58_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L58_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L58_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L58_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L58_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L58_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L58_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L58_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L58_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L58_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L58_else_IfBlock1.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->_L58_else_IfBlock1.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L58_else_IfBlock1.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L58_else_IfBlock1.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->_L58_else_IfBlock1.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L58_else_IfBlock1.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L58_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L58_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L58_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.valid = kcg_true;
  outC->_L59_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L59_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L59_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L59_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L59_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L59_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L59_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L59_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L59_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L59_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L59_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L59_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L59_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L59_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L59_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L59_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L59_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L59_else_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L59_else_IfBlock1.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L59_else_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L59_else_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L59_else_IfBlock1.packets.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L59_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L59_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L59_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.valid = kcg_true;
  outC->_L60_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L60_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L60_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L60_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L60_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L60_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L60_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L60_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L60_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L60_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L60_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L60_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L60_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L60_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L60_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L60_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L60_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L60_else_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L60_else_IfBlock1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L60_else_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L60_else_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L60_else_IfBlock1.packets.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L60_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L60_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L60_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L49_else_IfBlock1 = kcg_true;
  outC->_L61_else_IfBlock1.valid = kcg_true;
  outC->_L61_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L61_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L61_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L61_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L61_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L61_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L61_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L61_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L61_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L61_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L61_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L61_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L61_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L61_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L61_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L61_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L61_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L61_else_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L61_else_IfBlock1.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L61_else_IfBlock1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L61_else_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L61_else_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L61_else_IfBlock1.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L61_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L61_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.valid = kcg_true;
  outC->_L62_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L62_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L62_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L62_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L62_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L62_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L62_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L62_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L62_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L62_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L62_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L62_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L62_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L62_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L62_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L62_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L62_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L62_else_IfBlock1.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L62_else_IfBlock1.packets.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L62_else_IfBlock1.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L62_else_IfBlock1.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L62_else_IfBlock1.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L62_else_IfBlock1.packets.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L62_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L62_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.valid = kcg_true;
  outC->_L66_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L66_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L66_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L66_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L66_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L66_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L66_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L66_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L66_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L66_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L66_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L66_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L66_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L66_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L66_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx30].valid = kcg_true;
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L66_else_IfBlock1.packets.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->_L66_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L66_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.valid = kcg_true;
  outC->_L64_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L64_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L64_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L64_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L64_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L64_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L64_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L64_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L64_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L64_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L64_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L64_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L64_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L64_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L64_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L64_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L64_else_IfBlock1.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int32(0);
    outC->_L64_else_IfBlock1.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L64_else_IfBlock1.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->_L64_else_IfBlock1.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->_L64_else_IfBlock1.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L64_else_IfBlock1.packets.PacketData[idx33] = kcg_lit_int32(0);
  }
  outC->_L64_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L64_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.valid = kcg_true;
  outC->_L63_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L63_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L63_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L63_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L63_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L63_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L63_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L63_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L63_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L63_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L63_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L63_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L63_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L63_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L63_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L63_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L63_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L63_else_IfBlock1.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->_L63_else_IfBlock1.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L63_else_IfBlock1.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->_L63_else_IfBlock1.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->_L63_else_IfBlock1.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L63_else_IfBlock1.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->_L63_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L63_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L67_else_IfBlock1 = kcg_true;
  outC->_L68_else_IfBlock1.valid = kcg_true;
  outC->_L68_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L68_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L68_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L68_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L68_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L68_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L68_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L68_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L68_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L68_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L68_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L68_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L68_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L68_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->_L68_else_IfBlock1.packets.PacketHeaders[idx36].nid_packet =
      kcg_lit_int32(0);
    outC->_L68_else_IfBlock1.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->_L68_else_IfBlock1.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->_L68_else_IfBlock1.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->_L68_else_IfBlock1.packets.PacketHeaders[idx36].endAddress =
      kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->_L68_else_IfBlock1.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->_L68_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L68_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L68_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L69_else_IfBlock1 = kcg_true;
  outC->_L70_else_IfBlock1.valid = kcg_true;
  outC->_L70_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L70_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L70_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L70_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L70_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L70_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L70_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L70_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L70_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L70_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L70_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L70_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L70_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L70_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L70_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L70_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L70_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->_L70_else_IfBlock1.packets.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->_L70_else_IfBlock1.packets.PacketHeaders[idx38].q_dir = Q_DIR_Reverse;
    outC->_L70_else_IfBlock1.packets.PacketHeaders[idx38].valid = kcg_true;
    outC->_L70_else_IfBlock1.packets.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->_L70_else_IfBlock1.packets.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->_L70_else_IfBlock1.packets.PacketData[idx39] = kcg_lit_int32(0);
  }
  outC->_L70_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L70_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L70_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.valid = kcg_true;
  outC->_L9_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L9_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L9_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L9_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L9_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L9_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L9_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx40].q_dir = Q_DIR_Reverse;
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx40].valid = kcg_true;
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->_L9_then_IfBlock1.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->_L9_then_IfBlock1.packets.PacketData[idx41] = kcg_lit_int32(0);
  }
  outC->_L9_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L9_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L9_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.valid = kcg_true;
  outC->_L11_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L11_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L11_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L11_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L11_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L11_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L11_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L11_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L11_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L11_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L11_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L11_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L11_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L11_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L11_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L11_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx42 = 0; idx42 < 30; idx42++) {
    outC->_L11_then_IfBlock1.packets.PacketHeaders[idx42].nid_packet =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock1.packets.PacketHeaders[idx42].q_dir = Q_DIR_Reverse;
    outC->_L11_then_IfBlock1.packets.PacketHeaders[idx42].valid = kcg_true;
    outC->_L11_then_IfBlock1.packets.PacketHeaders[idx42].startAddress =
      kcg_lit_int32(0);
    outC->_L11_then_IfBlock1.packets.PacketHeaders[idx42].endAddress =
      kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 500; idx43++) {
    outC->_L11_then_IfBlock1.packets.PacketData[idx43] = kcg_lit_int32(0);
  }
  outC->_L11_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L11_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.valid = kcg_true;
  outC->_L12_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L12_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L12_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L12_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L12_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L12_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx44 = 0; idx44 < 30; idx44++) {
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx44].nid_packet =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx44].q_dir = Q_DIR_Reverse;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx44].valid = kcg_true;
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx44].startAddress =
      kcg_lit_int32(0);
    outC->_L12_then_IfBlock1.packets.PacketHeaders[idx44].endAddress =
      kcg_lit_int32(0);
  }
  for (idx45 = 0; idx45 < 500; idx45++) {
    outC->_L12_then_IfBlock1.packets.PacketData[idx45] = kcg_lit_int32(0);
  }
  outC->_L12_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L12_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L13_then_IfBlock1 = kcg_true;
  outC->_L14_then_IfBlock1.valid = kcg_true;
  outC->_L14_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L14_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L14_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L14_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L14_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L14_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L14_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L14_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L14_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L14_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L14_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx46 = 0; idx46 < 30; idx46++) {
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx46].nid_packet =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx46].q_dir = Q_DIR_Reverse;
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx46].valid = kcg_true;
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx46].startAddress =
      kcg_lit_int32(0);
    outC->_L14_then_IfBlock1.packets.PacketHeaders[idx46].endAddress =
      kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 500; idx47++) {
    outC->_L14_then_IfBlock1.packets.PacketData[idx47] = kcg_lit_int32(0);
  }
  outC->_L14_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L14_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.valid = kcg_true;
  outC->_L15_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L15_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L15_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L15_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L15_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L15_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L15_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L15_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L15_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L15_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L15_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L15_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L15_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L15_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L15_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L15_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L15_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx48 = 0; idx48 < 30; idx48++) {
    outC->_L15_then_IfBlock1.packets.PacketHeaders[idx48].nid_packet =
      kcg_lit_int32(0);
    outC->_L15_then_IfBlock1.packets.PacketHeaders[idx48].q_dir = Q_DIR_Reverse;
    outC->_L15_then_IfBlock1.packets.PacketHeaders[idx48].valid = kcg_true;
    outC->_L15_then_IfBlock1.packets.PacketHeaders[idx48].startAddress =
      kcg_lit_int32(0);
    outC->_L15_then_IfBlock1.packets.PacketHeaders[idx48].endAddress =
      kcg_lit_int32(0);
  }
  for (idx49 = 0; idx49 < 500; idx49++) {
    outC->_L15_then_IfBlock1.packets.PacketData[idx49] = kcg_lit_int32(0);
  }
  outC->_L15_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L15_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L15_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.valid = kcg_true;
  outC->_L16_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L16_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L16_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L16_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L16_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L16_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L16_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L16_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx50 = 0; idx50 < 30; idx50++) {
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx50].nid_packet =
      kcg_lit_int32(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx50].q_dir = Q_DIR_Reverse;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx50].valid = kcg_true;
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx50].startAddress =
      kcg_lit_int32(0);
    outC->_L16_then_IfBlock1.packets.PacketHeaders[idx50].endAddress =
      kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 500; idx51++) {
    outC->_L16_then_IfBlock1.packets.PacketData[idx51] = kcg_lit_int32(0);
  }
  outC->_L16_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L16_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L16_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L17_then_IfBlock1 = kcg_true;
  outC->_L18_then_IfBlock1.valid = kcg_true;
  outC->_L18_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L18_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L18_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L18_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L18_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L18_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L18_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L18_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L18_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L18_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L18_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L18_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L18_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L18_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L18_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L18_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx52 = 0; idx52 < 30; idx52++) {
    outC->_L18_then_IfBlock1.packets.PacketHeaders[idx52].nid_packet =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1.packets.PacketHeaders[idx52].q_dir = Q_DIR_Reverse;
    outC->_L18_then_IfBlock1.packets.PacketHeaders[idx52].valid = kcg_true;
    outC->_L18_then_IfBlock1.packets.PacketHeaders[idx52].startAddress =
      kcg_lit_int32(0);
    outC->_L18_then_IfBlock1.packets.PacketHeaders[idx52].endAddress =
      kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 500; idx53++) {
    outC->_L18_then_IfBlock1.packets.PacketData[idx53] = kcg_lit_int32(0);
  }
  outC->_L18_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L18_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L18_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.valid = kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.t_train_reference =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.nid_em =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.q_scale =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.d_sr = kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.d_ref =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.q_dir =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.radioMetadata.m_version =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.valid =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx54 = 0; idx54 < 30; idx54++) {
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketHeaders[idx54].nid_packet =
      kcg_lit_int32(0);
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketHeaders[idx54].q_dir =
      Q_DIR_Reverse;
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketHeaders[idx54].valid =
      kcg_true;
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketHeaders[idx54].startAddress =
      kcg_lit_int32(0);
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketHeaders[idx54].endAddress =
      kcg_lit_int32(0);
  }
  for (idx55 = 0; idx55 < 500; idx55++) {
    outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.packets.PacketData[idx55] =
      kcg_lit_int32(0);
  }
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.sendingRBC.valid = kcg_true;
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_2_additionalSessionCmdsFromTrack_for_RBC_2.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.source = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.t_train_reference = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.d_emergencystop = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_RBC_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx56 = 0; idx56 < 30; idx56++) {
    outC->p42_sessionCmd_for_RBC_2.packets.PacketHeaders[idx56].nid_packet =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_RBC_2.packets.PacketHeaders[idx56].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_RBC_2.packets.PacketHeaders[idx56].valid = kcg_true;
    outC->p42_sessionCmd_for_RBC_2.packets.PacketHeaders[idx56].startAddress =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_RBC_2.packets.PacketHeaders[idx56].endAddress =
      kcg_lit_int32(0);
  }
  for (idx57 = 0; idx57 < 500; idx57++) {
    outC->p42_sessionCmd_for_RBC_2.packets.PacketData[idx57] = kcg_lit_int32(0);
  }
  outC->p42_sessionCmd_for_RBC_2.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_2.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_2.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.valid = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.t_train_reference =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.nid_em = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.q_scale = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.d_sr = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.t_sh_rqst = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.d_ref = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.q_dir = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.radioMetadata.m_version = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.valid = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx58 = 0; idx58 < 30; idx58++) {
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketHeaders[idx58].nid_packet =
      kcg_lit_int32(0);
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketHeaders[idx58].q_dir =
      Q_DIR_Reverse;
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketHeaders[idx58].valid =
      kcg_true;
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketHeaders[idx58].startAddress =
      kcg_lit_int32(0);
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketHeaders[idx58].endAddress =
      kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 500; idx59++) {
    outC->_1_p45_radioNetworkRegistrationOrder_2.packets.PacketData[idx59] =
      kcg_lit_int32(0);
  }
  outC->_1_p45_radioNetworkRegistrationOrder_2.sendingRBC.valid = kcg_true;
  outC->_1_p45_radioNetworkRegistrationOrder_2.sendingRBC.nid_c = kcg_lit_int32(
      0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->_1_p45_radioNetworkRegistrationOrder_2.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.valid = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.t_train_reference =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.nid_em = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.q_scale = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.d_sr = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.t_sh_rqst =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.d_ref = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.q_dir = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.radioMetadata.m_version =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.valid =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx60 = 0; idx60 < 30; idx60++) {
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketHeaders[idx60].nid_packet =
      kcg_lit_int32(0);
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketHeaders[idx60].q_dir =
      Q_DIR_Reverse;
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketHeaders[idx60].valid =
      kcg_true;
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketHeaders[idx60].startAddress =
      kcg_lit_int32(0);
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketHeaders[idx60].endAddress =
      kcg_lit_int32(0);
  }
  for (idx61 = 0; idx61 < 500; idx61++) {
    outC->additionalSessionCmdsFromTrack_for_RBC_1.packets.PacketData[idx61] =
      kcg_lit_int32(0);
  }
  outC->additionalSessionCmdsFromTrack_for_RBC_1.sendingRBC.valid = kcg_true;
  outC->additionalSessionCmdsFromTrack_for_RBC_1.sendingRBC.nid_c =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.sendingRBC.rbc_id =
    kcg_lit_int32(0);
  outC->additionalSessionCmdsFromTrack_for_RBC_1.sendingRBC.device_id =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.source = msrc_undefined_Common_Types_Pkg;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.t_train_reference = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.nid_em = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.q_scale = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.d_sr = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.d_ref = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.q_dir = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.d_emergencystop = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.radioMetadata.m_version = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p42_sessionCmd_for_RBC_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx62 = 0; idx62 < 30; idx62++) {
    outC->p42_sessionCmd_for_RBC_1.packets.PacketHeaders[idx62].nid_packet =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_RBC_1.packets.PacketHeaders[idx62].q_dir =
      Q_DIR_Reverse;
    outC->p42_sessionCmd_for_RBC_1.packets.PacketHeaders[idx62].valid = kcg_true;
    outC->p42_sessionCmd_for_RBC_1.packets.PacketHeaders[idx62].startAddress =
      kcg_lit_int32(0);
    outC->p42_sessionCmd_for_RBC_1.packets.PacketHeaders[idx62].endAddress =
      kcg_lit_int32(0);
  }
  for (idx63 = 0; idx63 < 500; idx63++) {
    outC->p42_sessionCmd_for_RBC_1.packets.PacketData[idx63] = kcg_lit_int32(0);
  }
  outC->p42_sessionCmd_for_RBC_1.sendingRBC.valid = kcg_true;
  outC->p42_sessionCmd_for_RBC_1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p42_sessionCmd_for_RBC_1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.t_train_reference =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.nid_em = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.q_scale = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.d_sr = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.d_ref = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.q_dir = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.radioMetadata.m_version = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.m_mcount =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.nid_c =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.nid_bg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->p45_radioNetworkRegistrationOrder_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.t_train =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.nid_em =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.d_sr =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.d_ref =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx64 = 0; idx64 < 30; idx64++) {
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketHeaders[idx64].nid_packet =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketHeaders[idx64].q_dir =
      Q_DIR_Reverse;
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketHeaders[idx64].valid =
      kcg_true;
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketHeaders[idx64].startAddress =
      kcg_lit_int32(0);
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketHeaders[idx64].endAddress =
      kcg_lit_int32(0);
  }
  for (idx65 = 0; idx65 < 500; idx65++) {
    outC->p45_radioNetworkRegistrationOrder_1.packets.PacketData[idx65] =
      kcg_lit_int32(0);
  }
  outC->p45_radioNetworkRegistrationOrder_1.sendingRBC.valid = kcg_true;
  outC->p45_radioNetworkRegistrationOrder_1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->p45_radioNetworkRegistrationOrder_1.sendingRBC.device_id =
    kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void mobileCtrlCmdRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

