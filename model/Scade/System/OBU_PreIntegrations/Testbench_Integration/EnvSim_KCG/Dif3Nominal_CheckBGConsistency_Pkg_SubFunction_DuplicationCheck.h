/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

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
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
} outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal/ */
extern void Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Dif3Nominal_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Dif3Nominal_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

