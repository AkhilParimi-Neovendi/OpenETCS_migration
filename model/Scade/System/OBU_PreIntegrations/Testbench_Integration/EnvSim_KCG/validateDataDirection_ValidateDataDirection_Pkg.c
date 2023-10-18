/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection/ */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* inLRBG/ */
  positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* inPositionedBGs/ */
  positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC)
{
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg outMessage_partial;
  /* trainPositionKnown/ */
  static kcg_bool trainPositionKnown_partial;
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg _1_outMessage_partial;
  /* trainPositionKnown/ */
  static kcg_bool _2_trainPositionKnown_partial;
  /* trainPositionKnown/ */
  static kcg_bool _3_trainPositionKnown_partial;
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg _4_outMessage_partial;
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg _5_outMessage_partial;
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg _6_outMessage_partial;
  /* trainPositionKnown/ */
  static kcg_bool _7_trainPositionKnown_partial;
  /* outMessage/ */
  static ReceivedMessage_T_Common_Types_Pkg _8_outMessage_partial;

  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L6, inLRBG);
  outC->_L7 = outC->_L6.valid;
  outC->LRBGKnown = outC->_L7;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  outC->_L5 = outC->_L1.source;
  outC->msgSource = outC->_L5;
  outC->IfBlock1_clock = outC->msgSource == msrc_Eurobalise_Common_Types_Pkg;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    trainPositionKnown_partial = kcg_false;
    outC->_L36_then_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L34_then_IfBlock1,
      inMessage);
    outC->_L33_then_IfBlock1 =
      outC->_L34_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned;
    outC->_L32_then_IfBlock1 = !outC->_L33_then_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      inMessage);
    outC->_L31_then_IfBlock1 =
      outC->_L1_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L29_then_IfBlock1,
      trainPosition);
    /* IfBlock1:then:_L30=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#2)/ */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      &outC->_L1_then_IfBlock1,
      outC->_L31_then_IfBlock1,
      outC->_L36_then_IfBlock1,
      &outC->_L29_then_IfBlock1,
      outC->_L32_then_IfBlock1,
      &outC->Context_validateDataDirection_General_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L30_then_IfBlock1,
      &outC->Context_validateDataDirection_General_2.outMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outMessage_partial,
      &outC->_L30_then_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &outMessage_partial);
    outC->trainPositionKnown = trainPositionKnown_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->msgSource == msrc_Euroradio_Common_Types_Pkg;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L96_then_else_IfBlock1 = Q_DIR_Both_directions;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L23_then_else_IfBlock1,
        inMessage);
      outC->_L132_then_else_IfBlock1 =
        outC->_L23_then_else_IfBlock1.Radio_Common_Header.q_dir;
      outC->_L102_then_else_IfBlock1 = outC->_L132_then_else_IfBlock1 ==
        outC->_L96_then_else_IfBlock1;
      outC->_L115_then_else_IfBlock1 = outC->LRBGKnown;
      outC->_L129_then_else_IfBlock1 = kcg_false;
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L21_then_else_IfBlock1,
        inPositionedBGs);
      /* IfBlock1:else:then:_L22=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#10)/ */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        &outC->_L23_then_else_IfBlock1,
        &outC->_L21_then_else_IfBlock1,
        &outC->Context_getLRBGForRadioMessage_10);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L22_then_else_IfBlock1,
        &outC->Context_getLRBGForRadioMessage_10.outLRBG);
      outC->_L127_then_else_IfBlock1 =
        outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
      outC->_L128_then_else_IfBlock1 = !outC->_L127_then_else_IfBlock1;
      outC->_L26_then_else_IfBlock1 = outC->_L22_then_else_IfBlock1.valid;
      /* IfBlock1:else:then:_L126= */
      if (outC->_L26_then_else_IfBlock1) {
        outC->_L126_then_else_IfBlock1 = outC->_L128_then_else_IfBlock1;
      }
      else {
        outC->_L126_then_else_IfBlock1 = outC->_L129_then_else_IfBlock1;
      }
      outC->coordinateSystemAssigned_then_else_IfBlock1 =
        outC->_L126_then_else_IfBlock1;
      outC->_L131_then_else_IfBlock1 =
        outC->coordinateSystemAssigned_then_else_IfBlock1;
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &outC->_L122_then_else_IfBlock1,
        trainPosition);
      outC->_L123_then_else_IfBlock1 =
        outC->_L122_then_else_IfBlock1.trainPositionIsUnknown;
      outC->_L121_then_else_IfBlock1 = !outC->_L123_then_else_IfBlock1;
      outC->_L125_then_else_IfBlock1 = outC->_L122_then_else_IfBlock1.valid;
      outC->_L124_then_else_IfBlock1 = outC->_L125_then_else_IfBlock1 &
        outC->_L121_then_else_IfBlock1;
      _7_trainPositionKnown_partial = outC->_L124_then_else_IfBlock1;
      outC->_L107_then_else_IfBlock1 = _7_trainPositionKnown_partial;
      outC->_L25_then_else_IfBlock1 = Q_DIRTRAIN_Unknown;
      outC->_L27_then_else_IfBlock1 =
        outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
      /* IfBlock1:else:then:_L24= */
      if (outC->_L26_then_else_IfBlock1) {
        outC->_L24_then_else_IfBlock1 = outC->_L27_then_else_IfBlock1;
      }
      else {
        outC->_L24_then_else_IfBlock1 = outC->_L25_then_else_IfBlock1;
      }
      outC->trainRunningDirection_then_else_IfBlock1 = outC->_L24_then_else_IfBlock1;
      outC->_L120_then_else_IfBlock1 = outC->trainRunningDirection_then_else_IfBlock1;
      outC->_L104_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
      outC->_L111_then_else_IfBlock1 = outC->_L104_then_else_IfBlock1 ==
        outC->_L120_then_else_IfBlock1;
      outC->_L98_then_else_IfBlock1 = Q_DIR_Reverse;
      outC->_L101_then_else_IfBlock1 = outC->_L132_then_else_IfBlock1 ==
        outC->_L98_then_else_IfBlock1;
      outC->_L106_then_else_IfBlock1 = outC->_L101_then_else_IfBlock1 &
        outC->_L111_then_else_IfBlock1 & outC->_L107_then_else_IfBlock1 &
        outC->_L131_then_else_IfBlock1 & outC->_L115_then_else_IfBlock1;
      outC->_L112_then_else_IfBlock1 = outC->LRBGKnown;
      outC->_L130_then_else_IfBlock1 =
        outC->coordinateSystemAssigned_then_else_IfBlock1;
      outC->_L100_then_else_IfBlock1 = _7_trainPositionKnown_partial;
      outC->_L119_then_else_IfBlock1 = outC->trainRunningDirection_then_else_IfBlock1;
      outC->_L105_then_else_IfBlock1 = Q_DIRTRAIN_Nominal;
      outC->_L116_then_else_IfBlock1 = outC->_L105_then_else_IfBlock1 ==
        outC->_L119_then_else_IfBlock1;
      outC->_L113_then_else_IfBlock1 = Q_DIR_Nominal;
      outC->_L109_then_else_IfBlock1 = outC->_L132_then_else_IfBlock1 ==
        outC->_L113_then_else_IfBlock1;
      outC->_L99_then_else_IfBlock1 = outC->_L109_then_else_IfBlock1 &
        outC->_L116_then_else_IfBlock1 & outC->_L100_then_else_IfBlock1 &
        outC->_L130_then_else_IfBlock1 & outC->_L112_then_else_IfBlock1;
      outC->_L97_then_else_IfBlock1 = outC->_L99_then_else_IfBlock1 |
        outC->_L106_then_else_IfBlock1 | outC->_L102_then_else_IfBlock1;
      outC->correctRadioHeaderDirection_then_else_IfBlock1 =
        outC->_L97_then_else_IfBlock1;
      outC->IfBlock2_clock_then_else_IfBlock1 =
        ((*inMessage).radioMetadata.q_dir == kcg_true) &
        (!outC->correctRadioHeaderDirection_then_else_IfBlock1);
      /* IfBlock1:else:then:IfBlock2: */
      if (outC->IfBlock2_clock_then_else_IfBlock1) {
        outC->_L3_then_IfBlock2_then_else_IfBlock1 = kcg_false;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L2_then_IfBlock2_then_else_IfBlock1,
          inMessage);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L1_then_IfBlock2_then_else_IfBlock1,
          &outC->_L2_then_IfBlock2_then_else_IfBlock1);
        if (kcg_true) {
          outC->_L1_then_IfBlock2_then_else_IfBlock1.valid =
            outC->_L3_then_IfBlock2_then_else_IfBlock1;
        }
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_5_outMessage_partial,
          &outC->_L1_then_IfBlock2_then_else_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_8_outMessage_partial,
          &_5_outMessage_partial);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L45_else_IfBlock2_then_else_IfBlock1,
          inMessage);
        outC->_L51_else_IfBlock2_then_else_IfBlock1 = Q_DIRTRAIN_Unknown;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L53_else_IfBlock2_then_else_IfBlock1,
          inMessage);
        kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
          &outC->_L46_else_IfBlock2_then_else_IfBlock1,
          inPositionedBGs);
        /* IfBlock1:else:then:IfBlock2:else:_L48=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#6)/ */
        getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
          &outC->_L53_else_IfBlock2_then_else_IfBlock1,
          &outC->_L46_else_IfBlock2_then_else_IfBlock1,
          &outC->Context_getLRBGForRadioMessage_6);
        kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
          &outC->_L48_else_IfBlock2_then_else_IfBlock1,
          &outC->Context_getLRBGForRadioMessage_6.outLRBG);
        outC->_L47_else_IfBlock2_then_else_IfBlock1 =
          outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
        outC->_L54_else_IfBlock2_then_else_IfBlock1 =
          outC->_L48_else_IfBlock2_then_else_IfBlock1.valid;
        /* IfBlock1:else:then:IfBlock2:else:_L50= */
        if (outC->_L54_else_IfBlock2_then_else_IfBlock1) {
          outC->_L50_else_IfBlock2_then_else_IfBlock1 =
            outC->_L47_else_IfBlock2_then_else_IfBlock1;
        }
        else {
          outC->_L50_else_IfBlock2_then_else_IfBlock1 =
            outC->_L51_else_IfBlock2_then_else_IfBlock1;
        }
        outC->_L59_else_IfBlock2_then_else_IfBlock1 = outC->LRBGKnown;
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &outC->_L52_else_IfBlock2_then_else_IfBlock1,
          trainPosition);
        outC->_L57_else_IfBlock2_then_else_IfBlock1 = kcg_false;
        outC->_L49_else_IfBlock2_then_else_IfBlock1 =
          outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
        outC->_L58_else_IfBlock2_then_else_IfBlock1 =
          !outC->_L49_else_IfBlock2_then_else_IfBlock1;
        /* IfBlock1:else:then:IfBlock2:else:_L56= */
        if (outC->_L54_else_IfBlock2_then_else_IfBlock1) {
          outC->_L56_else_IfBlock2_then_else_IfBlock1 =
            outC->_L58_else_IfBlock2_then_else_IfBlock1;
        }
        else {
          outC->_L56_else_IfBlock2_then_else_IfBlock1 =
            outC->_L57_else_IfBlock2_then_else_IfBlock1;
        }
        /* IfBlock1:else:then:IfBlock2:else:_L55=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#6)/ */
        validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
          &outC->_L45_else_IfBlock2_then_else_IfBlock1,
          outC->_L50_else_IfBlock2_then_else_IfBlock1,
          outC->_L59_else_IfBlock2_then_else_IfBlock1,
          &outC->_L52_else_IfBlock2_then_else_IfBlock1,
          outC->_L56_else_IfBlock2_then_else_IfBlock1,
          &outC->Context_validateDataDirection_General_6);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L55_else_IfBlock2_then_else_IfBlock1,
          &outC->Context_validateDataDirection_General_6.outMessage);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_6_outMessage_partial,
          &outC->_L55_else_IfBlock2_then_else_IfBlock1);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_8_outMessage_partial,
          &_6_outMessage_partial);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_outMessage_partial,
        &_8_outMessage_partial);
      _2_trainPositionKnown_partial = _7_trainPositionKnown_partial;
    }
    else {
      _3_trainPositionKnown_partial = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L1_else_else_IfBlock1,
        inMessage);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_4_outMessage_partial,
        &outC->_L1_else_else_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_1_outMessage_partial,
        &_4_outMessage_partial);
      _2_trainPositionKnown_partial = _3_trainPositionKnown_partial;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &_1_outMessage_partial);
    outC->trainPositionKnown = _2_trainPositionKnown_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void validateDataDirection_init_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC)
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

  outC->_L7 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_c = kcg_lit_int64(0);
  outC->_L6.nid_bg = kcg_lit_int64(0);
  outC->_L6.q_link = Q_LINK_Unlinked;
  outC->_L6.location.nominal = kcg_lit_int64(0);
  outC->_L6.location.d_min = kcg_lit_int64(0);
  outC->_L6.location.d_max = kcg_lit_int64(0);
  outC->_L6.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.valid = kcg_true;
  outC->_L6.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L6.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L6.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L6.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L6.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L6.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L6.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L6.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L6.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L6.infoFromPassing.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L6.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L6.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L6.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L6.infoFromPassing.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L6.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L6.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L6.infoFromPassing.linkedBGs[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L6.infoFromPassing.linkedBGs[idx].q_dir = Q_DIR_Reverse;
    outC->_L6.infoFromPassing.linkedBGs[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.infoFromPassing.linkedBGs[idx].d_link = kcg_lit_int64(0);
    outC->_L6.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6.infoFromPassing.linkedBGs[idx].nid_c = kcg_lit_int64(0);
    outC->_L6.infoFromPassing.linkedBGs[idx].nid_bg = kcg_lit_int64(0);
    outC->_L6.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L6.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L6.infoFromPassing.linkedBGs[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L6.missed = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1.radioMetadata.nid_em = kcg_true;
  outC->_L1.radioMetadata.q_scale = kcg_true;
  outC->_L1.radioMetadata.d_sr = kcg_true;
  outC->_L1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1.radioMetadata.d_ref = kcg_true;
  outC->_L1.radioMetadata.q_dir = kcg_true;
  outC->_L1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1.radioMetadata.m_version = kcg_true;
  outC->_L1.BG_Common_Header.valid = kcg_true;
  outC->_L1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L1.packets.PacketHeaders[idx1].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx1].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx1].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx1].endAddress = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L1.packets.PacketData[idx2] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L5 = msrc_undefined_Common_Types_Pkg;
  outC->trainPositionKnown = kcg_true;
  outC->LRBGKnown = kcg_true;
  outC->msgSource = msrc_undefined_Common_Types_Pkg;
  outC->IfBlock1_clock = kcg_true;
  outC->_L132_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L131_then_else_IfBlock1 = kcg_true;
  outC->_L130_then_else_IfBlock1 = kcg_true;
  outC->_L126_then_else_IfBlock1 = kcg_true;
  outC->_L127_then_else_IfBlock1 = kcg_true;
  outC->_L128_then_else_IfBlock1 = kcg_true;
  outC->_L129_then_else_IfBlock1 = kcg_true;
  outC->_L125_then_else_IfBlock1 = kcg_true;
  outC->_L124_then_else_IfBlock1 = kcg_true;
  outC->_L121_then_else_IfBlock1 = kcg_true;
  outC->_L122_then_else_IfBlock1.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L122_then_else_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L122_then_else_IfBlock1.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L122_then_else_IfBlock1.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].valid =
      kcg_true;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_dir =
      Q_DIR_Reverse;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].d_link =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].nid_c =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].nid_bg =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L122_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx3].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L122_then_else_IfBlock1.LRBG.missed = kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L122_then_else_IfBlock1.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].valid =
      kcg_true;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_dir =
      Q_DIR_Reverse;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].d_link =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_c =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_bg =
      kcg_lit_int64(0);
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L122_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx4].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L122_then_else_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L122_then_else_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L122_then_else_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L122_then_else_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L122_then_else_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L122_then_else_IfBlock1.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L122_then_else_IfBlock1.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L123_then_else_IfBlock1 = kcg_true;
  outC->_L120_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L119_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L96_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L97_then_else_IfBlock1 = kcg_true;
  outC->_L98_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L99_then_else_IfBlock1 = kcg_true;
  outC->_L100_then_else_IfBlock1 = kcg_true;
  outC->_L101_then_else_IfBlock1 = kcg_true;
  outC->_L102_then_else_IfBlock1 = kcg_true;
  outC->_L104_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L105_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L106_then_else_IfBlock1 = kcg_true;
  outC->_L107_then_else_IfBlock1 = kcg_true;
  outC->_L109_then_else_IfBlock1 = kcg_true;
  outC->_L111_then_else_IfBlock1 = kcg_true;
  outC->_L112_then_else_IfBlock1 = kcg_true;
  outC->_L113_then_else_IfBlock1 = Q_DIR_Reverse;
  outC->_L115_then_else_IfBlock1 = kcg_true;
  outC->_L116_then_else_IfBlock1 = kcg_true;
  outC->_L24_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L25_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L26_then_else_IfBlock1 = kcg_true;
  outC->_L27_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 41; idx6++) {
    outC->_L21_then_else_IfBlock1[idx6].valid = kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].nid_c = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].nid_bg = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].q_link = Q_LINK_Unlinked;
    outC->_L21_then_else_IfBlock1[idx6].location.nominal = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].location.d_min = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].location.d_max = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].seqNoOnTrack = kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.valid = kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.d_link.nominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.d_link.d_min =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.d_link.d_max =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L21_then_else_IfBlock1[idx6].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.valid = kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int64(0);
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx5 = 0; idx5 < 33; idx5++) {
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].valid =
        kcg_true;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_LRBG =
        kcg_lit_int64(0);
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_dir =
        Q_DIR_Reverse;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].d_link =
        kcg_lit_int64(0);
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_c =
        kcg_lit_int64(0);
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].nid_bg =
        kcg_lit_int64(0);
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L21_then_else_IfBlock1[idx6].infoFromPassing.linkedBGs[idx5].q_locacc =
        kcg_lit_int64(0);
    }
    outC->_L21_then_else_IfBlock1[idx6].missed = kcg_true;
  }
  outC->_L22_then_else_IfBlock1.valid = kcg_true;
  outC->_L22_then_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L22_then_else_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L22_then_else_IfBlock1.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(
      0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L22_then_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx7 = 0; idx7 < 33; idx7++) {
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].valid = kcg_true;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_dir =
      Q_DIR_Reverse;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].d_link =
      kcg_lit_int64(0);
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_c =
      kcg_lit_int64(0);
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].nid_bg =
      kcg_lit_int64(0);
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L22_then_else_IfBlock1.infoFromPassing.linkedBGs[idx7].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L22_then_else_IfBlock1.missed = kcg_true;
  outC->_L23_then_else_IfBlock1.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L23_then_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L23_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L23_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(
      0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(
      0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx8 = 0; idx8 < 30; idx8++) {
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx8].nid_packet =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx8].q_dir = Q_DIR_Reverse;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx8].valid = kcg_true;
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx8].startAddress =
      kcg_lit_int64(0);
    outC->_L23_then_else_IfBlock1.packets.PacketHeaders[idx8].endAddress =
      kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 500; idx9++) {
    outC->_L23_then_else_IfBlock1.packets.PacketData[idx9] = kcg_lit_int64(0);
  }
  outC->_L23_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L23_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L23_then_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->correctRadioHeaderDirection_then_else_IfBlock1 = kcg_true;
  outC->coordinateSystemAssigned_then_else_IfBlock1 = kcg_true;
  outC->trainRunningDirection_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->IfBlock2_clock_then_else_IfBlock1 = kcg_true;
  outC->_L59_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L58_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L57_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L56_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx10].nid_packet =
      kcg_lit_int64(0);
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx10].q_dir =
      Q_DIR_Reverse;
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx10].valid =
      kcg_true;
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx10].startAddress =
      kcg_lit_int64(0);
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx10].endAddress =
      kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 500; idx11++) {
    outC->_L55_else_IfBlock2_then_else_IfBlock1.packets.PacketData[idx11] =
      kcg_lit_int64(0);
  }
  outC->_L55_else_IfBlock2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L55_else_IfBlock2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(
      0);
  outC->_L55_else_IfBlock2_then_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L54_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx12 = 0; idx12 < 30; idx12++) {
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx12].nid_packet =
      kcg_lit_int64(0);
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx12].q_dir =
      Q_DIR_Reverse;
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx12].valid =
      kcg_true;
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx12].startAddress =
      kcg_lit_int64(0);
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx12].endAddress =
      kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 500; idx13++) {
    outC->_L53_else_IfBlock2_then_else_IfBlock1.packets.PacketData[idx13] =
      kcg_lit_int64(0);
  }
  outC->_L53_else_IfBlock2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L53_else_IfBlock2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(
      0);
  outC->_L53_else_IfBlock2_then_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainPosition.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainPosition.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainPosition.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.estimatedFrontEndPosition =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.minSafeFrontEndPosition =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.maxSafeFrontEndPostion =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.valid = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.location.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.location.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.location.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int64(
      0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].valid =
      kcg_true;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L52_else_IfBlock2_then_else_IfBlock1.LRBG.missed = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.location.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.location.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.location.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].valid =
      kcg_true;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int64(0);
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L52_else_IfBlock2_then_else_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.nominalOrReverseToLRBG =
    Q_DLRBG_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainOrientationToLRBG =
    Q_DIRLRBG_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L52_else_IfBlock2_then_else_IfBlock1.estimatedRearEndPosition =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.minSafeRearEndPosition =
    kcg_lit_int64(0);
  outC->_L52_else_IfBlock2_then_else_IfBlock1.maxSafeRearEndPosition =
    kcg_lit_int64(0);
  outC->_L51_else_IfBlock2_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L50_else_IfBlock2_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L49_else_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.nid_c = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.nid_bg = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.q_link = Q_LINK_Unlinked;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.location.nominal = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.location.d_min = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.location.d_max = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.valid = kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.valid = kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].valid =
      kcg_true;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].d_link =
      kcg_lit_int64(0);
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].nid_c =
      kcg_lit_int64(0);
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].nid_bg =
      kcg_lit_int64(0);
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L48_else_IfBlock2_then_else_IfBlock1.infoFromPassing.linkedBGs[idx16].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L48_else_IfBlock2_then_else_IfBlock1.missed = kcg_true;
  outC->_L47_else_IfBlock2_then_else_IfBlock1 = Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 41; idx18++) {
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].valid = kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].nid_c = kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].nid_bg = kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].q_link = Q_LINK_Unlinked;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].location.nominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].location.d_min =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].location.d_max =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].seqNoOnTrack =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.valid =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.expectedLocation.d_min =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.expectedLocation.d_max =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.d_link.nominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.d_link.d_min =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.d_link.d_max =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.valid =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_dir =
      Q_DIR_Reverse;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.d_link =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.nid_c =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.nid_bg =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.valid =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.valid =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.q_media =
      Q_MEDIA_Balise;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.m_mcount =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.nid_c =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.nid_bg =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.q_link =
      Q_LINK_Unlinked;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.valid =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int64(0);
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx17 = 0; idx17 < 33; idx17++) {
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].valid =
        kcg_true;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].nid_LRBG =
        kcg_lit_int64(0);
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_dir =
        Q_DIR_Reverse;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].d_link =
        kcg_lit_int64(0);
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].nid_c =
        kcg_lit_int64(0);
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].nid_bg =
        kcg_lit_int64(0);
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].infoFromPassing.linkedBGs[idx17].q_locacc =
        kcg_lit_int64(0);
    }
    outC->_L46_else_IfBlock2_then_else_IfBlock1[idx18].missed = kcg_true;
  }
  outC->_L45_else_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx19].nid_packet =
      kcg_lit_int64(0);
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx19].q_dir =
      Q_DIR_Reverse;
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx19].valid =
      kcg_true;
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx19].startAddress =
      kcg_lit_int64(0);
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx19].endAddress =
      kcg_lit_int64(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L45_else_IfBlock2_then_else_IfBlock1.packets.PacketData[idx20] =
      kcg_lit_int64(0);
  }
  outC->_L45_else_IfBlock2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L45_else_IfBlock2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(
      0);
  outC->_L45_else_IfBlock2_then_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx21].nid_packet =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx21].valid =
      kcg_true;
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx21].startAddress =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx21].endAddress =
      kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 500; idx22++) {
    outC->_L1_then_IfBlock2_then_else_IfBlock1.packets.PacketData[idx22] =
      kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_then_IfBlock2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1_then_IfBlock2_then_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.valid = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.source =
    msrc_undefined_Common_Types_Pkg;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.t_train_reference =
    kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.d_emergencystop =
    kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.valid =
    kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.radioDevice =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_message =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_lrbg =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.nid_em =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_sr =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.t_sh_rqst =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_ref =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.q_dir =
    Q_DIR_Reverse;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx23].nid_packet =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx23].q_dir =
      Q_DIR_Reverse;
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx23].valid =
      kcg_true;
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx23].startAddress =
      kcg_lit_int64(0);
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketHeaders[idx23].endAddress =
      kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L2_then_IfBlock2_then_else_IfBlock1.packets.PacketData[idx24] =
      kcg_lit_int64(0);
  }
  outC->_L2_then_IfBlock2_then_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L2_then_IfBlock2_then_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L2_then_IfBlock2_then_else_IfBlock1.sendingRBC.device_id =
    kcg_lit_int64(0);
  outC->_L3_then_IfBlock2_then_else_IfBlock1 = kcg_true;
  outC->_L1_else_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_else_else_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_else_else_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_else_else_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.d_emergencystop =
    kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->_L1_else_else_IfBlock1.packets.PacketHeaders[idx25].nid_packet =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.packets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->_L1_else_else_IfBlock1.packets.PacketHeaders[idx25].valid = kcg_true;
    outC->_L1_else_else_IfBlock1.packets.PacketHeaders[idx25].startAddress =
      kcg_lit_int64(0);
    outC->_L1_else_else_IfBlock1.packets.PacketHeaders[idx25].endAddress =
      kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->_L1_else_else_IfBlock1.packets.PacketData[idx26] = kcg_lit_int64(0);
  }
  outC->_L1_else_else_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_else_else_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1_else_else_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int64(
      0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx27].nid_packet =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx27].startAddress =
      kcg_lit_int64(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx27].endAddress =
      kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->_L1_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.valid = kcg_true;
  outC->_L29_then_IfBlock1.timestamp = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L29_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L29_then_IfBlock1.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.valid = kcg_true;
  outC->_L29_then_IfBlock1.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L29_then_IfBlock1.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(
      0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L29_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx29 = 0; idx29 < 33; idx29++) {
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].valid = kcg_true;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_dir =
      Q_DIR_Reverse;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].d_link =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].nid_c =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].nid_bg =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx29].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L29_then_IfBlock1.LRBG.missed = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L29_then_IfBlock1.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(
      0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(
      0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx30 = 0; idx30 < 33; idx30++) {
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].valid =
      kcg_true;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_dir =
      Q_DIR_Reverse;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].d_link =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].nid_c =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].nid_bg =
      kcg_lit_int64(0);
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L29_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx30].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L29_then_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L29_then_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L29_then_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L29_then_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L29_then_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L29_then_IfBlock1.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L29_then_IfBlock1.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.valid = kcg_true;
  outC->_L30_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L30_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L30_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L30_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L30_then_IfBlock1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L30_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L30_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L30_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L30_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L30_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L30_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L30_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L30_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx31 = 0; idx31 < 30; idx31++) {
    outC->_L30_then_IfBlock1.packets.PacketHeaders[idx31].nid_packet =
      kcg_lit_int64(0);
    outC->_L30_then_IfBlock1.packets.PacketHeaders[idx31].q_dir = Q_DIR_Reverse;
    outC->_L30_then_IfBlock1.packets.PacketHeaders[idx31].valid = kcg_true;
    outC->_L30_then_IfBlock1.packets.PacketHeaders[idx31].startAddress =
      kcg_lit_int64(0);
    outC->_L30_then_IfBlock1.packets.PacketHeaders[idx31].endAddress =
      kcg_lit_int64(0);
  }
  for (idx32 = 0; idx32 < 500; idx32++) {
    outC->_L30_then_IfBlock1.packets.PacketData[idx32] = kcg_lit_int64(0);
  }
  outC->_L30_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L30_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L30_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L31_then_IfBlock1 = Q_DIRTRAIN_Reverse;
  outC->_L32_then_IfBlock1 = kcg_true;
  outC->_L33_then_IfBlock1 = kcg_true;
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
  outC->_L34_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L34_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_train_reference =
    kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L34_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx33 = 0; idx33 < 30; idx33++) {
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx33].nid_packet =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx33].q_dir = Q_DIR_Reverse;
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx33].valid = kcg_true;
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx33].startAddress =
      kcg_lit_int64(0);
    outC->_L34_then_IfBlock1.packets.PacketHeaders[idx33].endAddress =
      kcg_lit_int64(0);
  }
  for (idx34 = 0; idx34 < 500; idx34++) {
    outC->_L34_then_IfBlock1.packets.PacketData[idx34] = kcg_lit_int64(0);
  }
  outC->_L34_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L34_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L34_then_IfBlock1.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L36_then_IfBlock1 = kcg_true;
  outC->outMessage.valid = kcg_true;
  outC->outMessage.source = msrc_undefined_Common_Types_Pkg;
  outC->outMessage.radioMetadata.t_train_reference = kcg_true;
  outC->outMessage.radioMetadata.nid_em = kcg_true;
  outC->outMessage.radioMetadata.q_scale = kcg_true;
  outC->outMessage.radioMetadata.d_sr = kcg_true;
  outC->outMessage.radioMetadata.t_sh_rqst = kcg_true;
  outC->outMessage.radioMetadata.d_ref = kcg_true;
  outC->outMessage.radioMetadata.q_dir = kcg_true;
  outC->outMessage.radioMetadata.d_emergencystop = kcg_true;
  outC->outMessage.radioMetadata.m_version = kcg_true;
  outC->outMessage.BG_Common_Header.valid = kcg_true;
  outC->outMessage.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->outMessage.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outMessage.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->outMessage.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->outMessage.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->outMessage.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->outMessage.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->outMessage.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->outMessage.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->outMessage.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->outMessage.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->outMessage.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->outMessage.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->outMessage.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->outMessage.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx35 = 0; idx35 < 30; idx35++) {
    outC->outMessage.packets.PacketHeaders[idx35].nid_packet = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx35].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[idx35].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[idx35].startAddress = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx35].endAddress = kcg_lit_int64(0);
  }
  for (idx36 = 0; idx36 < 500; idx36++) {
    outC->outMessage.packets.PacketData[idx36] = kcg_lit_int64(0);
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.device_id = kcg_lit_int64(0);
  /* IfBlock1:then:_L30=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#2)/ */
  validateDataDirection_General_init_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_validateDataDirection_General_2);
  /* IfBlock1:else:then:IfBlock2:else:_L55=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#6)/ */
  validateDataDirection_General_init_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_validateDataDirection_General_6);
  /* IfBlock1:else:then:IfBlock2:else:_L48=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#6)/ */
  getLRBGForRadioMessage_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
    &outC->Context_getLRBGForRadioMessage_6);
  /* IfBlock1:else:then:_L22=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#10)/ */
  getLRBGForRadioMessage_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
    &outC->Context_getLRBGForRadioMessage_10);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void validateDataDirection_reset_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC)
{
  /* IfBlock1:then:_L30=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#2)/ */
  validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_validateDataDirection_General_2);
  /* IfBlock1:else:then:IfBlock2:else:_L55=(ValidateDataDirectionGeneral_Pkg::validateDataDirection_General#6)/ */
  validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_validateDataDirection_General_6);
  /* IfBlock1:else:then:IfBlock2:else:_L48=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#6)/ */
  getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
    &outC->Context_getLRBGForRadioMessage_6);
  /* IfBlock1:else:then:_L22=(ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage#10)/ */
  getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
    &outC->Context_getLRBGForRadioMessage_10);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

