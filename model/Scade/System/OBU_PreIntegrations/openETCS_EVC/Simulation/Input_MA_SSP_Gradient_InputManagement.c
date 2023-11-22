/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_MA_SSP_Gradient_InputManagement.h"

/* InputManagement::Input_MA_SSP_Gradient/ */
void Input_MA_SSP_Gradient_InputManagement(
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  outC_Input_MA_SSP_Gradient_InputManagement *outC)
{
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &outC->_L26,
    Data_From_Track_MASSPGradient);
  outC->_L25 = outC->_L26.P27_received;
  outC->_L24 = outC->_L26.P21_received;
  outC->_L27 = outC->_L24 & outC->_L25;
  outC->_L22 = outC->_L26.P12_received;
  outC->_L30 = outC->_L22 & outC->_L27;
  outC->_L23 = outC->_L26.P15_received;
  outC->_L29 = outC->_L23 & outC->_L27;
  outC->_L21 = outC->_L22 | outC->_L23;
  outC->_L28 = outC->_L21 & outC->_L27;
  outC->MA_SSP_Gradient_Available = outC->_L28;
  outC->received_L1_MA = outC->_L30;
  outC->received_L2_L3_MA = outC->_L29;
}

#ifndef KCG_USER_DEFINED_INIT
void Input_MA_SSP_Gradient_init_InputManagement(
  outC_Input_MA_SSP_Gradient_InputManagement *outC)
{
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L26.P12_received = kcg_true;
  outC->_L26.P15_received = kcg_true;
  outC->_L26.P21_received = kcg_true;
  outC->_L26.P27_received = kcg_true;
  outC->_L21 = kcg_true;
  outC->MA_SSP_Gradient_Available = kcg_true;
  outC->received_L1_MA = kcg_true;
  outC->received_L2_L3_MA = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Input_MA_SSP_Gradient_reset_InputManagement(
  outC_Input_MA_SSP_Gradient_InputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_MA_SSP_Gradient_InputManagement.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

