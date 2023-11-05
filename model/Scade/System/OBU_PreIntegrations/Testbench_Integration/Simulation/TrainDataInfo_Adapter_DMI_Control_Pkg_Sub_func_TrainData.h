/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_
#define _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_

#include "kcg_types.h"
#include "AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* TrainCategoryIndex/ */ TrainCategoryIndex;
  kcg_int32 /* AxleLoadIndex/ */ AxleLoadIndex;
  kcg_float32 /* TrainLenght/ */ TrainLenght;
  kcg_float32 /* MaxSpeed/ */ MaxSpeed;
  kcg_int32 /* LoadingGougeIndex/ */ LoadingGougeIndex;
  kcg_int32 /* AirtightIndex/ */ AirtightIndex;
  kcg_float32 /* BrakePerc/ */ BrakePerc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TrainCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* _L11=(DMI_Control_Pkg::Sub_func::TrainData::TrainCategoryInfoConverter#1)/ */ Context_TrainCategoryInfoConverter_1;
  outC_AxleLoadCategoryInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* _L12=(DMI_Control_Pkg::Sub_func::TrainData::AxleLoadCategoryInfoConverter#1)/ */ Context_AxleLoadCategoryInfoConverter_1;
  outC_LoadingGougeInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* _L15=(DMI_Control_Pkg::Sub_func::TrainData::LoadingGougeInfoConverter#1)/ */ Context_LoadingGougeInfoConverter_1;
  outC_AirtightManagerInfoConverter_DMI_Control_Pkg_Sub_func_TrainData /* _L16=(DMI_Control_Pkg::Sub_func::TrainData::AirtightManagerInfoConverter#1)/ */ Context_AirtightManagerInfoConverter_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  NC_TRAIN /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L5/ */ _L5;
  M_BRAKEPERCT_DMI_Types_Pkg /* _L6/ */ _L6;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
  M_AXLELOADCAT /* _L8/ */ _L8;
  M_AIRTIGHT /* _L9/ */ _L9;
  M_LOADINGGAUGE /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_float32 /* _L17/ */ _L17;
} outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::TrainData::TrainDataInfo_Adapter/ */
extern void TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData(
  /* TrainData/ */
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *TrainData,
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrainDataInfo_Adapter_reset_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrainDataInfo_Adapter_init_DMI_Control_Pkg_Sub_func_TrainData(
  outC_TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

