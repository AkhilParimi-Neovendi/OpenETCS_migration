/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_int32 /* out_digit_display/ */ out_digit_display;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
} outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::AddDigit_iterator/ */
extern void AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* Index/ */
  kcg_int32 Index,
  /* KeyNumber/ */
  kcg_int32 KeyNumber,
  /* in_digit_display/ */
  kcg_int32 in_digit_display,
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AddDigit_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AddDigit_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AddDigit_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

