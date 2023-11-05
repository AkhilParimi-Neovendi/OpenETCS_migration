/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_gradientProfile_DATA_Variables_H_
#define _CAST_int_to_DMI_gradientProfile_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_gradientProfileElement_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_gradientProfile_T_DMI_Types_Pkg /* dmi_gradientProfile/ */ dmi_gradientProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_gradientProfileElement_DATA_Variables /* _L13=(DATA::Variables::CAST_int_to_DMI_gradientProfileElement#1)/ */ Context_CAST_int_to_DMI_gradientProfileElement_1[32];
  outC_Int_to_Bool_Utilities /* _L19=(Utilities::Int_to_Bool#1)/ */ Context_Int_to_Bool_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_gradientProfile_T_DMI_Types_Pkg /* _L12/ */ _L12;
  DMI_gradientProfileArray_T_DMI_Types_Pkg /* _L13/ */ _L13;
  kcg_int32 /* _L14/ */ _L14;
  DMI_gradientProfile_int_arrayT /* _L15/ */ _L15;
  array_int32_32 /* _L16/ */ _L16;
  array_int32_32 /* _L17/ */ _L17;
  array_int32_32 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  array_int32_32 /* _L20/ */ _L20;
} outC_CAST_int_to_DMI_gradientProfile_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_gradientProfile/ */
extern void CAST_int_to_DMI_gradientProfile_DATA_Variables(
  /* dmi_gradientProfile_int/ */
  DMI_gradientProfile_int_arrayT *dmi_gradientProfile_int,
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_gradientProfile_reset_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_gradientProfile_init_DATA_Variables(
  outC_CAST_int_to_DMI_gradientProfile_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_gradientProfile_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_gradientProfile_DATA_Variables.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

