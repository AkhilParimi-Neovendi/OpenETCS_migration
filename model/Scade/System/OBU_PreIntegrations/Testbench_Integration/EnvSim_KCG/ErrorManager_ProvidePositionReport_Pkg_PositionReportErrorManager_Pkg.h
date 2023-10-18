/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */
#ifndef _ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg_H_
#define _ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  _33_array /* errorVector/ */ errorVector;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  M_ERROR /* _L39/ */ _L39;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L38/ */ _L38;
  M_ERROR /* _L36/ */ _L36;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L35/ */ _L35;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L34/ */ _L34;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L32/ */ _L32;
  M_ERROR /* _L30/ */ _L30;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L29/ */ _L29;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L28/ */ _L28;
  M_ERROR /* _L26/ */ _L26;
  M_ERROR /* _L25/ */ _L25;
  M_ERROR /* _L24/ */ _L24;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L20/ */ _L20;
  M_ERROR /* _L18/ */ _L18;
  M_ERROR /* _L16/ */ _L16;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L15/ */ _L15;
  ErrorMessage_T_ProvidePositionReport_Pkg /* _L14/ */ _L14;
  M_ERROR /* _L13/ */ _L13;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_bool /* _L42/ */ _L42;
  kcg_bool /* _L43/ */ _L43;
  kcg_bool /* _L44/ */ _L44;
  kcg_bool /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_bool /* _L48/ */ _L48;
  _33_array /* _L50/ */ _L50;
} outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager/ */
extern void ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  /* BG_LinkingConsistencyError/ */
  kcg_bool BG_LinkingConsistencyError,
  /* LinkedBG_MessageConsistencyError/ */
  kcg_bool LinkedBG_MessageConsistencyError,
  /* UnlinkedBG_MessageConsistencyError/ */
  kcg_bool UnlinkedBG_MessageConsistencyError,
  /* RadioMessageConsistencyError/ */
  kcg_bool RadioMessageConsistencyError,
  /* RadioSequenceError/ */
  kcg_bool RadioSequenceError,
  /* RadioSafeRadioConnectionError/ */
  kcg_bool RadioSafeRadioConnectionError,
  /* SafetyCriticalFailure/ */
  kcg_bool SafetyCriticalFailure,
  /* DoubleLinkingError/ */
  kcg_bool DoubleLinkingError,
  /* DoubleRepositioningError/ */
  kcg_bool DoubleRepositioningError,
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ErrorManager_reset_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ErrorManager_init_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h
** Generation date: 2023-10-13T16:12:08
*************************************************************$ */

