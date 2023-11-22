/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _findElement_manage_TextMessages_Pkg_H_
#define _findElement_manage_TextMessages_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  M_LEVEL /* _L3/ */ _L3;
  kcg_bool /* _L6/ */ _L6;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L8/ */ _L8;
  M_LEVEL /* _L9/ */ _L9;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
  M_MODE /* _L16/ */ _L16;
  M_MODE /* _L15/ */ _L15;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L14/ */ _L14;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
} outC_findElement_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::findElement/ */
extern void findElement_manage_TextMessages_Pkg(
  /* accu/ */
  kcg_bool accu,
  /* fromStore/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* newRequest/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *newRequest,
  outC_findElement_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findElement_reset_manage_TextMessages_Pkg(
  outC_findElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findElement_init_manage_TextMessages_Pkg(
  outC_findElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _findElement_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findElement_manage_TextMessages_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

