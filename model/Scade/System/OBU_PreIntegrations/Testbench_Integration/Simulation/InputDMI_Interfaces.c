/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputDMI_Interfaces.h"

/* Interfaces::InputDMI/ */
void InputDMI_Interfaces(
  /* Data_From_DMI/ */
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  outC_InputDMI_Interfaces *outC)
{
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(&outC->_L16, Data_From_DMI);
  outC->_L130 = outC->_L16.Ack_LS;
  outC->_L129 = outC->_L16.Ack_OS;
  outC->_L128 = outC->_L16.Ack_RV;
  outC->_L127 = outC->_L16.Ack_SH;
  outC->_L126 = outC->_L16.Ack_SN;
  outC->_L125 = outC->_L16.Ack_SR;
  outC->_L124 = outC->_L16.Ack_TR;
  outC->_L123 = outC->_L16.Ack_UN;
  outC->_L122 = outC->_L16.Req_Exit_SH;
  outC->_L121 = outC->_L16.Req_NL;
  outC->_L120 = outC->_L16.Req_Override;
  outC->_L119 = outC->_L16.Req_SH;
  outC->_L118 = outC->_L16.Req_Start;
  outC->_L117 = outC->_L16.ETCS_Isolated;
  outC->ETCS_Isolated = outC->_L117;
  outC->Driver_Req_Exit_SH = outC->_L122;
  outC->Driver_Req_NL = outC->_L121;
  outC->Driver_Req_SH = outC->_L119;
  outC->Driver_Req_Override = outC->_L120;
  outC->Driver_Req_Start = outC->_L118;
  outC->Driver_Ack_UN = outC->_L123;
  outC->Driver_Ack_TR = outC->_L124;
  outC->Driver_Ack_SR = outC->_L125;
  outC->Driver_Ack_SN = outC->_L126;
  outC->Driver_Ack_SH = outC->_L127;
  outC->Driver_Ack_RV = outC->_L128;
  outC->Driver_Ack_OS = outC->_L129;
  outC->Driver_Ack_LS = outC->_L130;
}

#ifndef KCG_USER_DEFINED_INIT
void InputDMI_init_Interfaces(outC_InputDMI_Interfaces *outC)
{
  outC->_L117 = kcg_true;
  outC->_L118 = kcg_true;
  outC->_L119 = kcg_true;
  outC->_L120 = kcg_true;
  outC->_L121 = kcg_true;
  outC->_L122 = kcg_true;
  outC->_L123 = kcg_true;
  outC->_L124 = kcg_true;
  outC->_L125 = kcg_true;
  outC->_L126 = kcg_true;
  outC->_L127 = kcg_true;
  outC->_L128 = kcg_true;
  outC->_L129 = kcg_true;
  outC->_L130 = kcg_true;
  outC->_L16.Ack_LS = kcg_true;
  outC->_L16.Ack_OS = kcg_true;
  outC->_L16.Ack_RV = kcg_true;
  outC->_L16.Ack_SH = kcg_true;
  outC->_L16.Ack_SN = kcg_true;
  outC->_L16.Ack_SR = kcg_true;
  outC->_L16.Ack_TR = kcg_true;
  outC->_L16.Ack_UN = kcg_true;
  outC->_L16.Req_Exit_SH = kcg_true;
  outC->_L16.Req_NL = kcg_true;
  outC->_L16.Req_Override = kcg_true;
  outC->_L16.Req_SH = kcg_true;
  outC->_L16.Req_Start = kcg_true;
  outC->_L16.ETCS_Isolated = kcg_true;
  outC->ETCS_Isolated = kcg_true;
  outC->Driver_Req_Start = kcg_true;
  outC->Driver_Req_SH = kcg_true;
  outC->Driver_Req_Override = kcg_true;
  outC->Driver_Req_NL = kcg_true;
  outC->Driver_Req_Exit_SH = kcg_true;
  outC->Driver_Ack_UN = kcg_true;
  outC->Driver_Ack_TR = kcg_true;
  outC->Driver_Ack_SR = kcg_true;
  outC->Driver_Ack_SN = kcg_true;
  outC->Driver_Ack_SH = kcg_true;
  outC->Driver_Ack_RV = kcg_true;
  outC->Driver_Ack_OS = kcg_true;
  outC->Driver_Ack_LS = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputDMI_reset_Interfaces(outC_InputDMI_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputDMI_Interfaces.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

