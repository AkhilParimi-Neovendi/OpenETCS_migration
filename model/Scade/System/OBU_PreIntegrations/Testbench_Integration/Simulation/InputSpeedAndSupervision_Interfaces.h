/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _InputSpeedAndSupervision_Interfaces_H_
#define _InputSpeedAndSupervision_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Estimated_Front_End_Overpass_SR_Distance/ */ Estimated_Front_End_Overpass_SR_Distance;
  kcg_bool /* Estimated_Front_End_Rear_Location_SSP_Or_Gradient/ */ Estimated_Front_End_Rear_Location_SSP_Or_Gradient;
  kcg_bool /* Override_Function_Active/ */ Override_Function_Active;
  kcg_bool /* Train_Overpass_EOA_Antenna/ */ Train_Overpass_EOA_Antenna;
  kcg_bool /* Train_Overpass_EOA_Front_End/ */ Train_Overpass_EOA_Front_End;
  kcg_bool /* Train_Speed_Under_Override_Limit/ */ Train_Speed_Under_Override_Limit;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
} outC_InputSpeedAndSupervision_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputSpeedAndSupervision/ */
extern void InputSpeedAndSupervision_Interfaces(
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  outC_InputSpeedAndSupervision_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputSpeedAndSupervision_reset_Interfaces(
  outC_InputSpeedAndSupervision_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputSpeedAndSupervision_init_Interfaces(
  outC_InputSpeedAndSupervision_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputSpeedAndSupervision_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputSpeedAndSupervision_Interfaces.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

