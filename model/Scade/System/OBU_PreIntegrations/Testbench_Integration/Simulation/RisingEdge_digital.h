/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */
#ifndef _RisingEdge_digital_H_
#define _RisingEdge_digital_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RE_Output/ */ RE_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L1/ */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
} outC_RisingEdge_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::RisingEdge/ */
extern void RisingEdge_digital(
  /* RE_Input/ */
  kcg_bool RE_Input,
  outC_RisingEdge_digital *outC);

extern void RisingEdge_reset_digital(outC_RisingEdge_digital *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RisingEdge_init_digital(outC_RisingEdge_digital *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* _L1/ */ Context__L1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_RisingEdge_digital;

extern void kcg_save_SV_RisingEdge_digital(
  SV_RisingEdge_digital *SV,
  outC_RisingEdge_digital *outC);
extern void kcg_load_SV_RisingEdge_digital(
  outC_RisingEdge_digital *outC,
  SV_RisingEdge_digital *SV);



#endif /* _RisingEdge_digital_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RisingEdge_digital.h
** Generation date: 2023-10-12T15:09:58
*************************************************************$ */

