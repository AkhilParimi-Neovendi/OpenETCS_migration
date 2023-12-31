/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */
#ifndef _InjectRadioMessage_EnvSim_H_
#define _InjectRadioMessage_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedRadioMessage_TM /* EnvSim::InjectRadioMessage::msgOut */ msgOut;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_InjectRadioMessage_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::InjectRadioMessage */
extern void InjectRadioMessage_EnvSim(
  /* EnvSim::InjectRadioMessage::rmsgIn */ CompressedRadioMessage_TM *rmsgIn,
  outC_InjectRadioMessage_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void InjectRadioMessage_reset_EnvSim(
  outC_InjectRadioMessage_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void InjectRadioMessage_init_EnvSim(
  outC_InjectRadioMessage_EnvSim *outC);

#endif /* _InjectRadioMessage_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** InjectRadioMessage_EnvSim.dh
** Generation date: 2015-11-25T10:38:38
*************************************************************$ */

