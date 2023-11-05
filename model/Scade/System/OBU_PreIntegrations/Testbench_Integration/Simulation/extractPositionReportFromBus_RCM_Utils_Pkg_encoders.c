/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"

/* RCM_Utils_Pkg::encoders::extractPositionReportFromBus/ */
void extractPositionReportFromBus_RCM_Utils_Pkg_encoders(
  /* messageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus,
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_size idx;
  static kcg_int32 acc;
  static kcg_size idx1;
  static kcg_int32 noname;

  outC->_L5 = kcg_lit_int32(-1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L1, messageBus);
  /* _L6/ */
  for (idx = 0; idx < 5; idx++) {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->_L6[idx],
      &outC->_L1);
  }
  outC->_L3 = kcg_true;
  outC->_L4 = outC->_L5;
  /* _L2= */
  if (outC->_L3) {
    /* _L2= */
    for (idx1 = 0; idx1 < 5; idx1++) {
      acc = outC->_L4;
      /* _L2=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr#1)/ */
      extractPositionReportFromBus_itr_RCM_Utils_Pkg_encoders(
        /* _L2= */(kcg_int32) idx1,
        acc,
        &outC->_L6[idx1],
        &outC->Context_extractPositionReportFromBus_itr_1[idx1]);
      outC->_L4 = outC->Context_extractPositionReportFromBus_itr_1[idx1].acc_out;
      outC->_L2 = /* _L2= */(kcg_int32) (idx1 + 1);
      /* _L2= */
      if (!outC->Context_extractPositionReportFromBus_itr_1[idx1].cont) {
        break;
      }
    }
  }
  else {
    outC->_L2 = kcg_lit_int32(0);
  }
  if ((kcg_lit_int32(0) <= outC->_L4) & (outC->_L4 < kcg_lit_int32(5))) {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L9,
      &outC->_L1[outC->_L4]);
  }
  else {
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L9,
      (M_TrainTrack_Message_T_TM_radio_messages *)
        &DEFAULT_TrainToTrackMessage_TM_radio_messages);
  }
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = outC->_L4 >= outC->_L8;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
    &outC->positionReport,
    &outC->_L9);
  noname = outC->_L2;
  outC->found = outC->_L7;
}

#ifndef KCG_USER_DEFINED_INIT
void extractPositionReportFromBus_init_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;
  static kcg_size idx6;
  static kcg_size idx7;

  outC->_L9.Message.valid = kcg_true;
  outC->_L9.Message.nid_message = kcg_lit_int32(0);
  outC->_L9.Message.l_message = kcg_lit_int32(0);
  outC->_L9.Message.t_train = kcg_lit_int32(0);
  outC->_L9.Message.nid_engine = kcg_lit_int32(0);
  outC->_L9.Message.field1 = kcg_lit_int32(0);
  outC->_L9.Message.field2 = kcg_lit_int32(0);
  outC->_L9.Message.field3 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L9.OptionalPackets[idx1] = kcg_lit_int32(0);
  }
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  for (idx4 = 0; idx4 < 5; idx4++) {
    for (idx3 = 0; idx3 < 5; idx3++) {
      outC->_L6[idx4][idx3].Message.valid = kcg_true;
      outC->_L6[idx4][idx3].Message.nid_message = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.l_message = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.t_train = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.nid_engine = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.field1 = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.field2 = kcg_lit_int32(0);
      outC->_L6[idx4][idx3].Message.field3 = kcg_lit_int32(0);
      for (idx2 = 0; idx2 < 50; idx2++) {
        outC->_L6[idx4][idx3].OptionalPackets[idx2] = kcg_lit_int32(0);
      }
    }
  }
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_lit_int32(0);
  for (idx6 = 0; idx6 < 5; idx6++) {
    outC->_L1[idx6].Message.valid = kcg_true;
    outC->_L1[idx6].Message.nid_message = kcg_lit_int32(0);
    outC->_L1[idx6].Message.l_message = kcg_lit_int32(0);
    outC->_L1[idx6].Message.t_train = kcg_lit_int32(0);
    outC->_L1[idx6].Message.nid_engine = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field1 = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field2 = kcg_lit_int32(0);
    outC->_L1[idx6].Message.field3 = kcg_lit_int32(0);
    for (idx5 = 0; idx5 < 50; idx5++) {
      outC->_L1[idx6].OptionalPackets[idx5] = kcg_lit_int32(0);
    }
  }
  outC->positionReport.Message.valid = kcg_true;
  outC->positionReport.Message.nid_message = kcg_lit_int32(0);
  outC->positionReport.Message.l_message = kcg_lit_int32(0);
  outC->positionReport.Message.t_train = kcg_lit_int32(0);
  outC->positionReport.Message.nid_engine = kcg_lit_int32(0);
  outC->positionReport.Message.field1 = kcg_lit_int32(0);
  outC->positionReport.Message.field2 = kcg_lit_int32(0);
  outC->positionReport.Message.field3 = kcg_lit_int32(0);
  for (idx7 = 0; idx7 < 50; idx7++) {
    outC->positionReport.OptionalPackets[idx7] = kcg_lit_int32(0);
  }
  outC->found = kcg_true;
  for (idx = 0; idx < 5; idx++) {
    /* _L2=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr#1)/ */
    extractPositionReportFromBus_itr_init_RCM_Utils_Pkg_encoders(
      &outC->Context_extractPositionReportFromBus_itr_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void extractPositionReportFromBus_reset_RCM_Utils_Pkg_encoders(
  outC_extractPositionReportFromBus_RCM_Utils_Pkg_encoders *outC)
{
  static kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L2=(RCM_Utils_Pkg::encoders::extractPositionReportFromBus_itr#1)/ */
    extractPositionReportFromBus_itr_reset_RCM_Utils_Pkg_encoders(
      &outC->Context_extractPositionReportFromBus_itr_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** extractPositionReportFromBus_RCM_Utils_Pkg_encoders.c
** Generation date: 2023-11-05T09:07:02
*************************************************************$ */

