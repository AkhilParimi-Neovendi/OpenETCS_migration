/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr/ */
void extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
  /* i/ */
  kcg_int64 i,
  /* acc_in/ */
  kcg_int64 acc_in,
  /* message/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *message,
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC)
{
  outC->_L3 = acc_in;
  outC->_L2 = i;
  outC->_L87 = nid_meta_p001_TM_radio_messages;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, message);
  if ((kcg_lit_int64(0) <= outC->_L2) & (outC->_L2 < kcg_lit_int64(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      &outC->_L1[outC->_L2]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L8,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  outC->_L83 = outC->_L8.OptionalPackets[0];
  outC->_L85 = outC->_L83 == outC->_L87;
  outC->_L86 = nid_meta_p000_TM_radio_messages;
  outC->_L84 = outC->_L86 == outC->_L83;
  outC->_L88 = outC->_L84 | outC->_L85;
  outC->_L81 = outC->_L8.Message.nid_message;
  outC->_L91 = kcg_lit_int64(136);
  outC->_L90 = outC->_L91 == outC->_L81;
  outC->_L9 = outC->_L8.Message.valid;
  outC->_L82 = outC->_L9 & outC->_L90;
  outC->_L89 = outC->_L82 & outC->_L88;
  /* _L93= */
  if (outC->_L89) {
    outC->_L93 = outC->_L2;
  }
  else {
    outC->_L93 = outC->_L3;
  }
  outC->_L92 = !outC->_L89;
  outC->acc_out = outC->_L93;
  outC->cont = outC->_L92;
}

#ifndef KCG_USER_DEFINED_INIT
void extractPositionReportFromBus_itr_init_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;

  outC->_L93 = kcg_lit_int64(0);
  outC->_L92 = kcg_true;
  outC->_L91 = kcg_lit_int64(0);
  outC->_L90 = kcg_true;
  outC->_L89 = kcg_true;
  outC->_L88 = kcg_true;
  outC->_L87 = kcg_lit_int64(0);
  outC->_L86 = kcg_lit_int64(0);
  outC->_L85 = kcg_true;
  outC->_L84 = kcg_true;
  outC->_L83 = kcg_lit_int64(0);
  outC->_L82 = kcg_true;
  outC->_L81 = kcg_lit_int64(0);
  outC->_L9 = kcg_true;
  outC->_L8.Message.valid = kcg_true;
  outC->_L8.Message.nid_message = kcg_lit_int64(0);
  outC->_L8.Message.l_message = kcg_lit_int64(0);
  outC->_L8.Message.t_train = kcg_lit_int64(0);
  outC->_L8.Message.nid_engine = kcg_lit_int64(0);
  outC->_L8.Message.field1 = kcg_lit_int64(0);
  outC->_L8.Message.field2 = kcg_lit_int64(0);
  outC->_L8.Message.field3 = kcg_lit_int64(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L8.OptionalPackets[idx] = kcg_lit_int64(0);
  }
  outC->_L3 = kcg_lit_int64(0);
  outC->_L2 = kcg_lit_int64(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1[idx2].Message.valid = kcg_true;
    outC->_L1[idx2].Message.nid_message = kcg_lit_int64(0);
    outC->_L1[idx2].Message.l_message = kcg_lit_int64(0);
    outC->_L1[idx2].Message.t_train = kcg_lit_int64(0);
    outC->_L1[idx2].Message.nid_engine = kcg_lit_int64(0);
    outC->_L1[idx2].Message.field1 = kcg_lit_int64(0);
    outC->_L1[idx2].Message.field2 = kcg_lit_int64(0);
    outC->_L1[idx2].Message.field3 = kcg_lit_int64(0);
    for (idx1 = 0; idx1 < 50; idx1++) {
      outC->_L1[idx2].OptionalPackets[idx1] = kcg_lit_int64(0);
    }
  }
  outC->acc_out = kcg_lit_int64(0);
  outC->cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void extractPositionReportFromBus_itr_reset_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders.c
** Generation date: 2023-10-12T15:10:02
*************************************************************$ */

