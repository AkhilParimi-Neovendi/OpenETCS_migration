/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _InputDMI_Interfaces_H_
#define _InputDMI_Interfaces_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Driver_Ack_LS/ */ Driver_Ack_LS;
  kcg_bool /* Driver_Ack_OS/ */ Driver_Ack_OS;
  kcg_bool /* Driver_Ack_RV/ */ Driver_Ack_RV;
  kcg_bool /* Driver_Ack_SH/ */ Driver_Ack_SH;
  kcg_bool /* Driver_Ack_SN/ */ Driver_Ack_SN;
  kcg_bool /* Driver_Ack_SR/ */ Driver_Ack_SR;
  kcg_bool /* Driver_Ack_TR/ */ Driver_Ack_TR;
  kcg_bool /* Driver_Ack_UN/ */ Driver_Ack_UN;
  kcg_bool /* Driver_Req_Exit_SH/ */ Driver_Req_Exit_SH;
  kcg_bool /* Driver_Req_NL/ */ Driver_Req_NL;
  kcg_bool /* Driver_Req_Override/ */ Driver_Req_Override;
  kcg_bool /* Driver_Req_SH/ */ Driver_Req_SH;
  kcg_bool /* Driver_Req_Start/ */ Driver_Req_Start;
  kcg_bool /* ETCS_Isolated/ */ ETCS_Isolated;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_Data_From_DMI_Level_And_Mode_Types_Pkg /* _L16/ */ _L16;
  kcg_bool /* _L130/ */ _L130;
  kcg_bool /* _L129/ */ _L129;
  kcg_bool /* _L128/ */ _L128;
  kcg_bool /* _L127/ */ _L127;
  kcg_bool /* _L126/ */ _L126;
  kcg_bool /* _L125/ */ _L125;
  kcg_bool /* _L124/ */ _L124;
  kcg_bool /* _L123/ */ _L123;
  kcg_bool /* _L122/ */ _L122;
  kcg_bool /* _L121/ */ _L121;
  kcg_bool /* _L120/ */ _L120;
  kcg_bool /* _L119/ */ _L119;
  kcg_bool /* _L118/ */ _L118;
  kcg_bool /* _L117/ */ _L117;
} outC_InputDMI_Interfaces;

/* ===========  node initialization and cycle functions  =========== */
/* Interfaces::InputDMI/ */
extern void InputDMI_Interfaces(
  /* Data_From_DMI/ */
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI,
  outC_InputDMI_Interfaces *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InputDMI_reset_Interfaces(outC_InputDMI_Interfaces *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InputDMI_init_Interfaces(outC_InputDMI_Interfaces *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InputDMI_Interfaces_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InputDMI_Interfaces.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

