/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _ZoomLevel_H_
#define _ZoomLevel_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  tScale /* Scale/ */ Scale;
  kcg_int32 /* zoomlevel/ */ zoomlevel;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* SM1:Zoom1:_L2/ */ _L2_Zoom1_SM1;
  tScale /* SM1:Zoom1:_L1/ */ _L1_Zoom1_SM1;
  kcg_int32 /* SM1:Zoom2:_L2/ */ _L2_Zoom2_SM1;
  tScale /* SM1:Zoom2:_L1/ */ _L1_Zoom2_SM1;
  kcg_int32 /* SM1:Zoom4:_L2/ */ _L2_Zoom4_SM1;
  tScale /* SM1:Zoom4:_L1/ */ _L1_Zoom4_SM1;
  kcg_int32 /* SM1:Zoom3:_L2/ */ _L2_Zoom3_SM1;
  tScale /* SM1:Zoom3:_L1/ */ _L1_Zoom3_SM1;
  kcg_int32 /* SM1:Zoom6:_L2/ */ _L2_Zoom6_SM1;
  tScale /* SM1:Zoom6:_L1/ */ _L1_Zoom6_SM1;
  kcg_int32 /* SM1:Zoom5:_L2/ */ _L2_Zoom5_SM1;
  tScale /* SM1:Zoom5:_L1/ */ _L1_Zoom5_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_ZoomLevel;

/* ===========  node initialization and cycle functions  =========== */
/* ZoomLevel/ */
extern void ZoomLevel(
  /* ZoomIn/ */
  kcg_bool ZoomIn,
  /* ZoomOut/ */
  kcg_bool ZoomOut,
  outC_ZoomLevel *outC);

extern void ZoomLevel_reset(outC_ZoomLevel *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ZoomLevel_init(outC_ZoomLevel *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_ZoomLevel;

extern void kcg_save_SV_ZoomLevel(SV_ZoomLevel *SV, outC_ZoomLevel *outC);
extern void kcg_load_SV_ZoomLevel(outC_ZoomLevel *outC, SV_ZoomLevel *SV);



#endif /* _ZoomLevel_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ZoomLevel.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

