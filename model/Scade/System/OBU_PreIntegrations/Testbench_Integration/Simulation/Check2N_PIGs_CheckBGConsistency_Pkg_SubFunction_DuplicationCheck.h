/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */
#ifndef _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_
#define _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_

#include "kcg_types.h"
#include "Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h"
#include "N_PIG2int_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* valid/ */ valid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L4=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#2)/ */ Context_N_PIG2int_2;
  outC_N_PIG2int_CheckBGConsistency_Pkg_SubFunction /* _L3=(CheckBGConsistency_Pkg::SubFunction::N_PIG2int#1)/ */ Context_N_PIG2int_1;
  outC_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L15=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#1)/ */ Context_Dif1Nominal_1;
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L17=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#1)/ */ Context_Dif2Nominal_1;
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L22=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#1)/ */ Context_Dif3Nominal_1;
  outC_Dif1Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L25=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif1Nominal#2)/ */ Context_Dif1Nominal_2;
  outC_Dif2Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L26=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif2Nominal#2)/ */ Context_Dif2Nominal_2;
  outC_Dif3Nominal_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck /* _L27=(CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Dif3Nominal#2)/ */ Context_Dif3Nominal_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  N_PIG /* _L1/ */ _L1;
  N_PIG /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_bool /* _L17/ */ _L17;
  M_DUP /* _L18/ */ _L18;
  M_DUP /* _L19/ */ _L19;
  M_DUP /* _L21/ */ _L21;
  M_DUP /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  M_DUP /* _L24/ */ _L24;
  M_DUP /* _L23/ */ _L23;
  kcg_bool /* _L27/ */ _L27;
  kcg_bool /* _L26/ */ _L26;
  kcg_bool /* _L25/ */ _L25;
  M_DUP /* _L29/ */ _L29;
  M_DUP /* _L28/ */ _L28;
  M_DUP /* _L31/ */ _L31;
  M_DUP /* _L30/ */ _L30;
  M_DUP /* _L33/ */ _L33;
  M_DUP /* _L32/ */ _L32;
  kcg_bool /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_bool /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
} outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::DuplicationCheck::Check2N_PIGs/ */
extern void Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  /* n_pig_1/ */
  N_PIG n_pig_1,
  /* m_dup_1/ */
  M_DUP m_dup_1,
  /* n_pig_2/ */
  N_PIG n_pig_2,
  /* m_dup_2/ */
  M_DUP m_dup_2,
  /* crcCheck_1/ */
  kcg_bool crcCheck_1,
  /* crcCheck_2/ */
  kcg_bool crcCheck_2,
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Check2N_PIGs_reset_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Check2N_PIGs_init_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck(
  outC_Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Check2N_PIGs_CheckBGConsistency_Pkg_SubFunction_DuplicationCheck.h
** Generation date: 2023-11-05T09:06:57
*************************************************************$ */

