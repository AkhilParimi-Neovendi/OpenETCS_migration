/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::patchEmergencyBrakeMsg/ */
void patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg(
  /* inFromTA/ */
  DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC)
{
  outC->_L6 = kcg_false;
  outC->_L4 = kcg_false;
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L1, inFromTA);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L2,
    &outC->_L1.train_messages);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L3,
    &outC->_L2);
  if (kcg_true) {
    outC->_L3.Mess_15 = outC->_L4;
  }
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L5,
    &outC->_L3);
  if (kcg_true) {
    outC->_L5.Mess_15 = outC->_L6;
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->_L8, &outC->_L1);
  if (kcg_true) {
    kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      &outC->_L8.train_messages,
      &outC->_L5);
  }
  kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(&outC->outToML, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void patchEmergencyBrakeMsg_init_EVC_MEM_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC)
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

  for (idx = 0; idx < 5; idx++) {
    outC->_L8.train_packets.P_12[idx].valid = kcg_true;
    outC->_L8.train_packets.P_12[idx].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_12[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_12[idx].v_main = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].v_loa = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].t_loa = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].l_section = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_12[idx].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].l_endsection = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_12[idx].t_sectiontimer = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L8.train_packets.P_12[idx].t_endtimer = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L8.train_packets.P_12[idx].d_dp = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].v_releasedp = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L8.train_packets.P_12[idx].d_startol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].t_ol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].d_ol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_12[idx].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L8.train_packets.P_135.valid = kcg_true;
  outC->_L8.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_137.valid = kcg_true;
  outC->_L8.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L8.train_packets.P_138.valid = kcg_true;
  outC->_L8.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_138.d_startreverse = kcg_lit_int64(0);
  outC->_L8.train_packets.P_138.l_reversearea = kcg_lit_int64(0);
  outC->_L8.train_packets.P_139.valid = kcg_true;
  outC->_L8.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_139.d_reverse = kcg_lit_int64(0);
  outC->_L8.train_packets.P_139.v_reverse = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L8.train_packets.P_15[idx1].valid = kcg_true;
    outC->_L8.train_packets.P_15[idx1].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_15[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_15[idx1].v_loa = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].t_loa = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].l_section = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_15[idx1].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].l_endsection = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L8.train_packets.P_15[idx1].t_sectiontimer = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L8.train_packets.P_15[idx1].t_endtimer = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L8.train_packets.P_15[idx1].d_dp = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].v_releasedp = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L8.train_packets.P_15[idx1].d_startol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].t_ol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].d_ol = kcg_lit_int64(0);
    outC->_L8.train_packets.P_15[idx1].v_releaseol = kcg_lit_int64(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L8.train_packets.P_21[idx2].valid = kcg_true;
    outC->_L8.train_packets.P_21[idx2].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_21[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_21[idx2].d_gradient = kcg_lit_int64(0);
    outC->_L8.train_packets.P_21[idx2].q_gdir = Q_GDIR_downhill;
    outC->_L8.train_packets.P_21[idx2].g_a = kcg_lit_int64(0);
  }
  outC->_L8.train_packets.P_27.valid = kcg_true;
  outC->_L8.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L8.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8.train_packets.P_27.d_static = kcg_lit_int64(0);
  outC->_L8.train_packets.P_27.v_static = kcg_lit_int64(0);
  outC->_L8.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L8.train_packets.P_27.diffArray[idx3].valid = kcg_true;
    outC->_L8.train_packets.P_27.diffArray[idx3].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L8.train_packets.P_27.diffArray[idx3].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L8.train_packets.P_27.diffArray[idx3].nc_diff = kcg_lit_int64(0);
    outC->_L8.train_packets.P_27.diffArray[idx3].v_diff = kcg_lit_int64(0);
  }
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L8.train_packets.P_27.SSPArray[idx5].valid = kcg_true;
    outC->_L8.train_packets.P_27.SSPArray[idx5].d_static = kcg_lit_int64(0);
    outC->_L8.train_packets.P_27.SSPArray[idx5].v_static = kcg_lit_int64(0);
    outC->_L8.train_packets.P_27.SSPArray[idx5].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx4 = 0; idx4 < 7; idx4++) {
      outC->_L8.train_packets.P_27.SSPArray[idx5].diffArray[idx4].valid = kcg_true;
      outC->_L8.train_packets.P_27.SSPArray[idx5].diffArray[idx4].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L8.train_packets.P_27.SSPArray[idx5].diffArray[idx4].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L8.train_packets.P_27.SSPArray[idx5].diffArray[idx4].nc_diff =
        kcg_lit_int64(0);
      outC->_L8.train_packets.P_27.SSPArray[idx5].diffArray[idx4].v_diff =
        kcg_lit_int64(0);
    }
  }
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L8.train_packets.P_41[idx6].valid = kcg_true;
    outC->_L8.train_packets.P_41[idx6].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_41[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_41[idx6].d_leveltr = kcg_lit_int64(0);
    outC->_L8.train_packets.P_41[idx6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8.train_packets.P_41[idx6].nid_ntc = kcg_lit_int64(0);
    outC->_L8.train_packets.P_41[idx6].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L8.train_packets.P_46[idx7].valid = kcg_true;
    outC->_L8.train_packets.P_46[idx7].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_46[idx7].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8.train_packets.P_46[idx7].nid_ntc = kcg_lit_int64(0);
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L8.train_packets.P_63[idx8].valid = kcg_true;
    outC->_L8.train_packets.P_63[idx8].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_63[idx8].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L8.train_packets.P_63[idx8].nid_c = kcg_lit_int64(0);
    outC->_L8.train_packets.P_63[idx8].nid_bg = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 3; idx9++) {
    outC->_L8.train_packets.P_80[idx9].valid = kcg_true;
    outC->_L8.train_packets.P_80[idx9].q_dir = Q_DIR_Reverse;
    outC->_L8.train_packets.P_80[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8.train_packets.P_80[idx9].d_mamode = kcg_lit_int64(0);
    outC->_L8.train_packets.P_80[idx9].m_mamode = M_MAMODE_On_Sight;
    outC->_L8.train_packets.P_80[idx9].v_mamode = kcg_lit_int64(0);
    outC->_L8.train_packets.P_80[idx9].l_mamode = kcg_lit_int64(0);
    outC->_L8.train_packets.P_80[idx9].l_ackmamode = kcg_lit_int64(0);
    outC->_L8.train_packets.P_80[idx9].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L8.train_packets.LRBG = kcg_lit_int64(0);
  outC->_L8.train_packets.referenceLocation = kcg_lit_int64(0);
  outC->_L8.train_messages.Mess_15 = kcg_true;
  outC->_L8.train_messages.Mess_16 = kcg_true;
  outC->_L8.train_messages.Mess_2 = kcg_true;
  outC->_L8.train_messages.Mess_27 = kcg_true;
  outC->_L8.train_messages.Mess_28 = kcg_true;
  outC->_L8.train_messages.Mess_6 = kcg_true;
  outC->_L8.p12 = kcg_true;
  outC->_L8.p15 = kcg_true;
  outC->_L8.p21 = kcg_true;
  outC->_L8.p27 = kcg_true;
  outC->_L5.Mess_15 = kcg_true;
  outC->_L5.Mess_16 = kcg_true;
  outC->_L5.Mess_2 = kcg_true;
  outC->_L5.Mess_27 = kcg_true;
  outC->_L5.Mess_28 = kcg_true;
  outC->_L5.Mess_6 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3.Mess_15 = kcg_true;
  outC->_L3.Mess_16 = kcg_true;
  outC->_L3.Mess_2 = kcg_true;
  outC->_L3.Mess_27 = kcg_true;
  outC->_L3.Mess_28 = kcg_true;
  outC->_L3.Mess_6 = kcg_true;
  outC->_L2.Mess_15 = kcg_true;
  outC->_L2.Mess_16 = kcg_true;
  outC->_L2.Mess_2 = kcg_true;
  outC->_L2.Mess_27 = kcg_true;
  outC->_L2.Mess_28 = kcg_true;
  outC->_L2.Mess_6 = kcg_true;
  for (idx10 = 0; idx10 < 5; idx10++) {
    outC->_L1.train_packets.P_12[idx10].valid = kcg_true;
    outC->_L1.train_packets.P_12[idx10].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_12[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_12[idx10].v_main = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].v_loa = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].t_loa = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].l_section = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_12[idx10].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].l_endsection = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_12[idx10].t_sectiontimer = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1.train_packets.P_12[idx10].t_endtimer = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1.train_packets.P_12[idx10].d_dp = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].v_releasedp = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1.train_packets.P_12[idx10].d_startol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].t_ol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].d_ol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_12[idx10].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L1.train_packets.P_135.valid = kcg_true;
  outC->_L1.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_137.valid = kcg_true;
  outC->_L1.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L1.train_packets.P_138.valid = kcg_true;
  outC->_L1.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_138.d_startreverse = kcg_lit_int64(0);
  outC->_L1.train_packets.P_138.l_reversearea = kcg_lit_int64(0);
  outC->_L1.train_packets.P_139.valid = kcg_true;
  outC->_L1.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_139.d_reverse = kcg_lit_int64(0);
  outC->_L1.train_packets.P_139.v_reverse = kcg_lit_int64(0);
  for (idx11 = 0; idx11 < 5; idx11++) {
    outC->_L1.train_packets.P_15[idx11].valid = kcg_true;
    outC->_L1.train_packets.P_15[idx11].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_15[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_15[idx11].v_loa = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].t_loa = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].l_section = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_15[idx11].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].l_endsection = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L1.train_packets.P_15[idx11].t_sectiontimer = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L1.train_packets.P_15[idx11].t_endtimer = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L1.train_packets.P_15[idx11].d_dp = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].v_releasedp = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->_L1.train_packets.P_15[idx11].d_startol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].t_ol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].d_ol = kcg_lit_int64(0);
    outC->_L1.train_packets.P_15[idx11].v_releaseol = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L1.train_packets.P_21[idx12].valid = kcg_true;
    outC->_L1.train_packets.P_21[idx12].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_21[idx12].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_21[idx12].d_gradient = kcg_lit_int64(0);
    outC->_L1.train_packets.P_21[idx12].q_gdir = Q_GDIR_downhill;
    outC->_L1.train_packets.P_21[idx12].g_a = kcg_lit_int64(0);
  }
  outC->_L1.train_packets.P_27.valid = kcg_true;
  outC->_L1.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->_L1.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1.train_packets.P_27.d_static = kcg_lit_int64(0);
  outC->_L1.train_packets.P_27.v_static = kcg_lit_int64(0);
  outC->_L1.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L1.train_packets.P_27.diffArray[idx13].valid = kcg_true;
    outC->_L1.train_packets.P_27.diffArray[idx13].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L1.train_packets.P_27.diffArray[idx13].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L1.train_packets.P_27.diffArray[idx13].nc_diff = kcg_lit_int64(0);
    outC->_L1.train_packets.P_27.diffArray[idx13].v_diff = kcg_lit_int64(0);
  }
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L1.train_packets.P_27.SSPArray[idx15].valid = kcg_true;
    outC->_L1.train_packets.P_27.SSPArray[idx15].d_static = kcg_lit_int64(0);
    outC->_L1.train_packets.P_27.SSPArray[idx15].v_static = kcg_lit_int64(0);
    outC->_L1.train_packets.P_27.SSPArray[idx15].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx14 = 0; idx14 < 7; idx14++) {
      outC->_L1.train_packets.P_27.SSPArray[idx15].diffArray[idx14].valid = kcg_true;
      outC->_L1.train_packets.P_27.SSPArray[idx15].diffArray[idx14].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L1.train_packets.P_27.SSPArray[idx15].diffArray[idx14].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L1.train_packets.P_27.SSPArray[idx15].diffArray[idx14].nc_diff =
        kcg_lit_int64(0);
      outC->_L1.train_packets.P_27.SSPArray[idx15].diffArray[idx14].v_diff =
        kcg_lit_int64(0);
    }
  }
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L1.train_packets.P_41[idx16].valid = kcg_true;
    outC->_L1.train_packets.P_41[idx16].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_41[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_41[idx16].d_leveltr = kcg_lit_int64(0);
    outC->_L1.train_packets.P_41[idx16].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.train_packets.P_41[idx16].nid_ntc = kcg_lit_int64(0);
    outC->_L1.train_packets.P_41[idx16].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L1.train_packets.P_46[idx17].valid = kcg_true;
    outC->_L1.train_packets.P_46[idx17].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_46[idx17].m_leveltr = M_LEVELTR_Level_0;
    outC->_L1.train_packets.P_46[idx17].nid_ntc = kcg_lit_int64(0);
  }
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->_L1.train_packets.P_63[idx18].valid = kcg_true;
    outC->_L1.train_packets.P_63[idx18].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_63[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L1.train_packets.P_63[idx18].nid_c = kcg_lit_int64(0);
    outC->_L1.train_packets.P_63[idx18].nid_bg = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 3; idx19++) {
    outC->_L1.train_packets.P_80[idx19].valid = kcg_true;
    outC->_L1.train_packets.P_80[idx19].q_dir = Q_DIR_Reverse;
    outC->_L1.train_packets.P_80[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L1.train_packets.P_80[idx19].d_mamode = kcg_lit_int64(0);
    outC->_L1.train_packets.P_80[idx19].m_mamode = M_MAMODE_On_Sight;
    outC->_L1.train_packets.P_80[idx19].v_mamode = kcg_lit_int64(0);
    outC->_L1.train_packets.P_80[idx19].l_mamode = kcg_lit_int64(0);
    outC->_L1.train_packets.P_80[idx19].l_ackmamode = kcg_lit_int64(0);
    outC->_L1.train_packets.P_80[idx19].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L1.train_packets.LRBG = kcg_lit_int64(0);
  outC->_L1.train_packets.referenceLocation = kcg_lit_int64(0);
  outC->_L1.train_messages.Mess_15 = kcg_true;
  outC->_L1.train_messages.Mess_16 = kcg_true;
  outC->_L1.train_messages.Mess_2 = kcg_true;
  outC->_L1.train_messages.Mess_27 = kcg_true;
  outC->_L1.train_messages.Mess_28 = kcg_true;
  outC->_L1.train_messages.Mess_6 = kcg_true;
  outC->_L1.p12 = kcg_true;
  outC->_L1.p15 = kcg_true;
  outC->_L1.p21 = kcg_true;
  outC->_L1.p27 = kcg_true;
  for (idx20 = 0; idx20 < 5; idx20++) {
    outC->outToML.train_packets.P_12[idx20].valid = kcg_true;
    outC->outToML.train_packets.P_12[idx20].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_12[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_12[idx20].v_main = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].v_loa = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].t_loa = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].l_section = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_12[idx20].t_sectiontimer_k = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].d_sectiontimerstoploc_k =
      kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].l_endsection = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_12[idx20].t_sectiontimer = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].d_sectiontimerstoploc =
      kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->outToML.train_packets.P_12[idx20].t_endtimer = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].d_endtimerstartloc = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->outToML.train_packets.P_12[idx20].d_dp = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].v_releasedp = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->outToML.train_packets.P_12[idx20].d_startol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].t_ol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].d_ol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_12[idx20].v_releaseol = kcg_lit_int64(0);
  }
  outC->outToML.train_packets.P_135.valid = kcg_true;
  outC->outToML.train_packets.P_135.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_137.valid = kcg_true;
  outC->outToML.train_packets.P_137.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->outToML.train_packets.P_138.valid = kcg_true;
  outC->outToML.train_packets.P_138.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_138.d_startreverse = kcg_lit_int64(0);
  outC->outToML.train_packets.P_138.l_reversearea = kcg_lit_int64(0);
  outC->outToML.train_packets.P_139.valid = kcg_true;
  outC->outToML.train_packets.P_139.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_139.d_reverse = kcg_lit_int64(0);
  outC->outToML.train_packets.P_139.v_reverse = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->outToML.train_packets.P_15[idx21].valid = kcg_true;
    outC->outToML.train_packets.P_15[idx21].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_15[idx21].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_15[idx21].v_loa = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].t_loa = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].l_section = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_15[idx21].t_sectiontimer_k = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].d_sectiontimerstoploc_k =
      kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].l_endsection = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->outToML.train_packets.P_15[idx21].t_sectiontimer = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].d_sectiontimerstoploc =
      kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->outToML.train_packets.P_15[idx21].t_endtimer = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].d_endtimerstartloc = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->outToML.train_packets.P_15[idx21].d_dp = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].v_releasedp = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->outToML.train_packets.P_15[idx21].d_startol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].t_ol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].d_ol = kcg_lit_int64(0);
    outC->outToML.train_packets.P_15[idx21].v_releaseol = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->outToML.train_packets.P_21[idx22].valid = kcg_true;
    outC->outToML.train_packets.P_21[idx22].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_21[idx22].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_21[idx22].d_gradient = kcg_lit_int64(0);
    outC->outToML.train_packets.P_21[idx22].q_gdir = Q_GDIR_downhill;
    outC->outToML.train_packets.P_21[idx22].g_a = kcg_lit_int64(0);
  }
  outC->outToML.train_packets.P_27.valid = kcg_true;
  outC->outToML.train_packets.P_27.q_dir = Q_DIR_Reverse;
  outC->outToML.train_packets.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->outToML.train_packets.P_27.d_static = kcg_lit_int64(0);
  outC->outToML.train_packets.P_27.v_static = kcg_lit_int64(0);
  outC->outToML.train_packets.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->outToML.train_packets.P_27.diffArray[idx23].valid = kcg_true;
    outC->outToML.train_packets.P_27.diffArray[idx23].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->outToML.train_packets.P_27.diffArray[idx23].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->outToML.train_packets.P_27.diffArray[idx23].nc_diff = kcg_lit_int64(0);
    outC->outToML.train_packets.P_27.diffArray[idx23].v_diff = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->outToML.train_packets.P_27.SSPArray[idx25].valid = kcg_true;
    outC->outToML.train_packets.P_27.SSPArray[idx25].d_static = kcg_lit_int64(0);
    outC->outToML.train_packets.P_27.SSPArray[idx25].v_static = kcg_lit_int64(0);
    outC->outToML.train_packets.P_27.SSPArray[idx25].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx24 = 0; idx24 < 7; idx24++) {
      outC->outToML.train_packets.P_27.SSPArray[idx25].diffArray[idx24].valid =
        kcg_true;
      outC->outToML.train_packets.P_27.SSPArray[idx25].diffArray[idx24].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->outToML.train_packets.P_27.SSPArray[idx25].diffArray[idx24].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->outToML.train_packets.P_27.SSPArray[idx25].diffArray[idx24].nc_diff =
        kcg_lit_int64(0);
      outC->outToML.train_packets.P_27.SSPArray[idx25].diffArray[idx24].v_diff =
        kcg_lit_int64(0);
    }
  }
  for (idx26 = 0; idx26 < 7; idx26++) {
    outC->outToML.train_packets.P_41[idx26].valid = kcg_true;
    outC->outToML.train_packets.P_41[idx26].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_41[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_41[idx26].d_leveltr = kcg_lit_int64(0);
    outC->outToML.train_packets.P_41[idx26].m_leveltr = M_LEVELTR_Level_0;
    outC->outToML.train_packets.P_41[idx26].nid_ntc = kcg_lit_int64(0);
    outC->outToML.train_packets.P_41[idx26].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx27 = 0; idx27 < 7; idx27++) {
    outC->outToML.train_packets.P_46[idx27].valid = kcg_true;
    outC->outToML.train_packets.P_46[idx27].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_46[idx27].m_leveltr = M_LEVELTR_Level_0;
    outC->outToML.train_packets.P_46[idx27].nid_ntc = kcg_lit_int64(0);
  }
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->outToML.train_packets.P_63[idx28].valid = kcg_true;
    outC->outToML.train_packets.P_63[idx28].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_63[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->outToML.train_packets.P_63[idx28].nid_c = kcg_lit_int64(0);
    outC->outToML.train_packets.P_63[idx28].nid_bg = kcg_lit_int64(0);
  }
  for (idx29 = 0; idx29 < 3; idx29++) {
    outC->outToML.train_packets.P_80[idx29].valid = kcg_true;
    outC->outToML.train_packets.P_80[idx29].q_dir = Q_DIR_Reverse;
    outC->outToML.train_packets.P_80[idx29].q_scale = Q_SCALE_10_cm_scale;
    outC->outToML.train_packets.P_80[idx29].d_mamode = kcg_lit_int64(0);
    outC->outToML.train_packets.P_80[idx29].m_mamode = M_MAMODE_On_Sight;
    outC->outToML.train_packets.P_80[idx29].v_mamode = kcg_lit_int64(0);
    outC->outToML.train_packets.P_80[idx29].l_mamode = kcg_lit_int64(0);
    outC->outToML.train_packets.P_80[idx29].l_ackmamode = kcg_lit_int64(0);
    outC->outToML.train_packets.P_80[idx29].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->outToML.train_packets.LRBG = kcg_lit_int64(0);
  outC->outToML.train_packets.referenceLocation = kcg_lit_int64(0);
  outC->outToML.train_messages.Mess_15 = kcg_true;
  outC->outToML.train_messages.Mess_16 = kcg_true;
  outC->outToML.train_messages.Mess_2 = kcg_true;
  outC->outToML.train_messages.Mess_27 = kcg_true;
  outC->outToML.train_messages.Mess_28 = kcg_true;
  outC->outToML.train_messages.Mess_6 = kcg_true;
  outC->outToML.p12 = kcg_true;
  outC->outToML.p15 = kcg_true;
  outC->outToML.p21 = kcg_true;
  outC->outToML.p27 = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void patchEmergencyBrakeMsg_reset_EVC_MEM_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** patchEmergencyBrakeMsg_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

