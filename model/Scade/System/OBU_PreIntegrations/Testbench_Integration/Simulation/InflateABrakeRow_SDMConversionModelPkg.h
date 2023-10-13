/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _InflateABrakeRow_SDMConversionModelPkg_H_
#define _InflateABrakeRow_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "TransformA_intToA_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  A_internal_Type_Obu_BasicTypes_Pkg /* Akku_out/ */ Akku_out;
  ASafeRow_T_CalcBrakingCurves_types /* ASafeRow/ */ ASafeRow;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformA_intToA_real_SDM_Types_Pkg /* _L2=(SDM_Types_Pkg::TransformA_intToA_real#1)/ */ Context_TransformA_intToA_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  A_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  A_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  array_float64_100 /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  A_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
} outC_InflateABrakeRow_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::InflateABrakeRow/ */
extern void InflateABrakeRow_SDMConversionModelPkg(
  /* Akku/ */
  A_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* A/ */
  A_internal_Type_Obu_BasicTypes_Pkg A,
  outC_InflateABrakeRow_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InflateABrakeRow_reset_SDMConversionModelPkg(
  outC_InflateABrakeRow_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InflateABrakeRow_init_SDMConversionModelPkg(
  outC_InflateABrakeRow_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InflateABrakeRow_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeRow_SDMConversionModelPkg.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

