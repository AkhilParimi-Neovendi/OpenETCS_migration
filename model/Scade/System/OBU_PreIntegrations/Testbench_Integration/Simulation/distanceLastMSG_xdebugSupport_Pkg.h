/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _distanceLastMSG_xdebugSupport_Pkg_H_
#define _distanceLastMSG_xdebugSupport_Pkg_H_

#include "kcg_types.h"
#include "countPacketsMsg_xdebugSupport_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* distance/ */ distance;
  NID_BG /* lastMSG/ */ lastMSG;
  NID_LRBG /* lastLRBG/ */ lastLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* showGeneral/ */ mem_showGeneral;
  NID_BG /* MSG_ID/ */ MSG_ID;
  L_internal_Type_Obu_BasicTypes_Pkg /* MSGLocation/ */ MSGLocation;
  NID_LRBG /* LRBG/ */ LRBG;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countPacketsMsg_xdebugSupport_Pkg /* _L16=(xdebugSupport_Pkg::countPacketsMsg#1)/ */ Context_countPacketsMsg_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_LRBG /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  NID_MESSAGE /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L16/ */ _L16_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L15/ */ _L15_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L14/ */ _L14_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L13/ */ _L13_else_IfBlock1;
  NID_BG /* IfBlock1:else:_L12/ */ _L12_else_IfBlock1;
  NID_LRBG /* IfBlock1:else:_L11/ */ _L11_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L10/ */ _L10_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  kcg_int64 /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  NID_BG /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* MSGReceived/ */ MSGReceived;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  MsgSource_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  MsgSource_T_Common_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  NID_BG /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_bool /* _L11/ */ _L11;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* _L10/ */ _L10;
  NID_MESSAGE /* _L12/ */ _L12;
  NID_MESSAGE /* _L13/ */ _L13;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_int64 /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  kcg_int64 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  kcg_int64 /* _L20/ */ _L20;
  NID_LRBG /* _L21/ */ _L21;
} outC_distanceLastMSG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastMSG/ */
extern void distanceLastMSG_xdebugSupport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* msg/ */
  ReceivedMessage_T_Common_Types_Pkg *msg,
  /* showGeneral/ */
  kcg_bool showGeneral,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastMSG_reset_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastMSG_init_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* ----------------------  memorised outputs  ---------------------- */
  kcg_float64 /* distance/ */ Context_distance;
  /* ----------------------- local memories  ------------------------- */
  NID_LRBG /* LRBG/ */ Context_LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg /* MSGLocation/ */ Context_MSGLocation;
  NID_BG /* MSG_ID/ */ Context_MSG_ID;
  kcg_bool /* showGeneral/ */ Context_mem_showGeneral;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
} SV_distanceLastMSG_xdebugSupport_Pkg;

extern void kcg_save_SV_distanceLastMSG_xdebugSupport_Pkg(
  SV_distanceLastMSG_xdebugSupport_Pkg *SV,
  outC_distanceLastMSG_xdebugSupport_Pkg *outC);
extern void kcg_load_SV_distanceLastMSG_xdebugSupport_Pkg(
  outC_distanceLastMSG_xdebugSupport_Pkg *outC,
  SV_distanceLastMSG_xdebugSupport_Pkg *SV);



#endif /* _distanceLastMSG_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** distanceLastMSG_xdebugSupport_Pkg.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

