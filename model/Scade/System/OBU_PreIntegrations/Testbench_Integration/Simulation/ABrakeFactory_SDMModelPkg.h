/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _ABrakeFactory_SDMModelPkg_H_
#define _ABrakeFactory_SDMModelPkg_H_

#include "kcg_types.h"
#include "InflateABrakeService_SDMConversionModelPkg.h"
#include "InflateABrakeSafe_SDMConversionModelPkg.h"
#include "brakePercentToABrake_SDMConversionModelPkg.h"
#include "LimitToReducedAdhesion_SDMModelPkg.h"
#include "A_brake_safe_SDMConversionModelPkg.h"
#include "brakeBuildUp_SDMConversionModelPkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  t_Brake_t_SDMModelPkg /* T_b/ */ T_b;
  ASafe_T_CalcBrakingCurves_types /* aBrakeSafe/ */ aBrakeSafe;
  ASafe_T_CalcBrakingCurves_types /* aBrakeService/ */ aBrakeService;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_brakeBuildUp_SDMConversionModelPkg /* _L3=(SDMConversionModelPkg::brakeBuildUp#1)/ */ Context_brakeBuildUp_1;
  outC_LimitToReducedAdhesion_SDMModelPkg /* _L5=(SDMModelPkg::LimitToReducedAdhesion#1)/ */ Context_LimitToReducedAdhesion_1;
  outC_InflateABrakeSafe_SDMConversionModelPkg /* _L25=(SDMConversionModelPkg::InflateABrakeSafe#1)/ */ Context_InflateABrakeSafe_1;
  outC_A_brake_safe_SDMConversionModelPkg /* _L4=(SDMConversionModelPkg::A_brake_safe#1)/ */ Context_A_brake_safe_1;
  outC_InflateABrakeService_SDMConversionModelPkg /* _L32=(SDMConversionModelPkg::InflateABrakeService#1)/ */ Context_InflateABrakeService_1;
  outC_brakePercentToABrake_SDMConversionModelPkg /* _L10=(SDMConversionModelPkg::brakePercentToABrake#1)/ */ Context_brakePercentToABrake_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trainData_T_TIU_Types_Pkg /* _L1/ */ _L1;
  P3_NationalValues_T_Packet_Types_Pkg /* _L2/ */ _L2;
  t_Brake_t_SDMModelPkg /* _L3/ */ _L3;
  av_MergedMap_t_SDMConversionModelPkg /* _L4/ */ _L4;
  ASafe_T_CalcBrakingCurves_types /* _L5/ */ _L5;
  P3_NationalValues_T_Packet_Types_Pkg /* _L7/ */ _L7;
  trainData_T_TIU_Types_Pkg /* _L6/ */ _L6;
  P3_NationalValues_T_Packet_Types_Pkg /* _L9/ */ _L9;
  trainData_T_TIU_Types_Pkg /* _L8/ */ _L8;
  a_Brake_t_SDMConversionModelPkg /* _L10/ */ _L10;
  trainData_T_TIU_Types_Pkg /* _L14/ */ _L14;
  ASafe_T_CalcBrakingCurves_types /* _L25/ */ _L25;
  ASafe_T_CalcBrakingCurves_types /* _L32/ */ _L32;
} outC_ABrakeFactory_SDMModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMModelPkg::ABrakeFactory/ */
extern void ABrakeFactory_SDMModelPkg(
  /* trainData/ */
  trainData_T_TIU_Types_Pkg *trainData,
  /* NationalValues/ */
  P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  outC_ABrakeFactory_SDMModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ABrakeFactory_reset_SDMModelPkg(
  outC_ABrakeFactory_SDMModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ABrakeFactory_init_SDMModelPkg(
  outC_ABrakeFactory_SDMModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ABrakeFactory_SDMModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ABrakeFactory_SDMModelPkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

