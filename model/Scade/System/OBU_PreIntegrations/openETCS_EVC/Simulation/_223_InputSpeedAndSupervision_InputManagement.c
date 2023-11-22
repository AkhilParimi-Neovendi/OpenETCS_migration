/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "_223_InputSpeedAndSupervision_InputManagement.h"

/* InputManagement::InputSpeedAndSupervision/ */
void _223_InputSpeedAndSupervision_InputManagement(
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  outC__223_InputSpeedAndSupervision_InputManagement *outC)
{
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Speed_and_Supervision);
  outC->_L9 = outC->_L1.Train_Speed_Under_Overide_Limit;
  outC->Loc_Train_Speed_Under_Override_Limit = outC->_L9;
  outC->_L21 = outC->Loc_Train_Speed_Under_Override_Limit;
  outC->_L10 = outC->_L1.EOA_Front_End;
  outC->Loc_Train_Overpass_EOA_Front_End = outC->_L10;
  outC->_L20 = outC->Loc_Train_Overpass_EOA_Front_End;
  outC->_L11 = outC->_L1.EOA_Antenna_Overpass;
  outC->Loc_Train_Overpass_EOA_Antenna = outC->_L11;
  outC->_L19 = outC->Loc_Train_Overpass_EOA_Antenna;
  outC->_L12 = outC->_L1.Override_Function_Active;
  outC->Loc_Override_Function_Active = outC->_L12;
  outC->_L18 = outC->Loc_Override_Function_Active;
  outC->_L13 = outC->_L1.Estim_Front_End_Rear_SSP;
  outC->Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl = outC->_L13;
  outC->_L17 = outC->Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl;
  outC->_L14 = outC->_L1.Estim_front_End_overpass_SR_Dist;
  outC->Loc_Estimated_Front_End_Overpass_SR_Distance = outC->_L14;
  outC->_L16 = outC->Loc_Estimated_Front_End_Overpass_SR_Distance;
  outC->_L15.Estim_front_End_overpass_SR_Dist = outC->_L16;
  outC->_L15.Estim_Front_End_Rear_SSP = outC->_L17;
  outC->_L15.Override_Function_Active = outC->_L18;
  outC->_L15.EOA_Antenna_Overpass = outC->_L19;
  outC->_L15.EOA_Front_End = outC->_L20;
  outC->_L15.Train_Speed_Under_Overide_Limit = outC->_L21;
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->Data_From_Speed_and_Supervision_To_Mode,
    &outC->_L15);
}

#ifndef KCG_USER_DEFINED_INIT
void _223_InputSpeedAndSupervision_init_InputManagement(
  outC__223_InputSpeedAndSupervision_InputManagement *outC)
{
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L15.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L15.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L15.Override_Function_Active = kcg_true;
  outC->_L15.EOA_Antenna_Overpass = kcg_true;
  outC->_L15.EOA_Front_End = kcg_true;
  outC->_L15.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L1.Estim_front_End_overpass_SR_Dist = kcg_true;
  outC->_L1.Estim_Front_End_Rear_SSP = kcg_true;
  outC->_L1.Override_Function_Active = kcg_true;
  outC->_L1.EOA_Antenna_Overpass = kcg_true;
  outC->_L1.EOA_Front_End = kcg_true;
  outC->_L1.Train_Speed_Under_Overide_Limit = kcg_true;
  outC->Loc_Train_Speed_Under_Override_Limit = kcg_true;
  outC->Loc_Train_Overpass_EOA_Front_End = kcg_true;
  outC->Loc_Train_Overpass_EOA_Antenna = kcg_true;
  outC->Loc_Override_Function_Active = kcg_true;
  outC->Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl = kcg_true;
  outC->Loc_Estimated_Front_End_Overpass_SR_Distance = kcg_true;
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
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void _223_InputSpeedAndSupervision_reset_InputManagement(
  outC__223_InputSpeedAndSupervision_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _223_InputSpeedAndSupervision_InputManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

