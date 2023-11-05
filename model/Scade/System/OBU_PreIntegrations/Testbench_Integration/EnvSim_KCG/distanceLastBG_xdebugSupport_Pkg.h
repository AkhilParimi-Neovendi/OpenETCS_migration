/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _distanceLastBG_xdebugSupport_Pkg_H_
#define _distanceLastBG_xdebugSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float32 /* distance/ */ distance;
  NID_BG /* lastBG/ */ lastBG;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  NID_BG /* BG_ID/ */ BG_ID;
  L_internal_Type_Obu_BasicTypes_Pkg /* BGLocation/ */ BGLocation;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float32 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:then:_L8/ */ _L8_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  NID_BG /* IfBlock1:then:_L4/ */ _L4_then_IfBlock1;
  BG_Header_T_BG_Types_Pkg /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* IfBlock1:then:_L2/ */ _L2_then_IfBlock1;
  kcg_float32 /* IfBlock1:else:_L10/ */ _L10_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:_L9/ */ _L9_else_IfBlock1;
  kcg_float32 /* IfBlock1:else:_L8/ */ _L8_else_IfBlock1;
  kcg_int32 /* IfBlock1:else:_L7/ */ _L7_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L4/ */ _L4_else_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L5/ */ _L5_else_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:else:_L6/ */ _L6_else_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  NID_BG /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* BGPassed/ */ BGPassed;
  ReceivedMessage_T_Common_Types_Pkg /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  MsgSource_T_Common_Types_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  MsgSource_T_Common_Types_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  NID_BG /* _L8/ */ _L8;
} outC_distanceLastBG_xdebugSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* xdebugSupport_Pkg::distanceLastBG/ */
extern void distanceLastBG_xdebugSupport_Pkg(
  /* odometry/ */
  odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* msg/ */
  ReceivedMessage_T_Common_Types_Pkg *msg,
  outC_distanceLastBG_xdebugSupport_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void distanceLastBG_reset_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void distanceLastBG_init_xdebugSupport_Pkg(
  outC_distanceLastBG_xdebugSupport_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _distanceLastBG_xdebugSupport_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** distanceLastBG_xdebugSupport_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

