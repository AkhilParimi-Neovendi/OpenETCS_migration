/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _checkOdometry_Receive_TrackSide_Msg_Pkg_H_
#define _checkOdometry_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"
#include "updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"
#include "checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* outMessageComplete/ */ outMessageComplete;
  kcg_bool /* outBGIsChangedEarly/ */ outBGIsChangedEarly;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* outCollector/ */ outCollector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_updateCollectorSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport /* IfBlock1:then:_L18=(Receive_TrackSide_Msg_Pkg::BaliseSupport::updateCollectorSingleBB#1)/ */ Context_updateCollectorSingleBB_1;
  outC_checkMaxAbsOdoDistance_BasicLocationFunctions_Pkg /* IfBlock1:then:_L5=(BasicLocationFunctions_Pkg::checkMaxAbsOdoDistance#2)/ */ Context_checkMaxAbsOdoDistance_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* IfBlock1:then:_L22/ */ _L22_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L16/ */ _L16_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L14/ */ _L14_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  kcg_int64 /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L3/ */ _L3_then_IfBlock1;
  kcg_bool /* IfBlock1:then:_L5/ */ _L5_then_IfBlock1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L6/ */ _L6_then_IfBlock1;
  odometry_T_Obu_BasicTypes_Pkg /* IfBlock1:then:_L7/ */ _L7_then_IfBlock1;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* IfBlock1:else:_L3/ */ _L3_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L2/ */ _L2_else_IfBlock1;
  kcg_bool /* IfBlock1:else:_L1/ */ _L1_else_IfBlock1;
  kcg_bool /* isValid/ */ isValid;
  odometry_T_Obu_BasicTypes_Pkg /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
  kcg_int64 /* _L19/ */ _L19;
  kcg_bool /* _L20/ */ _L20;
  kcg_int64 /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  BGCollector_T_Receive_TrackSide_Msg_Pkg /* _L30/ */ _L30;
} outC_checkOdometry_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::checkOdometry/ */
extern void checkOdometry_Receive_TrackSide_Msg_Pkg(
  /* actualOdometry/ */
  odometry_T_Obu_BasicTypes_Pkg *actualOdometry,
  /* inCollector/ */
  BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void checkOdometry_reset_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void checkOdometry_init_Receive_TrackSide_Msg_Pkg(
  outC_checkOdometry_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _checkOdometry_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** checkOdometry_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

