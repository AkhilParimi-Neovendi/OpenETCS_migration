/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _SPDI_ComputeSpeedChangeIndex_SPDI_H_
#define _SPDI_ComputeSpeedChangeIndex_SPDI_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* Acc_Speed_Out/ */ Acc_Speed_Out;
  kcg_float64 /* Acc_EndOfLogPart_Out/ */ Acc_EndOfLogPart_Out;
  kcg_int64 /* SpeedChangeIndex/ */ SpeedChangeIndex;
  kcg_bool /* SpeedChangeSymbolVisible/ */ SpeedChangeSymbolVisible;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
} outC_SPDI_ComputeSpeedChangeIndex_SPDI;

/* ===========  node initialization and cycle functions  =========== */
/* SPDI::SPDI_ComputeSpeedChangeIndex/ */
extern void SPDI_ComputeSpeedChangeIndex_SPDI(
  /* Acc_Last_Speed/ */
  kcg_float64 Acc_Last_Speed,
  /* Acc_EndOfLogPart/ */
  kcg_float64 Acc_EndOfLogPart,
  /* Dist/ */
  kcg_float64 Dist,
  /* Speed/ */
  kcg_float64 Speed,
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC);

extern void SPDI_ComputeSpeedChangeIndex_reset_SPDI(
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SPDI_ComputeSpeedChangeIndex_init_SPDI(
  outC_SPDI_ComputeSpeedChangeIndex_SPDI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SPDI_ComputeSpeedChangeIndex_SPDI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SPDI_ComputeSpeedChangeIndex_SPDI.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

