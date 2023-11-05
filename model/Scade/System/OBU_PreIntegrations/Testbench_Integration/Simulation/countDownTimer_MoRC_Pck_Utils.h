/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _countDownTimer_MoRC_Pck_Utils_H_
#define _countDownTimer_MoRC_Pck_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* expired/ */ expired;
  kcg_bool /* started/ */ started;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* @1/_L4/ */ _L4_MemoryBasic_1_int32;
  SSM_ST_TimerStatus_SM /* TimerStatus_SM: */ TimerStatus_SM_state_nxt;
  kcg_bool /* TimerStatus_SM: */ TimerStatus_SM_reset_act;
  kcg_bool /* TimerStatus_SM: */ TimerStatus_SM_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TimerStatus_SM:Counting: */ Counting_weakb_clock_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Counting:<3> */ tr_3_clock_Counting_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Counting:<2> */ tr_2_clock_Counting_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Expired:<2> */ tr_2_clock_Expired_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Stopped:<1> */ tr_1_clock_Stopped_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Stopped:<2> */ tr_2_clock_Stopped_TimerStatus_SM;
  SSM_ST_TimerStatus_SM /* TimerStatus_SM: */ TimerStatus_SM_state_sel;
  SSM_ST_TimerStatus_SM /* TimerStatus_SM: */ TimerStatus_SM_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Memorized/ */ Memorized_MemoryBasic_1_int32;
  kcg_bool /* @1/Write/ */ Write_MemoryBasic_1_int32;
  kcg_int32 /* @1/Init/ */ Init_MemoryBasic_1_int32;
  kcg_int32 /* @1/BM_Input/ */ BM_Input_MemoryBasic_1_int32;
  kcg_int32 /* @1/_L7/ */ _L7_MemoryBasic_1_int32;
  kcg_int32 /* @1/_L6/ */ _L6_MemoryBasic_1_int32;
  kcg_bool /* @1/_L5/ */ _L5_MemoryBasic_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_MemoryBasic_1_int32;
  kcg_bool /* TimerStatus_SM:Stopped:_L1/ */ _L1_Stopped_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Counting:_L8/ */ _L8_Counting_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Counting:_L7/ */ _L7_Counting_TimerStatus_SM;
  kcg_int32 /* TimerStatus_SM:Counting:_L6/ */ _L6_Counting_TimerStatus_SM;
  time_Type_MoRC_Pck /* TimerStatus_SM:Counting:_L5/ */ _L5_Counting_TimerStatus_SM;
  time_Type_MoRC_Pck /* TimerStatus_SM:Counting:_L4/ */ _L4_Counting_TimerStatus_SM;
  time_Type_MoRC_Pck /* TimerStatus_SM:Counting:_L1/ */ _L1_Counting_TimerStatus_SM;
  kcg_bool /* TimerStatus_SM:Expired:_L1/ */ _L1_Expired_TimerStatus_SM;
  kcg_bool /* sStart/ */ sStart;
  SSM_TR_TimerStatus_SM /* TimerStatus_SM: */ TimerStatus_SM_fired_strong;
  SSM_TR_TimerStatus_SM /* TimerStatus_SM: */ TimerStatus_SM_fired;
  kcg_bool /* expired_loc/ */ expired_loc;
  kcg_bool /* _L1/ */ _L1;
} outC_countDownTimer_MoRC_Pck_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Utils::countDownTimer/ */
extern void countDownTimer_MoRC_Pck_Utils(
  /* re_start/ */
  kcg_bool re_start,
  /* stop/ */
  kcg_bool stop,
  /* actualTime/ */
  time_Type_MoRC_Pck actualTime,
  /* autoretrigger/ */
  kcg_bool autoretrigger,
  /* interval/ */
  time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Utils *outC);

extern void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void countDownTimer_init_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TimerStatus_SM: */ Context_TimerStatus_SM_reset_nxt;
  kcg_bool /* TimerStatus_SM: */ Context_TimerStatus_SM_reset_act;
  SSM_ST_TimerStatus_SM /* TimerStatus_SM: */ Context_TimerStatus_SM_state_nxt;
  kcg_int32 /* @1/_L4/ */ Context__L4_MemoryBasic_1;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
} SV_countDownTimer_MoRC_Pck_Utils;

extern void kcg_save_SV_countDownTimer_MoRC_Pck_Utils(
  SV_countDownTimer_MoRC_Pck_Utils *SV,
  outC_countDownTimer_MoRC_Pck_Utils *outC);
extern void kcg_load_SV_countDownTimer_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC,
  SV_countDownTimer_MoRC_Pck_Utils *SV);

/*
  Expanded instances for: MoRC_Pck::Utils::countDownTimer/
  @1: (linear::MemoryBasic#1)
*/

#endif /* _countDownTimer_MoRC_Pck_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** countDownTimer_MoRC_Pck_Utils.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

