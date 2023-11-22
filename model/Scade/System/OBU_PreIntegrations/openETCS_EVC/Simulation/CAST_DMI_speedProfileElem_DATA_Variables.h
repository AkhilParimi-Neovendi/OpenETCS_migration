/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_DMI_speedProfileElem_DATA_Variables_H_
#define _CAST_DMI_speedProfileElem_DATA_Variables_H_

#include "kcg_types.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* valid/ */ valid;
  kcg_int32 /* loc_abs/ */ loc_abs;
  kcg_int32 /* loc_lrbg/ */ loc_lrbg;
  kcg_int32 /* mrs/ */ mrs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Bool_to_Int_Utilities /* _L6=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfileElement_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L5/ */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  V_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L6/ */ _L6;
} outC_CAST_DMI_speedProfileElem_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_speedProfileElement_to_int/ */
extern void CAST_DMI_speedProfileElem_DATA_Variables(
  /* dmi_speedProfileElemen/ */
  DMI_speedProfileElement_T_DMI_Types_Pkg *dmi_speedProfileElemen,
  outC_CAST_DMI_speedProfileElem_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_speedProfileElem_reset_DATA_Variables(
  outC_CAST_DMI_speedProfileElem_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_speedProfileElem_init_DATA_Variables(
  outC_CAST_DMI_speedProfileElem_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_speedProfileElem_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_speedProfileElem_DATA_Variables.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

