/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_M024_int_to_header_TM_RBC_conversions.h"

/* TM_RBC_conversions::C_M024_int_to_header/ */
void C_M024_int_to_header_TM_RBC_conversions(
  /* Message_Data_in/ */
  M_024_int_T_TM_radio_messages *Message_Data_in,
  outC_C_M024_int_to_header_TM_RBC_conversions *outC)
{
  outC->_L19 = kcg_lit_int64(0);
  kcg_copy_M_024_int_T_TM_radio_messages(&outC->_L1, Message_Data_in);
  outC->_L3 = outC->_L1.valid;
  outC->_L4 = outC->_L1.nid_message;
  outC->_L5 = outC->_L1.l_message;
  outC->_L6 = outC->_L1.t_train;
  outC->_L7 = outC->_L1.m_ack;
  outC->_L8 = outC->_L1.nid_lrbg;
  outC->_L2.valid = outC->_L3;
  outC->_L2.nid_message = outC->_L4;
  outC->_L2.l_message = outC->_L5;
  outC->_L2.t_train = outC->_L6;
  outC->_L2.field1 = outC->_L7;
  outC->_L2.field2 = outC->_L8;
  outC->_L2.field3 = outC->_L19;
  outC->_L2.field4 = outC->_L19;
  outC->_L2.field5 = outC->_L19;
  outC->_L2.field6 = outC->_L19;
  outC->_L2.field7 = outC->_L19;
  outC->_L2.field8 = outC->_L19;
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->Message_Header_Out,
    &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void C_M024_int_to_header_init_TM_RBC_conversions(
  outC_C_M024_int_to_header_TM_RBC_conversions *outC)
{
  outC->_L19 = kcg_lit_int64(0);
  outC->_L3 = kcg_true;
  outC->_L4 = kcg_lit_int64(0);
  outC->_L5 = kcg_lit_int64(0);
  outC->_L6 = kcg_lit_int64(0);
  outC->_L7 = kcg_lit_int64(0);
  outC->_L8 = kcg_lit_int64(0);
  outC->_L2.valid = kcg_true;
  outC->_L2.nid_message = kcg_lit_int64(0);
  outC->_L2.l_message = kcg_lit_int64(0);
  outC->_L2.t_train = kcg_lit_int64(0);
  outC->_L2.field1 = kcg_lit_int64(0);
  outC->_L2.field2 = kcg_lit_int64(0);
  outC->_L2.field3 = kcg_lit_int64(0);
  outC->_L2.field4 = kcg_lit_int64(0);
  outC->_L2.field5 = kcg_lit_int64(0);
  outC->_L2.field6 = kcg_lit_int64(0);
  outC->_L2.field7 = kcg_lit_int64(0);
  outC->_L2.field8 = kcg_lit_int64(0);
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.l_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.m_ack = kcg_lit_int64(0);
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
  outC->Message_Header_Out.valid = kcg_true;
  outC->Message_Header_Out.nid_message = kcg_lit_int64(0);
  outC->Message_Header_Out.l_message = kcg_lit_int64(0);
  outC->Message_Header_Out.t_train = kcg_lit_int64(0);
  outC->Message_Header_Out.field1 = kcg_lit_int64(0);
  outC->Message_Header_Out.field2 = kcg_lit_int64(0);
  outC->Message_Header_Out.field3 = kcg_lit_int64(0);
  outC->Message_Header_Out.field4 = kcg_lit_int64(0);
  outC->Message_Header_Out.field5 = kcg_lit_int64(0);
  outC->Message_Header_Out.field6 = kcg_lit_int64(0);
  outC->Message_Header_Out.field7 = kcg_lit_int64(0);
  outC->Message_Header_Out.field8 = kcg_lit_int64(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_M024_int_to_header_reset_TM_RBC_conversions(
  outC_C_M024_int_to_header_TM_RBC_conversions *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_M024_int_to_header_TM_RBC_conversions.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

