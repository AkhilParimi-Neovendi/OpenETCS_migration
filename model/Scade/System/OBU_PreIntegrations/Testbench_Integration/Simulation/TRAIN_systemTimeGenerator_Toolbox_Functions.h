/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _TRAIN_systemTimeGenerator_Toolbox_Functions_H_
#define _TRAIN_systemTimeGenerator_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* timestamp/ */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int64 /* _L2/ */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
} outC_TRAIN_systemTimeGenerator_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_systemTimeGenerator/ */
extern void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* deltaTime/ */
  kcg_int64 deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TRAIN_systemTimeGenerator_init_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int64 /* _L2/ */ Context__L2;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_TRAIN_systemTimeGenerator_Toolbox_Functions;

extern void kcg_save_SV_TRAIN_systemTimeGenerator_Toolbox_Functions(
  SV_TRAIN_systemTimeGenerator_Toolbox_Functions *SV,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);
extern void kcg_load_SV_TRAIN_systemTimeGenerator_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC,
  SV_TRAIN_systemTimeGenerator_Toolbox_Functions *SV);



#endif /* _TRAIN_systemTimeGenerator_Toolbox_Functions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** TRAIN_systemTimeGenerator_Toolbox_Functions.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

