/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _Update_MA_TA_MA_new_H_
#define _Update_MA_TA_MA_new_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MovementAuthority_t_TrackAtlasTypes /* MA_in_force/ */ MA_in_force;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MovementAuthority_t_TrackAtlasTypes /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  MovementAuthority_t_TrackAtlasTypes /* IfBlock1:else:else:_L3/ */ _L3_else_else_IfBlock1;
  MovementAuthority_t_TrackAtlasTypes /* IfBlock1:else:then:_L1/ */ _L1_then_else_IfBlock1;
  ActionType_TA_MA_new /* action/ */ action;
  MovementAuthority_t_TrackAtlasTypes /* _L34/ */ _L34;
  kcg_bool /* _L65/ */ _L65;
  ActionType_TA_MA_new /* _L66/ */ _L66;
  ActionType_TA_MA_new /* _L67/ */ _L67;
  ActionType_TA_MA_new /* _L68/ */ _L68;
} outC_Update_MA_TA_MA_new;

/* ===========  node initialization and cycle functions  =========== */
/* TA_MA_new::Update_MA/ */
extern void Update_MA_TA_MA_new(
  /* ProfileIn/ */
  MovementAuthority_t_TrackAtlasTypes *ProfileIn,
  outC_Update_MA_TA_MA_new *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Update_MA_reset_TA_MA_new(outC_Update_MA_TA_MA_new *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Update_MA_init_TA_MA_new(outC_Update_MA_TA_MA_new *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Update_MA_TA_MA_new_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Update_MA_TA_MA_new.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

