/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_
#define _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_bool /* accout/ */ accout;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L19/ */ _L19;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
} outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator/ */
extern void FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils(
  /* index/ */
  kcg_int32 index,
  /* Acc/ */
  kcg_bool Acc,
  /* in_digit_display/ */
  kcg_int32 in_digit_display,
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexEmptyLoc_iterator_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexEmptyLoc_iterator_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

