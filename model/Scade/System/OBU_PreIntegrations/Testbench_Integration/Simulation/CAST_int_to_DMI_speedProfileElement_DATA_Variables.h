/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_speedProfileElement_DATA_Variables_H_
#define _CAST_int_to_DMI_speedProfileElement_DATA_Variables_H_

#include "kcg_types.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_speedProfileElement_T_DMI_Types_Pkg /* dmi_speedProfileElemen/ */ dmi_speedProfileElemen;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Int_to_Bool_Utilities /* _L15=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfileElement_T_DMI_Types_Pkg /* _L5/ */ _L5;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_speedProfileElement/ */
extern void CAST_int_to_DMI_speedProfileElement_DATA_Variables(
  /* valid/ */
  kcg_int32 valid,
  /* loc_abs/ */
  kcg_int32 loc_abs,
  /* loc_lrbg/ */
  kcg_int32 loc_lrbg,
  /* mrs/ */
  kcg_int32 mrs,
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_speedProfileElement_reset_DATA_Variables(
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_speedProfileElement_init_DATA_Variables(
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_speedProfileElement_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_speedProfileElement_DATA_Variables.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

