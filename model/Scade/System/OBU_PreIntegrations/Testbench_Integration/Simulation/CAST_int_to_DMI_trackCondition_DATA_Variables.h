/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _CAST_int_to_DMI_trackCondition_DATA_Variables_H_
#define _CAST_int_to_DMI_trackCondition_DATA_Variables_H_

#include "kcg_types.h"
#include "Cast_Int_to_DMI_trackConditionElement_DATA_Variables.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_trackCondition_T_DMI_Types_Pkg /* dmi_trackCondition_ct/ */ dmi_trackCondition_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables /* _L14=(DATA::Variables::Cast_Int_to_DMI_trackConditionElement#1)/ */ Context_Cast_Int_to_DMI_trackConditionElement_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_trackCondition_int_array_T /* _L11/ */ _L11;
  DMI_trackCondition_T_DMI_Types_Pkg /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
  DMI_trackConditionArray_T_DMI_Types_Pkg /* _L14/ */ _L14;
  array_int32_32 /* _L15/ */ _L15;
  array_int32_32 /* _L16/ */ _L16;
} outC_CAST_int_to_DMI_trackCondition_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_trackCondition/ */
extern void CAST_int_to_DMI_trackCondition_DATA_Variables(
  /* dmi_trackCondition_int/ */
  DMI_trackCondition_int_array_T *dmi_trackCondition_int,
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_trackCondition_reset_DATA_Variables(
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_trackCondition_init_DATA_Variables(
  outC_CAST_int_to_DMI_trackCondition_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_trackCondition_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_trackCondition_DATA_Variables.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

