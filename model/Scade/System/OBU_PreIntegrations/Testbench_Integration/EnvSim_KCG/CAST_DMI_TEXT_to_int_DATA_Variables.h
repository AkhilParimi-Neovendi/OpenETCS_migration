/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_TEXT_to_int_DATA_Variables_H_
#define _CAST_DMI_TEXT_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_TEXT_INT_Array_T_DATA /* dmi_text_int_array_out/ */ dmi_text_int_array_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_TEXT_DMI_Types_Pkg /* _L4/ */ _L4;
  DMI_TEXT_INT_Array_T_DATA /* _L6/ */ _L6;
} outC_CAST_DMI_TEXT_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_TEXT_to_int/ */
extern void CAST_DMI_TEXT_to_int_DATA_Variables(
  /* dmi_text_string_in/ */
  DMI_TEXT_DMI_Types_Pkg *dmi_text_string_in,
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_TEXT_to_int_reset_DATA_Variables(
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_TEXT_to_int_init_DATA_Variables(
  outC_CAST_DMI_TEXT_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_TEXT_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_TEXT_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

