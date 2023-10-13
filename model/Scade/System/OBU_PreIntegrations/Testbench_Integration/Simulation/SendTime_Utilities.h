/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _SendTime_Utilities_H_
#define _SendTime_Utilities_H_

#include "kcg_types.h"
#include "ClockCounter_pwlinear.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* count/ */ count;
  kcg_bool /* send/ */ send;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ClockCounter_pwlinear /* _L2=(pwlinear::ClockCounter#1)/ */ Context_ClockCounter_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* @1/Output1/ */ Output1_NumericToInt64_1_int32;
  kcg_int32 /* @1/Input1/ */ Input1_NumericToInt64_1_int32;
  kcg_int64 /* @1/_L2/ */ _L2_NumericToInt64_1_int32;
  kcg_int32 /* @1/_L1/ */ _L1_NumericToInt64_1_int32;
  kcg_bool /* resetLocal/ */ resetLocal;
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_bool /* _L13/ */ _L13;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
} outC_SendTime_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::SendTime/ */
extern void SendTime_Utilities(
  /* NumberOfCycle/ */
  kcg_int64 NumberOfCycle,
  /* reset/ */
  kcg_bool reset,
  outC_SendTime_Utilities *outC);

extern void SendTime_reset_Utilities(outC_SendTime_Utilities *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SendTime_init_Utilities(outC_SendTime_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_int64 /* count/ */ Context_count;
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_ClockCounter_pwlinear Context_ClockCounter_1;
} SV_SendTime_Utilities;

extern void kcg_save_SV_SendTime_Utilities(
  SV_SendTime_Utilities *SV,
  outC_SendTime_Utilities *outC);
extern void kcg_load_SV_SendTime_Utilities(
  outC_SendTime_Utilities *outC,
  SV_SendTime_Utilities *SV);

/*
  Expanded instances for: Utilities::SendTime/
  @1: (math::NumericToInt64#1)
*/

#endif /* _SendTime_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SendTime_Utilities.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

