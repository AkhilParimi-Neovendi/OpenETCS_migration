/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int32_9 /* out_digit_display/ */ out_digit_display;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ReplaceDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* _L10=(DMI_Control_Pkg::Sub_func::Keyboard::ReplaceDigit_iterator#1)/ */ Context_ReplaceDigit_iterator_1[9];
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils /* _L7=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */ Context_FindIndexEmptyLoc_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L7/ */ _L7;
  array_int32_9 /* _L11/ */ _L11;
  array_int32_9 /* _L12/ */ _L12;
  array_int32_9 /* _L13/ */ _L13;
  kcg_bool /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  array_int32_9 /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
} outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::RmDigit/ */
extern void RmDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RmDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RmDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_RmDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RmDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

