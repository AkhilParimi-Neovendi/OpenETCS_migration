/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Normalize_Dangerpoint_TA_MA_new_H_
#define _Normalize_Dangerpoint_TA_MA_new_H_

#include "kcg_types.h"
#include "EVAL_Q_DANGERPOINT_TA_Lib_internal.h"
#include "Eval_Q_SCALE_TA_MRSP.h"
#include "EVAL_V_Release_TA_Lib_internal.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* q_dangerpoint/ */ q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes /* dangerpoint/ */ dangerpoint;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EVAL_Q_DANGERPOINT_TA_Lib_internal /* _L1=(TA_Lib_internal::EVAL_Q_DANGERPOINT#1)/ */ Context_EVAL_Q_DANGERPOINT_1;
  outC_EVAL_V_Release_TA_Lib_internal /* _L3=(TA_Lib_internal::EVAL_V_Release#1)/ */ Context_EVAL_V_Release_1;
  outC_Eval_Q_SCALE_TA_MRSP /* _L2=(TA_MRSP::Eval_Q_SCALE#1)/ */ Context_Eval_Q_SCALE_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  V_internal_Type_Obu_BasicTypes_Pkg /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  DP_or_OL_t_TrackAtlasTypes /* _L5/ */ _L5;
  V_NVREL /* _L6/ */ _L6;
  P003V1_OBU_T_TM_baseline2 /* _L7/ */ _L7;
  P015_OBU_T_TM /* _L8/ */ _L8;
  Q_DANGERPOINT /* _L9/ */ _L9;
  Q_SCALE /* _L10/ */ _L10;
  V_RELEASEDP /* _L11/ */ _L11;
  L_internal_Type_Obu_BasicTypes_Pkg /* _L12/ */ _L12;
  D_DP /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  DP_or_OL_t_TrackAtlasTypes /* _L15/ */ _L15;
  DP_or_OL_t_TrackAtlasTypes /* _L16/ */ _L16;
} outC_Normalize_Dangerpoint_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Normalize_Dangerpoint/ */
extern void Normalize_Dangerpoint_TA_MA_new(
  /* d_endsection/ */
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection,
  /* Packet15_in/ */
  P015_OBU_T_TM *Packet15_in,
  /* NV_in/ */
  P003V1_OBU_T_TM_baseline2 *NV_in,
  outC_Normalize_Dangerpoint_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Normalize_Dangerpoint_reset_TA_MA_new(
  outC_Normalize_Dangerpoint_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Normalize_Dangerpoint_init_TA_MA_new(
  outC_Normalize_Dangerpoint_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Normalize_Dangerpoint_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Normalize_Dangerpoint_TA_MA_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

