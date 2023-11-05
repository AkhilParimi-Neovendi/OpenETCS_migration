/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendTime_Utilities.h"

/* Utilities::SendTime/ */
void SendTime_Utilities(
  /* NumberOfCycle/ */
  kcg_int32 NumberOfCycle,
  /* reset/ */
  kcg_bool reset,
  outC_SendTime_Utilities *outC)
{
  /* count/ */
  static kcg_int32 last_count;

  last_count = outC->count;
  outC->_L15 = NumberOfCycle;
  outC->_L10 = kcg_lit_int32(1);
  outC->_L11 = NumberOfCycle;
  outC->_L6 = last_count;
  outC->_L7 = outC->_L6 >= outC->_L11;
  outC->_L3 = reset;
  outC->_L5 = outC->_L3 | outC->_L7;
  outC->resetLocal = outC->_L5;
  outC->_L4 = outC->resetLocal;
  /* _L2=(pwlinear::ClockCounter#1)/ */
  ClockCounter_pwlinear(outC->_L4, &outC->Context_ClockCounter_1);
  outC->_L2 = outC->Context_ClockCounter_1.Count;
  outC->_L9 = outC->_L2 + outC->_L10;
  outC->_L13 = outC->_L15 == outC->_L9;
  outC->send = outC->_L13;
  outC->count = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void SendTime_init_Utilities(outC_SendTime_Utilities *outC)
{
  outC->_L15 = kcg_lit_int32(0);
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int32(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->resetLocal = kcg_true;
  outC->send = kcg_true;
  /* _L2=(pwlinear::ClockCounter#1)/ */
  ClockCounter_init_pwlinear(&outC->Context_ClockCounter_1);
  outC->count = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void SendTime_reset_Utilities(outC_SendTime_Utilities *outC)
{
  /* _L2=(pwlinear::ClockCounter#1)/ */
  ClockCounter_reset_pwlinear(&outC->Context_ClockCounter_1);
  outC->count = kcg_lit_int32(0);
}


void kcg_save_SV_SendTime_Utilities(
  SV_SendTime_Utilities *SV,
  outC_SendTime_Utilities *outC)
{
  kcg_save_SV_ClockCounter_pwlinear(
    &SV->Context_ClockCounter_1,
    &outC->Context_ClockCounter_1);
  SV->Context_count = outC->count;
}

void kcg_load_SV_SendTime_Utilities(
  outC_SendTime_Utilities *outC,
  SV_SendTime_Utilities *SV)
{
  kcg_load_SV_ClockCounter_pwlinear(
    &outC->Context_ClockCounter_1,
    &SV->Context_ClockCounter_1);
  outC->count = SV->Context_count;
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendTime_Utilities.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

