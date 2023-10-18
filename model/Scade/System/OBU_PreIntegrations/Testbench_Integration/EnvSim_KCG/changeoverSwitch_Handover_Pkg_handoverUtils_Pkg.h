/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */
#ifndef _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_
#define _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "FallingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* handingOverMobile_is_mobile_1/ */ handingOverMobile_is_mobile_1;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  _106_SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FallingEdge_digital /* _L2=(digital::FallingEdge#1)/ */ Context_FallingEdge_1;
  /* ------------------ clocks of observable data -------------------- */
  _106_SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* SM1:mobile_1:_L1/ */ _L1_mobile_1_SM1;
  kcg_bool /* SM1:mobile_2:_L1/ */ _L1_mobile_2_SM1;
  _106_SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  _107_SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  _107_SSM_TR_SM1 /* SM1: */ SM1_fired;
  kcg_bool /* toogle/ */ toogle;
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  abilityToHandleCommunicationSessions_Handover_Pkg /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  abilityToHandleCommunicationSessions_Handover_Pkg /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
} outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch/ */
extern void changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
  /* handoverInprogress/ */
  kcg_bool handoverInprogress,
  /* sessionManagementAbility/ */
  abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(
  outC_changeoverSwitch_Handover_Pkg_handoverUtils_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _changeoverSwitch_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** changeoverSwitch_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2023-10-13T16:12:09
*************************************************************$ */

