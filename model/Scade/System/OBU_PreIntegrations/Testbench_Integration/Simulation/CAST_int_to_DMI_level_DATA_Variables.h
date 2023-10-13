/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _CAST_int_to_DMI_level_DATA_Variables_H_
#define _CAST_int_to_DMI_level_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_LEVEL_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_level_T_DMI_Types_Pkg /* dmi_level_ct/ */ dmi_level_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_M_LEVEL_TM_conversions /* _L20=(TM_conversions::CAST_Int_to_M_LEVEL#1)/ */ Context_CAST_Int_to_M_LEVEL_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  DMI_level_T_DMI_Types_Pkg /* _L19/ */ _L19;
  M_LEVEL /* _L20/ */ _L20;
} outC_CAST_int_to_DMI_level_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_int_to_DMI_level/ */
extern void CAST_int_to_DMI_level_DATA_Variables(
  /* level_int/ */
  kcg_int64 level_int,
  /* nid_stm_int/ */
  kcg_int64 nid_stm_int,
  outC_CAST_int_to_DMI_level_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_int_to_DMI_level_reset_DATA_Variables(
  outC_CAST_int_to_DMI_level_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_int_to_DMI_level_init_DATA_Variables(
  outC_CAST_int_to_DMI_level_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_int_to_DMI_level_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_int_to_DMI_level_DATA_Variables.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

