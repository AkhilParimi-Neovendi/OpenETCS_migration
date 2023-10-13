/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _CAST_int_t_DMI_speedProfile_DATA_Variables_H_
#define _CAST_int_t_DMI_speedProfile_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_int_to_DMI_speedProfileElement_DATA_Variables.h"
#include "Int_to_Bool_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_speedProfile_T_DMI_Types_Pkg /* dmi_speedProfile/ */ dmi_speedProfile;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_int_to_DMI_speedProfileElement_DATA_Variables /* _L23=(DATA::Variables::CAST_int_to_DMI_speedProfileElement#2)/ */ Context_CAST_int_to_DMI_speedProfileElement_2[32];
  outC_Int_to_Bool_Utilities /* _L27=(Utilities::Int_to_Bool#2)/ */ Context_Int_to_Bool_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_speedProfile_int_array_T_DATA /* _L13/ */ _L13;
  kcg_bool /* _L27/ */ _L27;
  DMI_speedProfile_T_DMI_Types_Pkg /* _L26/ */ _L26;
  array_int64_32 /* _L25/ */ _L25;
  array_int64_32 /* _L24/ */ _L24;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg /* _L23/ */ _L23;
  kcg_int64 /* _L22/ */ _L22;
  array_int64_32 /* _L21/ */ _L21;
  array_int64_32 /* _L20/ */ _L20;
} outC_CAST_int_t_DMI_speedProfile_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_t_DMI_speedProfile/ */
extern void CAST_int_t_DMI_speedProfile_DATA_Variables(
  /* dmi_speedProfile_int/ */
  DMI_speedProfile_int_array_T_DATA *dmi_speedProfile_int,
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_t_DMI_speedProfile_reset_DATA_Variables(
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_t_DMI_speedProfile_init_DATA_Variables(
  outC_CAST_int_t_DMI_speedProfile_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_t_DMI_speedProfile_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_t_DMI_speedProfile_DATA_Variables.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

