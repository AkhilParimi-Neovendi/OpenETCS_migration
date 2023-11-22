/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSpeedAndSupervision_Interfaces.h"

/* Interfaces::InputSpeedAndSupervision/ */
void InputSpeedAndSupervision_Interfaces(
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  outC_InputSpeedAndSupervision_Interfaces *outC)
{
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &outC->_L1,
    Data_From_Speed_and_Supervision);
  outC->_L10 = outC->_L1.EOA_Front_End;
  outC->Train_Overpass_EOA_Front_End = outC->_L10;
  outC->_L14 = outC->_L1.Estim_front_End_overpass_SR_Dist;
  outC->_L13 = outC->_L1.Estim_Front_End_Rear_SSP;
  outC->_L12 = outC->_L1.Override_Function_Active;
  outC->_L11 = outC->_L1.EOA_Antenna_Overpass;
  outC->_L9 = outC->_L1.Train_Speed_Under_Overide_Limit;
  outC->Train_Speed_Under_Override_Limit = outC->_L9;
  outC->Train_Overpass_EOA_Antenna = outC->_L11;
  outC->Override_Function_Active = outC->_L12;
  outC->Estimated_Front_End_Rear_Location_SSP_Or_Gradient = outC->_L13;
  outC->Estimated_Front_End_Overpass_SR_Distance = outC->_L14;
}

#ifndef KCG_USER_DEFINED_INIT
void InputSpeedAndSupervision_init_Interfaces(
  outC_InputSpeedAndSupervision_Interfaces *outC)
{
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
  outC->Train_Speed_Under_Override_Limit = kcg_true;
  outC->Train_Overpass_EOA_Front_End = kcg_true;
  outC->Train_Overpass_EOA_Antenna = kcg_true;
  outC->Override_Function_Active = kcg_true;
  outC->Estimated_Front_End_Rear_Location_SSP_Or_Gradient = kcg_true;
  outC->Estimated_Front_End_Overpass_SR_Distance = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputSpeedAndSupervision_reset_Interfaces(
  outC_InputSpeedAndSupervision_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputSpeedAndSupervision_Interfaces.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

