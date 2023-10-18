/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_DMI_Interfaces.h"

/* Interfaces::Output_To_DMI/ */
void Output_To_DMI_Interfaces(
  /* Ack_LS_Req_To_Driver/ */
  kcg_bool Ack_LS_Req_To_Driver,
  /* Ack_OS_Req_To_Driver/ */
  kcg_bool Ack_OS_Req_To_Driver,
  /* Ack_RV_Req_To_Driver/ */
  kcg_bool Ack_RV_Req_To_Driver,
  /* Ack_SH_Req_To_Driver/ */
  kcg_bool Ack_SH_Req_To_Driver,
  /* Ack_SN_Req_To_Driver/ */
  kcg_bool Ack_SN_Req_To_Driver,
  /* Ack_SR_Req_To_Driver/ */
  kcg_bool Ack_SR_Req_To_Driver,
  /* Ack_TR_Req_To_Driver/ */
  kcg_bool Ack_TR_Req_To_Driver,
  /* Ack_UN_Req_To_Driver/ */
  kcg_bool Ack_UN_Req_To_Driver,
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool SH_Refused_By_RBC_To_DMI,
  outC_Output_To_DMI_Interfaces *outC)
{
  outC->_L19 = Ack_LS_Req_To_Driver;
  outC->_L20 = Ack_OS_Req_To_Driver;
  outC->_L21 = Ack_RV_Req_To_Driver;
  outC->_L22 = Ack_SH_Req_To_Driver;
  outC->_L23 = Ack_SN_Req_To_Driver;
  outC->_L24 = Ack_SR_Req_To_Driver;
  outC->_L25 = Ack_TR_Req_To_Driver;
  outC->_L26 = Ack_UN_Req_To_Driver;
  outC->_L27 = SH_Refused_By_RBC_To_DMI;
  outC->_L18.Ack_LS = outC->_L19;
  outC->_L18.Ack_OS = outC->_L20;
  outC->_L18.Ack_RV = outC->_L21;
  outC->_L18.Ack_SH = outC->_L22;
  outC->_L18.Ack_SN = outC->_L23;
  outC->_L18.Ack_SR = outC->_L24;
  outC->_L18.Ack_TR = outC->_L25;
  outC->_L18.Ack_UN = outC->_L26;
  outC->_L18.SH_Refused_By_RBC = outC->_L27;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI,
    &outC->_L18);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_To_DMI_init_Interfaces(outC_Output_To_DMI_Interfaces *outC)
{
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L18.Ack_LS = kcg_true;
  outC->_L18.Ack_OS = kcg_true;
  outC->_L18.Ack_RV = kcg_true;
  outC->_L18.Ack_SH = kcg_true;
  outC->_L18.Ack_SN = kcg_true;
  outC->_L18.Ack_SR = kcg_true;
  outC->_L18.Ack_TR = kcg_true;
  outC->_L18.Ack_UN = kcg_true;
  outC->_L18.SH_Refused_By_RBC = kcg_true;
  outC->Data_To_DMI.Ack_LS = kcg_true;
  outC->Data_To_DMI.Ack_OS = kcg_true;
  outC->Data_To_DMI.Ack_RV = kcg_true;
  outC->Data_To_DMI.Ack_SH = kcg_true;
  outC->Data_To_DMI.Ack_SN = kcg_true;
  outC->Data_To_DMI.Ack_SR = kcg_true;
  outC->Data_To_DMI.Ack_TR = kcg_true;
  outC->Data_To_DMI.Ack_UN = kcg_true;
  outC->Data_To_DMI.SH_Refused_By_RBC = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_DMI_reset_Interfaces(outC_Output_To_DMI_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_DMI_Interfaces.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

