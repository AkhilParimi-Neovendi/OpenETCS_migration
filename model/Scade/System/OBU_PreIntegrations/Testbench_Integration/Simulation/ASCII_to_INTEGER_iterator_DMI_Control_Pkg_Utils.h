/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils_H_
#define _ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_int32 /* outInt/ */ outInt;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
} outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator/ */
extern void ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils(
  /* index/ */
  kcg_int32 index,
  /* acc/ */
  kcg_int32 acc,
  /* ascii/ */
  kcg_int32 ascii,
  /* power/ */
  kcg_int32 power,
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ASCII_to_INTEGER_iterator_reset_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ASCII_to_INTEGER_iterator_init_DMI_Control_Pkg_Utils(
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

