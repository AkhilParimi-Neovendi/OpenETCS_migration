/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _Eval_Q_SCALE_TA_MRSP_H_
#define _Eval_Q_SCALE_TA_MRSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* d_out/ */ d_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* _L1/ */ _L1;
  kcg_int64 /* _L2/ */ _L2;
  Q_SCALE /* _L3/ */ _L3;
  Q_SCALE /* _L4/ */ _L4;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L14/ */ _L14;
} outC_Eval_Q_SCALE_TA_MRSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MRSP::Eval_Q_SCALE/ */
extern void Eval_Q_SCALE_TA_MRSP(
  /* q_scale_in/ */
  Q_SCALE q_scale_in,
  /* d_in/ */
  kcg_int64 d_in,
  outC_Eval_Q_SCALE_TA_MRSP *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Eval_Q_SCALE_reset_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Eval_Q_SCALE_init_TA_MRSP(outC_Eval_Q_SCALE_TA_MRSP *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Eval_Q_SCALE_TA_MRSP_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Eval_Q_SCALE_TA_MRSP.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

