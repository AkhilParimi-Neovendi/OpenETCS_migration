/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _findForCheck_manage_TextMessages_Pkg_H_
#define _findForCheck_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "findElement_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outFound/ */ outFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_findElement_manage_TextMessages_Pkg /* _L12=(manage_TextMessages_Pkg::findElement#1)/ */ Context_findElement_1[31];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L6/ */ _L6;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L9/ */ _L9;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_findForCheck_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::findForCheck/ */
extern void findForCheck_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inCompareElement/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *inCompareElement,
  outC_findForCheck_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void findForCheck_reset_manage_TextMessages_Pkg(
  outC_findForCheck_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void findForCheck_init_manage_TextMessages_Pkg(
  outC_findForCheck_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _findForCheck_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** findForCheck_manage_TextMessages_Pkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

