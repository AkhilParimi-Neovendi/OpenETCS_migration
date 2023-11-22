/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OutputManagement_Interfaces.h"

/* Interfaces::OutputManagement/ */
void OutputManagement_Interfaces(
  /* current_Mode/ */
  T_Mode_Level_And_Mode_Types_Pkg current_Mode,
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
  /* Clean_BG_List_SH_Area/ */
  kcg_bool Clean_BG_List_SH_Area,
  /* EB_requested/ */
  kcg_bool EB_requested,
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool End_Of_Mission_Procedure_Req,
  /* MA_Req_to_RBC/ */
  kcg_bool MA_Req_to_RBC,
  /* Request_For_SH_To_RBC/ */
  kcg_bool Request_For_SH_To_RBC,
  /* service_brake_Command/ */
  kcg_bool service_brake_Command,
  /* SH_Refused_by_RBC_To_DMI/ */
  kcg_bool SH_Refused_by_RBC_To_DMI,
  outC_OutputManagement_Interfaces *outC)
{
  outC->_L30 = kcg_false;
  outC->_L29 = kcg_true;
  outC->_L26 = current_Mode;
  /* _L28= */
  switch (outC->_L26) {
    case TR_Level_And_Mode_Types_Pkg :
      outC->_L28 = outC->_L29;
      break;
    case SF_Level_And_Mode_Types_Pkg :
      outC->_L28 = outC->_L29;
      break;
    case NP_Level_And_Mode_Types_Pkg :
      outC->_L28 = outC->_L29;
      break;
    default :
      outC->_L28 = outC->_L30;
      break;
  }
  outC->_L14 = EB_requested;
  outC->_L23 = outC->_L28 | outC->_L14;
  outC->_L1 = Ack_LS_Req_To_Driver;
  outC->_L2 = Ack_OS_Req_To_Driver;
  outC->_L3 = Ack_RV_Req_To_Driver;
  outC->_L4 = Ack_SH_Req_To_Driver;
  outC->_L5 = Ack_SN_Req_To_Driver;
  outC->_L6 = Ack_SR_Req_To_Driver;
  outC->_L7 = Ack_TR_Req_To_Driver;
  outC->_L8 = Ack_UN_Req_To_Driver;
  outC->_L9 = SH_Refused_by_RBC_To_DMI;
  /* _L22=(Interfaces::Output_To_DMI#1)/ */
  Output_To_DMI_Interfaces(
    outC->_L1,
    outC->_L2,
    outC->_L3,
    outC->_L4,
    outC->_L5,
    outC->_L6,
    outC->_L7,
    outC->_L8,
    outC->_L9,
    &outC->Context_Output_To_DMI_1);
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->_L22,
    &outC->Context_Output_To_DMI_1.Data_To_DMI);
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI,
    &outC->_L22);
  outC->_L21 = current_Mode == SB_Level_And_Mode_Types_Pkg;
  outC->_L10 = End_Of_Mission_Procedure_Req;
  outC->_L20 = outC->_L21 & outC->_L10;
  outC->_L11 = Clean_BG_List_SH_Area;
  outC->_L12 = MA_Req_to_RBC;
  outC->_L13 = Request_For_SH_To_RBC;
  /* _L18=(Interfaces::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_Interfaces(
    outC->_L20,
    outC->_L11,
    outC->_L12,
    outC->_L13,
    &outC->Context_Output_To_BG_Management_1);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L18,
    &outC->Context_Output_To_BG_Management_1.Data_To_BG_Management);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L18);
  outC->EB_Requested = outC->_L23;
  outC->_L15 = service_brake_Command;
  outC->Service_Brake_Command = outC->_L15;
  outC->_L16 = current_Mode;
  outC->newMode = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void OutputManagement_init_Interfaces(outC_OutputManagement_Interfaces *outC)
{
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L26 = NP_Level_And_Mode_Types_Pkg;
  outC->_L23 = kcg_true;
  outC->_L22.Ack_LS = kcg_true;
  outC->_L22.Ack_OS = kcg_true;
  outC->_L22.Ack_RV = kcg_true;
  outC->_L22.Ack_SH = kcg_true;
  outC->_L22.Ack_SN = kcg_true;
  outC->_L22.Ack_SR = kcg_true;
  outC->_L22.Ack_TR = kcg_true;
  outC->_L22.Ack_UN = kcg_true;
  outC->_L22.SH_Refused_By_RBC = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L18.EoM_Procedure_req = kcg_true;
  outC->_L18.Clean_BG_List_SH_Area = kcg_true;
  outC->_L18.MA_Req = kcg_true;
  outC->_L18.Req_for_SH_from_Driver = kcg_true;
  outC->_L18.Connection_to_RBC_req = kcg_true;
  outC->_L18.Position_Repport_Needed = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = NP_Level_And_Mode_Types_Pkg;
  outC->newMode = NP_Level_And_Mode_Types_Pkg;
  outC->Service_Brake_Command = kcg_true;
  outC->EB_Requested = kcg_true;
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
  /* _L18=(Interfaces::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_init_Interfaces(
    &outC->Context_Output_To_BG_Management_1);
  /* _L22=(Interfaces::Output_To_DMI#1)/ */
  Output_To_DMI_init_Interfaces(&outC->Context_Output_To_DMI_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void OutputManagement_reset_Interfaces(outC_OutputManagement_Interfaces *outC)
{
  /* _L18=(Interfaces::Output_To_BG_Management#1)/ */
  Output_To_BG_Management_reset_Interfaces(
    &outC->Context_Output_To_BG_Management_1);
  /* _L22=(Interfaces::Output_To_DMI#1)/ */
  Output_To_DMI_reset_Interfaces(&outC->Context_Output_To_DMI_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** OutputManagement_Interfaces.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

