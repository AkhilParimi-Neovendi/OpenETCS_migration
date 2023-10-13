/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* loadingGougeIndex/ */ loadingGougeIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LOADINGGAUGE /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
} outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter/ */
extern void LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* loadingGougeEnum/ */
  M_LOADINGGAUGE loadingGougeEnum,
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LoadingGougeInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LoadingGougeInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

