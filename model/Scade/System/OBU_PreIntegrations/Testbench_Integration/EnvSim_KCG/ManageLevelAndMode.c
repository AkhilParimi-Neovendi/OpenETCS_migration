/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevelAndMode.h"

/* ManageLevelAndMode/ */
void ManageLevelAndMode(
  /* Data_From_DMI/ */
  DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Cab_In/ */
  cab_ID_T_TIU_Types_Pkg Cab_In,
  /* driver_level_transition_In/ */
  T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ERTMS_capabilities_In/ */
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Data_from_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* MemorizedLevelIn/ */
  M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC)
{
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&outC->_L53, Data_From_DMI);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L55,
    Data_From_TIU);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L56,
    Data_From_Track_Messages);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->_L57,
    Data_From_Track_Packets);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&outC->_L93, Data_From_STM);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L54,
    Data_From_Localisation);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L58,
    Data_From_Speed_and_Supervision);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->_L92,
    Data_From_F2_Functions);
  outC->_L59 = Cab_In;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L61,
    driver_level_transition_In);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L72,
    ERTMS_capabilities_In);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L87,
    Data_from_Track_MASSPGradient);
  outC->_L109 = MemorizedLevelIn;
  /* _L25=(Input#1)/ */
  Input(
    &outC->_L53,
    &outC->_L55,
    &outC->_L56,
    &outC->_L57,
    &outC->_L93,
    &outC->_L54,
    &outC->_L58,
    &outC->_L92,
    outC->_L59,
    &outC->_L61,
    &outC->_L72,
    &outC->_L87,
    outC->_L109,
    &outC->Context_Input_1);
  outC->_L25 = outC->Context_Input_1.train_standstill;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L28,
    &outC->Context_Input_1.driver_level_transition);
  outC->_L29 = outC->Context_Input_1.levelAck;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L30,
    &outC->Context_Input_1.trainPosition);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &outC->_L33,
    &outC->Context_Input_1.ERTMS_capabilities);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    &outC->_L96,
    &outC->Context_Input_1.Data_From_Track_to_Level);
  outC->_L108 = outC->Context_Input_1.MemorizedLevel;
  outC->_L37 = outC->Context_Input_1.Cab;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L40,
    &outC->Context_Input_1.Data_From_DMI_To_Mode);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->_L95,
    &outC->Context_Input_1.Data_From_F2_Functions_to_Mode);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L41,
    &outC->Context_Input_1.Data_From_Localisation_To_Mode);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L42,
    &outC->Context_Input_1.Data_From_Speed_and_Supervision_To_Mode);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(
    &outC->_L94,
    &outC->Context_Input_1.Data_From_STM_to_Mode);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L43,
    &outC->Context_Input_1.Data_From_TIU_To_Mode);
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->_L44,
    &outC->Context_Input_1.Data_From_Track_To_Mode);
  /* _L6=(ManageLevels#1)/ */
  ManageLevels(
    outC->_L25,
    &outC->_L28,
    outC->_L29,
    &outC->_L30,
    &outC->_L33,
    &outC->_L96,
    outC->_L108,
    &outC->Context_ManageLevels_1);
  outC->_L6 = outC->Context_ManageLevels_1.nextLevel;
  outC->_L7 = outC->Context_ManageLevels_1.TripTrainRequested;
  outC->_L8 = outC->Context_ManageLevels_1.needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &outC->_L9,
    &outC->Context_ManageLevels_1.announcedLevelTransition);
  outC->_L10 = outC->Context_ManageLevels_1.serviceBrakeRequested;
  outC->_L11 = outC->Context_ManageLevels_1.connectionToRBCRequested;
  outC->_L12 = outC->Context_ManageLevels_1.positionReportNeeded;
  outC->_L100 = outC->Context_ManageLevels_1.levelIsNew;
  outC->_L101 = outC->Context_ManageLevels_1.isAvailableForUse;
  outC->Loc_Level_To_Apply = outC->_L6;
  outC->_L73 = outC->Loc_Level_To_Apply;
  outC->Loc_TripFromLevel = outC->_L7;
  outC->_L104 = outC->Loc_TripFromLevel;
  /* _L1=(ManageModes#1)/ */
  ManageModes(
    outC->_L73,
    outC->_L37,
    &outC->_L40,
    &outC->_L95,
    &outC->_L41,
    &outC->_L42,
    &outC->_L94,
    &outC->_L43,
    &outC->_L44,
    outC->_L104,
    &outC->Context_ManageModes_1);
  outC->_L1 = outC->Context_ManageModes_1.currentMode;
  outC->_L2 = outC->Context_ManageModes_1.EB_Requested;
  outC->_L3 = outC->Context_ManageModes_1.Service_Brake_Command;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L4,
    &outC->Context_ManageModes_1.Data_To_DMI);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L5,
    &outC->Context_ManageModes_1.Data_To_BG_Management);
  outC->Loc_Mode_To_Apply = outC->_L1;
  outC->_L75 = outC->Loc_Mode_To_Apply;
  outC->_L77 = outC->Loc_Level_To_Apply;
  outC->_L78 = outC->Loc_Mode_To_Apply;
  /* _L76=(CheckLevelAndMode#1)/ */
  CheckLevelAndMode(outC->_L77, outC->_L78, &outC->Context_CheckLevelAndMode_1);
  outC->_L76 = outC->Context_CheckLevelAndMode_1.Level_Mode_Compatible;
  /* _L79=(Output#1)/ */
  Output(
    outC->_L6,
    outC->_L8,
    &outC->_L9,
    outC->_L10,
    outC->_L11,
    outC->_L12,
    outC->_L100,
    outC->_L101,
    outC->_L75,
    outC->_L2,
    outC->_L3,
    &outC->_L4,
    &outC->_L5,
    outC->_L76,
    &outC->Context_Output_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L79,
    &outC->Context_Output_1.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L82,
    &outC->Context_Output_1.Data_To_BG_Management);
  outC->_L83 = outC->Context_Output_1.Service_Brake_Command;
  outC->_L84 = outC->Context_Output_1.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->_L111,
    &outC->Context_Output_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->_L110,
    &outC->Context_Output_1.Data_To_DMI_Ack);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->_L110);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->_L111);
  outC->EB_Requested = outC->_L84;
  outC->Service_Brake_Command = outC->_L83;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L82);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->_L79);
}

#ifndef KCG_USER_DEFINED_INIT
void ManageLevelAndMode_init(outC_ManageLevelAndMode *outC)
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

  outC->_L111.LevelTransition.is_set = kcg_true;
  outC->_L111.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->_L111.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->_L111.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L111.LevelTransition.transition.immediateAck = kcg_true;
  outC->_L111.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->_L111.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->_L111.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->_L111.IsAvailableForUse = kcg_true;
  outC->_L110.valid = kcg_true;
  outC->_L110.whichMode = M_MODE_Full_Supervision;
  outC->_L110.SH_Req_RefusedByRBC = kcg_true;
  outC->_L110.LevelNeedsAck = kcg_true;
  outC->_L109 = M_LEVEL_Level_0;
  outC->_L108 = M_LEVEL_Level_0;
  outC->_L104 = kcg_true;
  outC->_L100 = kcg_true;
  outC->_L101 = kcg_true;
  for (idx = 0; idx < 7; idx++) {
    outC->_L96.level_transition_priority_table[idx].is_set = kcg_true;
    outC->_L96.level_transition_priority_table[idx].transition.level =
      M_LEVEL_Level_0;
    outC->_L96.level_transition_priority_table[idx].transition.position =
      kcg_lit_int32(0);
    outC->_L96.level_transition_priority_table[idx].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L96.level_transition_priority_table[idx].transition.immediateAck =
      kcg_true;
    outC->_L96.level_transition_priority_table[idx].transition.AckLength =
      kcg_lit_int32(0);
    outC->_L96.level_transition_priority_table[idx].LRBG = kcg_lit_int32(0);
    outC->_L96.level_transition_priority_table[idx].referenceLocation =
      kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L96.conditionnalTransition[idx1].is_set = kcg_true;
    outC->_L96.conditionnalTransition[idx1].transition.level = M_LEVEL_Level_0;
    outC->_L96.conditionnalTransition[idx1].transition.position = kcg_lit_int32(0);
    outC->_L96.conditionnalTransition[idx1].transition.transitionType =
      M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
    outC->_L96.conditionnalTransition[idx1].transition.immediateAck = kcg_true;
    outC->_L96.conditionnalTransition[idx1].transition.AckLength = kcg_lit_int32(0);
    outC->_L96.conditionnalTransition[idx1].LRBG = kcg_lit_int32(0);
    outC->_L96.conditionnalTransition[idx1].referenceLocation = kcg_lit_int32(0);
  }
  outC->_L96.receivedL2L3MA_track = kcg_true;
  outC->_L96.receivedL1MA_track = kcg_true;
  outC->_L95.Common_Errors.linkedBGError = kcg_true;
  outC->_L95.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L95.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L95.Common_Errors.radioSequenceError = kcg_true;
  outC->_L95.Common_Errors.tNvContactError = kcg_true;
  outC->_L95.Common_Errors.otherTimingError = kcg_true;
  outC->_L95.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L95.Common_Errors.nid_c = kcg_lit_int32(0);
  outC->_L95.Common_Errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L95.Failure_Occured = kcg_true;
  outC->_L95.Continue_Shunting_Active = kcg_true;
  outC->_L95.Stop_Shunting_Stored = kcg_true;
  outC->_L94.Interface_To_National_System = kcg_true;
  outC->_L94.National_trip_Order = kcg_true;
  outC->_L93.Interface_To_National_System = kcg_true;
  outC->_L93.National_trip_Order = kcg_true;
  outC->_L92.Common_Errors.linkedBGError = kcg_true;
  outC->_L92.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L92.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L92.Common_Errors.radioSequenceError = kcg_true;
  outC->_L92.Common_Errors.tNvContactError = kcg_true;
  outC->_L92.Common_Errors.otherTimingError = kcg_true;
  outC->_L92.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L92.Common_Errors.nid_c = kcg_lit_int32(0);
  outC->_L92.Common_Errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L92.Failure_Occured = kcg_true;
  outC->_L92.Continue_Shunting_Active = kcg_true;
  outC->_L92.Stop_Shunting_Stored = kcg_true;
  outC->_L87.P12_received = kcg_true;
  outC->_L87.P15_received = kcg_true;
  outC->_L87.P21_received = kcg_true;
  outC->_L87.P27_received = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82.EoM_Procedure_req = kcg_true;
  outC->_L82.Clean_BG_List_SH_Area = kcg_true;
  outC->_L82.MA_Req = kcg_true;
  outC->_L82.Req_for_SH_from_Driver = kcg_true;
  outC->_L82.Connection_to_RBC_req = kcg_true;
  outC->_L82.Position_Repport_Needed = kcg_true;
  outC->_L79.compatibleModeAndLevel = kcg_true;
  outC->_L79.level = M_LEVEL_Level_0;
  outC->_L79.newLevel = kcg_true;
  outC->_L79.Mode = M_MODE_Full_Supervision;
  outC->_L79.newMode = kcg_true;
  outC->_L78 = NP_Level_And_Mode_Types_Pkg;
  outC->_L77 = M_LEVEL_Level_0;
  outC->_L76 = kcg_true;
  outC->_L75 = NP_Level_And_Mode_Types_Pkg;
  outC->_L73 = M_LEVEL_Level_0;
  outC->_L72.NTC = kcg_true;
  outC->_L72.L0 = kcg_true;
  outC->_L72.L1 = kcg_true;
  outC->_L72.L2 = kcg_true;
  outC->_L72.L3 = kcg_true;
  outC->_L61.is_set = kcg_true;
  outC->_L61.transition.level = M_LEVEL_Level_0;
  outC->_L61.transition.position = kcg_lit_int32(0);
  outC->_L61.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L61.transition.immediateAck = kcg_true;
  outC->_L61.transition.AckLength = kcg_lit_int32(0);
  outC->_L61.LRBG = kcg_lit_int32(0);
  outC->_L61.referenceLocation = kcg_lit_int32(0);
  outC->_L59 = CabUndefined_TIU_Types_Pkg;
  outC->_L58.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L58.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L58.Override_Function_Active = kcg_true;
  outC->_L58.EOA_Antenna_Overpass = kcg_true;
  outC->_L58.EOA_Front_End = kcg_true;
  outC->_L58.Train_Speed_Under_Overide_Limit = kcg_true;
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L57.P_12[idx2].valid = kcg_true;
    outC->_L57.P_12[idx2].q_dir = Q_DIR_Reverse;
    outC->_L57.P_12[idx2].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.P_12[idx2].v_main = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].v_loa = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].t_loa = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].l_section = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L57.P_12[idx2].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].l_endsection = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L57.P_12[idx2].t_sectiontimer = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L57.P_12[idx2].t_endtimer = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L57.P_12[idx2].d_dp = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].v_releasedp = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L57.P_12[idx2].d_startol = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].t_ol = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].d_ol = kcg_lit_int32(0);
    outC->_L57.P_12[idx2].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L57.P_135.valid = kcg_true;
  outC->_L57.P_135.q_dir = Q_DIR_Reverse;
  outC->_L57.P_137.valid = kcg_true;
  outC->_L57.P_137.q_dir = Q_DIR_Reverse;
  outC->_L57.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L57.P_138.valid = kcg_true;
  outC->_L57.P_138.q_dir = Q_DIR_Reverse;
  outC->_L57.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L57.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L57.P_139.valid = kcg_true;
  outC->_L57.P_139.q_dir = Q_DIR_Reverse;
  outC->_L57.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L57.P_139.v_reverse = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L57.P_15[idx3].valid = kcg_true;
    outC->_L57.P_15[idx3].q_dir = Q_DIR_Reverse;
    outC->_L57.P_15[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.P_15[idx3].v_loa = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].t_loa = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].l_section = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L57.P_15[idx3].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].l_endsection = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L57.P_15[idx3].t_sectiontimer = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L57.P_15[idx3].t_endtimer = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L57.P_15[idx3].d_dp = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].v_releasedp = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L57.P_15[idx3].d_startol = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].t_ol = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].d_ol = kcg_lit_int32(0);
    outC->_L57.P_15[idx3].v_releaseol = kcg_lit_int32(0);
  }
  for (idx4 = 0; idx4 < 7; idx4++) {
    outC->_L57.P_21[idx4].valid = kcg_true;
    outC->_L57.P_21[idx4].q_dir = Q_DIR_Reverse;
    outC->_L57.P_21[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.P_21[idx4].d_gradient = kcg_lit_int32(0);
    outC->_L57.P_21[idx4].q_gdir = Q_GDIR_downhill;
    outC->_L57.P_21[idx4].g_a = kcg_lit_int32(0);
  }
  outC->_L57.P_27.valid = kcg_true;
  outC->_L57.P_27.q_dir = Q_DIR_Reverse;
  outC->_L57.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L57.P_27.d_static = kcg_lit_int32(0);
  outC->_L57.P_27.v_static = kcg_lit_int32(0);
  outC->_L57.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L57.P_27.diffArray[idx5].valid = kcg_true;
    outC->_L57.P_27.diffArray[idx5].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L57.P_27.diffArray[idx5].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L57.P_27.diffArray[idx5].nc_diff = kcg_lit_int32(0);
    outC->_L57.P_27.diffArray[idx5].v_diff = kcg_lit_int32(0);
  }
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L57.P_27.SSPArray[idx7].valid = kcg_true;
    outC->_L57.P_27.SSPArray[idx7].d_static = kcg_lit_int32(0);
    outC->_L57.P_27.SSPArray[idx7].v_static = kcg_lit_int32(0);
    outC->_L57.P_27.SSPArray[idx7].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx6 = 0; idx6 < 7; idx6++) {
      outC->_L57.P_27.SSPArray[idx7].diffArray[idx6].valid = kcg_true;
      outC->_L57.P_27.SSPArray[idx7].diffArray[idx6].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L57.P_27.SSPArray[idx7].diffArray[idx6].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L57.P_27.SSPArray[idx7].diffArray[idx6].nc_diff = kcg_lit_int32(0);
      outC->_L57.P_27.SSPArray[idx7].diffArray[idx6].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L57.P_41[idx8].valid = kcg_true;
    outC->_L57.P_41[idx8].q_dir = Q_DIR_Reverse;
    outC->_L57.P_41[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.P_41[idx8].d_leveltr = kcg_lit_int32(0);
    outC->_L57.P_41[idx8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L57.P_41[idx8].nid_ntc = kcg_lit_int32(0);
    outC->_L57.P_41[idx8].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L57.P_46[idx9].valid = kcg_true;
    outC->_L57.P_46[idx9].q_dir = Q_DIR_Reverse;
    outC->_L57.P_46[idx9].m_leveltr = M_LEVELTR_Level_0;
    outC->_L57.P_46[idx9].nid_ntc = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L57.P_63[idx10].valid = kcg_true;
    outC->_L57.P_63[idx10].q_dir = Q_DIR_Reverse;
    outC->_L57.P_63[idx10].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L57.P_63[idx10].nid_c = kcg_lit_int32(0);
    outC->_L57.P_63[idx10].nid_bg = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L57.P_80[idx11].valid = kcg_true;
    outC->_L57.P_80[idx11].q_dir = Q_DIR_Reverse;
    outC->_L57.P_80[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L57.P_80[idx11].d_mamode = kcg_lit_int32(0);
    outC->_L57.P_80[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L57.P_80[idx11].v_mamode = kcg_lit_int32(0);
    outC->_L57.P_80[idx11].l_mamode = kcg_lit_int32(0);
    outC->_L57.P_80[idx11].l_ackmamode = kcg_lit_int32(0);
    outC->_L57.P_80[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L57.LRBG = kcg_lit_int32(0);
  outC->_L57.referenceLocation = kcg_lit_int32(0);
  outC->_L56.Mess_15 = kcg_true;
  outC->_L56.Mess_16 = kcg_true;
  outC->_L56.Mess_2 = kcg_true;
  outC->_L56.Mess_27 = kcg_true;
  outC->_L56.Mess_28 = kcg_true;
  outC->_L56.Mess_6 = kcg_true;
  outC->_L55.train_status.valid = kcg_true;
  outC->_L55.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L55.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L55.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L55.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L55.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L55.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L55.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L55.brake_status.valid = kcg_true;
  outC->_L55.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L55.brake_pressure.valid = kcg_true;
  outC->_L55.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L55.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L55.train_data_info.valid = kcg_true;
  outC->_L55.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L55.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L55.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L55.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L55.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L55.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L55.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L55.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L55.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L55.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L55.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 5; idx12++) {
    outC->_L55.train_data_info.nationSystems[idx12] = kcg_lit_int32(0);
  }
  outC->_L55.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx13 = 0; idx13 < 4; idx13++) {
    outC->_L55.train_data_info.tractionSystem[idx13].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L55.train_data_info.tractionSystem[idx13].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L55.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L55.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L55.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L55.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L55.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L55.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L55.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L55.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L54.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L54.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L54.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L54.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L54.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L54.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L54.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L54.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L54.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L54.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L54.PositionErrors.bg.valid = kcg_true;
  outC->_L54.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L54.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L54.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L54.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L54.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx14 = 0; idx14 < 33; idx14++) {
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].valid = kcg_true;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_dir =
      Q_DIR_Reverse;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].d_link =
      kcg_lit_int32(0);
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].nid_c =
      kcg_lit_int32(0);
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].nid_bg =
      kcg_lit_int32(0);
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L54.PositionErrors.bg.infoFromPassing.linkedBGs[idx14].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L54.PositionErrors.bg.missed = kcg_true;
  outC->_L54.Train_Position.valid = kcg_true;
  outC->_L54.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L54.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L54.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L54.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L54.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L54.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L54.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L54.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L54.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.valid = kcg_true;
  outC->_L54.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L54.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L54.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L54.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx15 = 0; idx15 < 33; idx15++) {
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].valid =
      kcg_true;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_dir =
      Q_DIR_Reverse;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].d_link =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].nid_c =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].nid_bg =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L54.Train_Position.LRBG.infoFromPassing.linkedBGs[idx15].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L54.Train_Position.LRBG.missed = kcg_true;
  outC->_L54.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L54.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L54.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L54.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L54.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx16 = 0; idx16 < 33; idx16++) {
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].valid =
      kcg_true;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_dir =
      Q_DIR_Reverse;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].d_link =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].nid_c =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].nid_bg =
      kcg_lit_int32(0);
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L54.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx16].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L54.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L54.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L54.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L54.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L54.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L54.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L54.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L54.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L54.Train_Speed = kcg_lit_int32(0);
  outC->_L54.Train_Standstill = kcg_true;
  outC->_L53.valid = kcg_true;
  outC->_L53.DriverAck.valid = kcg_true;
  outC->_L53.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->_L53.DriverAck.acknowledgement = kcg_true;
  outC->_L53.DriverRequest.valid = kcg_true;
  outC->_L53.DriverRequest.Req_Exit_SH = kcg_true;
  outC->_L53.DriverRequest.Req_NL = kcg_true;
  outC->_L53.DriverRequest.Req_Override = kcg_true;
  outC->_L53.DriverRequest.Req_SH = kcg_true;
  outC->_L53.DriverRequest.Req_Start = kcg_true;
  outC->_L53.DriverRequest.ETCS_Isolated = kcg_true;
  outC->_L53.LevelAck = kcg_true;
  outC->_L44.MA_SSP_Gradient_Available = kcg_true;
  for (idx17 = 0; idx17 < 3; idx17++) {
    outC->_L44.Mode_Profile_On_Board[idx17].Distance = kcg_lit_int32(0);
    outC->_L44.Mode_Profile_On_Board[idx17].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L44.Mode_Profile_On_Board[idx17].Speed = kcg_lit_int32(0);
    outC->_L44.Mode_Profile_On_Board[idx17].Length = kcg_lit_int32(0);
    outC->_L44.Mode_Profile_On_Board[idx17].Length_Ack = kcg_lit_int32(0);
  }
  outC->_L44.Shunting_granted_By_RBC = kcg_true;
  outC->_L44.Trip_Order_Given_By_Balise = kcg_true;
  outC->_L44.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->_L44.Stop_If_In_shunting = kcg_true;
  outC->_L44.Stop_If_In_SR = kcg_true;
  outC->_L44.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->_L44.RBC_Authorized_SR = kcg_true;
  outC->_L44.Reversing_Data.Available = kcg_true;
  outC->_L44.Reversing_Data.Dist_Start = kcg_lit_int32(0);
  outC->_L44.Reversing_Data.Length = kcg_lit_int32(0);
  outC->_L44.Reversing_Data.Dist_Run = kcg_lit_int32(0);
  outC->_L44.Reversing_Data.Speed = kcg_lit_int32(0);
  outC->_L44.Emergency_Stop_Message_Received = kcg_true;
  outC->_L43.train_status.valid = kcg_true;
  outC->_L43.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L43.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L43.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L43.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L43.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L43.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L43.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L43.brake_status.valid = kcg_true;
  outC->_L43.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L43.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L43.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L43.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L43.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L43.brake_pressure.valid = kcg_true;
  outC->_L43.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L43.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L43.train_data_info.valid = kcg_true;
  outC->_L43.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L43.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L43.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L43.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L43.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L43.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L43.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L43.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L43.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L43.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L43.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L43.train_data_info.nationSystems[idx18] = kcg_lit_int32(0);
  }
  outC->_L43.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 4; idx19++) {
    outC->_L43.train_data_info.tractionSystem[idx19].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L43.train_data_info.tractionSystem[idx19].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L43.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L43.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L43.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L43.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L43.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L43.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L43.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L43.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L42.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L42.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L42.Override_Function_Active = kcg_true;
  outC->_L42.EOA_Antenna_Overpass = kcg_true;
  outC->_L42.EOA_Front_End = kcg_true;
  outC->_L42.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L41.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L41.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L41.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L41.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L41.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L41.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L41.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L41.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L41.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L41.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L41.PositionErrors.bg.valid = kcg_true;
  outC->_L41.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L41.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L41.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L41.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(
      0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L41.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx20 = 0; idx20 < 33; idx20++) {
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].valid = kcg_true;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_dir =
      Q_DIR_Reverse;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].d_link =
      kcg_lit_int32(0);
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].nid_c =
      kcg_lit_int32(0);
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].nid_bg =
      kcg_lit_int32(0);
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41.PositionErrors.bg.infoFromPassing.linkedBGs[idx20].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L41.PositionErrors.bg.missed = kcg_true;
  outC->_L41.Train_Position.valid = kcg_true;
  outC->_L41.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L41.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L41.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L41.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L41.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L41.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L41.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L41.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L41.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.valid = kcg_true;
  outC->_L41.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L41.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(
      0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L41.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L41.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx21 = 0; idx21 < 33; idx21++) {
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].valid =
      kcg_true;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_dir =
      Q_DIR_Reverse;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].d_link =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].nid_c =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].nid_bg =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41.Train_Position.LRBG.infoFromPassing.linkedBGs[idx21].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L41.Train_Position.LRBG.missed = kcg_true;
  outC->_L41.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L41.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L41.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L41.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L41.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx22 = 0; idx22 < 33; idx22++) {
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].valid =
      kcg_true;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_dir =
      Q_DIR_Reverse;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].d_link =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_c =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].nid_bg =
      kcg_lit_int32(0);
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L41.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx22].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L41.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L41.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L41.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L41.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L41.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L41.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L41.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L41.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L41.Train_Speed = kcg_lit_int32(0);
  outC->_L41.Train_Standstill = kcg_true;
  outC->_L40.Ack_LS = kcg_true;
  outC->_L40.Ack_OS = kcg_true;
  outC->_L40.Ack_RV = kcg_true;
  outC->_L40.Ack_SH = kcg_true;
  outC->_L40.Ack_SN = kcg_true;
  outC->_L40.Ack_SR = kcg_true;
  outC->_L40.Ack_TR = kcg_true;
  outC->_L40.Ack_UN = kcg_true;
  outC->_L40.Req_Exit_SH = kcg_true;
  outC->_L40.Req_NL = kcg_true;
  outC->_L40.Req_Override = kcg_true;
  outC->_L40.Req_SH = kcg_true;
  outC->_L40.Req_Start = kcg_true;
  outC->_L40.ETCS_Isolated = kcg_true;
  outC->_L37 = CabUndefined_TIU_Types_Pkg;
  outC->_L33.NTC = kcg_true;
  outC->_L33.L0 = kcg_true;
  outC->_L33.L1 = kcg_true;
  outC->_L33.L2 = kcg_true;
  outC->_L33.L3 = kcg_true;
  outC->_L30.valid = kcg_true;
  outC->_L30.timestamp = kcg_lit_int32(0);
  outC->_L30.trainPositionIsUnknown = kcg_true;
  outC->_L30.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L30.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L30.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L30.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L30.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L30.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L30.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L30.LRBG.valid = kcg_true;
  outC->_L30.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L30.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L30.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L30.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L30.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L30.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L30.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L30.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L30.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L30.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L30.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L30.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L30.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L30.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L30.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L30.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L30.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx23 = 0; idx23 < 33; idx23++) {
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].valid = kcg_true;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].nid_LRBG = kcg_lit_int32(0);
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_dir = Q_DIR_Reverse;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_scale = Q_SCALE_10_cm_scale;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].d_link = kcg_lit_int32(0);
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].nid_c = kcg_lit_int32(0);
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].nid_bg = kcg_lit_int32(0);
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L30.LRBG.infoFromPassing.linkedBGs[idx23].q_locacc = kcg_lit_int32(0);
  }
  outC->_L30.LRBG.missed = kcg_true;
  outC->_L30.prvLRBG.valid = kcg_true;
  outC->_L30.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L30.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L30.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L30.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L30.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L30.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L30.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L30.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L30.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L30.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx24 = 0; idx24 < 33; idx24++) {
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].valid = kcg_true;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].nid_LRBG = kcg_lit_int32(0);
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_dir = Q_DIR_Reverse;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].d_link = kcg_lit_int32(0);
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].nid_c = kcg_lit_int32(0);
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].nid_bg = kcg_lit_int32(0);
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L30.prvLRBG.infoFromPassing.linkedBGs[idx24].q_locacc = kcg_lit_int32(0);
  }
  outC->_L30.prvLRBG.missed = kcg_true;
  outC->_L30.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L30.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L30.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L30.linkingIsUsedOnboard = kcg_true;
  outC->_L30.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L30.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L30.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L28.is_set = kcg_true;
  outC->_L28.transition.level = M_LEVEL_Level_0;
  outC->_L28.transition.position = kcg_lit_int32(0);
  outC->_L28.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L28.transition.immediateAck = kcg_true;
  outC->_L28.transition.AckLength = kcg_lit_int32(0);
  outC->_L28.LRBG = kcg_lit_int32(0);
  outC->_L28.referenceLocation = kcg_lit_int32(0);
  outC->_L25 = kcg_true;
  outC->_L6 = M_LEVEL_Level_0;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9.is_set = kcg_true;
  outC->_L9.transition.level = M_LEVEL_Level_0;
  outC->_L9.transition.position = kcg_lit_int32(0);
  outC->_L9.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->_L9.transition.immediateAck = kcg_true;
  outC->_L9.transition.AckLength = kcg_lit_int32(0);
  outC->_L9.LRBG = kcg_lit_int32(0);
  outC->_L9.referenceLocation = kcg_lit_int32(0);
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L1 = NP_Level_And_Mode_Types_Pkg;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4.Ack_LS = kcg_true;
  outC->_L4.Ack_OS = kcg_true;
  outC->_L4.Ack_RV = kcg_true;
  outC->_L4.Ack_SH = kcg_true;
  outC->_L4.Ack_SN = kcg_true;
  outC->_L4.Ack_SR = kcg_true;
  outC->_L4.Ack_TR = kcg_true;
  outC->_L4.Ack_UN = kcg_true;
  outC->_L4.SH_Refused_By_RBC = kcg_true;
  outC->_L5.EoM_Procedure_req = kcg_true;
  outC->_L5.Clean_BG_List_SH_Area = kcg_true;
  outC->_L5.MA_Req = kcg_true;
  outC->_L5.Req_for_SH_from_Driver = kcg_true;
  outC->_L5.Connection_to_RBC_req = kcg_true;
  outC->_L5.Position_Repport_Needed = kcg_true;
  outC->Loc_TripFromLevel = kcg_true;
  outC->Loc_Mode_To_Apply = NP_Level_And_Mode_Types_Pkg;
  outC->Loc_Level_To_Apply = M_LEVEL_Level_0;
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.LRBG = kcg_lit_int32(0);
  outC->announcedLevel.LevelTransition.referenceLocation = kcg_lit_int32(0);
  outC->announcedLevel.IsAvailableForUse = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
  /* _L79=(Output#1)/ */ Output_init(&outC->Context_Output_1);
  /* _L76=(CheckLevelAndMode#1)/ */
  CheckLevelAndMode_init(&outC->Context_CheckLevelAndMode_1);
  /* _L1=(ManageModes#1)/ */ ManageModes_init(&outC->Context_ManageModes_1);
  /* _L6=(ManageLevels#1)/ */ ManageLevels_init(&outC->Context_ManageLevels_1);
  /* _L25=(Input#1)/ */ Input_init(&outC->Context_Input_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC)
{
  /* _L79=(Output#1)/ */ Output_reset(&outC->Context_Output_1);
  /* _L76=(CheckLevelAndMode#1)/ */
  CheckLevelAndMode_reset(&outC->Context_CheckLevelAndMode_1);
  /* _L1=(ManageModes#1)/ */ ManageModes_reset(&outC->Context_ManageModes_1);
  /* _L6=(ManageLevels#1)/ */ ManageLevels_reset(&outC->Context_ManageLevels_1);
  /* _L25=(Input#1)/ */ Input_reset(&outC->Context_Input_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageLevelAndMode.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

