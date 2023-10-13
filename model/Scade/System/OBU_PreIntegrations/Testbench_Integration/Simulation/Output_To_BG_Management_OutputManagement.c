/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output_To_BG_Management_OutputManagement.h"

/* OutputManagement::Output_To_BG_Management/ */
void Output_To_BG_Management_OutputManagement(
  /* Data_To_BG_Management_From_Mode/ */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Connection_to_RBC_Requested/ */
  kcg_bool Connection_to_RBC_Requested,
  /* PositionReportNeeded/ */
  kcg_bool PositionReportNeeded,
  outC_Output_To_BG_Management_OutputManagement *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;

  outC->_L8 = PositionReportNeeded;
  _1_noname = outC->_L8;
  outC->_L7 = Connection_to_RBC_Requested;
  noname = outC->_L7;
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->_L6,
    Data_To_BG_Management_From_Mode);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void Output_To_BG_Management_init_OutputManagement(
  outC_Output_To_BG_Management_OutputManagement *outC)
{
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6.EoM_Procedure_req = kcg_true;
  outC->_L6.Clean_BG_List_SH_Area = kcg_true;
  outC->_L6.MA_Req = kcg_true;
  outC->_L6.Req_for_SH_from_Driver = kcg_true;
  outC->_L6.Connection_to_RBC_req = kcg_true;
  outC->_L6.Position_Repport_Needed = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_To_BG_Management_reset_OutputManagement(
  outC_Output_To_BG_Management_OutputManagement *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_BG_Management_OutputManagement.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

