/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef __223_InputSpeedAndSupervision_InputManagement_H_
#define __223_InputSpeedAndSupervision_InputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* Data_From_Speed_and_Supervision_To_Mode/ */ Data_From_Speed_and_Supervision_To_Mode;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Loc_Estimated_Front_End_Overpass_SR_Distance/ */ Loc_Estimated_Front_End_Overpass_SR_Distance;
  kcg_bool /* Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl/ */ Loc_Estimated_Front_End_Rear_Location_SSP_Or_Gradientl;
  kcg_bool /* Loc_Override_Function_Active/ */ Loc_Override_Function_Active;
  kcg_bool /* Loc_Train_Overpass_EOA_Antenna/ */ Loc_Train_Overpass_EOA_Antenna;
  kcg_bool /* Loc_Train_Overpass_EOA_Front_End/ */ Loc_Train_Overpass_EOA_Front_End;
  kcg_bool /* Loc_Train_Speed_Under_Override_Limit/ */ Loc_Train_Speed_Under_Override_Limit;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
} outC__223_InputSpeedAndSupervision_InputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* InputManagement::InputSpeedAndSupervision/ */
extern void _223_InputSpeedAndSupervision_InputManagement(
  /* Data_From_Speed_and_Supervision/ */
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  outC__223_InputSpeedAndSupervision_InputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void _223_InputSpeedAndSupervision_reset_InputManagement(
  outC__223_InputSpeedAndSupervision_InputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void _223_InputSpeedAndSupervision_init_InputManagement(
  outC__223_InputSpeedAndSupervision_InputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* __223_InputSpeedAndSupervision_InputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** _223_InputSpeedAndSupervision_InputManagement.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

