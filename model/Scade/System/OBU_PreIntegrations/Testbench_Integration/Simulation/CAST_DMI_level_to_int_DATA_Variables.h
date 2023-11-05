/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _CAST_DMI_level_to_int_DATA_Variables_H_
#define _CAST_DMI_level_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_M_LEVEL_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* level_int/ */ level_int;
  kcg_int32 /* nid_stm_int/ */ nid_stm_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_M_LEVEL_to_int_TM_conversions /* _L8=(TM_conversions::CAST_M_LEVEL_to_int#1)/ */ Context_CAST_M_LEVEL_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_LEVEL /* _L7/ */ _L7;
  NID_STM_DMI_Types_Pkg /* _L6/ */ _L6;
  kcg_int32 /* _L8/ */ _L8;
  DMI_level_T_DMI_Types_Pkg /* _L14/ */ _L14;
} outC_CAST_DMI_level_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_level_to_int/ */
extern void CAST_DMI_level_to_int_DATA_Variables(
  /* dmi_level_ct/ */
  DMI_level_T_DMI_Types_Pkg *dmi_level_ct,
  outC_CAST_DMI_level_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_level_to_int_reset_DATA_Variables(
  outC_CAST_DMI_level_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_level_to_int_init_DATA_Variables(
  outC_CAST_DMI_level_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_level_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_level_to_int_DATA_Variables.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

