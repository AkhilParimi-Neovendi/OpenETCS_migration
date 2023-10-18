/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_
#define _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* isConsistent/ */ isConsistent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* _L32=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#1)/ */ Context_CheckTelegramHeader_1;
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction /* _L33=(CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader#2)/ */ Context_CheckTelegramHeader_2;
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L39=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs#1)/ */ Context_Check2N_PIGs_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* m_dup_1/ */ m_dup_1;
  N_PIG /* n_pig_1/ */ n_pig_1;
  N_PIG /* n_pig_2/ */ n_pig_2;
  M_DUP /* m_dup_2/ */ m_dup_2;
  TelegramHeader_T_BG_Types_Pkg /* _L1/ */ _L1;
  TelegramHeader_T_BG_Types_Pkg /* _L3/ */ _L3;
  Q_UPDOWN /* _L13/ */ _L13;
  M_VERSION /* _L12/ */ _L12;
  Q_MEDIA /* _L11/ */ _L11;
  N_PIG /* _L10/ */ _L10;
  N_TOTAL /* _L9/ */ _L9;
  M_DUP /* _L8/ */ _L8;
  M_MCOUNT /* _L7/ */ _L7;
  NID_C /* _L6/ */ _L6;
  NID_BG /* _L5/ */ _L5;
  Q_LINK /* _L4/ */ _L4;
  Q_UPDOWN /* _L14/ */ _L14;
  M_VERSION /* _L15/ */ _L15;
  Q_MEDIA /* _L16/ */ _L16;
  N_PIG /* _L17/ */ _L17;
  N_TOTAL /* _L18/ */ _L18;
  M_DUP /* _L19/ */ _L19;
  M_MCOUNT /* _L20/ */ _L20;
  NID_C /* _L21/ */ _L21;
  NID_BG /* _L22/ */ _L22;
  Q_LINK /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  kcg_bool /* _L33/ */ _L33;
  M_DUP /* _L35/ */ _L35;
  M_DUP /* _L36/ */ _L36;
  N_PIG /* _L37/ */ _L37;
  N_PIG /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
} outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::Check2Headers/ */
extern void Check2Headers_CheckBGConsistency_Pkg_SubFunction(
  /* header_1/ */
  TelegramHeader_T_BG_Types_Pkg *header_1,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* header_2/ */
  TelegramHeader_T_BG_Types_Pkg *header_2,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check2Headers_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check2Headers_init_CheckBGConsistency_Pkg_SubFunction(
  outC_Check2Headers_CheckBGConsistency_Pkg_SubFunction *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Check2Headers_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2Headers_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

