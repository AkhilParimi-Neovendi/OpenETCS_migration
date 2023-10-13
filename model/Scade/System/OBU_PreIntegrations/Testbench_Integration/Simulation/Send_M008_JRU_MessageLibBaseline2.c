/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_M008_JRU_MessageLibBaseline2.h"

/* MessageLibBaseline2::Send_M008_JRU/ */
void Send_M008_JRU_MessageLibBaseline2(
  /* M008/ */
  M_008_int_T_TM_radio_messages *M008,
  outC_Send_M008_JRU_MessageLibBaseline2 *outC)
{
  kcg_copy_M_008_int_T_TM_radio_messages(&outC->_L1, M008);
  /* _L2=(TM_RBC_conversions::C_M008_int_to_header#1)/ */
  C_M008_int_to_header_TM_RBC_conversions(
    &outC->_L1,
    &outC->Context_C_M008_int_to_header_1);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
    &outC->_L2,
    &outC->Context_C_M008_int_to_header_1.Message_Header_Out);
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&outC->Message_Out, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void Send_M008_JRU_init_MessageLibBaseline2(
  outC_Send_M008_JRU_MessageLibBaseline2 *outC)
{
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
  outC->_L1.t_train_received = kcg_lit_int64(0);
  outC->Message_Out.valid = kcg_true;
  outC->Message_Out.nid_message = kcg_lit_int64(0);
  outC->Message_Out.l_message = kcg_lit_int64(0);
  outC->Message_Out.t_train = kcg_lit_int64(0);
  outC->Message_Out.field1 = kcg_lit_int64(0);
  outC->Message_Out.field2 = kcg_lit_int64(0);
  outC->Message_Out.field3 = kcg_lit_int64(0);
  outC->Message_Out.field4 = kcg_lit_int64(0);
  outC->Message_Out.field5 = kcg_lit_int64(0);
  outC->Message_Out.field6 = kcg_lit_int64(0);
  outC->Message_Out.field7 = kcg_lit_int64(0);
  outC->Message_Out.field8 = kcg_lit_int64(0);
  /* _L2=(TM_RBC_conversions::C_M008_int_to_header#1)/ */
  C_M008_int_to_header_init_TM_RBC_conversions(
    &outC->Context_C_M008_int_to_header_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Send_M008_JRU_reset_MessageLibBaseline2(
  outC_Send_M008_JRU_MessageLibBaseline2 *outC)
{
  /* _L2=(TM_RBC_conversions::C_M008_int_to_header#1)/ */
  C_M008_int_to_header_reset_TM_RBC_conversions(
    &outC->Context_C_M008_int_to_header_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Send_M008_JRU_MessageLibBaseline2.c
** Generation date: 2023-10-12T15:10:03
*************************************************************$ */

