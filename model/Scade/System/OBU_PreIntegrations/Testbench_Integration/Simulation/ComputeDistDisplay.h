/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ComputeDistDisplay_H_
#define _ComputeDistDisplay_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* ObjectScreenYPosition/ */ ObjectScreenYPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L13/ */ _L13_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L9/ */ _L9_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L8/ */ _L8_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L7/ */ _L7_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L3/ */ _L3_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L2/ */ _L2_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_float64 /* linearScaleFactor/ */ linearScaleFactor;
  kcg_float64 /* l_objectDistance/ */ l_objectDistance;
  kcg_float64 /* _L2/ */ _L2;
  array_float64_6 /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
} outC_ComputeDistDisplay;

/* ===========  node initialization and cycle functions  =========== */
/* ComputeDistDisplay/ */
extern void ComputeDistDisplay(
  /* MaxLinearDistance/ */
  kcg_float64 MaxLinearDistance,
  /* MaxLogDistance/ */
  kcg_float64 MaxLogDistance,
  /* ObjectPosition/ */
  kcg_float64 ObjectPosition,
  /* TrainPosition/ */
  kcg_float64 TrainPosition,
  /* Zoomlevel/ */
  kcg_int32 Zoomlevel,
  outC_ComputeDistDisplay *outC);

extern void ComputeDistDisplay_reset(outC_ComputeDistDisplay *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ComputeDistDisplay_init(outC_ComputeDistDisplay *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ComputeDistDisplay_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ComputeDistDisplay.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

