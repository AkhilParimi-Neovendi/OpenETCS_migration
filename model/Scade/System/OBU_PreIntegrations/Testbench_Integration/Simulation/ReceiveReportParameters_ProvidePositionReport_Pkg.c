/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::ReceiveReportParameters/ */
void ReceiveReportParameters_ProvidePositionReport_Pkg(
  /* reportedBGs/ */
  ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* inMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;
  /* reportedBGs/ */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;

  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &last_reportedBGs,
    &outC->mem_reportedBGs);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    reportedBGs);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L14,
    (P58_PositionReportParameters_T_Packet_Types_Pkg *)
      &emptyPacket58_ProvidePositionReport_Pkg);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->Init_MemoryBasic_1_struct,
    &outC->_L14);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L7_MemoryBasic_1_struct,
    &outC->Init_MemoryBasic_1_struct);
  /* @1/_L6= */
  if (outC->init) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L7_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L4_MemoryBasic_1_struct);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L67, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L68, &outC->_L67.packets);
  /* _L69=(TM_specific::Read_P058_Legacy#1)/ */
  Read_P058_Legacy_TM_specific(&outC->_L68, &outC->Context_Read_P058_Legacy_1);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L69,
    &outC->Context_Read_P058_Legacy_1.P058_legacy_out);
  outC->_L71 = outC->_L69.valid;
  outC->Write_MemoryBasic_1_struct = outC->_L71;
  outC->_L5_MemoryBasic_1_struct = outC->Write_MemoryBasic_1_struct;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->BM_Input_MemoryBasic_1_struct,
    &outC->_L69);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L2_MemoryBasic_1_struct,
    &outC->BM_Input_MemoryBasic_1_struct);
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_struct) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L2_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L6_MemoryBasic_1_struct);
  }
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->Memorized_MemoryBasic_1_struct,
    &outC->_L4_MemoryBasic_1_struct);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L72, &outC->_L67.BG_Common_Header);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(&outC->_L66, reportedBGs);
  /* _L8=(ProvidePositionReport_Pkg::CheckValidityPacket58#1)/ */
  CheckValidityPacket58_ProvidePositionReport_Pkg(
    &outC->_L72,
    &outC->_L66,
    &outC->Context_CheckValidityPacket58_1);
  outC->_L8 = outC->Context_CheckValidityPacket58_1.found;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->_L65,
    &outC->Context_CheckValidityPacket58_1.updatedBGs);
  noname = outC->_L8;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBGs,
    &outC->_L65);
  outC->present = outC->_L71;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L6,
    &outC->Memorized_MemoryBasic_1_struct);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->posRepParam,
    &outC->_L6);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ReceiveReportParameters_init_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
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

  outC->_L69.valid = kcg_true;
  outC->_L69.nid_packet = kcg_lit_int32(0);
  outC->_L69.q_dir = Q_DIR_Reverse;
  outC->_L69.l_packet = kcg_lit_int32(0);
  outC->_L69.q_scale = Q_SCALE_10_cm_scale;
  outC->_L69.t_cycloc = kcg_lit_int32(0);
  outC->_L69.d_cycloc = kcg_lit_int32(0);
  outC->_L69.m_loc = M_LOC_Now;
  outC->_L69.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L69.iterPacket58List[idx].d_loc = kcg_lit_int32(0);
    outC->_L69.iterPacket58List[idx].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L71 = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L72.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L72.q_media = Q_MEDIA_Balise;
  outC->_L72.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L72.m_mcount = kcg_lit_int32(0);
  outC->_L72.nid_c = kcg_lit_int32(0);
  outC->_L72.nid_bg = kcg_lit_int32(0);
  outC->_L72.q_link = Q_LINK_Unlinked;
  outC->_L72.bgPosition.valid = kcg_true;
  outC->_L72.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L72.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L72.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L72.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L72.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L72.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L72.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L72.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L72.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L72.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L72.bgPosition.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L72.BG_centerDetectionInaccuraccuracies.nominal = kcg_lit_int32(0);
  outC->_L72.BG_centerDetectionInaccuraccuracies.d_min = kcg_lit_int32(0);
  outC->_L72.BG_centerDetectionInaccuraccuracies.d_max = kcg_lit_int32(0);
  outC->_L72.q_nvlocacc = kcg_lit_int32(0);
  outC->_L72.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L72.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L72.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L68.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L68.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L68.PacketHeaders[idx1].valid = kcg_true;
    outC->_L68.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L68.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L68.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L67.valid = kcg_true;
  outC->_L67.source = msrc_undefined_Common_Types_Pkg;
  outC->_L67.radioMetadata.t_train_reference = kcg_true;
  outC->_L67.radioMetadata.nid_em = kcg_true;
  outC->_L67.radioMetadata.q_scale = kcg_true;
  outC->_L67.radioMetadata.d_sr = kcg_true;
  outC->_L67.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L67.radioMetadata.d_ref = kcg_true;
  outC->_L67.radioMetadata.q_dir = kcg_true;
  outC->_L67.radioMetadata.d_emergencystop = kcg_true;
  outC->_L67.radioMetadata.m_version = kcg_true;
  outC->_L67.BG_Common_Header.valid = kcg_true;
  outC->_L67.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L67.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L67.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L67.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L67.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L67.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L67.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L67.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L67.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L67.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L67.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L67.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L67.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L67.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L67.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L67.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L67.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L67.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L67.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L67.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L67.packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L67.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L67.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L67.sendingRBC.valid = kcg_true;
  outC->_L67.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L67.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L67.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->_L66[idx5].valid = kcg_true;
    outC->_L66[idx5].nidBG = kcg_lit_int32(0);
    outC->_L66[idx5].location.nominal = kcg_lit_int32(0);
    outC->_L66[idx5].location.d_min = kcg_lit_int32(0);
    outC->_L66[idx5].location.d_max = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 8; idx6++) {
    outC->_L65[idx6].valid = kcg_true;
    outC->_L65[idx6].nidBG = kcg_lit_int32(0);
    outC->_L65[idx6].location.nominal = kcg_lit_int32(0);
    outC->_L65[idx6].location.d_min = kcg_lit_int32(0);
    outC->_L65[idx6].location.d_max = kcg_lit_int32(0);
  }
  outC->_L14.valid = kcg_true;
  outC->_L14.nid_packet = kcg_lit_int32(0);
  outC->_L14.q_dir = Q_DIR_Reverse;
  outC->_L14.l_packet = kcg_lit_int32(0);
  outC->_L14.q_scale = Q_SCALE_10_cm_scale;
  outC->_L14.t_cycloc = kcg_lit_int32(0);
  outC->_L14.d_cycloc = kcg_lit_int32(0);
  outC->_L14.m_loc = M_LOC_Now;
  outC->_L14.n_iter = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->_L14.iterPacket58List[idx7].d_loc = kcg_lit_int32(0);
    outC->_L14.iterPacket58List[idx7].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L8 = kcg_true;
  outC->_L6.valid = kcg_true;
  outC->_L6.nid_packet = kcg_lit_int32(0);
  outC->_L6.q_dir = Q_DIR_Reverse;
  outC->_L6.l_packet = kcg_lit_int32(0);
  outC->_L6.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.t_cycloc = kcg_lit_int32(0);
  outC->_L6.d_cycloc = kcg_lit_int32(0);
  outC->_L6.m_loc = M_LOC_Now;
  outC->_L6.n_iter = kcg_lit_int32(0);
  for (idx8 = 0; idx8 < 2; idx8++) {
    outC->_L6.iterPacket58List[idx8].d_loc = kcg_lit_int32(0);
    outC->_L6.iterPacket58List[idx8].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L2_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->_L2_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->_L2_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 2; idx9++) {
    outC->_L2_MemoryBasic_1_struct.iterPacket58List[idx9].d_loc = kcg_lit_int32(0);
    outC->_L2_MemoryBasic_1_struct.iterPacket58List[idx9].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L5_MemoryBasic_1_struct = kcg_true;
  outC->_L6_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->_L6_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx10 = 0; idx10 < 2; idx10++) {
    outC->_L6_MemoryBasic_1_struct.iterPacket58List[idx10].d_loc = kcg_lit_int32(0);
    outC->_L6_MemoryBasic_1_struct.iterPacket58List[idx10].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L7_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->_L7_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->_L7_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx11 = 0; idx11 < 2; idx11++) {
    outC->_L7_MemoryBasic_1_struct.iterPacket58List[idx11].d_loc = kcg_lit_int32(0);
    outC->_L7_MemoryBasic_1_struct.iterPacket58List[idx11].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->BM_Input_MemoryBasic_1_struct.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->BM_Input_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->BM_Input_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->BM_Input_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 2; idx12++) {
    outC->BM_Input_MemoryBasic_1_struct.iterPacket58List[idx12].d_loc =
      kcg_lit_int32(0);
    outC->BM_Input_MemoryBasic_1_struct.iterPacket58List[idx12].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->Init_MemoryBasic_1_struct.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->Init_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->Init_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->Init_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 2; idx13++) {
    outC->Init_MemoryBasic_1_struct.iterPacket58List[idx13].d_loc =
      kcg_lit_int32(0);
    outC->Init_MemoryBasic_1_struct.iterPacket58List[idx13].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->Write_MemoryBasic_1_struct = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->Memorized_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->Memorized_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->Memorized_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->Memorized_MemoryBasic_1_struct.iterPacket58List[idx14].d_loc =
      kcg_lit_int32(0);
    outC->Memorized_MemoryBasic_1_struct.iterPacket58List[idx14].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->_L4_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.nid_packet = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L4_MemoryBasic_1_struct.l_packet = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.q_scale = Q_SCALE_10_cm_scale;
  outC->_L4_MemoryBasic_1_struct.t_cycloc = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.d_cycloc = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.m_loc = M_LOC_Now;
  outC->_L4_MemoryBasic_1_struct.n_iter = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 2; idx15++) {
    outC->_L4_MemoryBasic_1_struct.iterPacket58List[idx15].d_loc = kcg_lit_int32(0);
    outC->_L4_MemoryBasic_1_struct.iterPacket58List[idx15].q_lgtloc =
      Q_LGTLOC_Min_safe_rear_end;
  }
  outC->init = kcg_true;
  outC->posRepParam.valid = kcg_true;
  outC->posRepParam.nid_packet = kcg_lit_int32(0);
  outC->posRepParam.q_dir = Q_DIR_Reverse;
  outC->posRepParam.l_packet = kcg_lit_int32(0);
  outC->posRepParam.q_scale = Q_SCALE_10_cm_scale;
  outC->posRepParam.t_cycloc = kcg_lit_int32(0);
  outC->posRepParam.d_cycloc = kcg_lit_int32(0);
  outC->posRepParam.m_loc = M_LOC_Now;
  outC->posRepParam.n_iter = kcg_lit_int32(0);
  for (idx16 = 0; idx16 < 2; idx16++) {
    outC->posRepParam.iterPacket58List[idx16].d_loc = kcg_lit_int32(0);
    outC->posRepParam.iterPacket58List[idx16].q_lgtloc = Q_LGTLOC_Min_safe_rear_end;
  }
  outC->present = kcg_true;
  for (idx17 = 0; idx17 < 8; idx17++) {
    outC->out_reportedBGs[idx17].valid = kcg_true;
    outC->out_reportedBGs[idx17].nidBG = kcg_lit_int32(0);
    outC->out_reportedBGs[idx17].location.nominal = kcg_lit_int32(0);
    outC->out_reportedBGs[idx17].location.d_min = kcg_lit_int32(0);
    outC->out_reportedBGs[idx17].location.d_max = kcg_lit_int32(0);
  }
  /* _L8=(ProvidePositionReport_Pkg::CheckValidityPacket58#1)/ */
  CheckValidityPacket58_init_ProvidePositionReport_Pkg(
    &outC->Context_CheckValidityPacket58_1);
  /* _L69=(TM_specific::Read_P058_Legacy#1)/ */
  Read_P058_Legacy_init_TM_specific(&outC->Context_Read_P058_Legacy_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ReceiveReportParameters_reset_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* _L8=(ProvidePositionReport_Pkg::CheckValidityPacket58#1)/ */
  CheckValidityPacket58_reset_ProvidePositionReport_Pkg(
    &outC->Context_CheckValidityPacket58_1);
  /* _L69=(TM_specific::Read_P058_Legacy#1)/ */
  Read_P058_Legacy_reset_TM_specific(&outC->Context_Read_P058_Legacy_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    (ReportedBGList_T_ProvidePositionReport_Pkg *)
      &cReportedBGList_ProvidePositionReport_Pkg);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_ReceiveReportParameters_ProvidePositionReport_Pkg(
  SV_ReceiveReportParameters_ProvidePositionReport_Pkg *SV,
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC)
{
  kcg_save_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
    &SV->Context_CheckValidityPacket58_1,
    &outC->Context_CheckValidityPacket58_1);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &SV->Context__L4_MemoryBasic_1,
    &outC->_L4_MemoryBasic_1_struct);
  SV->Context_init = outC->init;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &SV->Context_mem_reportedBGs,
    &outC->mem_reportedBGs);
}

void kcg_load_SV_ReceiveReportParameters_ProvidePositionReport_Pkg(
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg *outC,
  SV_ReceiveReportParameters_ProvidePositionReport_Pkg *SV)
{
  kcg_load_SV_CheckValidityPacket58_ProvidePositionReport_Pkg(
    &outC->Context_CheckValidityPacket58_1,
    &SV->Context_CheckValidityPacket58_1);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L4_MemoryBasic_1_struct,
    &SV->Context__L4_MemoryBasic_1);
  outC->init = SV->Context_init;
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->mem_reportedBGs,
    &SV->Context_mem_reportedBGs);
}

/*
  Expanded instances for: ProvidePositionReport_Pkg::ReceiveReportParameters/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ReceiveReportParameters_ProvidePositionReport_Pkg.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

