/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _nextGen_P04_radioOutput_Pkg_H_
#define _nextGen_P04_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P004_TM_TrainToTrack /* outP4/ */ outP4;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  P004_TM_TrainToTrack /* _L2/ */ _L2;
  kcg_int32 /* _L12/ */ _L12;
  kcg_bool /* _L34/ */ _L34;
  M_ERROR /* _L33/ */ _L33;
  kcg_int32 /* _L38/ */ _L38;
} outC_nextGen_P04_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_P04/ */
extern void nextGen_P04_radioOutput_Pkg(
  /* inP4/ */
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inP4,
  outC_nextGen_P04_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGen_P04_reset_radioOutput_Pkg(
  outC_nextGen_P04_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGen_P04_init_radioOutput_Pkg(
  outC_nextGen_P04_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nextGen_P04_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P04_radioOutput_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

