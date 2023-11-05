/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_
#define _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "CheckElem_iterator_DMI_Control_Pkg_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckResult/ */ CheckResult;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils /* _L20=(DMI_Control_Pkg::Utils::CheckElem_iterator#1)/ */ Context_CheckElem_iterator_1[8];
  outC_CheckElem_iterator_DMI_Control_Pkg_Utils /* _L22=(DMI_Control_Pkg::Utils::CheckElem_iterator#2)/ */ Context_CheckElem_iterator_2[5];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
  array_int32_8 /* _L14/ */ _L14;
  array_int32_5 /* _L15/ */ _L15;
  array_int32_8 /* _L16/ */ _L16;
  array_int32_5 /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
} outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::LevelModeSymolsChecker/ */
extern void LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func(
  /* GroupIndex/ */
  kcg_int32 GroupIndex,
  /* SymbolIndex/ */
  kcg_int32 SymbolIndex,
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelModeSymolsChecker_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelModeSymolsChecker_init_DMI_Control_Pkg_Sub_func(
  outC_LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelModeSymolsChecker_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

