/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _CAST_DMI_trackConditionElement_to_int_DATA_Variables_H_
#define _CAST_DMI_trackConditionElement_to_int_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_M_TRACKCOND_to_int_TM_conversions.h"
#include "CAST_D_TRACKCOND_to_int_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* d_trackcond_int/ */ d_trackcond_int;
  kcg_int64 /* m_trackcond_int/ */ m_trackcond_int;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_D_TRACKCOND_to_int_TM_conversions /* _L4=(TM_conversions::CAST_D_TRACKCOND_to_int#1)/ */ Context_CAST_D_TRACKCOND_to_int_1;
  outC_CAST_M_TRACKCOND_to_int_TM_conversions /* _L5=(TM_conversions::CAST_M_TRACKCOND_to_int#1)/ */ Context_CAST_M_TRACKCOND_to_int_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_trackConditionElement_T_DMI_Types_Pkg /* _L1/ */ _L1;
  D_TRACKCOND /* _L3/ */ _L3;
  M_TRACKCOND /* _L2/ */ _L2;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L5/ */ _L5;
} outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::CAST_DMI_trackConditionElement_to_int/ */
extern void CAST_DMI_trackConditionElement_to_int_DATA_Variables(
  /* dmi_trackConditionElement/ */
  DMI_trackConditionElement_T_DMI_Types_Pkg *dmi_trackConditionElement,
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CAST_DMI_trackConditionElement_to_int_reset_DATA_Variables(
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CAST_DMI_trackConditionElement_to_int_init_DATA_Variables(
  outC_CAST_DMI_trackConditionElement_to_int_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CAST_DMI_trackConditionElement_to_int_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CAST_DMI_trackConditionElement_to_int_DATA_Variables.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

