/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"

/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General/ */
void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* trainRunningDirectionFromBG/ */
  Q_DIRTRAIN trainRunningDirectionFromBG,
  /* LRBGKnown/ */
  kcg_bool LRBGKnown,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* coordinateSystemAssigned/ */
  kcg_bool coordinateSystemAssigned,
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static CompressedPackets_T_Common_Types_Pkg noname;

  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L104, trainPosition);
  outC->_L106 = outC->_L104.valid;
  outC->_L102 = outC->_L104.trainPositionIsUnknown;
  outC->_L103 = !outC->_L102;
  outC->_L105 = outC->_L106 & outC->_L103;
  outC->trainPositionKnown = outC->_L105;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->_L1.packets.PacketHeaders);
  outC->_L24 = trainRunningDirectionFromBG;
  outC->trainRunningDirectionToBG = outC->_L24;
  outC->_L25 = outC->trainRunningDirectionToBG;
  /* _L8/ */
  for (idx = 0; idx < 30; idx++) {
    outC->_L8[idx] = outC->_L25;
  }
  outC->_L81 = LRBGKnown;
  /* _L84/ */
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L84[idx1] = outC->_L81;
  }
  /* _L19/ */
  for (idx2 = 0; idx2 < 30; idx2++) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L19[idx2],
      &outC->_L104);
  }
  outC->_L79 = coordinateSystemAssigned;
  /* _L80/ */
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L80[idx3] = outC->_L79;
  }
  /* _L7= */
  for (idx4 = 0; idx4 < 30; idx4++) {
    /* _L7=(ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket#1)/ */
    validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->_L6[idx4],
      outC->_L8[idx4],
      outC->_L84[idx4],
      &outC->_L19[idx4],
      outC->_L80[idx4],
      &outC->Context_validateDataDirectionForSinglePacket_1[idx4]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L7[idx4],
      &outC->Context_validateDataDirectionForSinglePacket_1[idx4].outMetadataElement);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L99, &outC->_L1.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L98, &outC->_L99);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L98.PacketHeaders, &outC->_L7);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->tmpPackets, &outC->_L98);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L100, &outC->tmpPackets);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L10, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L12, &outC->_L10.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &outC->_L12);
  outC->_L83 = LRBGKnown;
  outC->_L82 = LRBGKnown;
  outC->_L78 = coordinateSystemAssigned;
  outC->_L77 = coordinateSystemAssigned;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L13,
    &outC->_L10.Radio_Common_Header);
  outC->_L45 = outC->_L13.nid_message;
  outC->nid_message = outC->_L45;
  outC->_L76 = outC->nid_message;
  outC->_L75 = kcg_lit_int64(15);
  outC->_L74 = outC->_L76 != outC->_L75;
  outC->_L70 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L16 = outC->_L10.source;
  outC->msgSrc = outC->_L16;
  outC->_L71 = outC->msgSrc;
  outC->_L72 = outC->_L71 == outC->_L70;
  outC->_L73 = outC->_L72 & outC->_L74;
  outC->_L17 = outC->_L10.valid;
  outC->inputValid = outC->_L17;
  outC->_L69 = outC->inputValid;
  outC->_L66 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L67 = outC->msgSrc;
  outC->_L65 = outC->_L67 == outC->_L66;
  outC->_L57 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L56 = outC->msgSrc;
  outC->_L55 = outC->_L56 == outC->_L57;
  outC->_L33 = Q_DIR_Both_directions;
  outC->_L44 = outC->_L13.q_dir;
  outC->mandatoryVariableQ_DIR = outC->_L44;
  outC->_L48 = outC->mandatoryVariableQ_DIR;
  outC->_L34 = outC->_L48 == outC->_L33;
  outC->_L43 = outC->trainPositionKnown;
  outC->_L50 = outC->trainRunningDirectionToBG;
  outC->_L38 = Q_DIRTRAIN_Reverse;
  outC->_L39 = outC->_L38 == outC->_L50;
  outC->_L27 = Q_DIR_Reverse;
  outC->_L47 = outC->mandatoryVariableQ_DIR;
  outC->_L28 = outC->_L47 == outC->_L27;
  outC->_L29 = outC->_L28 & outC->_L39 & outC->_L43 & outC->_L78 & outC->_L83;
  outC->_L35 = outC->trainPositionKnown;
  outC->_L49 = outC->trainRunningDirectionToBG;
  outC->_L31 = Q_DIRTRAIN_Nominal;
  outC->_L36 = outC->_L31 == outC->_L49;
  outC->_L40 = Q_DIR_Nominal;
  outC->_L46 = outC->mandatoryVariableQ_DIR;
  outC->_L32 = outC->_L46 == outC->_L40;
  outC->_L42 = outC->_L32 & outC->_L36 & outC->_L35 & outC->_L77 & outC->_L82;
  outC->_L41 = outC->_L42 | outC->_L29 | outC->_L34;
  outC->_L53 = kcg_lit_int64(15);
  outC->_L52 = outC->nid_message;
  outC->_L51 = outC->_L52 == outC->_L53;
  outC->_L54 = outC->_L51 & outC->_L41 & outC->_L55;
  outC->_L64 = outC->_L54 | outC->_L65 | outC->_L73;
  outC->_L68 = outC->_L64 & outC->_L69;
  outC->outputValid = outC->_L68;
  outC->_L60 = outC->outputValid;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->_L10.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, &outC->_L10.BG_Common_Header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L101, &outC->_L10.sendingRBC);
  outC->_L9.valid = outC->_L60;
  outC->_L9.source = outC->_L16;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L9.radioMetadata,
    &outC->_L15);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9.BG_Common_Header, &outC->_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L9.Radio_Common_Header,
    &outC->_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L9.packets, &outC->_L100);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L9.sendingRBC, &outC->_L101);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L9);
}

#ifndef KCG_USER_DEFINED_INIT
void validateDataDirection_General_init_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC)
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

  outC->_L102 = kcg_true;
  outC->_L103 = kcg_true;
  outC->_L104.valid = kcg_true;
  outC->_L104.timestamp = kcg_lit_int64(0);
  outC->_L104.trainPositionIsUnknown = kcg_true;
  outC->_L104.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L104.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L104.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L104.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L104.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L104.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L104.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L104.LRBG.valid = kcg_true;
  outC->_L104.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L104.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L104.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L104.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L104.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L104.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L104.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L104.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L104.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L104.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L104.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L104.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L104.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L104.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L104.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L104.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L104.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L104.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L104.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L104.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].valid = kcg_true;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L104.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L104.LRBG.missed = kcg_true;
  outC->_L104.prvLRBG.valid = kcg_true;
  outC->_L104.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L104.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L104.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L104.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L104.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L104.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L104.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L104.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L104.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L104.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].valid = kcg_true;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG = kcg_lit_int64(0);
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir = Q_DIR_Reverse;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link = kcg_lit_int64(0);
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c = kcg_lit_int64(0);
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg = kcg_lit_int64(0);
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L104.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc = kcg_lit_int64(0);
  }
  outC->_L104.prvLRBG.missed = kcg_true;
  outC->_L104.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L104.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L104.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L104.linkingIsUsedOnboard = kcg_true;
  outC->_L104.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L104.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L104.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L105 = kcg_true;
  outC->_L106 = kcg_true;
  outC->_L101.valid = kcg_true;
  outC->_L101.nid_c = kcg_lit_int64(0);
  outC->_L101.rbc_id = kcg_lit_int64(0);
  outC->_L101.device_id = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L100.PacketHeaders[idx3].nid_packet = kcg_lit_int64(0);
    outC->_L100.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L100.PacketHeaders[idx3].valid = kcg_true;
    outC->_L100.PacketHeaders[idx3].startAddress = kcg_lit_int64(0);
    outC->_L100.PacketHeaders[idx3].endAddress = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L100.PacketData[idx4] = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 30; idx5++) {
    outC->_L99.PacketHeaders[idx5].nid_packet = kcg_lit_int64(0);
    outC->_L99.PacketHeaders[idx5].q_dir = Q_DIR_Reverse;
    outC->_L99.PacketHeaders[idx5].valid = kcg_true;
    outC->_L99.PacketHeaders[idx5].startAddress = kcg_lit_int64(0);
    outC->_L99.PacketHeaders[idx5].endAddress = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 500; idx6++) {
    outC->_L99.PacketData[idx6] = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L98.PacketHeaders[idx7].nid_packet = kcg_lit_int64(0);
    outC->_L98.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L98.PacketHeaders[idx7].valid = kcg_true;
    outC->_L98.PacketHeaders[idx7].startAddress = kcg_lit_int64(0);
    outC->_L98.PacketHeaders[idx7].endAddress = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L98.PacketData[idx8] = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L84[idx9] = kcg_true;
  }
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  for (idx10 = 0; idx10 < 30; idx10++) {
    outC->_L80[idx10] = kcg_true;
  }
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L75 = kcg_lit_int64(0);
  outC->_L76 = kcg_lit_int64(0);
  outC->_L73 = kcg_true;
  outC->_L70 = msrc_undefined_Common_Types_Pkg;
  outC->_L71 = msrc_undefined_Common_Types_Pkg;
  outC->_L72 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L68 = kcg_true;
  outC->_L65 = kcg_true;
  outC->_L66 = msrc_undefined_Common_Types_Pkg;
  outC->_L67 = msrc_undefined_Common_Types_Pkg;
  outC->_L64 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L57 = msrc_undefined_Common_Types_Pkg;
  outC->_L56 = msrc_undefined_Common_Types_Pkg;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_lit_int64(0);
  outC->_L52 = kcg_lit_int64(0);
  outC->_L51 = kcg_true;
  outC->_L50 = Q_DIRTRAIN_Reverse;
  outC->_L49 = Q_DIRTRAIN_Reverse;
  outC->_L48 = Q_DIR_Reverse;
  outC->_L47 = Q_DIR_Reverse;
  outC->_L46 = Q_DIR_Reverse;
  outC->_L45 = kcg_lit_int64(0);
  outC->_L44 = Q_DIR_Reverse;
  outC->_L27 = Q_DIR_Reverse;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L31 = Q_DIRTRAIN_Reverse;
  outC->_L32 = kcg_true;
  outC->_L33 = Q_DIR_Reverse;
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L38 = Q_DIRTRAIN_Reverse;
  outC->_L39 = kcg_true;
  outC->_L40 = Q_DIR_Reverse;
  outC->_L41 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L25 = Q_DIRTRAIN_Reverse;
  outC->_L24 = Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L19[idx13].valid = kcg_true;
    outC->_L19[idx13].timestamp = kcg_lit_int64(0);
    outC->_L19[idx13].trainPositionIsUnknown = kcg_true;
    outC->_L19[idx13].noCoordinateSystemHasBeenAssigned = kcg_true;
    outC->_L19[idx13].trainPosition.nominal = kcg_lit_int64(0);
    outC->_L19[idx13].trainPosition.d_min = kcg_lit_int64(0);
    outC->_L19[idx13].trainPosition.d_max = kcg_lit_int64(0);
    outC->_L19[idx13].estimatedFrontEndPosition = kcg_lit_int64(0);
    outC->_L19[idx13].minSafeFrontEndPosition = kcg_lit_int64(0);
    outC->_L19[idx13].maxSafeFrontEndPostion = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.valid = kcg_true;
    outC->_L19[idx13].LRBG.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.q_link = Q_LINK_Unlinked;
    outC->_L19[idx13].LRBG.location.nominal = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.location.d_min = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.location.d_max = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.seqNoOnTrack = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.valid = kcg_true;
    outC->_L19[idx13].LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.expectedLocation.d_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.expectedLocation.d_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19[idx13].LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.valid = kcg_true;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L19[idx13].LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx11 = 0; idx11 < 33; idx11++) {
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].valid = kcg_true;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].nid_LRBG =
        kcg_lit_int64(0);
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_dir = Q_DIR_Reverse;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].d_link =
        kcg_lit_int64(0);
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].nid_c =
        kcg_lit_int64(0);
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].nid_bg =
        kcg_lit_int64(0);
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L19[idx13].LRBG.infoFromPassing.linkedBGs[idx11].q_locacc =
        kcg_lit_int64(0);
    }
    outC->_L19[idx13].LRBG.missed = kcg_true;
    outC->_L19[idx13].prvLRBG.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.q_link = Q_LINK_Unlinked;
    outC->_L19[idx13].prvLRBG.location.nominal = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.location.d_min = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.location.d_max = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.expectedLocation.nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.expectedLocation.d_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.expectedLocation.d_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L19[idx13].prvLRBG.infoFromLinking.linkingInfo.q_locacc =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
      noMotion_Obu_BasicTypes_Pkg;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
      unknownDirection_Obu_BasicTypes_Pkg;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
      kcg_lit_int64(0);
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
      kcg_true;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
      Q_DIRLRBG_Reverse;
    outC->_L19[idx13].prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
      Q_DIRTRAIN_Reverse;
    for (idx12 = 0; idx12 < 33; idx12++) {
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].valid = kcg_true;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].nid_LRBG =
        kcg_lit_int64(0);
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_dir =
        Q_DIR_Reverse;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_scale =
        Q_SCALE_10_cm_scale;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].d_link =
        kcg_lit_int64(0);
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_newcountry =
        Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].nid_c =
        kcg_lit_int64(0);
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].nid_bg =
        kcg_lit_int64(0);
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_linkorientation =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_linkreaction =
        Q_LINKREACTION_Train_trip;
      outC->_L19[idx13].prvLRBG.infoFromPassing.linkedBGs[idx12].q_locacc =
        kcg_lit_int64(0);
    }
    outC->_L19[idx13].prvLRBG.missed = kcg_true;
    outC->_L19[idx13].nominalOrReverseToLRBG = Q_DLRBG_Reverse;
    outC->_L19[idx13].trainOrientationToLRBG = Q_DIRLRBG_Reverse;
    outC->_L19[idx13].trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
    outC->_L19[idx13].linkingIsUsedOnboard = kcg_true;
    outC->_L19[idx13].estimatedRearEndPosition = kcg_lit_int64(0);
    outC->_L19[idx13].minSafeRearEndPosition = kcg_lit_int64(0);
    outC->_L19[idx13].maxSafeRearEndPosition = kcg_lit_int64(0);
  }
  for (idx14 = 0; idx14 < 30; idx14++) {
    outC->_L12.PacketHeaders[idx14].nid_packet = kcg_lit_int64(0);
    outC->_L12.PacketHeaders[idx14].q_dir = Q_DIR_Reverse;
    outC->_L12.PacketHeaders[idx14].valid = kcg_true;
    outC->_L12.PacketHeaders[idx14].startAddress = kcg_lit_int64(0);
    outC->_L12.PacketHeaders[idx14].endAddress = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 500; idx15++) {
    outC->_L12.PacketData[idx15] = kcg_lit_int64(0);
  }
  outC->_L13.radioDevice = kcg_lit_int64(0);
  outC->_L13.receivedSystemTime = kcg_lit_int64(0);
  outC->_L13.nid_message = kcg_lit_int64(0);
  outC->_L13.t_train = kcg_lit_int64(0);
  outC->_L13.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.nid_lrbg = kcg_lit_int64(0);
  outC->_L13.t_train_reference = kcg_lit_int64(0);
  outC->_L13.nid_em = kcg_lit_int64(0);
  outC->_L13.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.d_sr = kcg_lit_int64(0);
  outC->_L13.t_sh_rqst = kcg_lit_int64(0);
  outC->_L13.d_ref = kcg_lit_int64(0);
  outC->_L13.q_dir = Q_DIR_Reverse;
  outC->_L13.d_emergencystop = kcg_lit_int64(0);
  outC->_L13.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
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
  outC->_L15.t_train_reference = kcg_true;
  outC->_L15.nid_em = kcg_true;
  outC->_L15.q_scale = kcg_true;
  outC->_L15.d_sr = kcg_true;
  outC->_L15.t_sh_rqst = kcg_true;
  outC->_L15.d_ref = kcg_true;
  outC->_L15.q_dir = kcg_true;
  outC->_L15.d_emergencystop = kcg_true;
  outC->_L15.m_version = kcg_true;
  outC->_L16 = msrc_undefined_Common_Types_Pkg;
  outC->_L17 = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.source = msrc_undefined_Common_Types_Pkg;
  outC->_L10.radioMetadata.t_train_reference = kcg_true;
  outC->_L10.radioMetadata.nid_em = kcg_true;
  outC->_L10.radioMetadata.q_scale = kcg_true;
  outC->_L10.radioMetadata.d_sr = kcg_true;
  outC->_L10.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L10.radioMetadata.d_ref = kcg_true;
  outC->_L10.radioMetadata.q_dir = kcg_true;
  outC->_L10.radioMetadata.d_emergencystop = kcg_true;
  outC->_L10.radioMetadata.m_version = kcg_true;
  outC->_L10.BG_Common_Header.valid = kcg_true;
  outC->_L10.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L10.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L10.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L10.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L10.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L10.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L10.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L10.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L10.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L10.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L10.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx16 = 0; idx16 < 30; idx16++) {
    outC->_L10.packets.PacketHeaders[idx16].nid_packet = kcg_lit_int64(0);
    outC->_L10.packets.PacketHeaders[idx16].q_dir = Q_DIR_Reverse;
    outC->_L10.packets.PacketHeaders[idx16].valid = kcg_true;
    outC->_L10.packets.PacketHeaders[idx16].startAddress = kcg_lit_int64(0);
    outC->_L10.packets.PacketHeaders[idx16].endAddress = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 500; idx17++) {
    outC->_L10.packets.PacketData[idx17] = kcg_lit_int64(0);
  }
  outC->_L10.sendingRBC.valid = kcg_true;
  outC->_L10.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L10.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L10.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L9.valid = kcg_true;
  outC->_L9.source = msrc_undefined_Common_Types_Pkg;
  outC->_L9.radioMetadata.t_train_reference = kcg_true;
  outC->_L9.radioMetadata.nid_em = kcg_true;
  outC->_L9.radioMetadata.q_scale = kcg_true;
  outC->_L9.radioMetadata.d_sr = kcg_true;
  outC->_L9.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L9.radioMetadata.d_ref = kcg_true;
  outC->_L9.radioMetadata.q_dir = kcg_true;
  outC->_L9.radioMetadata.d_emergencystop = kcg_true;
  outC->_L9.radioMetadata.m_version = kcg_true;
  outC->_L9.BG_Common_Header.valid = kcg_true;
  outC->_L9.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L9.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L9.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L9.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L9.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L9.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L9.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L9.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L9.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L9.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L9.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L9.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L9.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L9.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L9.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx18 = 0; idx18 < 30; idx18++) {
    outC->_L9.packets.PacketHeaders[idx18].nid_packet = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx18].q_dir = Q_DIR_Reverse;
    outC->_L9.packets.PacketHeaders[idx18].valid = kcg_true;
    outC->_L9.packets.PacketHeaders[idx18].startAddress = kcg_lit_int64(0);
    outC->_L9.packets.PacketHeaders[idx18].endAddress = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 500; idx19++) {
    outC->_L9.packets.PacketData[idx19] = kcg_lit_int64(0);
  }
  outC->_L9.sendingRBC.valid = kcg_true;
  outC->_L9.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L9.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L9.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx20 = 0; idx20 < 30; idx20++) {
    outC->_L8[idx20] = Q_DIRTRAIN_Reverse;
  }
  for (idx21 = 0; idx21 < 30; idx21++) {
    outC->_L7[idx21].nid_packet = kcg_lit_int64(0);
    outC->_L7[idx21].q_dir = Q_DIR_Reverse;
    outC->_L7[idx21].valid = kcg_true;
    outC->_L7[idx21].startAddress = kcg_lit_int64(0);
    outC->_L7[idx21].endAddress = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 30; idx22++) {
    outC->_L6[idx22].nid_packet = kcg_lit_int64(0);
    outC->_L6[idx22].q_dir = Q_DIR_Reverse;
    outC->_L6[idx22].valid = kcg_true;
    outC->_L6[idx22].startAddress = kcg_lit_int64(0);
    outC->_L6[idx22].endAddress = kcg_lit_int64(0);
  }
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
  for (idx23 = 0; idx23 < 30; idx23++) {
    outC->_L1.packets.PacketHeaders[idx23].nid_packet = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx23].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx23].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx23].startAddress = kcg_lit_int64(0);
    outC->_L1.packets.PacketHeaders[idx23].endAddress = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 500; idx24++) {
    outC->_L1.packets.PacketData[idx24] = kcg_lit_int64(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 30; idx25++) {
    outC->tmpPackets.PacketHeaders[idx25].nid_packet = kcg_lit_int64(0);
    outC->tmpPackets.PacketHeaders[idx25].q_dir = Q_DIR_Reverse;
    outC->tmpPackets.PacketHeaders[idx25].valid = kcg_true;
    outC->tmpPackets.PacketHeaders[idx25].startAddress = kcg_lit_int64(0);
    outC->tmpPackets.PacketHeaders[idx25].endAddress = kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 500; idx26++) {
    outC->tmpPackets.PacketData[idx26] = kcg_lit_int64(0);
  }
  outC->outputValid = kcg_true;
  outC->inputValid = kcg_true;
  outC->nid_message = kcg_lit_int64(0);
  outC->msgSrc = msrc_undefined_Common_Types_Pkg;
  outC->mandatoryVariableQ_DIR = Q_DIR_Reverse;
  outC->trainPositionKnown = kcg_true;
  outC->trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
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
  for (idx27 = 0; idx27 < 30; idx27++) {
    outC->outMessage.packets.PacketHeaders[idx27].nid_packet = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx27].q_dir = Q_DIR_Reverse;
    outC->outMessage.packets.PacketHeaders[idx27].valid = kcg_true;
    outC->outMessage.packets.PacketHeaders[idx27].startAddress = kcg_lit_int64(0);
    outC->outMessage.packets.PacketHeaders[idx27].endAddress = kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 500; idx28++) {
    outC->outMessage.packets.PacketData[idx28] = kcg_lit_int64(0);
  }
  outC->outMessage.sendingRBC.valid = kcg_true;
  outC->outMessage.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->outMessage.sendingRBC.device_id = kcg_lit_int64(0);
  for (idx = 0; idx < 30; idx++) {
    /* _L7=(ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket#1)/ */
    validateDataDirectionForSinglePacket_init_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_validateDataDirectionForSinglePacket_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 30; idx++) {
    /* _L7=(ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket#1)/ */
    validateDataDirectionForSinglePacket_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_validateDataDirectionForSinglePacket_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

