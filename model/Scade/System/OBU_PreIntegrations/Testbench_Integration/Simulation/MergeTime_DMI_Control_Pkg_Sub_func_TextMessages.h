/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_
#define _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_

#include "kcg_types.h"
#include "MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float32_10 /* OutQueue/ */ OutQueue;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MergeTime_iterator_DMI_Control_Pkg_Sub_func_TextMessages /* _L9=(DMI_Control_Pkg::Sub_func::TextMessages::MergeTime_iterator#1)/ */ Context_MergeTime_iterator_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float32_10_10 /* _L14/ */ _L14;
  array_float32_10 /* _L13/ */ _L13;
  array_float32_10 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  array_float32_10_10 /* _L10/ */ _L10;
  array_float32_10 /* _L9/ */ _L9;
  array_int32_10 /* _L8/ */ _L8;
} outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TextMessages::MergeTime/ */
extern void MergeTime_DMI_Control_Pkg_Sub_func_TextMessages(
  /* num/ */
  kcg_int32 num,
  /* AuxTimeiArray/ */
  array_float32_10 *AuxTimeiArray,
  /* impTimeArray/ */
  array_float32_10 *impTimeArray,
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);

extern void MergeTime_reset_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void MergeTime_init_DMI_Control_Pkg_Sub_func_TextMessages(
  outC_MergeTime_DMI_Control_Pkg_Sub_func_TextMessages *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _MergeTime_DMI_Control_Pkg_Sub_func_TextMessages_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** MergeTime_DMI_Control_Pkg_Sub_func_TextMessages.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

