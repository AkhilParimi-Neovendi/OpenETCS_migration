/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_AcknowledgementNew/ */
void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* nid_em/ */
  NID_EM nid_em,
  /* t_train/ */
  T_TRAIN t_train,
  /* trainProps/ */
  trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* receivedMsg16/ */
  kcg_bool receivedMsg16,
  /* cesAccepted/ */
  kcg_bool cesAccepted,
  /* updateEOA/ */
  kcg_bool updateEOA,
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC)
{
  outC->_L9 = kcg_true;
  outC->_L10 = kcg_lit_int64(147);
  outC->_L51 = kcg_lit_int64(0);
  outC->_L5 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&outC->_L11, trainProps);
  outC->_L12 = outC->_L11.nid_engine;
  outC->_L4 = nid_em;
  outC->_L38 = Q_EMERGENCYSTOP_Emergency_stop;
  outC->_L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
  outC->_L42 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L40 = updateEOA;
  /* _L39= */
  if (outC->_L40) {
    outC->_L39 = outC->_L42;
  }
  else {
    outC->_L39 = outC->_L43;
  }
  outC->_L36 = cesAccepted;
  /* _L35= */
  if (outC->_L36) {
    outC->_L35 = outC->_L39;
  }
  else {
    outC->_L35 = outC->_L38;
  }
  outC->_L13 = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  outC->_L34 = receivedMsg16;
  /* _L33= */
  if (outC->_L34) {
    outC->_L33 = outC->_L13;
  }
  else {
    outC->_L33 = outC->_L35;
  }
  outC->q_emergencystop = outC->_L33;
  outC->_L14 = outC->q_emergencystop;
  outC->_L50.valid = outC->_L9;
  outC->_L50.nid_message = outC->_L10;
  outC->_L50.l_message = outC->_L51;
  outC->_L50.t_train = outC->_L5;
  outC->_L50.nid_engine = outC->_L12;
  outC->_L50.nid_em = outC->_L4;
  outC->_L50.q_emergencystop = outC->_L14;
  kcg_copy_M_147_T_TM_radio_messages(&outC->m147, &outC->_L50);
}

#ifndef KCG_USER_DEFINED_INIT
void ES_Build_AcknowledgementNew_init_TA_EmergencyStop(
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC)
{
  outC->_L51 = kcg_lit_int64(0);
  outC->_L50.valid = kcg_true;
  outC->_L50.nid_message = kcg_lit_int64(0);
  outC->_L50.l_message = kcg_lit_int64(0);
  outC->_L50.t_train = kcg_lit_int64(0);
  outC->_L50.nid_engine = kcg_lit_int64(0);
  outC->_L50.nid_em = kcg_lit_int64(0);
  outC->_L50.q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L42 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L40 = kcg_true;
  outC->_L39 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L38 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L36 = kcg_true;
  outC->_L35 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L34 = kcg_true;
  outC->_L33 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L14 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L13 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L12 = kcg_lit_int64(0);
  outC->_L11.nid_engine = kcg_lit_int64(0);
  outC->_L11.nid_operational = kcg_lit_int64(0);
  outC->_L11.l_train = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.nominal = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.d_min = kcg_lit_int64(0);
  outC->_L11.d_baliseAntenna_2_frontend.d_max = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.nominal = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.d_min = kcg_lit_int64(0);
  outC->_L11.d_frontend_2_rearend.d_max = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L11.locationAccuracy_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.nominal = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.d_min = kcg_lit_int64(0);
  outC->_L11.centerDetectionAcc_DefaultValue.d_max = kcg_lit_int64(0);
  outC->_L10 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L5 = kcg_lit_int64(0);
  outC->_L4 = kcg_lit_int64(0);
  outC->q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->m147.valid = kcg_true;
  outC->m147.nid_message = kcg_lit_int64(0);
  outC->m147.l_message = kcg_lit_int64(0);
  outC->m147.t_train = kcg_lit_int64(0);
  outC->m147.nid_engine = kcg_lit_int64(0);
  outC->m147.nid_em = kcg_lit_int64(0);
  outC->m147.q_emergencystop =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Build_AcknowledgementNew_reset_TA_EmergencyStop(
  outC_ES_Build_AcknowledgementNew_TA_EmergencyStop *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ES_Build_AcknowledgementNew_TA_EmergencyStop.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

