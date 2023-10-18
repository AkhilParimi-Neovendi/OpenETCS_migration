/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InputSTM_Interfaces.h"

/* Interfaces::InputSTM/ */
void InputSTM_Interfaces(
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  outC_InputSTM_Interfaces *outC)
{
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&outC->_L1, Data_From_STM);
  outC->_L3 = outC->_L1.Interface_To_National_System;
  outC->_L2 = outC->_L1.National_trip_Order;
  outC->National_Trip_Order = outC->_L2;
  outC->Interface_To_National_System = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void InputSTM_init_Interfaces(outC_InputSTM_Interfaces *outC)
{
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L1.Interface_To_National_System = kcg_true;
  outC->_L1.National_trip_Order = kcg_true;
  outC->National_Trip_Order = kcg_true;
  outC->Interface_To_National_System = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void InputSTM_reset_Interfaces(outC_InputSTM_Interfaces *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputSTM_Interfaces.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

