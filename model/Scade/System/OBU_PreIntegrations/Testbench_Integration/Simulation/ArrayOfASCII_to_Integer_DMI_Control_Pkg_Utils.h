/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_
#define _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils.h"
#include "FindIndexEmptyLoc_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ASCII_to_INTEGER_iterator_DMI_Control_Pkg_Utils /* _L2=(DMI_Control_Pkg::Utils::ASCII_to_INTEGER_iterator#1)/ */ Context_ASCII_to_INTEGER_iterator_1[9];
  outC_FindIndexEmptyLoc_DMI_Control_Pkg_Utils /* _L5=(DMI_Control_Pkg::Utils::FindIndexEmptyLoc#1)/ */ Context_FindIndexEmptyLoc_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_int64_9 /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  array_int64_9 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
} outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::ArrayOfASCII_to_Integer/ */
extern void ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils(
  /* TrainRunningNumber/ */
  array_int64_9 *TrainRunningNumber,
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ArrayOfASCII_to_Integer_reset_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ArrayOfASCII_to_Integer_init_DMI_Control_Pkg_Utils(
  outC_ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ArrayOfASCII_to_Integer_DMI_Control_Pkg_Utils.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

