/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P004_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P004/ */
void C_compr_P004_TM_TrainToTrack(
  /* P004_in/ */
  P004_TrainTrack_int_TM_TrainToTrack *P004_in,
  outC_C_compr_P004_TM_TrainToTrack *outC)
{
  static kcg_bool noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool _1_noname_CAST_Int_to_NID_PACKET_1;
  static kcg_bool noname_CAST_Int_to_L_PACKET_1;
  static kcg_bool _2_noname_CAST_Int_to_L_PACKET_1;

  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  kcg_copy_P004_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P004_in);
  outC->_L2 = outC->_L1[0];
  /* _L73=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_TM_TrainToTrack(
    outC->_L2,
    kcg_lit_int32(4),
    &outC->Context_Decode_NID_PACKET_1);
  outC->_L73 = outC->Context_Decode_NID_PACKET_1.Valid;
  /* _L74=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L73,
    outC->_L2,
    &outC->Context_Filter_Variable_1);
  outC->_L74 = outC->Context_Filter_Variable_1.int_out;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = outC->_L74;
  outC->_L1_CAST_Int_to_NID_PACKET_1 =
    outC->nid_packet_int_CAST_Int_to_NID_PACKET_1;
  outC->_L4_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 <
    outC->_L5_CAST_Int_to_NID_PACKET_1;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(256);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1 >
    outC->_L3_CAST_Int_to_NID_PACKET_1;
  noname_CAST_Int_to_NID_PACKET_1 = outC->_L2_CAST_Int_to_NID_PACKET_1;
  _1_noname_CAST_Int_to_NID_PACKET_1 = outC->_L4_CAST_Int_to_NID_PACKET_1;
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = outC->_L1_CAST_Int_to_NID_PACKET_1;
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(8191);
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L3 = outC->_L1[1];
  /* _L75=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L73,
    outC->_L3,
    &outC->Context_Filter_Variable_2);
  outC->_L75 = outC->Context_Filter_Variable_2.int_out;
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = outC->_L75;
  outC->_L1_CAST_Int_to_L_PACKET_1 = outC->l_packet_int_CAST_Int_to_L_PACKET_1;
  outC->l_packet_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1;
  outC->_L9_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 >
    outC->_L13_CAST_Int_to_L_PACKET_1;
  outC->_L8_CAST_Int_to_L_PACKET_1 = outC->_L1_CAST_Int_to_L_PACKET_1 <
    outC->_L12_CAST_Int_to_L_PACKET_1;
  noname_CAST_Int_to_L_PACKET_1 = outC->_L8_CAST_Int_to_L_PACKET_1;
  _2_noname_CAST_Int_to_L_PACKET_1 = outC->_L9_CAST_Int_to_L_PACKET_1;
  outC->_L4 = outC->_L1[2];
  /* _L76=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L73,
    outC->_L4,
    &outC->Context_Filter_Variable_3);
  outC->_L76 = outC->Context_Filter_Variable_3.int_out;
  outC->_L69 = outC->nid_packet_CAST_Int_to_NID_PACKET_1;
  outC->_L70 = outC->l_packet_CAST_Int_to_L_PACKET_1;
  /* _L71=(TM_conversions::CAST_Int_to_M_ERROR#1)/ */
  CAST_Int_to_M_ERROR_TM_conversions(
    outC->_L76,
    &outC->Context_CAST_Int_to_M_ERROR_1);
  outC->_L71 = outC->Context_CAST_Int_to_M_ERROR_1.m_error;
  outC->_L72.valid = outC->_L73;
  outC->_L72.nid_packet = outC->_L69;
  outC->_L72.l_packet = outC->_L70;
  outC->_L72.m_error = outC->_L71;
  kcg_copy_P004_TM_TrainToTrack(&outC->P004_out, &outC->_L72);
}

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P004_init_TM_TrainToTrack(outC_C_compr_P004_TM_TrainToTrack *outC)
{
  static kcg_size idx;

  outC->_L76 = kcg_lit_int32(0);
  outC->_L75 = kcg_lit_int32(0);
  outC->_L74 = kcg_lit_int32(0);
  outC->_L73 = kcg_true;
  outC->_L72.valid = kcg_true;
  outC->_L72.nid_packet = kcg_lit_int32(0);
  outC->_L72.l_packet = kcg_lit_int32(0);
  outC->_L72.m_error = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L71 = M_ERROR_Balise_group_linking_consistency_error;
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  for (idx = 0; idx < 3; idx++) {
    outC->_L1[idx] = kcg_lit_int32(0);
  }
  outC->_L1_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L9_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L8_CAST_Int_to_L_PACKET_1 = kcg_true;
  outC->_L12_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L13_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_int_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->l_packet_CAST_Int_to_L_PACKET_1 = kcg_lit_int32(0);
  outC->_L1_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L5_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L4_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->_L3_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->_L2_CAST_Int_to_NID_PACKET_1 = kcg_true;
  outC->nid_packet_int_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->nid_packet_CAST_Int_to_NID_PACKET_1 = kcg_lit_int32(0);
  outC->P004_out.valid = kcg_true;
  outC->P004_out.nid_packet = kcg_lit_int32(0);
  outC->P004_out.l_packet = kcg_lit_int32(0);
  outC->P004_out.m_error = M_ERROR_Balise_group_linking_consistency_error;
  /* _L71=(TM_conversions::CAST_Int_to_M_ERROR#1)/ */
  CAST_Int_to_M_ERROR_init_TM_conversions(&outC->Context_CAST_Int_to_M_ERROR_1);
  /* _L76=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L75=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L74=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L73=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P004_reset_TM_TrainToTrack(outC_C_compr_P004_TM_TrainToTrack *outC)
{
  /* _L71=(TM_conversions::CAST_Int_to_M_ERROR#1)/ */
  CAST_Int_to_M_ERROR_reset_TM_conversions(
    &outC->Context_CAST_Int_to_M_ERROR_1);
  /* _L76=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L75=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L74=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L73=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P004_TM_TrainToTrack.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

