/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.h"

/* RBC_Model_Pkg::TrainTrackMsgConversion::ConvertHeader/ */
void ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion(
  /* newHeader/ */
  M_TrainTrack_MessageHd_T_TM_radio_messages *newHeader,
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* nid_textmessage/ */
  NID_TEXTMESSAGE nid_textmessage_partial;
  /* nid_textmessage/ */
  NID_TEXTMESSAGE _1_nid_textmessage_partial;
  /* nid_em/ */
  NID_EM nid_em_partial;
  /* q_emergencystop/ */
  Q_EMERGENCYSTOP q_emergencystop_partial;
  /* nid_em/ */
  NID_EM _2_nid_em_partial;
  /* q_emergencystop/ */
  Q_EMERGENCYSTOP _3_q_emergencystop_partial;
  /* xt_train/ */
  T_TRAIN xt_train_partial;
  /* xt_train/ */
  T_TRAIN _4_xt_train_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON q_marqstreason_partial;
  /* q_marqstreason/ */
  Q_MARQSTREASON _5_q_marqstreason_partial;
  kcg_int32 noname;
  kcg_int32 _6_noname;

  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(&outC->_L1, newHeader);
  outC->_L21 = outC->_L1.field3;
  outC->field3 = outC->_L21;
  outC->_L40 = outC->field3;
  _6_noname = outC->_L40;
  outC->_L27 = outC->_L1.nid_message;
  outC->nid_message = outC->_L27;
  outC->Decode_NID_TEXTMESSAGE_clock = outC->nid_message == kcg_lit_int32(158);
  if (outC->Decode_NID_TEXTMESSAGE_clock) {
  }
  else {
    outC->_L1_else_Decode_NID_TEXTMESSAGE =
      cDEFAULT_NID_TEXTMESSAGE_RBC_Model_Pkg_TrainTrackMsgConversion;
    _1_nid_textmessage_partial = outC->_L1_else_Decode_NID_TEXTMESSAGE;
  }
  outC->_L23 = outC->_L1.field1;
  outC->field1 = outC->_L23;
  /* Decode_NID_TEXTMESSAGE: */
  if (outC->Decode_NID_TEXTMESSAGE_clock) {
    outC->_L2_then_Decode_NID_TEXTMESSAGE = outC->field1;
    /* Decode_NID_TEXTMESSAGE:then:_L1=(TM_conversions::CAST_Int_to_NID_TEXTMESSAGE#2)/ */
    CAST_Int_to_NID_TEXTMESSAGE_TM_conversions(
      outC->_L2_then_Decode_NID_TEXTMESSAGE,
      &outC->Context_CAST_Int_to_NID_TEXTMESSAGE_2);
    outC->_L1_then_Decode_NID_TEXTMESSAGE =
      outC->Context_CAST_Int_to_NID_TEXTMESSAGE_2.nid_textmessage;
    nid_textmessage_partial = outC->_L1_then_Decode_NID_TEXTMESSAGE;
    outC->nid_textmessage = nid_textmessage_partial;
  }
  else {
    outC->nid_textmessage = _1_nid_textmessage_partial;
  }
  outC->_L39 = outC->nid_textmessage;
  outC->Decode_Emergency_Stop_clock = outC->nid_message == kcg_lit_int32(147);
  if (outC->Decode_Emergency_Stop_clock) {
  }
  else {
    outC->_L2_else_Decode_Emergency_Stop =
      cDEFAULT_EMERGENCYSTOP_RBC_Model_Pkg_TrainTrackMsgConversion;
    _3_q_emergencystop_partial = outC->_L2_else_Decode_Emergency_Stop;
  }
  outC->_L22 = outC->_L1.field2;
  outC->field2 = outC->_L22;
  /* Decode_Emergency_Stop: */
  if (outC->Decode_Emergency_Stop_clock) {
    outC->_L4_then_Decode_Emergency_Stop = outC->field2;
    /* Decode_Emergency_Stop:then:_L3=(TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP#2)/ */
    CAST_Int_to_Q_EMERGENCYSTOP_TM_conversions(
      outC->_L4_then_Decode_Emergency_Stop,
      &outC->Context_CAST_Int_to_Q_EMERGENCYSTOP_2);
    outC->_L3_then_Decode_Emergency_Stop =
      outC->Context_CAST_Int_to_Q_EMERGENCYSTOP_2.q_emergencystop;
    q_emergencystop_partial = outC->_L3_then_Decode_Emergency_Stop;
    outC->q_emergencystop = q_emergencystop_partial;
  }
  else {
    outC->q_emergencystop = _3_q_emergencystop_partial;
  }
  outC->_L36 = outC->q_emergencystop;
  /* Decode_Emergency_Stop: */
  if (outC->Decode_Emergency_Stop_clock) {
    outC->_L1_then_Decode_Emergency_Stop = outC->field1;
    /* Decode_Emergency_Stop:then:_L2=(TM_conversions::CAST_Int_to_NID_EM#2)/ */
    CAST_Int_to_NID_EM_TM_conversions(
      outC->_L1_then_Decode_Emergency_Stop,
      &outC->Context_CAST_Int_to_NID_EM_2);
    outC->_L2_then_Decode_Emergency_Stop =
      outC->Context_CAST_Int_to_NID_EM_2.nid_em;
    nid_em_partial = outC->_L2_then_Decode_Emergency_Stop;
    outC->nid_em = nid_em_partial;
  }
  else {
    outC->_L1_else_Decode_Emergency_Stop =
      cDEFAULT_NID_EM_RBC_Model_Pkg_TrainTrackMsgConversion;
    _2_nid_em_partial = outC->_L1_else_Decode_Emergency_Stop;
    outC->nid_em = _2_nid_em_partial;
  }
  outC->_L34 = outC->nid_em;
  outC->Decode_xT_TRAIN_clock = (outC->nid_message == kcg_lit_int32(137)) |
    (outC->nid_message == kcg_lit_int32(138)) | (outC->nid_message ==
      kcg_lit_int32(146));
  /* Decode_xT_TRAIN: */
  if (outC->Decode_xT_TRAIN_clock) {
    outC->_L2_then_Decode_xT_TRAIN = outC->field1;
    /* Decode_xT_TRAIN:then:_L1=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
    CAST_Int_to_T_TRAIN_TM_conversions(
      outC->_L2_then_Decode_xT_TRAIN,
      &outC->Context_CAST_Int_to_T_TRAIN_3);
    outC->_L1_then_Decode_xT_TRAIN = outC->Context_CAST_Int_to_T_TRAIN_3.t_train;
    xt_train_partial = outC->_L1_then_Decode_xT_TRAIN;
    outC->xt_train = xt_train_partial;
  }
  else {
    outC->_L1_else_Decode_xT_TRAIN =
      cDEFAULT_T_TRAIN_RBC_Model_Pkg_TrainTrackMsgConversion;
    _4_xt_train_partial = outC->_L1_else_Decode_xT_TRAIN;
    outC->xt_train = _4_xt_train_partial;
  }
  outC->_L32 = outC->xt_train;
  outC->Decode_Q_MARQSTREASON_clock = outC->nid_message == kcg_lit_int32(132);
  /* Decode_Q_MARQSTREASON: */
  if (outC->Decode_Q_MARQSTREASON_clock) {
    outC->_L2_then_Decode_Q_MARQSTREASON = outC->field1;
    /* Decode_Q_MARQSTREASON:then:_L1=(TM_conversions::CAST_Int_to_Q_MARQSTREASON#2)/ */
    CAST_Int_to_Q_MARQSTREASON_TM_conversions(
      outC->_L2_then_Decode_Q_MARQSTREASON,
      &outC->Context_CAST_Int_to_Q_MARQSTREASON_2);
    outC->_L1_then_Decode_Q_MARQSTREASON =
      outC->Context_CAST_Int_to_Q_MARQSTREASON_2.q_marqstreason;
    q_marqstreason_partial = outC->_L1_then_Decode_Q_MARQSTREASON;
    outC->q_marqstreason = q_marqstreason_partial;
  }
  else {
    outC->_L1_else_Decode_Q_MARQSTREASON =
      cDEFAULT_Q_MARQSTREASON_RBC_Model_Pkg_TrainTrackMsgConversion;
    _5_q_marqstreason_partial = outC->_L1_else_Decode_Q_MARQSTREASON;
    outC->q_marqstreason = _5_q_marqstreason_partial;
  }
  outC->_L31 = outC->q_marqstreason;
  outC->_L24 = outC->_L1.nid_engine;
  /* _L29=(TM_conversions::CAST_Int_to_NID_ENGINE#1)/ */
  CAST_Int_to_NID_ENGINE_TM_conversions(
    outC->_L24,
    &outC->Context_CAST_Int_to_NID_ENGINE_1);
  outC->_L29 = outC->Context_CAST_Int_to_NID_ENGINE_1.nid_engine;
  outC->_L26 = outC->_L1.l_message;
  noname = outC->_L26;
  outC->_L28 = outC->_L1.valid;
  outC->_L25 = outC->_L1.t_train;
  /* _L17=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_TM_conversions(
    outC->_L25,
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  outC->_L17 = outC->Context_CAST_Int_to_T_TRAIN_1.t_train;
  /* _L16=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_TM_conversions(
    outC->_L27,
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  outC->_L16 = outC->Context_CAST_Int_to_NID_MESSAGE_1.nid_message;
  outC->_L10.present = outC->_L28;
  outC->_L10.nid_message = outC->_L16;
  outC->_L10.t_train = outC->_L17;
  outC->_L10.nid_engine = outC->_L29;
  outC->_L10.xQ_MARQSTREASON = outC->_L31;
  outC->_L10.xT_TRAIN = outC->_L32;
  outC->_L10.xNID_EM = outC->_L34;
  outC->_L10.xQ_EMERGENCYSTOP = outC->_L36;
  outC->_L10.xNID_TEXTMESSAGE = outC->_L39;
  outC->present = outC->_L28;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &outC->oldHeader,
    &outC->_L10);
}

#ifndef KCG_USER_DEFINED_INIT
void ConvertHeader_init_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  outC->_L40 = kcg_lit_int32(0);
  outC->_L39 = kcg_lit_int32(0);
  outC->_L36 =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L34 = kcg_lit_int32(0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L31 = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L29 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L26 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L28 = kcg_true;
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L10.present = kcg_true;
  outC->_L10.nid_message = kcg_lit_int32(0);
  outC->_L10.t_train = kcg_lit_int32(0);
  outC->_L10.nid_engine = kcg_lit_int32(0);
  outC->_L10.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L10.xT_TRAIN = kcg_lit_int32(0);
  outC->_L10.xNID_EM = kcg_lit_int32(0);
  outC->_L10.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L10.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->_L1.field1 = kcg_lit_int32(0);
  outC->_L1.field2 = kcg_lit_int32(0);
  outC->_L1.field3 = kcg_lit_int32(0);
  outC->nid_textmessage = kcg_lit_int32(0);
  outC->q_emergencystop =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->nid_em = kcg_lit_int32(0);
  outC->xt_train = kcg_lit_int32(0);
  outC->nid_message = kcg_lit_int32(0);
  outC->q_marqstreason = Q_MARQSTREASON_Start_selected_by_driver;
  outC->field3 = kcg_lit_int32(0);
  outC->field2 = kcg_lit_int32(0);
  outC->field1 = kcg_lit_int32(0);
  outC->Decode_Q_MARQSTREASON_clock = kcg_true;
  outC->Decode_xT_TRAIN_clock = kcg_true;
  outC->Decode_Emergency_Stop_clock = kcg_true;
  outC->Decode_NID_TEXTMESSAGE_clock = kcg_true;
  outC->_L1_else_Decode_Q_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L1_then_Decode_Q_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->_L2_then_Decode_Q_MARQSTREASON = kcg_lit_int32(0);
  outC->_L1_else_Decode_xT_TRAIN = kcg_lit_int32(0);
  outC->_L1_then_Decode_xT_TRAIN = kcg_lit_int32(0);
  outC->_L2_then_Decode_xT_TRAIN = kcg_lit_int32(0);
  outC->_L1_else_Decode_Emergency_Stop = kcg_lit_int32(0);
  outC->_L2_else_Decode_Emergency_Stop =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L1_then_Decode_Emergency_Stop = kcg_lit_int32(0);
  outC->_L2_then_Decode_Emergency_Stop = kcg_lit_int32(0);
  outC->_L3_then_Decode_Emergency_Stop =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->_L4_then_Decode_Emergency_Stop = kcg_lit_int32(0);
  outC->_L1_else_Decode_NID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L1_then_Decode_NID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->_L2_then_Decode_NID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->oldHeader.present = kcg_true;
  outC->oldHeader.nid_message = kcg_lit_int32(0);
  outC->oldHeader.t_train = kcg_lit_int32(0);
  outC->oldHeader.nid_engine = kcg_lit_int32(0);
  outC->oldHeader.xQ_MARQSTREASON = Q_MARQSTREASON_Start_selected_by_driver;
  outC->oldHeader.xT_TRAIN = kcg_lit_int32(0);
  outC->oldHeader.xNID_EM = kcg_lit_int32(0);
  outC->oldHeader.xQ_EMERGENCYSTOP =
    _12_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->oldHeader.xNID_TEXTMESSAGE = kcg_lit_int32(0);
  outC->present = kcg_true;
  /* _L16=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L17=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L29=(TM_conversions::CAST_Int_to_NID_ENGINE#1)/ */
  CAST_Int_to_NID_ENGINE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_ENGINE_1);
  /* Decode_Q_MARQSTREASON:then:_L1=(TM_conversions::CAST_Int_to_Q_MARQSTREASON#2)/ */
  CAST_Int_to_Q_MARQSTREASON_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_MARQSTREASON_2);
  /* Decode_xT_TRAIN:then:_L1=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
  CAST_Int_to_T_TRAIN_init_TM_conversions(&outC->Context_CAST_Int_to_T_TRAIN_3);
  /* Decode_Emergency_Stop:then:_L2=(TM_conversions::CAST_Int_to_NID_EM#2)/ */
  CAST_Int_to_NID_EM_init_TM_conversions(&outC->Context_CAST_Int_to_NID_EM_2);
  /* Decode_Emergency_Stop:then:_L3=(TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP#2)/ */
  CAST_Int_to_Q_EMERGENCYSTOP_init_TM_conversions(
    &outC->Context_CAST_Int_to_Q_EMERGENCYSTOP_2);
  /* Decode_NID_TEXTMESSAGE:then:_L1=(TM_conversions::CAST_Int_to_NID_TEXTMESSAGE#2)/ */
  CAST_Int_to_NID_TEXTMESSAGE_init_TM_conversions(
    &outC->Context_CAST_Int_to_NID_TEXTMESSAGE_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ConvertHeader_reset_RBC_Model_Pkg_TrainTrackMsgConversion(
  outC_ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion *outC)
{
  /* _L16=(TM_conversions::CAST_Int_to_NID_MESSAGE#1)/ */
  CAST_Int_to_NID_MESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_MESSAGE_1);
  /* _L17=(TM_conversions::CAST_Int_to_T_TRAIN#1)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_1);
  /* _L29=(TM_conversions::CAST_Int_to_NID_ENGINE#1)/ */
  CAST_Int_to_NID_ENGINE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_ENGINE_1);
  /* Decode_Q_MARQSTREASON:then:_L1=(TM_conversions::CAST_Int_to_Q_MARQSTREASON#2)/ */
  CAST_Int_to_Q_MARQSTREASON_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_MARQSTREASON_2);
  /* Decode_xT_TRAIN:then:_L1=(TM_conversions::CAST_Int_to_T_TRAIN#3)/ */
  CAST_Int_to_T_TRAIN_reset_TM_conversions(
    &outC->Context_CAST_Int_to_T_TRAIN_3);
  /* Decode_Emergency_Stop:then:_L2=(TM_conversions::CAST_Int_to_NID_EM#2)/ */
  CAST_Int_to_NID_EM_reset_TM_conversions(&outC->Context_CAST_Int_to_NID_EM_2);
  /* Decode_Emergency_Stop:then:_L3=(TM_conversions::CAST_Int_to_Q_EMERGENCYSTOP#2)/ */
  CAST_Int_to_Q_EMERGENCYSTOP_reset_TM_conversions(
    &outC->Context_CAST_Int_to_Q_EMERGENCYSTOP_2);
  /* Decode_NID_TEXTMESSAGE:then:_L1=(TM_conversions::CAST_Int_to_NID_TEXTMESSAGE#2)/ */
  CAST_Int_to_NID_TEXTMESSAGE_reset_TM_conversions(
    &outC->Context_CAST_Int_to_NID_TEXTMESSAGE_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** ConvertHeader_RBC_Model_Pkg_TrainTrackMsgConversion.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

