/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_
#define _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_

#include "kcg_types.h"
#include "SEND_FindSlot_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* HeadersOut/ */ HeadersOut;
  kcg_int32 /* NewStartAddr/ */ NewStartAddr;
  kcg_int32 /* NewEndAddr/ */ NewEndAddr;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_FindSlot_TM_lib_internal /* _L3=(TM_lib_internal::SEND_FindSlot#1)/ */ Context_SEND_FindSlot_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  Metadata_T_Common_Types_Pkg /* _L8/ */ _L8;
  MetadataElement_T_Common_Types_Pkg /* _L9/ */ _L9;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L22/ */ _L22;
  Metadata_T_Common_Types_Pkg /* _L23/ */ _L23;
  Metadata_T_Common_Types_Pkg /* _L24/ */ _L24;
  kcg_int32 /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
  MetadataElement_T_Common_Types_Pkg /* _L43/ */ _L43;
  MetadataElement_T_Common_Types_Pkg /* _L44/ */ _L44;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L3/ */ _L3;
} outC_SEND_WriteBaliseMessageHeader_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ */
extern void SEND_WriteBaliseMessageHeader_TM_lib_internal(
  /* HeadersIn/ */
  Metadata_T_Common_Types_Pkg *HeadersIn,
  /* NewHeader/ */
  MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);

extern void SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void SEND_WriteBaliseMessageHeader_init_TM_lib_internal(
  outC_SEND_WriteBaliseMessageHeader_TM_lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SEND_WriteBaliseMessageHeader_TM_lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** SEND_WriteBaliseMessageHeader_TM_lib_internal.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

