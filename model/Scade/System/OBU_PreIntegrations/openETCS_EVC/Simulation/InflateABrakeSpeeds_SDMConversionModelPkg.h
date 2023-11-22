/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _InflateABrakeSpeeds_SDMConversionModelPkg_H_
#define _InflateABrakeSpeeds_SDMConversionModelPkg_H_

#include "kcg_types.h"
#include "TransformV_intToV_real_SDM_Types_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* Akku_out/ */ Akku_out;
  V_internal_real_Type_SDM_Types_Pkg /* Vint/ */ Vint;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransformV_intToV_real_SDM_Types_Pkg /* _L2=(SDM_Types_Pkg::TransformV_intToV_real#1)/ */ Context_TransformV_intToV_real_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* _L1/ */ _L1;
  V_internal_real_Type_SDM_Types_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L6/ */ _L6;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L7/ */ _L7;
} outC_InflateABrakeSpeeds_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::InflateABrakeSpeeds/ */
extern void InflateABrakeSpeeds_SDMConversionModelPkg(
  /* Akku/ */
  V_internal_Type_Obu_BasicTypes_Pkg Akku,
  /* V/ */
  V_internal_Type_Obu_BasicTypes_Pkg V,
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InflateABrakeSpeeds_reset_SDMConversionModelPkg(
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void InflateABrakeSpeeds_init_SDMConversionModelPkg(
  outC_InflateABrakeSpeeds_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _InflateABrakeSpeeds_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** InflateABrakeSpeeds_SDMConversionModelPkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

