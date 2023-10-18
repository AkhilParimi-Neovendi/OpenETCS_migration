/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SEND_WriteBaliseDataElement_TM_lib_internal_H_
#define _SEND_WriteBaliseDataElement_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Cont/ */ Cont;
  kcg_int64 /* DataOut/ */ DataOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
} outC_SEND_WriteBaliseDataElement_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_WriteBaliseDataElement/ */
extern void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* Index/ */
  kcg_int64 Index,
  /* DataIn/ */
  kcg_int64 DataIn,
  /* ElementIn/ */
  CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* StartAddress/ */
  kcg_int64 StartAddress,
  /* EndAddress/ */
  kcg_int64 EndAddress,
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC);

extern void SEND_WriteBaliseDataElement_reset_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_WriteBaliseDataElement_init_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SEND_WriteBaliseDataElement_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_WriteBaliseDataElement_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

