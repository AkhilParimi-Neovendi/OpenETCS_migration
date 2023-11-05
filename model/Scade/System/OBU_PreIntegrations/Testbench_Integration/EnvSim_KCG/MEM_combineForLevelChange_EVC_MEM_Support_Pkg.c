/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MEM_combineForLevelChange_EVC_MEM_Support_Pkg.h"

/* EVC_MEM_Support_Pkg::MEM_combineForLevelChange/ */
void MEM_combineForLevelChange_EVC_MEM_Support_Pkg(
  /* actualMessage/ */
  ReceivedMessage_T_Common_Types_Pkg *actualMessage,
  /* ModeLevel/ */
  T_Mode_Level_Level_And_Mode_Types_Pkg *ModeLevel,
  /* trainPosition/ */
  trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* trainProperties/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  /* nationalValues/ */
  P003_OBU_T_TM *nationalValues,
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
{
  /* infoForLevelTransition/ */
  static dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg infoForLevelTransition_partial;
  /* LRBGpositionNeeded/ */
  static kcg_bool LRBGpositionNeeded_partial;
  /* infoForLevelTransition/ */
  static dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg _1_infoForLevelTransition_partial;
  /* LRBGpositionNeeded/ */
  static kcg_bool _2_LRBGpositionNeeded_partial;
  /* LRBGpositionNeeded/ */
  static kcg_bool _3_LRBGpositionNeeded_partial;
  /* infoForLevelTransition/ */
  static dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg _4_infoForLevelTransition_partial;
  /* LRBGpositionNeeded/ */
  static kcg_bool _5_LRBGpositionNeeded_partial;
  /* infoForLevelTransition/ */
  static dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg _6_infoForLevelTransition_partial;
  static kcg_bool noname;
  static kcg_bool _7_noname;
  static P135_OBU_T_TM _8_noname;
  static P012_OBU_T_TM _9_noname;
  static kcg_bool _10_noname;
  /* LRBGpositionNeeded/ */
  static kcg_bool last_LRBGpositionNeeded;
  /* level/ */
  static M_LEVEL last_level;
  /* infoForLevelTransition/ */
  static dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg last_infoForLevelTransition;

  last_LRBGpositionNeeded = outC->LRBGpositionNeeded;
  last_level = outC->level;
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &last_infoForLevelTransition,
    &outC->infoForLevelTransition);
  outC->_L248 = cm03_Movement_Authority_Id_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L12, actualMessage);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L245,
    &outC->_L12.Radio_Common_Header);
  outC->_L246 = outC->_L245.nid_message;
  outC->_L247 = outC->_L246 == outC->_L248;
  outC->doResetMode = outC->_L247;
  outC->_L249 = outC->doResetMode;
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L240,
    &last_infoForLevelTransition);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L241, &outC->_L240.p80);
  if ((0 <= 0) & (0 < 3)) {
    kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(&outC->_L242, &outC->_L241[0]);
  }
  else {
    kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(
      &outC->_L242,
      (P80_ModeProfile_T_Packet_Types_Pkg *)
        &Default_P80_element_EVC_MEM_Support_Pkg);
  }
  outC->_L243 = outC->_L242.valid;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&outC->_L37, ModeLevel);
  outC->_L238 = outC->_L37.newMode;
  outC->_L239 = outC->_L238 & outC->_L243;
  _10_noname = outC->_L239;
  outC->_L31 = outC->_L12.valid;
  outC->msgToCheck = outC->_L31;
  outC->IfBlock1_clock = outC->msgToCheck;
  outC->_L152 = M_MODE_Trip;
  outC->_L150 = outC->_L37.Mode;
  outC->_L151 = outC->_L150 == outC->_L152;
  outC->_L149 = outC->_L37.newMode;
  outC->_L153 = outC->_L149 & outC->_L151;
  outC->_L148 = outC->_L37.newLevel;
  outC->_L154 = outC->_L249 | outC->_L148 | outC->_L153;
  outC->doReset = outC->_L154;
  if (outC->IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L1_then_IfBlock1,
      actualMessage);
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->_L31_then_IfBlock1,
      &last_infoForLevelTransition);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L34_then_IfBlock1,
      trainPosition);
    outC->_L33_then_IfBlock1 = last_LRBGpositionNeeded;
  }
  else {
    outC->else_clock_IfBlock1 = outC->doReset;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &outC->_L8_then_else_IfBlock1,
        &last_infoForLevelTransition);
      kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
        &outC->_L12_then_else_IfBlock1,
        &outC->_L8_then_else_IfBlock1.p80);
      kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
        &outC->_L16_then_else_IfBlock1,
        (P80_ModeProfiles_T_Packet_Types_Pkg *)
          &Default_P80_legacy_EVC_MEM_Support_Pkg);
      outC->_L15_then_else_IfBlock1 = outC->doResetMode;
      /* IfBlock1:else:then:_L14= */
      if (outC->_L15_then_else_IfBlock1) {
        kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
          &outC->_L14_then_else_IfBlock1,
          &outC->_L16_then_else_IfBlock1);
      }
      else {
        kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
          &outC->_L14_then_else_IfBlock1,
          &outC->_L12_then_else_IfBlock1);
      }
      kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
        &outC->_L9_then_else_IfBlock1,
        &outC->_L8_then_else_IfBlock1.p46);
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &outC->_L10_then_else_IfBlock1,
        (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *)
          &cNoML_EVC_MEM_Support_Pkg);
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &outC->_L7_then_else_IfBlock1,
        &outC->_L10_then_else_IfBlock1);
      if (kcg_true) {
        kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
          &outC->_L7_then_else_IfBlock1.p46,
          &outC->_L9_then_else_IfBlock1);
      }
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &outC->_L13_then_else_IfBlock1,
        &outC->_L7_then_else_IfBlock1);
      if (kcg_true) {
        kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(
          &outC->_L13_then_else_IfBlock1.p80,
          &outC->_L14_then_else_IfBlock1);
      }
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &_6_infoForLevelTransition_partial,
        &outC->_L13_then_else_IfBlock1);
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &_1_infoForLevelTransition_partial,
        &_6_infoForLevelTransition_partial);
    }
    else {
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &outC->_L4_else_else_IfBlock1,
        &last_infoForLevelTransition);
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &_4_infoForLevelTransition_partial,
        &outC->_L4_else_else_IfBlock1);
      kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
        &_1_infoForLevelTransition_partial,
        &_4_infoForLevelTransition_partial);
    }
  }
  outC->_L38 = outC->_L37.level;
  outC->level = outC->_L38;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L36_then_IfBlock1 = outC->level;
    kcg_copy_trainProperties_T_TrainPosition_Types_Pck(
      &outC->_L37_then_IfBlock1,
      trainProperties);
    kcg_copy_P003_OBU_T_TM(&outC->_L38_then_IfBlock1, nationalValues);
    /* IfBlock1:then:_L35=(EVC_MEM_Support_Pkg::MEM_dataForLevelTransition)/ */
    MEM_dataForLevelTransition_EVC_MEM_Support_Pkg(
      &outC->_L1_then_IfBlock1,
      &outC->_L31_then_IfBlock1,
      &outC->_L34_then_IfBlock1,
      outC->_L33_then_IfBlock1,
      outC->_L36_then_IfBlock1,
      &outC->_L37_then_IfBlock1,
      &outC->_L38_then_IfBlock1,
      &outC->Context_MEM_dataForLevelTransition);
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->_L35_then_IfBlock1,
      &outC->Context_MEM_dataForLevelTransition.outstoredData);
    outC->_L32_then_IfBlock1 =
      outC->Context_MEM_dataForLevelTransition.outPositionNeeded;
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &infoForLevelTransition_partial,
      &outC->_L35_then_IfBlock1);
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->infoForLevelTransition,
      &infoForLevelTransition_partial);
  }
  else {
    kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
      &outC->infoForLevelTransition,
      &_1_infoForLevelTransition_partial);
  }
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->_L138,
    &outC->infoForLevelTransition);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L237, &outC->_L138.p80);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    LRBGpositionNeeded_partial = outC->_L32_then_IfBlock1;
    outC->LRBGpositionNeeded = LRBGpositionNeeded_partial;
  }
  else {
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L6_then_else_IfBlock1 = kcg_false;
      _5_LRBGpositionNeeded_partial = outC->_L6_then_else_IfBlock1;
      _2_LRBGpositionNeeded_partial = _5_LRBGpositionNeeded_partial;
    }
    else {
      outC->_L5_else_else_IfBlock1 = last_LRBGpositionNeeded;
      _3_LRBGpositionNeeded_partial = outC->_L5_else_else_IfBlock1;
      _2_LRBGpositionNeeded_partial = _3_LRBGpositionNeeded_partial;
    }
    outC->LRBGpositionNeeded = _2_LRBGpositionNeeded_partial;
  }
  outC->_L147 = outC->LRBGpositionNeeded;
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L146,
    (P41_LevelTransistionOrders_T_Packet_Types_Pkg *) &cNoP41_EVC_MEM_Support_Pkg);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L139,
    &outC->_L138.p41);
  /* _L145= */
  if (outC->_L147) {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L145,
      &outC->_L146);
  }
  else {
    kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &outC->_L145,
      &outC->_L139);
  }
  outC->_L143 = outC->_L138.referenceLocation;
  outC->_L141 = outC->_L138.LRBG;
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L140,
    &outC->_L138.p46);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L137, actualMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L119,
    &outC->_L137.packets);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P021_Legacy_1);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L136,
    &outC->Context_Read_P021_Legacy_1.P015_legacy_out);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L130,
    (P12_Level1MovementAuthorities_T_Packet_Types_Pkg *)
      &Default_P12_legacy_EVC_MEM_Support_Pkg);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L123,
    (P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg *)
      &Default_P135_legacy_EVC_MEM_Support_Pkg);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P137_Legacy_1);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L125,
    &outC->Context_Read_P137_Legacy_1.P137_legacy_out);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P138_Legacy_1);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L134,
    &outC->Context_Read_P138_Legacy_1.P138_legacy_out);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P139_Legacy_1);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L127,
    &outC->Context_Read_P139_Legacy_1.P139_legacy_out);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_TM_specific(&outC->_L119, &outC->Context_Read_P015_Legacy_1);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L129,
    &outC->Context_Read_P015_Legacy_1.P015_legacy_out);
  /* _L122=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_TM_specific(
    &outC->_L119,
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L122,
    &outC->Context_Read_P027V1_Legacy_for_ML_1.P027_legacy_out);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L128,
    (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *)
      &Default_P63_legacy_EVC_MEM_Support_Pkg);
  kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L124.P_12,
    &outC->_L130);
  kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
    &outC->_L124.P_135,
    &outC->_L123);
  kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
    &outC->_L124.P_137,
    &outC->_L125);
  kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
    &outC->_L124.P_138,
    &outC->_L134);
  kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
    &outC->_L124.P_139,
    &outC->_L127);
  kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
    &outC->_L124.P_15,
    &outC->_L129);
  kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(
    &outC->_L124.P_21,
    &outC->_L136);
  kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
    &outC->_L124.P_27,
    &outC->_L122);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
    &outC->_L124.P_41,
    &outC->_L145);
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &outC->_L124.P_46,
    &outC->_L140);
  kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
    &outC->_L124.P_63,
    &outC->_L128);
  kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(&outC->_L124.P_80, &outC->_L237);
  outC->_L124.LRBG = outC->_L141;
  outC->_L124.referenceLocation = outC->_L143;
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Track_Packets_at_ML,
    &outC->_L124);
  /* _L116=(TM::Read_P012#1)/ */
  Read_P012_TM(&outC->_L119, &outC->Context_Read_P012_1);
  outC->_L116 = outC->Context_Read_P012_1.received;
  kcg_copy_P012_OBU_T_TM(&outC->_L117, &outC->Context_Read_P012_1.P012_OBU_out);
  kcg_copy_P012_OBU_T_TM(&_9_noname, &outC->_L117);
  /* _L131=(TM::Read_P135#1)/ */
  Read_P135_TM(&outC->_L119, &outC->Context_Read_P135_1);
  outC->_L131 = outC->Context_Read_P135_1.received;
  kcg_copy_P135_OBU_T_TM(&outC->_L132, &outC->Context_Read_P135_1.P135_OBU_out);
  kcg_copy_P135_OBU_T_TM(&_8_noname, &outC->_L132);
  _7_noname = outC->_L131;
  noname = outC->_L116;
}

#ifndef KCG_USER_DEFINED_INIT
void MEM_combineForLevelChange_init_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
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
  static kcg_size idx41;
  static kcg_size idx42;
  static kcg_size idx43;
  static kcg_size idx44;
  static kcg_size idx45;
  static kcg_size idx46;
  static kcg_size idx47;
  static kcg_size idx48;
  static kcg_size idx49;
  static kcg_size idx50;
  static kcg_size idx51;
  static kcg_size idx52;
  static kcg_size idx53;
  static kcg_size idx54;
  static kcg_size idx55;
  static kcg_size idx56;
  static kcg_size idx57;
  static kcg_size idx58;
  static kcg_size idx59;
  static kcg_size idx60;
  static kcg_size idx61;
  static kcg_size idx62;
  static kcg_size idx63;
  static kcg_size idx64;
  static kcg_size idx65;
  static kcg_size idx66;
  static kcg_size idx67;
  static kcg_size idx68;
  static kcg_size idx69;
  static kcg_size idx70;
  static kcg_size idx71;
  static kcg_size idx72;
  static kcg_size idx73;
  static kcg_size idx74;
  static kcg_size idx75;
  static kcg_size idx76;
  static kcg_size idx77;
  static kcg_size idx78;
  static kcg_size idx79;

  outC->_L249 = kcg_true;
  outC->_L248 = kcg_lit_int32(0);
  outC->_L247 = kcg_true;
  outC->_L246 = kcg_lit_int32(0);
  outC->_L245.radioDevice = kcg_lit_int32(0);
  outC->_L245.receivedSystemTime = kcg_lit_int32(0);
  outC->_L245.nid_message = kcg_lit_int32(0);
  outC->_L245.t_train = kcg_lit_int32(0);
  outC->_L245.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L245.nid_lrbg = kcg_lit_int32(0);
  outC->_L245.t_train_reference = kcg_lit_int32(0);
  outC->_L245.nid_em = kcg_lit_int32(0);
  outC->_L245.q_scale = Q_SCALE_10_cm_scale;
  outC->_L245.d_sr = kcg_lit_int32(0);
  outC->_L245.t_sh_rqst = kcg_lit_int32(0);
  outC->_L245.d_ref = kcg_lit_int32(0);
  outC->_L245.q_dir = Q_DIR_Reverse;
  outC->_L245.d_emergencystop = kcg_lit_int32(0);
  outC->_L245.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L243 = kcg_true;
  outC->_L242.valid = kcg_true;
  outC->_L242.q_dir = Q_DIR_Reverse;
  outC->_L242.q_scale = Q_SCALE_10_cm_scale;
  outC->_L242.d_mamode = kcg_lit_int32(0);
  outC->_L242.m_mamode = M_MAMODE_On_Sight;
  outC->_L242.v_mamode = kcg_lit_int32(0);
  outC->_L242.l_mamode = kcg_lit_int32(0);
  outC->_L242.l_ackmamode = kcg_lit_int32(0);
  outC->_L242.q_mamode = Q_MAMODE_as_the_EOA;
  for (idx = 0; idx < 3; idx++) {
    outC->_L241[idx].valid = kcg_true;
    outC->_L241[idx].q_dir = Q_DIR_Reverse;
    outC->_L241[idx].q_scale = Q_SCALE_10_cm_scale;
    outC->_L241[idx].d_mamode = kcg_lit_int32(0);
    outC->_L241[idx].m_mamode = M_MAMODE_On_Sight;
    outC->_L241[idx].v_mamode = kcg_lit_int32(0);
    outC->_L241[idx].l_mamode = kcg_lit_int32(0);
    outC->_L241[idx].l_ackmamode = kcg_lit_int32(0);
    outC->_L241[idx].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx1 = 0; idx1 < 7; idx1++) {
    outC->_L240.p41[idx1].valid = kcg_true;
    outC->_L240.p41[idx1].q_dir = Q_DIR_Reverse;
    outC->_L240.p41[idx1].q_scale = Q_SCALE_10_cm_scale;
    outC->_L240.p41[idx1].d_leveltr = kcg_lit_int32(0);
    outC->_L240.p41[idx1].m_leveltr = M_LEVELTR_Level_0;
    outC->_L240.p41[idx1].nid_ntc = kcg_lit_int32(0);
    outC->_L240.p41[idx1].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx2 = 0; idx2 < 7; idx2++) {
    outC->_L240.p46[idx2].valid = kcg_true;
    outC->_L240.p46[idx2].q_dir = Q_DIR_Reverse;
    outC->_L240.p46[idx2].m_leveltr = M_LEVELTR_Level_0;
    outC->_L240.p46[idx2].nid_ntc = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 3; idx3++) {
    outC->_L240.p80[idx3].valid = kcg_true;
    outC->_L240.p80[idx3].q_dir = Q_DIR_Reverse;
    outC->_L240.p80[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L240.p80[idx3].d_mamode = kcg_lit_int32(0);
    outC->_L240.p80[idx3].m_mamode = M_MAMODE_On_Sight;
    outC->_L240.p80[idx3].v_mamode = kcg_lit_int32(0);
    outC->_L240.p80[idx3].l_mamode = kcg_lit_int32(0);
    outC->_L240.p80[idx3].l_ackmamode = kcg_lit_int32(0);
    outC->_L240.p80[idx3].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L240.p12_received = kcg_true;
  outC->_L240.p15_received = kcg_true;
  outC->_L240.p21_received = kcg_true;
  outC->_L240.p27_received = kcg_true;
  outC->_L240.LRBG = kcg_lit_int32(0);
  outC->_L240.referenceLocation = kcg_lit_int32(0);
  outC->_L239 = kcg_true;
  outC->_L238 = kcg_true;
  for (idx4 = 0; idx4 < 3; idx4++) {
    outC->_L237[idx4].valid = kcg_true;
    outC->_L237[idx4].q_dir = Q_DIR_Reverse;
    outC->_L237[idx4].q_scale = Q_SCALE_10_cm_scale;
    outC->_L237[idx4].d_mamode = kcg_lit_int32(0);
    outC->_L237[idx4].m_mamode = M_MAMODE_On_Sight;
    outC->_L237[idx4].v_mamode = kcg_lit_int32(0);
    outC->_L237[idx4].l_mamode = kcg_lit_int32(0);
    outC->_L237[idx4].l_ackmamode = kcg_lit_int32(0);
    outC->_L237[idx4].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L154 = kcg_true;
  outC->_L153 = kcg_true;
  outC->_L152 = M_MODE_Full_Supervision;
  outC->_L151 = kcg_true;
  outC->_L150 = M_MODE_Full_Supervision;
  outC->_L149 = kcg_true;
  outC->_L148 = kcg_true;
  outC->_L147 = kcg_true;
  for (idx5 = 0; idx5 < 7; idx5++) {
    outC->_L146[idx5].valid = kcg_true;
    outC->_L146[idx5].q_dir = Q_DIR_Reverse;
    outC->_L146[idx5].q_scale = Q_SCALE_10_cm_scale;
    outC->_L146[idx5].d_leveltr = kcg_lit_int32(0);
    outC->_L146[idx5].m_leveltr = M_LEVELTR_Level_0;
    outC->_L146[idx5].nid_ntc = kcg_lit_int32(0);
    outC->_L146[idx5].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx6 = 0; idx6 < 7; idx6++) {
    outC->_L145[idx6].valid = kcg_true;
    outC->_L145[idx6].q_dir = Q_DIR_Reverse;
    outC->_L145[idx6].q_scale = Q_SCALE_10_cm_scale;
    outC->_L145[idx6].d_leveltr = kcg_lit_int32(0);
    outC->_L145[idx6].m_leveltr = M_LEVELTR_Level_0;
    outC->_L145[idx6].nid_ntc = kcg_lit_int32(0);
    outC->_L145[idx6].l_ackleveltr = kcg_lit_int32(0);
  }
  outC->_L143 = kcg_lit_int32(0);
  outC->_L141 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 7; idx7++) {
    outC->_L140[idx7].valid = kcg_true;
    outC->_L140[idx7].q_dir = Q_DIR_Reverse;
    outC->_L140[idx7].m_leveltr = M_LEVELTR_Level_0;
    outC->_L140[idx7].nid_ntc = kcg_lit_int32(0);
  }
  for (idx8 = 0; idx8 < 7; idx8++) {
    outC->_L139[idx8].valid = kcg_true;
    outC->_L139[idx8].q_dir = Q_DIR_Reverse;
    outC->_L139[idx8].q_scale = Q_SCALE_10_cm_scale;
    outC->_L139[idx8].d_leveltr = kcg_lit_int32(0);
    outC->_L139[idx8].m_leveltr = M_LEVELTR_Level_0;
    outC->_L139[idx8].nid_ntc = kcg_lit_int32(0);
    outC->_L139[idx8].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx9 = 0; idx9 < 7; idx9++) {
    outC->_L138.p41[idx9].valid = kcg_true;
    outC->_L138.p41[idx9].q_dir = Q_DIR_Reverse;
    outC->_L138.p41[idx9].q_scale = Q_SCALE_10_cm_scale;
    outC->_L138.p41[idx9].d_leveltr = kcg_lit_int32(0);
    outC->_L138.p41[idx9].m_leveltr = M_LEVELTR_Level_0;
    outC->_L138.p41[idx9].nid_ntc = kcg_lit_int32(0);
    outC->_L138.p41[idx9].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx10 = 0; idx10 < 7; idx10++) {
    outC->_L138.p46[idx10].valid = kcg_true;
    outC->_L138.p46[idx10].q_dir = Q_DIR_Reverse;
    outC->_L138.p46[idx10].m_leveltr = M_LEVELTR_Level_0;
    outC->_L138.p46[idx10].nid_ntc = kcg_lit_int32(0);
  }
  for (idx11 = 0; idx11 < 3; idx11++) {
    outC->_L138.p80[idx11].valid = kcg_true;
    outC->_L138.p80[idx11].q_dir = Q_DIR_Reverse;
    outC->_L138.p80[idx11].q_scale = Q_SCALE_10_cm_scale;
    outC->_L138.p80[idx11].d_mamode = kcg_lit_int32(0);
    outC->_L138.p80[idx11].m_mamode = M_MAMODE_On_Sight;
    outC->_L138.p80[idx11].v_mamode = kcg_lit_int32(0);
    outC->_L138.p80[idx11].l_mamode = kcg_lit_int32(0);
    outC->_L138.p80[idx11].l_ackmamode = kcg_lit_int32(0);
    outC->_L138.p80[idx11].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L138.p12_received = kcg_true;
  outC->_L138.p15_received = kcg_true;
  outC->_L138.p21_received = kcg_true;
  outC->_L138.p27_received = kcg_true;
  outC->_L138.LRBG = kcg_lit_int32(0);
  outC->_L138.referenceLocation = kcg_lit_int32(0);
  outC->_L117.valid = kcg_true;
  outC->_L117.q_dir = Q_DIR_Reverse;
  outC->_L117.q_scale = Q_SCALE_10_cm_scale;
  outC->_L117.v_main = kcg_lit_int32(0);
  outC->_L117.v_loa = kcg_lit_int32(0);
  outC->_L117.t_loa = kcg_lit_int32(0);
  outC->_L117.n_iter = kcg_lit_int32(0);
  for (idx12 = 0; idx12 < 32; idx12++) {
    outC->_L117.sections[idx12].valid = kcg_true;
    outC->_L117.sections[idx12].l_section = kcg_lit_int32(0);
    outC->_L117.sections[idx12].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L117.sections[idx12].t_sectiontimer = kcg_lit_int32(0);
    outC->_L117.sections[idx12].d_sectiontimerstoploc = kcg_lit_int32(0);
  }
  outC->_L117.l_endsection = kcg_lit_int32(0);
  outC->_L117.q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
  outC->_L117.t_sectiontimer = kcg_lit_int32(0);
  outC->_L117.d_sectiontimerstoploc = kcg_lit_int32(0);
  outC->_L117.q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
  outC->_L117.t_endtimer = kcg_lit_int32(0);
  outC->_L117.d_endtimerstartloc = kcg_lit_int32(0);
  outC->_L117.q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
  outC->_L117.d_dp = kcg_lit_int32(0);
  outC->_L117.v_releasedp = kcg_lit_int32(0);
  outC->_L117.q_overlap = Q_OVERLAP_No_overlap_information;
  outC->_L117.d_startol = kcg_lit_int32(0);
  outC->_L117.t_ol = kcg_lit_int32(0);
  outC->_L117.d_ol = kcg_lit_int32(0);
  outC->_L117.v_releaseol = kcg_lit_int32(0);
  outC->_L116 = kcg_true;
  for (idx13 = 0; idx13 < 30; idx13++) {
    outC->_L119.PacketHeaders[idx13].nid_packet = kcg_lit_int32(0);
    outC->_L119.PacketHeaders[idx13].q_dir = Q_DIR_Reverse;
    outC->_L119.PacketHeaders[idx13].valid = kcg_true;
    outC->_L119.PacketHeaders[idx13].startAddress = kcg_lit_int32(0);
    outC->_L119.PacketHeaders[idx13].endAddress = kcg_lit_int32(0);
  }
  for (idx14 = 0; idx14 < 500; idx14++) {
    outC->_L119.PacketData[idx14] = kcg_lit_int32(0);
  }
  outC->_L122.valid = kcg_true;
  outC->_L122.q_dir = Q_DIR_Reverse;
  outC->_L122.q_scale = Q_SCALE_10_cm_scale;
  outC->_L122.d_static = kcg_lit_int32(0);
  outC->_L122.v_static = kcg_lit_int32(0);
  outC->_L122.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx15 = 0; idx15 < 7; idx15++) {
    outC->_L122.diffArray[idx15].valid = kcg_true;
    outC->_L122.diffArray[idx15].q_diff = Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L122.diffArray[idx15].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L122.diffArray[idx15].nc_diff = kcg_lit_int32(0);
    outC->_L122.diffArray[idx15].v_diff = kcg_lit_int32(0);
  }
  for (idx17 = 0; idx17 < 7; idx17++) {
    outC->_L122.SSPArray[idx17].valid = kcg_true;
    outC->_L122.SSPArray[idx17].d_static = kcg_lit_int32(0);
    outC->_L122.SSPArray[idx17].v_static = kcg_lit_int32(0);
    outC->_L122.SSPArray[idx17].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx16 = 0; idx16 < 7; idx16++) {
      outC->_L122.SSPArray[idx17].diffArray[idx16].valid = kcg_true;
      outC->_L122.SSPArray[idx17].diffArray[idx16].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L122.SSPArray[idx17].diffArray[idx16].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L122.SSPArray[idx17].diffArray[idx16].nc_diff = kcg_lit_int32(0);
      outC->_L122.SSPArray[idx17].diffArray[idx16].v_diff = kcg_lit_int32(0);
    }
  }
  outC->_L123.valid = kcg_true;
  outC->_L123.q_dir = Q_DIR_Reverse;
  for (idx18 = 0; idx18 < 5; idx18++) {
    outC->_L124.P_12[idx18].valid = kcg_true;
    outC->_L124.P_12[idx18].q_dir = Q_DIR_Reverse;
    outC->_L124.P_12[idx18].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_12[idx18].v_main = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].v_loa = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].t_loa = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].l_section = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_12[idx18].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].l_endsection = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_12[idx18].t_sectiontimer = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L124.P_12[idx18].t_endtimer = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L124.P_12[idx18].d_dp = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].v_releasedp = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L124.P_12[idx18].d_startol = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].t_ol = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].d_ol = kcg_lit_int32(0);
    outC->_L124.P_12[idx18].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L124.P_135.valid = kcg_true;
  outC->_L124.P_135.q_dir = Q_DIR_Reverse;
  outC->_L124.P_137.valid = kcg_true;
  outC->_L124.P_137.q_dir = Q_DIR_Reverse;
  outC->_L124.P_137.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L124.P_138.valid = kcg_true;
  outC->_L124.P_138.q_dir = Q_DIR_Reverse;
  outC->_L124.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_138.d_startreverse = kcg_lit_int32(0);
  outC->_L124.P_138.l_reversearea = kcg_lit_int32(0);
  outC->_L124.P_139.valid = kcg_true;
  outC->_L124.P_139.q_dir = Q_DIR_Reverse;
  outC->_L124.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_139.d_reverse = kcg_lit_int32(0);
  outC->_L124.P_139.v_reverse = kcg_lit_int32(0);
  for (idx19 = 0; idx19 < 5; idx19++) {
    outC->_L124.P_15[idx19].valid = kcg_true;
    outC->_L124.P_15[idx19].q_dir = Q_DIR_Reverse;
    outC->_L124.P_15[idx19].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_15[idx19].v_loa = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].t_loa = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].l_section = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_15[idx19].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].l_endsection = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L124.P_15[idx19].t_sectiontimer = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->_L124.P_15[idx19].t_endtimer = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->_L124.P_15[idx19].d_dp = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].v_releasedp = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L124.P_15[idx19].d_startol = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].t_ol = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].d_ol = kcg_lit_int32(0);
    outC->_L124.P_15[idx19].v_releaseol = kcg_lit_int32(0);
  }
  for (idx20 = 0; idx20 < 7; idx20++) {
    outC->_L124.P_21[idx20].valid = kcg_true;
    outC->_L124.P_21[idx20].q_dir = Q_DIR_Reverse;
    outC->_L124.P_21[idx20].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_21[idx20].d_gradient = kcg_lit_int32(0);
    outC->_L124.P_21[idx20].q_gdir = Q_GDIR_downhill;
    outC->_L124.P_21[idx20].g_a = kcg_lit_int32(0);
  }
  outC->_L124.P_27.valid = kcg_true;
  outC->_L124.P_27.q_dir = Q_DIR_Reverse;
  outC->_L124.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->_L124.P_27.d_static = kcg_lit_int32(0);
  outC->_L124.P_27.v_static = kcg_lit_int32(0);
  outC->_L124.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx21 = 0; idx21 < 7; idx21++) {
    outC->_L124.P_27.diffArray[idx21].valid = kcg_true;
    outC->_L124.P_27.diffArray[idx21].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->_L124.P_27.diffArray[idx21].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->_L124.P_27.diffArray[idx21].nc_diff = kcg_lit_int32(0);
    outC->_L124.P_27.diffArray[idx21].v_diff = kcg_lit_int32(0);
  }
  for (idx23 = 0; idx23 < 7; idx23++) {
    outC->_L124.P_27.SSPArray[idx23].valid = kcg_true;
    outC->_L124.P_27.SSPArray[idx23].d_static = kcg_lit_int32(0);
    outC->_L124.P_27.SSPArray[idx23].v_static = kcg_lit_int32(0);
    outC->_L124.P_27.SSPArray[idx23].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx22 = 0; idx22 < 7; idx22++) {
      outC->_L124.P_27.SSPArray[idx23].diffArray[idx22].valid = kcg_true;
      outC->_L124.P_27.SSPArray[idx23].diffArray[idx22].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->_L124.P_27.SSPArray[idx23].diffArray[idx22].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->_L124.P_27.SSPArray[idx23].diffArray[idx22].nc_diff = kcg_lit_int32(0);
      outC->_L124.P_27.SSPArray[idx23].diffArray[idx22].v_diff = kcg_lit_int32(0);
    }
  }
  for (idx24 = 0; idx24 < 7; idx24++) {
    outC->_L124.P_41[idx24].valid = kcg_true;
    outC->_L124.P_41[idx24].q_dir = Q_DIR_Reverse;
    outC->_L124.P_41[idx24].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_41[idx24].d_leveltr = kcg_lit_int32(0);
    outC->_L124.P_41[idx24].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124.P_41[idx24].nid_ntc = kcg_lit_int32(0);
    outC->_L124.P_41[idx24].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx25 = 0; idx25 < 7; idx25++) {
    outC->_L124.P_46[idx25].valid = kcg_true;
    outC->_L124.P_46[idx25].q_dir = Q_DIR_Reverse;
    outC->_L124.P_46[idx25].m_leveltr = M_LEVELTR_Level_0;
    outC->_L124.P_46[idx25].nid_ntc = kcg_lit_int32(0);
  }
  for (idx26 = 0; idx26 < 7; idx26++) {
    outC->_L124.P_63[idx26].valid = kcg_true;
    outC->_L124.P_63[idx26].q_dir = Q_DIR_Reverse;
    outC->_L124.P_63[idx26].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L124.P_63[idx26].nid_c = kcg_lit_int32(0);
    outC->_L124.P_63[idx26].nid_bg = kcg_lit_int32(0);
  }
  for (idx27 = 0; idx27 < 3; idx27++) {
    outC->_L124.P_80[idx27].valid = kcg_true;
    outC->_L124.P_80[idx27].q_dir = Q_DIR_Reverse;
    outC->_L124.P_80[idx27].q_scale = Q_SCALE_10_cm_scale;
    outC->_L124.P_80[idx27].d_mamode = kcg_lit_int32(0);
    outC->_L124.P_80[idx27].m_mamode = M_MAMODE_On_Sight;
    outC->_L124.P_80[idx27].v_mamode = kcg_lit_int32(0);
    outC->_L124.P_80[idx27].l_mamode = kcg_lit_int32(0);
    outC->_L124.P_80[idx27].l_ackmamode = kcg_lit_int32(0);
    outC->_L124.P_80[idx27].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L124.LRBG = kcg_lit_int32(0);
  outC->_L124.referenceLocation = kcg_lit_int32(0);
  outC->_L125.valid = kcg_true;
  outC->_L125.q_dir = Q_DIR_Reverse;
  outC->_L125.q_srstop = Q_SRSTOP_Stop_if_in_SR_mode;
  outC->_L127.valid = kcg_true;
  outC->_L127.q_dir = Q_DIR_Reverse;
  outC->_L127.q_scale = Q_SCALE_10_cm_scale;
  outC->_L127.d_reverse = kcg_lit_int32(0);
  outC->_L127.v_reverse = kcg_lit_int32(0);
  for (idx28 = 0; idx28 < 7; idx28++) {
    outC->_L128[idx28].valid = kcg_true;
    outC->_L128[idx28].q_dir = Q_DIR_Reverse;
    outC->_L128[idx28].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L128[idx28].nid_c = kcg_lit_int32(0);
    outC->_L128[idx28].nid_bg = kcg_lit_int32(0);
  }
  for (idx29 = 0; idx29 < 5; idx29++) {
    outC->_L129[idx29].valid = kcg_true;
    outC->_L129[idx29].q_dir = Q_DIR_Reverse;
    outC->_L129[idx29].q_scale = Q_SCALE_10_cm_scale;
    outC->_L129[idx29].v_loa = kcg_lit_int32(0);
    outC->_L129[idx29].t_loa = kcg_lit_int32(0);
    outC->_L129[idx29].l_section = kcg_lit_int32(0);
    outC->_L129[idx29].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[idx29].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L129[idx29].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L129[idx29].l_endsection = kcg_lit_int32(0);
    outC->_L129[idx29].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L129[idx29].t_sectiontimer = kcg_lit_int32(0);
    outC->_L129[idx29].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L129[idx29].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L129[idx29].t_endtimer = kcg_lit_int32(0);
    outC->_L129[idx29].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L129[idx29].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L129[idx29].d_dp = kcg_lit_int32(0);
    outC->_L129[idx29].v_releasedp = kcg_lit_int32(0);
    outC->_L129[idx29].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L129[idx29].d_startol = kcg_lit_int32(0);
    outC->_L129[idx29].t_ol = kcg_lit_int32(0);
    outC->_L129[idx29].d_ol = kcg_lit_int32(0);
    outC->_L129[idx29].v_releaseol = kcg_lit_int32(0);
  }
  for (idx30 = 0; idx30 < 5; idx30++) {
    outC->_L130[idx30].valid = kcg_true;
    outC->_L130[idx30].q_dir = Q_DIR_Reverse;
    outC->_L130[idx30].q_scale = Q_SCALE_10_cm_scale;
    outC->_L130[idx30].v_main = kcg_lit_int32(0);
    outC->_L130[idx30].v_loa = kcg_lit_int32(0);
    outC->_L130[idx30].t_loa = kcg_lit_int32(0);
    outC->_L130[idx30].l_section = kcg_lit_int32(0);
    outC->_L130[idx30].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L130[idx30].t_sectiontimer_k = kcg_lit_int32(0);
    outC->_L130[idx30].d_sectiontimerstoploc_k = kcg_lit_int32(0);
    outC->_L130[idx30].l_endsection = kcg_lit_int32(0);
    outC->_L130[idx30].q_sectiontimer = Q_SECTIONTIMER_No_Section_Timer_information;
    outC->_L130[idx30].t_sectiontimer = kcg_lit_int32(0);
    outC->_L130[idx30].d_sectiontimerstoploc = kcg_lit_int32(0);
    outC->_L130[idx30].q_endtimer = Q_ENDTIMER_No_End_section_timer_information;
    outC->_L130[idx30].t_endtimer = kcg_lit_int32(0);
    outC->_L130[idx30].d_endtimerstartloc = kcg_lit_int32(0);
    outC->_L130[idx30].q_dangerpoint = Q_DANGERPOINT_No_danger_point_information;
    outC->_L130[idx30].d_dp = kcg_lit_int32(0);
    outC->_L130[idx30].v_releasedp = kcg_lit_int32(0);
    outC->_L130[idx30].q_overlap = Q_OVERLAP_No_overlap_information;
    outC->_L130[idx30].d_startol = kcg_lit_int32(0);
    outC->_L130[idx30].t_ol = kcg_lit_int32(0);
    outC->_L130[idx30].d_ol = kcg_lit_int32(0);
    outC->_L130[idx30].v_releaseol = kcg_lit_int32(0);
  }
  outC->_L132.valid = kcg_true;
  outC->_L132.q_dir = Q_DIR_Reverse;
  outC->_L131 = kcg_true;
  outC->_L134.valid = kcg_true;
  outC->_L134.q_dir = Q_DIR_Reverse;
  outC->_L134.q_scale = Q_SCALE_10_cm_scale;
  outC->_L134.d_startreverse = kcg_lit_int32(0);
  outC->_L134.l_reversearea = kcg_lit_int32(0);
  for (idx31 = 0; idx31 < 7; idx31++) {
    outC->_L136[idx31].valid = kcg_true;
    outC->_L136[idx31].q_dir = Q_DIR_Reverse;
    outC->_L136[idx31].q_scale = Q_SCALE_10_cm_scale;
    outC->_L136[idx31].d_gradient = kcg_lit_int32(0);
    outC->_L136[idx31].q_gdir = Q_GDIR_downhill;
    outC->_L136[idx31].g_a = kcg_lit_int32(0);
  }
  outC->_L137.valid = kcg_true;
  outC->_L137.source = msrc_undefined_Common_Types_Pkg;
  outC->_L137.radioMetadata.t_train_reference = kcg_true;
  outC->_L137.radioMetadata.nid_em = kcg_true;
  outC->_L137.radioMetadata.q_scale = kcg_true;
  outC->_L137.radioMetadata.d_sr = kcg_true;
  outC->_L137.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L137.radioMetadata.d_ref = kcg_true;
  outC->_L137.radioMetadata.q_dir = kcg_true;
  outC->_L137.radioMetadata.d_emergencystop = kcg_true;
  outC->_L137.radioMetadata.m_version = kcg_true;
  outC->_L137.BG_Common_Header.valid = kcg_true;
  outC->_L137.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L137.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L137.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L137.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L137.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L137.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L137.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L137.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L137.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L137.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L137.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L137.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L137.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L137.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L137.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L137.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx32 = 0; idx32 < 30; idx32++) {
    outC->_L137.packets.PacketHeaders[idx32].nid_packet = kcg_lit_int32(0);
    outC->_L137.packets.PacketHeaders[idx32].q_dir = Q_DIR_Reverse;
    outC->_L137.packets.PacketHeaders[idx32].valid = kcg_true;
    outC->_L137.packets.PacketHeaders[idx32].startAddress = kcg_lit_int32(0);
    outC->_L137.packets.PacketHeaders[idx32].endAddress = kcg_lit_int32(0);
  }
  for (idx33 = 0; idx33 < 500; idx33++) {
    outC->_L137.packets.PacketData[idx33] = kcg_lit_int32(0);
  }
  outC->_L137.sendingRBC.valid = kcg_true;
  outC->_L137.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L137.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L137.sendingRBC.device_id = kcg_lit_int32(0);
  outC->_L38 = M_LEVEL_Level_0;
  outC->_L37.compatibleModeAndLevel = kcg_true;
  outC->_L37.level = M_LEVEL_Level_0;
  outC->_L37.newLevel = kcg_true;
  outC->_L37.Mode = M_MODE_Full_Supervision;
  outC->_L37.newMode = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L12.valid = kcg_true;
  outC->_L12.source = msrc_undefined_Common_Types_Pkg;
  outC->_L12.radioMetadata.t_train_reference = kcg_true;
  outC->_L12.radioMetadata.nid_em = kcg_true;
  outC->_L12.radioMetadata.q_scale = kcg_true;
  outC->_L12.radioMetadata.d_sr = kcg_true;
  outC->_L12.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L12.radioMetadata.d_ref = kcg_true;
  outC->_L12.radioMetadata.q_dir = kcg_true;
  outC->_L12.radioMetadata.d_emergencystop = kcg_true;
  outC->_L12.radioMetadata.m_version = kcg_true;
  outC->_L12.BG_Common_Header.valid = kcg_true;
  outC->_L12.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L12.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L12.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L12.BG_Common_Header.n_total = N_TOTAL_1_balise_in_the_group;
  outC->_L12.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L12.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L12.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_nominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_safeNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_rawNominal = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_lower = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.speed.v_upper = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.acceleration = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L12.BG_Common_Header.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L12.BG_Common_Header.trainOrientationToBG = Q_DIRLRBG_Reverse;
  outC->_L12.BG_Common_Header.trainRunningDirectionToBG = Q_DIRTRAIN_Reverse;
  outC->_L12.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.receivedSystemTime = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L12.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_train_reference = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L12.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L12.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L12.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx34 = 0; idx34 < 30; idx34++) {
    outC->_L12.packets.PacketHeaders[idx34].nid_packet = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx34].q_dir = Q_DIR_Reverse;
    outC->_L12.packets.PacketHeaders[idx34].valid = kcg_true;
    outC->_L12.packets.PacketHeaders[idx34].startAddress = kcg_lit_int32(0);
    outC->_L12.packets.PacketHeaders[idx34].endAddress = kcg_lit_int32(0);
  }
  for (idx35 = 0; idx35 < 500; idx35++) {
    outC->_L12.packets.PacketData[idx35] = kcg_lit_int32(0);
  }
  outC->_L12.sendingRBC.valid = kcg_true;
  outC->_L12.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L12.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L12.sendingRBC.device_id = kcg_lit_int32(0);
  outC->doResetMode = kcg_true;
  outC->doReset = kcg_true;
  outC->msgToCheck = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  for (idx36 = 0; idx36 < 3; idx36++) {
    outC->_L16_then_else_IfBlock1[idx36].valid = kcg_true;
    outC->_L16_then_else_IfBlock1[idx36].q_dir = Q_DIR_Reverse;
    outC->_L16_then_else_IfBlock1[idx36].q_scale = Q_SCALE_10_cm_scale;
    outC->_L16_then_else_IfBlock1[idx36].d_mamode = kcg_lit_int32(0);
    outC->_L16_then_else_IfBlock1[idx36].m_mamode = M_MAMODE_On_Sight;
    outC->_L16_then_else_IfBlock1[idx36].v_mamode = kcg_lit_int32(0);
    outC->_L16_then_else_IfBlock1[idx36].l_mamode = kcg_lit_int32(0);
    outC->_L16_then_else_IfBlock1[idx36].l_ackmamode = kcg_lit_int32(0);
    outC->_L16_then_else_IfBlock1[idx36].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L15_then_else_IfBlock1 = kcg_true;
  for (idx37 = 0; idx37 < 3; idx37++) {
    outC->_L14_then_else_IfBlock1[idx37].valid = kcg_true;
    outC->_L14_then_else_IfBlock1[idx37].q_dir = Q_DIR_Reverse;
    outC->_L14_then_else_IfBlock1[idx37].q_scale = Q_SCALE_10_cm_scale;
    outC->_L14_then_else_IfBlock1[idx37].d_mamode = kcg_lit_int32(0);
    outC->_L14_then_else_IfBlock1[idx37].m_mamode = M_MAMODE_On_Sight;
    outC->_L14_then_else_IfBlock1[idx37].v_mamode = kcg_lit_int32(0);
    outC->_L14_then_else_IfBlock1[idx37].l_mamode = kcg_lit_int32(0);
    outC->_L14_then_else_IfBlock1[idx37].l_ackmamode = kcg_lit_int32(0);
    outC->_L14_then_else_IfBlock1[idx37].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx38 = 0; idx38 < 7; idx38++) {
    outC->_L13_then_else_IfBlock1.p41[idx38].valid = kcg_true;
    outC->_L13_then_else_IfBlock1.p41[idx38].q_dir = Q_DIR_Reverse;
    outC->_L13_then_else_IfBlock1.p41[idx38].q_scale = Q_SCALE_10_cm_scale;
    outC->_L13_then_else_IfBlock1.p41[idx38].d_leveltr = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p41[idx38].m_leveltr = M_LEVELTR_Level_0;
    outC->_L13_then_else_IfBlock1.p41[idx38].nid_ntc = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p41[idx38].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx39 = 0; idx39 < 7; idx39++) {
    outC->_L13_then_else_IfBlock1.p46[idx39].valid = kcg_true;
    outC->_L13_then_else_IfBlock1.p46[idx39].q_dir = Q_DIR_Reverse;
    outC->_L13_then_else_IfBlock1.p46[idx39].m_leveltr = M_LEVELTR_Level_0;
    outC->_L13_then_else_IfBlock1.p46[idx39].nid_ntc = kcg_lit_int32(0);
  }
  for (idx40 = 0; idx40 < 3; idx40++) {
    outC->_L13_then_else_IfBlock1.p80[idx40].valid = kcg_true;
    outC->_L13_then_else_IfBlock1.p80[idx40].q_dir = Q_DIR_Reverse;
    outC->_L13_then_else_IfBlock1.p80[idx40].q_scale = Q_SCALE_10_cm_scale;
    outC->_L13_then_else_IfBlock1.p80[idx40].d_mamode = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p80[idx40].m_mamode = M_MAMODE_On_Sight;
    outC->_L13_then_else_IfBlock1.p80[idx40].v_mamode = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p80[idx40].l_mamode = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p80[idx40].l_ackmamode = kcg_lit_int32(0);
    outC->_L13_then_else_IfBlock1.p80[idx40].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L13_then_else_IfBlock1.p12_received = kcg_true;
  outC->_L13_then_else_IfBlock1.p15_received = kcg_true;
  outC->_L13_then_else_IfBlock1.p21_received = kcg_true;
  outC->_L13_then_else_IfBlock1.p27_received = kcg_true;
  outC->_L13_then_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L13_then_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  for (idx41 = 0; idx41 < 3; idx41++) {
    outC->_L12_then_else_IfBlock1[idx41].valid = kcg_true;
    outC->_L12_then_else_IfBlock1[idx41].q_dir = Q_DIR_Reverse;
    outC->_L12_then_else_IfBlock1[idx41].q_scale = Q_SCALE_10_cm_scale;
    outC->_L12_then_else_IfBlock1[idx41].d_mamode = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx41].m_mamode = M_MAMODE_On_Sight;
    outC->_L12_then_else_IfBlock1[idx41].v_mamode = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx41].l_mamode = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx41].l_ackmamode = kcg_lit_int32(0);
    outC->_L12_then_else_IfBlock1[idx41].q_mamode = Q_MAMODE_as_the_EOA;
  }
  for (idx42 = 0; idx42 < 7; idx42++) {
    outC->_L10_then_else_IfBlock1.p41[idx42].valid = kcg_true;
    outC->_L10_then_else_IfBlock1.p41[idx42].q_dir = Q_DIR_Reverse;
    outC->_L10_then_else_IfBlock1.p41[idx42].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10_then_else_IfBlock1.p41[idx42].d_leveltr = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p41[idx42].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10_then_else_IfBlock1.p41[idx42].nid_ntc = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p41[idx42].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx43 = 0; idx43 < 7; idx43++) {
    outC->_L10_then_else_IfBlock1.p46[idx43].valid = kcg_true;
    outC->_L10_then_else_IfBlock1.p46[idx43].q_dir = Q_DIR_Reverse;
    outC->_L10_then_else_IfBlock1.p46[idx43].m_leveltr = M_LEVELTR_Level_0;
    outC->_L10_then_else_IfBlock1.p46[idx43].nid_ntc = kcg_lit_int32(0);
  }
  for (idx44 = 0; idx44 < 3; idx44++) {
    outC->_L10_then_else_IfBlock1.p80[idx44].valid = kcg_true;
    outC->_L10_then_else_IfBlock1.p80[idx44].q_dir = Q_DIR_Reverse;
    outC->_L10_then_else_IfBlock1.p80[idx44].q_scale = Q_SCALE_10_cm_scale;
    outC->_L10_then_else_IfBlock1.p80[idx44].d_mamode = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p80[idx44].m_mamode = M_MAMODE_On_Sight;
    outC->_L10_then_else_IfBlock1.p80[idx44].v_mamode = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p80[idx44].l_mamode = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p80[idx44].l_ackmamode = kcg_lit_int32(0);
    outC->_L10_then_else_IfBlock1.p80[idx44].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L10_then_else_IfBlock1.p12_received = kcg_true;
  outC->_L10_then_else_IfBlock1.p15_received = kcg_true;
  outC->_L10_then_else_IfBlock1.p21_received = kcg_true;
  outC->_L10_then_else_IfBlock1.p27_received = kcg_true;
  outC->_L10_then_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L10_then_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  for (idx45 = 0; idx45 < 7; idx45++) {
    outC->_L9_then_else_IfBlock1[idx45].valid = kcg_true;
    outC->_L9_then_else_IfBlock1[idx45].q_dir = Q_DIR_Reverse;
    outC->_L9_then_else_IfBlock1[idx45].m_leveltr = M_LEVELTR_Level_0;
    outC->_L9_then_else_IfBlock1[idx45].nid_ntc = kcg_lit_int32(0);
  }
  for (idx46 = 0; idx46 < 7; idx46++) {
    outC->_L8_then_else_IfBlock1.p41[idx46].valid = kcg_true;
    outC->_L8_then_else_IfBlock1.p41[idx46].q_dir = Q_DIR_Reverse;
    outC->_L8_then_else_IfBlock1.p41[idx46].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_then_else_IfBlock1.p41[idx46].d_leveltr = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p41[idx46].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8_then_else_IfBlock1.p41[idx46].nid_ntc = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p41[idx46].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx47 = 0; idx47 < 7; idx47++) {
    outC->_L8_then_else_IfBlock1.p46[idx47].valid = kcg_true;
    outC->_L8_then_else_IfBlock1.p46[idx47].q_dir = Q_DIR_Reverse;
    outC->_L8_then_else_IfBlock1.p46[idx47].m_leveltr = M_LEVELTR_Level_0;
    outC->_L8_then_else_IfBlock1.p46[idx47].nid_ntc = kcg_lit_int32(0);
  }
  for (idx48 = 0; idx48 < 3; idx48++) {
    outC->_L8_then_else_IfBlock1.p80[idx48].valid = kcg_true;
    outC->_L8_then_else_IfBlock1.p80[idx48].q_dir = Q_DIR_Reverse;
    outC->_L8_then_else_IfBlock1.p80[idx48].q_scale = Q_SCALE_10_cm_scale;
    outC->_L8_then_else_IfBlock1.p80[idx48].d_mamode = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p80[idx48].m_mamode = M_MAMODE_On_Sight;
    outC->_L8_then_else_IfBlock1.p80[idx48].v_mamode = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p80[idx48].l_mamode = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p80[idx48].l_ackmamode = kcg_lit_int32(0);
    outC->_L8_then_else_IfBlock1.p80[idx48].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L8_then_else_IfBlock1.p12_received = kcg_true;
  outC->_L8_then_else_IfBlock1.p15_received = kcg_true;
  outC->_L8_then_else_IfBlock1.p21_received = kcg_true;
  outC->_L8_then_else_IfBlock1.p27_received = kcg_true;
  outC->_L8_then_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L8_then_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  for (idx49 = 0; idx49 < 7; idx49++) {
    outC->_L7_then_else_IfBlock1.p41[idx49].valid = kcg_true;
    outC->_L7_then_else_IfBlock1.p41[idx49].q_dir = Q_DIR_Reverse;
    outC->_L7_then_else_IfBlock1.p41[idx49].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7_then_else_IfBlock1.p41[idx49].d_leveltr = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p41[idx49].m_leveltr = M_LEVELTR_Level_0;
    outC->_L7_then_else_IfBlock1.p41[idx49].nid_ntc = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p41[idx49].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx50 = 0; idx50 < 7; idx50++) {
    outC->_L7_then_else_IfBlock1.p46[idx50].valid = kcg_true;
    outC->_L7_then_else_IfBlock1.p46[idx50].q_dir = Q_DIR_Reverse;
    outC->_L7_then_else_IfBlock1.p46[idx50].m_leveltr = M_LEVELTR_Level_0;
    outC->_L7_then_else_IfBlock1.p46[idx50].nid_ntc = kcg_lit_int32(0);
  }
  for (idx51 = 0; idx51 < 3; idx51++) {
    outC->_L7_then_else_IfBlock1.p80[idx51].valid = kcg_true;
    outC->_L7_then_else_IfBlock1.p80[idx51].q_dir = Q_DIR_Reverse;
    outC->_L7_then_else_IfBlock1.p80[idx51].q_scale = Q_SCALE_10_cm_scale;
    outC->_L7_then_else_IfBlock1.p80[idx51].d_mamode = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p80[idx51].m_mamode = M_MAMODE_On_Sight;
    outC->_L7_then_else_IfBlock1.p80[idx51].v_mamode = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p80[idx51].l_mamode = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p80[idx51].l_ackmamode = kcg_lit_int32(0);
    outC->_L7_then_else_IfBlock1.p80[idx51].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L7_then_else_IfBlock1.p12_received = kcg_true;
  outC->_L7_then_else_IfBlock1.p15_received = kcg_true;
  outC->_L7_then_else_IfBlock1.p21_received = kcg_true;
  outC->_L7_then_else_IfBlock1.p27_received = kcg_true;
  outC->_L7_then_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L7_then_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L6_then_else_IfBlock1 = kcg_true;
  outC->_L5_else_else_IfBlock1 = kcg_true;
  for (idx52 = 0; idx52 < 7; idx52++) {
    outC->_L4_else_else_IfBlock1.p41[idx52].valid = kcg_true;
    outC->_L4_else_else_IfBlock1.p41[idx52].q_dir = Q_DIR_Reverse;
    outC->_L4_else_else_IfBlock1.p41[idx52].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4_else_else_IfBlock1.p41[idx52].d_leveltr = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p41[idx52].m_leveltr = M_LEVELTR_Level_0;
    outC->_L4_else_else_IfBlock1.p41[idx52].nid_ntc = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p41[idx52].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx53 = 0; idx53 < 7; idx53++) {
    outC->_L4_else_else_IfBlock1.p46[idx53].valid = kcg_true;
    outC->_L4_else_else_IfBlock1.p46[idx53].q_dir = Q_DIR_Reverse;
    outC->_L4_else_else_IfBlock1.p46[idx53].m_leveltr = M_LEVELTR_Level_0;
    outC->_L4_else_else_IfBlock1.p46[idx53].nid_ntc = kcg_lit_int32(0);
  }
  for (idx54 = 0; idx54 < 3; idx54++) {
    outC->_L4_else_else_IfBlock1.p80[idx54].valid = kcg_true;
    outC->_L4_else_else_IfBlock1.p80[idx54].q_dir = Q_DIR_Reverse;
    outC->_L4_else_else_IfBlock1.p80[idx54].q_scale = Q_SCALE_10_cm_scale;
    outC->_L4_else_else_IfBlock1.p80[idx54].d_mamode = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p80[idx54].m_mamode = M_MAMODE_On_Sight;
    outC->_L4_else_else_IfBlock1.p80[idx54].v_mamode = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p80[idx54].l_mamode = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p80[idx54].l_ackmamode = kcg_lit_int32(0);
    outC->_L4_else_else_IfBlock1.p80[idx54].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L4_else_else_IfBlock1.p12_received = kcg_true;
  outC->_L4_else_else_IfBlock1.p15_received = kcg_true;
  outC->_L4_else_else_IfBlock1.p21_received = kcg_true;
  outC->_L4_else_else_IfBlock1.p27_received = kcg_true;
  outC->_L4_else_else_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L4_else_else_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L1_then_IfBlock1.radioMetadata.t_train_reference = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.nid_em = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_scale = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_sr = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.t_sh_rqst = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_ref = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.q_dir = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.d_emergencystop = kcg_true;
  outC->_L1_then_IfBlock1.radioMetadata.m_version = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_updown = Q_UPDOWN_Down_link_telegram;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L1_then_IfBlock1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->_L1_then_IfBlock1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L1_then_IfBlock1.BG_Common_Header.m_mcount = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.nid_bg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.timestamp = kcg_lit_int32(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_min = kcg_lit_int32(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.odo.o_max = kcg_lit_int32(
      0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L1_then_IfBlock1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.radioDevice = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.receivedSystemTime =
    kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_message = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_lrbg = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_train_reference = kcg_lit_int32(
      0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.nid_em = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_sr = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.t_sh_rqst = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_ref = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->_L1_then_IfBlock1.Radio_Common_Header.d_emergencystop = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (idx55 = 0; idx55 < 30; idx55++) {
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx55].nid_packet =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx55].q_dir = Q_DIR_Reverse;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx55].valid = kcg_true;
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx55].startAddress =
      kcg_lit_int32(0);
    outC->_L1_then_IfBlock1.packets.PacketHeaders[idx55].endAddress =
      kcg_lit_int32(0);
  }
  for (idx56 = 0; idx56 < 500; idx56++) {
    outC->_L1_then_IfBlock1.packets.PacketData[idx56] = kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1.sendingRBC.valid = kcg_true;
  outC->_L1_then_IfBlock1.sendingRBC.nid_c = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.sendingRBC.rbc_id = kcg_lit_int32(0);
  outC->_L1_then_IfBlock1.sendingRBC.device_id = kcg_lit_int32(0);
  for (idx57 = 0; idx57 < 7; idx57++) {
    outC->_L31_then_IfBlock1.p41[idx57].valid = kcg_true;
    outC->_L31_then_IfBlock1.p41[idx57].q_dir = Q_DIR_Reverse;
    outC->_L31_then_IfBlock1.p41[idx57].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31_then_IfBlock1.p41[idx57].d_leveltr = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p41[idx57].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31_then_IfBlock1.p41[idx57].nid_ntc = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p41[idx57].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx58 = 0; idx58 < 7; idx58++) {
    outC->_L31_then_IfBlock1.p46[idx58].valid = kcg_true;
    outC->_L31_then_IfBlock1.p46[idx58].q_dir = Q_DIR_Reverse;
    outC->_L31_then_IfBlock1.p46[idx58].m_leveltr = M_LEVELTR_Level_0;
    outC->_L31_then_IfBlock1.p46[idx58].nid_ntc = kcg_lit_int32(0);
  }
  for (idx59 = 0; idx59 < 3; idx59++) {
    outC->_L31_then_IfBlock1.p80[idx59].valid = kcg_true;
    outC->_L31_then_IfBlock1.p80[idx59].q_dir = Q_DIR_Reverse;
    outC->_L31_then_IfBlock1.p80[idx59].q_scale = Q_SCALE_10_cm_scale;
    outC->_L31_then_IfBlock1.p80[idx59].d_mamode = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p80[idx59].m_mamode = M_MAMODE_On_Sight;
    outC->_L31_then_IfBlock1.p80[idx59].v_mamode = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p80[idx59].l_mamode = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p80[idx59].l_ackmamode = kcg_lit_int32(0);
    outC->_L31_then_IfBlock1.p80[idx59].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L31_then_IfBlock1.p12_received = kcg_true;
  outC->_L31_then_IfBlock1.p15_received = kcg_true;
  outC->_L31_then_IfBlock1.p21_received = kcg_true;
  outC->_L31_then_IfBlock1.p27_received = kcg_true;
  outC->_L31_then_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L31_then_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L32_then_IfBlock1 = kcg_true;
  outC->_L33_then_IfBlock1 = kcg_true;
  outC->_L34_then_IfBlock1.valid = kcg_true;
  outC->_L34_then_IfBlock1.timestamp = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.trainPositionIsUnknown = kcg_true;
  outC->_L34_then_IfBlock1.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L34_then_IfBlock1.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.valid = kcg_true;
  outC->_L34_then_IfBlock1.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L34_then_IfBlock1.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_then_IfBlock1.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx60 = 0; idx60 < 33; idx60++) {
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].valid = kcg_true;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_dir =
      Q_DIR_Reverse;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].d_link =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].nid_c =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].nid_bg =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34_then_IfBlock1.LRBG.infoFromPassing.linkedBGs[idx60].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L34_then_IfBlock1.LRBG.missed = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.valid = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(
      0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(
      0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx61 = 0; idx61 < 33; idx61++) {
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].valid =
      kcg_true;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_dir =
      Q_DIR_Reverse;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].d_link =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].nid_c =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].nid_bg =
      kcg_lit_int32(0);
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L34_then_IfBlock1.prvLRBG.infoFromPassing.linkedBGs[idx61].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L34_then_IfBlock1.prvLRBG.missed = kcg_true;
  outC->_L34_then_IfBlock1.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L34_then_IfBlock1.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L34_then_IfBlock1.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L34_then_IfBlock1.linkingIsUsedOnboard = kcg_true;
  outC->_L34_then_IfBlock1.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L34_then_IfBlock1.maxSafeRearEndPosition = kcg_lit_int32(0);
  for (idx62 = 0; idx62 < 7; idx62++) {
    outC->_L35_then_IfBlock1.p41[idx62].valid = kcg_true;
    outC->_L35_then_IfBlock1.p41[idx62].q_dir = Q_DIR_Reverse;
    outC->_L35_then_IfBlock1.p41[idx62].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35_then_IfBlock1.p41[idx62].d_leveltr = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p41[idx62].m_leveltr = M_LEVELTR_Level_0;
    outC->_L35_then_IfBlock1.p41[idx62].nid_ntc = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p41[idx62].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx63 = 0; idx63 < 7; idx63++) {
    outC->_L35_then_IfBlock1.p46[idx63].valid = kcg_true;
    outC->_L35_then_IfBlock1.p46[idx63].q_dir = Q_DIR_Reverse;
    outC->_L35_then_IfBlock1.p46[idx63].m_leveltr = M_LEVELTR_Level_0;
    outC->_L35_then_IfBlock1.p46[idx63].nid_ntc = kcg_lit_int32(0);
  }
  for (idx64 = 0; idx64 < 3; idx64++) {
    outC->_L35_then_IfBlock1.p80[idx64].valid = kcg_true;
    outC->_L35_then_IfBlock1.p80[idx64].q_dir = Q_DIR_Reverse;
    outC->_L35_then_IfBlock1.p80[idx64].q_scale = Q_SCALE_10_cm_scale;
    outC->_L35_then_IfBlock1.p80[idx64].d_mamode = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p80[idx64].m_mamode = M_MAMODE_On_Sight;
    outC->_L35_then_IfBlock1.p80[idx64].v_mamode = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p80[idx64].l_mamode = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p80[idx64].l_ackmamode = kcg_lit_int32(0);
    outC->_L35_then_IfBlock1.p80[idx64].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->_L35_then_IfBlock1.p12_received = kcg_true;
  outC->_L35_then_IfBlock1.p15_received = kcg_true;
  outC->_L35_then_IfBlock1.p21_received = kcg_true;
  outC->_L35_then_IfBlock1.p27_received = kcg_true;
  outC->_L35_then_IfBlock1.LRBG = kcg_lit_int32(0);
  outC->_L35_then_IfBlock1.referenceLocation = kcg_lit_int32(0);
  outC->_L36_then_IfBlock1 = M_LEVEL_Level_0;
  outC->_L37_then_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.nid_operational = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.l_train = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_baliseAntenna_2_frontend.nominal = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_baliseAntenna_2_frontend.d_min = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_baliseAntenna_2_frontend.d_max = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_frontend_2_rearend.nominal = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_frontend_2_rearend.d_min = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.d_frontend_2_rearend.d_max = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.locationAccuracy_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.locationAccuracy_DefaultValue.d_min = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.locationAccuracy_DefaultValue.d_max = kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.centerDetectionAcc_DefaultValue.nominal =
    kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.centerDetectionAcc_DefaultValue.d_min =
    kcg_lit_int32(0);
  outC->_L37_then_IfBlock1.centerDetectionAcc_DefaultValue.d_max =
    kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.valid = kcg_true;
  outC->_L38_then_IfBlock1.nid_packet = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.q_dir = Q_DIR_Reverse;
  outC->_L38_then_IfBlock1.q_scale = Q_SCALE_10_cm_scale;
  outC->_L38_then_IfBlock1.d_validnv = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.nid_c = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.n_iter_nid_c = kcg_lit_int32(0);
  for (idx65 = 0; idx65 < 32; idx65++) {
    outC->_L38_then_IfBlock1.nid_c_list[idx65].valid = kcg_true;
    outC->_L38_then_IfBlock1.nid_c_list[idx65].nid_c = kcg_lit_int32(0);
  }
  outC->_L38_then_IfBlock1.v_nvshunt = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvstff = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvonsight = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvlimsuperv = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvunfit = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvrel = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.d_nvroll = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.q_nvsbtsmperm = Q_NVSBTSMPERM_No;
  outC->_L38_then_IfBlock1.q_nvemrrls =
    Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill;
  outC->_L38_then_IfBlock1.q_nvguiperm = Q_NVGUIPERM_No;
  outC->_L38_then_IfBlock1.q_nvsbfbperm = Q_NVSBFBPERM_No;
  outC->_L38_then_IfBlock1.q_nvinhsnicperm = Q_NVINHSMICPERM_No;
  outC->_L38_then_IfBlock1.v_nvallowovtrp = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.v_nvsupovtrp = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.d_nvovtrp = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.t_nvovtrp = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.d_nvpotrp = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.m_nvcontact = M_NVCONTACT_Train_trip;
  outC->_L38_then_IfBlock1.t_nvcontact = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.m_nvderun = M_NVDERUN_No;
  outC->_L38_then_IfBlock1.d_nvstff = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.q_nvdriver_adhes = Q_NVDRIVER_ADHES_Not_allowed;
  outC->_L38_then_IfBlock1.a_nvmaxredadh1 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.a_nvmaxredadh2 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.a_nvmaxredadh3 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.q_nvlocacc = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.m_nvavadh = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.m_nvebcl = M_NVEBCL_Confidence_level_50;
  outC->_L38_then_IfBlock1.q_nvkint =
    Q_NVKINT_No_integrated_correction_factors_follow;
  outC->_L38_then_IfBlock1.q_nvkvintset = Q_NVKVINTSET_Freight_trains;
  outC->_L38_then_IfBlock1.a_nvp12 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.a_nvp23 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.v_nvkvint = kcg_lit_int32(0);
  outC->_L38_then_IfBlock1.m_nvkvint_12 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.m_nvkvint_23 = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.n_iter_n = kcg_lit_int32(0);
  for (idx66 = 0; idx66 < 32; idx66++) {
    outC->_L38_then_IfBlock1.n_iter_n_list[idx66].valid = kcg_true;
    outC->_L38_then_IfBlock1.n_iter_n_list[idx66].v_nvkvint_n = kcg_lit_int32(0);
    outC->_L38_then_IfBlock1.n_iter_n_list[idx66].m_nvkvint_n_12 =
      kcg_lit_float32(0.0);
    outC->_L38_then_IfBlock1.n_iter_n_list[idx66].m_nvkvint_n_23 =
      kcg_lit_float32(0.0);
  }
  outC->_L38_then_IfBlock1.n_iter_k = kcg_lit_int32(0);
  for (idx68 = 0; idx68 < 32; idx68++) {
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].valid = kcg_true;
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].q_nvkvintset_k =
      Q_NVKVINTSET_Freight_trains;
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].a_nvp12_k = kcg_lit_float32(0.0);
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].a_nvp23_k = kcg_lit_float32(0.0);
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].v_nvkvint_k = kcg_lit_int32(0);
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].m_nvkvint_k_12 =
      kcg_lit_float32(0.0);
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].m_nvkvint_k_23 =
      kcg_lit_float32(0.0);
    outC->_L38_then_IfBlock1.n_iter_k_list[idx68].n_iter_k_m = kcg_lit_int32(0);
    for (idx67 = 0; idx67 < 32; idx67++) {
      outC->_L38_then_IfBlock1.n_iter_k_list[idx68].n_iter_k_m_list[idx67].valid =
        kcg_true;
      outC->_L38_then_IfBlock1.n_iter_k_list[idx68].n_iter_k_m_list[idx67].v_nvkvint_k_m =
        kcg_lit_int32(0);
      outC->_L38_then_IfBlock1.n_iter_k_list[idx68].n_iter_k_m_list[idx67].m_nvkvint_km_12 =
        kcg_lit_float32(0.0);
      outC->_L38_then_IfBlock1.n_iter_k_list[idx68].n_iter_k_m_list[idx67].m_nvkvint_km_23 =
        kcg_lit_float32(0.0);
    }
  }
  outC->_L38_then_IfBlock1.l_nvkrint = L_NVKRINT_0m;
  outC->_L38_then_IfBlock1.m_nvkrint = kcg_lit_float32(0.0);
  outC->_L38_then_IfBlock1.n_iter_l = kcg_lit_int32(0);
  for (idx69 = 0; idx69 < 32; idx69++) {
    outC->_L38_then_IfBlock1.n_iter_l_list[idx69].valid = kcg_true;
    outC->_L38_then_IfBlock1.n_iter_l_list[idx69].l_nvkrint_l = L_NVKRINT_0m;
    outC->_L38_then_IfBlock1.n_iter_l_list[idx69].m_nvkrint_l = kcg_lit_float32(
        0.0);
  }
  outC->_L38_then_IfBlock1.m_nvktint = kcg_lit_float32(0.0);
  for (idx70 = 0; idx70 < 5; idx70++) {
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].v_main = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].v_loa = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].t_loa = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].l_section = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].l_endsection = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].t_sectiontimer =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].t_endtimer = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_dp = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].v_releasedp = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_startol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].t_ol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].d_ol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_12[idx70].v_releaseol = kcg_lit_int32(0);
  }
  outC->Data_From_Track_Packets_at_ML.P_135.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_135.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_137.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_137.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_137.q_srstop =
    Q_SRSTOP_Stop_if_in_SR_mode;
  outC->Data_From_Track_Packets_at_ML.P_138.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_138.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_138.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_138.d_startreverse = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.P_138.l_reversearea = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.P_139.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_139.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_139.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_139.d_reverse = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.P_139.v_reverse = kcg_lit_int32(0);
  for (idx71 = 0; idx71 < 5; idx71++) {
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].v_loa = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].t_loa = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].l_section = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_sectiontimer_k =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].t_sectiontimer_k =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_sectiontimerstoploc_k =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].l_endsection = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_sectiontimer =
      Q_SECTIONTIMER_No_Section_Timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].t_sectiontimer =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_sectiontimerstoploc =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_endtimer =
      Q_ENDTIMER_No_End_section_timer_information;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].t_endtimer = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_endtimerstartloc =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_dangerpoint =
      Q_DANGERPOINT_No_danger_point_information;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_dp = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].v_releasedp = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].q_overlap =
      Q_OVERLAP_No_overlap_information;
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_startol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].t_ol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].d_ol = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_15[idx71].v_releaseol = kcg_lit_int32(0);
  }
  for (idx72 = 0; idx72 < 7; idx72++) {
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].d_gradient = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].q_gdir = Q_GDIR_downhill;
    outC->Data_From_Track_Packets_at_ML.P_21[idx72].g_a = kcg_lit_int32(0);
  }
  outC->Data_From_Track_Packets_at_ML.P_27.valid = kcg_true;
  outC->Data_From_Track_Packets_at_ML.P_27.q_dir = Q_DIR_Reverse;
  outC->Data_From_Track_Packets_at_ML.P_27.q_scale = Q_SCALE_10_cm_scale;
  outC->Data_From_Track_Packets_at_ML.P_27.d_static = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.P_27.v_static = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.P_27.q_front =
    Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
  for (idx73 = 0; idx73 < 7; idx73++) {
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[idx73].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[idx73].q_diff =
      Q_DIFF_Cant_Deficiency_specific_category;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[idx73].nc_cddiff =
      NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[idx73].nc_diff =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_27.diffArray[idx73].v_diff =
      kcg_lit_int32(0);
  }
  for (idx75 = 0; idx75 < 7; idx75++) {
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].d_static =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].v_static =
      kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].q_front =
      Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element;
    for (idx74 = 0; idx74 < 7; idx74++) {
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].diffArray[idx74].valid =
        kcg_true;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].diffArray[idx74].q_diff =
        Q_DIFF_Cant_Deficiency_specific_category;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].diffArray[idx74].nc_cddiff =
        NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm;
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].diffArray[idx74].nc_diff =
        kcg_lit_int32(0);
      outC->Data_From_Track_Packets_at_ML.P_27.SSPArray[idx75].diffArray[idx74].v_diff =
        kcg_lit_int32(0);
    }
  }
  for (idx76 = 0; idx76 < 7; idx76++) {
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].d_leveltr = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].nid_ntc = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_41[idx76].l_ackleveltr = kcg_lit_int32(0);
  }
  for (idx77 = 0; idx77 < 7; idx77++) {
    outC->Data_From_Track_Packets_at_ML.P_46[idx77].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_46[idx77].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_46[idx77].m_leveltr = M_LEVELTR_Level_0;
    outC->Data_From_Track_Packets_at_ML.P_46[idx77].nid_ntc = kcg_lit_int32(0);
  }
  for (idx78 = 0; idx78 < 7; idx78++) {
    outC->Data_From_Track_Packets_at_ML.P_63[idx78].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_63[idx78].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_63[idx78].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->Data_From_Track_Packets_at_ML.P_63[idx78].nid_c = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_63[idx78].nid_bg = kcg_lit_int32(0);
  }
  for (idx79 = 0; idx79 < 3; idx79++) {
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].valid = kcg_true;
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].q_dir = Q_DIR_Reverse;
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].q_scale = Q_SCALE_10_cm_scale;
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].d_mamode = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].m_mamode = M_MAMODE_On_Sight;
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].v_mamode = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].l_mamode = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].l_ackmamode = kcg_lit_int32(0);
    outC->Data_From_Track_Packets_at_ML.P_80[idx79].q_mamode = Q_MAMODE_as_the_EOA;
  }
  outC->Data_From_Track_Packets_at_ML.LRBG = kcg_lit_int32(0);
  outC->Data_From_Track_Packets_at_ML.referenceLocation = kcg_lit_int32(0);
  /* _L131=(TM::Read_P135#1)/ */ Read_P135_init_TM(&outC->Context_Read_P135_1);
  /* _L116=(TM::Read_P012#1)/ */ Read_P012_init_TM(&outC->Context_Read_P012_1);
  /* _L122=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_init_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_init_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_init_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_init_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_init_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_init_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* IfBlock1:then:_L35=(EVC_MEM_Support_Pkg::MEM_dataForLevelTransition)/ */
  MEM_dataForLevelTransition_init_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_dataForLevelTransition);
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->infoForLevelTransition,
    (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *)
      &cNoML_EVC_MEM_Support_Pkg);
  outC->level = M_LEVEL_Level_0;
  outC->LRBGpositionNeeded = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MEM_combineForLevelChange_reset_EVC_MEM_Support_Pkg(
  outC_MEM_combineForLevelChange_EVC_MEM_Support_Pkg *outC)
{
  /* _L131=(TM::Read_P135#1)/ */ Read_P135_reset_TM(&outC->Context_Read_P135_1);
  /* _L116=(TM::Read_P012#1)/ */ Read_P012_reset_TM(&outC->Context_Read_P012_1);
  /* _L122=(TM_specific::Read_P027V1_Legacy_for_ML#1)/ */
  Read_P027V1_Legacy_for_ML_reset_TM_specific(
    &outC->Context_Read_P027V1_Legacy_for_ML_1);
  /* _L129=(TM_specific::Read_P015_Legacy#1)/ */
  Read_P015_Legacy_reset_TM_specific(&outC->Context_Read_P015_Legacy_1);
  /* _L127=(TM_specific::Read_P139_Legacy#1)/ */
  Read_P139_Legacy_reset_TM_specific(&outC->Context_Read_P139_Legacy_1);
  /* _L134=(TM_specific::Read_P138_Legacy#1)/ */
  Read_P138_Legacy_reset_TM_specific(&outC->Context_Read_P138_Legacy_1);
  /* _L125=(TM_specific::Read_P137_Legacy#1)/ */
  Read_P137_Legacy_reset_TM_specific(&outC->Context_Read_P137_Legacy_1);
  /* _L136=(TM_specific::Read_P021_Legacy#1)/ */
  Read_P021_Legacy_reset_TM_specific(&outC->Context_Read_P021_Legacy_1);
  /* IfBlock1:then:_L35=(EVC_MEM_Support_Pkg::MEM_dataForLevelTransition)/ */
  MEM_dataForLevelTransition_reset_EVC_MEM_Support_Pkg(
    &outC->Context_MEM_dataForLevelTransition);
  kcg_copy_dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg(
    &outC->infoForLevelTransition,
    (dataCollectionForLevelTransition_T_EVC_MEM_Support_Pkg *)
      &cNoML_EVC_MEM_Support_Pkg);
  outC->level = M_LEVEL_Level_0;
  outC->LRBGpositionNeeded = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MEM_combineForLevelChange_EVC_MEM_Support_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

