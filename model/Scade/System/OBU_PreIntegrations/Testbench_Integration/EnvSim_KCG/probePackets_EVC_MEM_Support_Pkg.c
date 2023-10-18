/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probePackets_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::probePackets/ */
void probePackets_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *actualMessage,
  outC_probePackets_EVC_MEM_Support_Pkg *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  static P135_OBU_T_TM _2_noname;
  static P012_OBU_T_TM _3_noname;
  static P137_StopIfInStaffResponsible_T_Packet_Types_Pkg _4_noname;
  static P138_ReversingAreaInformation_T_Packet_Types_Pkg _5_noname;
  static P139_ReversingSupervisionInformation_T_Packet_Types_Pkg _6_noname;
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _7_noname;
  static kcg_bool _8_noname;
  static kcg_bool _9_noname;
  static kcg_bool _10_noname;
  static kcg_bool _11_noname;
  static kcg_bool _12_noname;

  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L137, actualMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L119,
    &outC->_L137.packets);
  /* _L122=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_TM_baseline2(&outC->_L119, &outC->Context_Read_P027V1_1);
  outC->_L122 = outC->Context_Read_P027V1_1.received;
  kcg_copy_P027V1_OBU_T_TM_baseline2(
    &outC->_L172,
    &outC->Context_Read_P027V1_1.P027V1_out);
  _12_noname = outC->_L122;
  /* _L166=(TM::Read_P065#1)/ */
  Read_P065_TM(&outC->_L119, &outC->Context_Read_P065_1);
  outC->_L166 = outC->Context_Read_P065_1.received;
  kcg_copy_P065_OBU_T_TM(&outC->_L167, &outC->Context_Read_P065_1.P065_OBU_out);
  kcg_copy_P065_OBU_T_TM(&outC->p65, &outC->_L167);
  _11_noname = outC->_L166;
  /* _L164=(TM::Read_P080#1)/ */
  Read_P080_TM(&outC->_L119, &outC->Context_Read_P080_1);
  outC->_L164 = outC->Context_Read_P080_1.received;
  kcg_copy_P080_OBU_T_TM(&outC->_L165, &outC->Context_Read_P080_1.P080_OBU_out);
  kcg_copy_P080_OBU_T_TM(&outC->p80, &outC->_L165);
  _10_noname = outC->_L164;
  /* _L162=(TM::Read_P042#1)/ */
  Read_P042_TM(&outC->_L119, &outC->Context_Read_P042_1);
  outC->_L162 = outC->Context_Read_P042_1.received;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L163,
    &outC->Context_Read_P042_1.P042_OBU_out);
  _9_noname = outC->_L162;
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&outC->p42, &outC->_L163);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P021_Legacy_1);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L136,
    &outC->Context_Read_P021_Legacy_1.P015_legacy_out);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&outC->p21, &outC->_L136);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->p27, &outC->_L172);
  /* _L160=(TM::Read_P005#1)/ */
  Read_P005_TM(&outC->_L119, &outC->Context_Read_P005_1);
  outC->_L160 = outC->Context_Read_P005_1.received;
  kcg_copy_P005_OBU_T_TM(&outC->_L161, &outC->Context_Read_P005_1.P005_OBU_out);
  _8_noname = outC->_L160;
  kcg_copy_P005_OBU_T_TM(&outC->p05, &outC->_L161);
  /* _L156=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P046_Legacy_1);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L156,
    &outC->Context_Read_P046_Legacy_1.P046_legacy_out);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->p46,
    &outC->_L156);
  /* _L155=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P041_Legacy_1);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L155,
    &outC->Context_Read_P041_Legacy_1.P041_legacy_out);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->p41,
    &outC->_L155);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P015_Legacy_1);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L129,
    &outC->Context_Read_P015_Legacy_1.P015_legacy_out);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &_7_noname,
    &outC->_L129);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P139_Legacy_1);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L127,
    &outC->Context_Read_P139_Legacy_1.P139_legacy_out);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &_6_noname,
    &outC->_L127);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P138_Legacy_1);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L134,
    &outC->Context_Read_P138_Legacy_1.P138_legacy_out);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &_5_noname,
    &outC->_L134);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P137_Legacy_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L125,
    &outC->Context_Read_P137_Legacy_1.P137_legacy_out);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &_4_noname,
    &outC->_L125);
  /* _L116=(TM::Read_P012#1)/ */
  Read_P012_TM(&outC->_L119, &outC->Context_Read_P012_1);
  outC->_L116 = outC->Context_Read_P012_1.received;
  kcg_copy_P012_OBU_T_TM(&outC->_L117, &outC->Context_Read_P012_1.P012_OBU_out);
  kcg_copy_P012_OBU_T_TM(&_3_noname, &outC->_L117);
  /* _L131=(TM::Read_P135#1)/ */
  Read_P135_TM(&outC->_L119, &outC->Context_Read_P135_1);
  outC->_L131 = outC->Context_Read_P135_1.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L132, &outC->Context_Read_P135_1.P135_OBU_out);
  kcg_copy_P135_OBU_T_TM(&_2_noname, &outC->_L132);
  _1_noname = outC->_L131;
  noname = outC->_L116;
}

#ifndef KCG_USER_DEFINED_INIT
void probePackets_init_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC)
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

  outC->_L172.valid = kcg_true;
  outC->_L172.q_dir = Q_DIR_Reverse;
  outC->_L172.q_scale = Q_SCALE_10_cm_scale;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L172.sections[idx1].valid = kcg_true;
    outC->_L172.sections[idx1].d_static = kcg_lit_int64(0);
    outC->_L172.sections[idx1].v_static = kcg_lit_int64(0);
    outC->_L172.sections[idx1].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->_L172.sections[idx1].n_iter = kcg_lit_int64(0);
    for (idx = 0; idx < 32; idx++) {
      outC->_L172.sections[idx1].SECTIONS_q_diff[idx].valid = kcg_true;
      outC->_L172.sections[idx1].SECTIONS_q_diff[idx].nc_diff = kcg_lit_int64(0);
      outC->_L172.sections[idx1].SECTIONS_q_diff[idx].v_diff = kcg_lit_int64(0);
    }
  }
  outC->_L122 = kcg_true;
  outC->_L166 = kcg_true;
  outC->_L167.valid = kcg_true;
  outC->_L167.q_dir = Q_DIR_Reverse;
  outC->_L167.q_scale = Q_SCALE_10_cm_scale;
  outC->_L167.nid_tsr = kcg_lit_int64(0);
  outC->_L167.d_tsr = kcg_lit_int64(0);
  outC->_L167.l_tsr = kcg_lit_int64(0);
  outC->_L167.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->_L167.v_tsr = kcg_lit_int64(0);
  outC->_L164 = kcg_true;
  outC->_L165.valid = kcg_true;
  outC->_L165.q_dir = Q_DIR_Reverse;
  outC->_L165.l_packet = kcg_lit_int64(0);
  outC->_L165.q_scale = Q_SCALE_10_cm_scale;
  outC->_L165.n_iter = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L165.sections[idx2].valid = kcg_true;
    outC->_L165.sections[idx2].d_mamode = kcg_lit_int64(0);
    outC->_L165.sections[idx2].m_mamode = M_MAMODE_On_Sight;
    outC->_L165.sections[idx2].v_mamode = kcg_lit_int64(0);
    outC->_L165.sections[idx2].l_mamode = kcg_lit_int64(0);
    outC->_L165.sections[idx2].l_ackmamode = kcg_lit_int64(0);
    outC->_L165.sections[idx2].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L162 = kcg_true;
  outC->_L163.valid = kcg_true;
  outC->_L163.q_dir = Q_DIR_Reverse;
  outC->_L163.q_rbc = Q_RBC_Terminate_communication_session;
  outC->_L163.nid_c = kcg_lit_int64(0);
  outC->_L163.nid_rbc = kcg_lit_int64(0);
  outC->_L163.nid_radio = kcg_lit_int64(0);
  outC->_L163.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->_L160 = kcg_true;
  outC->_L161.valid = kcg_true;
  outC->_L161.q_dir = Q_DIR_Reverse;
  outC->_L161.l_packet = kcg_lit_int64(0);
  outC->_L161.q_scale = Q_SCALE_10_cm_scale;
  outC->_L161.n_iter = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L161.sections[idx3].valid = kcg_true;
    outC->_L161.sections[idx3].d_link = kcg_lit_int64(0);
    outC->_L161.sections[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L161.sections[idx3].nid_c = kcg_lit_int64(0);
    outC->_L161.sections[idx3].nid_bg = kcg_lit_int64(0);
    outC->_L161.sections[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L161.sections[idx3].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->_L161.sections[idx3].q_locacc = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L156[idx4].valid = kcg_true;
    outC->_L156[idx4].q_dir = Q_DIR_Reverse;
    outC->_L156[idx4].m_leveltr = M_LEVELTR_Level_0;
    outC->_L156[idx4].nid_ntc = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L155[idx5].valid = kcg_true;
    outC->_L155[idx5].q_dir = Q_DIR_Reverse;
    outC->_L155[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L155[idx5].d_leveltr = kcg_lit_int64(0);
    outC->_L155[idx5].m_leveltr = M_LEVELTR_Level_0;
    outC->_L155[idx5].nid_ntc = kcg_lit_int64(0);
    outC->_L155[idx5].l_ackleveltr = kcg_lit_int64(0);
  }
  outC->_L117.valid = kcg_true;
  outC->_L117.q_dir = Q_DIR_Reverse;
  outC->_L117.q_scale = Q_SCALE_10_cm_scale;
  outC->_L117.v_main = kcg_lit_int64(0);
  outC->_L117.v_loa = kcg_lit_int64(0);
  outC->_L117.t_loa = kcg_lit_int64(0);
  outC->_L117.n_iter = kcg_lit_int64(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L117.sections[idx6].valid = kcg_true;
    outC->_L117.sections[idx6].l_section = kcg_lit_int64(0);
    outC->_L117.sections[idx6].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L117.sections[idx6].t_sectiontimer = kcg_lit_int64(0);
    outC->_L117.sections[idx6].d_sectiontimerstoploc = kcg_lit_int64(0);
  }
  outC->_L117.l_endsection = kcg_lit_int64(0);
  outC->_L117.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L117.t_sectiontimer = kcg_lit_int64(0);
  outC->_L117.d_sectiontimerstoploc = kcg_lit_int64(0);
  outC->_L117.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L117.t_endtimer = kcg_lit_int64(0);
  outC->_L117.d_endtimerstartloc = kcg_lit_int64(0);
  outC->_L117.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L117.d_dp = kcg_lit_int64(0);
  outC->_L117.v_releasedp = kcg_lit_int64(0);
  outC->_L117.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L117.d_startol = kcg_lit_int64(0);
  outC->_L117.t_ol = kcg_lit_int64(0);
  outC->_L117.d_ol = kcg_lit_int64(0);
  outC->_L117.v_releaseol = kcg_lit_int64(0);
  outC->_L116 = kcg_true;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L119.PacketHeaders[idx7].nid_packet = kcg_lit_int64(0);
    outC->_L119.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L119.PacketHeaders[idx7].valid = kcg_true;
    outC->_L119.PacketHeaders[idx7].startAddress = kcg_lit_int64(0);
    outC->_L119.PacketHeaders[idx7].endAddress = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L119.PacketData[idx8] = kcg_lit_int64(0);
  }
  outC->_L125.valid = kcg_true;
  outC->_L125.q_dir = Q_DIR_Reverse;
  outC->_L125.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L127.valid = kcg_true;
  outC->_L127.q_dir = Q_DIR_Reverse;
  outC->_L127.q_scale = Q_SCALE_10_cm_scale;
  outC->_L127.d_reverse = kcg_lit_int64(0);
  outC->_L127.v_reverse = kcg_lit_int64(0);
  for (idx9 = 0; idx9 < 5; idx9++) {
    outC->_L129[idx9].valid = kcg_true;
    outC->_L129[idx9].q_dir = Q_DIR_Reverse;
    outC->_L129[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L129[idx9].v_loa = kcg_lit_int64(0);
    outC->_L129[idx9].t_loa = kcg_lit_int64(0);
    outC->_L129[idx9].l_section = kcg_lit_int64(0);
    outC->_L129[idx9].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[idx9].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L129[idx9].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L129[idx9].l_endsection = kcg_lit_int64(0);
    outC->_L129[idx9].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[idx9].t_sectiontimer = kcg_lit_int64(0);
    outC->_L129[idx9].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L129[idx9].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L129[idx9].t_endtimer = kcg_lit_int64(0);
    outC->_L129[idx9].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L129[idx9].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L129[idx9].d_dp = kcg_lit_int64(0);
    outC->_L129[idx9].v_releasedp = kcg_lit_int64(0);
    outC->_L129[idx9].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L129[idx9].d_startol = kcg_lit_int64(0);
    outC->_L129[idx9].t_ol = kcg_lit_int64(0);
    outC->_L129[idx9].d_ol = kcg_lit_int64(0);
    outC->_L129[idx9].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L132.valid = kcg_true;
  outC->_L132.q_dir = Q_DIR_Reverse;
  outC->_L131 = kcg_true;
  outC->_L134.valid = kcg_true;
  outC->_L134.q_dir = Q_DIR_Reverse;
  outC->_L134.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.d_startreverse = kcg_lit_int64(0);
  outC->_L134.l_reversearea = kcg_lit_int64(0);
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L136[idx10].valid = kcg_true;
    outC->_L136[idx10].q_dir = Q_DIR_Reverse;
    outC->_L136[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L136[idx10].d_gradient = kcg_lit_int64(0);
    outC->_L136[idx10].q_gdir = Q_GDIR_downhill;
    outC->_L136[idx10].g_a = kcg_lit_int64(0);
  }
  outC->_L137.valid = kcg_true;
  outC->_L137.systemTimeMsgReceived = kcg_lit_int64(0);
  outC->_L137.msg_type = msrc_undefined_Common_Types_Pkg;
  outC->_L137.btm_msg.present = kcg_true;
  outC->_L137.btm_msg.checkResult = kcg_true;
  outC->_L137.btm_msg.api_bad_balise_received = kcg_true;
  outC->_L137.btm_msg.api_header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L137.btm_msg.api_header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L137.btm_msg.api_header.q_media = Q_MEDIA_Balise;
  outC->_L137.btm_msg.api_header.n_pig = N_PIG_I_am_the_1st;
  outC->_L137.btm_msg.api_header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L137.btm_msg.api_header.m_dup = M_DUP_No_duplicates;
  outC->_L137.btm_msg.api_header.m_mcount = kcg_lit_int64(0);
  outC->_L137.btm_msg.api_header.nid_c = kcg_lit_int64(0);
  outC->_L137.btm_msg.api_header.nid_bg = kcg_lit_int64(0);
  outC->_L137.btm_msg.api_header.q_link = Q_LINK_Unlinked;
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L137.btm_msg.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L137.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L137.btm_msg.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L137.rtm_msg.present = kcg_true;
  outC->_L137.rtm_msg.apiConsistencyError = kcg_true;
  outC->_L137.rtm_msg.Radio_Common_Header.radioDevice = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.receivedSystemTime = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.nid_message = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.t_train = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L137.rtm_msg.Radio_Common_Header.nid_lrbg = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.t_train_reference = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.nid_em = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.rtm_msg.Radio_Common_Header.d_sr = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.t_sh_rqst = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.d_ref = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L137.rtm_msg.Radio_Common_Header.d_emergencystop = kcg_lit_int64(0);
  outC->_L137.rtm_msg.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L137.rtm_msg.Radio_MetaData.t_train_reference = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.nid_em = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.q_scale = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.d_sr = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.t_sh_rqst = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.d_ref = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.q_dir = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.d_emergencystop = kcg_true;
  outC->_L137.rtm_msg.Radio_MetaData.m_version = kcg_true;
  outC->_L137.rtm_msg.sendingRBC_Id.valid = kcg_true;
  outC->_L137.rtm_msg.sendingRBC_Id.nid_c = kcg_lit_int64(0);
  outC->_L137.rtm_msg.sendingRBC_Id.rbc_id = kcg_lit_int64(0);
  outC->_L137.rtm_msg.sendingRBC_Id.device_id = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 30; idx11++) {
    outC->_L137.packets.PacketHeaders[idx11].nid_packet = kcg_lit_int64(0);
    outC->_L137.packets.PacketHeaders[idx11].q_dir = Q_DIR_Reverse;
    outC->_L137.packets.PacketHeaders[idx11].valid = kcg_true;
    outC->_L137.packets.PacketHeaders[idx11].startAddress = kcg_lit_int64(0);
    outC->_L137.packets.PacketHeaders[idx11].endAddress = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 500; idx12++) {
    outC->_L137.packets.PacketData[idx12] = kcg_lit_int64(0);
  }
  outC->p65.valid = kcg_true;
  outC->p65.q_dir = Q_DIR_Reverse;
  outC->p65.q_scale = Q_SCALE_10_cm_scale;
  outC->p65.nid_tsr = kcg_lit_int64(0);
  outC->p65.d_tsr = kcg_lit_int64(0);
  outC->p65.l_tsr = kcg_lit_int64(0);
  outC->p65.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  outC->p65.v_tsr = kcg_lit_int64(0);
  outC->p80.valid = kcg_true;
  outC->p80.q_dir = Q_DIR_Reverse;
  outC->p80.l_packet = kcg_lit_int64(0);
  outC->p80.q_scale = Q_SCALE_10_cm_scale;
  outC->p80.n_iter = kcg_lit_int64(0);
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->p80.sections[idx13].valid = kcg_true;
    outC->p80.sections[idx13].d_mamode = kcg_lit_int64(0);
    outC->p80.sections[idx13].m_mamode = M_MAMODE_On_Sight;
    outC->p80.sections[idx13].v_mamode = kcg_lit_int64(0);
    outC->p80.sections[idx13].l_mamode = kcg_lit_int64(0);
    outC->p80.sections[idx13].l_ackmamode = kcg_lit_int64(0);
    outC->p80.sections[idx13].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->p42.valid = kcg_true;
  outC->p42.q_dir = Q_DIR_Reverse;
  outC->p42.q_rbc = Q_RBC_Terminate_communication_session;
  outC->p42.nid_c = kcg_lit_int64(0);
  outC->p42.nid_rbc = kcg_lit_int64(0);
  outC->p42.nid_radio = kcg_lit_int64(0);
  outC->p42.q_sleepsession = Q_SLEEPSESSION_Ignore_session_establishment_order;
  for (idx14 = 0; idx14 < 7; idx14++) {
    outC->p21[idx14].valid = kcg_true;
    outC->p21[idx14].q_dir = Q_DIR_Reverse;
    outC->p21[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->p21[idx14].d_gradient = kcg_lit_int64(0);
    outC->p21[idx14].q_gdir = Q_GDIR_downhill;
    outC->p21[idx14].g_a = kcg_lit_int64(0);
  }
  outC->p27.valid = kcg_true;
  outC->p27.q_dir = Q_DIR_Reverse;
  outC->p27.q_scale = Q_SCALE_10_cm_scale;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->p27.sections[idx16].valid = kcg_true;
    outC->p27.sections[idx16].d_static = kcg_lit_int64(0);
    outC->p27.sections[idx16].v_static = kcg_lit_int64(0);
    outC->p27.sections[idx16].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    outC->p27.sections[idx16].n_iter = kcg_lit_int64(0);
    for (idx15 = 0; idx15 < 32; idx15++) {
      outC->p27.sections[idx16].SECTIONS_q_diff[idx15].valid = kcg_true;
      outC->p27.sections[idx16].SECTIONS_q_diff[idx15].nc_diff = kcg_lit_int64(0);
      outC->p27.sections[idx16].SECTIONS_q_diff[idx15].v_diff = kcg_lit_int64(0);
    }
  }
  outC->p05.valid = kcg_true;
  outC->p05.q_dir = Q_DIR_Reverse;
  outC->p05.l_packet = kcg_lit_int64(0);
  outC->p05.q_scale = Q_SCALE_10_cm_scale;
  outC->p05.n_iter = kcg_lit_int64(0);
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->p05.sections[idx17].valid = kcg_true;
    outC->p05.sections[idx17].d_link = kcg_lit_int64(0);
    outC->p05.sections[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->p05.sections[idx17].nid_c = kcg_lit_int64(0);
    outC->p05.sections[idx17].nid_bg = kcg_lit_int64(0);
    outC->p05.sections[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->p05.sections[idx17].q_linkreaction = Q_LINKREACTION_Train_trip;
    outC->p05.sections[idx17].q_locacc = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->p46[idx18].valid = kcg_true;
    outC->p46[idx18].q_dir = Q_DIR_Reverse;
    outC->p46[idx18].m_leveltr = M_LEVELTR_Level_0;
    outC->p46[idx18].nid_ntc = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->p41[idx19].valid = kcg_true;
    outC->p41[idx19].q_dir = Q_DIR_Reverse;
    outC->p41[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->p41[idx19].d_leveltr = kcg_lit_int64(0);
    outC->p41[idx19].m_leveltr = M_LEVELTR_Level_0;
    outC->p41[idx19].nid_ntc = kcg_lit_int64(0);
    outC->p41[idx19].l_ackleveltr = kcg_lit_int64(0);
  }
  /* _L131=(TM::Read_P135#1)/ */ Read_P135_init_TM(&outC->Context_Read_P135_1);
  /* _L116=(TM::Read_P012#1)/ */ Read_P012_init_TM(&outC->Context_Read_P012_1);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_init_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_init_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_init_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_init_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L155=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_init_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L156=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_init_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L160=(TM::Read_P005#1)/ */ Read_P005_init_TM(&outC->Context_Read_P005_1);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_init_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* _L162=(TM::Read_P042#1)/ */ Read_P042_init_TM(&outC->Context_Read_P042_1);
  /* _L164=(TM::Read_P080#1)/ */ Read_P080_init_TM(&outC->Context_Read_P080_1);
  /* _L166=(TM::Read_P065#1)/ */ Read_P065_init_TM(&outC->Context_Read_P065_1);
  /* _L122=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_init_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probePackets_reset_EVC_MEM_Support_Pkg(
  outC_probePackets_EVC_MEM_Support_Pkg *outC)
{
  /* _L131=(TM::Read_P135#1)/ */ Read_P135_reset_TM(&outC->Context_Read_P135_1);
  /* _L116=(TM::Read_P012#1)/ */ Read_P012_reset_TM(&outC->Context_Read_P012_1);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_reset_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_reset_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_reset_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_reset_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L155=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_reset_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L156=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_reset_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L160=(TM::Read_P005#1)/ */ Read_P005_reset_TM(&outC->Context_Read_P005_1);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_reset_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* _L162=(TM::Read_P042#1)/ */ Read_P042_reset_TM(&outC->Context_Read_P042_1);
  /* _L164=(TM::Read_P080#1)/ */ Read_P080_reset_TM(&outC->Context_Read_P080_1);
  /* _L166=(TM::Read_P065#1)/ */ Read_P065_reset_TM(&outC->Context_Read_P065_1);
  /* _L122=(TM_baseline2::Read_P027V1#1)/ */
  Read_P027V1_reset_TM_baseline2(&outC->Context_Read_P027V1_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probePackets_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

