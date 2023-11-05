/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SPDI_ComputeSpeedChangeIndex_SPDI.h"

/* SPDI::SPDI_ComputeSpeedChangeIndex/ */
void SPDI_ComputeSpeedChangeIndex_SPDI(
  /* Acc_Last_Speed/ */
  kcg_float32 Acc_Last_Speed,
  /* Acc_EndOfLogPart/ */
  kcg_float32 Acc_EndOfLogPart,
  /* Dist/ */
  kcg_float32 Dist,
  /* Speed/ */
  kcg_float32 Speed,
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC)
{
  /* SpeedChangeIndex/ */
  static kcg_int32 SpeedChangeIndex_partial;
  /* SpeedChangeIndex/ */
  static kcg_int32 _1_SpeedChangeIndex_partial;
  /* SpeedChangeIndex/ */
  static kcg_int32 _2_SpeedChangeIndex_partial;
  /* SpeedChangeIndex/ */
  static kcg_int32 _3_SpeedChangeIndex_partial;

  outC->_L11 = Speed;
  outC->_L9 = Acc_Last_Speed;
  outC->_L10 = outC->_L9 != outC->_L11;
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L4 = Dist;
  outC->_L7 = outC->_L4 > outC->_L8;
  outC->_L3 = Acc_EndOfLogPart;
  outC->_L5 = outC->_L3 > outC->_L4;
  outC->_L6 = outC->_L5 & outC->_L7 & outC->_L10;
  outC->SpeedChangeSymbolVisible = outC->_L6;
  outC->_L2 = Acc_EndOfLogPart;
  outC->Acc_EndOfLogPart_Out = outC->_L2;
  outC->_L1 = Speed;
  outC->Acc_Speed_Out = outC->_L1;
  outC->IfBlock1_clock = (Speed == kcg_lit_float32(0.0)) | (Speed <
      kcg_lit_float32(0.0)) | (Speed == kcg_lit_float32(635.0)) | (Speed >
      kcg_lit_float32(635.0));
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = kcg_lit_int32(3);
    SpeedChangeIndex_partial = outC->_L1_then_IfBlock1;
    outC->SpeedChangeIndex = SpeedChangeIndex_partial;
  }
  else {
    outC->else_clock_IfBlock1 = Acc_Last_Speed > Speed;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L1_then_else_IfBlock1 = kcg_lit_int32(2);
      _3_SpeedChangeIndex_partial = outC->_L1_then_else_IfBlock1;
      _1_SpeedChangeIndex_partial = _3_SpeedChangeIndex_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = kcg_lit_int32(1);
      _2_SpeedChangeIndex_partial = outC->_L1_else_else_IfBlock1;
      _1_SpeedChangeIndex_partial = _2_SpeedChangeIndex_partial;
    }
    outC->SpeedChangeIndex = _1_SpeedChangeIndex_partial;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SPDI_ComputeSpeedChangeIndex_init_SPDI(
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC)
{
  outC->_L11 = kcg_lit_float32(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float32(0.0);
  outC->_L8 = kcg_lit_float32(0.0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_float32(0.0);
  outC->_L3 = kcg_lit_float32(0.0);
  outC->_L2 = kcg_lit_float32(0.0);
  outC->_L1 = kcg_lit_float32(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_then_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L1_else_else_IfBlock1 = kcg_lit_int32(0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->SpeedChangeSymbolVisible = kcg_true;
  outC->SpeedChangeIndex = kcg_lit_int32(0);
  outC->Acc_EndOfLogPart_Out = kcg_lit_float32(0.0);
  outC->Acc_Speed_Out = kcg_lit_float32(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void SPDI_ComputeSpeedChangeIndex_reset_SPDI(
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SPDI_ComputeSpeedChangeIndex_SPDI.c
** Generation date: 2023-11-05T09:07:03
*************************************************************$ */

