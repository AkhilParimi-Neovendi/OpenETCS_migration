/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CAST_DMI_airtightSystem_to_int_DATA_Variables_H_
#define _CAST_DMI_airtightSystem_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "BCD_to_Int_Utilities.h"
#include "Int_Check_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_airtightSystem_INT_T_DATA /* dmi_airtightSystem_int/ */ dmi_airtightSystem_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_BCD_to_Int_Utilities /* _L23=(Utilities::BCD_to_Int#1)/ */ Context_BCD_to_Int_1;
  outC_BCD_to_Int_Utilities /* _L25=(Utilities::BCD_to_Int#2)/ */ Context_BCD_to_Int_2;
  outC_BCD_to_Int_Utilities /* _L28=(Utilities::BCD_to_Int#3)/ */ Context_BCD_to_Int_3;
  outC_Int_Check_Utilities /* _L38=(Utilities::Int_Check#1)/ */ Context_Int_Check_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* error/ */ error;
  DMI_airtightSystem_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_int64 /* _L7/ */ _L7;
  BCD_DMI_Types_Pkg /* _L6/ */ _L6;
  BCD_DMI_Types_Pkg /* _L5/ */ _L5;
  BCD_DMI_Types_Pkg /* _L4/ */ _L4;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L22/ */ _L22;
  kcg_bool /* _L24/ */ _L24;
  kcg_int64 /* _L23/ */ _L23;
  kcg_bool /* _L26/ */ _L26;
  kcg_int64 /* _L25/ */ _L25;
  kcg_bool /* _L29/ */ _L29;
  kcg_int64 /* _L28/ */ _L28;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_int64 /* _L39/ */ _L39;
  kcg_int64 /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
} outC_CAST_DMI_airtightSystem_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_airtightSystem_to_int/ */
extern void CAST_DMI_airtightSystem_to_int_DATA_Variables(
  /* dmi_airtightSystem_ct/ */
  DMI_airtightSystem_T_DMI_Types_Pkg *dmi_airtightSystem_ct,
  outC_CAST_DMI_airtightSystem_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_airtightSystem_to_int_reset_DATA_Variables(
  outC_CAST_DMI_airtightSystem_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_airtightSystem_to_int_init_DATA_Variables(
  outC_CAST_DMI_airtightSystem_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_airtightSystem_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_airtightSystem_to_int_DATA_Variables.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

