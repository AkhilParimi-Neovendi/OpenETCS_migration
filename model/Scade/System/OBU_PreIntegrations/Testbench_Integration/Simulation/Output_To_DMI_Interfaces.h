/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Output_To_DMI_Interfaces_H_
#define _Output_To_DMI_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* Data_To_DMI/ */ Data_To_DMI;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_To_DMI_Level_And_Mode_Types_Pkg /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
} outC_Output_To_DMI_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::Output_To_DMI/ */
extern void Output_To_DMI_Interfaces(
  /* Ack_LS_Req_To_Driver/ */
  kcg_bool Ack_LS_Req_To_Driver,
  /* Ack_OS_Req_To_Driver/ */
  kcg_bool Ack_OS_Req_To_Driver,
  /* Ack_RV_Req_To_Driver/ */
  kcg_bool Ack_RV_Req_To_Driver,
  /* Ack_SH_Req_To_Driver/ */
  kcg_bool Ack_SH_Req_To_Driver,
  /* Ack_SN_Req_To_Driver/ */
  kcg_bool Ack_SN_Req_To_Driver,
  /* Ack_SR_Req_To_Driver/ */
  kcg_bool Ack_SR_Req_To_Driver,
  /* Ack_TR_Req_To_Driver/ */
  kcg_bool Ack_TR_Req_To_Driver,
  /* Ack_UN_Req_To_Driver/ */
  kcg_bool Ack_UN_Req_To_Driver,
  /* SH_Refused_By_RBC_To_DMI/ */
  kcg_bool SH_Refused_By_RBC_To_DMI,
  outC_Output_To_DMI_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Output_To_DMI_reset_Interfaces(outC_Output_To_DMI_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Output_To_DMI_init_Interfaces(outC_Output_To_DMI_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Output_To_DMI_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Output_To_DMI_Interfaces.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

