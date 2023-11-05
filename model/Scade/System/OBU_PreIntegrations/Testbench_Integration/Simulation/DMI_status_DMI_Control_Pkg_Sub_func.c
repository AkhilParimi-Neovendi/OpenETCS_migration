/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"

/* DMI_Control_Pkg::Sub_func::DMI_status/ */
void DMI_status_DMI_Control_Pkg_Sub_func(
  /* currentTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg currentTime,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  static kcg_int32 noname;

  outC->_L39 = cSendDMIStatus_DMI_Control_Pkg;
  outC->_L38 = kcg_false;
  /* _L36=(Utilities::SendTime#1)/ */
  SendTime_Utilities(outC->_L39, outC->_L38, &outC->Context_SendTime_1);
  outC->_L36 = outC->Context_SendTime_1.count;
  outC->_L37 = outC->Context_SendTime_1.send;
  noname = outC->_L36;
  outC->_L32 = currentTime;
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(1);
  outC->TimeIsOver = outC->_L37;
  outC->_L26 = outC->TimeIsOver;
  /* _L27= */
  if (outC->_L26) {
    outC->_L27 = outC->_L28;
  }
  else {
    outC->_L27 = outC->_L29;
  }
  /* _L25=(pwlinear::Counter#1)/ */
  Counter_pwlinear_int32(outC->_L27, kcg_false, &outC->Context_Counter_1);
  outC->_L25 = outC->Context_Counter_1.Count_int32;
  outC->_L24 = Running_state_DMI_Types_Pkg;
  outC->_L22 = outC->TimeIsOver;
  outC->_L21.valid = outC->_L22;
  outC->_L21.systemTime = outC->_L32;
  outC->_L21.statusSet = outC->_L24;
  outC->_L21.nAlive = outC->_L25;
  kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->StatusOutput,
    &outC->_L21);
}

#ifndef KCG_USER_DEFINED_INIT
void DMI_status_init_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  outC->_L39 = kcg_lit_int32(0);
  outC->_L38 = kcg_true;
  outC->_L36 = kcg_lit_int32(0);
  outC->_L37 = kcg_true;
  outC->_L32 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = Running_state_DMI_Types_Pkg;
  outC->_L22 = kcg_true;
  outC->_L21.valid = kcg_true;
  outC->_L21.systemTime = kcg_lit_int32(0);
  outC->_L21.statusSet = Running_state_DMI_Types_Pkg;
  outC->_L21.nAlive = kcg_lit_int32(0);
  outC->TimeIsOver = kcg_true;
  outC->StatusOutput.valid = kcg_true;
  outC->StatusOutput.systemTime = kcg_lit_int32(0);
  outC->StatusOutput.statusSet = Running_state_DMI_Types_Pkg;
  outC->StatusOutput.nAlive = kcg_lit_int32(0);
  /* _L25=(pwlinear::Counter#1)/ */
  Counter_init_pwlinear_int32(&outC->Context_Counter_1);
  /* _L36=(Utilities::SendTime#1)/ */
  SendTime_init_Utilities(&outC->Context_SendTime_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void DMI_status_reset_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  /* _L25=(pwlinear::Counter#1)/ */
  Counter_reset_pwlinear_int32(&outC->Context_Counter_1);
  /* _L36=(Utilities::SendTime#1)/ */
  SendTime_reset_Utilities(&outC->Context_SendTime_1);
}


void kcg_save_SV_DMI_status_DMI_Control_Pkg_Sub_func(
  SV_DMI_status_DMI_Control_Pkg_Sub_func *SV,
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC)
{
  kcg_save_SV_SendTime_Utilities(
    &SV->Context_SendTime_1,
    &outC->Context_SendTime_1);
  kcg_save_SV_Counter_pwlinear_int32(
    &SV->Context_Counter_1,
    &outC->Context_Counter_1);
}

void kcg_load_SV_DMI_status_DMI_Control_Pkg_Sub_func(
  outC_DMI_status_DMI_Control_Pkg_Sub_func *outC,
  SV_DMI_status_DMI_Control_Pkg_Sub_func *SV)
{
  kcg_load_SV_SendTime_Utilities(
    &outC->Context_SendTime_1,
    &SV->Context_SendTime_1);
  kcg_load_SV_Counter_pwlinear_int32(
    &outC->Context_Counter_1,
    &SV->Context_Counter_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** DMI_status_DMI_Control_Pkg_Sub_func.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

