/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_
#define _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* index/ */ index;
  kcg_bool /* DigitFull/ */ DigitFull;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindIndexEmptyLoc_iterator_DMI_Control_Pkg_Utils /* _L15=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc_iterator#1)/ */ Context_FindIndexEmptyLoc_iterator_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_9 /* _L7/ */ _L7;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L17/ */ _L17;
} outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FindIndexEmptyLoc/ */
extern void FindIndexEmptyLoc_DMI_Control_Pkg_Utils(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void FindIndexEmptyLoc_reset_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void FindIndexEmptyLoc_init_DMI_Control_Pkg_Utils(
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _FindIndexEmptyLoc_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

