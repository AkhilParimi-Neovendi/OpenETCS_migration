/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _Cast_Int_to_DMI_trackConditionElement_DATA_Variables_H_
#define _Cast_Int_to_DMI_trackConditionElement_DATA_Variables_H_

#include "kcg_types.h"
#include "CAST_Int_to_M_TRACKCOND_TM_conversions.h"
#include "CAST_Int_to_D_TRACKCOND_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DMI_trackConditionElement_T_DMI_Types_Pkg /* dmi_trackConditionElemen_ct/ */ dmi_trackConditionElemen_ct;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_D_TRACKCOND_TM_conversions /* _L9=(TM_conversions::CAST_Int_to_D_TRACKCOND#1)/ */ Context_CAST_Int_to_D_TRACKCOND_1;
  outC_CAST_Int_to_M_TRACKCOND_TM_conversions /* _L10=(TM_conversions::CAST_Int_to_M_TRACKCOND#1)/ */ Context_CAST_Int_to_M_TRACKCOND_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DMI_trackConditionElement_T_DMI_Types_Pkg /* _L8/ */ _L8;
  D_TRACKCOND /* _L9/ */ _L9;
  M_TRACKCOND /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
} outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables;

/* ===========  node initialization and cycle functions  =========== */
/* DATA::Variables::Cast_Int_to_DMI_trackConditionElement/ */
extern void Cast_Int_to_DMI_trackConditionElement_DATA_Variables(
  /* d_trackcond_int/ */
  kcg_int32 d_trackcond_int,
  /* m_trackcond_int/ */
  kcg_int32 m_trackcond_int,
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Cast_Int_to_DMI_trackConditionElement_reset_DATA_Variables(
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Cast_Int_to_DMI_trackConditionElement_init_DATA_Variables(
  outC_Cast_Int_to_DMI_trackConditionElement_DATA_Variables *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Cast_Int_to_DMI_trackConditionElement_DATA_Variables_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Cast_Int_to_DMI_trackConditionElement_DATA_Variables.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

