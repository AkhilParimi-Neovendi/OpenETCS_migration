/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg_H_
#define _validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* execute/ */ execute;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_MODE /* _L2/ */ _L2;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg /* _L1/ */ _L1;
  Q_SLEEPSESSION /* _L3/ */ _L3;
  Q_SLEEPSESSION /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  M_MODE /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_bool /* _L11/ */ _L11;
  kcg_bool /* _L12/ */ _L12;
} outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::validate_q_sleepsession_v2/ */
extern void validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg(
  /* p42_SessionManagement/ */
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *p42_SessionManagement,
  /* mode/ */
  M_MODE mode,
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void validate_q_sleepsession_v2_reset_MoRC_Pck_Subfunc_Pkg(
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void validate_q_sleepsession_v2_init_MoRC_Pck_Subfunc_Pkg(
  outC_validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** validate_q_sleepsession_v2_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

