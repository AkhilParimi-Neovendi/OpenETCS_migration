/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_MA_RequestParameters_TA_MA_Request.h"

/* TA_MA_Request::Receive_MA_RequestParameters/ */
void Receive_MA_RequestParameters_TA_MA_Request(
  /* message_in/ */
  ReceivedMessage_T_Common_Types_Pkg *message_in,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  static P015_OBU_T_TM noname;

  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L3,
    (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *)
      &cMA_RequestParam_TA_MA_Request);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->Init_MemoryBasic_1_struct,
    &outC->_L3);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L7_MemoryBasic_1_struct,
    &outC->Init_MemoryBasic_1_struct);
  /* @1/_L6= */
  if (outC->init) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L7_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L6_MemoryBasic_1_struct,
      &outC->_L4_MemoryBasic_1_struct);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, message_in);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, &outC->_L1.packets);
  /* _L7=(TM::Read_P057#1)/ */
  Read_P057_TM(&outC->_L6, &outC->Context_Read_P057_1);
  outC->_L7 = outC->Context_Read_P057_1.received;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L8,
    &outC->Context_Read_P057_1.P057_OBU_out);
  outC->present = outC->_L7;
  outC->_L9 = outC->present;
  outC->Write_MemoryBasic_1_struct = outC->_L9;
  outC->_L5_MemoryBasic_1_struct = outC->Write_MemoryBasic_1_struct;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->BM_Input_MemoryBasic_1_struct,
    &outC->_L8);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L2_MemoryBasic_1_struct,
    &outC->BM_Input_MemoryBasic_1_struct);
  /* @1/_L4= */
  if (outC->_L5_MemoryBasic_1_struct) {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L2_MemoryBasic_1_struct);
  }
  else {
    kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
      &outC->_L4_MemoryBasic_1_struct,
      &outC->_L6_MemoryBasic_1_struct);
  }
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->Memorized_MemoryBasic_1_struct,
    &outC->_L4_MemoryBasic_1_struct);
  /* _L10=(TM::Read_P015#1)/ */
  Read_P015_TM(&outC->_L6, &outC->Context_Read_P015_1);
  outC->_L10 = outC->Context_Read_P015_1.received;
  kcg_copy_P015_OBU_T_TM(&outC->_L11, &outC->Context_Read_P015_1.P015_OBU_out);
  kcg_copy_P015_OBU_T_TM(&noname, &outC->_L11);
  outC->ma_received = outC->_L10;
  outC->IsNew = outC->_L9;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L2,
    &outC->Memorized_MemoryBasic_1_struct);
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->MA_RequestParams,
    &outC->_L2);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Receive_MA_RequestParameters_init_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;

  outC->_L10 = kcg_true;
  outC->_L11.valid = kcg_true;
  outC->_L11.q_dir = Q_DIR_Reverse;
  outC->_L11.q_scale = Q_SCALE_10_cm_scale;
  outC->_L11.v_loa = kcg_lit_int32(0);
  outC->_L11.t_loa = kcg_lit_int32(0);
  outC->_L11.n_iter = kcg_lit_int32(0);
  for (idx = 0; idx < 32; idx++) {
    outC->_L11.sections[idx].valid = kcg_true;
    outC->_L11.sections[idx].l_section = kcg_lit_int32(0);
    outC->_L11.sections[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L11.sections[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L11.sections[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L11.l_endsection = kcg_lit_int32(0);
  outC->_L11.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L11.t_sectiontimer = kcg_lit_int32(0);
  outC->_L11.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L11.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L11.t_endtimer = kcg_lit_int32(0);
  outC->_L11.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L11.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L11.d_dp = kcg_lit_int32(0);
  outC->_L11.v_releasedp = kcg_lit_int32(0);
  outC->_L11.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L11.d_startol = kcg_lit_int32(0);
  outC->_L11.t_ol = kcg_lit_int32(0);
  outC->_L11.d_ol = kcg_lit_int32(0);
  outC->_L11.v_releaseol = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L3.valid = kcg_true;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.t_mar = kcg_lit_int32(0);
  outC->_L3.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L3.t_cycrqst = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L8.valid = kcg_true;
  outC->_L8.q_dir = Q_DIR_Reverse;
  outC->_L8.t_mar = kcg_lit_int32(0);
  outC->_L8.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L8.t_cycrqst = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 30; idx1++) {
    outC->_L6.PacketHeaders[idx1].nid_packet = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx1].q_dir = Q_DIR_Reverse;
    outC->_L6.PacketHeaders[idx1].valid = kcg_true;
    outC->_L6.PacketHeaders[idx1].startAddress = kcg_lit_int32(0);
    outC->_L6.PacketHeaders[idx1].endAddress = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 500; idx2++) {
    outC->_L6.PacketData[idx2] = kcg_lit_int32(0);
  }
  outC->_L2.valid = kcg_true;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.t_mar = kcg_lit_int32(0);
  outC->_L2.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L2.t_cycrqst = kcg_lit_int32(0);
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
  outC->_L1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.bgPosition.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L1.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L1.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx3 = 0; idx3 < 30; idx3++) {
    outC->_L1.packets.PacketHeaders[idx3].nid_packet = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx3].q_dir = Q_DIR_Reverse;
    outC->_L1.packets.PacketHeaders[idx3].valid = kcg_true;
    outC->_L1.packets.PacketHeaders[idx3].startAddress = kcg_lit_int32(0);
    outC->_L1.packets.PacketHeaders[idx3].endAddress = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 500; idx4++) {
    outC->_L1.packets.PacketData[idx4] = kcg_lit_int32(0);
  }
  outC->_L1.sendingRBC.valid = kcg_true;
  outC->_L1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1.sendingRBC.device_id = kcg_lit_int32(0);
  outC->present = kcg_true;
  outC->_L2_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L2_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L2_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L2_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->_L5_MemoryBasic_1_struct = kcg_true;
  outC->_L6_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L6_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L6_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L6_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L7_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L7_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L7_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.valid = kcg_true;
  outC->BM_Input_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->BM_Input_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->BM_Input_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.valid = kcg_true;
  outC->Init_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->Init_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->Init_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->Write_MemoryBasic_1_struct = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.valid = kcg_true;
  outC->Memorized_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->Memorized_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->Memorized_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.valid = kcg_true;
  outC->_L4_MemoryBasic_1_struct.q_dir = Q_DIR_Reverse;
  outC->_L4_MemoryBasic_1_struct.t_mar = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.t_timeoutrqst = kcg_lit_int32(0);
  outC->_L4_MemoryBasic_1_struct.t_cycrqst = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->ma_received = kcg_true;
  outC->MA_RequestParams.valid = kcg_true;
  outC->MA_RequestParams.q_dir = Q_DIR_Reverse;
  outC->MA_RequestParams.t_mar = kcg_lit_int32(0);
  outC->MA_RequestParams.t_timeoutrqst = kcg_lit_int32(0);
  outC->MA_RequestParams.t_cycrqst = kcg_lit_int32(0);
  outC->IsNew = kcg_true;
  /* _L10=(TM::Read_P015#1)/ */ Read_P015_init_TM(&outC->Context_Read_P015_1);
  /* _L7=(TM::Read_P057#1)/ */ Read_P057_init_TM(&outC->Context_Read_P057_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Receive_MA_RequestParameters_reset_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  outC->init = kcg_true;
  /* _L10=(TM::Read_P015#1)/ */ Read_P015_reset_TM(&outC->Context_Read_P015_1);
  /* _L7=(TM::Read_P057#1)/ */ Read_P057_reset_TM(&outC->Context_Read_P057_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_Receive_MA_RequestParameters_TA_MA_Request(
  SV_Receive_MA_RequestParameters_TA_MA_Request *SV,
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC)
{
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &SV->Context__L4_MemoryBasic_1,
    &outC->_L4_MemoryBasic_1_struct);
  SV->Context_init = outC->init;
}

void kcg_load_SV_Receive_MA_RequestParameters_TA_MA_Request(
  outC_Receive_MA_RequestParameters_TA_MA_Request *outC,
  SV_Receive_MA_RequestParameters_TA_MA_Request *SV)
{
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->_L4_MemoryBasic_1_struct,
    &SV->Context__L4_MemoryBasic_1);
  outC->init = SV->Context_init;
}

/*
  Expanded instances for: TA_MA_Request::Receive_MA_RequestParameters/
  @1: (linear::MemoryBasic#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Receive_MA_RequestParameters_TA_MA_Request.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

