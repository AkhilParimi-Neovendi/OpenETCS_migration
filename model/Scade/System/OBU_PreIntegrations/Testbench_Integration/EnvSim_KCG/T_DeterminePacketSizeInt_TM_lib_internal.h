/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _T_DeterminePacketSizeInt_TM_lib_internal_H_
#define _T_DeterminePacketSizeInt_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* p_size/ */ p_size;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
} outC_T_DeterminePacketSizeInt_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::T_DeterminePacketSizeInt/ */
extern void T_DeterminePacketSizeInt_TM_lib_internal(
  /* n_iter/ */
  kcg_int64 n_iter,
  /* size_body/ */
  kcg_int64 size_body,
  /* size_section/ */
  kcg_int64 size_section,
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);

extern void T_DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void T_DeterminePacketSizeInt_init_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_DeterminePacketSizeInt_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_DeterminePacketSizeInt_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

