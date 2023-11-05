/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */
#ifndef _ToSystemNational_Conditions_H_
#define _ToSystemNational_Conditions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Condition56/ */ Condition56;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ mem_Current_Level;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L451/ */ _L451;
  kcg_bool /* _L450/ */ _L450;
  M_LEVEL /* _L441/ */ _L441;
  M_LEVEL /* _L439/ */ _L439;
  kcg_bool /* _L454/ */ _L454;
  M_LEVEL /* _L455/ */ _L455;
  M_LEVEL /* _L456/ */ _L456;
} outC_ToSystemNational_Conditions;

/* ===========  node initialization and cycle functions  =========== */
/* Conditions::ToSystemNational/ */
extern void ToSystemNational_Conditions(
  /* Current_Level/ */
  M_LEVEL Current_Level,
  outC_ToSystemNational_Conditions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ToSystemNational_reset_Conditions(
  outC_ToSystemNational_Conditions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ToSystemNational_init_Conditions(
  outC_ToSystemNational_Conditions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  M_LEVEL /* Current_Level/ */ Context_mem_Current_Level;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ToSystemNational_Conditions;

extern void kcg_save_SV_ToSystemNational_Conditions(
  SV_ToSystemNational_Conditions *SV,
  outC_ToSystemNational_Conditions *outC);
extern void kcg_load_SV_ToSystemNational_Conditions(
  outC_ToSystemNational_Conditions *outC,
  SV_ToSystemNational_Conditions *SV);



#endif /* _ToSystemNational_Conditions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ToSystemNational_Conditions.h
** Generation date: 2023-11-05T09:06:58
*************************************************************$ */

