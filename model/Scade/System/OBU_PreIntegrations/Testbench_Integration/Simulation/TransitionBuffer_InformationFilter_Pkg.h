/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _TransitionBuffer_InformationFilter_Pkg_H_
#define _TransitionBuffer_InformationFilter_Pkg_H_

#include "kcg_types.h"
#include "TransitionBuffer_read_only_InformationFilter_Pkg.h"
#include "TransitionBuffer_read_write_InformationFilter_Pkg.h"
#include "TransitionBuffer_write_only_InformationFilter_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* Out/ */ Out;
  kcg_int64 /* outStacksize/ */ outStacksize;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* stacksize/ */ stacksize;
  TransitionBuffer_T_InformationFilter_Pkg /* buffer/ */ buffer;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TransitionBuffer_read_only_InformationFilter_Pkg /* IfBlock1:then:_L14=(InformationFilter_Pkg::TransitionBuffer_read_only#2)/ */ Context_TransitionBuffer_read_only_2;
  outC_TransitionBuffer_read_write_InformationFilter_Pkg /* IfBlock1:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_read_write#1)/ */ Context_TransitionBuffer_read_write_1;
  outC_TransitionBuffer_write_only_InformationFilter_Pkg /* IfBlock1:else:else:then:_L10=(InformationFilter_Pkg::TransitionBuffer_write_only#1)/ */ Context_TransitionBuffer_write_only_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1:else:else: */ else_clock_else_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_bool /* IfBlock1:else:else:then:_L11/ */ _L11_then_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L8/ */ _L8_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L9/ */ _L9_then_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:else:then:_L10/ */ _L10_then_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:then:_L4/ */ _L4_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:then:_L3/ */ _L3_then_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:else:then:_L1/ */ _L1_then_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:_L11/ */ _L11_else_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:_L10/ */ _L10_else_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:else:else:_L9/ */ _L9_else_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:else:else:_L7/ */ _L7_else_else_else_IfBlock1;
  kcg_bool /* IfBlock1:else:else:else:_L6/ */ _L6_else_else_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:else:else:_L5/ */ _L5_else_else_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:else:else:_L4/ */ _L4_else_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:else:else:_L1/ */ _L1_else_else_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  TransitionBuffer_T_InformationFilter_Pkg /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_bool /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_bool /* c_w/ */ c_w;
  kcg_bool /* c_rw/ */ c_rw;
  kcg_bool /* c_r/ */ c_r;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  ReceivedMessage_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_int64 /* _L9/ */ _L9;
} outC_TransitionBuffer_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer/ */
extern void TransitionBuffer_InformationFilter_Pkg(
  /* In/ */
  ReceivedMessage_T_Common_Types_Pkg *In,
  /* Write/ */
  kcg_bool Write,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_init_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  TransitionBuffer_T_InformationFilter_Pkg /* buffer/ */ Context_buffer;
  kcg_int64 /* stacksize/ */ Context_stacksize;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_TransitionBuffer_InformationFilter_Pkg;

extern void kcg_save_SV_TransitionBuffer_InformationFilter_Pkg(
  SV_TransitionBuffer_InformationFilter_Pkg *SV,
  outC_TransitionBuffer_InformationFilter_Pkg *outC);
extern void kcg_load_SV_TransitionBuffer_InformationFilter_Pkg(
  outC_TransitionBuffer_InformationFilter_Pkg *outC,
  SV_TransitionBuffer_InformationFilter_Pkg *SV);



#endif /* _TransitionBuffer_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_InformationFilter_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

