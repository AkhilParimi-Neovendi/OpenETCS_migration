/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"
#include "CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* out_KeyNumber/ */ out_KeyNumber;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard /* _L4=(DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator#1)/ */ Context_CalculateNumber_iterator_1[12];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_bool_12 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
} outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber/ */
extern void CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard(
  /* start/ */
  kcg_bool start,
  /* in_arraykey/ */
  array_bool_12 *in_arraykey,
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateNumber_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateNumber_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

