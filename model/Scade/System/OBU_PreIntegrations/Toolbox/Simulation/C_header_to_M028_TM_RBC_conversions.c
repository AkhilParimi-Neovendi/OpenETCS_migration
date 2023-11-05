/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_header_to_M028_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_header_to_M028/ */
void C_header_to_M028_TM_RBC_conversions(
  /* header_in/ */
  M_TrackTrain_Radio_T_TM_radio_messages *header_in,
  outC_C_header_to_M028_TM_RBC_conversions *outC)
{
  kcg_int32 noname;
  kcg_int32 _1_noname;
  kcg_int32 _2_noname;
  kcg_int32 _3_noname;
  kcg_int32 _4_noname;

  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->_L1, header_in);
  outC->_L5 = outC->_L1.t_train;
  /* _L33=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_Int_to_T_TRAIN_2);
  outC->_L33 = outC->Context_CAST_Int_to_T_TRAIN_2.t_train;
  outC->_L4 = outC->_L1.l_message;
  /* _L32=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  outC->_L32 = outC->Context_CAST_Int_to_L_MESSAGE_1.l_message;
  outC->_L3 = outC->_L1.nid_message;
  /* _L31=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  outC->_L31 = outC->Context_CAST_Int_to_NID_MESSAGE_1.nid_message;
  outC->_L8 = outC->_L1.field3;
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L8,
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  outC->_L29 = outC->Context_CAST_Int_to_T_TRAIN_1.t_train;
  outC->_L12 = outC->_L1.field7;
  _4_noname = outC->_L12;
  outC->_L11 = outC->_L1.field6;
  _3_noname = outC->_L11;
  outC->_L10 = outC->_L1.field5;
  _2_noname = outC->_L10;
  outC->_L9 = outC->_L1.field4;
  _1_noname = outC->_L9;
  outC->_L13 = outC->_L1.field8;
  noname = outC->_L13;
  outC->_L7 = outC->_L1.field2;
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  outC->_L28 = outC->Context_CAST_Int_to_NID_LRBG_1.NID_LRBG_out;
  outC->_L6 = outC->_L1.field1;
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_Int_to_M_ACK_1);
  outC->_L27 = outC->Context_CAST_Int_to_M_ACK_1.m_ack;
  outC->_L2 = outC->_L1.valid;
  outC->_L26.valid = outC->_L2;
  outC->_L26.nid_message = outC->_L31;
  outC->_L26.l_message = outC->_L32;
  outC->_L26.t_train = outC->_L33;
  outC->_L26.m_ack = outC->_L27;
  outC->_L26.nid_lrbg = outC->_L28;
  outC->_L26.t_train_SH_request = outC->_L29;
  kcg_copy_M_028_T_TM_radio_messages(&outC->message_out, &outC->_L26);
}

#ifndef KCG_USER_DEFINED_INIT
void C_header_to_M028_init_TM_RBC_conversions(
  outC_C_header_to_M028_TM_RBC_conversions *outC)
{
  outC->_L31 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = M_ACK_No_acknowledgement_required;
  outC->_L26.valid = kcg_true;
  outC->_L26.nid_message = kcg_lit_int32(0);
  outC->_L26.l_message = kcg_lit_int32(0);
  outC->_L26.t_train = kcg_lit_int32(0);
  outC->_L26.m_ack = M_ACK_No_acknowledgement_required;
  outC->_L26.nid_lrbg = kcg_lit_int32(0);
  outC->_L26.t_train_SH_request = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L9 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.field1 = kcg_lit_int32(0);
  outC->_L1.field2 = kcg_lit_int32(0);
  outC->_L1.field3 = kcg_lit_int32(0);
  outC->_L1.field4 = kcg_lit_int32(0);
  outC->_L1.field5 = kcg_lit_int32(0);
  outC->_L1.field6 = kcg_lit_int32(0);
  outC->_L1.field7 = kcg_lit_int32(0);
  outC->_L1.field8 = kcg_lit_int32(0);
  outC->message_out.valid = kcg_true;
  outC->message_out.nid_message = kcg_lit_int32(0);
  outC->message_out.l_message = kcg_lit_int32(0);
  outC->message_out.t_train = kcg_lit_int32(0);
  outC->message_out.m_ack = M_ACK_No_acknowledgement_required;
  outC->message_out.nid_lrbg = kcg_lit_int32(0);
  outC->message_out.t_train_SH_request = kcg_lit_int32(0);
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_init_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L32=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L33=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_header_to_M028_reset_TM_RBC_conversions(
  outC_C_header_to_M028_TM_RBC_conversions *outC)
{
  /* _L27=(TM_conversions::CAST_Int_to_M_ACK#1)/ */
  CAST_Int_to_M_ACK_reset_TM_conversions(&outC->Context_CAST_Int_to_M_ACK_1);
  /* _L28=(TM_conversions::CAST_Int_to_NID_LRBG#1)/ */
  CAST_Int_to_NID_LRBG_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_LRBG_1);
  /* _L29=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L31=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L32=(TM_conversions::CAST_Int_to_L_MESSAGE#1)/ */
  CAST_Int_to_L_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_L_MESSAGE_1);
  /* _L33=(TM_conversions::CAST_Int_to_T_TRAIN#2)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_header_to_M028_TM_RBC_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

