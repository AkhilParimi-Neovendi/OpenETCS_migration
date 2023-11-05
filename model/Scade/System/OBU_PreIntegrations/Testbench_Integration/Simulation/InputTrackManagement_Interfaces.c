/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputTrackManagement_Interfaces.h"

/* Interfaces::InputTrackManagement/ */
void InputTrackManagement_Interfaces(
  /* Data_From_Track/ */
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track,
  outC_InputTrackManagement_Interfaces *outC)
{
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Track);
  kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
    &outC->_L37,
    &outC->_L1.Mode_Profile_On_Board);
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(&outC->_L39, &outC->_L37[0]);
  outC->_L38 = outC->_L1.MA_SSP_Gradient_Available;
  outC->_L36 = outC->_L1.Shunting_granted_By_RBC;
  outC->_L35 = outC->_L1.Trip_Order_Given_By_Balise;
  outC->_L34 = outC->_L1.List_Bg_Related_To_SR_Empty;
  outC->_L33 = outC->_L1.Stop_If_In_shunting;
  outC->_L32 = outC->_L1.Stop_If_In_SR;
  outC->_L31 = outC->_L1.RBC_Ack_TR_EB_Revocked;
  outC->_L30 = outC->_L1.RBC_Authorized_SR;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->_L29,
    &outC->_L1.Reversing_Data);
  outC->_L28 = outC->_L1.Emergency_Stop_Message_Received;
  outC->Emergency_Stop_Message_Received = outC->_L28;
  kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(
    &outC->Reversing_Data,
    &outC->_L29);
  outC->RBC_Authorized_SR = outC->_L30;
  outC->RCB_Ack_And_EB_Revocked = outC->_L31;
  outC->Stop_If_In_SR = outC->_L32;
  outC->Stop_If_In_Shunting = outC->_L33;
  outC->List_BG_Related_To_SR_Empty = outC->_L34;
  outC->Trip_Order_Given_By_Balise = outC->_L35;
  outC->Shunting_Granted_By_RBC = outC->_L36;
  kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(
    &outC->Mode_Profile_On_Board,
    &outC->_L39);
  outC->MA_SSP_Gradient_Available = outC->_L38;
}

#ifndef KCG_USER_DEFINED_INIT
void InputTrackManagement_init_Interfaces(
  outC_InputTrackManagement_Interfaces *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L39.Distance = kcg_lit_int32(0);
  outC->_L39.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->_L39.Speed = kcg_lit_int32(0);
  outC->_L39.Length = kcg_lit_int32(0);
  outC->_L39.Length_Ack = kcg_lit_int32(0);
  outC->_L28 = kcg_true;
  outC->_L29.Available = kcg_true;
  outC->_L29.Dist_Start = kcg_lit_int32(0);
  outC->_L29.Length = kcg_lit_int32(0);
  outC->_L29.Dist_Run = kcg_lit_int32(0);
  outC->_L29.Speed = kcg_lit_int32(0);
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L36 = kcg_true;
  for (idx = 0; idx < 3; idx++) {
    outC->_L37[idx].Distance = kcg_lit_int32(0);
    outC->_L37[idx].Mode = Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L37[idx].Speed = kcg_lit_int32(0);
    outC->_L37[idx].Length = kcg_lit_int32(0);
    outC->_L37[idx].Length_Ack = kcg_lit_int32(0);
  }
  outC->_L38 = kcg_true;
  outC->_L1.MA_SSP_Gradient_Available = kcg_true;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->_L1.Mode_Profile_On_Board[idx1].Distance = kcg_lit_int32(0);
    outC->_L1.Mode_Profile_On_Board[idx1].Mode =
      Profile_OS_Level_And_Mode_Types_Pkg;
    outC->_L1.Mode_Profile_On_Board[idx1].Speed = kcg_lit_int32(0);
    outC->_L1.Mode_Profile_On_Board[idx1].Length = kcg_lit_int32(0);
    outC->_L1.Mode_Profile_On_Board[idx1].Length_Ack = kcg_lit_int32(0);
  }
  outC->_L1.Shunting_granted_By_RBC = kcg_true;
  outC->_L1.Trip_Order_Given_By_Balise = kcg_true;
  outC->_L1.List_Bg_Related_To_SR_Empty = kcg_true;
  outC->_L1.Stop_If_In_shunting = kcg_true;
  outC->_L1.Stop_If_In_SR = kcg_true;
  outC->_L1.RBC_Ack_TR_EB_Revocked = kcg_true;
  outC->_L1.RBC_Authorized_SR = kcg_true;
  outC->_L1.Reversing_Data.Available = kcg_true;
  outC->_L1.Reversing_Data.Dist_Start = kcg_lit_int32(0);
  outC->_L1.Reversing_Data.Length = kcg_lit_int32(0);
  outC->_L1.Reversing_Data.Dist_Run = kcg_lit_int32(0);
  outC->_L1.Reversing_Data.Speed = kcg_lit_int32(0);
  outC->_L1.Emergency_Stop_Message_Received = kcg_true;
  outC->Emergency_Stop_Message_Received = kcg_true;
  outC->Reversing_Data.Available = kcg_true;
  outC->Reversing_Data.Dist_Start = kcg_lit_int32(0);
  outC->Reversing_Data.Length = kcg_lit_int32(0);
  outC->Reversing_Data.Dist_Run = kcg_lit_int32(0);
  outC->Reversing_Data.Speed = kcg_lit_int32(0);
  outC->RBC_Authorized_SR = kcg_true;
  outC->RCB_Ack_And_EB_Revocked = kcg_true;
  outC->Stop_If_In_SR = kcg_true;
  outC->Stop_If_In_Shunting = kcg_true;
  outC->List_BG_Related_To_SR_Empty = kcg_true;
  outC->Trip_Order_Given_By_Balise = kcg_true;
  outC->Shunting_Granted_By_RBC = kcg_true;
  outC->Mode_Profile_On_Board.Distance = kcg_lit_int32(0);
  outC->Mode_Profile_On_Board.Mode = Profile_OS_Level_And_Mode_Types_Pkg;
  outC->Mode_Profile_On_Board.Speed = kcg_lit_int32(0);
  outC->Mode_Profile_On_Board.Length = kcg_lit_int32(0);
  outC->Mode_Profile_On_Board.Length_Ack = kcg_lit_int32(0);
  outC->MA_SSP_Gradient_Available = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputTrackManagement_reset_Interfaces(
  outC_InputTrackManagement_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputTrackManagement_Interfaces.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

