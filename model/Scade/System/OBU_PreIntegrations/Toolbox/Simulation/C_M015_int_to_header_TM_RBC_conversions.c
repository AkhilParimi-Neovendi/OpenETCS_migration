/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M015_int_to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M015_int_to_header/ */
void C_M015_int_to_header_TM_RBC_conversions(
  /* Message_Data_in/ */
  M_015_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M015_int_to_header_TM_RBC_conversions *outC)
{
  outC->_L19 = kcg_lit_int32(0);
  kcg_copy_M_015_int_T_TM_radio_messages(&outC->_L1, Message_Data_in);
  outC->_L3 = outC->_L1.valid;
  outC->_L4 = outC->_L1.nid_message;
  outC->_L5 = outC->_L1.l_message;
  outC->_L6 = outC->_L1.t_train;
  outC->_L7 = outC->_L1.m_ack;
  outC->_L8 = outC->_L1.nid_lrbg;
  outC->_L24 = outC->_L1.nid_em;
  outC->_L29 = outC->_L1.q_scale;
  outC->_L28 = outC->_L1.d_ref;
  outC->_L27 = outC->_L1.q_dir;
  outC->_L26 = outC->_L1.d_emergencystop;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_message = outC->_L4;
  outC->_L2.l_message = outC->_L5;
  outC->_L2.t_train = outC->_L6;
  outC->_L2.field1 = outC->_L7;
  outC->_L2.field2 = outC->_L8;
  outC->_L2.field3 = outC->_L24;
  outC->_L2.field4 = outC->_L29;
  outC->_L2.field5 = outC->_L28;
  outC->_L2.field6 = outC->_L27;
  outC->_L2.field7 = outC->_L26;
  outC->_L2.field8 = outC->_L19;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_Header_Out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_M015_int_to_header_init_TM_RBC_conversions(
  outC_C_M015_int_to_header_TM_RBC_conversions *outC)
{
  outC->_L26 = kcg_lit_int32(0);
  outC->_L27 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L29 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_lit_int32(0);
  outC->_L8 = kcg_lit_int32(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int32(0);
  outC->_L2.l_message = kcg_lit_int32(0);
  outC->_L2.t_train = kcg_lit_int32(0);
  outC->_L2.field1 = kcg_lit_int32(0);
  outC->_L2.field2 = kcg_lit_int32(0);
  outC->_L2.field3 = kcg_lit_int32(0);
  outC->_L2.field4 = kcg_lit_int32(0);
  outC->_L2.field5 = kcg_lit_int32(0);
  outC->_L2.field6 = kcg_lit_int32(0);
  outC->_L2.field7 = kcg_lit_int32(0);
  outC->_L2.field8 = kcg_lit_int32(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int32(0);
  outC->_L1.l_message = kcg_lit_int32(0);
  outC->_L1.t_train = kcg_lit_int32(0);
  outC->_L1.m_ack = kcg_lit_int32(0);
  outC->_L1.nid_lrbg = kcg_lit_int32(0);
  outC->_L1.nid_em = kcg_lit_int32(0);
  outC->_L1.q_scale = kcg_lit_int32(0);
  outC->_L1.d_ref = kcg_lit_int32(0);
  outC->_L1.q_dir = kcg_lit_int32(0);
  outC->_L1.d_emergencystop = kcg_lit_int32(0);
  outC->Message_Header_Out.valid = kcg_true;
  outC->Message_Header_Out.nid_message = kcg_lit_int32(0);
  outC->Message_Header_Out.l_message = kcg_lit_int32(0);
  outC->Message_Header_Out.t_train = kcg_lit_int32(0);
  outC->Message_Header_Out.field1 = kcg_lit_int32(0);
  outC->Message_Header_Out.field2 = kcg_lit_int32(0);
  outC->Message_Header_Out.field3 = kcg_lit_int32(0);
  outC->Message_Header_Out.field4 = kcg_lit_int32(0);
  outC->Message_Header_Out.field5 = kcg_lit_int32(0);
  outC->Message_Header_Out.field6 = kcg_lit_int32(0);
  outC->Message_Header_Out.field7 = kcg_lit_int32(0);
  outC->Message_Header_Out.field8 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_M015_int_to_header_reset_TM_RBC_conversions(
  outC_C_M015_int_to_header_TM_RBC_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_M015_int_to_header_TM_RBC_conversions.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

