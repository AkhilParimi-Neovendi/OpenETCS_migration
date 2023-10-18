/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _deleteElement_manage_TextMessages_Pkg_H_
#define _deleteElement_manage_TextMessages_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* continue/ */ _1_continue;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* toStore/ */ toStore;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* deleteIt/ */ deleteIt;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  DMI_TextMessage_ID_T_DMI_Types_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  DMI_TextMessage_ID_T_DMI_Types_Pkg /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
} outC_deleteElement_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::deleteElement/ */
extern void deleteElement_manage_TextMessages_Pkg(
  /* indexMAPwi/ */
  kcg_int64 indexMAPwi,
  /* fromStore/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* inMessageID/ */
  DMI_TextMessage_ID_T_DMI_Types_Pkg inMessageID,
  outC_deleteElement_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void deleteElement_reset_manage_TextMessages_Pkg(
  outC_deleteElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void deleteElement_init_manage_TextMessages_Pkg(
  outC_deleteElement_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _deleteElement_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** deleteElement_manage_TextMessages_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

