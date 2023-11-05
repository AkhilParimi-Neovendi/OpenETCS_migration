/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _Input_MA_SSP_Gradient_InputManagement_H_
#define _Input_MA_SSP_Gradient_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* received_L2_L3_MA/ */ received_L2_L3_MA;
  kcg_bool /* received_L1_MA/ */ received_L1_MA;
  kcg_bool /* MA_SSP_Gradient_Available/ */ MA_SSP_Gradient_Available;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L21/ */ _L21;
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg /* _L26/ */ _L26;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
} outC_Input_MA_SSP_Gradient_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::Input_MA_SSP_Gradient/ */
extern void Input_MA_SSP_Gradient_InputManagement(
  /* Data_From_Track_MASSPGradient/ */
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  outC_Input_MA_SSP_Gradient_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Input_MA_SSP_Gradient_reset_InputManagement(
  outC_Input_MA_SSP_Gradient_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Input_MA_SSP_Gradient_init_InputManagement(
  outC_Input_MA_SSP_Gradient_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Input_MA_SSP_Gradient_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Input_MA_SSP_Gradient_InputManagement.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

