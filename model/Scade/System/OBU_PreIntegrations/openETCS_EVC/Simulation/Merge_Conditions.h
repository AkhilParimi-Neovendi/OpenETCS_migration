/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Merge_Conditions_H_
#define _Merge_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* SH_Refused_By_RBC_To_DMI/ */ SH_Refused_By_RBC_To_DMI;
  kcg_bool /* Ack_LS_Req_To_Driver/ */ Ack_LS_Req_To_Driver;
  kcg_bool /* Ack_OS_Req_To_Driver/ */ Ack_OS_Req_To_Driver;
  kcg_bool /* Ack_SH_Req_To_Driver/ */ Ack_SH_Req_To_Driver;
  kcg_bool /* Ack_SR_Req_To_Driver/ */ Ack_SR_Req_To_Driver;
  kcg_bool /* Clean_BG_List_SH_Area/ */ Clean_BG_List_SH_Area;
  kcg_bool /* End_Of_Mission_Procedure_Req/ */ End_Of_Mission_Procedure_Req;
  kcg_bool /* MA_Req_To_RBC/ */ MA_Req_To_RBC;
  kcg_bool /* Request_For_SH_To_RBC/ */ Request_For_SH_To_RBC;
  kcg_bool /* Service_Brake_Command/ */ Service_Brake_Command;
  kcg_bool /* Condition15/ */ Condition15;
  kcg_bool /* Condition31/ */ Condition31;
  kcg_bool /* Condition46/ */ Condition46;
  kcg_bool /* Condition50/ */ Condition50;
  kcg_bool /* Condition5/ */ Condition5;
  kcg_bool /* Condition6/ */ Condition6;
  kcg_bool /* Condition70/ */ Condition70;
  kcg_bool /* Condition8/ */ Condition8;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L48/ */ _L48;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L21/ */ _L21;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L71/ */ _L71;
  kcg_bool /* _L69/ */ _L69;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
  kcg_bool /* _L74/ */ _L74;
  kcg_bool /* _L75/ */ _L75;
  kcg_bool /* _L76/ */ _L76;
  kcg_bool /* _L77/ */ _L77;
  kcg_bool /* _L78/ */ _L78;
  kcg_bool /* _L79/ */ _L79;
  kcg_bool /* _L80/ */ _L80;
  kcg_bool /* _L81/ */ _L81;
  kcg_bool /* _L82/ */ _L82;
  kcg_bool /* _L83/ */ _L83;
  kcg_bool /* _L84/ */ _L84;
  kcg_bool /* _L85/ */ _L85;
  kcg_bool /* _L86/ */ _L86;
  kcg_bool /* _L87/ */ _L87;
  kcg_bool /* _L88/ */ _L88;
  kcg_bool /* _L89/ */ _L89;
} outC_Merge_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Merge_Conditions/ */
extern void Merge_Conditions(
  /* SH_Ref_SH/ */
  kcg_bool SH_Ref_SH,
  /* SH_Ref_SoM/ */
  kcg_bool SH_Ref_SoM,
  /* SH_ref_TR/ */
  kcg_bool SH_ref_TR,
  /* Ack_LS_LS/ */
  kcg_bool Ack_LS_LS,
  /* Ack_LS_SoM/ */
  kcg_bool Ack_LS_SoM,
  /* Ack_LS_TR/ */
  kcg_bool Ack_LS_TR,
  /* Ack_OS_OS/ */
  kcg_bool Ack_OS_OS,
  /* Ack_OS_SoM/ */
  kcg_bool Ack_OS_SoM,
  /* Ack_OS_TR/ */
  kcg_bool Ack_OS_TR,
  /* Ack_SH_SH/ */
  kcg_bool Ack_SH_SH,
  /* Ack_SH_SoM/ */
  kcg_bool Ack_SH_SoM,
  /* Ack_SH_TR/ */
  kcg_bool Ack_SH_TR,
  /* Ack_SR_SoM/ */
  kcg_bool Ack_SR_SoM,
  /* Ack_SR_TR/ */
  kcg_bool Ack_SR_TR,
  /* Clean_BG_SoM/ */
  kcg_bool Clean_BG_SoM,
  /* Clean_BG_SH/ */
  kcg_bool Clean_BG_SH,
  /* Clean_BG_TR/ */
  kcg_bool Clean_BG_TR,
  /* EoM_SB/ */
  kcg_bool EoM_SB,
  /* EoM_SH/ */
  kcg_bool EoM_SH,
  /* EoM_SoM/ */
  kcg_bool EoM_SoM,
  /* EoM_TR/ */
  kcg_bool EoM_TR,
  /* MA_SoM/ */
  kcg_bool MA_SoM,
  /* MA_TR/ */
  kcg_bool MA_TR,
  /* Req_SH_SH/ */
  kcg_bool Req_SH_SH,
  /* Req_SH_SoM/ */
  kcg_bool Req_SH_SoM,
  /* Req_SH_TR/ */
  kcg_bool Req_SH_TR,
  /* SB_LS/ */
  kcg_bool SB_LS,
  /* SB_OS/ */
  kcg_bool SB_OS,
  /* SB_SH/ */
  kcg_bool SB_SH,
  /* C15_OS/ */
  kcg_bool C15_OS,
  /* C15_SoM/ */
  kcg_bool C15_SoM,
  /* C15_TR/ */
  kcg_bool C15_TR,
  /* C31_FS/ */
  kcg_bool C31_FS,
  /* C31_TR/ */
  kcg_bool C31_TR,
  /* C46_NL/ */
  kcg_bool C46_NL,
  /* C46_SoM/ */
  kcg_bool C46_SoM,
  /* C50_SH/ */
  kcg_bool C50_SH,
  /* C50_SoM/ */
  kcg_bool C50_SoM,
  /* C50_TR/ */
  kcg_bool C50_TR,
  /* C5_SH/ */
  kcg_bool C5_SH,
  /* C5_SoM/ */
  kcg_bool C5_SoM,
  /* C5_TR/ */
  kcg_bool C5_TR,
  /* C6_SH/ */
  kcg_bool C6_SH,
  /* C6_SoM/ */
  kcg_bool C6_SoM,
  /* C6_TR/ */
  kcg_bool C6_TR,
  /* C70_LS/ */
  kcg_bool C70_LS,
  /* C70_SoM/ */
  kcg_bool C70_SoM,
  /* C70_TR/ */
  kcg_bool C70_TR,
  /* C8_SoM/ */
  kcg_bool C8_SoM,
  /* C8_TR/ */
  kcg_bool C8_TR,
  outC_Merge_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Merge_Conditions_reset(outC_Merge_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Merge_Conditions_init(outC_Merge_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Merge_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merge_Conditions.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

