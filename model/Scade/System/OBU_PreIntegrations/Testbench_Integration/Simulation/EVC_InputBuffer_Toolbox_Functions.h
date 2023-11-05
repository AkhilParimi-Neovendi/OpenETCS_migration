/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _EVC_InputBuffer_Toolbox_Functions_H_
#define _EVC_InputBuffer_Toolbox_Functions_H_

#include "kcg_types.h"
#include "TRAIN_TrackSideInputFifo_Toolbox_Functions_5.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  API_TrackSideInput_T_API_Msg_Pkg /* TrackMessageToEVC/ */ TrackMessageToEVC;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* sendRTM/ */ sendRTM;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 /* _L4=(Toolbox::Functions::TRAIN_TrackSideInputFifo#2)/ */ Context_TRAIN_TrackSideInputFifo_2;
  outC_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 /* _L1=(Toolbox::Functions::TRAIN_TrackSideInputFifo#1)/ */ Context_TRAIN_TrackSideInputFifo_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* sizeBTM/ */ sizeBTM;
  kcg_int32 /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  API_TrackSideInput_T_API_Msg_Pkg /* _L1/ */ _L1;
  kcg_int32 /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  API_TrackSideInput_T_API_Msg_Pkg /* _L4/ */ _L4;
  API_TrackSideInput_T_API_Msg_Pkg /* _L7/ */ _L7;
  API_TrackSideInput_T_API_Msg_Pkg /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  API_TrackSideInput_T_API_Msg_Pkg /* _L12/ */ _L12;
  API_TrackSideInput_T_API_Msg_Pkg /* _L13/ */ _L13;
  API_TrackSideInput_T_API_Msg_Pkg /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L45/ */ _L45;
} outC_EVC_InputBuffer_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::EVC_InputBuffer/ */
extern void EVC_InputBuffer_Toolbox_Functions(
  /* BTMMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *BTMMessage,
  /* RTMMessage/ */
  API_TrackSideInput_T_API_Msg_Pkg *RTMMessage,
  outC_EVC_InputBuffer_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EVC_InputBuffer_reset_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EVC_InputBuffer_init_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* sendRTM/ */ Context_sendRTM;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 Context_TRAIN_TrackSideInputFifo_1;
  SV_TRAIN_TrackSideInputFifo_Toolbox_Functions_5 Context_TRAIN_TrackSideInputFifo_2;
} SV_EVC_InputBuffer_Toolbox_Functions;

extern void kcg_save_SV_EVC_InputBuffer_Toolbox_Functions(
  SV_EVC_InputBuffer_Toolbox_Functions *SV,
  outC_EVC_InputBuffer_Toolbox_Functions *outC);
extern void kcg_load_SV_EVC_InputBuffer_Toolbox_Functions(
  outC_EVC_InputBuffer_Toolbox_Functions *outC,
  SV_EVC_InputBuffer_Toolbox_Functions *SV);



#endif /* _EVC_InputBuffer_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** EVC_InputBuffer_Toolbox_Functions.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

