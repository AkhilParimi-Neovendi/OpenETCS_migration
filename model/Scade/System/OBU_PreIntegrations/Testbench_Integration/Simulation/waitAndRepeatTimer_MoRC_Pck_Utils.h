/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */
#ifndef _waitAndRepeatTimer_MoRC_Pck_Utils_H_
#define _waitAndRepeatTimer_MoRC_Pck_Utils_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* triggerAction/ */ triggerAction;
  kcg_bool /* elapsed/ */ elapsed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L22/ */ _L22;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* _L1=(MoRC_Pck::Utils::countDownTimer#1)/ */ Context_countDownTimer_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  time_Type_MoRC_Pck /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  time_Type_MoRC_Pck /* _L5/ */ _L5;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L21/ */ _L21;
  kcg_int32 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
} outC_waitAndRepeatTimer_MoRC_Pck_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Utils::waitAndRepeatTimer/ */
extern void waitAndRepeatTimer_MoRC_Pck_Utils(
  /* actualTime/ */
  time_Type_MoRC_Pck actualTime,
  /* re_start/ */
  kcg_bool re_start,
  /* stop/ */
  kcg_bool stop,
  /* repeatInterval/ */
  time_Type_MoRC_Pck repeatInterval,
  /* maxNoOfRepetitions/ */
  kcg_int32 maxNoOfRepetitions,
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);

extern void waitAndRepeatTimer_reset_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void waitAndRepeatTimer_init_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_int32 /* _L22/ */ Context__L22;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_countDownTimer_MoRC_Pck_Utils Context_countDownTimer_1;
} SV_waitAndRepeatTimer_MoRC_Pck_Utils;

extern void kcg_save_SV_waitAndRepeatTimer_MoRC_Pck_Utils(
  SV_waitAndRepeatTimer_MoRC_Pck_Utils *SV,
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);
extern void kcg_load_SV_waitAndRepeatTimer_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC,
  SV_waitAndRepeatTimer_MoRC_Pck_Utils *SV);



#endif /* _waitAndRepeatTimer_MoRC_Pck_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** waitAndRepeatTimer_MoRC_Pck_Utils.h
** Generation date: 2023-11-05T09:06:59
*************************************************************$ */

