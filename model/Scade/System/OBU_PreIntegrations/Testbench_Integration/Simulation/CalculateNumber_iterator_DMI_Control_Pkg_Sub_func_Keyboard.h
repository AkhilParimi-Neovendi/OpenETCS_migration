/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_
#define _CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_int64 /* out_acc/ */ out_acc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L7/ */ _L7;
} outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::Keyboard::CalculateNumber_iterator/ */
extern void CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard(
  /* acc/ */
  kcg_int64 acc,
  /* in_arraykey/ */
  kcg_bool in_arraykey,
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CalculateNumber_iterator_reset_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CalculateNumber_iterator_init_DMI_Control_Pkg_Sub_func_Keyboard(
  outC_CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CalculateNumber_iterator_DMI_Control_Pkg_Sub_func_Keyboard.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

