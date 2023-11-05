/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _probe_MsgOut_RadioSupport_Pkg_H_
#define _probe_MsgOut_RadioSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_MESSAGE /* Msg_0ut/ */ Msg_0ut;
  T_TRAIN /* outTTrain/ */ outTTrain;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_MESSAGE /* lastMSG/ */ lastMSG;
  T_TRAIN /* lastTTrain/ */ lastTTrain;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  T_TRAIN /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  NID_MESSAGE /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  NID_MESSAGE /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  kcg_int32 /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  M_TrainTrack_Message_T_TM_radio_messages /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  NID_MESSAGE /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  T_TRAIN /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isValid/ */ isValid;
  kcg_bool /* isRelevant/ */ isRelevant;
  NID_MESSAGE /* _L46/ */ _L46;
  T_TRAIN /* _L47/ */ _L47;
  kcg_bool /* _L50/ */ _L50;
  M_TrainTrack_Message_T_TM_radio_messages /* _L49/ */ _L49;
  M_TrainTrack_MessageHd_T_TM_radio_messages /* _L48/ */ _L48;
} outC_probe_MsgOut_RadioSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RadioSupport_Pkg::probe_MsgOut/ */
extern void probe_MsgOut_RadioSupport_Pkg(
  /* fromEVC/ */
  M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* show136/ */
  kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void probe_MsgOut_init_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _probe_MsgOut_RadioSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probe_MsgOut_RadioSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

