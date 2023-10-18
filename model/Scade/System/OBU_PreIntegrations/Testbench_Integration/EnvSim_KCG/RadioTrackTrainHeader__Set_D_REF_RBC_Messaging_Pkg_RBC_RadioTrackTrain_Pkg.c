/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** Command: kcg662.exe -config C:/DBC/OpenETCS/modeling-Scade65Migration/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/EnvSim_KCG/config.txt
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainHeader__Set_D_REF/ */
void RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* inRadioTrackTrainHeader/ */
  Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* in_D_REF/ */
  kcg_int64 in_D_REF,
  outC_RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
  outC->_L2 = in_D_REF;
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L1, inRadioTrackTrainHeader);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&outC->_L3, &outC->_L1);
  if (kcg_true) {
    outC->_L3.d_ref = outC->_L2;
  }
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &outC->outRadioTrackTrainHeader,
    &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void RadioTrackTrainHeader__Set_D_REF_init_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
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
  outC->_L2 = kcg_lit_int64(0);
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
}
#endif /* KCG_USER_DEFINED_INIT */


void RadioTrackTrainHeader__Set_D_REF_reset_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  outC_RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6.2 (build i4) **********
** RadioTrackTrainHeader__Set_D_REF_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2023-10-13T16:12:12
*************************************************************$ */

