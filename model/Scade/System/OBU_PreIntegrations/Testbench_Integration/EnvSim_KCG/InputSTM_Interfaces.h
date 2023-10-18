/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _InputSTM_Interfaces_H_
#define _InputSTM_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Interface_To_National_System/ */ Interface_To_National_System;
  kcg_bool /* National_Trip_Order/ */ National_Trip_Order;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_STM_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
} outC_InputSTM_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputSTM/ */
extern void InputSTM_Interfaces(
  /* Data_From_STM/ */
  T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  outC_InputSTM_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputSTM_reset_Interfaces(outC_InputSTM_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputSTM_init_Interfaces(outC_InputSTM_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputSTM_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputSTM_Interfaces.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

