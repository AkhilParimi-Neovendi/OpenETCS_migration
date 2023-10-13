/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input.h"

/* Input/ */
void Input(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Cab_In/ */
  cab_ID_T_TIU_Types_Pkg Cab_In,
  /* driver_level_transition_In/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ERTMS_capabilities_In/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_Input *outC)
{
  outC->_L101 = MemorizedLevelIn;
  outC->MemorizedLevel = outC->_L101;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L85,
    Data_From_Track_Packets);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L84,
    Data_From_Track_Messages);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L95,
    Data_From_Track_MASSPGradient);
  /* _L76=(InputManagement::InputTrackManagement#1)/ */
  InputTrackManagement_InputManagement(
    &outC->_L85,
    &outC->_L84,
    &outC->_L95,
    &outC->Context_InputTrackManagement_1);
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->_L76,
    &outC->Context_InputTrackManagement_1.Data_From_Track_To_Mode);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L100,
    &outC->Context_InputTrackManagement_1.Data_From_Track_to_Level);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Track_to_Level,
    &outC->_L100);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&outC->_L97, Data_From_STM);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(
    &outC->Data_From_STM_to_Mode,
    &outC->_L97);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->_L96,
    Data_From_F2_Functions);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->Data_From_F2_Functions_to_Mode,
    &outC->_L96);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L90,
    ERTMS_capabilities_In);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L74,
    driver_level_transition_In);
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L69, Data_From_DMI);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L68,
    Data_From_Localisation);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L64,
    Data_From_Speed_and_Supervision);
  outC->_L49 = Cab_In;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L48,
    Data_From_TIU);
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Track_To_Mode,
    &outC->_L76);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->Data_From_TIU_To_Mode,
    &outC->_L48);
  /* _L57=(InputManagement::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_InputManagement(
    &outC->_L64,
    &outC->Context_InputSpeedAndSupervision_1);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L57,
    &outC->Context_InputSpeedAndSupervision_1.Data_From_Speed_and_Supervision_To_Mode);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Speed_and_Supervision_To_Mode,
    &outC->_L57);
  /* _L67=(InputManagement::InputLocalisation#1)/ */
  InputLocalisation_InputManagement(
    &outC->_L68,
    &outC->Context_InputLocalisation_1);
  outC->_L67 = outC->Context_InputLocalisation_1.train_standstill;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L66,
    &outC->Context_InputLocalisation_1.trainPosition);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L65,
    &outC->Context_InputLocalisation_1.Data_From_Localisation_To_Mode);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Localisation_To_Mode,
    &outC->_L65);
  /* _L72=(InputManagement::InputDMI#1)/ */
  InputDMI_InputManagement(&outC->_L69, &outC->_L74, &outC->Context_InputDMI_1);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L72,
    &outC->Context_InputDMI_1.driver_level_transition);
  outC->_L71 = outC->Context_InputDMI_1.Level_Ack;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L70,
    &outC->Context_InputDMI_1.Data_From_DMI_To_Mode);
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    &outC->Data_From_DMI_To_Mode,
    &outC->_L70);
  outC->Cab = outC->_L49;
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->ERTMS_capabilities,
    &outC->_L90);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->trainPosition,
    &outC->_L66);
  outC->levelAck = outC->_L71;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->driver_level_transition,
    &outC->_L72);
  outC->train_standstill = outC->_L67;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_init(outC_Input *outC)
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

  outC->_L101 = M_LEVEL_Level_0;
  for (idx = 0; idx < 7; idx++) {
    outC->_L100.level_transition_priority_table[idx].is_set = kcg_true;
    outC->_L100.level_transition_priority_table[idx].transition.level =
      M_LEVEL_Level_0;
    outC->_L100.level_transition_priority_table[idx].transition.position =
      kcg_lit_int64(0);
    outC->_L100.level_transition_priority_table[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L100.level_transition_priority_table[idx].transition.immediateAck =
      kcg_true;
    outC->_L100.level_transition_priority_table[idx].transition.AckLength =
      kcg_lit_int64(0);
    outC->_L100.level_transition_priority_table[idx].LRBG = kcg_lit_int64(0);
    outC->_L100.level_transition_priority_table[idx].referenceLocation =
      kcg_lit_int64(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L100.conditionnalTransition[idx1].is_set = kcg_true;
    outC->_L100.conditionnalTransition[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L100.conditionnalTransition[idx1].transition.position = kcg_lit_int64(0);
    outC->_L100.conditionnalTransition[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L100.conditionnalTransition[idx1].transition.immediateAck = kcg_true;
    outC->_L100.conditionnalTransition[idx1].transition.AckLength =
      kcg_lit_int64(0);
    outC->_L100.conditionnalTransition[idx1].LRBG = kcg_lit_int64(0);
    outC->_L100.conditionnalTransition[idx1].referenceLocation = kcg_lit_int64(0);
  }
  outC->_L100.receivedL2L3MA_track = kcg_true;
  outC->_L100.receivedL1MA_track = kcg_true;
  outC->_L97.Interface_To_National_System = kcg_true;
  outC->_L97.National_trip_Order = kcg_true;
  outC->_L96.Common_Errors.linkedBGError = kcg_true;
  outC->_L96.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L96.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L96.Common_Errors.radioSequenceError = kcg_true;
  outC->_L96.Common_Errors.tNvContactError = kcg_true;
  outC->_L96.Common_Errors.otherTimingError = kcg_true;
  outC->_L96.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L96.Common_Errors.nid_c = kcg_lit_int64(0);
  outC->_L96.Common_Errors.nid_errorbg = kcg_lit_int64(0);
  outC->_L96.Failure_Occured = kcg_true;
  outC->_L96.Continue_Shunting_Active = kcg_true;
  outC->_L96.Stop_Shunting_Stored = kcg_true;
  outC->_L95.P12_received = kcg_true;
  outC->_L95.P15_received = kcg_true;
  outC->_L95.P21_received = kcg_true;
  outC->_L95.P27_received = kcg_true;
  outC->_L90.NTC = kcg_true;
  outC->_L90.L0 = kcg_true;
  outC->_L90.L1 = kcg_true;
  outC->_L90.L2 = kcg_true;
  outC->_L90.L3 = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L85.P_12[idx2].valid = kcg_true;
    outC->_L85.P_12[idx2].q_dir = Q_DIR_Reverse;
    outC->_L85.P_12[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.P_12[idx2].v_main = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].v_loa = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].t_loa = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].l_section = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L85.P_12[idx2].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].l_endsection = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L85.P_12[idx2].t_sectiontimer = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L85.P_12[idx2].t_endtimer = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L85.P_12[idx2].d_dp = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].v_releasedp = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L85.P_12[idx2].d_startol = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].t_ol = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].d_ol = kcg_lit_int64(0);
    outC->_L85.P_12[idx2].v_releaseol = kcg_lit_int64(0);
  }
  outC->_L85.P_135.valid = kcg_true;
  outC->_L85.P_135.q_dir = Q_DIR_Reverse;
  outC->_L85.P_137.valid = kcg_true;
  outC->_L85.P_137.q_dir = Q_DIR_Reverse;
  outC->_L85.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L85.P_138.valid = kcg_true;
  outC->_L85.P_138.q_dir = Q_DIR_Reverse;
  outC->_L85.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L85.P_138.d_startreverse = kcg_lit_int64(0);
  outC->_L85.P_138.l_reversearea = kcg_lit_int64(0);
  outC->_L85.P_139.valid = kcg_true;
  outC->_L85.P_139.q_dir = Q_DIR_Reverse;
  outC->_L85.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L85.P_139.d_reverse = kcg_lit_int64(0);
  outC->_L85.P_139.v_reverse = kcg_lit_int64(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L85.P_15[idx3].valid = kcg_true;
    outC->_L85.P_15[idx3].q_dir = Q_DIR_Reverse;
    outC->_L85.P_15[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.P_15[idx3].v_loa = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].t_loa = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].l_section = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L85.P_15[idx3].t_sectiontimer_k = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].d_sectiontimerstoploc_k = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].l_endsection = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L85.P_15[idx3].t_sectiontimer = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].d_sectiontimerstoploc = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L85.P_15[idx3].t_endtimer = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].d_endtimerstartloc = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L85.P_15[idx3].d_dp = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].v_releasedp = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L85.P_15[idx3].d_startol = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].t_ol = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].d_ol = kcg_lit_int64(0);
    outC->_L85.P_15[idx3].v_releaseol = kcg_lit_int64(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L85.P_21[idx4].valid = kcg_true;
    outC->_L85.P_21[idx4].q_dir = Q_DIR_Reverse;
    outC->_L85.P_21[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.P_21[idx4].d_gradient = kcg_lit_int64(0);
    outC->_L85.P_21[idx4].q_gdir = Q_GDIR_downhill;
    outC->_L85.P_21[idx4].g_a = kcg_lit_int64(0);
  }
  outC->_L85.P_27.valid = kcg_true;
  outC->_L85.P_27.q_dir = Q_DIR_Reverse;
  outC->_L85.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L85.P_27.d_static = kcg_lit_int64(0);
  outC->_L85.P_27.v_static = kcg_lit_int64(0);
  outC->_L85.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L85.P_27.diffArray[idx5].valid = kcg_true;
    outC->_L85.P_27.diffArray[idx5].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L85.P_27.diffArray[idx5].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L85.P_27.diffArray[idx5].nc_diff = kcg_lit_int64(0);
    outC->_L85.P_27.diffArray[idx5].v_diff = kcg_lit_int64(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L85.P_27.SSPArray[idx7].valid = kcg_true;
    outC->_L85.P_27.SSPArray[idx7].d_static = kcg_lit_int64(0);
    outC->_L85.P_27.SSPArray[idx7].v_static = kcg_lit_int64(0);
    outC->_L85.P_27.SSPArray[idx7].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx6 = 0; idx6 < 7; idx6++) {
      outC->_L85.P_27.SSPArray[idx7].diffArray[idx6].valid = kcg_true;
      outC->_L85.P_27.SSPArray[idx7].diffArray[idx6].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L85.P_27.SSPArray[idx7].diffArray[idx6].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L85.P_27.SSPArray[idx7].diffArray[idx6].nc_diff = kcg_lit_int64(0);
      outC->_L85.P_27.SSPArray[idx7].diffArray[idx6].v_diff = kcg_lit_int64(0);
    }
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L85.P_41[idx8].valid = kcg_true;
    outC->_L85.P_41[idx8].q_dir = Q_DIR_Reverse;
    outC->_L85.P_41[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.P_41[idx8].d_leveltr = kcg_lit_int64(0);
    outC->_L85.P_41[idx8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L85.P_41[idx8].nid_ntc = kcg_lit_int64(0);
    outC->_L85.P_41[idx8].l_ackleveltr = kcg_lit_int64(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L85.P_46[idx9].valid = kcg_true;
    outC->_L85.P_46[idx9].q_dir = Q_DIR_Reverse;
    outC->_L85.P_46[idx9].m_leveltr = M_LEVELTR_Level_0;
    outC->_L85.P_46[idx9].nid_ntc = kcg_lit_int64(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L85.P_63[idx10].valid = kcg_true;
    outC->_L85.P_63[idx10].q_dir = Q_DIR_Reverse;
    outC->_L85.P_63[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L85.P_63[idx10].nid_c = kcg_lit_int64(0);
    outC->_L85.P_63[idx10].nid_bg = kcg_lit_int64(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L85.P_80[idx11].valid = kcg_true;
    outC->_L85.P_80[idx11].q_dir = Q_DIR_Reverse;
    outC->_L85.P_80[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L85.P_80[idx11].d_mamode = kcg_lit_int64(0);
    outC->_L85.P_80[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L85.P_80[idx11].v_mamode = kcg_lit_int64(0);
    outC->_L85.P_80[idx11].l_mamode = kcg_lit_int64(0);
    outC->_L85.P_80[idx11].l_ackmamode = kcg_lit_int64(0);
    outC->_L85.P_80[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L85.LRBG = kcg_lit_int64(0);
  outC->_L85.referenceLocation = kcg_lit_int64(0);
  outC->_L84.Mess_15 = kcg_true;
  outC->_L84.Mess_16 = kcg_true;
  outC->_L84.Mess_2 = kcg_true;
  outC->_L84.Mess_27 = kcg_true;
  outC->_L84.Mess_28 = kcg_true;
  outC->_L84.Mess_6 = kcg_true;
  outC->_L76.MA_SSP_Gradient_Available = kcg_true;
  for (idx12 = 0; idx12 < 3; idx12++) {
    outC->_L76.Mode_Profile_On_Board[idx12].Distance = kcg_lit_int64(0);
    outC->_L76.Mode_Profile_On_Board[idx12].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L76.Mode_Profile_On_Board[idx12].Speed = kcg_lit_int64(0);
    outC->_L76.Mode_Profile_On_Board[idx12].Length = kcg_lit_int64(0);
    outC->_L76.Mode_Profile_On_Board[idx12].Length_Ack = kcg_lit_int64(0);
  }
  outC->_L76.Shunting_granted_By_RBC = kcg_true;
  outC->_L76.Trip_Order_Given_By_Balise = kcg_true;
  outC->_L76.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->_L76.Stop_If_In_shunting = kcg_true;
  outC->_L76.Stop_If_In_SR = kcg_true;
  outC->_L76.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->_L76.RBC_Authorized_SR = kcg_true;
  outC->_L76.Reversing_Data.Available = kcg_true;
  outC->_L76.Reversing_Data.Dist_Start = kcg_lit_int64(0);
  outC->_L76.Reversing_Data.Length = kcg_lit_int64(0);
  outC->_L76.Reversing_Data.Dist_Run = kcg_lit_int64(0);
  outC->_L76.Reversing_Data.Speed = kcg_lit_int64(0);
  outC->_L76.Emergency_Stop_Message_Received = kcg_true;
  outC->_L74.is_set = kcg_true;
  outC->_L74.transition.level = M_LEVEL_Level_0;
  outC->_L74.transition.position = kcg_lit_int64(0);
  outC->_L74.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L74.transition.immediateAck = kcg_true;
  outC->_L74.transition.AckLength = kcg_lit_int64(0);
  outC->_L74.LRBG = kcg_lit_int64(0);
  outC->_L74.referenceLocation = kcg_lit_int64(0);
  outC->_L72.is_set = kcg_true;
  outC->_L72.transition.level = M_LEVEL_Level_0;
  outC->_L72.transition.position = kcg_lit_int64(0);
  outC->_L72.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L72.transition.immediateAck = kcg_true;
  outC->_L72.transition.AckLength = kcg_lit_int64(0);
  outC->_L72.LRBG = kcg_lit_int64(0);
  outC->_L72.referenceLocation = kcg_lit_int64(0);
  outC->_L71 = kcg_true;
  outC->_L70.Ack_LS = kcg_true;
  outC->_L70.Ack_OS = kcg_true;
  outC->_L70.Ack_RV = kcg_true;
  outC->_L70.Ack_SH = kcg_true;
  outC->_L70.Ack_SN = kcg_true;
  outC->_L70.Ack_SR = kcg_true;
  outC->_L70.Ack_TR = kcg_true;
  outC->_L70.Ack_UN = kcg_true;
  outC->_L70.Req_Exit_SH = kcg_true;
  outC->_L70.Req_NL = kcg_true;
  outC->_L70.Req_Override = kcg_true;
  outC->_L70.Req_SH = kcg_true;
  outC->_L70.Req_Start = kcg_true;
  outC->_L70.ETCS_Isolated = kcg_true;
  outC->_L69.valid = kcg_true;
  outC->_L69.DriverAck.valid = kcg_true;
  outC->_L69.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L69.DriverAck.acknowledgement = kcg_true;
  outC->_L69.DriverRequest.valid = kcg_true;
  outC->_L69.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L69.DriverRequest.Req_NL = kcg_true;
  outC->_L69.DriverRequest.Req_Override = kcg_true;
  outC->_L69.DriverRequest.Req_SH = kcg_true;
  outC->_L69.DriverRequest.Req_Start = kcg_true;
  outC->_L69.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L69.LevelAck = kcg_true;
  outC->_L68.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L68.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L68.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L68.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L68.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L68.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L68.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L68.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L68.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L68.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L68.PositionErrors.bg.valid = kcg_true;
  outC->_L68.PositionErrors.bg.nid_c = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.nid_bg = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L68.PositionErrors.bg.location.nominal = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.location.d_min = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.location.d_max = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L68.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L68.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L68.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx13 = 0; idx13 < 33; idx13++) {
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].valid = kcg_true;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_dir =
      Q_DIR_Reverse;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].d_link =
      kcg_lit_int64(0);
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].nid_c =
      kcg_lit_int64(0);
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].nid_bg =
      kcg_lit_int64(0);
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L68.PositionErrors.bg.infoFromPassing.linkedBGs[idx13].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L68.PositionErrors.bg.missed = kcg_true;
  outC->_L68.Train_Position.valid = kcg_true;
  outC->_L68.Train_Position.timestamp = kcg_lit_int64(0);
  outC->_L68.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L68.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L68.Train_Position.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L68.Train_Position.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L68.Train_Position.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L68.Train_Position.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L68.Train_Position.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L68.Train_Position.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.valid = kcg_true;
  outC->_L68.Train_Position.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L68.Train_Position.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(
      0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L68.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L68.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].valid =
      kcg_true;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L68.Train_Position.LRBG.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L68.Train_Position.LRBG.missed = kcg_true;
  outC->_L68.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L68.Train_Position.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L68.Train_Position.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L68.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L68.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].valid =
      kcg_true;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int64(0);
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L68.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L68.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L68.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L68.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L68.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L68.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L68.Train_Position.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L68.Train_Position.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L68.Train_Position.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L68.Train_Speed = kcg_lit_int64(0);
  outC->_L68.Train_Standstill = kcg_true;
  outC->_L67 = kcg_true;
  outC->_L66.valid = kcg_true;
  outC->_L66.timestamp = kcg_lit_int64(0);
  outC->_L66.trainPositionIsUnknown = kcg_true;
  outC->_L66.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L66.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L66.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L66.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L66.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L66.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L66.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L66.LRBG.valid = kcg_true;
  outC->_L66.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L66.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L66.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L66.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L66.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L66.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L66.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L66.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L66.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L66.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L66.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L66.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L66.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L66.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L66.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L66.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L66.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L66.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].valid = kcg_true;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].nid_LRBG = kcg_lit_int64(0);
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_dir = Q_DIR_Reverse;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_scale = Q_SCALE_10_cm_scale;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].d_link = kcg_lit_int64(0);
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].nid_c = kcg_lit_int64(0);
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].nid_bg = kcg_lit_int64(0);
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L66.LRBG.infoFromPassing.linkedBGs[idx16].q_locacc = kcg_lit_int64(0);
  }
  outC->_L66.LRBG.missed = kcg_true;
  outC->_L66.prvLRBG.valid = kcg_true;
  outC->_L66.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L66.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L66.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L66.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L66.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L66.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L66.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L66.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L66.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(0);
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L66.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx17 = 0; idx17 < 33; idx17++) {
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].valid = kcg_true;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_LRBG = kcg_lit_int64(0);
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_dir = Q_DIR_Reverse;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].d_link = kcg_lit_int64(0);
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_c = kcg_lit_int64(0);
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].nid_bg = kcg_lit_int64(0);
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L66.prvLRBG.infoFromPassing.linkedBGs[idx17].q_locacc = kcg_lit_int64(0);
  }
  outC->_L66.prvLRBG.missed = kcg_true;
  outC->_L66.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L66.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L66.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L66.linkingIsUsedOnboard = kcg_true;
  outC->_L66.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L66.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L66.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L65.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L65.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L65.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L65.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L65.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L65.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L65.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L65.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L65.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L65.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L65.PositionErrors.bg.valid = kcg_true;
  outC->_L65.PositionErrors.bg.nid_c = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.nid_bg = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L65.PositionErrors.bg.location.nominal = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.location.d_min = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.location.d_max = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L65.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L65.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(
      0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L65.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx18 = 0; idx18 < 33; idx18++) {
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].valid = kcg_true;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_dir =
      Q_DIR_Reverse;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].d_link =
      kcg_lit_int64(0);
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].nid_c =
      kcg_lit_int64(0);
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].nid_bg =
      kcg_lit_int64(0);
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65.PositionErrors.bg.infoFromPassing.linkedBGs[idx18].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L65.PositionErrors.bg.missed = kcg_true;
  outC->_L65.Train_Position.valid = kcg_true;
  outC->_L65.Train_Position.timestamp = kcg_lit_int64(0);
  outC->_L65.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L65.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L65.Train_Position.trainPosition.nominal = kcg_lit_int64(0);
  outC->_L65.Train_Position.trainPosition.d_min = kcg_lit_int64(0);
  outC->_L65.Train_Position.trainPosition.d_max = kcg_lit_int64(0);
  outC->_L65.Train_Position.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->_L65.Train_Position.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->_L65.Train_Position.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.valid = kcg_true;
  outC->_L65.Train_Position.LRBG.nid_c = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.nid_bg = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L65.Train_Position.LRBG.location.nominal = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.location.d_min = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.location.d_max = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(
      0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L65.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L65.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx19 = 0; idx19 < 33; idx19++) {
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].valid =
      kcg_true;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_dir =
      Q_DIR_Reverse;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].d_link =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].nid_c =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].nid_bg =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65.Train_Position.LRBG.infoFromPassing.linkedBGs[idx19].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L65.Train_Position.LRBG.missed = kcg_true;
  outC->_L65.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L65.Train_Position.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L65.Train_Position.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L65.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L65.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].valid =
      kcg_true;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_LRBG =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].d_link =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_c =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].nid_bg =
      kcg_lit_int64(0);
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L65.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx20].q_locacc =
      kcg_lit_int64(0);
  }
  outC->_L65.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L65.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L65.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L65.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L65.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L65.Train_Position.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->_L65.Train_Position.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L65.Train_Position.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->_L65.Train_Speed = kcg_lit_int64(0);
  outC->_L65.Train_Standstill = kcg_true;
  outC->_L64.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L64.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L64.Override_Function_Active = kcg_true;
  outC->_L64.EOA_Antenna_Overpass = kcg_true;
  outC->_L64.EOA_Front_End = kcg_true;
  outC->_L64.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L57.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L57.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L57.Override_Function_Active = kcg_true;
  outC->_L57.EOA_Antenna_Overpass = kcg_true;
  outC->_L57.EOA_Front_End = kcg_true;
  outC->_L57.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L49 = CabUndefined_TIU_Types_Pkg;
  outC->_L48.train_status.valid = kcg_true;
  outC->_L48.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L48.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L48.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L48.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L48.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L48.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L48.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L48.brake_status.valid = kcg_true;
  outC->_L48.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L48.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L48.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L48.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L48.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L48.brake_pressure.valid = kcg_true;
  outC->_L48.brake_pressure.pressure = kcg_lit_int64(0);
  outC->_L48.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L48.train_data_info.valid = kcg_true;
  outC->_L48.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L48.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L48.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L48.train_data_info.trainLength = kcg_lit_int64(0);
  outC->_L48.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->_L48.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->_L48.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L48.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L48.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L48.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->_L48.train_data_info.numberNationalSystems = kcg_lit_int64(0);
  for (idx21 = 0; idx21 < 5; idx21++) {
    outC->_L48.train_data_info.nationSystems[idx21] = kcg_lit_int64(0);
  }
  outC->_L48.train_data_info.numberTractionSystems = kcg_lit_int64(0);
  for (idx22 = 0; idx22 < 4; idx22++) {
    outC->_L48.train_data_info.tractionSystem[idx22].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L48.train_data_info.tractionSystem[idx22].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->_L48.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L48.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L48.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L48.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->_L48.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->_L48.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L48.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->_L48.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->Data_From_Track_To_Mode.MA_SSP_Gradient_Available = kcg_true;
  for (idx23 = 0; idx23 < 3; idx23++) {
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx23].Distance =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx23].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx23].Speed =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx23].Length =
      kcg_lit_int64(0);
    outC->Data_From_Track_To_Mode.Mode_Profile_On_Board[idx23].Length_Ack =
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
  outC->Data_From_TIU_To_Mode.train_status.valid = kcg_true;
  outC->Data_From_TIU_To_Mode.train_status.m_sleeping_st =
    signal_active_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_cab_st =
    cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_status.m_traction_st =
    traction_on_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_status.valid = kcg_true;
  outC->Data_From_TIU_To_Mode.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.brake_pressure.valid = kcg_true;
  outC->Data_From_TIU_To_Mode.brake_pressure.pressure = kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.train_data_entry_type =
    fixed_entry_type_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.train_data_info.valid = kcg_true;
  outC->Data_From_TIU_To_Mode.train_data_info.acknowledgedByDriver = kcg_true;
  outC->Data_From_TIU_To_Mode.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->Data_From_TIU_To_Mode.train_data_info.cantDeficientcy =
    NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->Data_From_TIU_To_Mode.train_data_info.trainLength = kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.train_data_info.brakePerctage = kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.train_data_info.maxTrainSpeed = kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->Data_From_TIU_To_Mode.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->Data_From_TIU_To_Mode.train_data_info.airtightSystem =
    M_AIRTIGHT_Not_fitted;
  outC->Data_From_TIU_To_Mode.train_data_info.axleNumber = kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.train_data_info.numberNationalSystems =
    kcg_lit_int64(0);
  for (idx24 = 0; idx24 < 5; idx24++) {
    outC->Data_From_TIU_To_Mode.train_data_info.nationSystems[idx24] =
      kcg_lit_int64(0);
  }
  outC->Data_From_TIU_To_Mode.train_data_info.numberTractionSystems =
    kcg_lit_int64(0);
  for (idx25 = 0; idx25 < 4; idx25++) {
    outC->Data_From_TIU_To_Mode.train_data_info.tractionSystem[idx25].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->Data_From_TIU_To_Mode.train_data_info.tractionSystem[idx25].nid_ctraction =
      kcg_lit_int64(0);
  }
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int64(0);
  outC->Data_From_TIU_To_Mode.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int64(0);
  outC->Data_From_STM_to_Mode.Interface_To_National_System = kcg_true;
  outC->Data_From_STM_to_Mode.National_trip_Order = kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.Estim_front_End_overpass_SR_Dist =
    kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.Estim_Front_End_Rear_SSP =
    kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.Override_Function_Active =
    kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.EOA_Antenna_Overpass = kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.EOA_Front_End = kcg_true;
  outC->Data_From_Speed_and_Supervision_To_Mode.Train_Speed_Under_Overide_Limit =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->Data_From_Localisation_To_Mode.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.outOfMemSpace = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.passedBG_foundNotWhereExpected =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.positionCalculation_inconsistent =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.linkedBGMissed = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.BGpassedInUnexpectedDirection =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.BG_LinkingConsistencyError =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.twoConsecutiveLinkedBGs_missed =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.doubleRepositioningError =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.nid_c = kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.nid_bg = kcg_lit_int64(
      0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.location.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx26 = 0; idx26 < 33; idx26++) {
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].nid_LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].d_link =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].nid_c =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].nid_bg =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.PositionErrors.bg.infoFromPassing.linkedBGs[idx26].q_locacc =
      kcg_lit_int64(0);
  }
  outC->Data_From_Localisation_To_Mode.PositionErrors.bg.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.timestamp = kcg_lit_int64(
      0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPositionIsUnknown =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.trainPosition.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.estimatedFrontEndPosition =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.minSafeFrontEndPosition =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.maxSafeFrontEndPostion =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.location.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx27 = 0; idx27 < 33; idx27++) {
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].nid_LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].d_link =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].nid_c =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].nid_bg =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.infoFromPassing.linkedBGs[idx27].q_locacc =
      kcg_lit_int64(0);
  }
  outC->Data_From_Localisation_To_Mode.Train_Position.LRBG.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.valid = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.location.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.seqNoOnTrack =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx28 = 0; idx28 < 33; idx28++) {
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].valid =
      kcg_true;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].nid_LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_dir =
      Q_DIR_Reverse;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_scale =
      Q_SCALE_10_cm_scale;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].d_link =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].nid_c =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].nid_bg =
      kcg_lit_int64(0);
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx28].q_locacc =
      kcg_lit_int64(0);
  }
  outC->Data_From_Localisation_To_Mode.Train_Position.prvLRBG.missed = kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.nominalOrReverseToLRBG =
    Q_DLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainOrientationToLRBG =
    Q_DIRLRBG_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.trainRunningDirectionToLRBG =
    Q_DIRTRAIN_Reverse;
  outC->Data_From_Localisation_To_Mode.Train_Position.linkingIsUsedOnboard =
    kcg_true;
  outC->Data_From_Localisation_To_Mode.Train_Position.estimatedRearEndPosition =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.minSafeRearEndPosition =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Position.maxSafeRearEndPosition =
    kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Speed = kcg_lit_int64(0);
  outC->Data_From_Localisation_To_Mode.Train_Standstill = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.linkedBGError = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.unlinkedBGError = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.BG_versionIncompatible =
    kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.radioSequenceError =
    kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.tNvContactError = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.otherTimingError = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.radioMessageConsistencyError =
    kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.nid_c = kcg_lit_int64(0);
  outC->Data_From_F2_Functions_to_Mode.Common_Errors.nid_errorbg =
    kcg_lit_int64(0);
  outC->Data_From_F2_Functions_to_Mode.Failure_Occured = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Continue_Shunting_Active = kcg_true;
  outC->Data_From_F2_Functions_to_Mode.Stop_Shunting_Stored = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_LS = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_OS = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_RV = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SN = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_SR = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_TR = kcg_true;
  outC->Data_From_DMI_To_Mode.Ack_UN = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Exit_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_NL = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Override = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_SH = kcg_true;
  outC->Data_From_DMI_To_Mode.Req_Start = kcg_true;
  outC->Data_From_DMI_To_Mode.ETCS_Isolated = kcg_true;
  outC->Cab = CabUndefined_TIU_Types_Pkg;
  outC->MemorizedLevel = M_LEVEL_Level_0;
  for (idx29 = 0; idx29 < 7; idx29++) {
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].is_set =
      kcg_true;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].transition.level =
      M_LEVEL_Level_0;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].transition.position =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].transition.immediateAck =
      kcg_true;
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].transition.AckLength =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.level_transition_priority_table[idx29].referenceLocation =
      kcg_lit_int64(0);
  }
  for (idx30 = 0; idx30 < 7; idx30++) {
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].is_set = kcg_true;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].transition.level =
      M_LEVEL_Level_0;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].transition.position =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].transition.immediateAck =
      kcg_true;
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].transition.AckLength =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].LRBG =
      kcg_lit_int64(0);
    outC->Data_From_Track_to_Level.conditionnalTransition[idx30].referenceLocation =
      kcg_lit_int64(0);
  }
  outC->Data_From_Track_to_Level.receivedL2L3MA_track = kcg_true;
  outC->Data_From_Track_to_Level.receivedL1MA_track = kcg_true;
  outC->ERTMS_capabilities.NTC = kcg_true;
  outC->ERTMS_capabilities.L0 = kcg_true;
  outC->ERTMS_capabilities.L1 = kcg_true;
  outC->ERTMS_capabilities.L2 = kcg_true;
  outC->ERTMS_capabilities.L3 = kcg_true;
  outC->trainPosition.valid = kcg_true;
  outC->trainPosition.timestamp = kcg_lit_int64(0);
  outC->trainPosition.trainPositionIsUnknown = kcg_true;
  outC->trainPosition.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->trainPosition.trainPosition.nominal = kcg_lit_int64(0);
  outC->trainPosition.trainPosition.d_min = kcg_lit_int64(0);
  outC->trainPosition.trainPosition.d_max = kcg_lit_int64(0);
  outC->trainPosition.estimatedFrontEndPosition = kcg_lit_int64(0);
  outC->trainPosition.minSafeFrontEndPosition = kcg_lit_int64(0);
  outC->trainPosition.maxSafeFrontEndPostion = kcg_lit_int64(0);
  outC->trainPosition.LRBG.valid = kcg_true;
  outC->trainPosition.LRBG.nid_c = kcg_lit_int64(0);
  outC->trainPosition.LRBG.nid_bg = kcg_lit_int64(0);
  outC->trainPosition.LRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.location.nominal = kcg_lit_int64(0);
  outC->trainPosition.LRBG.location.d_min = kcg_lit_int64(0);
  outC->trainPosition.LRBG.location.d_max = kcg_lit_int64(0);
  outC->trainPosition.LRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int64(
      0);
  outC->trainPosition.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int64(
      0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int64(
      0);
  outC->trainPosition.LRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int64(
      0);
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx31 = 0; idx31 < 33; idx31++) {
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].valid = kcg_true;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].nid_LRBG =
      kcg_lit_int64(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_dir = Q_DIR_Reverse;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].d_link =
      kcg_lit_int64(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].nid_c =
      kcg_lit_int64(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].nid_bg =
      kcg_lit_int64(0);
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.LRBG.infoFromPassing.linkedBGs[idx31].q_locacc =
      kcg_lit_int64(0);
  }
  outC->trainPosition.LRBG.missed = kcg_true;
  outC->trainPosition.prvLRBG.valid = kcg_true;
  outC->trainPosition.prvLRBG.nid_c = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.nid_bg = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.location.nominal = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.location.d_min = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.location.d_max = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.seqNoOnTrack = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int64(
      0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->trainPosition.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int64(0);
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->trainPosition.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx32 = 0; idx32 < 33; idx32++) {
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].valid = kcg_true;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].nid_LRBG =
      kcg_lit_int64(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_dir =
      Q_DIR_Reverse;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_scale =
      Q_SCALE_10_cm_scale;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].d_link =
      kcg_lit_int64(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].nid_c =
      kcg_lit_int64(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].nid_bg =
      kcg_lit_int64(0);
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->trainPosition.prvLRBG.infoFromPassing.linkedBGs[idx32].q_locacc =
      kcg_lit_int64(0);
  }
  outC->trainPosition.prvLRBG.missed = kcg_true;
  outC->trainPosition.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->trainPosition.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->trainPosition.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->trainPosition.linkingIsUsedOnboard = kcg_true;
  outC->trainPosition.estimatedRearEndPosition = kcg_lit_int64(0);
  outC->trainPosition.minSafeRearEndPosition = kcg_lit_int64(0);
  outC->trainPosition.maxSafeRearEndPosition = kcg_lit_int64(0);
  outC->levelAck = kcg_true;
  outC->driver_level_transition.is_set = kcg_true;
  outC->driver_level_transition.transition.level = M_LEVEL_Level_0;
  outC->driver_level_transition.transition.position = kcg_lit_int64(0);
  outC->driver_level_transition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->driver_level_transition.transition.immediateAck = kcg_true;
  outC->driver_level_transition.transition.AckLength = kcg_lit_int64(0);
  outC->driver_level_transition.LRBG = kcg_lit_int64(0);
  outC->driver_level_transition.referenceLocation = kcg_lit_int64(0);
  outC->train_standstill = kcg_true;
  /* _L72=(InputManagement::InputDMI#1)/ */
  InputDMI_init_InputManagement(&outC->Context_InputDMI_1);
  /* _L67=(InputManagement::InputLocalisation#1)/ */
  InputLocalisation_init_InputManagement(&outC->Context_InputLocalisation_1);
  /* _L57=(InputManagement::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_init_InputManagement(
    &outC->Context_InputSpeedAndSupervision_1);
  /* _L76=(InputManagement::InputTrackManagement#1)/ */
  InputTrackManagement_init_InputManagement(
    &outC->Context_InputTrackManagement_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_reset(outC_Input *outC)
{
  /* _L72=(InputManagement::InputDMI#1)/ */
  InputDMI_reset_InputManagement(&outC->Context_InputDMI_1);
  /* _L67=(InputManagement::InputLocalisation#1)/ */
  InputLocalisation_reset_InputManagement(&outC->Context_InputLocalisation_1);
  /* _L57=(InputManagement::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_reset_InputManagement(
    &outC->Context_InputSpeedAndSupervision_1);
  /* _L76=(InputManagement::InputTrackManagement#1)/ */
  InputTrackManagement_reset_InputManagement(
    &outC->Context_InputTrackManagement_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

