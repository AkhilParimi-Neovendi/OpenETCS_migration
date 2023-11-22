/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merge_Conditions.h"

/* Merge_Conditions/ */
void Merge_Conditions(
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
  outC_Merge_Conditions *outC)
{
  outC->_L42 = C5_TR;
  outC->_L41 = C5_SoM;
  outC->_L40 = C5_SH;
  outC->_L89 = outC->_L40 | outC->_L41 | outC->_L42;
  outC->_L9 = Ack_OS_TR;
  outC->_L8 = Ack_OS_SoM;
  outC->_L7 = Ack_OS_OS;
  outC->_L88 = outC->_L7 | outC->_L8 | outC->_L9;
  outC->_L6 = Ack_LS_TR;
  outC->_L5 = Ack_LS_SoM;
  outC->_L4 = Ack_LS_LS;
  outC->_L87 = outC->_L4 | outC->_L5 | outC->_L6;
  outC->_L14 = Ack_SR_TR;
  outC->_L13 = Ack_SR_SoM;
  outC->_L86 = outC->_L13 | outC->_L14;
  outC->_L3 = SH_ref_TR;
  outC->_L2 = SH_Ref_SoM;
  outC->_L1 = SH_Ref_SH;
  outC->_L85 = outC->_L1 | outC->_L2 | outC->_L3;
  outC->_L12 = Ack_SH_TR;
  outC->_L11 = Ack_SH_SoM;
  outC->_L10 = Ack_SH_SH;
  outC->_L84 = outC->_L10 | outC->_L11 | outC->_L12;
  outC->_L21 = EoM_TR;
  outC->_L20 = EoM_SoM;
  outC->_L19 = EoM_SH;
  outC->_L18 = EoM_SB;
  outC->_L83 = outC->_L18 | outC->_L19 | outC->_L20 | outC->_L21;
  outC->_L17 = Clean_BG_TR;
  outC->_L16 = Clean_BG_SH;
  outC->_L15 = Clean_BG_SoM;
  outC->_L82 = outC->_L15 | outC->_L16 | outC->_L17;
  outC->_L29 = SB_SH;
  outC->_L28 = SB_OS;
  outC->_L27 = SB_LS;
  outC->_L81 = outC->_L27 | outC->_L28 | outC->_L29;
  outC->_L26 = Req_SH_TR;
  outC->_L25 = Req_SH_SoM;
  outC->_L24 = Req_SH_SH;
  outC->_L80 = outC->_L24 | outC->_L25 | outC->_L26;
  outC->_L23 = MA_TR;
  outC->_L22 = MA_SoM;
  outC->_L79 = outC->_L22 | outC->_L23;
  outC->_L45 = C6_TR;
  outC->_L44 = C6_SoM;
  outC->_L43 = C6_SH;
  outC->_L78 = outC->_L43 | outC->_L44 | outC->_L45;
  outC->_L39 = C50_TR;
  outC->_L38 = C50_SoM;
  outC->_L37 = C50_SH;
  outC->_L77 = outC->_L37 | outC->_L38 | outC->_L39;
  outC->_L48 = C70_TR;
  outC->_L47 = C70_SoM;
  outC->_L46 = C70_LS;
  outC->_L76 = outC->_L46 | outC->_L47 | outC->_L48;
  outC->_L71 = C8_TR;
  outC->_L69 = C8_SoM;
  outC->_L75 = outC->_L69 | outC->_L71;
  outC->_L36 = C46_SoM;
  outC->_L35 = C46_NL;
  outC->_L74 = outC->_L35 | outC->_L36;
  outC->_L34 = C31_TR;
  outC->_L33 = C31_FS;
  outC->_L73 = outC->_L33 | outC->_L34;
  outC->_L32 = C15_TR;
  outC->_L31 = C15_SoM;
  outC->_L30 = C15_OS;
  outC->_L72 = outC->_L30 | outC->_L31 | outC->_L32;
  outC->Condition8 = outC->_L75;
  outC->SH_Refused_By_RBC_To_DMI = outC->_L85;
  outC->Ack_LS_Req_To_Driver = outC->_L87;
  outC->Ack_OS_Req_To_Driver = outC->_L88;
  outC->Ack_SH_Req_To_Driver = outC->_L84;
  outC->Ack_SR_Req_To_Driver = outC->_L86;
  outC->Clean_BG_List_SH_Area = outC->_L82;
  outC->End_Of_Mission_Procedure_Req = outC->_L83;
  outC->MA_Req_To_RBC = outC->_L79;
  outC->Request_For_SH_To_RBC = outC->_L80;
  outC->Service_Brake_Command = outC->_L81;
  outC->Condition15 = outC->_L72;
  outC->Condition31 = outC->_L73;
  outC->Condition46 = outC->_L74;
  outC->Condition50 = outC->_L77;
  outC->Condition5 = outC->_L89;
  outC->Condition6 = outC->_L78;
  outC->Condition70 = outC->_L76;
}

#ifndef KCG_USER_DEFINED_INIT
void Merge_Conditions_init(outC_Merge_Conditions *outC)
{
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_true;
  outC->_L86 = kcg_true;
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_true;
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_true;
  outC->_L80 = kcg_true;
  outC->_L79 = kcg_true;
  outC->_L78 = kcg_true;
  outC->_L77 = kcg_true;
  outC->_L76 = kcg_true;
  outC->_L75 = kcg_true;
  outC->_L74 = kcg_true;
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L69 = kcg_true;
  outC->_L71 = kcg_true;
  outC->_L1 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_true;
  outC->_L11 = kcg_true;
  outC->_L12 = kcg_true;
  outC->_L13 = kcg_true;
  outC->_L14 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L16 = kcg_true;
  outC->_L17 = kcg_true;
  outC->_L18 = kcg_true;
  outC->_L19 = kcg_true;
  outC->_L20 = kcg_true;
  outC->_L21 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L23 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L25 = kcg_true;
  outC->_L26 = kcg_true;
  outC->_L27 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L29 = kcg_true;
  outC->_L30 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L32 = kcg_true;
  outC->_L33 = kcg_true;
  outC->_L34 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L37 = kcg_true;
  outC->_L38 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L48 = kcg_true;
  outC->Condition8 = kcg_true;
  outC->Condition70 = kcg_true;
  outC->Condition6 = kcg_true;
  outC->Condition5 = kcg_true;
  outC->Condition50 = kcg_true;
  outC->Condition46 = kcg_true;
  outC->Condition31 = kcg_true;
  outC->Condition15 = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Request_For_SH_To_RBC = kcg_true;
  outC->MA_Req_To_RBC = kcg_true;
  outC->End_Of_Mission_Procedure_Req = kcg_true;
  outC->Clean_BG_List_SH_Area = kcg_true;
  outC->Ack_SR_Req_To_Driver = kcg_true;
  outC->Ack_SH_Req_To_Driver = kcg_true;
  outC->Ack_OS_Req_To_Driver = kcg_true;
  outC->Ack_LS_Req_To_Driver = kcg_true;
  outC->SH_Refused_By_RBC_To_DMI = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Merge_Conditions_reset(outC_Merge_Conditions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Merge_Conditions.c
** Generation date: 2023-11-06T13:54:30
*************************************************************$ */

