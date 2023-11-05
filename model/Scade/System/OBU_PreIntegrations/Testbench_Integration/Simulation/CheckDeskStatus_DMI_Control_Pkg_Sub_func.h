/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_
#define _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Output1/ */ Output1;
  kcg_bool /* Output2/ */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* storeTrainData/ */ storeTrainData;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  cab_ID_T_TIU_Types_Pkg /* _L7/ */ _L7;
  cab_ID_T_TIU_Types_Pkg /* _L8/ */ _L8;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L11/ */ _L11;
  TIU_trainStatus_T_TIU_Types_Pkg /* _L12/ */ _L12;
} outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::CheckDeskStatus/ */
extern void CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  /* TIU_trainStatus/ */
  TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CheckDeskStatus_reset_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CheckDeskStatus_init_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* storeTrainData/ */ Context_storeTrainData;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func;

extern void kcg_save_SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func *SV,
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC);
extern void kcg_load_SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func(
  outC_CheckDeskStatus_DMI_Control_Pkg_Sub_func *outC,
  SV_CheckDeskStatus_DMI_Control_Pkg_Sub_func *SV);



#endif /* _CheckDeskStatus_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CheckDeskStatus_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

