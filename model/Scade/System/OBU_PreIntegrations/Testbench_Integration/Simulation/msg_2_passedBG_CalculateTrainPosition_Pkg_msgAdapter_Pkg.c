/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG/ */
void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* msgFromTrack/ */
  ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC)
{
  static RadioMetadata_T_Common_Types_Pkg noname;
  static NID_BG _1_noname;
  static RBC_Id_T_Common_Types_Pkg _2_noname;
  static NID_LRBG _3_noname;

  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L13, msgFromTrack);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11,
    &outC->_L13.Radio_Common_Header);
  outC->_L90 = outC->_L11.nid_lrbg;
  _3_noname = outC->_L90;
  outC->_L328 = kcg_lit_int64(100000);
  /* _L323=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_TM_conversions(outC->_L90, &outC->Context_DECODE_NID_LRBG_1);
  outC->_L323 = outC->Context_DECODE_NID_LRBG_1.nid_c;
  outC->_L324 = outC->Context_DECODE_NID_LRBG_1.nid_bg;
  outC->_L327 = outC->_L324 % outC->_L328;
  outC->_L326 = kcg_true;
  /* _L325=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#2)/ */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L326,
    outC->_L323,
    outC->_L327,
    &outC->Context_nidC_nidBG_2_NIDLRBG_2);
  outC->_L325 = outC->Context_nidC_nidBG_2_NIDLRBG_2.nidLRBG;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&outC->_L322, &outC->_L13.sendingRBC);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_2_noname, &outC->_L322);
  outC->_L7 = outC->_L13.valid;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L10, &outC->_L13.BG_Common_Header);
  outC->_L300 = outC->_L10.valid;
  outC->_L297 = outC->_L10.nid_c;
  outC->_L298 = outC->_L10.nid_bg;
  /* _L299=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L300,
    outC->_L297,
    outC->_L298,
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  outC->_L299 = outC->Context_nidC_nidBG_2_NIDLRBG_1.nidLRBG;
  outC->_L109 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L8 = outC->_L13.source;
  outC->_L114 = outC->_L8 == outC->_L109;
  /* _L296= */
  if (outC->_L114) {
    outC->_L296 = outC->_L325;
  }
  else {
    outC->_L296 = outC->_L299;
  }
  /* _L305=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#3)/ */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    outC->_L7,
    outC->_L296,
    &outC->Context_NIDLRBG_2_nidC_nidBG_3);
  outC->_L305 = outC->Context_NIDLRBG_2_nidC_nidBG_3.nidC;
  outC->_L306 = outC->Context_NIDLRBG_2_nidC_nidBG_3.nidBG;
  _1_noname = outC->_L306;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L12, &outC->_L13.packets);
  /* _L295=(TM_specific::Read_P005_ForCalcTrainPos#2)/ */
  Read_P005_ForCalcTrainPos_TM_specific(
    &outC->_L12,
    outC->_L296,
    outC->_L305,
    &outC->Context_Read_P005_ForCalcTrainPos_2);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(
    &outC->_L295,
    &outC->Context_Read_P005_ForCalcTrainPos_2.LinkedBGsOUT);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L9,
    &outC->_L13.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&noname, &outC->_L9);
  outC->_L245 = outC->_L295[0].valid;
  outC->_L94 = outC->_L10.valid;
  outC->_L112 = !outC->_L94;
  outC->_L113 = outC->_L7 & outC->_L112 & outC->_L114 & outC->_L245;
  outC->onlyBGsAnnouncedViaRadio = outC->_L113;
  outC->_L108 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L110 = outC->_L108 == outC->_L8;
  outC->_L111 = outC->_L7 & outC->_L110 & outC->_L94;
  outC->BG_passed = outC->_L111;
  outC->_L91 = outC->_L7 & outC->_L245;
  outC->_L93 = outC->_L7 & outC->_L94;
  outC->_L95 = outC->_L93 | outC->_L91;
  outC->_L80.valid = outC->_L95;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L80.BG_Header, &outC->_L10);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&outC->_L80.linkedBGs, &outC->_L295);
  kcg_copy_passedBG_T_BG_Types_Pkg(&outC->passedBG, &outC->_L80);
}

#ifndef KCG_USER_DEFINED_INIT
void msg_2_passedBG_init_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;

  outC->_L328 = kcg_lit_int64(0);
  outC->_L327 = kcg_lit_int64(0);
  outC->_L326 = kcg_true;
  outC->_L325 = kcg_lit_int64(0);
  outC->_L323 = kcg_lit_int64(0);
  outC->_L324 = kcg_lit_int64(0);
  outC->_L322.valid = kcg_true;
  outC->_L322.nid_c = kcg_lit_int64(0);
  outC->_L322.rbc_id = kcg_lit_int64(0);
  outC->_L322.device_id = kcg_lit_int64(0);
  outC->_L305 = kcg_lit_int64(0);
  outC->_L306 = kcg_lit_int64(0);
  outC->_L300 = kcg_true;
  outC->_L299 = kcg_lit_int64(0);
  outC->_L298 = kcg_lit_int64(0);
  outC->_L297 = kcg_lit_int64(0);
  outC->_L296 = kcg_lit_int64(0);
  for (idx = 0; idx < 33; idx++) {
    outC->_L295[idx].valid = kcg_true;
    outC->_L295[idx].nid_LRBG = kcg_lit_int64(0);
    outC->_L295[idx].q_dir = Q_DIR_Reverse;
    outC->_L295[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L295[idx].d_link = kcg_lit_int64(0);
    outC->_L295[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L295[idx].nid_c = kcg_lit_int64(0);
    outC->_L295[idx].nid_bg = kcg_lit_int64(0);
    outC->_L295[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L295[idx].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L295[idx].q_locacc = kcg_lit_int64(0);
  }
  outC->_L114 = kcg_true;
  outC->_L245 = kcg_true;
  outC->_L113 = kcg_true;
  outC->_L112 = kcg_true;
  outC->_L111 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L108 = msrc_undefined_Common_Types_Pkg;
  outC->_L109 = msrc_undefined_Common_Types_Pkg;
  outC->_L95 = kcg_true;
  outC->_L94 = kcg_true;
  outC->_L93 = kcg_true;
  outC->_L91 = kcg_true;
  outC->_L90 = kcg_lit_int64(0);
  outC->_L80.valid = kcg_true;
  outC->_L80.BG_Header.valid = kcg_true;
  outC->_L80.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L80.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L80.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L80.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L80.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L80.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L80.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L80.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L80.BG_Header.bgPosition.valid = kcg_true;
  outC->_L80.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L80.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L80.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L80.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L80.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L80.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L80.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L80.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L80.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L80.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L80.linkedBGs[idx1].valid = kcg_true;
    outC->_L80.linkedBGs[idx1].nid_LRBG = kcg_lit_int64(0);
    outC->_L80.linkedBGs[idx1].q_dir = Q_DIR_Reverse;
    outC->_L80.linkedBGs[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L80.linkedBGs[idx1].d_link = kcg_lit_int64(0);
    outC->_L80.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L80.linkedBGs[idx1].nid_c = kcg_lit_int64(0);
    outC->_L80.linkedBGs[idx1].nid_bg = kcg_lit_int64(0);
    outC->_L80.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L80.linkedBGs[idx1].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L80.linkedBGs[idx1].q_locacc = kcg_lit_int64(0);
  }
  outC->_L13.valid = kcg_true;
  outC->_L13.source = msrc_undefined_Common_Types_Pkg;
  outC->_L13.radioMetadata.t_train_reference = kcg_true;
  outC->_L13.radioMetadata.nid_em = kcg_true;
  outC->_L13.radioMetadata.q_scale = kcg_true;
  outC->_L13.radioMetadata.d_sr = kcg_true;
  outC->_L13.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L13.radioMetadata.d_ref = kcg_true;
  outC->_L13.radioMetadata.q_dir = kcg_true;
  outC->_L13.radioMetadata.d_emergencystop = kcg_true;
  outC->_L13.radioMetadata.m_version = kcg_true;
  outC->_L13.BG_Common_Header.valid = kcg_true;
  outC->_L13.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L13.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L13.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L13.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L13.BG_Common_Header.m_mcount = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_c = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.nid_bg = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L13.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L13.BG_Common_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L13.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L13.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L13.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L13.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L13.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L13.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L13.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L13.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx2 = 0; idx2 < 30; idx2++) {
    outC->_L13.packets.PacketHeaders[idx2].nid_packet = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].q_dir = Q_DIR_Reverse;
    outC->_L13.packets.PacketHeaders[idx2].valid = kcg_true;
    outC->_L13.packets.PacketHeaders[idx2].startAddress = kcg_lit_int64(0);
    outC->_L13.packets.PacketHeaders[idx2].endAddress = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 500; idx3++) {
    outC->_L13.packets.PacketData[idx3] = kcg_lit_int64(0);
  }
  outC->_L13.sendingRBC.valid = kcg_true;
  outC->_L13.sendingRBC.nid_c = kcg_lit_int64(0);
  outC->_L13.sendingRBC.rbc_id = kcg_lit_int64(0);
  outC->_L13.sendingRBC.device_id = kcg_lit_int64(0);
  outC->_L7 = kcg_true;
  outC->_L8 = msrc_undefined_Common_Types_Pkg;
  outC->_L9.t_train_reference = kcg_true;
  outC->_L9.nid_em = kcg_true;
  outC->_L9.q_scale = kcg_true;
  outC->_L9.d_sr = kcg_true;
  outC->_L9.t_sh_rqst = kcg_true;
  outC->_L9.d_ref = kcg_true;
  outC->_L9.q_dir = kcg_true;
  outC->_L9.d_emergencystop = kcg_true;
  outC->_L9.m_version = kcg_true;
  outC->_L10.valid = kcg_true;
  outC->_L10.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L10.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L10.q_media = Q_MEDIA_Balise;
  outC->_L10.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L10.m_mcount = kcg_lit_int64(0);
  outC->_L10.nid_c = kcg_lit_int64(0);
  outC->_L10.nid_bg = kcg_lit_int64(0);
  outC->_L10.q_link = Q_LINK_Unlinked;
  outC->_L10.bgPosition.valid = kcg_true;
  outC->_L10.bgPosition.timestamp = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->_L10.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->_L10.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->_L10.bgPosition.acceleration = kcg_lit_int64(0);
  outC->_L10.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L10.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L10.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int64(0);
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int64(0);
  outC->_L10.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int64(0);
  outC->_L10.q_nvlocacc = kcg_lit_int64(0);
  outC->_L10.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L10.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L10.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L11.radioDevice = kcg_lit_int64(0);
  outC->_L11.receivedSystemTime = kcg_lit_int64(0);
  outC->_L11.nid_message = kcg_lit_int64(0);
  outC->_L11.t_train = kcg_lit_int64(0);
  outC->_L11.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L11.nid_lrbg = kcg_lit_int64(0);
  outC->_L11.t_train_reference = kcg_lit_int64(0);
  outC->_L11.nid_em = kcg_lit_int64(0);
  outC->_L11.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.d_sr = kcg_lit_int64(0);
  outC->_L11.t_sh_rqst = kcg_lit_int64(0);
  outC->_L11.d_ref = kcg_lit_int64(0);
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.d_emergencystop = kcg_lit_int64(0);
  outC->_L11.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx4 = 0; idx4 < 30; idx4++) {
    outC->_L12.PacketHeaders[idx4].nid_packet = kcg_lit_int64(0);
    outC->_L12.PacketHeaders[idx4].q_dir = Q_DIR_Reverse;
    outC->_L12.PacketHeaders[idx4].valid = kcg_true;
    outC->_L12.PacketHeaders[idx4].startAddress = kcg_lit_int64(0);
    outC->_L12.PacketHeaders[idx4].endAddress = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 500; idx5++) {
    outC->_L12.PacketData[idx5] = kcg_lit_int64(0);
  }
  outC->onlyBGsAnnouncedViaRadio = kcg_true;
  outC->BG_passed = kcg_true;
  outC->passedBG.valid = kcg_true;
  outC->passedBG.BG_Header.valid = kcg_true;
  outC->passedBG.BG_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->passedBG.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->passedBG.BG_Header.q_media = Q_MEDIA_Balise;
  outC->passedBG.BG_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->passedBG.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->passedBG.BG_Header.nid_c = kcg_lit_int64(0);
  outC->passedBG.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->passedBG.BG_Header.q_link = Q_LINK_Unlinked;
  outC->passedBG.BG_Header.bgPosition.valid = kcg_true;
  outC->passedBG.BG_Header.bgPosition.timestamp = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.odo.o_nominal = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.odo.o_min = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.odo.o_max = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.speed.v_safeNominal = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.speed.v_rawNominal = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.speed.v_lower = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.speed.v_upper = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.acceleration = kcg_lit_int64(0);
  outC->passedBG.BG_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->passedBG.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->passedBG.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->passedBG.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->passedBG.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->passedBG.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->passedBG.BG_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->passedBG.BG_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->passedBG.BG_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx6 = 0; idx6 < 33; idx6++) {
    outC->passedBG.linkedBGs[idx6].valid = kcg_true;
    outC->passedBG.linkedBGs[idx6].nid_LRBG = kcg_lit_int64(0);
    outC->passedBG.linkedBGs[idx6].q_dir = Q_DIR_Reverse;
    outC->passedBG.linkedBGs[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->passedBG.linkedBGs[idx6].d_link = kcg_lit_int64(0);
    outC->passedBG.linkedBGs[idx6].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->passedBG.linkedBGs[idx6].nid_c = kcg_lit_int64(0);
    outC->passedBG.linkedBGs[idx6].nid_bg = kcg_lit_int64(0);
    outC->passedBG.linkedBGs[idx6].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->passedBG.linkedBGs[idx6].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->passedBG.linkedBGs[idx6].q_locacc = kcg_lit_int64(0);
  }
  /* _L295=(TM_specific::Read_P005_ForCalcTrainPos#2)/ */
  Read_P005_ForCalcTrainPos_init_TM_specific(
    &outC->Context_Read_P005_ForCalcTrainPos_2);
  /* _L305=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#3)/ */
  NIDLRBG_2_nidC_nidBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_3);
  /* _L299=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  /* _L325=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#2)/ */
  nidC_nidBG_2_NIDLRBG_init_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_2);
  /* _L323=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_init_TM_conversions(&outC->Context_DECODE_NID_LRBG_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void msg_2_passedBG_reset_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  outC_msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg *outC)
{
  /* _L295=(TM_specific::Read_P005_ForCalcTrainPos#2)/ */
  Read_P005_ForCalcTrainPos_reset_TM_specific(
    &outC->Context_Read_P005_ForCalcTrainPos_2);
  /* _L305=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::NIDLRBG_2_nidC_nidBG#3)/ */
  NIDLRBG_2_nidC_nidBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_NIDLRBG_2_nidC_nidBG_3);
  /* _L299=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#1)/ */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_1);
  /* _L325=(CalculateTrainPosition_Pkg::BG_utilities_Pkg::nidC_nidBG_2_NIDLRBG#2)/ */
  nidC_nidBG_2_NIDLRBG_reset_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &outC->Context_nidC_nidBG_2_NIDLRBG_2);
  /* _L323=(TM_conversions::DECODE_NID_LRBG#1)/ */
  DECODE_NID_LRBG_reset_TM_conversions(&outC->Context_DECODE_NID_LRBG_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

