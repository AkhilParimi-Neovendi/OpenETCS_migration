/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Toolbox/Simulation/config.txt
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P003_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P003/ */
void C_compr_P003_TM_TrainToTrack(
  /* P003_int/ */
  P003_TrainTrack_int_TM_TrainToTrack *P003_int,
  outC_C_compr_P003_TM_TrainToTrack *outC)
{
  P003_nid_radio_list_int_t_TM_TrainToTrack tmp;
  P003_nid_radio_list_int_t_TM_TrainToTrack op_call;

  kcg_copy_P003_TrainTrack_int_TM_TrainToTrack(&outC->_L1, P003_int);
  kcg_copy_array_int32_3(&outC->_L94, (array_int32_3 *) &outC->_L1[0]);
  outC->_L98 = outC->_L94[0];
  /* _L105=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_TM_TrainToTrack(
    outC->_L98,
    kcg_lit_int32(3),
    &outC->Context_Decode_NID_PACKET_1);
  outC->_L105 = outC->Context_Decode_NID_PACKET_1.Valid;
  outC->every = outC->_L105;
  kcg_copy_array_int32_5(&outC->_L104, (array_int32_5 *) &outC->_L1[3]);
  if (outC->every) {
    /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
    C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
      &outC->_L104,
      &outC->Context_C_P003_flatten_sections_1);
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(
      &op_call,
      &outC->Context_C_P003_flatten_sections_1.Flattened);
  }
  outC->_L100 = outC->_L94[2];
  /* _L108=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L105,
    outC->_L100,
    &outC->Context_Filter_Variable_3);
  outC->_L108 = outC->Context_Filter_Variable_3.int_out;
  outC->_L99 = outC->_L94[1];
  /* _L107=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L105,
    outC->_L99,
    &outC->Context_Filter_Variable_2);
  outC->_L107 = outC->Context_Filter_Variable_2.int_out;
  /* _L106=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_TM_TrainToTrack(
    outC->_L105,
    outC->_L98,
    &outC->Context_Filter_Variable_1);
  outC->_L106 = outC->Context_Filter_Variable_1.int_out;
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_TM_conversions(
    outC->_L106,
    &outC->Context_CAST_NID_PACKET_to_int_1);
  outC->_L69 = outC->Context_CAST_NID_PACKET_to_int_1.nid_packet_int;
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_TM_conversions(
    outC->_L107,
    &outC->Context_CAST_L_PACKET_to_int_1);
  outC->_L70 = outC->Context_CAST_L_PACKET_to_int_1.l_packet_int;
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_TM_conversions(
    outC->_L108,
    &outC->Context_CAST_N_ITER_to_int_1);
  outC->_L71 = outC->Context_CAST_N_ITER_to_int_1.n_iter_int;
  if (outC->every) {
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&outC->_L89, &op_call);
  }
  else {
    /* _L89= */
    if (outC->init) {
      kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(
        &tmp,
        (P003_nid_radio_list_int_t_TM_TrainToTrack *)
          &DEFAULT_P003_nid_radio_list_TM_TrainToTrack);
    }
    else {
      kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&tmp, &outC->_L89);
    }
    kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack(&outC->_L89, &tmp);
  }
  outC->_L103.valid = outC->_L105;
  outC->_L103.nid_packet = outC->_L69;
  outC->_L103.l_packet = outC->_L70;
  outC->_L103.n_iter = outC->_L71;
  kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack(
    &outC->_L103.nid_radio,
    &outC->_L89);
  kcg_copy_P003_TM_TrainToTrack(&outC->P003_out, &outC->_L103);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void C_compr_P003_init_TM_TrainToTrack(outC_C_compr_P003_TM_TrainToTrack *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L108 = kcg_lit_int32(0);
  outC->_L107 = kcg_lit_int32(0);
  outC->_L106 = kcg_lit_int32(0);
  outC->_L105 = kcg_true;
  for (idx = 0; idx < 5; idx++) {
    outC->_L104[idx] = kcg_lit_int32(0);
  }
  outC->_L103.valid = kcg_true;
  outC->_L103.nid_packet = kcg_lit_int32(0);
  outC->_L103.l_packet = kcg_lit_int32(0);
  outC->_L103.n_iter = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L103.nid_radio[idx1] = kcg_lit_int32(0);
  }
  outC->_L98 = kcg_lit_int32(0);
  outC->_L99 = kcg_lit_int32(0);
  outC->_L100 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 3; idx2++) {
    outC->_L94[idx2] = kcg_lit_int32(0);
  }
  outC->_L71 = kcg_lit_int32(0);
  outC->_L70 = kcg_lit_int32(0);
  outC->_L69 = kcg_lit_int32(0);
  for (idx3 = 0; idx3 < 8; idx3++) {
    outC->_L1[idx3] = kcg_lit_int32(0);
  }
  outC->every = kcg_true;
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->_L89[idx4] = kcg_lit_int32(0);
  }
  outC->init = kcg_true;
  outC->P003_out.valid = kcg_true;
  outC->P003_out.nid_packet = kcg_lit_int32(0);
  outC->P003_out.l_packet = kcg_lit_int32(0);
  outC->P003_out.n_iter = kcg_lit_int32(0);
  for (idx5 = 0; idx5 < 5; idx5++) {
    outC->P003_out.nid_radio[idx5] = kcg_lit_int32(0);
  }
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_init_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_init_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L106=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L107=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L108=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_init_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
  C_P003_flatten_sections_init_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P003_flatten_sections_1);
  /* _L105=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_init_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void C_compr_P003_reset_TM_TrainToTrack(outC_C_compr_P003_TM_TrainToTrack *outC)
{
  outC->init = kcg_true;
  /* _L71=(TM_conversions::CAST_N_ITER_to_int#1)/ */
  CAST_N_ITER_to_int_reset_TM_conversions(&outC->Context_CAST_N_ITER_to_int_1);
  /* _L70=(TM_conversions::CAST_L_PACKET_to_int#1)/ */
  CAST_L_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_L_PACKET_to_int_1);
  /* _L69=(TM_conversions::CAST_NID_PACKET_to_int#1)/ */
  CAST_NID_PACKET_to_int_reset_TM_conversions(
    &outC->Context_CAST_NID_PACKET_to_int_1);
  /* _L106=(TM_TrainToTrack::Filter_Variable#1)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_1);
  /* _L107=(TM_TrainToTrack::Filter_Variable#2)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_2);
  /* _L108=(TM_TrainToTrack::Filter_Variable#3)/ */
  Filter_Variable_reset_TM_TrainToTrack(&outC->Context_Filter_Variable_3);
  /* _L89=(TM_TrainToTrack_lib_internal::C_P003_flatten_sections#1)/ */
  C_P003_flatten_sections_reset_TM_TrainToTrack_lib_internal(
    &outC->Context_C_P003_flatten_sections_1);
  /* _L105=(TM_TrainToTrack::Decode_NID_PACKET#1)/ */
  Decode_NID_PACKET_reset_TM_TrainToTrack(&outC->Context_Decode_NID_PACKET_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** C_compr_P003_TM_TrainToTrack.c
** Generation date: 2023-09-12T13:45:51
*************************************************************$ */

