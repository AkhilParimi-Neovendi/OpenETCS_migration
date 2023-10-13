/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */
#ifndef _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_
#define _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"
#include "RisingEdge_digital.h"
#include "Counter_pwlinear_int64.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int64 /* Output1/ */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Counter_pwlinear_int64 /* _L14=(pwlinear::Counter#1)/ */ Context_Counter_1;
  outC_RisingEdge_digital /* _L6=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_countDownTimer_MoRC_Pck_Utils /* _L8=(MoRC_Pck::Utils::countDownTimer#1)/ */ Context_countDownTimer_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  time_Type_MoRC_Pck /* _L3/ */ _L3;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  kcg_int64 /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_int64 /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L12/ */ _L12;
  kcg_int64 /* _L13/ */ _L13;
  kcg_int64 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
} outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::Sub_func::HourGlassAnimation/ */
extern void HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  /* start/ */
  kcg_bool start,
  /* stop/ */
  kcg_bool stop,
  /* actualtime/ */
  time_Type_MoRC_Pck actualtime,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

extern void HourGlassAnimation_reset_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void HourGlassAnimation_init_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);
#endif /* KCG_USER_DEFINED_INIT */

/* ======================  state vector type  ====================== */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -----------------------  no local probes  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  SV_countDownTimer_MoRC_Pck_Utils Context_countDownTimer_1;
  SV_RisingEdge_digital Context_RisingEdge_1;
  SV_Counter_pwlinear_int64 Context_Counter_1;
} SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func;

extern void kcg_save_SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func *SV,
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC);
extern void kcg_load_SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func(
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func *outC,
  SV_HourGlassAnimation_DMI_Control_Pkg_Sub_func *SV);



#endif /* _HourGlassAnimation_DMI_Control_Pkg_Sub_func_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** HourGlassAnimation_DMI_Control_Pkg_Sub_func.h
** Generation date: 2023-10-12T15:10:00
*************************************************************$ */

