/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _TransitionBuffer_write_only_InformationFilter_Pkg_H_
#define _TransitionBuffer_write_only_InformationFilter_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TransitionBuffer_T_InformationFilter_Pkg /* Buffer_Out/ */ Buffer_Out;
  kcg_int64 /* Stacksize_new/ */ Stacksize_new;
  ReceivedMessage_T_Common_Types_Pkg /* Message_out/ */ Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* _L12/ */ _L12;
  kcg_bool /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  TransitionBuffer_T_InformationFilter_Pkg /* _L9/ */ _L9;
  TransitionBuffer_T_InformationFilter_Pkg /* _L8/ */ _L8;
  _79_array /* _L7/ */ _L7;
  ReceivedMessage_T_Common_Types_Pkg /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  _44_array /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  kcg_int64 /* _L1/ */ _L1;
  kcg_bool /* _L13/ */ _L13;
  TransitionBuffer_T_InformationFilter_Pkg /* _L14/ */ _L14;
  TransitionBuffer_T_InformationFilter_Pkg /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_int64 /* _L17/ */ _L17;
} outC_TransitionBuffer_write_only_InformationFilter_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* InformationFilter_Pkg::TransitionBuffer_write_only/ */
extern void TransitionBuffer_write_only_InformationFilter_Pkg(
  /* Buffer_In/ */
  TransitionBuffer_T_InformationFilter_Pkg *Buffer_In,
  /* Stacksize_old/ */
  kcg_int64 Stacksize_old,
  /* Message_In/ */
  ReceivedMessage_T_Common_Types_Pkg *Message_In,
  /* Reset/ */
  kcg_bool Reset,
  outC_TransitionBuffer_write_only_InformationFilter_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TransitionBuffer_write_only_reset_InformationFilter_Pkg(
  outC_TransitionBuffer_write_only_InformationFilter_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TransitionBuffer_write_only_init_InformationFilter_Pkg(
  outC_TransitionBuffer_write_only_InformationFilter_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TransitionBuffer_write_only_InformationFilter_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TransitionBuffer_write_only_InformationFilter_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

