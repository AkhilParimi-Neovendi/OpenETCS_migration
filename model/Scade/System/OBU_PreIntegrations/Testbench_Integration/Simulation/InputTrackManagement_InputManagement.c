/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_InputManagement.h"

/* InputManagement::InputTrackManagement/ */
void InputTrackManagement_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  outC_InputTrackManagement_InputManagement *outC)
{
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L64,
    Data_From_Track_Packets);
  /* _L84=(InputManagement::Input_Level_Transition#1)/ */
  Input_Level_Transition_InputManagement(
    &outC->_L64,
    &outC->Context_Input_Level_Transition_1);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L84,
    &outC->Context_Input_Level_Transition_1.conditional_transition);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L83,
    &outC->Context_Input_Level_Transition_1.level_transition_priority_table);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->Loc_levelTransitions,
    &outC->_L83);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L230,
    &outC->Loc_levelTransitions);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->Loc_conditionalTransitions,
    &outC->_L84);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L229,
    &outC->Loc_conditionalTransitions);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L134,
    Data_From_Track_MASSPGradient);
  /* _L67=(InputManagement::Input_MA_SSP_Gradient#1)/ */
  Input_MA_SSP_Gradient_InputManagement(
    &outC->_L134,
    &outC->Context_Input_MA_SSP_Gradient_1);
  outC->_L67 = outC->Context_Input_MA_SSP_Gradient_1.received_L2_L3_MA;
  outC->_L66 = outC->Context_Input_MA_SSP_Gradient_1.received_L1_MA;
  outC->_L68 = outC->Context_Input_MA_SSP_Gradient_1.MA_SSP_Gradient_Available;
  outC->Loc_received_L2L3MA = outC->_L67;
  outC->_L231 = outC->Loc_received_L2L3MA;
  outC->Loc_received_L1MA = outC->_L66;
  outC->_L232 = outC->Loc_received_L1MA;
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L234.level_transition_priority_table,
    &outC->_L230);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->_L234.conditionnalTransition,
    &outC->_L229);
  outC->_L234.receivedL2L3MA_track = outC->_L231;
  outC->_L234.receivedL1MA_track = outC->_L232;
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Track_to_Level,
    &outC->_L234);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L227,
    Data_From_Track_Packets);
  /* _L98=(InputManagement::Input_Modes#1)/ */
  Input_Modes_InputManagement(&outC->_L227, &outC->Context_Input_Modes_1);
  outC->_L98 = outC->Context_Input_Modes_1.Stop_If_In_SH;
  outC->_L99 = outC->Context_Input_Modes_1.Stop_if_In_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L100,
    &outC->Context_Input_Modes_1.Reversing_Data);
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->_L101,
    &outC->Context_Input_Modes_1.Mode_Profile_On_Borad);
  outC->_L102 = outC->Context_Input_Modes_1.List_BG_Related_SR_Empty;
  outC->_L226 = outC->Context_Input_Modes_1.Trip_Order_givrn_By_Balise;
  outC->Loc_Trip_Order_Given_By_Balise = outC->_L226;
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L65,
    Data_From_Track_Messages);
  /* _L222=(InputManagement::Input_Messages#1)/ */
  Input_Messages_InputManagement(&outC->_L65, &outC->Context_Input_Messages_1);
  outC->_L222 = outC->Context_Input_Messages_1.Emergency_Stop_Message_Received;
  outC->_L223 = outC->Context_Input_Messages_1.Shunting_Granted_By_RBC;
  outC->_L224 = outC->Context_Input_Messages_1.RCB_Ack_And_EB_Revocked;
  outC->_L225 = outC->Context_Input_Messages_1.RBC_Authorized_SR;
  outC->Loc_RBC_Authorized_SR = outC->_L225;
  outC->Loc_RCB_Ack_And_EB_Revocked = outC->_L224;
  outC->Loc_Shunting_Granted_By_RBC = outC->_L223;
  outC->Loc_Emergency_Stop_Message_Received = outC->_L222;
  outC->Loc_MA_SSP_Gradient_Available = outC->_L68;
  outC->_L33 = outC->Loc_MA_SSP_Gradient_Available;
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->Loc_Mode_Profile_On_Board,
    &outC->_L101);
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->_L34,
    &outC->Loc_Mode_Profile_On_Board);
  outC->_L38 = outC->Loc_Shunting_Granted_By_RBC;
  outC->_L42 = outC->Loc_Trip_Order_Given_By_Balise;
  outC->Loc_List_BG_Related_To_SR_Empty = outC->_L102;
  outC->_L32 = outC->Loc_List_BG_Related_To_SR_Empty;
  outC->Loc_Stop_If_In_Shunting = outC->_L98;
  outC->_L39 = outC->Loc_Stop_If_In_Shunting;
  outC->Loc_Stop_If_In_SR = outC->_L99;
  outC->_L40 = outC->Loc_Stop_If_In_SR;
  outC->_L36 = outC->Loc_RCB_Ack_And_EB_Revocked;
  outC->_L35 = outC->Loc_RBC_Authorized_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->Loc_Reversing_Data,
    &outC->_L100);
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L37,
    &outC->Loc_Reversing_Data);
  outC->_L29 = outC->Loc_Emergency_Stop_Message_Received;
  outC->_L28.MA_SSP_Gradient_Available = outC->_L33;
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->_L28.Mode_Profile_On_Board,
    &outC->_L34);
  outC->_L28.Shunting_granted_By_RBC = outC->_L38;
  outC->_L28.Trip_Order_Given_By_Balise = outC->_L42;
  outC->_L28.List_Bg_Related_To_SR_Empty = outC->_L32;
  outC->_L28.Stop_If_In_shunting = outC->_L39;
  outC->_L28.Stop_If_In_SR = outC->_L40;
  outC->_L28.RBC_Ack_TR_EB_Revocked = outC->_L36;
  outC->_L28.RBC_Authorized_SR = outC->_L35;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L28.Reversing_Data,
    &outC->_L37);
  outC->_L28.Emergency_Stop_Message_Received = outC->_L29;
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Track_To_Mode,
    &outC->_L28);
}

#ifndef KCG_USER_DEFINED_INIT
void InputTrackManagement_init_InputManagement(
  outC_InputTrackManagement_InputManagement *outC)
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

  for (idx = 0; idx < 7; idx++) {
    outC->_L234.level_transition_priority_table[idx].is_set = kcg_true;
    outC->_L234.level_transition_priority_table[idx].transition.level =
      M_LEVEL_Level_0;
    outC->_L234.level_transition_priority_table[idx].transition.position =
      kcg_lit_int64(0);
    outC->_L234.level_transition_priority_table[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L234.level_transition_priority_table[idx].transition.immediateAck =
      kcg_true;
    outC->_L234.level_transition_priority_table[idx].transition.AckLength =
      kcg_lit_int64(0);
    outC->_L234.level_transition_priority_table[idx].LRBG = kcg_lit_int64(0);
    outC->_L234.level_transition_priority_table[idx].referenceLocation =
      kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L234.conditionnalTransition[idx1].is_set = kcg_true;
    outC->_L234.conditionnalTransition[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L234.conditionnalTransition[idx1].transition.position = kcg_lit_int64(0);
    outC->_L234.conditionnalTransition[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L234.conditionnalTransition[idx1].transition.immediateAck = kcg_true;
    outC->_L234.conditionnalTransition[idx1].transition.AckLength =
      kcg_lit_int64(0);
    outC->_L234.conditionnalTransition[idx1].LRBG = kcg_lit_int64(0);
    outC->_L234.conditionnalTransition[idx1].referenceLocation = kcg_lit_int64(0);
  }
  outC->_L234.receivedL2L3MA_track = kcg_true;
  outC->_L234.receivedL1MA_track = kcg_true;
  outC->_L232 = kcg_true;
  outC->_L231 = kcg_true;
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L230[idx2].is_set = kcg_true;
    outC->_L230[idx2].transition.level = M_LEVEL_Level_0;
    outC->_L230[idx2].transition.position = kcg_lit_int64(0);
    outC->_L230[idx2].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L230[idx2].transition.immediateAck = kcg_true;
    outC->_L230[idx2].transition.AckLength = kcg_lit_int64(0);
    outC->_L230[idx2].LRBG = kcg_lit_int64(0);
    outC->_L230[idx2].referenceLocation = kcg_lit_int64(0);
  }
  for (idx3 = 0; idx3 < 7; idx3++) {
    outC->_L229[idx3].is_set = kcg_true;
    outC->_L229[idx3].transition.level = M_LEVEL_Level_0;
    outC->_L229[idx3].transition.position = kcg_lit_int64(0);
    outC->_L229[idx3].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L229[idx3].transition.immediateAck = kcg_true;
    outC->_L229[idx3].transition.AckLength = kcg_lit_int64(0);
    outC->_L229[idx3].LRBG = kcg_lit_int64(0);
    outC->_L229[idx3].referenceLocation = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L227.P_12[idx4].valid = kcg_true;
    outC->_L227.P_12[idx4].q_dir = Q_DIR_Reverse;
    outC->_L227.P_12[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L227.P_12[idx4].v_main = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].v_loa = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].t_loa = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].l_section = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L227.P_12[idx4].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].l_endsection = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L227.P_12[idx4].t_sectiontimer = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L227.P_12[idx4].t_endtimer = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L227.P_12[idx4].d_dp = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].v_releasedp = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L227.P_12[idx4].d_startol = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].t_ol = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].d_ol = kcg_lit_int64(0);
    outC->_L227.P_12[idx4].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L227.P_135.valid = kcg_true;
  outC->_L227.P_135.q_dir = Q_DIR_Reverse;
  outC->_L227.P_137.valid = kcg_true;
  outC->_L227.P_137.q_dir = Q_DIR_Reverse;
  outC->_L227.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L227.P_138.valid = kcg_true;
  outC->_L227.P_138.q_dir = Q_DIR_Reverse;
  outC->_L227.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L227.P_138.d_startreverse = kcg_lit_int64(0);
  outC->_L227.P_138.l_reversearea = kcg_lit_int64(0);
  outC->_L227.P_139.valid = kcg_true;
  outC->_L227.P_139.q_dir = Q_DIR_Reverse;
  outC->_L227.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L227.P_139.d_reverse = kcg_lit_int64(0);
  outC->_L227.P_139.v_reverse = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->_L227.P_15[idx5].valid = kcg_true;
    outC->_L227.P_15[idx5].q_dir = Q_DIR_Reverse;
    outC->_L227.P_15[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L227.P_15[idx5].v_loa = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].t_loa = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].l_section = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L227.P_15[idx5].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].l_endsection = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L227.P_15[idx5].t_sectiontimer = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L227.P_15[idx5].t_endtimer = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L227.P_15[idx5].d_dp = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].v_releasedp = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L227.P_15[idx5].d_startol = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].t_ol = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].d_ol = kcg_lit_int64(0);
    outC->_L227.P_15[idx5].v_releaseol = kcg_lit_int64(0);
  }
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L227.P_21[idx6].valid = kcg_true;
    outC->_L227.P_21[idx6].q_dir = Q_DIR_Reverse;
    outC->_L227.P_21[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L227.P_21[idx6].d_gradient = kcg_lit_int64(0);
    outC->_L227.P_21[idx6].q_gdir = Q_GDIR_downhill;
    outC->_L227.P_21[idx6].g_a = kcg_lit_int64(0);
  }
  outC->_L227.P_27.valid = kcg_true;
  outC->_L227.P_27.q_dir = Q_DIR_Reverse;
  outC->_L227.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L227.P_27.d_static = kcg_lit_int64(0);
  outC->_L227.P_27.v_static = kcg_lit_int64(0);
  outC->_L227.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L227.P_27.diffArray[idx7].valid = kcg_true;
    outC->_L227.P_27.diffArray[idx7].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L227.P_27.diffArray[idx7].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L227.P_27.diffArray[idx7].nc_diff = kcg_lit_int64(0);
    outC->_L227.P_27.diffArray[idx7].v_diff = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L227.P_27.SSPArray[idx9].valid = kcg_true;
    outC->_L227.P_27.SSPArray[idx9].d_static = kcg_lit_int64(0);
    outC->_L227.P_27.SSPArray[idx9].v_static = kcg_lit_int64(0);
    outC->_L227.P_27.SSPArray[idx9].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx8 = 0; idx8 < 7; idx8++) {
      outC->_L227.P_27.SSPArray[idx9].diffArray[idx8].valid = kcg_true;
      outC->_L227.P_27.SSPArray[idx9].diffArray[idx8].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L227.P_27.SSPArray[idx9].diffArray[idx8].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L227.P_27.SSPArray[idx9].diffArray[idx8].nc_diff = kcg_lit_int64(0);
      outC->_L227.P_27.SSPArray[idx9].diffArray[idx8].v_diff = kcg_lit_int64(0);
    }
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L227.P_41[idx10].valid = kcg_true;
    outC->_L227.P_41[idx10].q_dir = Q_DIR_Reverse;
    outC->_L227.P_41[idx10].q_scale = Q_SCALE_10_cm_scale;
    outC->_L227.P_41[idx10].d_leveltr = kcg_lit_int64(0);
    outC->_L227.P_41[idx10].m_leveltr = M_LEVELTR_Level_0;
    outC->_L227.P_41[idx10].nid_ntc = kcg_lit_int64(0);
    outC->_L227.P_41[idx10].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 7; idx11++) {
    outC->_L227.P_46[idx11].valid = kcg_true;
    outC->_L227.P_46[idx11].q_dir = Q_DIR_Reverse;
    outC->_L227.P_46[idx11].m_leveltr = M_LEVELTR_Level_0;
    outC->_L227.P_46[idx11].nid_ntc = kcg_lit_int64(0);
  }
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L227.P_63[idx12].valid = kcg_true;
    outC->_L227.P_63[idx12].q_dir = Q_DIR_Reverse;
    outC->_L227.P_63[idx12].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L227.P_63[idx12].nid_c = kcg_lit_int64(0);
    outC->_L227.P_63[idx12].nid_bg = kcg_lit_int64(0);
  }
  for (idx13 = 0; idx13 < 3; idx13++) {
    outC->_L227.P_80[idx13].valid = kcg_true;
    outC->_L227.P_80[idx13].q_dir = Q_DIR_Reverse;
    outC->_L227.P_80[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L227.P_80[idx13].d_mamode = kcg_lit_int64(0);
    outC->_L227.P_80[idx13].m_mamode = M_MAMODE_On_Sight;
    outC->_L227.P_80[idx13].v_mamode = kcg_lit_int64(0);
    outC->_L227.P_80[idx13].l_mamode = kcg_lit_int64(0);
    outC->_L227.P_80[idx13].l_ackmamode = kcg_lit_int64(0);
    outC->_L227.P_80[idx13].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L227.LRBG = kcg_lit_int64(0);
  outC->_L227.referenceLocation = kcg_lit_int64(0);
  outC->_L226 = kcg_true;
  outC->_L225 = kcg_true;
  outC->_L224 = kcg_true;
  outC->_L223 = kcg_true;
  outC->_L222 = kcg_true;
  outC->_L134.P12_received = kcg_true;
  outC->_L134.P15_received = kcg_true;
  outC->_L134.P21_received = kcg_true;
  outC->_L134.P27_received = kcg_true;
  outC->_L102 = kcg_true;
  for (idx14 = 0; idx14 < 3; idx14++) {
    outC->_L101[idx14].Distance = kcg_lit_int64(0);
    outC->_L101[idx14].Mode = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L101[idx14].Speed = kcg_lit_int64(0);
    outC->_L101[idx14].Length = kcg_lit_int64(0);
    outC->_L101[idx14].Length_Ack = kcg_lit_int64(0);
  }
  outC->_L100.Available = kcg_true;
  outC->_L100.Dist_Start = kcg_lit_int64(0);
  outC->_L100.Length = kcg_lit_int64(0);
  outC->_L100.Dist_Run = kcg_lit_int64(0);
  outC->_L100.Speed = kcg_lit_int64(0);
  outC->_L99 = kcg_true;
  outC->_L98 = kcg_true;
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L84[idx15].is_set = kcg_true;
    outC->_L84[idx15].transition.level = M_LEVEL_Level_0;
    outC->_L84[idx15].transition.position = kcg_lit_int64(0);
    outC->_L84[idx15].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L84[idx15].transition.immediateAck = kcg_true;
    outC->_L84[idx15].transition.AckLength = kcg_lit_int64(0);
    outC->_L84[idx15].LRBG = kcg_lit_int64(0);
    outC->_L84[idx15].referenceLocation = kcg_lit_int64(0);
  }
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L83[idx16].is_set = kcg_true;
    outC->_L83[idx16].transition.level = M_LEVEL_Level_0;
    outC->_L83[idx16].transition.position = kcg_lit_int64(0);
    outC->_L83[idx16].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L83[idx16].transition.immediateAck = kcg_true;
    outC->_L83[idx16].transition.AckLength = kcg_lit_int64(0);
    outC->_L83[idx16].LRBG = kcg_lit_int64(0);
    outC->_L83[idx16].referenceLocation = kcg_lit_int64(0);
  }
  outC->_L68 = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66 = kcg_true;
  outC->_L65.Mess_15 = kcg_true;
  outC->_L65.Mess_16 = kcg_true;
  outC->_L65.Mess_2 = kcg_true;
  outC->_L65.Mess_27 = kcg_true;
  outC->_L65.Mess_28 = kcg_true;
  outC->_L65.Mess_6 = kcg_true;
  for (idx17 = 0; idx17 < 5; idx17++) {
    outC->_L64.P_12[idx17].valid = kcg_true;
    outC->_L64.P_12[idx17].q_dir = Q_DIR_Reverse;
    outC->_L64.P_12[idx17].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.P_12[idx17].v_main = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].v_loa = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].t_loa = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].l_section = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L64.P_12[idx17].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].l_endsection = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L64.P_12[idx17].t_sectiontimer = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L64.P_12[idx17].t_endtimer = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L64.P_12[idx17].d_dp = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].v_releasedp = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L64.P_12[idx17].d_startol = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].t_ol = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].d_ol = kcg_lit_int64(0);
    outC->_L64.P_12[idx17].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L64.P_135.valid = kcg_true;
  outC->_L64.P_135.q_dir = Q_DIR_Reverse;
  outC->_L64.P_137.valid = kcg_true;
  outC->_L64.P_137.q_dir = Q_DIR_Reverse;
  outC->_L64.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L64.P_138.valid = kcg_true;
  outC->_L64.P_138.q_dir = Q_DIR_Reverse;
  outC->_L64.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.P_138.d_startreverse = kcg_lit_int64(0);
  outC->_L64.P_138.l_reversearea = kcg_lit_int64(0);
  outC->_L64.P_139.valid = kcg_true;
  outC->_L64.P_139.q_dir = Q_DIR_Reverse;
  outC->_L64.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.P_139.d_reverse = kcg_lit_int64(0);
  outC->_L64.P_139.v_reverse = kcg_lit_int64(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L64.P_15[idx18].valid = kcg_true;
    outC->_L64.P_15[idx18].q_dir = Q_DIR_Reverse;
    outC->_L64.P_15[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.P_15[idx18].v_loa = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].t_loa = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].l_section = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L64.P_15[idx18].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].l_endsection = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L64.P_15[idx18].t_sectiontimer = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L64.P_15[idx18].t_endtimer = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L64.P_15[idx18].d_dp = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].v_releasedp = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L64.P_15[idx18].d_startol = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].t_ol = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].d_ol = kcg_lit_int64(0);
    outC->_L64.P_15[idx18].v_releaseol = kcg_lit_int64(0);
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->_L64.P_21[idx19].valid = kcg_true;
    outC->_L64.P_21[idx19].q_dir = Q_DIR_Reverse;
    outC->_L64.P_21[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.P_21[idx19].d_gradient = kcg_lit_int64(0);
    outC->_L64.P_21[idx19].q_gdir = Q_GDIR_downhill;
    outC->_L64.P_21[idx19].g_a = kcg_lit_int64(0);
  }
  outC->_L64.P_27.valid = kcg_true;
  outC->_L64.P_27.q_dir = Q_DIR_Reverse;
  outC->_L64.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L64.P_27.d_static = kcg_lit_int64(0);
  outC->_L64.P_27.v_static = kcg_lit_int64(0);
  outC->_L64.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx20 = 0; idx20 < 7; idx20++) {
    outC->_L64.P_27.diffArray[idx20].valid = kcg_true;
    outC->_L64.P_27.diffArray[idx20].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L64.P_27.diffArray[idx20].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L64.P_27.diffArray[idx20].nc_diff = kcg_lit_int64(0);
    outC->_L64.P_27.diffArray[idx20].v_diff = kcg_lit_int64(0);
  }
  for (idx22 = 0; idx22 < 7; idx22++) {
    outC->_L64.P_27.SSPArray[idx22].valid = kcg_true;
    outC->_L64.P_27.SSPArray[idx22].d_static = kcg_lit_int64(0);
    outC->_L64.P_27.SSPArray[idx22].v_static = kcg_lit_int64(0);
    outC->_L64.P_27.SSPArray[idx22].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx21 = 0; idx21 < 7; idx21++) {
      outC->_L64.P_27.SSPArray[idx22].diffArray[idx21].valid = kcg_true;
      outC->_L64.P_27.SSPArray[idx22].diffArray[idx21].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L64.P_27.SSPArray[idx22].diffArray[idx21].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L64.P_27.SSPArray[idx22].diffArray[idx21].nc_diff = kcg_lit_int64(0);
      outC->_L64.P_27.SSPArray[idx22].diffArray[idx21].v_diff = kcg_lit_int64(0);
    }
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L64.P_41[idx23].valid = kcg_true;
    outC->_L64.P_41[idx23].q_dir = Q_DIR_Reverse;
    outC->_L64.P_41[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.P_41[idx23].d_leveltr = kcg_lit_int64(0);
    outC->_L64.P_41[idx23].m_leveltr = M_LEVELTR_Level_0;
    outC->_L64.P_41[idx23].nid_ntc = kcg_lit_int64(0);
    outC->_L64.P_41[idx23].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L64.P_46[idx24].valid = kcg_true;
    outC->_L64.P_46[idx24].q_dir = Q_DIR_Reverse;
    outC->_L64.P_46[idx24].m_leveltr = M_LEVELTR_Level_0;
    outC->_L64.P_46[idx24].nid_ntc = kcg_lit_int64(0);
  }
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->_L64.P_63[idx25].valid = kcg_true;
    outC->_L64.P_63[idx25].q_dir = Q_DIR_Reverse;
    outC->_L64.P_63[idx25].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L64.P_63[idx25].nid_c = kcg_lit_int64(0);
    outC->_L64.P_63[idx25].nid_bg = kcg_lit_int64(0);
  }
  for (idx26 = 0; idx26 < 3; idx26++) {
    outC->_L64.P_80[idx26].valid = kcg_true;
    outC->_L64.P_80[idx26].q_dir = Q_DIR_Reverse;
    outC->_L64.P_80[idx26].q_scale = Q_SCALE_10_cm_scale;
    outC->_L64.P_80[idx26].d_mamode = kcg_lit_int64(0);
    outC->_L64.P_80[idx26].m_mamode = M_MAMODE_On_Sight;
    outC->_L64.P_80[idx26].v_mamode = kcg_lit_int64(0);
    outC->_L64.P_80[idx26].l_mamode = kcg_lit_int64(0);
    outC->_L64.P_80[idx26].l_ackmamode = kcg_lit_int64(0);
    outC->_L64.P_80[idx26].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L64.LRBG = kcg_lit_int64(0);
  outC->_L64.referenceLocation = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37.Available = kcg_true;
  outC->_L37.Dist_Start = kcg_lit_int64(0);
  outC->_L37.Length = kcg_lit_int64(0);
  outC->_L37.Dist_Run = kcg_lit_int64(0);
  outC->_L37.Speed = kcg_lit_int64(0);
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  for (idx27 = 0; idx27 < 3; idx27++) {
    outC->_L34[idx27].Distance = kcg_lit_int64(0);
    outC->_L34[idx27].Mode = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L34[idx27].Speed = kcg_lit_int64(0);
    outC->_L34[idx27].Length = kcg_lit_int64(0);
    outC->_L34[idx27].Length_Ack = kcg_lit_int64(0);
  }
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28.MA_SSP_Gradient_Available = kcg_true;
  for (idx28 = 0; idx28 < 3; idx28++) {
    outC->_L28.Mode_Profile_On_Board[idx28].Distance = kcg_lit_int64(0);
    outC->_L28.Mode_Profile_On_Board[idx28].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L28.Mode_Profile_On_Board[idx28].Speed = kcg_lit_int64(0);
    outC->_L28.Mode_Profile_On_Board[idx28].Length = kcg_lit_int64(0);
    outC->_L28.Mode_Profile_On_Board[idx28].Length_Ack = kcg_lit_int64(0);
  }
  outC->_L28.Shunting_granted_By_RBC = kcg_true;
  outC->_L28.Trip_Order_Given_By_Balise = kcg_true;
  outC->_L28.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->_L28.Stop_If_In_shunting = kcg_true;
  outC->_L28.Stop_If_In_SR = kcg_true;
  outC->_L28.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->_L28.RBC_Authorized_SR = kcg_true;
  outC->_L28.Reversing_Data.Available = kcg_true;
  outC->_L28.Reversing_Data.Dist_Start = kcg_lit_int64(0);
  outC->_L28.Reversing_Data.Length = kcg_lit_int64(0);
  outC->_L28.Reversing_Data.Dist_Run = kcg_lit_int64(0);
  outC->_L28.Reversing_Data.Speed = kcg_lit_int64(0);
  outC->_L28.Emergency_Stop_Message_Received = kcg_true;
  outC->Loc_received_L1MA = kcg_true;
  outC->Loc_received_L2L3MA = kcg_true;
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->Loc_levelTransitions[idx29].is_set = kcg_true;
    outC->Loc_levelTransitions[idx29].transition.level = M_LEVEL_Level_0;
    outC->Loc_levelTransitions[idx29].transition.position = kcg_lit_int64(0);
    outC->Loc_levelTransitions[idx29].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Loc_levelTransitions[idx29].transition.immediateAck = kcg_true;
    outC->Loc_levelTransitions[idx29].transition.AckLength = kcg_lit_int64(0);
    outC->Loc_levelTransitions[idx29].LRBG = kcg_lit_int64(0);
    outC->Loc_levelTransitions[idx29].referenceLocation = kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 7; idx30++) {
    outC->Loc_conditionalTransitions[idx30].is_set = kcg_true;
    outC->Loc_conditionalTransitions[idx30].transition.level = M_LEVEL_Level_0;
    outC->Loc_conditionalTransitions[idx30].transition.position = kcg_lit_int64(0);
    outC->Loc_conditionalTransitions[idx30].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Loc_conditionalTransitions[idx30].transition.immediateAck = kcg_true;
    outC->Loc_conditionalTransitions[idx30].transition.AckLength = kcg_lit_int64(0);
    outC->Loc_conditionalTransitions[idx30].LRBG = kcg_lit_int64(0);
    outC->Loc_conditionalTransitions[idx30].referenceLocation = kcg_lit_int64(0);
  }
  outC->Loc_Emergency_Stop_Message_Received = kcg_true;
  outC->Loc_Reversing_Data.Available = kcg_true;
  outC->Loc_Reversing_Data.Dist_Start = kcg_lit_int64(0);
  outC->Loc_Reversing_Data.Length = kcg_lit_int64(0);
  outC->Loc_Reversing_Data.Dist_Run = kcg_lit_int64(0);
  outC->Loc_Reversing_Data.Speed = kcg_lit_int64(0);
  outC->Loc_RBC_Authorized_SR = kcg_true;
  outC->Loc_RCB_Ack_And_EB_Revocked = kcg_true;
  outC->Loc_Stop_If_In_SR = kcg_true;
  outC->Loc_Stop_If_In_Shunting = kcg_true;
  outC->Loc_List_BG_Related_To_SR_Empty = kcg_true;
  outC->Loc_Trip_Order_Given_By_Balise = kcg_true;
  outC->Loc_Shunting_Granted_By_RBC = kcg_true;
  for (idx31 = 0; idx31 < 3; idx31++) {
    outC->Loc_Mode_Profile_On_Board[idx31].Distance = kcg_lit_int64(0);
    outC->Loc_Mode_Profile_On_Board[idx31].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->Loc_Mode_Profile_On_Board[idx31].Speed = kcg_lit_int64(0);
    outC->Loc_Mode_Profile_On_Board[idx31].Length = kcg_lit_int64(0);
    outC->Loc_Mode_Profile_On_Board[idx31].Length_Ack = kcg_lit_int64(0);
  }
  outC->Loc_MA_SSP_Gradient_Available = kcg_true;
  for (idx32 = 0; idx32 < 7; idx32++) {
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].is_set =
      kcg_true;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].transition.level =
      M_LEVEL_Level_0;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].transition.position =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].transition.immediateAck =
      kcg_true;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].transition.AckLength =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx32].referenceLocation =
      kcg_lit_int64(0);
  }
  for (idx33 = 0; idx33 < 7; idx33++) {
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].is_set = kcg_true;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].transition.level =
      M_LEVEL_Level_0;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].transition.position =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].transition.immediateAck =
      kcg_true;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].transition.AckLength =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx33].referenceLocation =
      kcg_lit_int64(0);
  }
  outC->Data_From_Track_to_Level.receivedL2L3MA_track = kcg_true;
  outC->Data_From_Track_to_Level.receivedL1MA_track = kcg_true;
  outC->Data_From_Track_To_Mode.MA_SSP_Gradient_Available = kcg_true;
  for (idx34 = 0; idx34 < 3; idx34++) {
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx34].Distance =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx34].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx34].Speed =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx34].Length =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx34].Length_Ack =
      kcg_lit_int64(0);
  }
  outC->Data_From_Track_To_Mode.Shunting_granted_By_RBC = kcg_true;
  outC->Data_From_Track_To_Mode.Trip_Order_Given_By_Balise = kcg_true;
  outC->Data_From_Track_To_Mode.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->Data_From_Track_To_Mode.Stop_If_In_shunting = kcg_true;
  outC->Data_From_Track_To_Mode.Stop_If_In_SR = kcg_true;
  outC->Data_From_Track_To_Mode.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->Data_From_Track_To_Mode.RBC_Authorized_SR = kcg_true;
  outC->Data_From_Track_To_Mode.Reversing_Data.Available = kcg_true;
  outC->Data_From_Track_To_Mode.Reversing_Data.Dist_Start = kcg_lit_int64(0);
  outC->Data_From_Track_To_Mode.Reversing_Data.Length = kcg_lit_int64(0);
  outC->Data_From_Track_To_Mode.Reversing_Data.Dist_Run = kcg_lit_int64(0);
  outC->Data_From_Track_To_Mode.Reversing_Data.Speed = kcg_lit_int64(0);
  outC->Data_From_Track_To_Mode.Emergency_Stop_Message_Received = kcg_true;
  /* _L222=(InputManagement::Input_Messages#1)/ */
  Input_Messages_init_InputManagement(&outC->Context_Input_Messages_1);
  /* _L98=(InputManagement::Input_Modes#1)/ */
  Input_Modes_init_InputManagement(&outC->Context_Input_Modes_1);
  /* _L67=(InputManagement::Input_MA_SSP_Gradient#1)/ */
  Input_MA_SSP_Gradient_init_InputManagement(
    &outC->Context_Input_MA_SSP_Gradient_1);
  /* _L84=(InputManagement::Input_Level_Transition#1)/ */
  Input_Level_Transition_init_InputManagement(
    &outC->Context_Input_Level_Transition_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputTrackManagement_reset_InputManagement(
  outC_InputTrackManagement_InputManagement *outC)
{
  /* _L222=(InputManagement::Input_Messages#1)/ */
  Input_Messages_reset_InputManagement(&outC->Context_Input_Messages_1);
  /* _L98=(InputManagement::Input_Modes#1)/ */
  Input_Modes_reset_InputManagement(&outC->Context_Input_Modes_1);
  /* _L67=(InputManagement::Input_MA_SSP_Gradient#1)/ */
  Input_MA_SSP_Gradient_reset_InputManagement(
    &outC->Context_Input_MA_SSP_Gradient_1);
  /* _L84=(InputManagement::Input_Level_Transition#1)/ */
  Input_Level_Transition_reset_InputManagement(
    &outC->Context_Input_Level_Transition_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTrackManagement_InputManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

