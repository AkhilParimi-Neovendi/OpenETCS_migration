/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */
#ifndef _nextGen_P05_radioOutput_Pkg_H_
#define _nextGen_P05_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  P005_TM_TrainToTrack /* outP5/ */ outP5;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* _L1/ */ _L1;
  P005_TM_TrainToTrack /* _L2/ */ _L2;
  kcg_int64 /* _L12/ */ _L12;
  kcg_bool /* _L34/ */ _L34;
  NID_OPERATIONAL /* _L33/ */ _L33;
  kcg_int64 /* _L40/ */ _L40;
} outC_nextGen_P05_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::nextGen_P05/ */
extern void nextGen_P05_radioOutput_Pkg(
  /* inP5/ */
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inP5,
  outC_nextGen_P05_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void nextGen_P05_reset_radioOutput_Pkg(
  outC_nextGen_P05_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void nextGen_P05_init_radioOutput_Pkg(
  outC_nextGen_P05_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _nextGen_P05_radioOutput_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** nextGen_P05_radioOutput_Pkg.h
** Generation date: 2023-10-12T15:09:57
*************************************************************$ */

