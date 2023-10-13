/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SendTime_Utilities.h"

/* Utilities::SendTime/ */
void SendTime_Utilities(
  /* NumberOfCycle/ */
  kcg_int64 NumberOfCycle,
  /* reset/ */
  kcg_bool reset,
  outC_SendTime_Utilities *outC)
{
  /* count/ */
  static kcg_int64 last_count;

  outC->_L10 = kcg_lit_int32(1);
  outC->_L11 = NumberOfCycle;
  last_count = outC->count;
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
  outC->Input1_NumericToInt64_1_int32 = outC->_L9;
  outC->_L1_NumericToInt64_1_int32 = outC->Input1_NumericToInt64_1_int32;
  outC->_L2_NumericToInt64_1_int32 = /* @1/_L2= */(kcg_int64)
      outC->_L1_NumericToInt64_1_int32;
  outC->Output1_NumericToInt64_1_int32 = outC->_L2_NumericToInt64_1_int32;
  outC->_L16 = outC->Output1_NumericToInt64_1_int32;
  outC->_L15 = NumberOfCycle;
  outC->_L13 = outC->_L15 == outC->_L16;
  outC->send = outC->_L13;
  outC->count = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void SendTime_init_Utilities(outC_SendTime_Utilities *outC)
{
  outC->_L16 = kcg_lit_int64(0);
  outC->_L15 = kcg_lit_int64(0);
  outC->_L13 = kcg_true;
  outC->_L11 = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_lit_int64(0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  outC->resetLocal = kcg_true;
  outC->_L1_NumericToInt64_1_int32 = kcg_lit_int32(0);
  outC->_L2_NumericToInt64_1_int32 = kcg_lit_int64(0);
  outC->Input1_NumericToInt64_1_int32 = kcg_lit_int32(0);
  outC->Output1_NumericToInt64_1_int32 = kcg_lit_int64(0);
  outC->send = kcg_true;
  /* _L2=(pwlinear::ClockCounter#1)/ */
  ClockCounter_init_pwlinear(&outC->Context_ClockCounter_1);
  outC->count = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


void SendTime_reset_Utilities(outC_SendTime_Utilities *outC)
{
  /* _L2=(pwlinear::ClockCounter#1)/ */
  ClockCounter_reset_pwlinear(&outC->Context_ClockCounter_1);
  outC->count = kcg_lit_int64(0);
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

/*
  Expanded instances for: Utilities::SendTime/
  @1: (math::NumericToInt64#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendTime_Utilities.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

