/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M129_to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M129_to_header/ */
void C_M129_to_header_TM_RBC_conversions(
  /* Message_Data_in/ */
  M_129_T_TM_radio_messages *Message_Data_in,
  outC_C_M129_to_header_TM_RBC_conversions *outC)
{
  kcg_copy_M_129_T_TM_radio_messages(&outC->_L1, Message_Data_in);
  outC->_L7 = outC->_L1.nid_engine;
  /* _L23=(TM_conversions::CAST_NID_ENGINE_to_int#1)/ */
  CAST_NID_ENGINE_to_int_TM_conversions(
    outC->_L7,
    &outC->Context_CAST_NID_ENGINE_to_int_1);
  outC->_L23 = outC->Context_CAST_NID_ENGINE_to_int_1.nid_ctraction_int;
  outC->_L5 = outC->_L1.l_message;
  /* _L22=(TM_conversions::CAST_L_MESSAGE_to_int#1)/ */
  CAST_L_MESSAGE_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_L_MESSAGE_to_int_1);
  outC->_L22 = outC->Context_CAST_L_MESSAGE_to_int_1.l_message_int;
  outC->_L4 = outC->_L1.nid_message;
  /* _L21=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  outC->_L21 = outC->Context_CAST_NID_MESSAGE_to_int_1.nid_message_int;
  outC->_L6 = outC->_L1.t_train;
  /* _L20=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_TM_conversions(
    outC->_L6,
    &outC->Context_CAST_T_TRAIN_to_int_1);
  outC->_L20 = outC->Context_CAST_T_TRAIN_to_int_1.t_train_int;
  outC->_L19 = kcg_lit_int32(0);
  outC->_L3 = outC->_L1.valid;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_message = outC->_L21;
  outC->_L2.l_message = outC->_L22;
  outC->_L2.t_train = outC->_L20;
  outC->_L2.nid_engine = outC->_L23;
  outC->_L2.field1 = outC->_L19;
  outC->_L2.field2 = outC->_L19;
  outC->_L2.field3 = outC->_L19;
  kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(
    &outC->Message_Header_Out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_M129_to_header_init_TM_RBC_conversions(
  outC_C_M129_to_header_TM_RBC_conversions *outC)
{
  outC->_L20 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.nid_engine = kcg_lit_int32(0);
  outC->_L2.field1 = kcg_lit_int32(0);
  outC->_L2.field2 = kcg_lit_int32(0);
  outC->_L2.field3 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.nid_engine = kcg_lit_int32(0);
  outC->Message_Header_Out.valid = kcg_true;
  outC->Message_Header_Out.nid_message = kcg_lit_int32(0);
  outC->Message_Header_Out.l_message = kcg_lit_int32(0);
  outC->Message_Header_Out.t_train = kcg_lit_int32(0);
  outC->Message_Header_Out.nid_engine = kcg_lit_int32(0);
  outC->Message_Header_Out.field1 = kcg_lit_int32(0);
  outC->Message_Header_Out.field2 = kcg_lit_int32(0);
  outC->Message_Header_Out.field3 = kcg_lit_int32(0);
  /* _L20=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_init_TM_conversions(&outC->Context_CAST_T_TRAIN_to_int_1);
  /* _L21=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  /* _L22=(TM_conversions::CAST_L_MESSAGE_to_int#1)/ */
  CAST_L_MESSAGE_to_int_init_TM_conversions(
    &outC->Context_CAST_L_MESSAGE_to_int_1);
  /* _L23=(TM_conversions::CAST_NID_ENGINE_to_int#1)/ */
  CAST_NID_ENGINE_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_ENGINE_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_M129_to_header_reset_TM_RBC_conversions(
  outC_C_M129_to_header_TM_RBC_conversions *outC)
{
  /* _L20=(TM_conversions::CAST_T_TRAIN_to_int#1)/ */
  CAST_T_TRAIN_to_int_reset_TM_conversions(
    &outC->Context_CAST_T_TRAIN_to_int_1);
  /* _L21=(TM_conversions::CAST_NID_MESSAGE_to_int#1)/ */
  CAST_NID_MESSAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_MESSAGE_to_int_1);
  /* _L22=(TM_conversions::CAST_L_MESSAGE_to_int#1)/ */
  CAST_L_MESSAGE_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_MESSAGE_to_int_1);
  /* _L23=(TM_conversions::CAST_NID_ENGINE_to_int#1)/ */
  CAST_NID_ENGINE_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_ENGINE_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_M129_to_header_TM_RBC_conversions.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

