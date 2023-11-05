/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Modes_InputManagement.h"

/* InputManagement::Input_Modes/ */
void Input_Modes_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  outC_Input_Modes_InputManagement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static Q_DIR noname;
  static P15_Level23MovementAuthorities_T_Packet_Types_Pkg _2_noname;
  static P21_GradientProfiles_T_Packet_Types_Pkg _3_noname;
  static P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg _4_noname;
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _5_noname;
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _6_noname;
  static NID_LRBG _7_noname;

  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L84,
    Data_From_Track_Packets);
  outC->_L102 = outC->_L84.referenceLocation;
  outC->Loc_referenceLocation = outC->_L102;
  outC->_L120 = outC->Loc_referenceLocation;
  outC->_L119 = outC->Loc_referenceLocation;
  /* _L118/ */
  for (idx = 0; idx < 3; idx++) {
    outC->_L118[idx] = outC->_L119;
  }
  outC->_L88 = kcg_lit_int32(0);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L115,
    &outC->_L84.P_12);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->Loc_Packet_12,
    &outC->_L115);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L89,
    &outC->Loc_Packet_12);
  kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
    &outC->_L85,
    &outC->_L89[0]);
  outC->_L87 = outC->_L85.v_main;
  outC->_L90 = outC->_L87 == outC->_L88;
  outC->_L91 = outC->_L85.valid;
  outC->_L86 = outC->_L91 & outC->_L90;
  outC->Trip_Order_givrn_By_Balise = outC->_L86;
  outC->_L103 = outC->_L84.LRBG;
  _7_noname = outC->_L103;
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L106,
    &outC->_L84.P_46);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &_6_noname,
    &outC->_L106);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L107,
    &outC->_L84.P_41);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &_5_noname,
    &outC->_L107);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L114,
    &outC->_L84.P_135);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L113,
    &outC->_L84.P_137);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L112,
    &outC->_L84.P_138);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L111,
    &outC->_L84.P_139);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L110,
    &outC->_L84.P_15);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L109,
    &outC->_L84.P_21);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L108,
    &outC->_L84.P_27);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L105,
    &outC->_L84.P_63);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L104, &outC->_L84.P_80);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->Loc_Packet_135,
    &outC->_L114);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L101,
    &outC->Loc_Packet_135);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->Loc_Packet_63,
    &outC->_L105);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L99,
    &outC->Loc_Packet_63);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->Loc_Packet_137,
    &outC->_L113);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L100,
    &outC->Loc_Packet_137);
  /* _L97=(InputManagement::Input_Staff_Responsible#1)/ */
  Input_Staff_Responsible_InputManagement(
    &outC->_L99,
    &outC->_L100,
    &outC->Context_Input_Staff_Responsible_1);
  outC->_L97 = outC->Context_Input_Staff_Responsible_1.List_BG_Related_SR_Empty;
  outC->_L98 = outC->Context_Input_Staff_Responsible_1.Stop_if_In_SR;
  outC->Stop_if_In_SR = outC->_L98;
  outC->List_BG_Related_SR_Empty = outC->_L97;
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->Loc_Packet_138,
    &outC->_L112);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L95,
    &outC->Loc_Packet_138);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->Loc_Packet_139,
    &outC->_L111);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L96,
    &outC->Loc_Packet_139);
  /* _L94=(InputManagement::Input_Reversing_Mode#1)/ */
  Input_Reversing_Mode_InputManagement(
    &outC->_L95,
    &outC->_L96,
    outC->_L120,
    &outC->Context_Input_Reversing_Mode_1);
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L94,
    &outC->Context_Input_Reversing_Mode_1.Reversing_Data);
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->Reversing_Data,
    &outC->_L94);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
    &outC->Loc_Packet_80,
    &outC->_L104);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L93, &outC->Loc_Packet_80);
  /* _L92= */
  for (idx1 = 0; idx1 < 3; idx1++) {
    /* _L92=(InputManagement::Input_ModeProfiles#1)/ */
    Input_ModeProfiles_InputManagement(
      &outC->_L93[idx1],
      outC->_L118[idx1],
      &outC->Context_Input_ModeProfiles_1[idx1]);
    kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
      &outC->_L92[idx1],
      &outC->Context_Input_ModeProfiles_1[idx1].Mode_Profile_On_Borad);
  }
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->Mode_Profile_On_Borad,
    &outC->_L92);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &_4_noname,
    &outC->_L108);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(&_3_noname, &outC->_L109);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &_2_noname,
    &outC->_L110);
  outC->_L54 = outC->_L101.q_dir;
  noname = outC->_L54;
  outC->_L55 = outC->_L101.valid;
  outC->Stop_If_In_SH = outC->_L55;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_Modes_init_InputManagement(outC_Input_Modes_InputManagement *outC)
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

  outC->_L120 = kcg_lit_int32(0);
  outC->_L119 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L118[idx1] = kcg_lit_int32(0);
  }
  outC->_L102 = kcg_lit_int32(0);
  outC->_L103 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L104[idx2].valid = kcg_true;
    outC->_L104[idx2].q_dir = Q_DIR_Reverse;
    outC->_L104[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L104[idx2].d_mamode = kcg_lit_int32(0);
    outC->_L104[idx2].m_mamode = M_MAMODE_On_Sight;
    outC->_L104[idx2].v_mamode = kcg_lit_int32(0);
    outC->_L104[idx2].l_mamode = kcg_lit_int32(0);
    outC->_L104[idx2].l_ackmamode = kcg_lit_int32(0);
    outC->_L104[idx2].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L105[idx3].valid = kcg_true;
    outC->_L105[idx3].q_dir = Q_DIR_Reverse;
    outC->_L105[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L105[idx3].nid_c = kcg_lit_int32(0);
    outC->_L105[idx3].nid_bg = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L106[idx4].valid = kcg_true;
    outC->_L106[idx4].q_dir = Q_DIR_Reverse;
    outC->_L106[idx4].m_leveltr = M_LEVELTR_Level_0;
    outC->_L106[idx4].nid_ntc = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L107[idx5].valid = kcg_true;
    outC->_L107[idx5].q_dir = Q_DIR_Reverse;
    outC->_L107[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L107[idx5].d_leveltr = kcg_lit_int32(0);
    outC->_L107[idx5].m_leveltr = M_LEVELTR_Level_0;
    outC->_L107[idx5].nid_ntc = kcg_lit_int32(0);
    outC->_L107[idx5].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L108.valid = kcg_true;
  outC->_L108.q_dir = Q_DIR_Reverse;
  outC->_L108.q_scale = Q_SCALE_10_cm_scale;
  outC->_L108.d_static = kcg_lit_int32(0);
  outC->_L108.v_static = kcg_lit_int32(0);
  outC->_L108.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L108.diffArray[idx6].valid = kcg_true;
    outC->_L108.diffArray[idx6].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L108.diffArray[idx6].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L108.diffArray[idx6].nc_diff = kcg_lit_int32(0);
    outC->_L108.diffArray[idx6].v_diff = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L108.SSPArray[idx8].valid = kcg_true;
    outC->_L108.SSPArray[idx8].d_static = kcg_lit_int32(0);
    outC->_L108.SSPArray[idx8].v_static = kcg_lit_int32(0);
    outC->_L108.SSPArray[idx8].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx7 = 0; idx7 < 7; idx7++) {
      outC->_L108.SSPArray[idx8].diffArray[idx7].valid = kcg_true;
      outC->_L108.SSPArray[idx8].diffArray[idx7].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L108.SSPArray[idx8].diffArray[idx7].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L108.SSPArray[idx8].diffArray[idx7].nc_diff = kcg_lit_int32(0);
      outC->_L108.SSPArray[idx8].diffArray[idx7].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L109[idx9].valid = kcg_true;
    outC->_L109[idx9].q_dir = Q_DIR_Reverse;
    outC->_L109[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L109[idx9].d_gradient = kcg_lit_int32(0);
    outC->_L109[idx9].q_gdir = Q_GDIR_downhill;
    outC->_L109[idx9].g_a = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L110[idx10].valid = kcg_true;
    outC->_L110[idx10].q_dir = Q_DIR_Reverse;
    outC->_L110[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L110[idx10].v_loa = kcg_lit_int32(0);
    outC->_L110[idx10].t_loa = kcg_lit_int32(0);
    outC->_L110[idx10].l_section = kcg_lit_int32(0);
    outC->_L110[idx10].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L110[idx10].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L110[idx10].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L110[idx10].l_endsection = kcg_lit_int32(0);
    outC->_L110[idx10].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L110[idx10].t_sectiontimer = kcg_lit_int32(0);
    outC->_L110[idx10].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L110[idx10].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L110[idx10].t_endtimer = kcg_lit_int32(0);
    outC->_L110[idx10].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L110[idx10].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L110[idx10].d_dp = kcg_lit_int32(0);
    outC->_L110[idx10].v_releasedp = kcg_lit_int32(0);
    outC->_L110[idx10].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L110[idx10].d_startol = kcg_lit_int32(0);
    outC->_L110[idx10].t_ol = kcg_lit_int32(0);
    outC->_L110[idx10].d_ol = kcg_lit_int32(0);
    outC->_L110[idx10].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L111.valid = kcg_true;
  outC->_L111.q_dir = Q_DIR_Reverse;
  outC->_L111.q_scale = Q_SCALE_10_cm_scale;
  outC->_L111.d_reverse = kcg_lit_int32(0);
  outC->_L111.v_reverse = kcg_lit_int32(0);
  outC->_L112.valid = kcg_true;
  outC->_L112.q_dir = Q_DIR_Reverse;
  outC->_L112.q_scale = Q_SCALE_10_cm_scale;
  outC->_L112.d_startreverse = kcg_lit_int32(0);
  outC->_L112.l_reversearea = kcg_lit_int32(0);
  outC->_L113.valid = kcg_true;
  outC->_L113.q_dir = Q_DIR_Reverse;
  outC->_L113.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L114.valid = kcg_true;
  outC->_L114.q_dir = Q_DIR_Reverse;
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L115[idx11].valid = kcg_true;
    outC->_L115[idx11].q_dir = Q_DIR_Reverse;
    outC->_L115[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L115[idx11].v_main = kcg_lit_int32(0);
    outC->_L115[idx11].v_loa = kcg_lit_int32(0);
    outC->_L115[idx11].t_loa = kcg_lit_int32(0);
    outC->_L115[idx11].l_section = kcg_lit_int32(0);
    outC->_L115[idx11].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L115[idx11].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L115[idx11].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L115[idx11].l_endsection = kcg_lit_int32(0);
    outC->_L115[idx11].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L115[idx11].t_sectiontimer = kcg_lit_int32(0);
    outC->_L115[idx11].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L115[idx11].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L115[idx11].t_endtimer = kcg_lit_int32(0);
    outC->_L115[idx11].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L115[idx11].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L115[idx11].d_dp = kcg_lit_int32(0);
    outC->_L115[idx11].v_releasedp = kcg_lit_int32(0);
    outC->_L115[idx11].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L115[idx11].d_startol = kcg_lit_int32(0);
    outC->_L115[idx11].t_ol = kcg_lit_int32(0);
    outC->_L115[idx11].d_ol = kcg_lit_int32(0);
    outC->_L115[idx11].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L101.valid = kcg_true;
  outC->_L101.q_dir = Q_DIR_Reverse;
  outC->_L100.valid = kcg_true;
  outC->_L100.q_dir = Q_DIR_Reverse;
  outC->_L100.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L99[idx12].valid = kcg_true;
    outC->_L99[idx12].q_dir = Q_DIR_Reverse;
    outC->_L99[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L99[idx12].nid_c = kcg_lit_int32(0);
    outC->_L99[idx12].nid_bg = kcg_lit_int32(0);
  }
  outC->_L98 = kcg_true;
  outC->_L97 = kcg_true;
  outC->_L96.valid = kcg_true;
  outC->_L96.q_dir = Q_DIR_Reverse;
  outC->_L96.q_scale = Q_SCALE_10_cm_scale;
  outC->_L96.d_reverse = kcg_lit_int32(0);
  outC->_L96.v_reverse = kcg_lit_int32(0);
  outC->_L95.valid = kcg_true;
  outC->_L95.q_dir = Q_DIR_Reverse;
  outC->_L95.q_scale = Q_SCALE_10_cm_scale;
  outC->_L95.d_startreverse = kcg_lit_int32(0);
  outC->_L95.l_reversearea = kcg_lit_int32(0);
  outC->_L94.Available = kcg_true;
  outC->_L94.Dist_Start = kcg_lit_int32(0);
  outC->_L94.Length = kcg_lit_int32(0);
  outC->_L94.Dist_Run = kcg_lit_int32(0);
  outC->_L94.Speed = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L93[idx13].valid = kcg_true;
    outC->_L93[idx13].q_dir = Q_DIR_Reverse;
    outC->_L93[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L93[idx13].d_mamode = kcg_lit_int32(0);
    outC->_L93[idx13].m_mamode = M_MAMODE_On_Sight;
    outC->_L93[idx13].v_mamode = kcg_lit_int32(0);
    outC->_L93[idx13].l_mamode = kcg_lit_int32(0);
    outC->_L93[idx13].l_ackmamode = kcg_lit_int32(0);
    outC->_L93[idx13].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L92[idx14].Distance = kcg_lit_int32(0);
    outC->_L92[idx14].Mode = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L92[idx14].Speed = kcg_lit_int32(0);
    outC->_L92[idx14].Length = kcg_lit_int32(0);
    outC->_L92[idx14].Length_Ack = kcg_lit_int32(0);
  }
  outC->_L85.valid = kcg_true;
  outC->_L85.q_dir = Q_DIR_Reverse;
  outC->_L85.q_scale = Q_SCALE_10_cm_scale;
  outC->_L85.v_main = kcg_lit_int32(0);
  outC->_L85.v_loa = kcg_lit_int32(0);
  outC->_L85.t_loa = kcg_lit_int32(0);
  outC->_L85.l_section = kcg_lit_int32(0);
  outC->_L85.q_sectiontimer_k = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L85.t_sectiontimer_k = kcg_lit_int32(0);
  outC->_L85.d_sectiontimerstoploc_k = kcg_lit_int32(0);
  outC->_L85.l_endsection = kcg_lit_int32(0);
  outC->_L85.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L85.t_sectiontimer = kcg_lit_int32(0);
  outC->_L85.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L85.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L85.t_endtimer = kcg_lit_int32(0);
  outC->_L85.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L85.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L85.d_dp = kcg_lit_int32(0);
  outC->_L85.v_releasedp = kcg_lit_int32(0);
  outC->_L85.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L85.d_startol = kcg_lit_int32(0);
  outC->_L85.t_ol = kcg_lit_int32(0);
  outC->_L85.d_ol = kcg_lit_int32(0);
  outC->_L85.v_releaseol = kcg_lit_int32(0);
  outC->_L86 = kcg_true;
  outC->_L87 = kcg_lit_int32(0);
  outC->_L88 = kcg_lit_int32(0);
  for (idx15 = 0; idx15 < 5; idx15++) {
    outC->_L89[idx15].valid = kcg_true;
    outC->_L89[idx15].q_dir = Q_DIR_Reverse;
    outC->_L89[idx15].q_scale = Q_SCALE_10_cm_scale;
    outC->_L89[idx15].v_main = kcg_lit_int32(0);
    outC->_L89[idx15].v_loa = kcg_lit_int32(0);
    outC->_L89[idx15].t_loa = kcg_lit_int32(0);
    outC->_L89[idx15].l_section = kcg_lit_int32(0);
    outC->_L89[idx15].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L89[idx15].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L89[idx15].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L89[idx15].l_endsection = kcg_lit_int32(0);
    outC->_L89[idx15].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L89[idx15].t_sectiontimer = kcg_lit_int32(0);
    outC->_L89[idx15].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L89[idx15].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L89[idx15].t_endtimer = kcg_lit_int32(0);
    outC->_L89[idx15].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L89[idx15].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L89[idx15].d_dp = kcg_lit_int32(0);
    outC->_L89[idx15].v_releasedp = kcg_lit_int32(0);
    outC->_L89[idx15].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L89[idx15].d_startol = kcg_lit_int32(0);
    outC->_L89[idx15].t_ol = kcg_lit_int32(0);
    outC->_L89[idx15].d_ol = kcg_lit_int32(0);
    outC->_L89[idx15].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L90 = kcg_true;
  outC->_L91 = kcg_true;
  for (idx16 = 0; idx16 < 5; idx16++) {
    outC->_L84.P_12[idx16].valid = kcg_true;
    outC->_L84.P_12[idx16].q_dir = Q_DIR_Reverse;
    outC->_L84.P_12[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L84.P_12[idx16].v_main = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].v_loa = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].t_loa = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].l_section = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L84.P_12[idx16].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].l_endsection = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L84.P_12[idx16].t_sectiontimer = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L84.P_12[idx16].t_endtimer = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L84.P_12[idx16].d_dp = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].v_releasedp = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L84.P_12[idx16].d_startol = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].t_ol = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].d_ol = kcg_lit_int32(0);
    outC->_L84.P_12[idx16].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L84.P_135.valid = kcg_true;
  outC->_L84.P_135.q_dir = Q_DIR_Reverse;
  outC->_L84.P_137.valid = kcg_true;
  outC->_L84.P_137.q_dir = Q_DIR_Reverse;
  outC->_L84.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L84.P_138.valid = kcg_true;
  outC->_L84.P_138.q_dir = Q_DIR_Reverse;
  outC->_L84.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L84.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L84.P_139.valid = kcg_true;
  outC->_L84.P_139.q_dir = Q_DIR_Reverse;
  outC->_L84.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L84.P_139.v_reverse = kcg_lit_int32(0);
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L84.P_15[idx17].valid = kcg_true;
    outC->_L84.P_15[idx17].q_dir = Q_DIR_Reverse;
    outC->_L84.P_15[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L84.P_15[idx17].v_loa = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].t_loa = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].l_section = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L84.P_15[idx17].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].l_endsection = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L84.P_15[idx17].t_sectiontimer = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L84.P_15[idx17].t_endtimer = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L84.P_15[idx17].d_dp = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].v_releasedp = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L84.P_15[idx17].d_startol = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].t_ol = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].d_ol = kcg_lit_int32(0);
    outC->_L84.P_15[idx17].v_releaseol = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L84.P_21[idx18].valid = kcg_true;
    outC->_L84.P_21[idx18].q_dir = Q_DIR_Reverse;
    outC->_L84.P_21[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L84.P_21[idx18].d_gradient = kcg_lit_int32(0);
    outC->_L84.P_21[idx18].q_gdir = Q_GDIR_downhill;
    outC->_L84.P_21[idx18].g_a = kcg_lit_int32(0);
  }
  outC->_L84.P_27.valid = kcg_true;
  outC->_L84.P_27.q_dir = Q_DIR_Reverse;
  outC->_L84.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L84.P_27.d_static = kcg_lit_int32(0);
  outC->_L84.P_27.v_static = kcg_lit_int32(0);
  outC->_L84.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L84.P_27.diffArray[idx19].valid = kcg_true;
    outC->_L84.P_27.diffArray[idx19].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L84.P_27.diffArray[idx19].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L84.P_27.diffArray[idx19].nc_diff = kcg_lit_int32(0);
    outC->_L84.P_27.diffArray[idx19].v_diff = kcg_lit_int32(0);
  }
  for (idx21 = 0; idx21 < 7; idx21++) {
    outC->_L84.P_27.SSPArray[idx21].valid = kcg_true;
    outC->_L84.P_27.SSPArray[idx21].d_static = kcg_lit_int32(0);
    outC->_L84.P_27.SSPArray[idx21].v_static = kcg_lit_int32(0);
    outC->_L84.P_27.SSPArray[idx21].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx20 = 0; idx20 < 7; idx20++) {
      outC->_L84.P_27.SSPArray[idx21].diffArray[idx20].valid = kcg_true;
      outC->_L84.P_27.SSPArray[idx21].diffArray[idx20].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L84.P_27.SSPArray[idx21].diffArray[idx20].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L84.P_27.SSPArray[idx21].diffArray[idx20].nc_diff = kcg_lit_int32(0);
      outC->_L84.P_27.SSPArray[idx21].diffArray[idx20].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L84.P_41[idx22].valid = kcg_true;
    outC->_L84.P_41[idx22].q_dir = Q_DIR_Reverse;
    outC->_L84.P_41[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->_L84.P_41[idx22].d_leveltr = kcg_lit_int32(0);
    outC->_L84.P_41[idx22].m_leveltr = M_LEVELTR_Level_0;
    outC->_L84.P_41[idx22].nid_ntc = kcg_lit_int32(0);
    outC->_L84.P_41[idx22].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L84.P_46[idx23].valid = kcg_true;
    outC->_L84.P_46[idx23].q_dir = Q_DIR_Reverse;
    outC->_L84.P_46[idx23].m_leveltr = M_LEVELTR_Level_0;
    outC->_L84.P_46[idx23].nid_ntc = kcg_lit_int32(0);
  }
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L84.P_63[idx24].valid = kcg_true;
    outC->_L84.P_63[idx24].q_dir = Q_DIR_Reverse;
    outC->_L84.P_63[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L84.P_63[idx24].nid_c = kcg_lit_int32(0);
    outC->_L84.P_63[idx24].nid_bg = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 3; idx25++) {
    outC->_L84.P_80[idx25].valid = kcg_true;
    outC->_L84.P_80[idx25].q_dir = Q_DIR_Reverse;
    outC->_L84.P_80[idx25].q_scale = Q_SCALE_10_cm_scale;
    outC->_L84.P_80[idx25].d_mamode = kcg_lit_int32(0);
    outC->_L84.P_80[idx25].m_mamode = M_MAMODE_On_Sight;
    outC->_L84.P_80[idx25].v_mamode = kcg_lit_int32(0);
    outC->_L84.P_80[idx25].l_mamode = kcg_lit_int32(0);
    outC->_L84.P_80[idx25].l_ackmamode = kcg_lit_int32(0);
    outC->_L84.P_80[idx25].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L84.LRBG = kcg_lit_int32(0);
  outC->_L84.referenceLocation = kcg_lit_int32(0);
  outC->_L54 = Q_DIR_Reverse;
  outC->_L55 = kcg_true;
  outC->Loc_referenceLocation = kcg_lit_int32(0);
  for (idx26 = 0; idx26 < 3; idx26++) {
    outC->Loc_Packet_80[idx26].valid = kcg_true;
    outC->Loc_Packet_80[idx26].q_dir = Q_DIR_Reverse;
    outC->Loc_Packet_80[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->Loc_Packet_80[idx26].d_mamode = kcg_lit_int32(0);
    outC->Loc_Packet_80[idx26].m_mamode = M_MAMODE_On_Sight;
    outC->Loc_Packet_80[idx26].v_mamode = kcg_lit_int32(0);
    outC->Loc_Packet_80[idx26].l_mamode = kcg_lit_int32(0);
    outC->Loc_Packet_80[idx26].l_ackmamode = kcg_lit_int32(0);
    outC->Loc_Packet_80[idx26].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx27 = 0; idx27 < 7; idx27++) {
    outC->Loc_Packet_63[idx27].valid = kcg_true;
    outC->Loc_Packet_63[idx27].q_dir = Q_DIR_Reverse;
    outC->Loc_Packet_63[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Loc_Packet_63[idx27].nid_c = kcg_lit_int32(0);
    outC->Loc_Packet_63[idx27].nid_bg = kcg_lit_int32(0);
  }
  outC->Loc_Packet_135.valid = kcg_true;
  outC->Loc_Packet_135.q_dir = Q_DIR_Reverse;
  outC->Loc_Packet_137.valid = kcg_true;
  outC->Loc_Packet_137.q_dir = Q_DIR_Reverse;
  outC->Loc_Packet_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Loc_Packet_138.valid = kcg_true;
  outC->Loc_Packet_138.q_dir = Q_DIR_Reverse;
  outC->Loc_Packet_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Loc_Packet_138.d_startreverse = kcg_lit_int32(0);
  outC->Loc_Packet_138.l_reversearea = kcg_lit_int32(0);
  outC->Loc_Packet_139.valid = kcg_true;
  outC->Loc_Packet_139.q_dir = Q_DIR_Reverse;
  outC->Loc_Packet_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Loc_Packet_139.d_reverse = kcg_lit_int32(0);
  outC->Loc_Packet_139.v_reverse = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 5; idx28++) {
    outC->Loc_Packet_12[idx28].valid = kcg_true;
    outC->Loc_Packet_12[idx28].q_dir = Q_DIR_Reverse;
    outC->Loc_Packet_12[idx28].q_scale = Q_SCALE_10_cm_scale;
    outC->Loc_Packet_12[idx28].v_main = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].v_loa = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].t_loa = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].l_section = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Loc_Packet_12[idx28].t_sectiontimer_k = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].l_endsection = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Loc_Packet_12[idx28].t_sectiontimer = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Loc_Packet_12[idx28].t_endtimer = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].d_endtimerstartloc = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Loc_Packet_12[idx28].d_dp = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].v_releasedp = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->Loc_Packet_12[idx28].d_startol = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].t_ol = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].d_ol = kcg_lit_int32(0);
    outC->Loc_Packet_12[idx28].v_releaseol = kcg_lit_int32(0);
  }
  outC->Trip_Order_givrn_By_Balise = kcg_true;
  outC->List_BG_Related_SR_Empty = kcg_true;
  for (idx29 = 0; idx29 < 3; idx29++) {
    outC->Mode_Profile_On_Borad[idx29].Distance = kcg_lit_int32(0);
    outC->Mode_Profile_On_Borad[idx29].Mode = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->Mode_Profile_On_Borad[idx29].Speed = kcg_lit_int32(0);
    outC->Mode_Profile_On_Borad[idx29].Length = kcg_lit_int32(0);
    outC->Mode_Profile_On_Borad[idx29].Length_Ack = kcg_lit_int32(0);
  }
  outC->Reversing_Data.Available = kcg_true;
  outC->Reversing_Data.Dist_Start = kcg_lit_int32(0);
  outC->Reversing_Data.Length = kcg_lit_int32(0);
  outC->Reversing_Data.Dist_Run = kcg_lit_int32(0);
  outC->Reversing_Data.Speed = kcg_lit_int32(0);
  outC->Stop_if_In_SR = kcg_true;
  outC->Stop_If_In_SH = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    /* _L92=(InputManagement::Input_ModeProfiles#1)/ */
    Input_ModeProfiles_init_InputManagement(
      &outC->Context_Input_ModeProfiles_1[idx]);
  }
  /* _L94=(InputManagement::Input_Reversing_Mode#1)/ */
  Input_Reversing_Mode_init_InputManagement(
    &outC->Context_Input_Reversing_Mode_1);
  /* _L97=(InputManagement::Input_Staff_Responsible#1)/ */
  Input_Staff_Responsible_init_InputManagement(
    &outC->Context_Input_Staff_Responsible_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Modes_reset_InputManagement(outC_Input_Modes_InputManagement *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 3; idx++) {
    /* _L92=(InputManagement::Input_ModeProfiles#1)/ */
    Input_ModeProfiles_reset_InputManagement(
      &outC->Context_Input_ModeProfiles_1[idx]);
  }
  /* _L94=(InputManagement::Input_Reversing_Mode#1)/ */
  Input_Reversing_Mode_reset_InputManagement(
    &outC->Context_Input_Reversing_Mode_1);
  /* _L97=(InputManagement::Input_Staff_Responsible#1)/ */
  Input_Staff_Responsible_reset_InputManagement(
    &outC->Context_Input_Staff_Responsible_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Modes_InputManagement.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

