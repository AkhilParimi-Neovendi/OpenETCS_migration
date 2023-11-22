/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_Interfaces.h"

/* Interfaces::Output_To_BG_Management/ */
void Output_To_BG_Management_Interfaces(
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool End_Of_Mission_Procedure_Req,
  /* Clean_BG_List_SH_Area/ */
  kcg_bool Clean_BG_List_SH_Area,
  /* MA_Req_To_RBC/ */
  kcg_bool MA_Req_To_RBC,
  /* Request_For_SH_To_RBC/ */
  kcg_bool Request_For_SH_To_RBC,
  outC_Output_To_BG_Management_Interfaces *outC)
{
  outC->_L8 = kcg_false;
  outC->_L7 = kcg_false;
  outC->_L2 = End_Of_Mission_Procedure_Req;
  outC->_L3 = Clean_BG_List_SH_Area;
  outC->_L4 = MA_Req_To_RBC;
  outC->_L5 = Request_For_SH_To_RBC;
  outC->_L6.EoM_Procedure_req = outC->_L2;
  outC->_L6.Clean_BG_List_SH_Area = outC->_L3;
  outC->_L6.MA_Req = outC->_L4;
  outC->_L6.Req_for_SH_from_Driver = outC->_L5;
  outC->_L6.Connection_to_RBC_req = outC->_L7;
  outC->_L6.Position_Repport_Needed = outC->_L8;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_To_BG_Management_init_Interfaces(
  outC_Output_To_BG_Management_Interfaces *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6.EoM_Procedure_req = kcg_true;
  outC->_L6.Clean_BG_List_SH_Area = kcg_true;
  outC->_L6.MA_Req = kcg_true;
  outC->_L6.Req_for_SH_from_Driver = kcg_true;
  outC->_L6.Connection_to_RBC_req = kcg_true;
  outC->_L6.Position_Repport_Needed = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_BG_Management_reset_Interfaces(
  outC_Output_To_BG_Management_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_BG_Management_Interfaces.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

