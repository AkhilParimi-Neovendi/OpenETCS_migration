/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _clearStatus_manage_TextMessages_Pkg_H_
#define _clearStatus_manage_TextMessages_Pkg_H_

#include "kcg_types.h"
#include "deleteElement_manage_TextMessages_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* outStatusList/ */ outStatusList;
  kcg_int32 /* outIndex/ */ outIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_deleteElement_manage_TextMessages_Pkg /* _L3=(manage_TextMessages_Pkg::deleteElement#1)/ */ Context_deleteElement_1[31];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L5/ */ _L5;
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg /* _L6/ */ _L6;
  DMI_TextMessage_ID_T_DMI_Types_Pkg /* _L7/ */ _L7;
  array_int32_31 /* _L9/ */ _L9;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L10/ */ _L10;
} outC_clearStatus_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::clearStatus/ */
extern void clearStatus_manage_TextMessages_Pkg(
  /* inStatusList/ */
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* inMessageID/ */
  DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  outC_clearStatus_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void clearStatus_reset_manage_TextMessages_Pkg(
  outC_clearStatus_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void clearStatus_init_manage_TextMessages_Pkg(
  outC_clearStatus_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _clearStatus_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** clearStatus_manage_TextMessages_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

