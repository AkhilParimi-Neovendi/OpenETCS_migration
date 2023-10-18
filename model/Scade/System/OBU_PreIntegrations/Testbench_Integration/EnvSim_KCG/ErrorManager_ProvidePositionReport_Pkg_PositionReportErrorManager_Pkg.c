/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"

/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager/ */
void ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
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
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC)
{
  outC->_L40 = BG_LinkingConsistencyError;
  outC->_L24 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L20.present = outC->_L40;
  outC->_L20.errorType = outC->_L24;
  outC->_L41 = LinkedBG_MessageConsistencyError;
  outC->_L26 = M_ERROR_Linked_balise_group_message_consistency_erro;
  outC->_L15.present = outC->_L41;
  outC->_L15.errorType = outC->_L26;
  outC->_L42 = UnlinkedBG_MessageConsistencyError;
  outC->_L39 = M_ERROR_Unlinked_balise_group_message_consistency_error;
  outC->_L28.present = outC->_L42;
  outC->_L28.errorType = outC->_L39;
  outC->_L48 = RadioMessageConsistencyError;
  outC->_L25 = M_ERROR_Radio_message_consistency_error;
  outC->_L14.present = outC->_L48;
  outC->_L14.errorType = outC->_L25;
  outC->_L47 = RadioSequenceError;
  outC->_L18 = M_ERROR_Radio_sequence_error;
  outC->_L32.present = outC->_L47;
  outC->_L32.errorType = outC->_L18;
  outC->_L46 = RadioSafeRadioConnectionError;
  outC->_L16 = M_ERROR_Radio_safe_radio_connection_error;
  outC->_L38.present = outC->_L46;
  outC->_L38.errorType = outC->_L16;
  outC->_L45 = SafetyCriticalFailure;
  outC->_L30 = M_ERROR_Safety_critical_failure;
  outC->_L35.present = outC->_L45;
  outC->_L35.errorType = outC->_L30;
  outC->_L44 = DoubleLinkingError;
  outC->_L36 = M_ERROR_Double_linking_error;
  outC->_L29.present = outC->_L44;
  outC->_L29.errorType = outC->_L36;
  outC->_L43 = DoubleRepositioningError;
  outC->_L13 = M_ERROR_Double_repositioning_error;
  outC->_L34.present = outC->_L43;
  outC->_L34.errorType = outC->_L13;
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[0], &outC->_L20);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[1], &outC->_L15);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[2], &outC->_L28);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[3], &outC->_L14);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[4], &outC->_L32);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[5], &outC->_L38);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[6], &outC->_L35);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[7], &outC->_L29);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&outC->_L50[8], &outC->_L34);
  kcg_copy__33_array(&outC->errorVector, &outC->_L50);
}

#ifndef KCG_USER_DEFINED_INIT
void ErrorManager_init_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  for (idx = 0; idx < 9; idx++) {
    outC->_L50[idx].present = kcg_true;
    outC->_L50[idx].errorType = M_ERROR_Balise_group_linking_consistency_error;
  }
  outC->_L48 = kcg_true;
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_true;
  outC->_L44 = kcg_true;
  outC->_L43 = kcg_true;
  outC->_L42 = kcg_true;
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L13 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L14.present = kcg_true;
  outC->_L14.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L15.present = kcg_true;
  outC->_L15.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L16 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L18 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L20.present = kcg_true;
  outC->_L20.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L24 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L25 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L26 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L28.present = kcg_true;
  outC->_L28.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L29.present = kcg_true;
  outC->_L29.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L30 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L32.present = kcg_true;
  outC->_L32.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L34.present = kcg_true;
  outC->_L34.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L35.present = kcg_true;
  outC->_L35.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L36 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L38.present = kcg_true;
  outC->_L38.errorType = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L39 = M_ERROR_Balise_group_linking_consistency_error;
  for (idx1 = 0; idx1 < 9; idx1++) {
    outC->errorVector[idx1].present = kcg_true;
    outC->errorVector[idx1].errorType =
      M_ERROR_Balise_group_linking_consistency_error;
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ErrorManager_reset_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  outC_ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.c
** Generation date: 2023-10-13T16:12:10
*************************************************************$ */

