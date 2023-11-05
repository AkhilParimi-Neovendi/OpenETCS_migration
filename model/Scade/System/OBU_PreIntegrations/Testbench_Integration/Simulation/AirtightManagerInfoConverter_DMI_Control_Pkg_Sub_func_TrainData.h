/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* airtightIndex/ */ airtightIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_AIRTIGHT /* _L1/ */ _L1;
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
} outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter/ */
extern void AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData(
  /* airtightEnum/ */
  M_AIRTIGHT airtightEnum,
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AirtightManagerInfoConverter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AirtightManagerInfoConverter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

