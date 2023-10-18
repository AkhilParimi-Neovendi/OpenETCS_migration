/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_M_ACK/ */
void RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* in_M_ACK/ */
  M_ACK in_M_ACK,
  outC_RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L2 = in_M_ACK;
  /* _L4=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_TM_conversions(
    outC->_L2,
    &outC->Context_CAST_M_ACK_to_int_1);
  outC->_L4 = outC->Context_CAST_M_ACK_to_int_1.m_ack_int;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L1, inRadioTrackTrainHeader);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.m_ack = outC->_L4;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->outRadioTrackTrainHeader,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainHeader__Set_M_ACK_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L4 = kcg_lit_int64(0);
  outC->_L3.radioDevice = kcg_lit_int64(0);
  outC->_L3.receivedSystemTime = kcg_lit_int64(0);
  outC->_L3.nid_message = kcg_lit_int64(0);
  outC->_L3.t_train = kcg_lit_int64(0);
  outC->_L3.m_ack = kcg_lit_int64(0);
  outC->_L3.nid_lrbg = kcg_lit_int64(0);
  outC->_L3.t_train_reference = kcg_lit_int64(0);
  outC->_L3.nid_em = kcg_lit_int64(0);
  outC->_L3.q_scale = kcg_lit_int64(0);
  outC->_L3.d_sr = kcg_lit_int64(0);
  outC->_L3.t_sh_rqst = kcg_lit_int64(0);
  outC->_L3.d_ref = kcg_lit_int64(0);
  outC->_L3.q_dir = kcg_lit_int64(0);
  outC->_L3.d_emergencystop = kcg_lit_int64(0);
  outC->_L3.m_version = kcg_lit_int64(0);
  outC->_L2 = M_ACK_No_acknowledgement_required;
  outC->_L1.radioDevice = kcg_lit_int64(0);
  outC->_L1.receivedSystemTime = kcg_lit_int64(0);
  outC->_L1.nid_message = kcg_lit_int64(0);
  outC->_L1.t_train = kcg_lit_int64(0);
  outC->_L1.m_ack = kcg_lit_int64(0);
  outC->_L1.nid_lrbg = kcg_lit_int64(0);
  outC->_L1.t_train_reference = kcg_lit_int64(0);
  outC->_L1.nid_em = kcg_lit_int64(0);
  outC->_L1.q_scale = kcg_lit_int64(0);
  outC->_L1.d_sr = kcg_lit_int64(0);
  outC->_L1.t_sh_rqst = kcg_lit_int64(0);
  outC->_L1.d_ref = kcg_lit_int64(0);
  outC->_L1.q_dir = kcg_lit_int64(0);
  outC->_L1.d_emergencystop = kcg_lit_int64(0);
  outC->_L1.m_version = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.radioDevice = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.receivedSystemTime = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.nid_message = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.t_train = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.m_ack = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.nid_lrbg = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.t_train_reference = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.nid_em = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.q_scale = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.d_sr = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.t_sh_rqst = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.d_ref = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.q_dir = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.d_emergencystop = kcg_lit_int64(0);
  outC->outRadioTrackTrainHeader.m_version = kcg_lit_int64(0);
  /* _L4=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_init_TM_conversions(&outC->Context_CAST_M_ACK_to_int_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainHeader__Set_M_ACK_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  /* _L4=(TM_conversions::CAST_M_ACK_to_int#1)/ */
  CAST_M_ACK_to_int_reset_TM_conversions(&outC->Context_CAST_M_ACK_to_int_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainHeader__Set_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

