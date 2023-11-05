/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_10 /* outTimeArray/ */ outTimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L80/ */ _L80;
  kcg_int32 /* _L79/ */ _L79;
  kcg_int32 /* _L78/ */ _L78;
  kcg_float32 /* _L77/ */ _L77;
  kcg_int32 /* _L76/ */ _L76;
  array_float32_10 /* _L75/ */ _L75;
  kcg_bool /* _L74/ */ _L74;
  kcg_int32 /* _L73/ */ _L73;
  array_float32_10 /* _L72/ */ _L72;
  kcg_int32 /* _L71/ */ _L71;
  array_float32_10 /* _L70/ */ _L70;
  kcg_float32 /* _L69/ */ _L69;
  kcg_float32 /* _L68/ */ _L68;
  kcg_int32 /* _L67/ */ _L67;
  array_float32_10 /* _L66/ */ _L66;
  kcg_float32 /* _L65/ */ _L65;
  array_float32_10 /* _L64/ */ _L64;
  array_float32_10 /* _L63/ */ _L63;
  kcg_float32 /* _L62/ */ _L62;
} outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::SortTimeTopDown_normal/ */
extern void SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  array_float32_10 *acc,
  /* TimeQueue/ */
  array_float32_10 *TimeQueue,
  /* num/ */
  kcg_int32 num,
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void SortTimeTopDown_normal_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SortTimeTopDown_normal_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SortTimeTopDown_normal_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

