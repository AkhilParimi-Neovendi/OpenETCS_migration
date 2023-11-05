/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_
#define _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* outUpdateBGPosition/ */ outUpdateBGPosition;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  centerOfBalisePosition_T_BG_Types_Pkg /* _L2/ */ _L2;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L4/ */ _L4;
  centerOfBalisePosition_T_BG_Types_Pkg /* _L7/ */ _L7;
  kcg_bool /* _L18/ */ _L18;
} outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::setIntervalBGPosition/ */
extern void setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
  /* inOldPosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* incenterOfBalisePosition/ */
  centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void setIntervalBGPosition_init_Receive_TrackSide_Msg_Pkg(
  outC_setIntervalBGPosition_Receive_TrackSide_Msg_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _setIntervalBGPosition_Receive_TrackSide_Msg_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** setIntervalBGPosition_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

