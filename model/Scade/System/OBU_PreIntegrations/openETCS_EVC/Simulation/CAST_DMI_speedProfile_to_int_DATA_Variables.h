/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _CAST_DMI_speedProfile_to_int_DATA_Variables_H_
#define _CAST_DMI_speedProfile_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_DMI_speedProfileElem_DATA_Variables.h"
#include "Bool_to_Int_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_speedProfile_int_array_T_DATA /* dmi_speedProfile_int/ */ dmi_speedProfile_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Bool_to_Int_Utilities /* _L4=(Utilities::Bool_to_Int#1)/ */ Context_Bool_to_Int_1;
  outC_CAST_DMI_speedProfileElem_DATA_Variables /* _L5=(DATA::Variables::CAST_DMI_speedProfileElement_to_int#1)/ */ Context_CAST_DMI_speedProfileElement_to_int_1[32];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfile_T_DMI_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L3/ */ _L3;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
  array_int32_32 /* _L8/ */ _L8;
  array_int32_32 /* _L7/ */ _L7;
  array_int32_32 /* _L6/ */ _L6;
  array_int32_32 /* _L5/ */ _L5;
  P044_other_data_TM_TrainToTrack /* _L9/ */ _L9;
  array_int32_129 /* _L10/ */ _L10;
} outC_CAST_DMI_speedProfile_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_speedProfile_to_int/ */
extern void CAST_DMI_speedProfile_to_int_DATA_Variables(
  /* dmi_speedProfile/ */
  DMI_speedProfile_T_DMI_Types_Pkg *dmi_speedProfile,
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_speedProfile_to_int_reset_DATA_Variables(
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_speedProfile_to_int_init_DATA_Variables(
  outC_CAST_DMI_speedProfile_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_speedProfile_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_speedProfile_to_int_DATA_Variables.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

