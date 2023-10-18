/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _op_RepeatReq_TA_MA_Request_H_
#define _op_RepeatReq_TA_MA_Request_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* trigger/ */ trigger;
  kcg_bool /* exception/ */ exception;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* setRepeater/ */ mem_setRepeater;
  T_internal_Type_Obu_BasicTypes_Pkg /* lastSystemTime/ */ lastSystemTime;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* _L9/ */ _L9;
  kcg_bool /* _L7/ */ _L7;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L20/ */ _L20;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L21/ */ _L21;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L22/ */ _L22;
  T_internal_Type_Obu_BasicTypes_Pkg /* _L16/ */ _L16;
  kcg_int64 /* _L27/ */ _L27;
  T_CYCLOC /* _L28/ */ _L28;
  kcg_int64 /* _L29/ */ _L29;
} outC_op_RepeatReq_TA_MA_Request;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_Request::op_RepeatReq/ */
extern void op_RepeatReq_TA_MA_Request(
  /* tcycreq/ */
  T_CYCLOC tcycreq,
  /* setRepeater/ */
  kcg_bool setRepeater,
  /* systemTime/ */
  T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  outC_op_RepeatReq_TA_MA_Request *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void op_RepeatReq_reset_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void op_RepeatReq_init_TA_MA_Request(
  outC_op_RepeatReq_TA_MA_Request *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _op_RepeatReq_TA_MA_Request_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** op_RepeatReq_TA_MA_Request.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

