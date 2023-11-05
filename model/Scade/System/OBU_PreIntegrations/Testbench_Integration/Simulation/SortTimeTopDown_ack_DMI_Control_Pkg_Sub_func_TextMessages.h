/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_5 /* outTimeArray/ */ outTimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float32_5 /* _L32/ */ _L32;
  kcg_float32 /* _L28/ */ _L28;
  kcg_float32 /* _L25/ */ _L25;
  array_float32_5 /* _L22/ */ _L22;
  array_float32_5 /* _L21/ */ _L21;
  array_float32_5 /* _L19/ */ _L19;
  kcg_int32 /* _L18/ */ _L18;
  array_float32_5 /* _L14/ */ _L14;
  kcg_int32 /* _L58/ */ _L58;
  kcg_bool /* _L62/ */ _L62;
  kcg_int32 /* _L65/ */ _L65;
  kcg_int32 /* _L64/ */ _L64;
  kcg_int32 /* _L68/ */ _L68;
  kcg_int32 /* _L69/ */ _L69;
  kcg_int32 /* _L70/ */ _L70;
  kcg_int32 /* _L71/ */ _L71;
} outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_ack/ */
extern void SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  array_float32_5 *acc,
  /* TimeQueue/ */
  array_float32_5 *TimeQueue,
  /* num/ */
  kcg_int32 num,
  /* numE/ */
  kcg_int32 numE,
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void SortTimeTopDown_ack_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SortTimeTopDown_ack_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortTimeTopDown_ack_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

