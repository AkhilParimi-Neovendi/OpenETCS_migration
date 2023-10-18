/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Output_To_BG_Management_Interfaces_H_
#define _Output_To_BG_Management_Interfaces_H_

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
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
} outC_Output_To_BG_Management_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::Output_To_BG_Management/ */
extern void Output_To_BG_Management_Interfaces(
  /* End_Of_Mission_Procedure_Req/ */
  kcg_bool End_Of_Mission_Procedure_Req,
  /* Clean_BG_List_SH_Area/ */
  kcg_bool Clean_BG_List_SH_Area,
  /* MA_Req_To_RBC/ */
  kcg_bool MA_Req_To_RBC,
  /* Request_For_SH_To_RBC/ */
  kcg_bool Request_For_SH_To_RBC,
  outC_Output_To_BG_Management_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_BG_Management_reset_Interfaces(
  outC_Output_To_BG_Management_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_BG_Management_init_Interfaces(
  outC_Output_To_BG_Management_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Output_To_BG_Management_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_BG_Management_Interfaces.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

