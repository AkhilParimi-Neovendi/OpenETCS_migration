/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_
#define _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* condition/ */ condition;
  kcg_int32 /* IndexLevel/ */ IndexLevel;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  M_LEVEL /* _L10/ */ _L10;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_int32 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  NID_STM_DMI_Types_Pkg /* _L38/ */ _L38;
  DMI_level_T_DMI_Types_Pkg /* _L2/ */ _L2;
  M_LEVEL /* _L57/ */ _L57;
  DMI_level_T_DMI_Types_Pkg /* _L56/ */ _L56;
  M_LEVEL /* _L58/ */ _L58;
  DMI_level_T_DMI_Types_Pkg /* _L77/ */ _L77;
  kcg_int32 /* _L80/ */ _L80;
  kcg_int32 /* _L81/ */ _L81;
} outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::LevelList_Iterator/ */
extern void LevelList_Iterator_DMI_Control_Pkg_Sub_func(
  /* index/ */
  kcg_int32 index,
  /* level/ */
  DMI_level_T_DMI_Types_Pkg *level,
  /* N_level/ */
  kcg_int32 N_level,
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelList_Iterator_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelList_Iterator_init_DMI_Control_Pkg_Sub_func(
  outC_LevelList_Iterator_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelList_Iterator_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelList_Iterator_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

