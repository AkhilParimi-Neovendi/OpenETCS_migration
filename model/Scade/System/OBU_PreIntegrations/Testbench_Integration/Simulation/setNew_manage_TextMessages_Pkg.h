/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _setNew_manage_TextMessages_Pkg_H_
#define _setNew_manage_TextMessages_Pkg_H_

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
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_bool /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* takeIt/ */ takeIt;
  DMI_TXT_MSG_status_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
} outC_setNew_manage_TextMessages_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* manage_TextMessages_Pkg::setNew/ */
extern void setNew_manage_TextMessages_Pkg(
  /* indexMAPwi/ */
  kcg_int32 indexMAPwi,
  /* fromStore/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *fromStore,
  /* actualTextMsg/ */
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *actualTextMsg,
  outC_setNew_manage_TextMessages_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setNew_reset_manage_TextMessages_Pkg(
  outC_setNew_manage_TextMessages_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setNew_init_manage_TextMessages_Pkg(
  outC_setNew_manage_TextMessages_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setNew_manage_TextMessages_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setNew_manage_TextMessages_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

