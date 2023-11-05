/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputManagement.h"

/* InputManagement::Input_Level_Transition/ */
void Input_Level_Transition_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  outC_Input_Level_Transition_InputManagement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;

  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L134,
    Data_From_Track_Packets);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L133,
    &outC->_L134.P_46);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L132,
    &outC->_L134.P_41);
  outC->_L131 = outC->_L134.referenceLocation;
  outC->_L130 = outC->_L134.LRBG;
  /* _L126/ */
  for (idx = 0; idx < 7; idx++) {
    outC->_L126[idx] = outC->_L130;
  }
  /* _L127/ */
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L127[idx1] = outC->_L131;
  }
  /* _L129= */
  for (idx2 = 0; idx2 < 7; idx2++) {
    /* _L129=(InputManagement::NormalTransition)/ */
    NormalTransition_InputManagement(
      outC->_L126[idx2],
      outC->_L127[idx2],
      &outC->_L132[idx2],
      &outC->Context_NormalTransition[idx2]);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L129[idx2],
      &outC->Context_NormalTransition[idx2].One_Iter);
  }
  /* _L124= */
  for (idx3 = 0; idx3 < 7; idx3++) {
    /* _L124=(InputManagement::ConditionnalTransition)/ */
    ConditionnalTransition_InputManagement(
      outC->_L126[idx3],
      outC->_L127[idx3],
      &outC->_L133[idx3],
      &outC->Context_ConditionnalTransition[idx3]);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->_L124[idx3],
      &outC->Context_ConditionnalTransition[idx3].One_Transition);
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->level_transition_priority_table,
    &outC->_L129);
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    &outC->conditional_transition,
    &outC->_L124);
}

#ifndef KCG_USER_DEFINED_INIT
void Input_Level_Transition_init_InputManagement(
  outC_Input_Level_Transition_InputManagement *outC)
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

  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L134.P_12[idx2].valid = kcg_true;
    outC->_L134.P_12[idx2].q_dir = Q_DIR_Reverse;
    outC->_L134.P_12[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.P_12[idx2].v_main = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].v_loa = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].t_loa = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].l_section = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L134.P_12[idx2].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].l_endsection = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L134.P_12[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L134.P_12[idx2].t_endtimer = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L134.P_12[idx2].d_dp = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].v_releasedp = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L134.P_12[idx2].d_startol = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].t_ol = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].d_ol = kcg_lit_int32(0);
    outC->_L134.P_12[idx2].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L134.P_135.valid = kcg_true;
  outC->_L134.P_135.q_dir = Q_DIR_Reverse;
  outC->_L134.P_137.valid = kcg_true;
  outC->_L134.P_137.q_dir = Q_DIR_Reverse;
  outC->_L134.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L134.P_138.valid = kcg_true;
  outC->_L134.P_138.q_dir = Q_DIR_Reverse;
  outC->_L134.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L134.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L134.P_139.valid = kcg_true;
  outC->_L134.P_139.q_dir = Q_DIR_Reverse;
  outC->_L134.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L134.P_139.v_reverse = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L134.P_15[idx3].valid = kcg_true;
    outC->_L134.P_15[idx3].q_dir = Q_DIR_Reverse;
    outC->_L134.P_15[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.P_15[idx3].v_loa = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].t_loa = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].l_section = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L134.P_15[idx3].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].l_endsection = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L134.P_15[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L134.P_15[idx3].t_endtimer = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L134.P_15[idx3].d_dp = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].v_releasedp = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L134.P_15[idx3].d_startol = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].t_ol = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].d_ol = kcg_lit_int32(0);
    outC->_L134.P_15[idx3].v_releaseol = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L134.P_21[idx4].valid = kcg_true;
    outC->_L134.P_21[idx4].q_dir = Q_DIR_Reverse;
    outC->_L134.P_21[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.P_21[idx4].d_gradient = kcg_lit_int32(0);
    outC->_L134.P_21[idx4].q_gdir = Q_GDIR_downhill;
    outC->_L134.P_21[idx4].g_a = kcg_lit_int32(0);
  }
  outC->_L134.P_27.valid = kcg_true;
  outC->_L134.P_27.q_dir = Q_DIR_Reverse;
  outC->_L134.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.P_27.d_static = kcg_lit_int32(0);
  outC->_L134.P_27.v_static = kcg_lit_int32(0);
  outC->_L134.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L134.P_27.diffArray[idx5].valid = kcg_true;
    outC->_L134.P_27.diffArray[idx5].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L134.P_27.diffArray[idx5].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L134.P_27.diffArray[idx5].nc_diff = kcg_lit_int32(0);
    outC->_L134.P_27.diffArray[idx5].v_diff = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L134.P_27.SSPArray[idx7].valid = kcg_true;
    outC->_L134.P_27.SSPArray[idx7].d_static = kcg_lit_int32(0);
    outC->_L134.P_27.SSPArray[idx7].v_static = kcg_lit_int32(0);
    outC->_L134.P_27.SSPArray[idx7].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx6 = 0; idx6 < 7; idx6++) {
      outC->_L134.P_27.SSPArray[idx7].diffArray[idx6].valid = kcg_true;
      outC->_L134.P_27.SSPArray[idx7].diffArray[idx6].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L134.P_27.SSPArray[idx7].diffArray[idx6].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L134.P_27.SSPArray[idx7].diffArray[idx6].nc_diff = kcg_lit_int32(0);
      outC->_L134.P_27.SSPArray[idx7].diffArray[idx6].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L134.P_41[idx8].valid = kcg_true;
    outC->_L134.P_41[idx8].q_dir = Q_DIR_Reverse;
    outC->_L134.P_41[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.P_41[idx8].d_leveltr = kcg_lit_int32(0);
    outC->_L134.P_41[idx8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L134.P_41[idx8].nid_ntc = kcg_lit_int32(0);
    outC->_L134.P_41[idx8].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L134.P_46[idx9].valid = kcg_true;
    outC->_L134.P_46[idx9].q_dir = Q_DIR_Reverse;
    outC->_L134.P_46[idx9].m_leveltr = M_LEVELTR_Level_0;
    outC->_L134.P_46[idx9].nid_ntc = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L134.P_63[idx10].valid = kcg_true;
    outC->_L134.P_63[idx10].q_dir = Q_DIR_Reverse;
    outC->_L134.P_63[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L134.P_63[idx10].nid_c = kcg_lit_int32(0);
    outC->_L134.P_63[idx10].nid_bg = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L134.P_80[idx11].valid = kcg_true;
    outC->_L134.P_80[idx11].q_dir = Q_DIR_Reverse;
    outC->_L134.P_80[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L134.P_80[idx11].d_mamode = kcg_lit_int32(0);
    outC->_L134.P_80[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L134.P_80[idx11].v_mamode = kcg_lit_int32(0);
    outC->_L134.P_80[idx11].l_mamode = kcg_lit_int32(0);
    outC->_L134.P_80[idx11].l_ackmamode = kcg_lit_int32(0);
    outC->_L134.P_80[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L134.LRBG = kcg_lit_int32(0);
  outC->_L134.referenceLocation = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 7; idx12++) {
    outC->_L133[idx12].valid = kcg_true;
    outC->_L133[idx12].q_dir = Q_DIR_Reverse;
    outC->_L133[idx12].m_leveltr = M_LEVELTR_Level_0;
    outC->_L133[idx12].nid_ntc = kcg_lit_int32(0);
  }
  for (idx13 = 0; idx13 < 7; idx13++) {
    outC->_L132[idx13].valid = kcg_true;
    outC->_L132[idx13].q_dir = Q_DIR_Reverse;
    outC->_L132[idx13].q_scale = Q_SCALE_10_cm_scale;
    outC->_L132[idx13].d_leveltr = kcg_lit_int32(0);
    outC->_L132[idx13].m_leveltr = M_LEVELTR_Level_0;
    outC->_L132[idx13].nid_ntc = kcg_lit_int32(0);
    outC->_L132[idx13].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L131 = kcg_lit_int32(0);
  outC->_L130 = kcg_lit_int32(0);
  for (idx14 = 0; idx14 < 7; idx14++) {
    outC->_L129[idx14].is_set = kcg_true;
    outC->_L129[idx14].transition.level = M_LEVEL_Level_0;
    outC->_L129[idx14].transition.position = kcg_lit_int32(0);
    outC->_L129[idx14].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L129[idx14].transition.immediateAck = kcg_true;
    outC->_L129[idx14].transition.AckLength = kcg_lit_int32(0);
    outC->_L129[idx14].LRBG = kcg_lit_int32(0);
    outC->_L129[idx14].referenceLocation = kcg_lit_int32(0);
  }
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L127[idx15] = kcg_lit_int32(0);
  }
  for (idx16 = 0; idx16 < 7; idx16++) {
    outC->_L126[idx16] = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L124[idx17].is_set = kcg_true;
    outC->_L124[idx17].transition.level = M_LEVEL_Level_0;
    outC->_L124[idx17].transition.position = kcg_lit_int32(0);
    outC->_L124[idx17].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L124[idx17].transition.immediateAck = kcg_true;
    outC->_L124[idx17].transition.AckLength = kcg_lit_int32(0);
    outC->_L124[idx17].LRBG = kcg_lit_int32(0);
    outC->_L124[idx17].referenceLocation = kcg_lit_int32(0);
  }
  for (idx18 = 0; idx18 < 7; idx18++) {
    outC->level_transition_priority_table[idx18].is_set = kcg_true;
    outC->level_transition_priority_table[idx18].transition.level = M_LEVEL_Level_0;
    outC->level_transition_priority_table[idx18].transition.position =
      kcg_lit_int32(0);
    outC->level_transition_priority_table[idx18].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->level_transition_priority_table[idx18].transition.immediateAck = kcg_true;
    outC->level_transition_priority_table[idx18].transition.AckLength =
      kcg_lit_int32(0);
    outC->level_transition_priority_table[idx18].LRBG = kcg_lit_int32(0);
    outC->level_transition_priority_table[idx18].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx19 = 0; idx19 < 7; idx19++) {
    outC->conditional_transition[idx19].is_set = kcg_true;
    outC->conditional_transition[idx19].transition.level = M_LEVEL_Level_0;
    outC->conditional_transition[idx19].transition.position = kcg_lit_int32(0);
    outC->conditional_transition[idx19].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->conditional_transition[idx19].transition.immediateAck = kcg_true;
    outC->conditional_transition[idx19].transition.AckLength = kcg_lit_int32(0);
    outC->conditional_transition[idx19].LRBG = kcg_lit_int32(0);
    outC->conditional_transition[idx19].referenceLocation = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    /* _L124=(InputManagement::ConditionnalTransition)/ */
    ConditionnalTransition_init_InputManagement(
      &outC->Context_ConditionnalTransition[idx1]);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L129=(InputManagement::NormalTransition)/ */
    NormalTransition_init_InputManagement(&outC->Context_NormalTransition[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Level_Transition_reset_InputManagement(
  outC_Input_Level_Transition_InputManagement *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx1 = 0; idx1 < 7; idx1++) {
    /* _L124=(InputManagement::ConditionnalTransition)/ */
    ConditionnalTransition_reset_InputManagement(
      &outC->Context_ConditionnalTransition[idx1]);
  }
  for (idx = 0; idx < 7; idx++) {
    /* _L129=(InputManagement::NormalTransition)/ */
    NormalTransition_reset_InputManagement(
      &outC->Context_NormalTransition[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Level_Transition_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

