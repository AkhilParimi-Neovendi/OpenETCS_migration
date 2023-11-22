/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/ScadeMigration/model/Scade/System/OBU_PreIntegrations/openETCS_EVC/Simulation/config.txt
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P003_train_compr/ */
void C_P003_train_compr_TM_TrainToTrack(
  /* P003_in/ */
  P003_TM_TrainToTrack *P003_in,
  outC_C_P003_train_compr_TM_TrainToTrack *outC)
{
  kcg_copy_P003_TM_TrainToTrack(&outC->_L1, P003_in);
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = outC->_L1.nid_packet;
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L3,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L69 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_TM_TrainToTrack(
    outC->_L2,
    outC->_L69,
    &outC->Context_Encode_NID_PACKET_1);
  outC->_L91 = outC->Context_Encode_NID_PACKET_1.meta;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(
    &outC->_L6,
    &outC->_L1.nid_radio);
  /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
  C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
    &outC->_L6,
    &outC->Context_C_P003_flatten_sections_1);
  kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(
    &outC->_L89,
    &outC->Context_C_P003_flatten_sections_1.Flattened);
  outC->_L4 = outC->_L1.l_packet;
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L4,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L70 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  outC->_L5 = outC->_L1.n_iter;
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_TM_conversions(
    outC->_L5,
    &outC->Context_CAST_N_ITER_to_int_1);
  outC->_L71 = outC->Context_CAST_N_ITER_to_int_1.n_iter_int;
  outC->_L68[0] = outC->_L91;
  outC->_L68[1] = outC->_L70;
  outC->_L68[2] = outC->_L71;
  kcg_copy_array_int32_3(&outC->_L90[0], &outC->_L68);
  kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&outC->_L90[3], &outC->_L89);
  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(&outC->P003_int, &outC->_L90);
}

#ifndef KCG_USER_DEFINED_INIT
void C_P003_train_compr_init_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L91 = kcg_lit_int32(0);
  for (idx = 0; idx < 8; idx++) {
    outC->_L90[idx] = kcg_lit_int32(0);
  }
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L89[idx1] = kcg_lit_int32(0);
  }
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L68[idx2] = kcg_lit_int32(0);
  }
  outC->_L2 = kcg_true;
  outC->_L3 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L5 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L6[idx3] = kcg_lit_int32(0);
  }
  outC->_L1.valid = kcg_true;
  outC->_L1.nid_packet = kcg_lit_int32(0);
  outC->_L1.l_packet = kcg_lit_int32(0);
  outC->_L1.n_iter = kcg_lit_int32(0);
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L1.nid_radio[idx4] = kcg_lit_int32(0);
  }
  for (idx5 = 0; idx5 < 8; idx5++) {
    outC->P003_int[idx5] = kcg_lit_int32(0);
  }
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_init_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
  C_P003_flatten_sections_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P003_flatten_sections_1);
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_P003_train_compr_reset_TM_TrainToTrack(
  outC_C_P003_train_compr_TM_TrainToTrack *outC)
{
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_reset_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
  C_P003_flatten_sections_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P003_flatten_sections_1);
  /* _L91=(TM_TrainToTrack::Encode_NID_PACKET#1)/ */
  Encode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Encode_NID_PACKET_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_P003_train_compr_TM_TrainToTrack.c
** Generation date: 2023-11-06T13:54:31
*************************************************************$ */

