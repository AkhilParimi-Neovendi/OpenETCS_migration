/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */
#ifndef _CASTLIB_BaliseHeaders_TM_conversions_H_
#define _CASTLIB_BaliseHeaders_TM_conversions_H_

#include "kcg_types.h"
#include "CAST_Int_to_Q_LINK_TM_conversions.h"
#include "CAST_Int_to_M_MCOUNT_TM_conversions.h"
#include "CAST_Int_to_M_DUP_TM_conversions.h"
#include "CAST_Int_to_N_TOTAL_TM_conversions.h"
#include "CAST_Int_to_N_PIG_TM_conversions.h"
#include "CAST_Int_to_Q_MEDIA_TM_conversions.h"
#include "CAST_Int_to_Q_UPDOWN_TM_conversions.h"
#include "CAST_Int_to_NID_BG_TM_conversions.h"
#include "CAST_Int_to_NID_C_TM_conversions.h"
#include "CAST_Int_to_M_VERSION_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TelegramHeader_T_BG_Types_Pkg /* Out/ */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CAST_Int_to_Q_UPDOWN_TM_conversions /* _L23=(TM_conversions::CAST_Int_to_Q_UPDOWN#1)/ */ Context_CAST_Int_to_Q_UPDOWN_1;
  outC_CAST_Int_to_M_VERSION_TM_conversions /* _L24=(TM_conversions::CAST_Int_to_M_VERSION#1)/ */ Context_CAST_Int_to_M_VERSION_1;
  outC_CAST_Int_to_Q_MEDIA_TM_conversions /* _L25=(TM_conversions::CAST_Int_to_Q_MEDIA#1)/ */ Context_CAST_Int_to_Q_MEDIA_1;
  outC_CAST_Int_to_N_PIG_TM_conversions /* _L26=(TM_conversions::CAST_Int_to_N_PIG#1)/ */ Context_CAST_Int_to_N_PIG_1;
  outC_CAST_Int_to_N_TOTAL_TM_conversions /* _L27=(TM_conversions::CAST_Int_to_N_TOTAL#1)/ */ Context_CAST_Int_to_N_TOTAL_1;
  outC_CAST_Int_to_M_DUP_TM_conversions /* _L28=(TM_conversions::CAST_Int_to_M_DUP#1)/ */ Context_CAST_Int_to_M_DUP_1;
  outC_CAST_Int_to_M_MCOUNT_TM_conversions /* _L29=(TM_conversions::CAST_Int_to_M_MCOUNT#1)/ */ Context_CAST_Int_to_M_MCOUNT_1;
  outC_CAST_Int_to_NID_C_TM_conversions /* _L30=(TM_conversions::CAST_Int_to_NID_C#1)/ */ Context_CAST_Int_to_NID_C_1;
  outC_CAST_Int_to_NID_BG_TM_conversions /* _L31=(TM_conversions::CAST_Int_to_NID_BG#1)/ */ Context_CAST_Int_to_NID_BG_1;
  outC_CAST_Int_to_Q_LINK_TM_conversions /* _L32=(TM_conversions::CAST_Int_to_Q_LINK#1)/ */ Context_CAST_Int_to_Q_LINK_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BaliseTelegramHeader_int_T_TM /* _L1/ */ _L1;
  kcg_int64 /* _L11/ */ _L11;
  kcg_int64 /* _L10/ */ _L10;
  kcg_int64 /* _L9/ */ _L9;
  kcg_int64 /* _L8/ */ _L8;
  kcg_int64 /* _L7/ */ _L7;
  kcg_int64 /* _L6/ */ _L6;
  kcg_int64 /* _L5/ */ _L5;
  kcg_int64 /* _L4/ */ _L4;
  kcg_int64 /* _L3/ */ _L3;
  kcg_int64 /* _L2/ */ _L2;
  TelegramHeader_T_BG_Types_Pkg /* _L22/ */ _L22;
  Q_UPDOWN /* _L23/ */ _L23;
  M_VERSION /* _L24/ */ _L24;
  Q_MEDIA /* _L25/ */ _L25;
  N_PIG /* _L26/ */ _L26;
  N_TOTAL /* _L27/ */ _L27;
  M_DUP /* _L28/ */ _L28;
  M_MCOUNT /* _L29/ */ _L29;
  NID_C /* _L30/ */ _L30;
  NID_BG /* _L31/ */ _L31;
  Q_LINK /* _L32/ */ _L32;
} outC_CASTLIB_BaliseHeaders_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CASTLIB_BaliseHeaders/ */
extern void CASTLIB_BaliseHeaders_TM_conversions(
  /* In/ */
  BaliseTelegramHeader_int_T_TM *In,
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CASTLIB_BaliseHeaders_reset_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CASTLIB_BaliseHeaders_init_TM_conversions(
  outC_CASTLIB_BaliseHeaders_TM_conversions *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CASTLIB_BaliseHeaders_TM_conversions_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** CASTLIB_BaliseHeaders_TM_conversions.h
** Generation date: 2023-10-12T15:09:59
*************************************************************$ */

