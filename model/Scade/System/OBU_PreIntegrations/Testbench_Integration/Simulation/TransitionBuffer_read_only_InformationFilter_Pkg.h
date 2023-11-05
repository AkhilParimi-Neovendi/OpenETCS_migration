/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _TransitionBuffer_read_only_InformationFilter_Pkg_H_
#define _TransitionBuffer_read_only_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TransitionBuffer_T_InformationFilter_Pkg /* Buffer_Out/ */ Buffer_Out;
  kcg_int32 /* Stacksize_new/ */ Stacksize_new;
  ReceivedMessage_T_Common_Types_Pkg /* Message_out/ */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* index/ */ index;
  ReceivedMessage_T_Common_Types_Pkg /* _L13/ */ _L13;
  kcg_int32 /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_int32 /* _L9/ */ _L9;
  kcg_int32 /* _L8/ */ _L8;
  ReceivedMessage_T_Common_Types_Pkg /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L5/ */ _L5;
  kcg_int32 /* _L4/ */ _L4;
  ReceivedMessage_T_Common_Types_Pkg /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
  TransitionBuffer_T_InformationFilter_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  TransitionBuffer_T_InformationFilter_Pkg /* _L17/ */ _L17;
  TransitionBuffer_T_InformationFilter_Pkg /* _L19/ */ _L19;
  TransitionBuffer_T_InformationFilter_Pkg /* _L20/ */ _L20;
} outC_TransitionBuffer_read_only_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer_read_only/ */
extern void TransitionBuffer_read_only_InformationFilter_Pkg(
  /* Buffer_In/ */
  TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* Stacksize_old/ */
  kcg_int32 Stacksize_old,
  /* Message_In/ */
  ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_read_only_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_read_only_init_InformationFilter_Pkg(
  outC_TransitionBuffer_read_only_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TransitionBuffer_read_only_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_read_only_InformationFilter_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

