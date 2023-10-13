/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* insert/ */ insert;
  kcg_bool /* insertAuxi/ */ insertAuxi;
  kcg_bool /* insertImp/ */ insertImp;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::CheckMsgInsertOrDelete/ */
extern void CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages(
  /* msg/ */
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *msg,
  /* isImportant/ */
  kcg_bool isImportant,
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void CheckMsgInsertOrDelete_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void CheckMsgInsertOrDelete_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckMsgInsertOrDelete_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

