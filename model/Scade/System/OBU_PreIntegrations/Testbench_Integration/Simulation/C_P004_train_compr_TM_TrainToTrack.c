/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/test/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation/config.txt
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P004_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P004_train_compr/ */
void C_P004_train_compr_TM_TrainToTrack(
  /* P004_in/ */
  P004_TM_TrainToTrack *P004_in,
  outC_C_P004_train_compr_TM_TrainToTrack *outC)
{
  kcg_copy_P004_TM_TrainToTrack(&outC->_L1, P004_in);
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = outC->_L1.nid_packet;
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L69 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  /* _L89=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_TM_TrainToTrack(
    outC->_L2,
    outC->_L69,
    &outC->Context_Encode_NID_PACKET_1);
  outC->_L89 = outC->Context_Encode_NID_PACKET_1.meta;
  outC->_L5 = outC->_L1.m_error;
  /* _L71=(TM_conversions::CAST_M_ERROR_to_int#1)/ */
  CAST_M_ERROR_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_M_ERROR_to_int_1);
  outC->_L71 = outC->Context_CAST_M_ERROR_to_int_1.m_error_int;
  outC->_L4 = outC->_L1.l_packet;
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L70 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  outC->_L68[0] = outC->_L89;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(&outC->P004_int, &outC->_L68);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P004_train_compr_init_TM_TrainToTrack(
  outC_C_P004_train_compr_TM_TrainToTrack *outC)
{
  static kcg_size idx;
  static kcg_size idx1;

  outC->_L89 = kcg_lit_int32(0);
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L68[idx] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.m_error = M_ERROR_Balise_group_linking_consistency_error;
  for (idx1 = 0; idx1 < 3; idx1++) {
    outC->P004_int[idx1] = kcg_lit_int32(0);
  }
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L71=(TM_conversions::CAST_M_ERROR_to_int#1)/ */
  CAST_M_ERROR_to_int_init_TM_conversions(&outC->Context_CAST_M_ERROR_to_int_1);
  /* _L89=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P004_train_compr_reset_TM_TrainToTrack(
  outC_C_P004_train_compr_TM_TrainToTrack *outC)
{
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L71=(TM_conversions::CAST_M_ERROR_to_int#1)/ */
  CAST_M_ERROR_to_int_reset_TM_conversions(
    &outC->Context_CAST_M_ERROR_to_int_1);
  /* _L89=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P004_train_compr_TM_TrainToTrack.c
** Generation date: 2023-11-05T09:07:01
*************************************************************$ */

