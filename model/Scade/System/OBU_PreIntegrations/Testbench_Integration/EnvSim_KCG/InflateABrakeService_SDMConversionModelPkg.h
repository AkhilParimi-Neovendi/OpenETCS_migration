/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _InflateABrakeService_SDMConversionModelPkg_H_
#define _InflateABrakeService_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "InflateABrakeRow_SDMConversionModelPkg.h"
#include "InflateABrakeSpeeds_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ASafe_T_CalcBrakingCurves_types /* aBrakeService/ */ aBrakeService;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_InflateABrakeRow_SDMConversionModelPkg /* _L36=(SDMConversionModelPkg::InflateABrakeRow#1)/ */ Context_InflateABrakeRow_1[6];
  outC_InflateABrakeSpeeds_SDMConversionModelPkg /* _L13=(SDMConversionModelPkg::InflateABrakeSpeeds#1)/ */ Context_InflateABrakeSpeeds_1[6];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  av_Map_t_SDMConversionModelPkg /* _L2/ */ _L2;
  a_Brake_t_SDMConversionModelPkg /* _L3/ */ _L3;
  v_BrakeSteps_t_SDMConversionModelPkg /* _L7/ */ _L7;
  a_BrakeSteps_t_SDMConversionModelPkg /* _L6/ */ _L6;
  ASafe_T_CalcBrakingCurves_types /* _L11/ */ _L11;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types /* _L12/ */ _L12;
  array_float32_8 /* _L14/ */ _L14;
  kcg_float32 /* _L17/ */ _L17;
  array_float32_100 /* _L16/ */ _L16;
  array_float32_100_8 /* _L28/ */ _L28;
  ASafe_Data_T_CalcBrakingCurves_types /* _L25/ */ _L25;
  ASafeRow_T_CalcBrakingCurves_types /* _L30/ */ _L30;
  V_internal_real_Type_SDM_Types_Pkg /* _L31/ */ _L31;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L13/ */ _L13;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L36/ */ _L36;
  array_float32_100_6 /* _L37/ */ _L37;
  kcg_int32 /* _L38/ */ _L38;
  array_float32_6 /* _L39/ */ _L39;
  kcg_int32 /* _L40/ */ _L40;
} outC_InflateABrakeService_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::InflateABrakeService/ */
extern void InflateABrakeService_SDMConversionModelPkg(
  /* aBrake/ */
  a_Brake_t_SDMConversionModelPkg *aBrake,
  outC_InflateABrakeService_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InflateABrakeService_reset_SDMConversionModelPkg(
  outC_InflateABrakeService_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InflateABrakeService_init_SDMConversionModelPkg(
  outC_InflateABrakeService_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InflateABrakeService_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeService_SDMConversionModelPkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

