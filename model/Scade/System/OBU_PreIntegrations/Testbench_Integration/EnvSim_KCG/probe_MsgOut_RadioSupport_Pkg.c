/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "probe_MsgOut_RadioSupport_Pkg.h"

/* RadioSupport_Pkg::probe_MsgOut/ */
void probe_MsgOut_RadioSupport_Pkg(
  /* fromEVC/ */
  M_TrainTrack_Message_T_TM_radio_messages *fromEVC,
  /* show136/ */
  kcg_bool show136,
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  /* lastMSG/ */
  static NID_MESSAGE lastMSG_partial;
  /* lastTTrain/ */
  static T_TRAIN lastTTrain_partial;
  /* isRelevant/ */
  static kcg_bool isRelevant_partial;
  /* lastMSG/ */
  static NID_MESSAGE _1_lastMSG_partial;
  /* lastTTrain/ */
  static T_TRAIN _2_lastTTrain_partial;
  /* isRelevant/ */
  static kcg_bool _3_isRelevant_partial;
  /* lastTTrain/ */
  static T_TRAIN last_lastTTrain;
  /* lastMSG/ */
  static NID_MESSAGE last_lastMSG;

  last_lastTTrain = outC->lastTTrain;
  last_lastMSG = outC->lastMSG;
  kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(&outC->_L49, fromEVC);
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->_L48,
    &outC->_L49.Message);
  outC->_L50 = outC->_L48.valid;
  outC->isValid = outC->_L50;
  outC->IfBlock1_clock = outC->isValid;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L6_then_IfBlock1 = show136;
    outC->_L5_then_IfBlock1 = co136_Train_Position_Report_Id_Pkg;
    kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(
      &outC->_L2_then_IfBlock1,
      fromEVC);
    kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
      &outC->_L3_then_IfBlock1,
      &outC->_L2_then_IfBlock1.Message);
    outC->_L1_then_IfBlock1 = outC->_L3_then_IfBlock1.nid_message;
    outC->_L4_then_IfBlock1 = outC->_L1_then_IfBlock1 != outC->_L5_then_IfBlock1;
    outC->_L7_then_IfBlock1 = outC->_L4_then_IfBlock1 | outC->_L6_then_IfBlock1;
    isRelevant_partial = outC->_L7_then_IfBlock1;
    outC->_L14_then_IfBlock1 = isRelevant_partial;
    outC->_L12_then_IfBlock1 = last_lastTTrain;
    outC->_L11_then_IfBlock1 = outC->_L3_then_IfBlock1.t_train;
    /* IfBlock1:then:_L13= */
    if (outC->_L14_then_IfBlock1) {
      outC->_L13_then_IfBlock1 = outC->_L11_then_IfBlock1;
    }
    else {
      outC->_L13_then_IfBlock1 = outC->_L12_then_IfBlock1;
    }
    lastTTrain_partial = outC->_L13_then_IfBlock1;
    outC->_L10_then_IfBlock1 = isRelevant_partial;
    outC->_L9_then_IfBlock1 = last_lastMSG;
    /* IfBlock1:then:_L8= */
    if (outC->_L10_then_IfBlock1) {
      outC->_L8_then_IfBlock1 = outC->_L1_then_IfBlock1;
    }
    else {
      outC->_L8_then_IfBlock1 = outC->_L9_then_IfBlock1;
    }
    lastMSG_partial = outC->_L8_then_IfBlock1;
    outC->lastMSG = lastMSG_partial;
    outC->lastTTrain = lastTTrain_partial;
    outC->isRelevant = isRelevant_partial;
  }
  else {
    _3_isRelevant_partial = kcg_false;
    outC->_L2_else_IfBlock1 = last_lastMSG;
    _1_lastMSG_partial = outC->_L2_else_IfBlock1;
    outC->_L1_else_IfBlock1 = last_lastTTrain;
    _2_lastTTrain_partial = outC->_L1_else_IfBlock1;
    outC->lastMSG = _1_lastMSG_partial;
    outC->lastTTrain = _2_lastTTrain_partial;
    outC->isRelevant = _3_isRelevant_partial;
  }
  outC->_L47 = outC->lastTTrain;
  outC->outTTrain = outC->_L47;
  outC->_L46 = outC->lastMSG;
  outC->Msg_0ut = outC->_L46;
}

#ifndef KCG_USER_DEFINED_INIT
void probe_MsgOut_init_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L48.valid = kcg_true;
  outC->_L48.nid_message = kcg_lit_int32(0);
  outC->_L48.l_message = kcg_lit_int32(0);
  outC->_L48.t_train = kcg_lit_int32(0);
  outC->_L48.nid_engine = kcg_lit_int32(0);
  outC->_L48.field1 = kcg_lit_int32(0);
  outC->_L48.field2 = kcg_lit_int32(0);
  outC->_L48.field3 = kcg_lit_int32(0);
  outC->_L49.Message.valid = kcg_true;
  outC->_L49.Message.nid_message = kcg_lit_int32(0);
  outC->_L49.Message.l_message = kcg_lit_int32(0);
  outC->_L49.Message.t_train = kcg_lit_int32(0);
  outC->_L49.Message.nid_engine = kcg_lit_int32(0);
  outC->_L49.Message.field1 = kcg_lit_int32(0);
  outC->_L49.Message.field2 = kcg_lit_int32(0);
  outC->_L49.Message.field3 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L49.OptionalPackets[idx] = kcg_lit_int32(0);
  }
  outC->_L50 = kcg_true;
  outC->_L47 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->isRelevant = kcg_true;
  outC->isValid = kcg_true;
  outC->IfBlock1_clock = kcg_true;
  outC->_L1_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L2_else_IfBlock1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.valid = kcg_true;
  outC->_L3_then_IfBlock1.nid_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.l_message = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.t_train = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.nid_engine = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field1 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field2 = kcg_lit_int32(0);
  outC->_L3_then_IfBlock1.field3 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.valid = kcg_true;
  outC->_L2_then_IfBlock1.Message.nid_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.l_message = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.t_train = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.nid_engine = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.field1 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.field2 = kcg_lit_int32(0);
  outC->_L2_then_IfBlock1.Message.field3 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 50; idx1++) {
    outC->_L2_then_IfBlock1.OptionalPackets[idx1] = kcg_lit_int32(0);
  }
  outC->_L1_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L4_then_IfBlock1 = kcg_true;
  outC->_L5_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L6_then_IfBlock1 = kcg_true;
  outC->_L7_then_IfBlock1 = kcg_true;
  outC->_L9_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L8_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L10_then_IfBlock1 = kcg_true;
  outC->_L13_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L12_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L11_then_IfBlock1 = kcg_lit_int32(0);
  outC->_L14_then_IfBlock1 = kcg_true;
  outC->outTTrain = kcg_lit_int32(0);
  outC->Msg_0ut = kcg_lit_int32(0);
  outC->lastMSG = kcg_lit_int32(0);
  outC->lastTTrain = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void probe_MsgOut_reset_RadioSupport_Pkg(
  outC_probe_MsgOut_RadioSupport_Pkg *outC)
{
  outC->lastMSG = kcg_lit_int32(0);
  outC->lastTTrain = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** probe_MsgOut_RadioSupport_Pkg.c
** Generation date: 2023-10-13T16:12:11
*************************************************************$ */

