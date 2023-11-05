/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _InflateABrakeSafe_SDMConversionModelPkg_H_
#define _InflateABrakeSafe_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ASafe_T_CalcBrakingCurves_types /* aBrakeSafe/ */ aBrakeSafe;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InflateABrakeRow_SDMConversionModelPkg /* _L35=(SDMConversionModelPkg::InflateABrakeRow)/ */ Context_InflateABrakeRow[13];
  outC_InflateABrakeSpeeds_SDMConversionModelPkg /* _L9=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */ Context_InflateABrakeSpeeds_1[13];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  av_MergedMap_t_SDMConversionModelPkg /* _L1/ */ _L1;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L15/ */ _L15;
  array_float32_100 /* _L12/ */ _L12;
  ASafe_T_CalcBrakingCurves_types /* _L11/ */ _L11;
  array_float32_100_1 /* _L10/ */ _L10;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  array_float32_1 /* _L4/ */ _L4;
  kcg_float32 /* _L2/ */ _L2;
  v_MergedSteps_t_SDMConversionModelPkg /* _L25/ */ _L25;
  a_MergedSteps_t_SDMConversionModelPkg /* _L24/ */ _L24;
  ASafe_Data_T_CalcBrakingCurves_types /* _L26/ */ _L26;
  array_float32_100_13 /* _L31/ */ _L31;
  ASafeRow_T_CalcBrakingCurves_types /* _L32/ */ _L32;
  V_internal_real_Type_SDM_Types_Pkg /* _L34/ */ _L34;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L35/ */ _L35;
  kcg_int32 /* _L36/ */ _L36;
  array_float32_13 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
} outC_InflateABrakeSafe_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::InflateABrakeSafe/ */
extern void InflateABrakeSafe_SDMConversionModelPkg(
  /* aBrakeSafe_cm/ */
  av_MergedMap_t_SDMConversionModelPkg *aBrakeSafe_cm,
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InflateABrakeSafe_reset_SDMConversionModelPkg(
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InflateABrakeSafe_init_SDMConversionModelPkg(
  outC_InflateABrakeSafe_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InflateABrakeSafe_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeSafe_SDMConversionModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

