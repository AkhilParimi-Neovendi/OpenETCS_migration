/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* axelLoadIndex/ */ axelLoadIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_AXLELOADCAT /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L19/ */ _L19;
  kcg_int64 /* _L18/ */ _L18;
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L15/ */ _L15;
  kcg_int64 /* _L24/ */ _L24;
  kcg_int64 /* _L22/ */ _L22;
  kcg_int64 /* _L20/ */ _L20;
} outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter/ */
extern void AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* axleLoadEnum/ */
  M_AXLELOADCAT axleLoadEnum,
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AxleLoadCategoryInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AxleLoadCategoryInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

