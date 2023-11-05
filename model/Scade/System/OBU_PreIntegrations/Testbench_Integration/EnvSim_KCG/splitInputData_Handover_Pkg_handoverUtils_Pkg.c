/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitInputData_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::splitInputData/ */
void splitInputData_Handover_Pkg_handoverUtils_Pkg(
  /* dataFromTrack_in/ */
  msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* useInformationFromAcceptingRBC/ */
  kcg_bool useInformationFromAcceptingRBC,
  /* handingOverMobile_is_mobile_1/ */
  kcg_bool handingOverMobile_is_mobile_1,
  /* morcStatus_1/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* morcStatus_2/ */
  morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* dataFromHandingOverMobile/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromHandingOverMobile_partial;
  /* dataFromAcceptingMobile/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromAcceptingMobile_partial;
  /* dataFromBalise/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromBalise_partial;
  /* dataFromTrack_out/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromTrack_out_partial;
  /* morcStatusFromHandingOverMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromHandingOverMobile_partial;
  /* morcStatusFromAcceptingMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromAcceptingMobile_partial;
  /* dataFromHandingOverMobile/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_dataFromHandingOverMobile_partial;
  /* dataFromAcceptingMobile/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _2_dataFromAcceptingMobile_partial;
  /* dataFromBalise/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _3_dataFromBalise_partial;
  /* dataFromTrack_out/ */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_dataFromTrack_out_partial;
  /* morcStatusFromHandingOverMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg _5_morcStatusFromHandingOverMobile_partial;
  /* morcStatusFromAcceptingMobile/ */
  static morcStatus_T_RCM_Session_Types_Pkg _6_morcStatusFromAcceptingMobile_partial;

  outC->IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L34_then_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L36_then_IfBlock1,
      dataFromTrack_in);
    outC->_L28_then_IfBlock1 = outC->_L36_then_IfBlock1.valid;
    outC->_L42_then_IfBlock1 = msrc_Euroradio_Common_Types_Pkg;
    outC->_L41_then_IfBlock1 = outC->_L36_then_IfBlock1.source;
    outC->_L44_then_IfBlock1 = outC->_L41_then_IfBlock1 == outC->_L42_then_IfBlock1;
    outC->_L43_then_IfBlock1 = outC->_L44_then_IfBlock1 & outC->_L28_then_IfBlock1;
    /* IfBlock1:then:_L40= */
    if (outC->_L43_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L40_then_IfBlock1,
        &outC->_L36_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L40_then_IfBlock1,
        &outC->_L34_then_IfBlock1);
    }
    outC->_L45_then_IfBlock1 = useInformationFromAcceptingRBC;
    /* IfBlock1:then:_L47= */
    if (outC->_L45_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L47_then_IfBlock1,
        &outC->_L40_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L47_then_IfBlock1,
        &outC->_L34_then_IfBlock1);
    }
    /* IfBlock1:then:_L46= */
    if (outC->_L45_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L46_then_IfBlock1,
        &outC->_L34_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L46_then_IfBlock1,
        &outC->_L40_then_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromTrack_out_partial,
      &outC->_L36_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromAcceptingMobile_partial,
      &outC->_L47_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromHandingOverMobile_partial,
      &outC->_L46_then_IfBlock1);
    outC->_L37_then_IfBlock1 = msrc_Eurobalise_Common_Types_Pkg;
    outC->_L30_then_IfBlock1 = outC->_L37_then_IfBlock1 == outC->_L41_then_IfBlock1;
    outC->_L29_then_IfBlock1 = outC->_L36_then_IfBlock1.BG_Common_Header.valid;
    outC->_L32_then_IfBlock1 = outC->_L29_then_IfBlock1 &
      outC->_L30_then_IfBlock1 & outC->_L28_then_IfBlock1;
    /* IfBlock1:then:_L33= */
    if (outC->_L32_then_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L33_then_IfBlock1,
        &outC->_L36_then_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L33_then_IfBlock1,
        &outC->_L34_then_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromBalise_partial,
      &outC->_L33_then_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L24_then_IfBlock1,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L25_then_IfBlock1,
      morcStatus_2);
    outC->_L21_then_IfBlock1 = handingOverMobile_is_mobile_1;
    /* IfBlock1:then:_L27= */
    if (outC->_L21_then_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L27_then_IfBlock1,
        &outC->_L25_then_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L27_then_IfBlock1,
        &outC->_L24_then_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromAcceptingMobile_partial,
      &outC->_L27_then_IfBlock1);
    /* IfBlock1:then:_L26= */
    if (outC->_L21_then_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L26_then_IfBlock1,
        &outC->_L24_then_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L26_then_IfBlock1,
        &outC->_L25_then_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromHandingOverMobile_partial,
      &outC->_L26_then_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromHandingOverMobile,
      &dataFromHandingOverMobile_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromAcceptingMobile,
      &dataFromAcceptingMobile_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromBalise,
      &dataFromBalise_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromTrack_out,
      &dataFromTrack_out_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromHandingOverMobile,
      &morcStatusFromHandingOverMobile_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromAcceptingMobile,
      &morcStatusFromAcceptingMobile_partial);
  }
  else {
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L62_else_IfBlock1,
      morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L64_else_IfBlock1,
      morcStatus_2);
    outC->_L63_else_IfBlock1 = handingOverMobile_is_mobile_1;
    /* IfBlock1:else:_L65= */
    if (outC->_L63_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L65_else_IfBlock1,
        &outC->_L64_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L65_else_IfBlock1,
        &outC->_L62_else_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_6_morcStatusFromAcceptingMobile_partial,
      &outC->_L65_else_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L117_else_IfBlock1,
      &_6_morcStatusFromAcceptingMobile_partial);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L154_else_IfBlock1,
      &outC->_L117_else_IfBlock1.session);
    outC->_L157_else_IfBlock1 = outC->_L154_else_IfBlock1.valid;
    /* IfBlock1:else:_L61= */
    if (outC->_L63_else_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L61_else_IfBlock1,
        &outC->_L62_else_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &outC->_L61_else_IfBlock1,
        &outC->_L64_else_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_5_morcStatusFromHandingOverMobile_partial,
      &outC->_L61_else_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->_L88_else_IfBlock1,
      &_5_morcStatusFromHandingOverMobile_partial);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &outC->_L149_else_IfBlock1,
      &outC->_L88_else_IfBlock1.session);
    outC->_L156_else_IfBlock1 = outC->_L149_else_IfBlock1.valid;
    outC->_L155_else_IfBlock1 = sp_maintaining_RCM_Session_Types_Pkg;
    outC->_L153_else_IfBlock1 = sp_maintaining_RCM_Session_Types_Pkg;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L66_else_IfBlock1,
      dataFromTrack_in);
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &outC->_L84_else_IfBlock1,
      &outC->_L66_else_IfBlock1.sendingRBC);
    outC->_L148_else_IfBlock1 = outC->_L84_else_IfBlock1.valid;
    outC->_L147_else_IfBlock1 = outC->_L84_else_IfBlock1.rbc_id;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L102_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L101_else_IfBlock1,
      dataFromTrack_in);
    outC->_L91_else_IfBlock1 = outC->_L149_else_IfBlock1.nid_rbc;
    outC->_L98_else_IfBlock1 = outC->_L147_else_IfBlock1 ==
      outC->_L91_else_IfBlock1;
    outC->_L86_else_IfBlock1 = outC->_L84_else_IfBlock1.nid_c;
    outC->_L90_else_IfBlock1 = outC->_L149_else_IfBlock1.nid_c;
    outC->_L97_else_IfBlock1 = outC->_L90_else_IfBlock1 == outC->_L86_else_IfBlock1;
    outC->_L89_else_IfBlock1 = outC->_L149_else_IfBlock1.phase;
    outC->_L96_else_IfBlock1 = outC->_L89_else_IfBlock1 ==
      outC->_L153_else_IfBlock1;
    outC->_L81_else_IfBlock1 = msrc_Euroradio_Common_Types_Pkg;
    outC->_L80_else_IfBlock1 = outC->_L66_else_IfBlock1.source;
    outC->_L82_else_IfBlock1 = outC->_L80_else_IfBlock1 == outC->_L81_else_IfBlock1;
    outC->_L67_else_IfBlock1 = outC->_L66_else_IfBlock1.valid;
    outC->_L83_else_IfBlock1 = outC->_L67_else_IfBlock1 &
      outC->_L82_else_IfBlock1 & outC->_L148_else_IfBlock1 &
      outC->_L156_else_IfBlock1;
    outC->_L99_else_IfBlock1 = outC->_L83_else_IfBlock1 &
      outC->_L96_else_IfBlock1 & outC->_L97_else_IfBlock1 &
      outC->_L98_else_IfBlock1;
    /* IfBlock1:else:_L100= */
    if (outC->_L99_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L100_else_IfBlock1,
        &outC->_L101_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L100_else_IfBlock1,
        &outC->_L102_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L115_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L110_else_IfBlock1,
      dataFromTrack_in);
    outC->_L112_else_IfBlock1 = outC->_L154_else_IfBlock1.nid_rbc;
    outC->_L116_else_IfBlock1 = outC->_L147_else_IfBlock1 ==
      outC->_L112_else_IfBlock1;
    outC->_L108_else_IfBlock1 = outC->_L154_else_IfBlock1.nid_c;
    outC->_L107_else_IfBlock1 = outC->_L86_else_IfBlock1 ==
      outC->_L108_else_IfBlock1;
    outC->_L113_else_IfBlock1 = outC->_L154_else_IfBlock1.phase;
    outC->_L111_else_IfBlock1 = outC->_L113_else_IfBlock1 ==
      outC->_L155_else_IfBlock1;
    outC->_L105_else_IfBlock1 = outC->_L83_else_IfBlock1 &
      outC->_L111_else_IfBlock1 & outC->_L107_else_IfBlock1 &
      outC->_L116_else_IfBlock1 & outC->_L157_else_IfBlock1;
    /* IfBlock1:else:_L109= */
    if (outC->_L105_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L109_else_IfBlock1,
        &outC->_L110_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L109_else_IfBlock1,
        &outC->_L115_else_IfBlock1);
    }
    outC->_L141_else_IfBlock1 = useInformationFromAcceptingRBC;
    /* IfBlock1:else:_L142= */
    if (outC->_L141_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L142_else_IfBlock1,
        &outC->_L109_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L142_else_IfBlock1,
        &outC->_L100_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->_L127_else_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    outC->_L118_else_IfBlock1 = msrc_Eurobalise_Common_Types_Pkg;
    outC->_L119_else_IfBlock1 = outC->_L118_else_IfBlock1 ==
      outC->_L80_else_IfBlock1;
    outC->_L140_else_IfBlock1 = outC->_L66_else_IfBlock1.BG_Common_Header.valid;
    outC->_L120_else_IfBlock1 = outC->_L140_else_IfBlock1 &
      outC->_L119_else_IfBlock1 & outC->_L67_else_IfBlock1;
    /* IfBlock1:else:_L125= */
    if (outC->_L120_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L125_else_IfBlock1,
        &outC->_L66_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L125_else_IfBlock1,
        &outC->_L127_else_IfBlock1);
    }
    /* IfBlock1:else:_L144= */
    if (outC->_L120_else_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L144_else_IfBlock1,
        &outC->_L125_else_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &outC->_L144_else_IfBlock1,
        &outC->_L142_else_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_4_dataFromTrack_out_partial,
      &outC->_L144_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_3_dataFromBalise_partial,
      &outC->_L125_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_2_dataFromAcceptingMobile_partial,
      &outC->_L109_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_1_dataFromHandingOverMobile_partial,
      &outC->_L100_else_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromHandingOverMobile,
      &_1_dataFromHandingOverMobile_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromAcceptingMobile,
      &_2_dataFromAcceptingMobile_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromBalise,
      &_3_dataFromBalise_partial);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &outC->dataFromTrack_out,
      &_4_dataFromTrack_out_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromHandingOverMobile,
      &_5_morcStatusFromHandingOverMobile_partial);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &outC->morcStatusFromAcceptingMobile,
      &_6_morcStatusFromAcceptingMobile_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void splitInputData_init_Handover_Pkg_handoverUtils_Pkg(
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;
  static kcg_size idx8;
  static kcg_size idx9;
  static kcg_size idx10;
  static kcg_size idx11;
  static kcg_size idx12;
  static kcg_size idx13;
  static kcg_size idx14;
  static kcg_size idx15;
  static kcg_size idx16;
  static kcg_size idx17;
  static kcg_size idx18;
  static kcg_size idx19;
  static kcg_size idx20;
  static kcg_size idx21;
  static kcg_size idx22;
  static kcg_size idx23;
  static kcg_size idx24;
  static kcg_size idx25;
  static kcg_size idx26;
  static kcg_size idx27;
  static kcg_size idx28;
  static kcg_size idx29;
  static kcg_size idx30;
  static kcg_size idx31;
  static kcg_size idx32;
  static kcg_size idx33;
  static kcg_size idx34;
  static kcg_size idx35;
  static kcg_size idx36;
  static kcg_size idx37;
  static kcg_size idx38;
  static kcg_size idx39;
  static kcg_size idx40;
  static kcg_size idx41;

  outC->morcStatusFromAcceptingMobile.registration.valid = kcg_true;
  outC->morcStatusFromAcceptingMobile.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->morcStatusFromAcceptingMobile.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingMobile.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingMobile.registration.nid_mn = kcg_lit_int32(0);
  outC->morcStatusFromAcceptingMobile.connection.valid = kcg_true;
  outC->morcStatusFromAcceptingMobile.connection.mobileDeviceNo = kcg_lit_int32(
      0);
  outC->morcStatusFromAcceptingMobile.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatusFromAcceptingMobile.connection.nid_radio = kcg_lit_int32(0);
  outC->morcStatusFromAcceptingMobile.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->morcStatusFromAcceptingMobile.connection.connectionLost = kcg_true;
  outC->morcStatusFromAcceptingMobile.connection.isInRadioHole = kcg_true;
  outC->morcStatusFromAcceptingMobile.session.valid = kcg_true;
  outC->morcStatusFromAcceptingMobile.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatusFromAcceptingMobile.session.nid_c = kcg_lit_int32(0);
  outC->morcStatusFromAcceptingMobile.session.nid_rbc = kcg_lit_int32(0);
  outC->morcStatusFromAcceptingMobile.session.nid_radio = kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.registration.valid = kcg_true;
  outC->morcStatusFromHandingOverMobile.registration.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.registration.healthStatus =
    mhs_nok_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverMobile.registration.status =
    mrs_unregistered_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverMobile.registration.nid_mn = kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.connection.valid = kcg_true;
  outC->morcStatusFromHandingOverMobile.connection.mobileDeviceNo =
    kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.connection.status =
    mcs_disconnected_RCM_Types_Pkg;
  outC->morcStatusFromHandingOverMobile.connection.nid_radio = kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.connection.settingUpConnectionHasFailed =
    kcg_true;
  outC->morcStatusFromHandingOverMobile.connection.connectionLost = kcg_true;
  outC->morcStatusFromHandingOverMobile.connection.isInRadioHole = kcg_true;
  outC->morcStatusFromHandingOverMobile.session.valid = kcg_true;
  outC->morcStatusFromHandingOverMobile.session.phase =
    sp_terminated_RCM_Session_Types_Pkg;
  outC->morcStatusFromHandingOverMobile.session.nid_c = kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.session.nid_rbc = kcg_lit_int32(0);
  outC->morcStatusFromHandingOverMobile.session.nid_radio = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L65_else_IfBlock1.registration.valid = kcg_true;
  outC->_L65_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L65_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L65_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.connection.valid = kcg_true;
  outC->_L65_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L65_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L65_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L65_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L65_else_IfBlock1.session.valid = kcg_true;
  outC->_L65_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L65_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L65_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.registration.valid = kcg_true;
  outC->_L64_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L64_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L64_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.connection.valid = kcg_true;
  outC->_L64_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L64_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L64_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L64_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L64_else_IfBlock1.session.valid = kcg_true;
  outC->_L64_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L64_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L64_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L63_else_IfBlock1 = kcg_true;
  outC->_L62_else_IfBlock1.registration.valid = kcg_true;
  outC->_L62_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L62_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L62_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.connection.valid = kcg_true;
  outC->_L62_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L62_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L62_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L62_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L62_else_IfBlock1.session.valid = kcg_true;
  outC->_L62_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L62_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L62_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.registration.valid = kcg_true;
  outC->_L61_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L61_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L61_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.connection.valid = kcg_true;
  outC->_L61_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L61_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L61_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L61_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L61_else_IfBlock1.session.valid = kcg_true;
  outC->_L61_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L61_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L61_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
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
  for (idx = 0; idx < 30; idx++) {
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx].nid_packet =
      kcg_lit_int32(0);
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx].q_dir = Q_DIR_Reverse;
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx].valid = kcg_true;
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx].startAddress =
      kcg_lit_int32(0);
    outC->_L66_else_IfBlock1.packets.PacketHeaders[idx].endAddress =
      kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 500; idx1++) {
    outC->_L66_else_IfBlock1.packets.PacketData[idx1] = kcg_lit_int32(0);
  }
  outC->_L66_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L66_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L66_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.registration.valid = kcg_true;
  outC->_L88_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L88_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L88_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.connection.valid = kcg_true;
  outC->_L88_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L88_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L88_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L88_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L88_else_IfBlock1.session.valid = kcg_true;
  outC->_L88_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L88_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L88_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.valid = kcg_true;
  outC->_L101_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L101_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L101_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L101_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L101_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L101_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L101_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L101_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L101_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L101_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L101_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L101_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L101_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L101_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L101_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L101_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L101_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L101_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L101_else_IfBlock1.packets.PacketHeaders[idx2].nid_packet =
      kcg_lit_int32(0);
    outC->_L101_else_IfBlock1.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L101_else_IfBlock1.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L101_else_IfBlock1.packets.PacketHeaders[idx2].startAddress =
      kcg_lit_int32(0);
    outC->_L101_else_IfBlock1.packets.PacketHeaders[idx2].endAddress =
      kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L101_else_IfBlock1.packets.PacketData[idx3] = kcg_lit_int32(0);
  }
  outC->_L101_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L101_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L101_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.valid = kcg_true;
  outC->_L102_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L102_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L102_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L102_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L102_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L102_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L102_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L102_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L102_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L102_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L102_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L102_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L102_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L102_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L102_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L102_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L102_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L102_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L102_else_IfBlock1.packets.PacketHeaders[idx4].nid_packet =
      kcg_lit_int32(0);
    outC->_L102_else_IfBlock1.packets.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L102_else_IfBlock1.packets.PacketHeaders[idx4].valid = kcg_true;
    outC->_L102_else_IfBlock1.packets.PacketHeaders[idx4].startAddress =
      kcg_lit_int32(0);
    outC->_L102_else_IfBlock1.packets.PacketHeaders[idx4].endAddress =
      kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L102_else_IfBlock1.packets.PacketData[idx5] = kcg_lit_int32(0);
  }
  outC->_L102_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L102_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L102_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.valid = kcg_true;
  outC->_L100_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L100_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L100_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L100_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L100_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L100_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L100_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L100_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L100_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L100_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L100_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L100_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L100_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L100_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L100_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L100_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L100_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L100_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx6 = 0; idx6 < 30; idx6++) {
    outC->_L100_else_IfBlock1.packets.PacketHeaders[idx6].nid_packet =
      kcg_lit_int32(0);
    outC->_L100_else_IfBlock1.packets.PacketHeaders[idx6].q_dir = Q_DIR_Reverse;
    outC->_L100_else_IfBlock1.packets.PacketHeaders[idx6].valid = kcg_true;
    outC->_L100_else_IfBlock1.packets.PacketHeaders[idx6].startAddress =
      kcg_lit_int32(0);
    outC->_L100_else_IfBlock1.packets.PacketHeaders[idx6].endAddress =
      kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 500; idx7++) {
    outC->_L100_else_IfBlock1.packets.PacketData[idx7] = kcg_lit_int32(0);
  }
  outC->_L100_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L100_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L100_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L99_else_IfBlock1 = kcg_true;
  outC->_L98_else_IfBlock1 = kcg_true;
  outC->_L97_else_IfBlock1 = kcg_true;
  outC->_L96_else_IfBlock1 = kcg_true;
  outC->_L91_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L90_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L86_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L84_else_IfBlock1.valid = kcg_true;
  outC->_L84_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L84_else_IfBlock1.rbc_id = kcg_lit_int32(0);
  outC->_L84_else_IfBlock1.device_id = kcg_lit_int32(0);
  outC->_L83_else_IfBlock1 = kcg_true;
  outC->_L82_else_IfBlock1 = kcg_true;
  outC->_L81_else_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L80_else_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L67_else_IfBlock1 = kcg_true;
  outC->_L116_else_IfBlock1 = kcg_true;
  outC->_L115_else_IfBlock1.valid = kcg_true;
  outC->_L115_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L115_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L115_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L115_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L115_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L115_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L115_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L115_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L115_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L115_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L115_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L115_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L115_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L115_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L115_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L115_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L115_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L115_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L115_else_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int32(0);
    outC->_L115_else_IfBlock1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L115_else_IfBlock1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L115_else_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int32(0);
    outC->_L115_else_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L115_else_IfBlock1.packets.PacketData[idx9] = kcg_lit_int32(0);
  }
  outC->_L115_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L115_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L115_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L113_else_IfBlock1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L112_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L111_else_IfBlock1 = kcg_true;
  outC->_L110_else_IfBlock1.valid = kcg_true;
  outC->_L110_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L110_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L110_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L110_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L110_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L110_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L110_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L110_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L110_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L110_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L110_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L110_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L110_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L110_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L110_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L110_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L110_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L110_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L110_else_IfBlock1.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int32(0);
    outC->_L110_else_IfBlock1.packets.PacketHeaders[idx10].q_dir = Q_DIR_Reverse;
    outC->_L110_else_IfBlock1.packets.PacketHeaders[idx10].valid = kcg_true;
    outC->_L110_else_IfBlock1.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int32(0);
    outC->_L110_else_IfBlock1.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L110_else_IfBlock1.packets.PacketData[idx11] = kcg_lit_int32(0);
  }
  outC->_L110_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L110_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L110_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.valid = kcg_true;
  outC->_L109_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L109_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L109_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L109_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L109_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L109_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L109_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L109_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L109_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L109_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L109_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L109_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L109_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L109_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L109_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L109_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L109_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L109_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L109_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int32(0);
    outC->_L109_else_IfBlock1.packets.PacketHeaders[idx12].q_dir = Q_DIR_Reverse;
    outC->_L109_else_IfBlock1.packets.PacketHeaders[idx12].valid = kcg_true;
    outC->_L109_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int32(0);
    outC->_L109_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L109_else_IfBlock1.packets.PacketData[idx13] = kcg_lit_int32(0);
  }
  outC->_L109_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L109_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L109_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L108_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L107_else_IfBlock1 = kcg_true;
  outC->_L105_else_IfBlock1 = kcg_true;
  outC->_L117_else_IfBlock1.registration.valid = kcg_true;
  outC->_L117_else_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L117_else_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L117_else_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.connection.valid = kcg_true;
  outC->_L117_else_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L117_else_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L117_else_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L117_else_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L117_else_IfBlock1.session.valid = kcg_true;
  outC->_L117_else_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L117_else_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L117_else_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L118_else_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L119_else_IfBlock1 = kcg_true;
  outC->_L120_else_IfBlock1 = kcg_true;
  outC->_L125_else_IfBlock1.valid = kcg_true;
  outC->_L125_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L125_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L125_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L125_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L125_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L125_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L125_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L125_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L125_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L125_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L125_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L125_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L125_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L125_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L125_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L125_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L125_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L125_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L125_else_IfBlock1.packets.PacketHeaders[idx14].nid_packet =
      kcg_lit_int32(0);
    outC->_L125_else_IfBlock1.packets.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L125_else_IfBlock1.packets.PacketHeaders[idx14].valid = kcg_true;
    outC->_L125_else_IfBlock1.packets.PacketHeaders[idx14].startAddress =
      kcg_lit_int32(0);
    outC->_L125_else_IfBlock1.packets.PacketHeaders[idx14].endAddress =
      kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L125_else_IfBlock1.packets.PacketData[idx15] = kcg_lit_int32(0);
  }
  outC->_L125_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L125_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L125_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.valid = kcg_true;
  outC->_L127_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L127_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L127_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L127_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L127_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L127_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L127_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L127_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L127_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L127_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L127_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L127_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L127_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L127_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L127_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L127_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L127_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L127_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L127_else_IfBlock1.packets.PacketHeaders[idx16].nid_packet =
      kcg_lit_int32(0);
    outC->_L127_else_IfBlock1.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L127_else_IfBlock1.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L127_else_IfBlock1.packets.PacketHeaders[idx16].startAddress =
      kcg_lit_int32(0);
    outC->_L127_else_IfBlock1.packets.PacketHeaders[idx16].endAddress =
      kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L127_else_IfBlock1.packets.PacketData[idx17] = kcg_lit_int32(0);
  }
  outC->_L127_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L127_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L127_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L89_else_IfBlock1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L140_else_IfBlock1 = kcg_true;
  outC->_L141_else_IfBlock1 = kcg_true;
  outC->_L142_else_IfBlock1.valid = kcg_true;
  outC->_L142_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L142_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L142_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L142_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L142_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L142_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L142_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L142_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L142_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L142_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L142_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L142_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L142_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L142_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L142_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L142_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L142_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L142_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L142_else_IfBlock1.packets.PacketHeaders[idx18].nid_packet =
      kcg_lit_int32(0);
    outC->_L142_else_IfBlock1.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L142_else_IfBlock1.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L142_else_IfBlock1.packets.PacketHeaders[idx18].startAddress =
      kcg_lit_int32(0);
    outC->_L142_else_IfBlock1.packets.PacketHeaders[idx18].endAddress =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L142_else_IfBlock1.packets.PacketData[idx19] = kcg_lit_int32(0);
  }
  outC->_L142_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L142_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L142_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.valid = kcg_true;
  outC->_L144_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L144_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L144_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L144_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L144_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L144_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L144_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L144_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L144_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L144_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L144_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L144_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L144_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L144_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L144_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L144_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L144_else_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(
      0);
  outC->_L144_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L144_else_IfBlock1.packets.PacketHeaders[idx20].nid_packet =
      kcg_lit_int32(0);
    outC->_L144_else_IfBlock1.packets.PacketHeaders[idx20].q_dir = Q_DIR_Reverse;
    outC->_L144_else_IfBlock1.packets.PacketHeaders[idx20].valid = kcg_true;
    outC->_L144_else_IfBlock1.packets.PacketHeaders[idx20].startAddress =
      kcg_lit_int32(0);
    outC->_L144_else_IfBlock1.packets.PacketHeaders[idx20].endAddress =
      kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 500; idx21++) {
    outC->_L144_else_IfBlock1.packets.PacketData[idx21] = kcg_lit_int32(0);
  }
  outC->_L144_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L144_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L144_else_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L147_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L148_else_IfBlock1 = kcg_true;
  outC->_L149_else_IfBlock1.valid = kcg_true;
  outC->_L149_else_IfBlock1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L149_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L149_else_IfBlock1.nid_rbc = kcg_lit_int32(0);
  outC->_L149_else_IfBlock1.nid_radio = kcg_lit_int32(0);
  outC->_L153_else_IfBlock1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L154_else_IfBlock1.valid = kcg_true;
  outC->_L154_else_IfBlock1.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L154_else_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L154_else_IfBlock1.nid_rbc = kcg_lit_int32(0);
  outC->_L154_else_IfBlock1.nid_radio = kcg_lit_int32(0);
  outC->_L155_else_IfBlock1 = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L156_else_IfBlock1 = kcg_true;
  outC->_L157_else_IfBlock1 = kcg_true;
  outC->_L21_then_IfBlock1 = kcg_true;
  outC->_L24_then_IfBlock1.registration.valid = kcg_true;
  outC->_L24_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L24_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L24_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.connection.valid = kcg_true;
  outC->_L24_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L24_then_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L24_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L24_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L24_then_IfBlock1.session.valid = kcg_true;
  outC->_L24_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L24_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L24_then_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.registration.valid = kcg_true;
  outC->_L25_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L25_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L25_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.connection.valid = kcg_true;
  outC->_L25_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L25_then_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L25_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L25_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L25_then_IfBlock1.session.valid = kcg_true;
  outC->_L25_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L25_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L25_then_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.registration.valid = kcg_true;
  outC->_L26_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L26_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L26_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.connection.valid = kcg_true;
  outC->_L26_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L26_then_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L26_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L26_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L26_then_IfBlock1.session.valid = kcg_true;
  outC->_L26_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L26_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L26_then_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.registration.valid = kcg_true;
  outC->_L27_then_IfBlock1.registration.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.registration.healthStatus = mhs_nok_RCM_Types_Pkg;
  outC->_L27_then_IfBlock1.registration.status = mrs_unregistered_RCM_Types_Pkg;
  outC->_L27_then_IfBlock1.registration.nid_mn = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.connection.valid = kcg_true;
  outC->_L27_then_IfBlock1.connection.mobileDeviceNo = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.connection.status = mcs_disconnected_RCM_Types_Pkg;
  outC->_L27_then_IfBlock1.connection.nid_radio = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.connection.settingUpConnectionHasFailed = kcg_true;
  outC->_L27_then_IfBlock1.connection.connectionLost = kcg_true;
  outC->_L27_then_IfBlock1.connection.isInRadioHole = kcg_true;
  outC->_L27_then_IfBlock1.session.valid = kcg_true;
  outC->_L27_then_IfBlock1.session.phase = sp_terminated_RCM_Session_Types_Pkg;
  outC->_L27_then_IfBlock1.session.nid_c = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.session.nid_rbc = kcg_lit_int32(0);
  outC->_L27_then_IfBlock1.session.nid_radio = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L36_then_IfBlock1.valid = kcg_true;
  outC->_L36_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L36_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L36_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L36_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L36_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L36_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L36_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L36_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L36_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L36_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L36_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L36_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L36_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L36_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L36_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L36_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L36_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx22].nid_packet =
      kcg_lit_int32(0);
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx22].q_dir = Q_DIR_Reverse;
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx22].valid = kcg_true;
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx22].startAddress =
      kcg_lit_int32(0);
    outC->_L36_then_IfBlock1.packets.PacketHeaders[idx22].endAddress =
      kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 500; idx23++) {
    outC->_L36_then_IfBlock1.packets.PacketData[idx23] = kcg_lit_int32(0);
  }
  outC->_L36_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L36_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.valid = kcg_true;
  outC->_L34_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L34_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L34_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L34_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L34_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L34_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L34_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx24 = 0; idx24 < 30; idx24++) {
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx24].nid_packet =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx24].q_dir = Q_DIR_Reverse;
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx24].valid = kcg_true;
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx24].startAddress =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx24].endAddress =
      kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 500; idx25++) {
    outC->_L34_then_IfBlock1.packets.PacketData[idx25] = kcg_lit_int32(0);
  }
  outC->_L34_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L34_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.valid = kcg_true;
  outC->_L33_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L33_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L33_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L33_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L33_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L33_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L33_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L33_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L33_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L33_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L33_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L33_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L33_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L33_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L33_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L33_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L33_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx26 = 0; idx26 < 30; idx26++) {
    outC->_L33_then_IfBlock1.packets.PacketHeaders[idx26].nid_packet =
      kcg_lit_int32(0);
    outC->_L33_then_IfBlock1.packets.PacketHeaders[idx26].q_dir = Q_DIR_Reverse;
    outC->_L33_then_IfBlock1.packets.PacketHeaders[idx26].valid = kcg_true;
    outC->_L33_then_IfBlock1.packets.PacketHeaders[idx26].startAddress =
      kcg_lit_int32(0);
    outC->_L33_then_IfBlock1.packets.PacketHeaders[idx26].endAddress =
      kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 500; idx27++) {
    outC->_L33_then_IfBlock1.packets.PacketData[idx27] = kcg_lit_int32(0);
  }
  outC->_L33_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L33_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L33_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L32_then_IfBlock1 = kcg_true;
  outC->_L30_then_IfBlock1 = kcg_true;
  outC->_L29_then_IfBlock1 = kcg_true;
  outC->_L28_then_IfBlock1 = kcg_true;
  outC->_L40_then_IfBlock1.valid = kcg_true;
  outC->_L40_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L40_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L40_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L40_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L40_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L40_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L40_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L40_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L40_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L40_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L40_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L40_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L40_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L40_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L40_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L40_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L40_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx28 = 0; idx28 < 30; idx28++) {
    outC->_L40_then_IfBlock1.packets.PacketHeaders[idx28].nid_packet =
      kcg_lit_int32(0);
    outC->_L40_then_IfBlock1.packets.PacketHeaders[idx28].q_dir = Q_DIR_Reverse;
    outC->_L40_then_IfBlock1.packets.PacketHeaders[idx28].valid = kcg_true;
    outC->_L40_then_IfBlock1.packets.PacketHeaders[idx28].startAddress =
      kcg_lit_int32(0);
    outC->_L40_then_IfBlock1.packets.PacketHeaders[idx28].endAddress =
      kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 500; idx29++) {
    outC->_L40_then_IfBlock1.packets.PacketData[idx29] = kcg_lit_int32(0);
  }
  outC->_L40_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L40_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L40_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L41_then_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L42_then_IfBlock1 = msrc_undefined_Common_Types_Pkg;
  outC->_L43_then_IfBlock1 = kcg_true;
  outC->_L44_then_IfBlock1 = kcg_true;
  outC->_L45_then_IfBlock1 = kcg_true;
  outC->_L46_then_IfBlock1.valid = kcg_true;
  outC->_L46_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L46_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L46_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L46_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L46_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L46_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L46_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L46_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L46_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L46_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L46_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L46_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L46_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L46_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L46_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L46_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L46_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx30 = 0; idx30 < 30; idx30++) {
    outC->_L46_then_IfBlock1.packets.PacketHeaders[idx30].nid_packet =
      kcg_lit_int32(0);
    outC->_L46_then_IfBlock1.packets.PacketHeaders[idx30].q_dir = Q_DIR_Reverse;
    outC->_L46_then_IfBlock1.packets.PacketHeaders[idx30].valid = kcg_true;
    outC->_L46_then_IfBlock1.packets.PacketHeaders[idx30].startAddress =
      kcg_lit_int32(0);
    outC->_L46_then_IfBlock1.packets.PacketHeaders[idx30].endAddress =
      kcg_lit_int32(0);
  }
  for (idx31 = 0; idx31 < 500; idx31++) {
    outC->_L46_then_IfBlock1.packets.PacketData[idx31] = kcg_lit_int32(0);
  }
  outC->_L46_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L46_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L46_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.valid = kcg_true;
  outC->_L47_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L47_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L47_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L47_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L47_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L47_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L47_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L47_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L47_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L47_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L47_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L47_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L47_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L47_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L47_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L47_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L47_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L47_then_IfBlock1.packets.PacketHeaders[idx32].nid_packet =
      kcg_lit_int32(0);
    outC->_L47_then_IfBlock1.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L47_then_IfBlock1.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->_L47_then_IfBlock1.packets.PacketHeaders[idx32].startAddress =
      kcg_lit_int32(0);
    outC->_L47_then_IfBlock1.packets.PacketHeaders[idx32].endAddress =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L47_then_IfBlock1.packets.PacketData[idx33] = kcg_lit_int32(0);
  }
  outC->_L47_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L47_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L47_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->dataFromTrack_out.valid = kcg_true;
  outC->dataFromTrack_out.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromTrack_out.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromTrack_out.radioMetadata.nid_em = kcg_true;
  outC->dataFromTrack_out.radioMetadata.q_scale = kcg_true;
  outC->dataFromTrack_out.radioMetadata.d_sr = kcg_true;
  outC->dataFromTrack_out.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromTrack_out.radioMetadata.d_ref = kcg_true;
  outC->dataFromTrack_out.radioMetadata.q_dir = kcg_true;
  outC->dataFromTrack_out.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromTrack_out.radioMetadata.m_version = kcg_true;
  outC->dataFromTrack_out.BG_Common_Header.valid = kcg_true;
  outC->dataFromTrack_out.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->dataFromTrack_out.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromTrack_out.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromTrack_out.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->dataFromTrack_out.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromTrack_out.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromTrack_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->dataFromTrack_out.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromTrack_out.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->dataFromTrack_out.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromTrack_out.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromTrack_out.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->dataFromTrack_out.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromTrack_out.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromTrack_out.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->dataFromTrack_out.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->dataFromTrack_out.packets.PacketHeaders[idx34].nid_packet =
      kcg_lit_int32(0);
    outC->dataFromTrack_out.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->dataFromTrack_out.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->dataFromTrack_out.packets.PacketHeaders[idx34].startAddress =
      kcg_lit_int32(0);
    outC->dataFromTrack_out.packets.PacketHeaders[idx34].endAddress =
      kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->dataFromTrack_out.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->dataFromTrack_out.sendingRBC.valid = kcg_true;
  outC->dataFromTrack_out.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->dataFromTrack_out.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->dataFromTrack_out.sendingRBC.device_id = kcg_lit_int32(0);
  outC->dataFromBalise.valid = kcg_true;
  outC->dataFromBalise.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromBalise.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromBalise.radioMetadata.nid_em = kcg_true;
  outC->dataFromBalise.radioMetadata.q_scale = kcg_true;
  outC->dataFromBalise.radioMetadata.d_sr = kcg_true;
  outC->dataFromBalise.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromBalise.radioMetadata.d_ref = kcg_true;
  outC->dataFromBalise.radioMetadata.q_dir = kcg_true;
  outC->dataFromBalise.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromBalise.radioMetadata.m_version = kcg_true;
  outC->dataFromBalise.BG_Common_Header.valid = kcg_true;
  outC->dataFromBalise.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->dataFromBalise.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromBalise.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromBalise.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->dataFromBalise.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromBalise.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromBalise.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(
      0);
  outC->dataFromBalise.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromBalise.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->dataFromBalise.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromBalise.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->dataFromBalise.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromBalise.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromBalise.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromBalise.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromBalise.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->dataFromBalise.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx36 = 0; idx36 < 30; idx36++) {
    outC->dataFromBalise.packets.PacketHeaders[idx36].nid_packet = kcg_lit_int32(0);
    outC->dataFromBalise.packets.PacketHeaders[idx36].q_dir = Q_DIR_Reverse;
    outC->dataFromBalise.packets.PacketHeaders[idx36].valid = kcg_true;
    outC->dataFromBalise.packets.PacketHeaders[idx36].startAddress =
      kcg_lit_int32(0);
    outC->dataFromBalise.packets.PacketHeaders[idx36].endAddress = kcg_lit_int32(0);
  }
  for (idx37 = 0; idx37 < 500; idx37++) {
    outC->dataFromBalise.packets.PacketData[idx37] = kcg_lit_int32(0);
  }
  outC->dataFromBalise.sendingRBC.valid = kcg_true;
  outC->dataFromBalise.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->dataFromBalise.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->dataFromBalise.sendingRBC.device_id = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.valid = kcg_true;
  outC->dataFromAcceptingMobile.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromAcceptingMobile.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.nid_em = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.q_scale = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_sr = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_ref = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.q_dir = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromAcceptingMobile.radioMetadata.m_version = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.valid = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->dataFromAcceptingMobile.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromAcceptingMobile.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromAcceptingMobile.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->dataFromAcceptingMobile.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromAcceptingMobile.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromAcceptingMobile.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->dataFromAcceptingMobile.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromAcceptingMobile.Radio_Common_Header.radioDevice = kcg_lit_int32(
      0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_message = kcg_lit_int32(
      0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromAcceptingMobile.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx38 = 0; idx38 < 30; idx38++) {
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx38].nid_packet =
      kcg_lit_int32(0);
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx38].q_dir =
      Q_DIR_Reverse;
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx38].valid = kcg_true;
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx38].startAddress =
      kcg_lit_int32(0);
    outC->dataFromAcceptingMobile.packets.PacketHeaders[idx38].endAddress =
      kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 500; idx39++) {
    outC->dataFromAcceptingMobile.packets.PacketData[idx39] = kcg_lit_int32(0);
  }
  outC->dataFromAcceptingMobile.sendingRBC.valid = kcg_true;
  outC->dataFromAcceptingMobile.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->dataFromAcceptingMobile.sendingRBC.device_id = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.valid = kcg_true;
  outC->dataFromHandingOverMobile.source = msrc_undefined_Common_Types_Pkg;
  outC->dataFromHandingOverMobile.radioMetadata.t_train_reference = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.nid_em = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.q_scale = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_sr = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.t_sh_rqst = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_ref = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.q_dir = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.d_emergencystop = kcg_true;
  outC->dataFromHandingOverMobile.radioMetadata.m_version = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.valid = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->dataFromHandingOverMobile.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->dataFromHandingOverMobile.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->dataFromHandingOverMobile.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->dataFromHandingOverMobile.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->dataFromHandingOverMobile.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->dataFromHandingOverMobile.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->dataFromHandingOverMobile.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->dataFromHandingOverMobile.Radio_Common_Header.radioDevice =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_message =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_train_reference =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(
      0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->dataFromHandingOverMobile.Radio_Common_Header.d_emergencystop =
    kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx40 = 0; idx40 < 30; idx40++) {
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx40].nid_packet =
      kcg_lit_int32(0);
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx40].q_dir =
      Q_DIR_Reverse;
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx40].valid = kcg_true;
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx40].startAddress =
      kcg_lit_int32(0);
    outC->dataFromHandingOverMobile.packets.PacketHeaders[idx40].endAddress =
      kcg_lit_int32(0);
  }
  for (idx41 = 0; idx41 < 500; idx41++) {
    outC->dataFromHandingOverMobile.packets.PacketData[idx41] = kcg_lit_int32(0);
  }
  outC->dataFromHandingOverMobile.sendingRBC.valid = kcg_true;
  outC->dataFromHandingOverMobile.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->dataFromHandingOverMobile.sendingRBC.device_id = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void splitInputData_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_splitInputData_Handover_Pkg_handoverUtils_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** splitInputData_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

