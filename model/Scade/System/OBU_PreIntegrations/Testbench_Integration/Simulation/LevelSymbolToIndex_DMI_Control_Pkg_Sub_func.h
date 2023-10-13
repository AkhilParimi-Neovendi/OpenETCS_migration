/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _LevelSymbolToIndex_DMI_Control_Pkg_Sub_func_H_
#define _LevelSymbolToIndex_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Visibility/ */ Visibility;
  kcg_int64 /* LevelSymbol/ */ LevelSymbol;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* _L1/ */ _L1;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
} outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::LevelSymbolToIndex/ */
extern void LevelSymbolToIndex_DMI_Control_Pkg_Sub_func(
  /* LevelSymbolPacket/ */
  M_LEVEL LevelSymbolPacket,
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LevelSymbolToIndex_reset_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LevelSymbolToIndex_init_DMI_Control_Pkg_Sub_func(
  outC_LevelSymbolToIndex_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LevelSymbolToIndex_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

