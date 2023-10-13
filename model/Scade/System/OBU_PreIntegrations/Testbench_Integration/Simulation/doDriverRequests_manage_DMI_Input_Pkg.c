/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "doDriverRequests_manage_DMI_Input_Pkg.h"

/* manage_DMI_Input_Pkg::doDriverRequests/ */
void doDriverRequests_manage_DMI_Input_Pkg(
  /* inDriverRequest/ */
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *inDriverRequest,
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC)
{
  /* outDriverRequestToModes/ */
  static DMI_DriverRequest_T_DMI_Types_Pkg outDriverRequestToModes_partial;
  /* outDriverRequestToModes/ */
  static DMI_DriverRequest_T_DMI_Types_Pkg _1_outDriverRequestToModes_partial;

  outC->_L5 = Level_entry_request_DMI_Types_Pkg;
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->_L1,
    inDriverRequest);
  outC->_L12 = outC->_L1.m_request;
  outC->_L4 = outC->_L12 == outC->_L5;
  outC->_L11 = outC->_L1.valid;
  outC->_L6 = outC->_L11 & outC->_L4;
  outC->outDriverRequestToLevels = outC->_L6;
  outC->isValid = outC->_L11;
  outC->IfBlock1_clock = outC->isValid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L18_then_IfBlock1 = outC->isValid;
    outC->_L17_then_IfBlock1 = Request_isolation_DMI_Types_Pkg;
    outC->_L16_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
    outC->_L15_then_IfBlock1 = Shunting_entry_DMI_Types_Pkg;
    outC->_L13_then_IfBlock1 = Override_EOA_DMI_Types_Pkg;
    outC->_L12_then_IfBlock1 = Non_leading_DMI_Types_Pkg;
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->_L4_then_IfBlock1,
      inDriverRequest);
    outC->_L3_then_IfBlock1 = outC->_L4_then_IfBlock1.m_request;
    outC->_L11_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L16_then_IfBlock1;
    outC->_L10_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L17_then_IfBlock1;
    outC->_L9_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L15_then_IfBlock1;
    outC->_L8_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L12_then_IfBlock1;
    outC->_L7_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L13_then_IfBlock1;
    outC->_L6_then_IfBlock1 = Shunting_exit_DMI_Types_Pkg;
    outC->_L5_then_IfBlock1 = outC->_L3_then_IfBlock1 == outC->_L6_then_IfBlock1;
    outC->_L1_then_IfBlock1.valid = outC->_L18_then_IfBlock1;
    outC->_L1_then_IfBlock1.Req_Exit_SH = outC->_L5_then_IfBlock1;
    outC->_L1_then_IfBlock1.Req_NL = outC->_L8_then_IfBlock1;
    outC->_L1_then_IfBlock1.Req_Override = outC->_L7_then_IfBlock1;
    outC->_L1_then_IfBlock1.Req_SH = outC->_L9_then_IfBlock1;
    outC->_L1_then_IfBlock1.Req_Start = outC->_L11_then_IfBlock1;
    outC->_L1_then_IfBlock1.ETCS_Isolated = outC->_L10_then_IfBlock1;
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outDriverRequestToModes_partial,
      &outC->_L1_then_IfBlock1);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outC->outDriverRequestToModes,
      &outDriverRequestToModes_partial);
  }
  else {
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outC->_L1_else_IfBlock1,
      (DMI_DriverRequest_T_DMI_Types_Pkg *)
        &cNoDriverRequestToModes_manage_DMI_Input_Pkg);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &_1_outDriverRequestToModes_partial,
      &outC->_L1_else_IfBlock1);
    kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(
      &outC->outDriverRequestToModes,
      &_1_outDriverRequestToModes_partial);
  }
}

#ifndef KCG_USER_DEFINED_INIT
void doDriverRequests_init_manage_DMI_Input_Pkg(
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC)
{
  outC->_L12 = Start_of_mission_DMI_Types_Pkg;
  outC->_L11 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = Start_of_mission_DMI_Types_Pkg;
  outC->_L4 = kcg_true;
  outC->_L1.valid = kcg_true;
  outC->_L1.systemTime = kcg_lit_int64(0);
  outC->_L1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->isValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1.valid = kcg_true;
  outC->_L1_else_IfBlock1.Req_Exit_SH = kcg_true;
  outC->_L1_else_IfBlock1.Req_NL = kcg_true;
  outC->_L1_else_IfBlock1.Req_Override = kcg_true;
  outC->_L1_else_IfBlock1.Req_SH = kcg_true;
  outC->_L1_else_IfBlock1.Req_Start = kcg_true;
  outC->_L1_else_IfBlock1.ETCS_Isolated = kcg_true;
  outC->_L1_then_IfBlock1.valid = kcg_true;
  outC->_L1_then_IfBlock1.Req_Exit_SH = kcg_true;
  outC->_L1_then_IfBlock1.Req_NL = kcg_true;
  outC->_L1_then_IfBlock1.Req_Override = kcg_true;
  outC->_L1_then_IfBlock1.Req_SH = kcg_true;
  outC->_L1_then_IfBlock1.Req_Start = kcg_true;
  outC->_L1_then_IfBlock1.ETCS_Isolated = kcg_true;
  outC->_L3_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L4_then_IfBlock1.valid = kcg_true;
  outC->_L4_then_IfBlock1.systemTime = kcg_lit_int64(0);
  outC->_L4_then_IfBlock1.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->_L5_then_IfBlock1 = kcg_true;
  outC->_L6_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L8_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = kcg_true;
  outC->_L10_then_IfBlock1 = kcg_true;
  outC->_L11_then_IfBlock1 = kcg_true;
  outC->_L12_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L13_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L15_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L16_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L17_then_IfBlock1 = Start_of_mission_DMI_Types_Pkg;
  outC->_L18_then_IfBlock1 = kcg_true;
  outC->outDriverRequestToLevels = kcg_true;
  outC->outDriverRequestToModes.valid = kcg_true;
  outC->outDriverRequestToModes.Req_Exit_SH = kcg_true;
  outC->outDriverRequestToModes.Req_NL = kcg_true;
  outC->outDriverRequestToModes.Req_Override = kcg_true;
  outC->outDriverRequestToModes.Req_SH = kcg_true;
  outC->outDriverRequestToModes.Req_Start = kcg_true;
  outC->outDriverRequestToModes.ETCS_Isolated = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void doDriverRequests_reset_manage_DMI_Input_Pkg(
  outC_doDriverRequests_manage_DMI_Input_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** doDriverRequests_manage_DMI_Input_Pkg.c
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

