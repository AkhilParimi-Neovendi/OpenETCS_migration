/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */
#ifndef _Normalize_Distance_d_inte_TA_Lib_internal_H_
#define _Normalize_Distance_d_inte_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* d_internal/ */ d_internal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L2/ */ _L2_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  Q_SCALE /* q_scale_in/ */ q_scale_in;
  Q_SCALE /* _L1/ */ _L1;
} outC_Normalize_Distance_d_inte_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Normalize_Distance_d_internal_t/ */
extern void Normalize_Distance_d_inte_TA_Lib_internal(
  /* q_scale/ */
  Q_SCALE q_scale,
  /* d/ */
  kcg_int32 d,
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Normalize_Distance_d_inte_reset_TA_Lib_internal(
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Normalize_Distance_d_inte_init_TA_Lib_internal(
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Normalize_Distance_d_inte_TA_Lib_internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_Distance_d_inte_TA_Lib_internal.h
** Generation date: 2023-11-06T13:54:28
*************************************************************$ */

