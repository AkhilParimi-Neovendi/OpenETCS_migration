/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Messages_InputManagement.h"

/* InputManagement::Input_Messages/ */
void Input_Messages_InputManagement(
  /* Data_From_Track_Messages/ */
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  outC_Input_Messages_InputManagement *outC)
{
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &outC->_L16,
    Data_From_Track_Messages);
  outC->_L11 = outC->_L16.Mess_2;
  outC->Loc_Mess_2 = outC->_L11;
  outC->_L1 = outC->Loc_Mess_2;
  outC->RBC_Authorized_SR = outC->_L1;
  outC->_L14 = outC->_L16.Mess_6;
  outC->Loc_Mess_6 = outC->_L14;
  outC->_L5 = outC->Loc_Mess_6;
  outC->RCB_Ack_And_EB_Revocked = outC->_L5;
  outC->_L13 = outC->_L16.Mess_28;
  outC->Loc_Mess_28 = outC->_L13;
  outC->_L6 = outC->Loc_Mess_28;
  outC->_L12 = outC->_L16.Mess_27;
  outC->Loc_Mess_27 = outC->_L12;
  outC->_L3 = outC->Loc_Mess_27;
  outC->_L2 = outC->_L3 | outC->_L6;
  outC->Shunting_Granted_By_RBC = outC->_L2;
  outC->_L10 = outC->_L16.Mess_16;
  outC->Loc_Mess_16 = outC->_L10;
  outC->_L8 = outC->Loc_Mess_16;
  outC->_L9 = outC->_L16.Mess_15;
  outC->Loc_Mess_15 = outC->_L9;
  outC->_L7 = outC->Loc_Mess_15;
  outC->_L4 = outC->_L7 | outC->_L8;
  outC->Emergency_Stop_Message_Received = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_Messages_init_InputManagement(
  outC_Input_Messages_InputManagement *outC)
{
  outC->_L16.Mess_15 = kcg_true;
  outC->_L16.Mess_16 = kcg_true;
  outC->_L16.Mess_2 = kcg_true;
  outC->_L16.Mess_27 = kcg_true;
  outC->_L16.Mess_28 = kcg_true;
  outC->_L16.Mess_6 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->Loc_Mess_15 = kcg_true;
  outC->Loc_Mess_16 = kcg_true;
  outC->Loc_Mess_27 = kcg_true;
  outC->Loc_Mess_28 = kcg_true;
  outC->Loc_Mess_6 = kcg_true;
  outC->Loc_Mess_2 = kcg_true;
  outC->RBC_Authorized_SR = kcg_true;
  outC->RCB_Ack_And_EB_Revocked = kcg_true;
  outC->Shunting_Granted_By_RBC = kcg_true;
  outC->Emergency_Stop_Message_Received = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_Messages_reset_InputManagement(
  outC_Input_Messages_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_Messages_InputManagement.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

