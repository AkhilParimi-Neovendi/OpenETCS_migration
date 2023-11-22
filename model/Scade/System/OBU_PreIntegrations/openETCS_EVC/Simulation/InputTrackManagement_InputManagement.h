/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _InputTrackManagement_InputManagement_H_
#define _InputTrackManagement_InputManagement_H_

#include "kcg_types.h"
#include "Input_Messages_InputManagement.h"
#include "Input_Modes_InputManagement.h"
#include "Input_Level_Transition_InputManagement.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* Data_From_Track_To_Mode/ */ Data_From_Track_To_Mode;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* Data_From_Track_to_Level/ */ Data_From_Track_to_Level;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Input_Messages_InputManagement /* _L222=(InputManagement::Input_Messages#1)/ */ Context_Input_Messages_1;
  outC_Input_Modes_InputManagement /* _L98=(InputManagement::Input_Modes#1)/ */ Context_Input_Modes_1;
  outC_Input_MA_SSP_Gradient_InputManagement /* _L67=(InputManagement::Input_MA_SSP_Gradient#1)/ */ Context_Input_MA_SSP_Gradient_1;
  outC_Input_Level_Transition_InputManagement /* _L84=(InputManagement::Input_Level_Transition#1)/ */ Context_Input_Level_Transition_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_MA_SSP_Gradient_Available/ */ Loc_MA_SSP_Gradient_Available;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* Loc_Mode_Profile_On_Board/ */ Loc_Mode_Profile_On_Board;
  kcg_bool /* Loc_Shunting_Granted_By_RBC/ */ Loc_Shunting_Granted_By_RBC;
  kcg_bool /* Loc_Trip_Order_Given_By_Balise/ */ Loc_Trip_Order_Given_By_Balise;
  kcg_bool /* Loc_List_BG_Related_To_SR_Empty/ */ Loc_List_BG_Related_To_SR_Empty;
  kcg_bool /* Loc_Stop_If_In_Shunting/ */ Loc_Stop_If_In_Shunting;
  kcg_bool /* Loc_Stop_If_In_SR/ */ Loc_Stop_If_In_SR;
  kcg_bool /* Loc_RCB_Ack_And_EB_Revocked/ */ Loc_RCB_Ack_And_EB_Revocked;
  kcg_bool /* Loc_RBC_Authorized_SR/ */ Loc_RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* Loc_Reversing_Data/ */ Loc_Reversing_Data;
  kcg_bool /* Loc_Emergency_Stop_Message_Received/ */ Loc_Emergency_Stop_Message_Received;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* Loc_conditionalTransitions/ */ Loc_conditionalTransitions;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* Loc_levelTransitions/ */ Loc_levelTransitions;
  kcg_bool /* Loc_received_L2L3MA/ */ Loc_received_L2L3MA;
  kcg_bool /* Loc_received_L1MA/ */ Loc_received_L1MA;
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L42/ */ _L42;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L64/ */ _L64;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* _L65/ */ _L65;
  kcg_bool /* _L66/ */ _L66;
  kcg_bool /* _L67/ */ _L67;
  kcg_bool /* _L68/ */ _L68;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L83/ */ _L83;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L84/ */ _L84;
  kcg_bool /* _L98/ */ _L98;
  kcg_bool /* _L99/ */ _L99;
  T_Reversing_Data_Level_And_Mode_Types_Pkg /* _L100/ */ _L100;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg /* _L101/ */ _L101;
  kcg_bool /* _L102/ */ _L102;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L134/ */ _L134;
  kcg_bool /* _L222/ */ _L222;
  kcg_bool /* _L223/ */ _L223;
  kcg_bool /* _L224/ */ _L224;
  kcg_bool /* _L225/ */ _L225;
  kcg_bool /* _L226/ */ _L226;
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg /* _L227/ */ _L227;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L229/ */ _L229;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg /* _L230/ */ _L230;
  kcg_bool /* _L231/ */ _L231;
  kcg_bool /* _L232/ */ _L232;
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg /* _L234/ */ _L234;
} outC_InputTrackManagement_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::InputTrackManagement/ */
extern void InputTrackManagement_InputManagement(
  /* Data_From_Track_Packets/ */
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  outC_InputTrackManagement_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputTrackManagement_reset_InputManagement(
  outC_InputTrackManagement_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputTrackManagement_init_InputManagement(
  outC_InputTrackManagement_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputTrackManagement_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTrackManagement_InputManagement.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

