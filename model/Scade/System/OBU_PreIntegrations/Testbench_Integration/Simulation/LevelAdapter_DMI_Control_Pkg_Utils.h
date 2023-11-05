/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _LevelAdapter_DMI_Control_Pkg_Utils_H_
#define _LevelAdapter_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* LevelIndex/ */ LevelIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L4/ */ _L4;
  M_LEVEL /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  NID_STM_DMI_Types_Pkg /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  M_LEVEL /* _L13/ */ _L13;
  M_LEVEL /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  DMI_level_T_DMI_Types_Pkg /* _L19/ */ _L19;
  DMI_level_T_DMI_Types_Pkg /* _L20/ */ _L20;
  DMI_level_T_DMI_Types_Pkg /* _L21/ */ _L21;
} outC_LevelAdapter_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::LevelAdapter/ */
extern void LevelAdapter_DMI_Control_Pkg_Utils(
  /* level/ */
  DMI_level_T_DMI_Types_Pkg *level,
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelAdapter_reset_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelAdapter_init_DMI_Control_Pkg_Utils(
  outC_LevelAdapter_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelAdapter_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelAdapter_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

