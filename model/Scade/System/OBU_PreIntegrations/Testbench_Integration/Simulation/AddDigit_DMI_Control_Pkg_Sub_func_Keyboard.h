/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int32_9 /* out_digit_display/ */ out_digit_display;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* _L13=(DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator#1)/ */ Context_AddDigit_iterator_1[9];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int32_9 /* _L2/ */ _L2;
  array_int32_9 /* _L4/ */ _L4;
  kcg_int32 /* _L3/ */ _L3;
  array_int32_9 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
} outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit/ */
extern void AddDigit_DMI_Control_Pkg_Sub_func_Keyboard(
  /* in_digit_display/ */
  array_int32_9 *in_digit_display,
  /* KeyNumber/ */
  kcg_int32 KeyNumber,
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AddDigit_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AddDigit_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AddDigit_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

