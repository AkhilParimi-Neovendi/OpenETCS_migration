/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */
#ifndef _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_DUP /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  M_DUP /* _L5/ */ _L5;
  kcg_bool /* _L4/ */ _L4;
  M_DUP /* _L3/ */ _L3;
  M_DUP /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L17/ */ _L17;
  kcg_bool /* _L15/ */ _L15;
  M_DUP /* _L14/ */ _L14;
  M_DUP /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  M_DUP /* _L11/ */ _L11;
  kcg_bool /* _L24/ */ _L24;
  M_DUP /* _L23/ */ _L23;
  M_DUP /* _L19/ */ _L19;
  kcg_bool /* _L25/ */ _L25;
  M_DUP /* _L26/ */ _L26;
  M_DUP /* _L29/ */ _L29;
  kcg_bool /* _L28/ */ _L28;
  M_DUP /* _L27/ */ _L27;
  M_DUP /* _L32/ */ _L32;
  kcg_bool /* _L31/ */ _L31;
  M_DUP /* _L30/ */ _L30;
  kcg_bool /* _L33/ */ _L33;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
} outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal/ */
extern void Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Dif2Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Dif2Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2023-10-12T15:09:56
*************************************************************$ */

