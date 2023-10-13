/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func_H_
#define _ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* ModeSymbolIndex/ */ ModeSymbolIndex;
  kcg_bool /* ModeSymbol_B7_visibility/ */ ModeSymbol_B7_visibility;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  M_MODE /* _L3/ */ _L3;
  kcg_bool /* _L18/ */ _L18;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L23/ */ _L23;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L25/ */ _L25;
  kcg_int64 /* _L26/ */ _L26;
  kcg_int64 /* _L27/ */ _L27;
  kcg_int64 /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
  kcg_int64 /* _L30/ */ _L30;
  kcg_int64 /* _L31/ */ _L31;
} outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::ModeSymbolToIndex_B7/ */
extern void ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func(
  /* DMI_dynamicPacket/ */
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamicPacket,
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ModeSymbolToIndex_B7_reset_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ModeSymbolToIndex_B7_init_DMI_Control_Pkg_Sub_func(
  outC_ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

