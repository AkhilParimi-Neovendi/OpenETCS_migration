/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_10 /* OutputTimeArray/ */ OutputTimeArray;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float64_10 /* _L5/ */ _L5;
  array_float64_10 /* _L15/ */ _L15;
  array_float64_10 /* _L12/ */ _L12;
  kcg_float64 /* _L11/ */ _L11;
  kcg_int64 /* _L21/ */ _L21;
  array_float64_10 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L32/ */ _L32;
  kcg_int64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_float64 /* _L36/ */ _L36;
  array_float64_10 /* _L38/ */ _L38;
  array_float64_10 /* _L40/ */ _L40;
  kcg_int64 /* _L41/ */ _L41;
  kcg_int64 /* _L42/ */ _L42;
} outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator/ */
extern void MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages(
  /* index/ */
  kcg_int64 index,
  /* acc/ */
  array_float64_10 *acc,
  /* ImpArray/ */
  array_float64_10 *ImpArray,
  /* numAuxi/ */
  kcg_int64 numAuxi,
  /* AuxiArray/ */
  array_float64_10 *AuxiArray,
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeTime_iterator_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeTime_iterator_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

