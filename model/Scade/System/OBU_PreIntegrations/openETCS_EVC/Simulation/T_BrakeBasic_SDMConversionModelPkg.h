/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _T_BrakeBasic_SDMConversionModelPkg_H_
#define _T_BrakeBasic_SDMConversionModelPkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_internal_real_Type_SDM_Types_Pkg /* T_BB/ */ T_BB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  coeff_BrakeBasic_t_SDMConversionModelPkg /* _L1/ */ _L1;
  T_internal_real_Type_SDM_Types_Pkg /* _L7/ */ _L7;
  T_internal_real_Type_SDM_Types_Pkg /* _L6/ */ _L6;
  T_internal_real_Type_SDM_Types_Pkg /* _L5/ */ _L5;
  L_internal_real_Type_SDM_Types_Pkg /* _L12/ */ _L12;
  kcg_float32 /* _L13/ */ _L13;
  kcg_float32 /* _L14/ */ _L14;
  kcg_float32 /* _L15/ */ _L15;
  kcg_float32 /* _L16/ */ _L16;
  kcg_float32 /* _L17/ */ _L17;
} outC_T_BrakeBasic_SDMConversionModelPkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDMConversionModelPkg::T_BrakeBasic/ */
extern void T_BrakeBasic_SDMConversionModelPkg(
  /* coeff/ */
  coeff_BrakeBasic_t_SDMConversionModelPkg *coeff,
  /* trainLength/ */
  L_internal_real_Type_SDM_Types_Pkg trainLength,
  outC_T_BrakeBasic_SDMConversionModelPkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void T_BrakeBasic_reset_SDMConversionModelPkg(
  outC_T_BrakeBasic_SDMConversionModelPkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void T_BrakeBasic_init_SDMConversionModelPkg(
  outC_T_BrakeBasic_SDMConversionModelPkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _T_BrakeBasic_SDMConversionModelPkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** T_BrakeBasic_SDMConversionModelPkg.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

