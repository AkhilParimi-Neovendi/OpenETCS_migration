/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TA_to_ML_TA_Export.h"

/* TA_Export::TA_to_ML/ */
void TA_to_ML_TA_Export(
  /* MessageIn/ */
  ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* t_nvcontact_overpass/ */
  kcg_bool t_nvcontact_overpass,
  /* valid_GP/ */
  kcg_bool valid_GP,
  /* valid_MA/ */
  kcg_bool valid_MA,
  /* valid_SSP/ */
  kcg_bool valid_SSP,
  outC_TA_to_ML_TA_Export *outC)
{
  static P135_OBU_T_TM noname;
  static P135_OBU_T_TM _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static P012_OBU_T_TM _4_noname;
  static kcg_bool _5_noname;
  static kcg_bool _6_noname;

  outC->_L128 = DEFAULT_Location_T_TrackAtlasTypes;
  outC->_L127 = DEFAULT_LRBG_TrackAtlasTypes;
  outC->_L32 = t_nvcontact_overpass;
  _6_noname = outC->_L32;
  outC->_L25 = nid_message_TrackTrain_015_TM_radio_messages;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L33, MessageIn);
  outC->_L48 = outC->_L33.Radio_Common_Header.nid_message;
  /* _L20=(TM_conversions::CAST_NID_MESSAGE_to_int#2)/ */
  CAST_NID_MESSAGE_to_int_TM_conversions(
    outC->_L48,
    &outC->Context_CAST_NID_MESSAGE_to_int_2);
  outC->_L20 = outC->Context_CAST_NID_MESSAGE_to_int_2.nid_message_int;
  outC->_L21 = outC->_L20 == outC->_L25;
  outC->_L27 = nid_message_TrackTrain_016_TM_radio_messages;
  outC->_L22 = outC->_L20 == outC->_L27;
  outC->_L28 = nid_message_TrackTrain_002_TM_radio_messages;
  outC->_L24 = outC->_L20 == outC->_L28;
  outC->_L29 = nid_message_TrackTrain_027_TM_radio_messages;
  outC->_L23 = outC->_L20 == outC->_L29;
  outC->_L30 = nid_message_TrackTrain_028_TM_radio_messages;
  outC->_L26 = outC->_L20 == outC->_L30;
  outC->_L31 = nid_message_TrackTrain_006_TM_radio_messages;
  outC->_L18 = outC->_L20 == outC->_L31;
  outC->_L126.Mess_15 = outC->_L21;
  outC->_L126.Mess_16 = outC->_L22;
  outC->_L126.Mess_2 = outC->_L24;
  outC->_L126.Mess_27 = outC->_L23;
  outC->_L126.Mess_28 = outC->_L26;
  outC->_L126.Mess_6 = outC->_L18;
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L125,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_TA_Export);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L49, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L51, &outC->_L49.packets);
  /* _L67=(TM::Read_P135#1)/ */
  Read_P135_TM(&outC->_L51, &outC->Context_Read_P135_1);
  outC->_L67 = outC->Context_Read_P135_1.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L68, &outC->Context_Read_P135_1.P135_OBU_out);
  _5_noname = outC->_L67;
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L124,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_TA_Export);
  /* _L107=(TM::Read_P012#1)/ */
  Read_P012_TM(&outC->_L51, &outC->Context_Read_P012_1);
  outC->_L107 = outC->Context_Read_P012_1.received;
  kcg_copy_P012_OBU_T_TM(&outC->_L108, &outC->Context_Read_P012_1.P012_OBU_out);
  kcg_copy_P012_OBU_T_TM(&_4_noname, &outC->_L108);
  outC->_L111 = valid_SSP;
  outC->_L110 = valid_MA;
  outC->_L109 = valid_GP;
  _3_noname = outC->_L107;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L97, MessageIn);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L99, &outC->_L97.packets);
  /* _L88=(TM::Read_P135#2)/ */
  Read_P135_TM(&outC->_L99, &outC->Context_Read_P135_2);
  outC->_L88 = outC->Context_Read_P135_2.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L89, &outC->Context_Read_P135_2.P135_OBU_out);
  _2_noname = outC->_L88;
  outC->_L103 = kcg_false;
  outC->P_27_to_Input_MA_SSP_Gradient_at_ML = outC->_L111;
  outC->P_21_to_Input_MA_SSP_Gradient_at_ML = outC->_L109;
  outC->P_15_to_Input_MA_SSP_Gradient_at_ML = outC->_L110;
  outC->P_12_to_Input_MA_SSP_Gradient_at_ML = outC->_L103;
  kcg_copy_P135_OBU_T_TM(&_1_noname, &outC->_L89);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->_L86,
    (P80_ModeProfiles_T_Packet_Types_Pkg *) &Default_P80_legacy_TA_Export);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L85,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_TA_Export);
  /* _L83=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P046_Legacy_1);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L83,
    &outC->Context_Read_P046_Legacy_1.P046_legacy_out);
  /* _L81=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P041_Legacy_1);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L81,
    &outC->Context_Read_P041_Legacy_1.P041_legacy_out);
  /* _L123=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &outC->_L51,
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L123,
    &outC->Context_Read_P027V1_Legacy_for_ML_1.P027_legacy_out);
  /* _L122=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P021_Legacy_1);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L122,
    &outC->Context_Read_P021_Legacy_1.P015_legacy_out);
  /* _L121=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P015_Legacy_1);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L121,
    &outC->Context_Read_P015_Legacy_1.P015_legacy_out);
  /* _L73=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P139_Legacy_1);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L73,
    &outC->Context_Read_P139_Legacy_1.P139_legacy_out);
  /* _L71=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P138_Legacy_1);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L71,
    &outC->Context_Read_P138_Legacy_1.P138_legacy_out);
  /* _L69=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_TM_specific(&outC->_L51, &outC->Context_Read_P137_Legacy_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L69,
    &outC->Context_Read_P137_Legacy_1.P137_legacy_out);
  kcg_copy_P135_OBU_T_TM(&noname, &outC->_L68);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Messages_at_ML,
    &outC->_L126);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L6.P_12,
    &outC->_L124);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L6.P_135,
    &outC->_L125);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L6.P_137,
    &outC->_L69);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L6.P_138,
    &outC->_L71);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L6.P_139,
    &outC->_L73);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L6.P_15,
    &outC->_L121);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&outC->_L6.P_21, &outC->_L122);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L6.P_27,
    &outC->_L123);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L6.P_41,
    &outC->_L81);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L6.P_46,
    &outC->_L83);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L6.P_63,
    &outC->_L85);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L6.P_80, &outC->_L86);
  outC->_L6.LRBG = outC->_L127;
  outC->_L6.referenceLocation = outC->_L128;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_to_From_Track_Packets_at_ML,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void TA_to_ML_init_TA_Export(outC_TA_to_ML_TA_Export *outC)
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

  outC->_L128 = kcg_lit_int32(0);
  outC->_L127 = kcg_lit_int32(0);
  outC->_L126.Mess_15 = kcg_true;
  outC->_L126.Mess_16 = kcg_true;
  outC->_L126.Mess_2 = kcg_true;
  outC->_L126.Mess_27 = kcg_true;
  outC->_L126.Mess_28 = kcg_true;
  outC->_L126.Mess_6 = kcg_true;
  outC->_L125.valid = kcg_true;
  outC->_L125.q_dir = Q_DIR_Reverse;
  for (idx = 0; idx < 5; idx++) {
    outC->_L124[idx].valid = kcg_true;
    outC->_L124[idx].q_dir = Q_DIR_Reverse;
    outC->_L124[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124[idx].v_main = kcg_lit_int32(0);
    outC->_L124[idx].v_loa = kcg_lit_int32(0);
    outC->_L124[idx].t_loa = kcg_lit_int32(0);
    outC->_L124[idx].l_section = kcg_lit_int32(0);
    outC->_L124[idx].q_sectiontimer_k = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124[idx].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L124[idx].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L124[idx].l_endsection = kcg_lit_int32(0);
    outC->_L124[idx].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124[idx].t_sectiontimer = kcg_lit_int32(0);
    outC->_L124[idx].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L124[idx].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L124[idx].t_endtimer = kcg_lit_int32(0);
    outC->_L124[idx].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L124[idx].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L124[idx].d_dp = kcg_lit_int32(0);
    outC->_L124[idx].v_releasedp = kcg_lit_int32(0);
    outC->_L124[idx].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L124[idx].d_startol = kcg_lit_int32(0);
    outC->_L124[idx].t_ol = kcg_lit_int32(0);
    outC->_L124[idx].d_ol = kcg_lit_int32(0);
    outC->_L124[idx].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L123.valid = kcg_true;
  outC->_L123.q_dir = Q_DIR_Reverse;
  outC->_L123.q_scale = Q_SCALE_10_cm_scale;
  outC->_L123.d_static = kcg_lit_int32(0);
  outC->_L123.v_static = kcg_lit_int32(0);
  outC->_L123.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L123.diffArray[idx1].valid = kcg_true;
    outC->_L123.diffArray[idx1].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L123.diffArray[idx1].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L123.diffArray[idx1].nc_diff = kcg_lit_int32(0);
    outC->_L123.diffArray[idx1].v_diff = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L123.SSPArray[idx3].valid = kcg_true;
    outC->_L123.SSPArray[idx3].d_static = kcg_lit_int32(0);
    outC->_L123.SSPArray[idx3].v_static = kcg_lit_int32(0);
    outC->_L123.SSPArray[idx3].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx2 = 0; idx2 < 7; idx2++) {
      outC->_L123.SSPArray[idx3].diffArray[idx2].valid = kcg_true;
      outC->_L123.SSPArray[idx3].diffArray[idx2].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L123.SSPArray[idx3].diffArray[idx2].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L123.SSPArray[idx3].diffArray[idx2].nc_diff = kcg_lit_int32(0);
      outC->_L123.SSPArray[idx3].diffArray[idx2].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L122[idx4].valid = kcg_true;
    outC->_L122[idx4].q_dir = Q_DIR_Reverse;
    outC->_L122[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L122[idx4].d_gradient = kcg_lit_int32(0);
    outC->_L122[idx4].q_gdir = Q_GDIR_downhill;
    outC->_L122[idx4].g_a = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L121[idx5].valid = kcg_true;
    outC->_L121[idx5].q_dir = Q_DIR_Reverse;
    outC->_L121[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L121[idx5].v_loa = kcg_lit_int32(0);
    outC->_L121[idx5].t_loa = kcg_lit_int32(0);
    outC->_L121[idx5].l_section = kcg_lit_int32(0);
    outC->_L121[idx5].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L121[idx5].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L121[idx5].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L121[idx5].l_endsection = kcg_lit_int32(0);
    outC->_L121[idx5].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L121[idx5].t_sectiontimer = kcg_lit_int32(0);
    outC->_L121[idx5].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L121[idx5].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L121[idx5].t_endtimer = kcg_lit_int32(0);
    outC->_L121[idx5].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L121[idx5].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L121[idx5].d_dp = kcg_lit_int32(0);
    outC->_L121[idx5].v_releasedp = kcg_lit_int32(0);
    outC->_L121[idx5].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L121[idx5].d_startol = kcg_lit_int32(0);
    outC->_L121[idx5].t_ol = kcg_lit_int32(0);
    outC->_L121[idx5].d_ol = kcg_lit_int32(0);
    outC->_L121[idx5].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L111 = kcg_true;
  outC->_L110 = kcg_true;
  outC->_L109 = kcg_true;
  outC->_L107 = kcg_true;
  outC->_L108.valid = kcg_true;
  outC->_L108.q_dir = Q_DIR_Reverse;
  outC->_L108.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.v_main = kcg_lit_int32(0);
  outC->_L108.v_loa = kcg_lit_int32(0);
  outC->_L108.t_loa = kcg_lit_int32(0);
  outC->_L108.n_iter = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 32; idx6++) {
    outC->_L108.sections[idx6].valid = kcg_true;
    outC->_L108.sections[idx6].l_section = kcg_lit_int32(0);
    outC->_L108.sections[idx6].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L108.sections[idx6].t_sectiontimer = kcg_lit_int32(0);
    outC->_L108.sections[idx6].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L108.l_endsection = kcg_lit_int32(0);
  outC->_L108.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L108.t_sectiontimer = kcg_lit_int32(0);
  outC->_L108.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L108.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L108.t_endtimer = kcg_lit_int32(0);
  outC->_L108.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L108.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L108.d_dp = kcg_lit_int32(0);
  outC->_L108.v_releasedp = kcg_lit_int32(0);
  outC->_L108.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L108.d_startol = kcg_lit_int32(0);
  outC->_L108.t_ol = kcg_lit_int32(0);
  outC->_L108.d_ol = kcg_lit_int32(0);
  outC->_L108.v_releaseol = kcg_lit_int32(0);
  outC->_L103 = kcg_true;
  outC->_L89.valid = kcg_true;
  outC->_L89.q_dir = Q_DIR_Reverse;
  outC->_L88 = kcg_true;
  outC->_L97.valid = kcg_true;
  outC->_L97.source = msrc_undefined_Common_Types_Pkg;
  outC->_L97.radioMetadata.t_train_reference = kcg_true;
  outC->_L97.radioMetadata.nid_em = kcg_true;
  outC->_L97.radioMetadata.q_scale = kcg_true;
  outC->_L97.radioMetadata.d_sr = kcg_true;
  outC->_L97.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L97.radioMetadata.d_ref = kcg_true;
  outC->_L97.radioMetadata.q_dir = kcg_true;
  outC->_L97.radioMetadata.d_emergencystop = kcg_true;
  outC->_L97.radioMetadata.m_version = kcg_true;
  outC->_L97.BG_Common_Header.valid = kcg_true;
  outC->_L97.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L97.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L97.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L97.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L97.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L97.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L97.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L97.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L97.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L97.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L97.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L97.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L97.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L97.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L97.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L97.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L97.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx7 = 0; idx7 < 30; idx7++) {
    outC->_L97.packets.PacketHeaders[idx7].nid_packet = kcg_lit_int32(0);
    outC->_L97.packets.PacketHeaders[idx7].q_dir = Q_DIR_Reverse;
    outC->_L97.packets.PacketHeaders[idx7].valid = kcg_true;
    outC->_L97.packets.PacketHeaders[idx7].startAddress = kcg_lit_int32(0);
    outC->_L97.packets.PacketHeaders[idx7].endAddress = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 500; idx8++) {
    outC->_L97.packets.PacketData[idx8] = kcg_lit_int32(0);
  }
  outC->_L97.sendingRBC.valid = kcg_true;
  outC->_L97.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L97.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L97.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx9 = 0; idx9 < 30; idx9++) {
    outC->_L99.PacketHeaders[idx9].nid_packet = kcg_lit_int32(0);
    outC->_L99.PacketHeaders[idx9].q_dir = Q_DIR_Reverse;
    outC->_L99.PacketHeaders[idx9].valid = kcg_true;
    outC->_L99.PacketHeaders[idx9].startAddress = kcg_lit_int32(0);
    outC->_L99.PacketHeaders[idx9].endAddress = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 500; idx10++) {
    outC->_L99.PacketData[idx10] = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L86[idx11].valid = kcg_true;
    outC->_L86[idx11].q_dir = Q_DIR_Reverse;
    outC->_L86[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L86[idx11].d_mamode = kcg_lit_int32(0);
    outC->_L86[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L86[idx11].v_mamode = kcg_lit_int32(0);
    outC->_L86[idx11].l_mamode = kcg_lit_int32(0);
    outC->_L86[idx11].l_ackmamode = kcg_lit_int32(0);
    outC->_L86[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L85[idx12].valid = kcg_true;
    outC->_L85[idx12].q_dir = Q_DIR_Reverse;
    outC->_L85[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L85[idx12].nid_c = kcg_lit_int32(0);
    outC->_L85[idx12].nid_bg = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L83[idx13].valid = kcg_true;
    outC->_L83[idx13].q_dir = Q_DIR_Reverse;
    outC->_L83[idx13].m_leveltr = M_LEVELTR_Level_0;
    outC->_L83[idx13].nid_ntc = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 7; idx14++) {
    outC->_L81[idx14].valid = kcg_true;
    outC->_L81[idx14].q_dir = Q_DIR_Reverse;
    outC->_L81[idx14].q_scale = Q_SCALE_10_cm_scale;
    outC->_L81[idx14].d_leveltr = kcg_lit_int32(0);
    outC->_L81[idx14].m_leveltr = M_LEVELTR_Level_0;
    outC->_L81[idx14].nid_ntc = kcg_lit_int32(0);
    outC->_L81[idx14].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L73.valid = kcg_true;
  outC->_L73.q_dir = Q_DIR_Reverse;
  outC->_L73.q_scale = Q_SCALE_10_cm_scale;
  outC->_L73.d_reverse = kcg_lit_int32(0);
  outC->_L73.v_reverse = kcg_lit_int32(0);
  outC->_L71.valid = kcg_true;
  outC->_L71.q_dir = Q_DIR_Reverse;
  outC->_L71.q_scale = Q_SCALE_10_cm_scale;
  outC->_L71.d_startreverse = kcg_lit_int32(0);
  outC->_L71.l_reversearea = kcg_lit_int32(0);
  outC->_L69.valid = kcg_true;
  outC->_L69.q_dir = Q_DIR_Reverse;
  outC->_L69.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L67 = kcg_true;
  outC->_L68.valid = kcg_true;
  outC->_L68.q_dir = Q_DIR_Reverse;
  outC->_L49.valid = kcg_true;
  outC->_L49.source = msrc_undefined_Common_Types_Pkg;
  outC->_L49.radioMetadata.t_train_reference = kcg_true;
  outC->_L49.radioMetadata.nid_em = kcg_true;
  outC->_L49.radioMetadata.q_scale = kcg_true;
  outC->_L49.radioMetadata.d_sr = kcg_true;
  outC->_L49.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L49.radioMetadata.d_ref = kcg_true;
  outC->_L49.radioMetadata.q_dir = kcg_true;
  outC->_L49.radioMetadata.d_emergencystop = kcg_true;
  outC->_L49.radioMetadata.m_version = kcg_true;
  outC->_L49.BG_Common_Header.valid = kcg_true;
  outC->_L49.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L49.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L49.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L49.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L49.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L49.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L49.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L49.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L49.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L49.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L49.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L49.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L49.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L49.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L49.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx15 = 0; idx15 < 30; idx15++) {
    outC->_L49.packets.PacketHeaders[idx15].nid_packet = kcg_lit_int32(0);
    outC->_L49.packets.PacketHeaders[idx15].q_dir = Q_DIR_Reverse;
    outC->_L49.packets.PacketHeaders[idx15].valid = kcg_true;
    outC->_L49.packets.PacketHeaders[idx15].startAddress = kcg_lit_int32(0);
    outC->_L49.packets.PacketHeaders[idx15].endAddress = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 500; idx16++) {
    outC->_L49.packets.PacketData[idx16] = kcg_lit_int32(0);
  }
  outC->_L49.sendingRBC.valid = kcg_true;
  outC->_L49.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L49.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L49.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 30; idx17++) {
    outC->_L51.PacketHeaders[idx17].nid_packet = kcg_lit_int32(0);
    outC->_L51.PacketHeaders[idx17].q_dir = Q_DIR_Reverse;
    outC->_L51.PacketHeaders[idx17].valid = kcg_true;
    outC->_L51.PacketHeaders[idx17].startAddress = kcg_lit_int32(0);
    outC->_L51.PacketHeaders[idx17].endAddress = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 500; idx18++) {
    outC->_L51.PacketData[idx18] = kcg_lit_int32(0);
  }
  outC->_L48 = kcg_lit_int32(0);
  outC->_L33.valid = kcg_true;
  outC->_L33.source = msrc_undefined_Common_Types_Pkg;
  outC->_L33.radioMetadata.t_train_reference = kcg_true;
  outC->_L33.radioMetadata.nid_em = kcg_true;
  outC->_L33.radioMetadata.q_scale = kcg_true;
  outC->_L33.radioMetadata.d_sr = kcg_true;
  outC->_L33.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L33.radioMetadata.d_ref = kcg_true;
  outC->_L33.radioMetadata.q_dir = kcg_true;
  outC->_L33.radioMetadata.d_emergencystop = kcg_true;
  outC->_L33.radioMetadata.m_version = kcg_true;
  outC->_L33.BG_Common_Header.valid = kcg_true;
  outC->_L33.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L33.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L33.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L33.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L33.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L33.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L33.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L33.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L33.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L33.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L33.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L33.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L33.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L33.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L33.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L33.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L33.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx19 = 0; idx19 < 30; idx19++) {
    outC->_L33.packets.PacketHeaders[idx19].nid_packet = kcg_lit_int32(0);
    outC->_L33.packets.PacketHeaders[idx19].q_dir = Q_DIR_Reverse;
    outC->_L33.packets.PacketHeaders[idx19].valid = kcg_true;
    outC->_L33.packets.PacketHeaders[idx19].startAddress = kcg_lit_int32(0);
    outC->_L33.packets.PacketHeaders[idx19].endAddress = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 500; idx20++) {
    outC->_L33.packets.PacketData[idx20] = kcg_lit_int32(0);
  }
  outC->_L33.sendingRBC.valid = kcg_true;
  outC->_L33.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L33.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L33.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L18 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_true;
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L6.P_12[idx21].valid = kcg_true;
    outC->_L6.P_12[idx21].q_dir = Q_DIR_Reverse;
    outC->_L6.P_12[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.P_12[idx21].v_main = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].v_loa = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].t_loa = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].l_section = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L6.P_12[idx21].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].l_endsection = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L6.P_12[idx21].t_sectiontimer = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L6.P_12[idx21].t_endtimer = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L6.P_12[idx21].d_dp = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].v_releasedp = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L6.P_12[idx21].d_startol = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].t_ol = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].d_ol = kcg_lit_int32(0);
    outC->_L6.P_12[idx21].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L6.P_135.valid = kcg_true;
  outC->_L6.P_135.q_dir = Q_DIR_Reverse;
  outC->_L6.P_137.valid = kcg_true;
  outC->_L6.P_137.q_dir = Q_DIR_Reverse;
  outC->_L6.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L6.P_138.valid = kcg_true;
  outC->_L6.P_138.q_dir = Q_DIR_Reverse;
  outC->_L6.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L6.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L6.P_139.valid = kcg_true;
  outC->_L6.P_139.q_dir = Q_DIR_Reverse;
  outC->_L6.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L6.P_139.v_reverse = kcg_lit_int32(0);
  for (idx22 = 0; idx22 < 5; idx22++) {
    outC->_L6.P_15[idx22].valid = kcg_true;
    outC->_L6.P_15[idx22].q_dir = Q_DIR_Reverse;
    outC->_L6.P_15[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.P_15[idx22].v_loa = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].t_loa = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].l_section = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L6.P_15[idx22].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].l_endsection = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L6.P_15[idx22].t_sectiontimer = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L6.P_15[idx22].t_endtimer = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L6.P_15[idx22].d_dp = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].v_releasedp = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L6.P_15[idx22].d_startol = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].t_ol = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].d_ol = kcg_lit_int32(0);
    outC->_L6.P_15[idx22].v_releaseol = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L6.P_21[idx23].valid = kcg_true;
    outC->_L6.P_21[idx23].q_dir = Q_DIR_Reverse;
    outC->_L6.P_21[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.P_21[idx23].d_gradient = kcg_lit_int32(0);
    outC->_L6.P_21[idx23].q_gdir = Q_GDIR_downhill;
    outC->_L6.P_21[idx23].g_a = kcg_lit_int32(0);
  }
  outC->_L6.P_27.valid = kcg_true;
  outC->_L6.P_27.q_dir = Q_DIR_Reverse;
  outC->_L6.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L6.P_27.d_static = kcg_lit_int32(0);
  outC->_L6.P_27.v_static = kcg_lit_int32(0);
  outC->_L6.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L6.P_27.diffArray[idx24].valid = kcg_true;
    outC->_L6.P_27.diffArray[idx24].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L6.P_27.diffArray[idx24].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L6.P_27.diffArray[idx24].nc_diff = kcg_lit_int32(0);
    outC->_L6.P_27.diffArray[idx24].v_diff = kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 7; idx26++) {
    outC->_L6.P_27.SSPArray[idx26].valid = kcg_true;
    outC->_L6.P_27.SSPArray[idx26].d_static = kcg_lit_int32(0);
    outC->_L6.P_27.SSPArray[idx26].v_static = kcg_lit_int32(0);
    outC->_L6.P_27.SSPArray[idx26].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx25 = 0; idx25 < 7; idx25++) {
      outC->_L6.P_27.SSPArray[idx26].diffArray[idx25].valid = kcg_true;
      outC->_L6.P_27.SSPArray[idx26].diffArray[idx25].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L6.P_27.SSPArray[idx26].diffArray[idx25].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L6.P_27.SSPArray[idx26].diffArray[idx25].nc_diff = kcg_lit_int32(0);
      outC->_L6.P_27.SSPArray[idx26].diffArray[idx25].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx27 = 0; idx27 < 7; idx27++) {
    outC->_L6.P_41[idx27].valid = kcg_true;
    outC->_L6.P_41[idx27].q_dir = Q_DIR_Reverse;
    outC->_L6.P_41[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.P_41[idx27].d_leveltr = kcg_lit_int32(0);
    outC->_L6.P_41[idx27].m_leveltr = M_LEVELTR_Level_0;
    outC->_L6.P_41[idx27].nid_ntc = kcg_lit_int32(0);
    outC->_L6.P_41[idx27].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L6.P_46[idx28].valid = kcg_true;
    outC->_L6.P_46[idx28].q_dir = Q_DIR_Reverse;
    outC->_L6.P_46[idx28].m_leveltr = M_LEVELTR_Level_0;
    outC->_L6.P_46[idx28].nid_ntc = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->_L6.P_63[idx29].valid = kcg_true;
    outC->_L6.P_63[idx29].q_dir = Q_DIR_Reverse;
    outC->_L6.P_63[idx29].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L6.P_63[idx29].nid_c = kcg_lit_int32(0);
    outC->_L6.P_63[idx29].nid_bg = kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 3; idx30++) {
    outC->_L6.P_80[idx30].valid = kcg_true;
    outC->_L6.P_80[idx30].q_dir = Q_DIR_Reverse;
    outC->_L6.P_80[idx30].q_scale = Q_SCALE_10_cm_scale;
    outC->_L6.P_80[idx30].d_mamode = kcg_lit_int32(0);
    outC->_L6.P_80[idx30].m_mamode = M_MAMODE_On_Sight;
    outC->_L6.P_80[idx30].v_mamode = kcg_lit_int32(0);
    outC->_L6.P_80[idx30].l_mamode = kcg_lit_int32(0);
    outC->_L6.P_80[idx30].l_ackmamode = kcg_lit_int32(0);
    outC->_L6.P_80[idx30].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L6.LRBG = kcg_lit_int32(0);
  outC->_L6.referenceLocation = kcg_lit_int32(0);
  outC->P_27_to_Input_MA_SSP_Gradient_at_ML = kcg_true;
  outC->P_21_to_Input_MA_SSP_Gradient_at_ML = kcg_true;
  outC->P_15_to_Input_MA_SSP_Gradient_at_ML = kcg_true;
  outC->P_12_to_Input_MA_SSP_Gradient_at_ML = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_15 = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_16 = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_2 = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_27 = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_28 = kcg_true;
  outC->Data_to_From_Track_Messages_at_ML.Mess_6 = kcg_true;
  for (idx31 = 0; idx31 < 5; idx31++) {
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].v_main = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].v_loa = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].t_loa = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].l_section = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].l_endsection =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].t_sectiontimer =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].t_endtimer =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_dp = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].v_releasedp =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_startol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].t_ol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].d_ol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_12[idx31].v_releaseol =
      kcg_lit_int32(0);
  }
  outC->Data_to_From_Track_Packets_at_ML.P_135.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_to_From_Track_Packets_at_ML.P_138.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_138.d_startreverse = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.P_138.l_reversearea = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.P_139.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_139.d_reverse = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.P_139.v_reverse = kcg_lit_int32(0);
  for (idx32 = 0; idx32 < 5; idx32++) {
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].v_loa = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].t_loa = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].l_section = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].l_endsection =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].t_sectiontimer =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].t_endtimer =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_dp = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].v_releasedp =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_startol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].t_ol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].d_ol = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_15[idx32].v_releaseol =
      kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 7; idx33++) {
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].d_gradient =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].q_gdir = Q_GDIR_downhill;
    outC->Data_to_From_Track_Packets_at_ML.P_21[idx33].g_a = kcg_lit_int32(0);
  }
  outC->Data_to_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_to_From_Track_Packets_at_ML.P_27.d_static = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.P_27.v_static = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx34 = 0; idx34 < 7; idx34++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[idx34].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[idx34].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[idx34].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[idx34].nc_diff =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_27.diffArray[idx34].v_diff =
      kcg_lit_int32(0);
  }
  for (idx36 = 0; idx36 < 7; idx36++) {
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].d_static =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].v_static =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx35 = 0; idx35 < 7; idx35++) {
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].diffArray[idx35].valid =
        kcg_true;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].diffArray[idx35].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].diffArray[idx35].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].diffArray[idx35].nc_diff =
        kcg_lit_int32(0);
      outC->Data_to_From_Track_Packets_at_ML.P_27.SSPArray[idx36].diffArray[idx35].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx37 = 0; idx37 < 7; idx37++) {
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].d_leveltr = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].nid_ntc = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_41[idx37].l_ackleveltr =
      kcg_lit_int32(0);
  }
  for (idx38 = 0; idx38 < 7; idx38++) {
    outC->Data_to_From_Track_Packets_at_ML.P_46[idx38].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_46[idx38].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_46[idx38].m_leveltr =
      M_LEVELTR_Level_0;
    outC->Data_to_From_Track_Packets_at_ML.P_46[idx38].nid_ntc = kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 7; idx39++) {
    outC->Data_to_From_Track_Packets_at_ML.P_63[idx39].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_63[idx39].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_63[idx39].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_to_From_Track_Packets_at_ML.P_63[idx39].nid_c = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_63[idx39].nid_bg = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 3; idx40++) {
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].valid = kcg_true;
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].q_dir = Q_DIR_Reverse;
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].d_mamode = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].m_mamode = M_MAMODE_On_Sight;
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].v_mamode = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].l_mamode = kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].l_ackmamode =
      kcg_lit_int32(0);
    outC->Data_to_From_Track_Packets_at_ML.P_80[idx40].q_mamode =
      Q_MAMODE_as_the_EOA;
  }
  outC->Data_to_From_Track_Packets_at_ML.LRBG = kcg_lit_int32(0);
  outC->Data_to_From_Track_Packets_at_ML.referenceLocation = kcg_lit_int32(0);
  /* _L69=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_init_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L71=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_init_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L73=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_init_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L121=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_init_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L122=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_init_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* _L123=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_init_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L81=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_init_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L83=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_init_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L88=(TM::Read_P135#2)/ */ Read_P135_init_TM(&outC->Context_Read_P135_2);
  /* _L107=(TM::Read_P012#1)/ */ Read_P012_init_TM(&outC->Context_Read_P012_1);
  /* _L67=(TM::Read_P135#1)/ */ Read_P135_init_TM(&outC->Context_Read_P135_1);
  /* _L20=(TM_conversions::CAST_NID_MESSAGE_to_int#2)/ */
  CAST_NID_MESSAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TA_to_ML_reset_TA_Export(outC_TA_to_ML_TA_Export *outC)
{
  /* _L69=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_reset_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L71=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_reset_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L73=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_reset_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L121=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_reset_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L122=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_reset_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* _L123=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_reset_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L81=(TM_specific::Read_P041_Legacy#1)/ */
  Read_P041_Legacy_reset_TM_specific(&outC->Context_Read_P041_Legacy_1);
  /* _L83=(TM_specific::Read_P046_Legacy#1)/ */
  Read_P046_Legacy_reset_TM_specific(&outC->Context_Read_P046_Legacy_1);
  /* _L88=(TM::Read_P135#2)/ */ Read_P135_reset_TM(&outC->Context_Read_P135_2);
  /* _L107=(TM::Read_P012#1)/ */ Read_P012_reset_TM(&outC->Context_Read_P012_1);
  /* _L67=(TM::Read_P135#1)/ */ Read_P135_reset_TM(&outC->Context_Read_P135_1);
  /* _L20=(TM_conversions::CAST_NID_MESSAGE_to_int#2)/ */
  CAST_NID_MESSAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TA_to_ML_TA_Export.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

