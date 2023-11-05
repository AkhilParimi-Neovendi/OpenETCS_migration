/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2023-10-09T16:07:18
*************************************************************$ */
#ifndef _ScriptedTrackTest_EnvSim_Internal_H_
#define _ScriptedTrackTest_EnvSim_Internal_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_float32 /* actualTrainPos/ */ actualTrainPos;
  kcg_float32 /* radioTrainPos/ */ radioTrainPos;
} inC_ScriptedTrackTest_EnvSim_Internal;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* radioMessage/ */ radioMessage;
  CompressedBaliseMessage_TM /* baliseMessage/ */ baliseMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* _L2/ */ _L2;
  CompressedRadioMessage_TM /* _L1/ */ _L1;
  kcg_float32 /* _L3/ */ _L3;
  kcg_float32 /* _L4/ */ _L4;
} outC_ScriptedTrackTest_EnvSim_Internal;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::Internal::ScriptedTrackTest/ */
extern void ScriptedTrackTest_EnvSim_Internal(
  inC_ScriptedTrackTest_EnvSim_Internal *inC,
  outC_ScriptedTrackTest_EnvSim_Internal *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ScriptedTrackTest_reset_EnvSim_Internal(
  outC_ScriptedTrackTest_EnvSim_Internal *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ScriptedTrackTest_init_EnvSim_Internal(
  outC_ScriptedTrackTest_EnvSim_Internal *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ScriptedTrackTest_EnvSim_Internal_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ScriptedTrackTest_EnvSim_Internal.h
** Generation date: 2023-10-09T16:07:18
*************************************************************$ */

