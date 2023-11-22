/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _saveStatus_manage_TextMessages_Pkg_H_
#define _saveStatus_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "setNew_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_setNew_manage_TextMessages_Pkg /* _L5=(manage_TextMessages_Pkg::setNew#1)/ */ Context_setNew_1[31];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L1/ */ _L1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L2/ */ _L2;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L8/ */ _L8;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L9/ */ _L9;
} outC_saveStatus_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::saveStatus/ */
extern void saveStatus_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inStatusElement/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *inStatusElement,
  outC_saveStatus_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void saveStatus_reset_manage_TextMessages_Pkg(
  outC_saveStatus_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void saveStatus_init_manage_TextMessages_Pkg(
  outC_saveStatus_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _saveStatus_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** saveStatus_manage_TextMessages_Pkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

