/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendAcknowledgementRBC_trainData_pkg.h"

/* trainData_pkg::sendAcknowledgementRBC/ */
void sendAcknowledgementRBC_trainData_pkg(
  /* EVC_t_train/ */
  T_TRAIN EVC_t_train,
  /* nidEngine/ */
  NID_ENGINE nidEngine,
  /* RBC_timeStamp/ */
  T_TRAIN RBC_timeStamp,
  /* actualStatus/ */
  trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* MessageBus/ */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* inVersion/ */
  M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  static kcg_int64 noname;

  outC->_L42 = kcg_false;
  outC->_L39 = kcg_true;
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L43, actualStatus);
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L40, &outC->_L43);
  if (kcg_true) {
    outC->_L40.validatedbyRBC = outC->_L39;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(&outC->_L41, &outC->_L40);
  if (kcg_true) {
    outC->_L41.waitingForRBCResponse = outC->_L42;
  }
  kcg_copy_trainDataStatus_T_trainData_Types_pkg(
    &outC->updatedStatus,
    &outC->_L41);
  outC->_L36 = EVC_t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->_L23, MessageBus);
  outC->_L27 = nidEngine;
  outC->_L37 = EVC_t_train;
  outC->_L34 = RBC_timeStamp;
  /* _L32=(trainData_pkg::headerMsg146_ng#2)/ */
  headerMsg146_ng_trainData_pkg(
    outC->_L27,
    outC->_L37,
    outC->_L34,
    &outC->Context_headerMsg146_ng_2);
  kcg_copy_M_146_T_TM_radio_messages(
    &outC->_L32,
    &outC->Context_headerMsg146_ng_2.header);
  outC->_L29 = inVersion;
  /* _L24=(TM_radio_messages::Send_M146#1)/ */
  Send_M146_TM_radio_messages(
    outC->_L36,
    &outC->_L23,
    &outC->_L32,
    outC->_L29,
    &outC->Context_Send_M146_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->_L24,
    &outC->Context_Send_M146_1.MessageBus_out);
  outC->_L38 = outC->Context_Send_M146_1.t_train_assigned;
  noname = outC->_L38;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &outC->outMessageBus,
    &outC->_L24);
}

#ifndef KCG_USER_DEFINED_INIT
void sendAcknowledgementRBC_init_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  static kcg_size idx;
  static kcg_size idx1;
  static kcg_size idx2;
  static kcg_size idx3;
  static kcg_size idx4;
  static kcg_size idx5;

  outC->_L39 = kcg_true;
  outC->_L40.valid = kcg_true;
  outC->_L40.validatedByDriver = kcg_true;
  outC->_L40.RBCsystemVersionOnboard = kcg_true;
  outC->_L40.validatedbyRBC = kcg_true;
  outC->_L40.waitingForRBCResponse = kcg_true;
  outC->_L40.driverIsModificationTrainData = kcg_true;
  outC->_L40.timeStampValidateToRBC = kcg_lit_int64(0);
  outC->_L41.valid = kcg_true;
  outC->_L41.validatedByDriver = kcg_true;
  outC->_L41.RBCsystemVersionOnboard = kcg_true;
  outC->_L41.validatedbyRBC = kcg_true;
  outC->_L41.waitingForRBCResponse = kcg_true;
  outC->_L41.driverIsModificationTrainData = kcg_true;
  outC->_L41.timeStampValidateToRBC = kcg_lit_int64(0);
  outC->_L42 = kcg_true;
  outC->_L43.valid = kcg_true;
  outC->_L43.validatedByDriver = kcg_true;
  outC->_L43.RBCsystemVersionOnboard = kcg_true;
  outC->_L43.validatedbyRBC = kcg_true;
  outC->_L43.waitingForRBCResponse = kcg_true;
  outC->_L43.driverIsModificationTrainData = kcg_true;
  outC->_L43.timeStampValidateToRBC = kcg_lit_int64(0);
  outC->_L38 = kcg_lit_int64(0);
  outC->_L37 = kcg_lit_int64(0);
  outC->_L36 = kcg_lit_int64(0);
  outC->_L34 = kcg_lit_int64(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L23[idx1].Message.valid = kcg_true;
    outC->_L23[idx1].Message.nid_message = kcg_lit_int64(0);
    outC->_L23[idx1].Message.l_message = kcg_lit_int64(0);
    outC->_L23[idx1].Message.t_train = kcg_lit_int64(0);
    outC->_L23[idx1].Message.nid_engine = kcg_lit_int64(0);
    outC->_L23[idx1].Message.field1 = kcg_lit_int64(0);
    outC->_L23[idx1].Message.field2 = kcg_lit_int64(0);
    outC->_L23[idx1].Message.field3 = kcg_lit_int64(0);
    for (idx = 0; idx < 50; idx++) {
      outC->_L23[idx1].OptionalPackets[idx] = kcg_lit_int64(0);
    }
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L24[idx3].Message.valid = kcg_true;
    outC->_L24[idx3].Message.nid_message = kcg_lit_int64(0);
    outC->_L24[idx3].Message.l_message = kcg_lit_int64(0);
    outC->_L24[idx3].Message.t_train = kcg_lit_int64(0);
    outC->_L24[idx3].Message.nid_engine = kcg_lit_int64(0);
    outC->_L24[idx3].Message.field1 = kcg_lit_int64(0);
    outC->_L24[idx3].Message.field2 = kcg_lit_int64(0);
    outC->_L24[idx3].Message.field3 = kcg_lit_int64(0);
    for (idx2 = 0; idx2 < 50; idx2++) {
      outC->_L24[idx3].OptionalPackets[idx2] = kcg_lit_int64(0);
    }
  }
  outC->_L27 = kcg_lit_int64(0);
  outC->_L29 =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->_L32.valid = kcg_true;
  outC->_L32.nid_message = kcg_lit_int64(0);
  outC->_L32.l_message = kcg_lit_int64(0);
  outC->_L32.t_train = kcg_lit_int64(0);
  outC->_L32.nid_engine = kcg_lit_int64(0);
  outC->_L32.t_train_req = kcg_lit_int64(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->outMessageBus[idx5].Message.valid = kcg_true;
    outC->outMessageBus[idx5].Message.nid_message = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.l_message = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.t_train = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.nid_engine = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.field1 = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.field2 = kcg_lit_int64(0);
    outC->outMessageBus[idx5].Message.field3 = kcg_lit_int64(0);
    for (idx4 = 0; idx4 < 50; idx4++) {
      outC->outMessageBus[idx5].OptionalPackets[idx4] = kcg_lit_int64(0);
    }
  }
  outC->updatedStatus.valid = kcg_true;
  outC->updatedStatus.validatedByDriver = kcg_true;
  outC->updatedStatus.RBCsystemVersionOnboard = kcg_true;
  outC->updatedStatus.validatedbyRBC = kcg_true;
  outC->updatedStatus.waitingForRBCResponse = kcg_true;
  outC->updatedStatus.driverIsModificationTrainData = kcg_true;
  outC->updatedStatus.timeStampValidateToRBC = kcg_lit_int64(0);
  /* _L24=(TM_radio_messages::Send_M146#1)/ */
  Send_M146_init_TM_radio_messages(&outC->Context_Send_M146_1);
  /* _L32=(trainData_pkg::headerMsg146_ng#2)/ */
  headerMsg146_ng_init_trainData_pkg(&outC->Context_headerMsg146_ng_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  /* _L24=(TM_radio_messages::Send_M146#1)/ */
  Send_M146_reset_TM_radio_messages(&outC->Context_Send_M146_1);
  /* _L32=(trainData_pkg::headerMsg146_ng#2)/ */
  headerMsg146_ng_reset_trainData_pkg(&outC->Context_headerMsg146_ng_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */


void kcg_save_SV_sendAcknowledgementRBC_trainData_pkg(
  SV_sendAcknowledgementRBC_trainData_pkg *SV,
  outC_sendAcknowledgementRBC_trainData_pkg *outC)
{
  kcg_save_SV_Send_M146_TM_radio_messages(
    &SV->Context_Send_M146_1,
    &outC->Context_Send_M146_1);
}

void kcg_load_SV_sendAcknowledgementRBC_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC,
  SV_sendAcknowledgementRBC_trainData_pkg *SV)
{
  kcg_load_SV_Send_M146_TM_radio_messages(
    &outC->Context_Send_M146_1,
    &SV->Context_Send_M146_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** sendAcknowledgementRBC_trainData_pkg.c
** Generation date: 2023-10-12T15:10:01
*************************************************************$ */

