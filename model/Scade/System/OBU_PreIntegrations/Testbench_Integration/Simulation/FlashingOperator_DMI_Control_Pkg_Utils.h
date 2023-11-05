/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */
#ifndef _FlashingOperator_DMI_Control_Pkg_Utils_H_
#define _FlashingOperator_DMI_Control_Pkg_Utils_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* flashigOut/ */ flashigOut;
  kcg_bool /* active/ */ active;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* SM1:start:_L10/ */ _L10_start_SM1;
  kcg_int32 /* SM1:start:counter/ */ counter_start_SM1;
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* SM1:start:_L6=(MoRC_Pck::Utils::countDownTimer#2)/ */ Context_countDownTimer_2;
  /* ------------------ clocks of observable data -------------------- */
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:stop:_L1/ */ _L1_stop_SM1;
  kcg_int32 /* SM1:start:_L27/ */ _L27_start_SM1;
  kcg_bool /* SM1:start:_L26/ */ _L26_start_SM1;
  kcg_int32 /* SM1:start:_L25/ */ _L25_start_SM1;
  kcg_int32 /* SM1:start:_L24/ */ _L24_start_SM1;
  kcg_int32 /* SM1:start:_L23/ */ _L23_start_SM1;
  kcg_bool /* SM1:start:_L22/ */ _L22_start_SM1;
  kcg_int32 /* SM1:start:_L21/ */ _L21_start_SM1;
  kcg_int32 /* SM1:start:_L18/ */ _L18_start_SM1;
  kcg_int32 /* SM1:start:_L19/ */ _L19_start_SM1;
  kcg_int32 /* SM1:start:_L20/ */ _L20_start_SM1;
  kcg_int32 /* SM1:start:_L15/ */ _L15_start_SM1;
  kcg_int32 /* SM1:start:_L13/ */ _L13_start_SM1;
  kcg_bool /* SM1:start:_L12/ */ _L12_start_SM1;
  kcg_bool /* SM1:start:_L2/ */ _L2_start_SM1;
  kcg_bool /* SM1:start:_L3/ */ _L3_start_SM1;
  kcg_bool /* SM1:start:_L4/ */ _L4_start_SM1;
  kcg_bool /* SM1:start:_L7/ */ _L7_start_SM1;
  kcg_bool /* SM1:start:_L6/ */ _L6_start_SM1;
  kcg_bool /* SM1:start:_L9/ */ _L9_start_SM1;
  _116_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _117_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _117_SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_FlashingOperator_DMI_Control_Pkg_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Utils::FlashingOperator/ */
extern void FlashingOperator_DMI_Control_Pkg_Utils(
  /* OnOff/ */
  kcg_bool OnOff,
  /* SystemTime/ */
  kcg_int32 SystemTime,
  /* Interval/ */
  kcg_int32 Interval,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

extern void FlashingOperator_reset_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void FlashingOperator_init_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* SM1: */ Context_SM1_reset_nxt;
  kcg_bool /* SM1: */ Context_SM1_reset_act;
  _116_SSM_ST_SM1 /* SM1: */ Context_SM1_state_nxt;
  kcg_int32 /* SM1:start:counter/ */ Context_counter;
  kcg_bool /* SM1:start:_L10/ */ Context__L10;
  kcg_bool Context_init;
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_countDownTimer_MoRC_Pck_Utils Context_countDownTimer_2;
} SV_FlashingOperator_DMI_Control_Pkg_Utils;

extern void kcg_save_SV_FlashingOperator_DMI_Control_Pkg_Utils(
  SV_FlashingOperator_DMI_Control_Pkg_Utils *SV,
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC);
extern void kcg_load_SV_FlashingOperator_DMI_Control_Pkg_Utils(
  outC_FlashingOperator_DMI_Control_Pkg_Utils *outC,
  SV_FlashingOperator_DMI_Control_Pkg_Utils *SV);



#endif /* _FlashingOperator_DMI_Control_Pkg_Utils_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** FlashingOperator_DMI_Control_Pkg_Utils.h
** Generation date: 2023-11-05T09:07:00
*************************************************************$ */

