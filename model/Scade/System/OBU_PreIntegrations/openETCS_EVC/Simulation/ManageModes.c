/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageModes.h"

/* ManageModes/ */
void ManageModes(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  /* Cab/ */
  cab_ID_T_TIU_Types_Pkg Cab,
  /* Data_From_DMI/ */
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  /* Data_From_F2_Functions/ */
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Data_From_Localisation/ */
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Data_From_TIU/ */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Data_From_Track/ */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  /* TripModeFromLevel/ */
  kcg_bool TripModeFromLevel,
  outC_ManageModes *outC)
{
  /* currentMode/ */
  T_Mode_Level_And_Mode_Types_Pkg last_currentMode;

  last_currentMode = outC->currentMode;
  outC->_L304 = TripModeFromLevel;
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &outC->_L295,
    Data_From_F2_Functions);
  /* _L301=(Interfaces::InputF2Functions#1)/ */
  InputF2Functions_Interfaces(&outC->_L295, &outC->Context_InputF2Functions_1);
  outC->_L301 = outC->Context_InputF2Functions_1.T_NVCONTACT_Overpass;
  outC->_L302 = outC->Context_InputF2Functions_1.Error_BG_System_Version;
  outC->_L300 = outC->Context_InputF2Functions_1.Failure_Occured;
  outC->_L298 =
    outC->Context_InputF2Functions_1.Continue_Shunting_Function_Active;
  outC->_L299 = outC->Context_InputF2Functions_1.Stop_Shunting_Stored;
  outC->_L303 = outC->Context_InputF2Functions_1.Linking_Reaction_To_Trip;
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&outC->_L294, Data_From_STM);
  /* _L296=(Interfaces::InputSTM#1)/ */
  InputSTM_Interfaces(&outC->_L294, &outC->Context_InputSTM_1);
  outC->_L296 = outC->Context_InputSTM_1.Interface_To_National_System;
  outC->_L297 = outC->Context_InputSTM_1.National_Trip_Order;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(&outC->_L190, Data_From_DMI);
  /* _L277=(Interfaces::InputDMI)/ */
  InputDMI_Interfaces(&outC->_L190, &outC->Context_InputDMI);
  outC->_L277 = outC->Context_InputDMI.Driver_Ack_LS;
  outC->_L279 = outC->Context_InputDMI.Driver_Ack_OS;
  outC->_L278 = outC->Context_InputDMI.Driver_Ack_RV;
  outC->_L280 = outC->Context_InputDMI.Driver_Ack_SH;
  outC->_L283 = outC->Context_InputDMI.Driver_Ack_SN;
  outC->_L281 = outC->Context_InputDMI.Driver_Ack_SR;
  outC->_L284 = outC->Context_InputDMI.Driver_Ack_TR;
  outC->_L282 = outC->Context_InputDMI.Driver_Ack_UN;
  outC->_L286 = outC->Context_InputDMI.Driver_Req_Exit_SH;
  outC->_L285 = outC->Context_InputDMI.Driver_Req_NL;
  outC->_L287 = outC->Context_InputDMI.Driver_Req_Override;
  outC->_L289 = outC->Context_InputDMI.Driver_Req_SH;
  outC->_L288 = outC->Context_InputDMI.Driver_Req_Start;
  outC->_L290 = outC->Context_InputDMI.ETCS_Isolated;
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &outC->_L262,
    Data_From_Localisation);
  /* _L256=(Interfaces::InputLocalisation#1)/ */
  InputLocalisation_Interfaces(
    &outC->_L262,
    &outC->Context_InputLocalisation_1);
  outC->_L256 = outC->Context_InputLocalisation_1.BG_In_Expected_List_In_SR;
  outC->_L257 = outC->Context_InputLocalisation_1.BG_In_Expected_List_In_SH;
  outC->_L258 =
    outC->Context_InputLocalisation_1.Linked_BG_Pased_In_Wrong_Direction;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L259,
    &outC->Context_InputLocalisation_1.Train_Position);
  outC->_L260 = outC->Context_InputLocalisation_1.Train_Speed;
  outC->_L261 = outC->Context_InputLocalisation_1.Train_Standstill;
  outC->_L83 = Current_Level;
  outC->_L157 = last_currentMode;
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    &outC->_L206,
    Data_From_TIU);
  outC->_L205 = Cab;
  /* _L177=(Interfaces::InputTIUManagement#1)/ */
  InputTIUManagement_Interfaces(
    &outC->_L206,
    outC->_L205,
    &outC->Context_InputTIUManagement_1);
  outC->_L177 = outC->Context_InputTIUManagement_1.Train_Permitted_NL;
  outC->_L180 = outC->Context_InputTIUManagement_1.Train_Permitted_PS;
  outC->_L179 = outC->Context_InputTIUManagement_1.Train_Req_SL;
  outC->_L181 = outC->Context_InputTIUManagement_1.All_Desks_Closed;
  outC->_L182 = outC->Context_InputTIUManagement_1.Desk_Open;
  outC->_L293 = outC->Context_InputTIUManagement_1.OnBoard_Powered;
  outC->_L292 = outC->Context_InputTIUManagement_1.Valid_Train_Data_Stored;
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->_L220,
    Data_From_Track);
  /* _L210=(Interfaces::InputTrackManagement#1)/ */
  InputTrackManagement_Interfaces(
    &outC->_L220,
    &outC->Context_InputTrackManagement_1);
  outC->_L210 = outC->Context_InputTrackManagement_1.MA_SSP_Gradient_Available;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->_L212,
    &outC->Context_InputTrackManagement_1.Mode_Profile_On_Board);
  outC->_L213 = outC->Context_InputTrackManagement_1.Shunting_Granted_By_RBC;
  outC->_L214 = outC->Context_InputTrackManagement_1.Trip_Order_Given_By_Balise;
  outC->_L215 = outC->Context_InputTrackManagement_1.List_BG_Related_To_SR_Empty;
  outC->_L216 = outC->Context_InputTrackManagement_1.Stop_If_In_Shunting;
  outC->_L217 = outC->Context_InputTrackManagement_1.Stop_If_In_SR;
  outC->_L221 = outC->Context_InputTrackManagement_1.RCB_Ack_And_EB_Revocked;
  outC->_L222 = outC->Context_InputTrackManagement_1.RBC_Authorized_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L223,
    &outC->Context_InputTrackManagement_1.Reversing_Data);
  outC->_L254 =
    outC->Context_InputTrackManagement_1.Emergency_Stop_Message_Received;
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L237,
    Data_From_Speed_and_Supervision);
  /* _L226=(Interfaces::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_Interfaces(
    &outC->_L237,
    &outC->Context_InputSpeedAndSupervision_1);
  outC->_L226 =
    outC->Context_InputSpeedAndSupervision_1.Estimated_Front_End_Overpass_SR_Distance;
  outC->_L227 =
    outC->Context_InputSpeedAndSupervision_1.Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  outC->_L229 = outC->Context_InputSpeedAndSupervision_1.Override_Function_Active;
  outC->_L231 =
    outC->Context_InputSpeedAndSupervision_1.Train_Overpass_EOA_Antenna;
  outC->_L232 =
    outC->Context_InputSpeedAndSupervision_1.Train_Overpass_EOA_Front_End;
  outC->_L235 =
    outC->Context_InputSpeedAndSupervision_1.Train_Speed_Under_Override_Limit;
  /* _L55=(ComputeModesConditions#1)/ */
  ComputeModesConditions(
    outC->_L83,
    outC->_L157,
    outC->_L177,
    outC->_L180,
    outC->_L179,
    outC->_L181,
    outC->_L182,
    outC->_L293,
    outC->_L292,
    outC->_L277,
    outC->_L279,
    outC->_L278,
    outC->_L280,
    outC->_L283,
    outC->_L281,
    outC->_L284,
    outC->_L282,
    outC->_L286,
    outC->_L285,
    outC->_L287,
    outC->_L289,
    outC->_L288,
    outC->_L290,
    outC->_L210,
    &outC->_L212,
    outC->_L213,
    outC->_L214,
    outC->_L215,
    outC->_L216,
    outC->_L217,
    outC->_L221,
    outC->_L222,
    &outC->_L223,
    outC->_L254,
    outC->_L226,
    outC->_L227,
    outC->_L229,
    outC->_L231,
    outC->_L232,
    outC->_L235,
    outC->_L256,
    outC->_L257,
    outC->_L258,
    &outC->_L259,
    outC->_L260,
    outC->_L261,
    outC->_L296,
    outC->_L297,
    outC->_L301,
    outC->_L302,
    outC->_L300,
    outC->_L298,
    outC->_L299,
    outC->_L303,
    outC->_L304,
    &outC->Context_ComputeModesConditions_1);
  outC->_L55 = outC->Context_ComputeModesConditions_1.Condition1;
  outC->_L29 = outC->Context_ComputeModesConditions_1.Condition2;
  outC->_L28 = outC->Context_ComputeModesConditions_1.Condition3;
  outC->_L27 = outC->Context_ComputeModesConditions_1.Condition4;
  outC->_L37 = outC->Context_ComputeModesConditions_1.Condition5;
  outC->_L36 = outC->Context_ComputeModesConditions_1.Condition6;
  outC->_L61 = outC->Context_ComputeModesConditions_1.Condition7;
  outC->_L46 = outC->Context_ComputeModesConditions_1.Condition8;
  outC->_L41 = outC->Context_ComputeModesConditions_1.Condition10;
  outC->_L56 = outC->Context_ComputeModesConditions_1.Condition13;
  outC->_L54 = outC->Context_ComputeModesConditions_1.Condition14;
  outC->_L53 = outC->Context_ComputeModesConditions_1.Condition15;
  outC->_L26 = outC->Context_ComputeModesConditions_1.Condition19;
  outC->_L60 = outC->Context_ComputeModesConditions_1.Condition21;
  outC->_L25 = outC->Context_ComputeModesConditions_1.Condition22;
  outC->_L35 = outC->Context_ComputeModesConditions_1.Condition23;
  outC->_L40 = outC->Context_ComputeModesConditions_1.Condition25;
  outC->_L30 = outC->Context_ComputeModesConditions_1.Condition26;
  outC->_L24 = outC->Context_ComputeModesConditions_1.Condition27;
  outC->_L23 = outC->Context_ComputeModesConditions_1.Condition28;
  outC->_L20 = outC->Context_ComputeModesConditions_1.Condition29;
  outC->_L22 = outC->Context_ComputeModesConditions_1.Condition30;
  outC->_L39 = outC->Context_ComputeModesConditions_1.Condition31;
  outC->_L38 = outC->Context_ComputeModesConditions_1.Condition32;
  outC->_L52 = outC->Context_ComputeModesConditions_1.Condition34;
  outC->_L47 = outC->Context_ComputeModesConditions_1.Condition37;
  outC->_L51 = outC->Context_ComputeModesConditions_1.Condition40;
  outC->_L49 = outC->Context_ComputeModesConditions_1.Condition44;
  outC->_L48 = outC->Context_ComputeModesConditions_1.Condition45;
  outC->_L57 = outC->Context_ComputeModesConditions_1.Condition46;
  outC->_L21 = outC->Context_ComputeModesConditions_1.Condition47;
  outC->_L34 = outC->Context_ComputeModesConditions_1.Condition50;
  outC->_L33 = outC->Context_ComputeModesConditions_1.Condition51;
  outC->_L64 = outC->Context_ComputeModesConditions_1.Condition56;
  outC->_L63 = outC->Context_ComputeModesConditions_1.Condition58;
  outC->_L65 = outC->Context_ComputeModesConditions_1.Condition59;
  outC->_L59 = outC->Context_ComputeModesConditions_1.Condition60;
  outC->_L32 = outC->Context_ComputeModesConditions_1.Condition61;
  outC->_L58 = outC->Context_ComputeModesConditions_1.Condition62;
  outC->_L62 = outC->Context_ComputeModesConditions_1.Condition63;
  outC->_L31 = outC->Context_ComputeModesConditions_1.Condition68;
  outC->_L44 = outC->Context_ComputeModesConditions_1.Condition70;
  outC->_L43 = outC->Context_ComputeModesConditions_1.Condition71;
  outC->_L42 = outC->Context_ComputeModesConditions_1.Condition72;
  outC->_L50 = outC->Context_ComputeModesConditions_1.Condition73;
  outC->_L45 = outC->Context_ComputeModesConditions_1.Condition74;
  outC->_L154 = outC->Context_ComputeModesConditions_1.Condition_Trip;
  outC->_L184 = outC->Context_ComputeModesConditions_1.Ack_LS_Req_To_Driver;
  outC->_L163 = outC->Context_ComputeModesConditions_1.Ack_OS_Req_To_Driver;
  outC->_L175 = outC->Context_ComputeModesConditions_1.Ack_RV_Req_To_Driver;
  outC->_L164 = outC->Context_ComputeModesConditions_1.Ack_SH_Req_To_Driver;
  outC->_L185 = outC->Context_ComputeModesConditions_1.Ack_SN_Req_To_Driver;
  outC->_L156 = outC->Context_ComputeModesConditions_1.Ack_SR_Req_To_Driver;
  outC->_L170 = outC->Context_ComputeModesConditions_1.Ack_TR_Req_To_Driver;
  outC->_L174 = outC->Context_ComputeModesConditions_1.Ack_UN_Req_To_Driver;
  outC->_L183 = outC->Context_ComputeModesConditions_1.Clean_BG_List_SH_Area;
  outC->_L153 = outC->Context_ComputeModesConditions_1.EB_Requested;
  outC->_L173 =
    outC->Context_ComputeModesConditions_1.End_Of_Mission_Procedure_Req;
  outC->_L161 = outC->Context_ComputeModesConditions_1.MA_Req_To_RBC;
  outC->_L162 = outC->Context_ComputeModesConditions_1.Request_For_SH_To_RBC;
  outC->_L169 = outC->Context_ComputeModesConditions_1.Service_Brake_Command;
  outC->_L155 = outC->Context_ComputeModesConditions_1.SH_Refused_By_RBC_To_DMI;
  /* _L1=(SwitchModes#1)/ */
  SwitchModes(
    outC->_L55,
    outC->_L29,
    outC->_L28,
    outC->_L27,
    outC->_L37,
    outC->_L36,
    outC->_L61,
    outC->_L46,
    outC->_L41,
    outC->_L56,
    outC->_L54,
    outC->_L53,
    outC->_L26,
    outC->_L60,
    outC->_L25,
    outC->_L35,
    outC->_L40,
    outC->_L30,
    outC->_L24,
    outC->_L23,
    outC->_L20,
    outC->_L22,
    outC->_L39,
    outC->_L38,
    outC->_L52,
    outC->_L47,
    outC->_L51,
    outC->_L49,
    outC->_L48,
    outC->_L57,
    outC->_L21,
    outC->_L34,
    outC->_L33,
    outC->_L64,
    outC->_L63,
    outC->_L65,
    outC->_L59,
    outC->_L32,
    outC->_L58,
    outC->_L62,
    outC->_L31,
    outC->_L44,
    outC->_L43,
    outC->_L42,
    outC->_L50,
    outC->_L45,
    outC->_L154,
    &outC->Context_SwitchModes_1);
  outC->_L1 = outC->Context_SwitchModes_1.currentMode;
  /* _L291=(Interfaces::OutputManagement#1)/ */
  OutputManagement_Interfaces(
    outC->_L1,
    outC->_L184,
    outC->_L163,
    outC->_L175,
    outC->_L164,
    outC->_L185,
    outC->_L156,
    outC->_L170,
    outC->_L174,
    outC->_L183,
    outC->_L153,
    outC->_L173,
    outC->_L161,
    outC->_L162,
    outC->_L169,
    outC->_L155,
    &outC->Context_OutputManagement_1);
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L291,
    &outC->Context_OutputManagement_1.Data_To_DMI);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L250,
    &outC->Context_OutputManagement_1.Data_To_BG_Management);
  outC->_L251 = outC->Context_OutputManagement_1.EB_Requested;
  outC->_L252 = outC->Context_OutputManagement_1.Service_Brake_Command;
  outC->_L253 = outC->Context_OutputManagement_1.newMode;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L250);
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI,
    &outC->_L291);
  outC->EB_Requested = outC->_L251;
  outC->Service_Brake_Command = outC->_L252;
  outC->currentMode = outC->_L253;
}

#ifndef KCG_USER_DEFINED_INIT
void ManageModes_init(outC_ManageModes *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  outC->_L304 = kcg_true;
  outC->_L303 = kcg_true;
  outC->_L302 = kcg_true;
  outC->_L301 = kcg_true;
  outC->_L300 = kcg_true;
  outC->_L299 = kcg_true;
  outC->_L298 = kcg_true;
  outC->_L297 = kcg_true;
  outC->_L296 = kcg_true;
  outC->_L295.Common_Errors.linkedBGError = kcg_true;
  outC->_L295.Common_Errors.unlinkedBGError = kcg_true;
  outC->_L295.Common_Errors.BG_versionIncompatible = kcg_true;
  outC->_L295.Common_Errors.radioSequenceError = kcg_true;
  outC->_L295.Common_Errors.tNvContactError = kcg_true;
  outC->_L295.Common_Errors.otherTimingError = kcg_true;
  outC->_L295.Common_Errors.radioMessageConsistencyError = kcg_true;
  outC->_L295.Common_Errors.nid_c = kcg_lit_int32(0);
  outC->_L295.Common_Errors.nid_errorbg = kcg_lit_int32(0);
  outC->_L295.Failure_Occured = kcg_true;
  outC->_L295.Continue_Shunting_Active = kcg_true;
  outC->_L295.Stop_Shunting_Stored = kcg_true;
  outC->_L294.Interface_To_National_System = kcg_true;
  outC->_L294.National_trip_Order = kcg_true;
  outC->_L293 = kcg_true;
  outC->_L292 = kcg_true;
  outC->_L291.Ack_LS = kcg_true;
  outC->_L291.Ack_OS = kcg_true;
  outC->_L291.Ack_RV = kcg_true;
  outC->_L291.Ack_SH = kcg_true;
  outC->_L291.Ack_SN = kcg_true;
  outC->_L291.Ack_SR = kcg_true;
  outC->_L291.Ack_TR = kcg_true;
  outC->_L291.Ack_UN = kcg_true;
  outC->_L291.SH_Refused_By_RBC = kcg_true;
  outC->_L290 = kcg_true;
  outC->_L289 = kcg_true;
  outC->_L288 = kcg_true;
  outC->_L287 = kcg_true;
  outC->_L286 = kcg_true;
  outC->_L285 = kcg_true;
  outC->_L284 = kcg_true;
  outC->_L283 = kcg_true;
  outC->_L282 = kcg_true;
  outC->_L281 = kcg_true;
  outC->_L280 = kcg_true;
  outC->_L279 = kcg_true;
  outC->_L278 = kcg_true;
  outC->_L277 = kcg_true;
  outC->_L262.BG_In_List_Expected_BG_In_SR = kcg_true;
  outC->_L262.BG_In_List_Expected_BG_In_SH = kcg_true;
  outC->_L262.PositionErrors.outOfMemSpace = kcg_true;
  outC->_L262.PositionErrors.passedBG_foundNotWhereExpected = kcg_true;
  outC->_L262.PositionErrors.positionCalculation_inconsistent = kcg_true;
  outC->_L262.PositionErrors.linkedBGMissed = kcg_true;
  outC->_L262.PositionErrors.BGpassedInUnexpectedDirection = kcg_true;
  outC->_L262.PositionErrors.BG_LinkingConsistencyError = kcg_true;
  outC->_L262.PositionErrors.twoConsecutiveLinkedBGs_missed = kcg_true;
  outC->_L262.PositionErrors.doubleRepositioningError = kcg_true;
  outC->_L262.PositionErrors.bg.valid = kcg_true;
  outC->_L262.PositionErrors.bg.nid_c = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.nid_bg = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.q_link = Q_LINK_Unlinked;
  outC->_L262.PositionErrors.bg.location.nominal = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.location.d_min = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.location.d_max = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.valid = kcg_true;
  outC->_L262.PositionErrors.bg.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L262.PositionErrors.bg.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.valid = kcg_true;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(
      0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L262.PositionErrors.bg.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx = 0; idx < 33; idx++) {
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].valid = kcg_true;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_dir =
      Q_DIR_Reverse;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].d_link =
      kcg_lit_int32(0);
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].nid_c =
      kcg_lit_int32(0);
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].nid_bg =
      kcg_lit_int32(0);
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L262.PositionErrors.bg.infoFromPassing.linkedBGs[idx].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L262.PositionErrors.bg.missed = kcg_true;
  outC->_L262.Train_Position.valid = kcg_true;
  outC->_L262.Train_Position.timestamp = kcg_lit_int32(0);
  outC->_L262.Train_Position.trainPositionIsUnknown = kcg_true;
  outC->_L262.Train_Position.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L262.Train_Position.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L262.Train_Position.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L262.Train_Position.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L262.Train_Position.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L262.Train_Position.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L262.Train_Position.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.valid = kcg_true;
  outC->_L262.Train_Position.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L262.Train_Position.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L262.Train_Position.LRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L262.Train_Position.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx1 = 0; idx1 < 33; idx1++) {
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].valid =
      kcg_true;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_dir =
      Q_DIR_Reverse;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].d_link =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].nid_c =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].nid_bg =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L262.Train_Position.LRBG.infoFromPassing.linkedBGs[idx1].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L262.Train_Position.LRBG.missed = kcg_true;
  outC->_L262.Train_Position.prvLRBG.valid = kcg_true;
  outC->_L262.Train_Position.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L262.Train_Position.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.nid_c_fromLinkingBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.expectedLocation.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.expectedLocation.d_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.d_link.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.d_link.d_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.d_link.d_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_dir =
    Q_DIR_Reverse;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_scale =
    Q_SCALE_10_cm_scale;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.d_link =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_c =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L262.Train_Position.prvLRBG.infoFromLinking.linkingInfo.q_locacc =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_media =
    Q_MEDIA_Balise;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.m_mcount =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_c =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.nid_bg =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_link =
    Q_LINK_Unlinked;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid =
    kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc =
    kcg_lit_int32(0);
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L262.Train_Position.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx2 = 0; idx2 < 33; idx2++) {
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].valid =
      kcg_true;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_LRBG =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_dir =
      Q_DIR_Reverse;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].d_link =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_c =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].nid_bg =
      kcg_lit_int32(0);
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L262.Train_Position.prvLRBG.infoFromPassing.linkedBGs[idx2].q_locacc =
      kcg_lit_int32(0);
  }
  outC->_L262.Train_Position.prvLRBG.missed = kcg_true;
  outC->_L262.Train_Position.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L262.Train_Position.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L262.Train_Position.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L262.Train_Position.linkingIsUsedOnboard = kcg_true;
  outC->_L262.Train_Position.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L262.Train_Position.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L262.Train_Position.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L262.Train_Speed = kcg_lit_int32(0);
  outC->_L262.Train_Standstill = kcg_true;
  outC->_L232 = kcg_true;
  outC->_L256 = kcg_true;
  outC->_L257 = kcg_true;
  outC->_L258 = kcg_true;
  outC->_L259.valid = kcg_true;
  outC->_L259.timestamp = kcg_lit_int32(0);
  outC->_L259.trainPositionIsUnknown = kcg_true;
  outC->_L259.noCoordinateSystemHasBeenAssigned = kcg_true;
  outC->_L259.trainPosition.nominal = kcg_lit_int32(0);
  outC->_L259.trainPosition.d_min = kcg_lit_int32(0);
  outC->_L259.trainPosition.d_max = kcg_lit_int32(0);
  outC->_L259.estimatedFrontEndPosition = kcg_lit_int32(0);
  outC->_L259.minSafeFrontEndPosition = kcg_lit_int32(0);
  outC->_L259.maxSafeFrontEndPostion = kcg_lit_int32(0);
  outC->_L259.LRBG.valid = kcg_true;
  outC->_L259.LRBG.nid_c = kcg_lit_int32(0);
  outC->_L259.LRBG.nid_bg = kcg_lit_int32(0);
  outC->_L259.LRBG.q_link = Q_LINK_Unlinked;
  outC->_L259.LRBG.location.nominal = kcg_lit_int32(0);
  outC->_L259.LRBG.location.d_min = kcg_lit_int32(0);
  outC->_L259.LRBG.location.d_max = kcg_lit_int32(0);
  outC->_L259.LRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.valid = kcg_true;
  outC->_L259.LRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L259.LRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.valid = kcg_true;
  outC->_L259.LRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L259.LRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L259.LRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L259.LRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L259.LRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L259.LRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L259.LRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L259.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L259.LRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L259.LRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L259.LRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx3 = 0; idx3 < 33; idx3++) {
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].valid = kcg_true;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].nid_LRBG = kcg_lit_int32(0);
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_dir = Q_DIR_Reverse;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_scale = Q_SCALE_10_cm_scale;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].d_link = kcg_lit_int32(0);
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].nid_c = kcg_lit_int32(0);
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].nid_bg = kcg_lit_int32(0);
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L259.LRBG.infoFromPassing.linkedBGs[idx3].q_locacc = kcg_lit_int32(0);
  }
  outC->_L259.LRBG.missed = kcg_true;
  outC->_L259.prvLRBG.valid = kcg_true;
  outC->_L259.prvLRBG.nid_c = kcg_lit_int32(0);
  outC->_L259.prvLRBG.nid_bg = kcg_lit_int32(0);
  outC->_L259.prvLRBG.q_link = Q_LINK_Unlinked;
  outC->_L259.prvLRBG.location.nominal = kcg_lit_int32(0);
  outC->_L259.prvLRBG.location.d_min = kcg_lit_int32(0);
  outC->_L259.prvLRBG.location.d_max = kcg_lit_int32(0);
  outC->_L259.prvLRBG.seqNoOnTrack = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.valid = kcg_true;
  outC->_L259.prvLRBG.infoFromLinking.nid_bg_fromLinkingBG = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.nid_c_fromLinkingBG = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.expectedLocation.nominal = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.expectedLocation.d_min = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.expectedLocation.d_max = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.d_link.nominal = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.d_link.d_min = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.d_link.d_max = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.valid = kcg_true;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.nid_LRBG = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_dir = Q_DIR_Reverse;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_scale = Q_SCALE_10_cm_scale;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.d_link = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_newcountry =
    Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.nid_c = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.nid_bg = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_linkorientation =
    Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_linkreaction =
    Q_LINKREACTION_Train_trip;
  outC->_L259.prvLRBG.infoFromLinking.linkingInfo.q_locacc = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.valid = kcg_true;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.valid = kcg_true;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.q_media = Q_MEDIA_Balise;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.m_mcount = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.nid_c = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.nid_bg = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.q_link = Q_LINK_Unlinked;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.valid = kcg_true;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.timestamp =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_nominal =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_min =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.odo.o_max =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_safeNominal =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_rawNominal =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_lower =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.speed.v_upper =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.acceleration =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.nominal =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_min =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.BG_centerDetectionInaccuraccuracies.d_max =
    kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.q_nvlocacc = kcg_lit_int32(0);
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->_L259.prvLRBG.infoFromPassing.BG_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  for (idx4 = 0; idx4 < 33; idx4++) {
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].valid = kcg_true;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_LRBG = kcg_lit_int32(0);
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_dir = Q_DIR_Reverse;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_scale =
      Q_SCALE_10_cm_scale;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].d_link = kcg_lit_int32(0);
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_newcountry =
      Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_c = kcg_lit_int32(0);
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].nid_bg = kcg_lit_int32(0);
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkorientation =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_linkreaction =
      Q_LINKREACTION_Train_trip;
    outC->_L259.prvLRBG.infoFromPassing.linkedBGs[idx4].q_locacc = kcg_lit_int32(0);
  }
  outC->_L259.prvLRBG.missed = kcg_true;
  outC->_L259.nominalOrReverseToLRBG = Q_DLRBG_Reverse;
  outC->_L259.trainOrientationToLRBG = Q_DIRLRBG_Reverse;
  outC->_L259.trainRunningDirectionToLRBG = Q_DIRTRAIN_Reverse;
  outC->_L259.linkingIsUsedOnboard = kcg_true;
  outC->_L259.estimatedRearEndPosition = kcg_lit_int32(0);
  outC->_L259.minSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L259.maxSafeRearEndPosition = kcg_lit_int32(0);
  outC->_L260 = kcg_lit_int32(0);
  outC->_L261 = kcg_true;
  outC->_L254 = kcg_true;
  outC->_L250.EoM_Procedure_req = kcg_true;
  outC->_L250.Clean_BG_List_SH_Area = kcg_true;
  outC->_L250.MA_Req = kcg_true;
  outC->_L250.Req_for_SH_from_Driver = kcg_true;
  outC->_L250.Connection_to_RBC_req = kcg_true;
  outC->_L250.Position_Repport_Needed = kcg_true;
  outC->_L251 = kcg_true;
  outC->_L252 = kcg_true;
  outC->_L253 = NP_Level_And_Mode_Types_Pkg;
  outC->_L237.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L237.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L237.Override_Function_Active = kcg_true;
  outC->_L237.EOA_Antenna_Overpass = kcg_true;
  outC->_L237.EOA_Front_End = kcg_true;
  outC->_L237.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L226 = kcg_true;
  outC->_L227 = kcg_true;
  outC->_L229 = kcg_true;
  outC->_L231 = kcg_true;
  outC->_L235 = kcg_true;
  outC->_L223.Available = kcg_true;
  outC->_L223.Dist_Start = kcg_lit_int32(0);
  outC->_L223.Length = kcg_lit_int32(0);
  outC->_L223.Dist_Run = kcg_lit_int32(0);
  outC->_L223.Speed = kcg_lit_int32(0);
  outC->_L222 = kcg_true;
  outC->_L221 = kcg_true;
  outC->_L220.MA_SSP_Gradient_Available = kcg_true;
  for (idx5 = 0; idx5 < 3; idx5++) {
    outC->_L220.Mode_Profile_On_Board[idx5].Distance = kcg_lit_int32(0);
    outC->_L220.Mode_Profile_On_Board[idx5].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L220.Mode_Profile_On_Board[idx5].Speed = kcg_lit_int32(0);
    outC->_L220.Mode_Profile_On_Board[idx5].Length = kcg_lit_int32(0);
    outC->_L220.Mode_Profile_On_Board[idx5].Length_Ack = kcg_lit_int32(0);
  }
  outC->_L220.Shunting_granted_By_RBC = kcg_true;
  outC->_L220.Trip_Order_Given_By_Balise = kcg_true;
  outC->_L220.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->_L220.Stop_If_In_shunting = kcg_true;
  outC->_L220.Stop_If_In_SR = kcg_true;
  outC->_L220.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->_L220.RBC_Authorized_SR = kcg_true;
  outC->_L220.Reversing_Data.Available = kcg_true;
  outC->_L220.Reversing_Data.Dist_Start = kcg_lit_int32(0);
  outC->_L220.Reversing_Data.Length = kcg_lit_int32(0);
  outC->_L220.Reversing_Data.Dist_Run = kcg_lit_int32(0);
  outC->_L220.Reversing_Data.Speed = kcg_lit_int32(0);
  outC->_L220.Emergency_Stop_Message_Received = kcg_true;
  outC->_L217 = kcg_true;
  outC->_L216 = kcg_true;
  outC->_L215 = kcg_true;
  outC->_L214 = kcg_true;
  outC->_L213 = kcg_true;
  outC->_L212.Distance = kcg_lit_int32(0);
  outC->_L212.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L212.Speed = kcg_lit_int32(0);
  outC->_L212.Length = kcg_lit_int32(0);
  outC->_L212.Length_Ack = kcg_lit_int32(0);
  outC->_L210 = kcg_true;
  outC->_L206.train_status.valid = kcg_true;
  outC->_L206.train_status.m_sleeping_st = signal_active_TIU_Types_Pkg;
  outC->_L206.train_status.m_passiveshunting_st =
    passive_shunting_permitted_TIU_Types_Pkg;
  outC->_L206.train_status.m_nonleading_st =
    non_leading_signall_status_not_defined_TIU_Types_Pkg;
  outC->_L206.train_status.m_cab_st = cab_signal_status_not_defined_TIU_Types_Pkg;
  outC->_L206.train_status.m_directioncontroller_st =
    direction_controller_in_neutral_TIU_Types_Pkg;
  outC->_L206.train_status.m_trainintegrity_st =
    train_is_not_integer_TIU_Types_Pkg;
  outC->_L206.train_status.m_traction_st = traction_on_TIU_Types_Pkg;
  outC->_L206.brake_status.valid = kcg_true;
  outC->_L206.brake_status.m_regenerativebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L206.brake_status.m_eddycurrentbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L206.brake_status.m_magneticshoebrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L206.brake_status.m_electropneumaticbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L206.brake_status.m_additionalbrake_st =
    brake_status_not_defined_TIU_Types_Pkg;
  outC->_L206.brake_pressure.valid = kcg_true;
  outC->_L206.brake_pressure.pressure = kcg_lit_int32(0);
  outC->_L206.train_data_entry_type = fixed_entry_type_TIU_Types_Pkg;
  outC->_L206.train_data_info.valid = kcg_true;
  outC->_L206.train_data_info.acknowledgedByDriver = kcg_true;
  outC->_L206.train_data_info.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->_L206.train_data_info.cantDeficientcy = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->_L206.train_data_info.trainLength = kcg_lit_int32(0);
  outC->_L206.train_data_info.brakePerctage = kcg_lit_int32(0);
  outC->_L206.train_data_info.maxTrainSpeed = kcg_lit_int32(0);
  outC->_L206.train_data_info.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->_L206.train_data_info.axleLoadCategory = M_AXLELOADCAT_A;
  outC->_L206.train_data_info.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->_L206.train_data_info.axleNumber = kcg_lit_int32(0);
  outC->_L206.train_data_info.numberNationalSystems = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L206.train_data_info.nationSystems[idx6] = kcg_lit_int32(0);
  }
  outC->_L206.train_data_info.numberTractionSystems = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 4; idx7++) {
    outC->_L206.train_data_info.tractionSystem[idx7].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->_L206.train_data_info.tractionSystem[idx7].nid_ctraction =
      kcg_lit_int32(0);
  }
  outC->_L206.type_I_train_and_brake_inhibition.valid = kcg_true;
  outC->_L206.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L206.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.d_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L206.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.now =
    kcg_lit_int32(0);
  outC->_L206.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.l_test_trackcond.distance =
    kcg_lit_int32(0);
  outC->_L206.type_I_train_and_brake_inhibition.nothing_to_resume_profile_follow.m_trackcond =
    non_stopping_area_TIU_Types_Pkg;
  outC->_L206.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.now =
    kcg_lit_int32(0);
  outC->_L206.type_I_train_and_brake_inhibition.empty_profile_initial_state_to_be_resumed.distance =
    kcg_lit_int32(0);
  outC->_L205 = CabUndefined_TIU_Types_Pkg;
  outC->_L190.Ack_LS = kcg_true;
  outC->_L190.Ack_OS = kcg_true;
  outC->_L190.Ack_RV = kcg_true;
  outC->_L190.Ack_SH = kcg_true;
  outC->_L190.Ack_SN = kcg_true;
  outC->_L190.Ack_SR = kcg_true;
  outC->_L190.Ack_TR = kcg_true;
  outC->_L190.Ack_UN = kcg_true;
  outC->_L190.Req_Exit_SH = kcg_true;
  outC->_L190.Req_NL = kcg_true;
  outC->_L190.Req_Override = kcg_true;
  outC->_L190.Req_SH = kcg_true;
  outC->_L190.Req_Start = kcg_true;
  outC->_L190.ETCS_Isolated = kcg_true;
  outC->_L185 = kcg_true;
  outC->_L184 = kcg_true;
  outC->_L183 = kcg_true;
  outC->_L182 = kcg_true;
  outC->_L181 = kcg_true;
  outC->_L180 = kcg_true;
  outC->_L179 = kcg_true;
  outC->_L177 = kcg_true;
  outC->_L175 = kcg_true;
  outC->_L174 = kcg_true;
  outC->_L173 = kcg_true;
  outC->_L170 = kcg_true;
  outC->_L169 = kcg_true;
  outC->_L164 = kcg_true;
  outC->_L163 = kcg_true;
  outC->_L162 = kcg_true;
  outC->_L161 = kcg_true;
  outC->_L157 = NP_Level_And_Mode_Types_Pkg;
  outC->_L156 = kcg_true;
  outC->_L155 = kcg_true;
  outC->_L154 = kcg_true;
  outC->_L153 = kcg_true;
  outC->_L83 = M_LEVEL_Level_0;
  outC->_L65 = kcg_true;
  outC->_L64 = kcg_true;
  outC->_L63 = kcg_true;
  outC->_L62 = kcg_true;
  outC->_L61 = kcg_true;
  outC->_L60 = kcg_true;
  outC->_L59 = kcg_true;
  outC->_L58 = kcg_true;
  outC->_L57 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_true;
  outC->_L53 = kcg_true;
  outC->_L52 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_true;
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L1 = NP_Level_And_Mode_Types_Pkg;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Data_To_DMI.Ack_LS = kcg_true;
  outC->Data_To_DMI.Ack_OS = kcg_true;
  outC->Data_To_DMI.Ack_RV = kcg_true;
  outC->Data_To_DMI.Ack_SH = kcg_true;
  outC->Data_To_DMI.Ack_SN = kcg_true;
  outC->Data_To_DMI.Ack_SR = kcg_true;
  outC->Data_To_DMI.Ack_TR = kcg_true;
  outC->Data_To_DMI.Ack_UN = kcg_true;
  outC->Data_To_DMI.SH_Refused_By_RBC = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->EB_Requested = kcg_true;
  /* _L291=(Interfaces::OutputManagement#1)/ */
  OutputManagement_init_Interfaces(&outC->Context_OutputManagement_1);
  /* _L1=(SwitchModes#1)/ */ SwitchModes_init(&outC->Context_SwitchModes_1);
  /* _L55=(ComputeModesConditions#1)/ */
  ComputeModesConditions_init(&outC->Context_ComputeModesConditions_1);
  /* _L226=(Interfaces::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_init_Interfaces(
    &outC->Context_InputSpeedAndSupervision_1);
  /* _L210=(Interfaces::InputTrackManagement#1)/ */
  InputTrackManagement_init_Interfaces(&outC->Context_InputTrackManagement_1);
  /* _L177=(Interfaces::InputTIUManagement#1)/ */
  InputTIUManagement_init_Interfaces(&outC->Context_InputTIUManagement_1);
  /* _L256=(Interfaces::InputLocalisation#1)/ */
  InputLocalisation_init_Interfaces(&outC->Context_InputLocalisation_1);
  /* _L277=(Interfaces::InputDMI)/ */
  InputDMI_init_Interfaces(&outC->Context_InputDMI);
  /* _L296=(Interfaces::InputSTM#1)/ */
  InputSTM_init_Interfaces(&outC->Context_InputSTM_1);
  /* _L301=(Interfaces::InputF2Functions#1)/ */
  InputF2Functions_init_Interfaces(&outC->Context_InputF2Functions_1);
  outC->currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageModes_reset(outC_ManageModes *outC)
{
  /* _L291=(Interfaces::OutputManagement#1)/ */
  OutputManagement_reset_Interfaces(&outC->Context_OutputManagement_1);
  /* _L1=(SwitchModes#1)/ */ SwitchModes_reset(&outC->Context_SwitchModes_1);
  /* _L55=(ComputeModesConditions#1)/ */
  ComputeModesConditions_reset(&outC->Context_ComputeModesConditions_1);
  /* _L226=(Interfaces::InputSpeedAndSupervision#1)/ */
  InputSpeedAndSupervision_reset_Interfaces(
    &outC->Context_InputSpeedAndSupervision_1);
  /* _L210=(Interfaces::InputTrackManagement#1)/ */
  InputTrackManagement_reset_Interfaces(&outC->Context_InputTrackManagement_1);
  /* _L177=(Interfaces::InputTIUManagement#1)/ */
  InputTIUManagement_reset_Interfaces(&outC->Context_InputTIUManagement_1);
  /* _L256=(Interfaces::InputLocalisation#1)/ */
  InputLocalisation_reset_Interfaces(&outC->Context_InputLocalisation_1);
  /* _L277=(Interfaces::InputDMI)/ */
  InputDMI_reset_Interfaces(&outC->Context_InputDMI);
  /* _L296=(Interfaces::InputSTM#1)/ */
  InputSTM_reset_Interfaces(&outC->Context_InputSTM_1);
  /* _L301=(Interfaces::InputF2Functions#1)/ */
  InputF2Functions_reset_Interfaces(&outC->Context_InputF2Functions_1);
  outC->currentMode = SB_Level_And_Mode_Types_Pkg;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ManageModes.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

