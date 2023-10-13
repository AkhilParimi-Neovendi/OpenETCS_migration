/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Output_To_BG_Management_OutputManagement_H_
#define _Output_To_BG_Management_OutputManagement_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* Data_To_BG_Management/ */ Data_To_BG_Management;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_Output_To_BG_Management_OutputManagement;

/* ===========  node initialization and cycle functions  =========== */
/* OutputManagement::Output_To_BG_Management/ */
extern void Output_To_BG_Management_OutputManagement(
  /* Data_To_BG_Management_From_Mode/ */
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Connection_to_RBC_Requested/ */
  kcg_bool Connection_to_RBC_Requested,
  /* PositionReportNeeded/ */
  kcg_bool PositionReportNeeded,
  outC_Output_To_BG_Management_OutputManagement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_BG_Management_reset_OutputManagement(
  outC_Output_To_BG_Management_OutputManagement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_BG_Management_init_OutputManagement(
  outC_Output_To_BG_Management_OutputManagement *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Output_To_BG_Management_OutputManagement_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_BG_Management_OutputManagement.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

